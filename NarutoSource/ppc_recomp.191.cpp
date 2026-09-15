#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BFC2F0"))) PPC_WEAK_FUNC(sub_82BFC2F0);
PPC_FUNC_IMPL(__imp__sub_82BFC2F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bebcd8
	sub_82BEBCD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC2F4"))) PPC_WEAK_FUNC(sub_82BFC2F4);
PPC_FUNC_IMPL(__imp__sub_82BFC2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC2F8"))) PPC_WEAK_FUNC(sub_82BFC2F8);
PPC_FUNC_IMPL(__imp__sub_82BFC2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82bfc31c
	if (ctx.cr6.lt) goto loc_82BFC31C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82bfc320
	if (!ctx.cr6.gt) goto loc_82BFC320;
loc_82BFC31C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82BFC320:
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82bfa748
	sub_82BFA748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC338"))) PPC_WEAK_FUNC(sub_82BFC338);
PPC_FUNC_IMPL(__imp__sub_82BFC338) {
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
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x82BFC358;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc36c
	if (ctx.cr6.eq) goto loc_82BFC36C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFC36C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC37C"))) PPC_WEAK_FUNC(sub_82BFC37C);
PPC_FUNC_IMPL(__imp__sub_82BFC37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC380"))) PPC_WEAK_FUNC(sub_82BFC380);
PPC_FUNC_IMPL(__imp__sub_82BFC380) {
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
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x82BFC3A0;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc3b4
	if (ctx.cr6.eq) goto loc_82BFC3B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFC3B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC3C4"))) PPC_WEAK_FUNC(sub_82BFC3C4);
PPC_FUNC_IMPL(__imp__sub_82BFC3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC3C8"))) PPC_WEAK_FUNC(sub_82BFC3C8);
PPC_FUNC_IMPL(__imp__sub_82BFC3C8) {
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
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x82BFC3E8;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc3fc
	if (ctx.cr6.eq) goto loc_82BFC3FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFC3FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC40C"))) PPC_WEAK_FUNC(sub_82BFC40C);
PPC_FUNC_IMPL(__imp__sub_82BFC40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC410"))) PPC_WEAK_FUNC(sub_82BFC410);
PPC_FUNC_IMPL(__imp__sub_82BFC410) {
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
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x82BFC430;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc444
	if (ctx.cr6.eq) goto loc_82BFC444;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFC444:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC454"))) PPC_WEAK_FUNC(sub_82BFC454);
PPC_FUNC_IMPL(__imp__sub_82BFC454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC458"))) PPC_WEAK_FUNC(sub_82BFC458);
PPC_FUNC_IMPL(__imp__sub_82BFC458) {
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
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x82BFC478;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc48c
	if (ctx.cr6.eq) goto loc_82BFC48C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFC48C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC49C"))) PPC_WEAK_FUNC(sub_82BFC49C);
PPC_FUNC_IMPL(__imp__sub_82BFC49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC4A0"))) PPC_WEAK_FUNC(sub_82BFC4A0);
PPC_FUNC_IMPL(__imp__sub_82BFC4A0) {
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
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x82BFC4C0;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfc4d4
	if (ctx.cr6.eq) goto loc_82BFC4D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82BFC4D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC4E4"))) PPC_WEAK_FUNC(sub_82BFC4E4);
PPC_FUNC_IMPL(__imp__sub_82BFC4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC4E8"))) PPC_WEAK_FUNC(sub_82BFC4E8);
PPC_FUNC_IMPL(__imp__sub_82BFC4E8) {
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
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x82BFC508;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfc520
	if (!ctx.cr6.eq) goto loc_82BFC520;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BFC520:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC538"))) PPC_WEAK_FUNC(sub_82BFC538);
PPC_FUNC_IMPL(__imp__sub_82BFC538) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdb28
	ctx.lr = 0x82BFC558;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfc578
	if (!ctx.cr6.eq) goto loc_82BFC578;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BFC578:
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC58C"))) PPC_WEAK_FUNC(sub_82BFC58C);
PPC_FUNC_IMPL(__imp__sub_82BFC58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC590"))) PPC_WEAK_FUNC(sub_82BFC590);
PPC_FUNC_IMPL(__imp__sub_82BFC590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BFC598;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bbdb28
	ctx.lr = 0x82BFC5C0;
	sub_82BBDB28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfc5e8
	if (!ctx.cr6.eq) goto loc_82BFC5E8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bbdbb0
	ctx.lr = 0x82BFC5DC;
	sub_82BBDBB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BFC5E8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82bfc600
	if (!ctx.cr6.lt) goto loc_82BFC600;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82BFC600:
	// stfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC610"))) PPC_WEAK_FUNC(sub_82BFC610);
PPC_FUNC_IMPL(__imp__sub_82BFC610) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82BFC630:
	// addic. r4,r4,1
	ctx.xer.ca = ctx.r4.u32 > 4294967294;
	ctx.r4.s64 = ctx.r4.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82bfc630
	if (ctx.cr0.eq) goto loc_82BFC630;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bbdbb0
	ctx.lr = 0x82BFC644;
	sub_82BBDBB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfc65c
	if (!ctx.cr6.eq) goto loc_82BFC65C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BFC65C:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC670"))) PPC_WEAK_FUNC(sub_82BFC670);
PPC_FUNC_IMPL(__imp__sub_82BFC670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827c8e18
	sub_827C8E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC680"))) PPC_WEAK_FUNC(sub_82BFC680);
PPC_FUNC_IMPL(__imp__sub_82BFC680) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bfc690
	if (ctx.cr6.eq) goto loc_82BFC690;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// b 0x82bfc698
	goto loc_82BFC698;
loc_82BFC690:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r4,r11,18128
	ctx.r4.s64 = ctx.r11.s64 + 18128;
loc_82BFC698:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x82bfc6c8
	if (ctx.cr6.lt) goto loc_82BFC6C8;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bgt cr6,0x82bfc6c8
	if (ctx.cr6.gt) goto loc_82BFC6C8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x827c9130
	sub_827C9130(ctx, base);
	return;
loc_82BFC6C8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827c9078
	sub_827C9078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC6DC"))) PPC_WEAK_FUNC(sub_82BFC6DC);
PPC_FUNC_IMPL(__imp__sub_82BFC6DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC6E0"))) PPC_WEAK_FUNC(sub_82BFC6E0);
PPC_FUNC_IMPL(__imp__sub_82BFC6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827caf78
	sub_827CAF78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC6F4"))) PPC_WEAK_FUNC(sub_82BFC6F4);
PPC_FUNC_IMPL(__imp__sub_82BFC6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC6F8"))) PPC_WEAK_FUNC(sub_82BFC6F8);
PPC_FUNC_IMPL(__imp__sub_82BFC6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827cb068
	sub_827CB068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC70C"))) PPC_WEAK_FUNC(sub_82BFC70C);
PPC_FUNC_IMPL(__imp__sub_82BFC70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC710"))) PPC_WEAK_FUNC(sub_82BFC710);
PPC_FUNC_IMPL(__imp__sub_82BFC710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827caad8
	sub_827CAAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC720"))) PPC_WEAK_FUNC(sub_82BFC720);
PPC_FUNC_IMPL(__imp__sub_82BFC720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827ca6c8
	sub_827CA6C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC730"))) PPC_WEAK_FUNC(sub_82BFC730);
PPC_FUNC_IMPL(__imp__sub_82BFC730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827cab58
	sub_827CAB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC740"))) PPC_WEAK_FUNC(sub_82BFC740);
PPC_FUNC_IMPL(__imp__sub_82BFC740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827ca748
	sub_827CA748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC758"))) PPC_WEAK_FUNC(sub_82BFC758);
PPC_FUNC_IMPL(__imp__sub_82BFC758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827ca5e8
	sub_827CA5E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC768"))) PPC_WEAK_FUNC(sub_82BFC768);
PPC_FUNC_IMPL(__imp__sub_82BFC768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827ca658
	sub_827CA658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC778"))) PPC_WEAK_FUNC(sub_82BFC778);
PPC_FUNC_IMPL(__imp__sub_82BFC778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827caa68
	sub_827CAA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC788"))) PPC_WEAK_FUNC(sub_82BFC788);
PPC_FUNC_IMPL(__imp__sub_82BFC788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BFC790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r31,r11,-15760
	ctx.r31.s64 = ctx.r11.s64 + -15760;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// lwz r30,13592(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13592);
	// bl 0x82c09bec
	ctx.lr = 0x82BFC7B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ca518
	ctx.lr = 0x82BFC7BC;
	sub_827CA518(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bfc7cc
	if (ctx.cr6.eq) goto loc_82BFC7CC;
	// bl 0x82759e48
	ctx.lr = 0x82BFC7CC;
	sub_82759E48(ctx, base);
loc_82BFC7CC:
	// addi r3,r31,896
	ctx.r3.s64 = ctx.r31.s64 + 896;
	// bl 0x82c09bdc
	ctx.lr = 0x82BFC7D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC7DC"))) PPC_WEAK_FUNC(sub_82BFC7DC);
PPC_FUNC_IMPL(__imp__sub_82BFC7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC7E0"))) PPC_WEAK_FUNC(sub_82BFC7E0);
PPC_FUNC_IMPL(__imp__sub_82BFC7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827cad10
	sub_827CAD10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC7F4"))) PPC_WEAK_FUNC(sub_82BFC7F4);
PPC_FUNC_IMPL(__imp__sub_82BFC7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC7F8"))) PPC_WEAK_FUNC(sub_82BFC7F8);
PPC_FUNC_IMPL(__imp__sub_82BFC7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827ca9b8
	sub_827CA9B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC808"))) PPC_WEAK_FUNC(sub_82BFC808);
PPC_FUNC_IMPL(__imp__sub_82BFC808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827ca870
	sub_827CA870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC818"))) PPC_WEAK_FUNC(sub_82BFC818);
PPC_FUNC_IMPL(__imp__sub_82BFC818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827ca918
	sub_827CA918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC828"))) PPC_WEAK_FUNC(sub_82BFC828);
PPC_FUNC_IMPL(__imp__sub_82BFC828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827cabe0
	sub_827CABE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC838"))) PPC_WEAK_FUNC(sub_82BFC838);
PPC_FUNC_IMPL(__imp__sub_82BFC838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827cac68
	sub_827CAC68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC848"))) PPC_WEAK_FUNC(sub_82BFC848);
PPC_FUNC_IMPL(__imp__sub_82BFC848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827cad70
	sub_827CAD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC858"))) PPC_WEAK_FUNC(sub_82BFC858);
PPC_FUNC_IMPL(__imp__sub_82BFC858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827cae00
	sub_827CAE00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC868"))) PPC_WEAK_FUNC(sub_82BFC868);
PPC_FUNC_IMPL(__imp__sub_82BFC868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827cb0d0
	sub_827CB0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC87C"))) PPC_WEAK_FUNC(sub_82BFC87C);
PPC_FUNC_IMPL(__imp__sub_82BFC87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC880"))) PPC_WEAK_FUNC(sub_82BFC880);
PPC_FUNC_IMPL(__imp__sub_82BFC880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// b 0x827cb4d0
	sub_827CB4D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFC890"))) PPC_WEAK_FUNC(sub_82BFC890);
PPC_FUNC_IMPL(__imp__sub_82BFC890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfc8b0
	if (ctx.cr6.eq) goto loc_82BFC8B0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfc8b0
	if (ctx.cr6.eq) goto loc_82BFC8B0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_82BFC8B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFC8B8"))) PPC_WEAK_FUNC(sub_82BFC8B8);
PPC_FUNC_IMPL(__imp__sub_82BFC8B8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bfc8e0
	if (!ctx.cr6.eq) goto loc_82BFC8E0;
loc_82BFC8D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bfc954
	goto loc_82BFC954;
loc_82BFC8E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BFC8E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfc8e4
	if (!ctx.cr6.eq) goto loc_82BFC8E4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bfc8d8
	if (ctx.cr6.eq) goto loc_82BFC8D8;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bfc924
	if (ctx.cr6.eq) goto loc_82BFC924;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfc928
	if (ctx.cr6.eq) goto loc_82BFC928;
loc_82BFC924:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BFC928:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82218b20
	ctx.lr = 0x82BFC934;
	sub_82218B20(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x8221b9e0
	ctx.lr = 0x82BFC94C;
	sub_8221B9E0(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_82BFC954:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_82BFC96C"))) PPC_WEAK_FUNC(sub_82BFC96C);
PPC_FUNC_IMPL(__imp__sub_82BFC96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFC970"))) PPC_WEAK_FUNC(sub_82BFC970);
PPC_FUNC_IMPL(__imp__sub_82BFC970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BFC978;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x827f5a90
	ctx.lr = 0x82BFC9A4;
	sub_827F5A90(ctx, base);
	// lbz r9,15(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r9,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// beq cr6,0x82bfcaac
	if (ctx.cr6.eq) goto loc_82BFCAAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BFC9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// beq cr6,0x82bfcaac
	if (ctx.cr6.eq) goto loc_82BFCAAC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82218b20
	ctx.lr = 0x82BFCA1C;
	sub_82218B20(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8221b330
	ctx.lr = 0x82BFCA28;
	sub_8221B330(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfca40
	if (ctx.cr6.eq) goto loc_82BFCA40;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f5a90
	ctx.lr = 0x82BFCA40;
	sub_827F5A90(ctx, base);
loc_82BFCA40:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfca60
	if (ctx.cr6.eq) goto loc_82BFCA60;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bfca60
	if (!ctx.cr6.eq) goto loc_82BFCA60;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82BFCA60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f5158
	ctx.lr = 0x82BFCA68;
	sub_827F5158(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfcb14
	if (ctx.cr6.eq) goto loc_82BFCB14;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r9,r9,14560
	ctx.r9.s64 = ctx.r9.s64 + 14560;
loc_82BFCA80:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r5,r11,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r4,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// bne 0x82bfca80
	if (!ctx.cr0.eq) goto loc_82BFCA80;
	// b 0x82bfcb14
	goto loc_82BFCB14;
loc_82BFCAAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfcacc
	if (ctx.cr6.eq) goto loc_82BFCACC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bfcacc
	if (!ctx.cr6.eq) goto loc_82BFCACC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82BFCACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5158
	ctx.lr = 0x82BFCAD4;
	sub_827F5158(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfcb14
	if (ctx.cr6.eq) goto loc_82BFCB14;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r9,r9,14560
	ctx.r9.s64 = ctx.r9.s64 + 14560;
loc_82BFCAEC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r5,r11,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r4,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// bne 0x82bfcaec
	if (!ctx.cr0.eq) goto loc_82BFCAEC;
loc_82BFCB14:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCB2C"))) PPC_WEAK_FUNC(sub_82BFCB2C);
PPC_FUNC_IMPL(__imp__sub_82BFCB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFCB30"))) PPC_WEAK_FUNC(sub_82BFCB30);
PPC_FUNC_IMPL(__imp__sub_82BFCB30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,13434
	ctx.r3.s64 = ctx.r11.s64 + 13434;
	// bl 0x82123130
	ctx.lr = 0x82BFCB54;
	sub_82123130(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfcb80
	if (ctx.cr6.eq) goto loc_82BFCB80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bf5ef0
	ctx.lr = 0x82BFCB70;
	sub_82BF5EF0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-23364
	ctx.r4.s64 = ctx.r11.s64 + -23364;
	// bl 0x827f5e90
	ctx.lr = 0x82BFCB80;
	sub_827F5E90(ctx, base);
loc_82BFCB80:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bfcb9c
	if (ctx.cr6.eq) goto loc_82BFCB9C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfcba0
	if (ctx.cr6.eq) goto loc_82BFCBA0;
loc_82BFCB9C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BFCBA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f5e90
	ctx.lr = 0x82BFCBA8;
	sub_827F5E90(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfcbd4
	if (ctx.cr6.eq) goto loc_82BFCBD4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-23296
	ctx.r4.s64 = ctx.r11.s64 + -23296;
	// bl 0x827f5e90
	ctx.lr = 0x82BFCBC4;
	sub_827F5E90(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x827f5e90
	ctx.lr = 0x82BFCBD4;
	sub_827F5E90(ctx, base);
loc_82BFCBD4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfcbf0
	if (ctx.cr6.eq) goto loc_82BFCBF0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfcbf4
	if (ctx.cr6.eq) goto loc_82BFCBF4;
loc_82BFCBF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BFCBF4:
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

__attribute__((alias("__imp__sub_82BFCC0C"))) PPC_WEAK_FUNC(sub_82BFCC0C);
PPC_FUNC_IMPL(__imp__sub_82BFCC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFCC10"))) PPC_WEAK_FUNC(sub_82BFCC10);
PPC_FUNC_IMPL(__imp__sub_82BFCC10) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bfcc98
	if (ctx.cr6.eq) goto loc_82BFCC98;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bfcc98
	if (ctx.cr6.eq) goto loc_82BFCC98;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// rlwinm r9,r5,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,12716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12716);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bfcc4c
	if (!ctx.cr6.lt) goto loc_82BFCC4C;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r9,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bfcc4c
	if (ctx.cr6.eq) goto loc_82BFCC4C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BFCC4C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfcc98
	if (ctx.cr6.eq) goto loc_82BFCC98;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r3,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r3.u32);
	// lbz r11,-15(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r10,-14(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// lbz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// lbz r8,-13(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -13);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r9.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BFCC98:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFCCA0"))) PPC_WEAK_FUNC(sub_82BFCCA0);
PPC_FUNC_IMPL(__imp__sub_82BFCCA0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r30,r31,368
	ctx.r30.s64 = ctx.r31.s64 + 368;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82121a50
	ctx.lr = 0x82BFCCD0;
	sub_82121A50(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,372(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfccf0
	if (ctx.cr6.eq) goto loc_82BFCCF0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bfccf4
	if (ctx.cr6.eq) goto loc_82BFCCF4;
loc_82BFCCF0:
	// twi 31,r0,22
loc_82BFCCF4:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bfcd08
	if (!ctx.cr6.eq) goto loc_82BFCD08;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bfcd28
	goto loc_82BFCD28;
loc_82BFCD08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfcd14
	if (!ctx.cr6.eq) goto loc_82BFCD14;
	// twi 31,r0,22
loc_82BFCD14:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bfcd24
	if (!ctx.cr6.eq) goto loc_82BFCD24;
	// twi 31,r0,22
loc_82BFCD24:
	// ld r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
loc_82BFCD28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82BFCD40"))) PPC_WEAK_FUNC(sub_82BFCD40);
PPC_FUNC_IMPL(__imp__sub_82BFCD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BFCD48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82bfcca0
	ctx.lr = 0x82BFCD5C;
	sub_82BFCCA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82bc5de0
	ctx.lr = 0x82BFCD6C;
	sub_82BC5DE0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BFCD7C;
	sub_82BC5C68(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfcdac
	if (ctx.cr6.eq) goto loc_82BFCDAC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82BFCDAC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r5,r11,1
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// rlwinm r28,r11,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bfce48
	if (ctx.cr6.eq) goto loc_82BFCE48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// bl 0x82120040
	ctx.lr = 0x82BFCDD4;
	sub_82120040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BFCDE8;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82bfce38
	if (ctx.cr6.eq) goto loc_82BFCE38;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82bfce18
	if (ctx.cr6.eq) goto loc_82BFCE18;
loc_82BFCE04:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82bfce04
	if (!ctx.cr6.eq) goto loc_82BFCE04;
loc_82BFCE18:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x82218c20
	ctx.lr = 0x82BFCE38;
	sub_82218C20(ctx, base);
loc_82BFCE38:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BFCE48:
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82bfce80
	if (ctx.cr6.eq) goto loc_82BFCE80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bfcc10
	ctx.lr = 0x82BFCE60;
	sub_82BFCC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bfcd40
	ctx.lr = 0x82BFCE78;
	sub_82BFCD40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BFCE80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFCE8C"))) PPC_WEAK_FUNC(sub_82BFCE8C);
PPC_FUNC_IMPL(__imp__sub_82BFCE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFCE90"))) PPC_WEAK_FUNC(sub_82BFCE90);
PPC_FUNC_IMPL(__imp__sub_82BFCE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82BFCE98;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,992(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 992);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfcf20
	if (ctx.cr6.eq) goto loc_82BFCF20;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r11,996(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 996);
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// ld r31,12680(r30)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r30.u32 + 12680);
	// subf r7,r31,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// ble cr6,0x82bfcee8
	if (!ctx.cr6.gt) goto loc_82BFCEE8;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// subf r28,r9,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82BFCEE8:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82bfcef4
	if (!ctx.cr6.gt) goto loc_82BFCEF4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82BFCEF4:
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82219130
	ctx.lr = 0x82BFCF08;
	sub_82219130(ctx, base);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// std r11,12680(r30)
	PPC_STORE_U64(ctx.r30.u32 + 12680, ctx.r11.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82BFCF20:
	// lwz r3,380(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 380);
	// bl 0x82268de0
	ctx.lr = 0x82BFCF28;
	sub_82268DE0(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82bfcf3c
	if (!ctx.cr6.lt) goto loc_82BFCF3C;
	// lwz r3,380(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 380);
	// bl 0x82268de0
	ctx.lr = 0x82BFCF38;
	sub_82268DE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82BFCF3C:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82bfcf48
	if (!ctx.cr6.gt) goto loc_82BFCF48;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82BFCF48:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bfd0b4
	if (ctx.cr6.eq) goto loc_82BFD0B4;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// li r20,1
	ctx.r20.s64 = 1;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
loc_82BFCF60:
	// lwz r10,13316(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13316);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfcfb0
	if (ctx.cr6.eq) goto loc_82BFCFB0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfcfb0
	if (ctx.cr6.eq) goto loc_82BFCFB0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfcfb0
	if (ctx.cr6.eq) goto loc_82BFCFB0;
	// lwz r9,1108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// addi r9,r9,270
	ctx.r9.s64 = ctx.r9.s64 + 270;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82bfcfb0
	if (ctx.cr6.eq) goto loc_82BFCFB0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82208ce0
	ctx.lr = 0x82BFCFB0;
	sub_82208CE0(ctx, base);
loc_82BFCFB0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,380(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 380);
	// add r4,r26,r22
	ctx.r4.u64 = ctx.r26.u64 + ctx.r22.u64;
	// bl 0x82215668
	ctx.lr = 0x82BFCFC0;
	sub_82215668(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bfd0a0
	if (!ctx.cr6.eq) goto loc_82BFD0A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// bl 0x821ef640
	ctx.lr = 0x82BFCFD8;
	sub_821EF640(ctx, base);
	// cmplwi cr6,r25,100
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 100, ctx.xer);
	// ble cr6,0x82bfd0a8
	if (!ctx.cr6.gt) goto loc_82BFD0A8;
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfd038
	if (ctx.cr6.eq) goto loc_82BFD038;
	// lwz r11,12452(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfd0a8
	if (ctx.cr6.eq) goto loc_82BFD0A8;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bfd0a8
	if (ctx.cr6.eq) goto loc_82BFD0A8;
	// lwz r11,12704(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12704);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bfd0a8
	if (ctx.cr6.eq) goto loc_82BFD0A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82BFD038:
	// cmplwi cr6,r25,4000
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4000, ctx.xer);
	// ble cr6,0x82bfd0a8
	if (!ctx.cr6.gt) goto loc_82BFD0A8;
	// lwz r31,12452(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bfd07c
	if (ctx.cr6.eq) goto loc_82BFD07C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BFD05C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82bfd098
	if (ctx.cr6.eq) goto loc_82BFD098;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bfd05c
	if (ctx.cr6.lt) goto loc_82BFD05C;
loc_82BFD07C:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,22303
	ctx.r5.s64 = 22303;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bc94e8
	ctx.lr = 0x82BFD08C;
	sub_82BC94E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf6560
	ctx.lr = 0x82BFD098;
	sub_82BF6560(ctx, base);
loc_82BFD098:
	// stw r20,384(r27)
	PPC_STORE_U32(ctx.r27.u32 + 384, ctx.r20.u32);
	// b 0x82bfd0a8
	goto loc_82BFD0A8;
loc_82BFD0A0:
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r21,384(r27)
	PPC_STORE_U32(ctx.r27.u32 + 384, ctx.r21.u32);
loc_82BFD0A8:
	// subf. r28,r30,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r26,r30,r26
	ctx.r26.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x82bfcf60
	if (!ctx.cr0.eq) goto loc_82BFCF60;
loc_82BFD0B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD0C0"))) PPC_WEAK_FUNC(sub_82BFD0C0);
PPC_FUNC_IMPL(__imp__sub_82BFD0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x82BFD0C8;
	__savegprlr_15(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r18,-31942
	ctx.r18.s64 = -2093350912;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// lwz r11,12500(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfd27c
	if (!ctx.cr6.eq) goto loc_82BFD27C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// addi r8,r11,-21904
	ctx.r8.s64 = ctx.r11.s64 + -21904;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addis r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 3145728;
	// addis r9,r8,48
	ctx.r9.s64 = ctx.r8.s64 + 3145728;
	// stw r11,12500(r18)
	PPC_STORE_U32(ctx.r18.u32 + 12500, ctx.r11.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stw r10,12688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12688, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r9,12692(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12692, ctx.r9.u32);
	// addis r5,r8,48
	ctx.r5.s64 = ctx.r8.s64 + 3145728;
	// bl 0x82bfce90
	ctx.lr = 0x82BFD120;
	sub_82BFCE90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bfd130
	if (!ctx.cr6.eq) goto loc_82BFD130;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
loc_82BFD130:
	// lwz r5,12688(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12688);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r11,r11,12640
	ctx.r11.s64 = ctx.r11.s64 + 12640;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,12456(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12456);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82bfd178
	if (ctx.cr6.eq) goto loc_82BFD178;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82BFD178:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r9,12696(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12696);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82bfd18c
	if (ctx.cr6.eq) goto loc_82BFD18C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82BFD18C:
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// addi r7,r8,12644
	ctx.r7.s64 = ctx.r8.s64 + 12644;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// bgt cr6,0x82bfd1a8
	if (ctx.cr6.gt) goto loc_82BFD1A8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82BFD1A8:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// subf. r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r10,12648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12648, ctx.r10.u32);
	// ble 0x82bfd1d8
	if (!ctx.cr0.gt) goto loc_82BFD1D8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82bfd1e8
	if (!ctx.cr6.lt) goto loc_82BFD1E8;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// b 0x82bfd1f0
	goto loc_82BFD1F0;
loc_82BFD1D8:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// b 0x82bfd1f0
	goto loc_82BFD1F0;
loc_82BFD1E8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82BFD1F0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r9,12500(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12500);
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r19,r11,12664
	ctx.r19.s64 = ctx.r11.s64 + 12664;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// std r11,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r11.u64);
	// bge cr6,0x82bfd22c
	if (!ctx.cr6.lt) goto loc_82BFD22C;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82bfd250
	if (!ctx.cr6.gt) goto loc_82BFD250;
	// subf r6,r3,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r3.s64;
	// b 0x82bfd230
	goto loc_82BFD230;
loc_82BFD22C:
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
loc_82BFD230:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82bfd250
	if (ctx.cr6.eq) goto loc_82BFD250;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82bfce90
	ctx.lr = 0x82BFD248;
	sub_82BFCE90(ctx, base);
	// lwz r5,12688(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12688);
	// lwz r10,12648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12648);
loc_82BFD250:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// add r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,12660(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12660);
	// bl 0x82bbd8d0
	ctx.lr = 0x82BFD264;
	sub_82BBD8D0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r3,12652(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12652, ctx.r3.u32);
	// stw r10,12656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12656, ctx.r10.u32);
	// b 0x82bfd414
	goto loc_82BFD414;
loc_82BFD27C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// addi r19,r11,12664
	ctx.r19.s64 = ctx.r11.s64 + 12664;
	// extsw r9,r17
	ctx.r9.s64 = ctx.r17.s32;
	// ld r11,12664(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12664);
	// lwz r10,12656(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12656);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// ble cr6,0x82bfd418
	if (!ctx.cr6.gt) goto loc_82BFD418;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf. r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,12656(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12656, ctx.r5.u32);
	// beq 0x82bfd2c8
	if (ctx.cr0.eq) goto loc_82BFD2C8;
	// lwz r10,12500(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12500);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82218c20
	ctx.lr = 0x82BFD2C4;
	sub_82218C20(ctx, base);
	// lwz r5,12656(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12656);
loc_82BFD2C8:
	// li r20,0
	ctx.r20.s64 = 0;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lis r21,4
	ctx.r21.s64 = 262144;
	// std r11,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r11.u64);
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r4,12652(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12652);
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
loc_82BFD2F8:
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lwz r10,12648(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12648);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,12688(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12688);
	// subf r8,r4,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r4.s64;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// rotlwi r6,r3,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// or r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r8,r3,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r9,r7,1
	ctx.r9.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addi r6,r9,8
	ctx.r6.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82bfd3cc
	if (!ctx.cr6.lt) goto loc_82BFD3CC;
	// lwz r30,12692(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12692);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82BFD358;
	sub_82219130(ctx, base);
	// lwz r6,12640(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12640);
	// add r5,r30,r31
	ctx.r5.u64 = ctx.r30.u64 + ctx.r31.u64;
	// subf r11,r31,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r31.s64;
	// stw r5,12688(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12688, ctx.r5.u32);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bfd374
	if (ctx.cr6.lt) goto loc_82BFD374;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82BFD374:
	// stw r6,12644(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12644, ctx.r6.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r6,12648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12648, ctx.r6.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82bfce90
	ctx.lr = 0x82BFD388;
	sub_82BFCE90(ctx, base);
	// lwz r11,12644(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12644);
	// lwz r10,12640(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12640);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82bfd440
	if (!ctx.cr0.gt) goto loc_82BFD440;
	// stw r11,12640(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12640, ctx.r11.u32);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x82bfd3a8
	if (ctx.cr6.lt) goto loc_82BFD3A8;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82BFD3A8:
	// stw r11,12644(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12644, ctx.r11.u32);
	// lwz r11,12692(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12692);
	// lwz r10,12648(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12648);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r5,12656(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12656);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r4,12652(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12652, ctx.r4.u32);
	// stw r11,12688(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12688, ctx.r11.u32);
	// stw r10,12648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12648, ctx.r10.u32);
loc_82BFD3CC:
	// lwz r9,12500(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12500);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r5,r9
	ctx.r10.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// lwz r11,12660(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12660);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r5,r5,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r5.s64;
	// bl 0x82bbd8d0
	ctx.lr = 0x82BFD3F4;
	sub_82BBD8D0(ctx, base);
	// lwz r11,12656(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12656);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,12652(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12652, ctx.r4.u32);
	// stw r5,12656(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12656, ctx.r5.u32);
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x82bfd2f8
	if (ctx.cr6.lt) goto loc_82BFD2F8;
loc_82BFD414:
	// ld r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
loc_82BFD418:
	// lwz r8,12500(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12500);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// extsw r10,r17
	ctx.r10.s64 = ctx.r17.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r11.u64);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
loc_82BFD440:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r11,12640(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12640, ctx.r11.u32);
	// b 0x82bfd3a8
	goto loc_82BFD3A8;
}

__attribute__((alias("__imp__sub_82BFD44C"))) PPC_WEAK_FUNC(sub_82BFD44C);
PPC_FUNC_IMPL(__imp__sub_82BFD44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFD450"))) PPC_WEAK_FUNC(sub_82BFD450);
PPC_FUNC_IMPL(__imp__sub_82BFD450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82BFD458;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,12496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12496);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bfd4a4
	if (!ctx.cr6.eq) goto loc_82BFD4A4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcde08
	ctx.lr = 0x82BFD494;
	sub_82BCDE08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfd5a8
	if (ctx.cr6.eq) goto loc_82BFD5A8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82BFD4A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bfcca0
	ctx.lr = 0x82BFD4AC;
	sub_82BFCCA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5de0
	ctx.lr = 0x82BFD4BC;
	sub_82BC5DE0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82c01428
	ctx.lr = 0x82BFD4C4;
	sub_82C01428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BFD4D8;
	sub_82BC5C68(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12456);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bfd514
	if (ctx.cr6.eq) goto loc_82BFD514;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BFD514:
	// rlwinm r27,r11,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r29,r11,1
	ctx.r29.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// bne cr6,0x82bfd53c
	if (!ctx.cr6.eq) goto loc_82BFD53C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcde08
	ctx.lr = 0x82BFD53C;
	sub_82BCDE08(ctx, base);
loc_82BFD53C:
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x82c01428
	ctx.lr = 0x82BFD544;
	sub_82C01428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bfd564
	if (ctx.cr6.eq) goto loc_82BFD564;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BFD560;
	sub_82BC5C68(ctx, base);
	// stbx r25,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r25.u8);
loc_82BFD564:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82bfd5a8
	if (ctx.cr6.eq) goto loc_82BFD5A8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bfcc10
	ctx.lr = 0x82BFD57C;
	sub_82BFCC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82bfd5a4
	if (ctx.cr6.eq) goto loc_82BFD5A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82BFD59C;
	sub_82BFD450(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82bfd5a8
	goto loc_82BFD5A8;
loc_82BFD5A4:
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
loc_82BFD5A8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82bfd600
	if (ctx.cr6.eq) goto loc_82BFD600;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bfd600
	if (ctx.cr6.eq) goto loc_82BFD600;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bfd600
	if (ctx.cr6.eq) goto loc_82BFD600;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82bfd5ec
	if (ctx.cr6.eq) goto loc_82BFD5EC;
loc_82BFD5D8:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x82bfd5d8
	if (!ctx.cr6.eq) goto loc_82BFD5D8;
loc_82BFD5EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_82BFD600:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD60C"))) PPC_WEAK_FUNC(sub_82BFD60C);
PPC_FUNC_IMPL(__imp__sub_82BFD60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFD610"))) PPC_WEAK_FUNC(sub_82BFD610);
PPC_FUNC_IMPL(__imp__sub_82BFD610) {
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
	// bl 0x82bca578
	ctx.lr = 0x82BFD62C;
	sub_82BCA578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BFD634:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfd634
	if (!ctx.cr6.eq) goto loc_82BFD634;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x82bfd678
	if (!ctx.cr6.gt) goto loc_82BFD678;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,-3
	ctx.r3.s64 = ctx.r11.s64 + -3;
	// addi r4,r10,-23372
	ctx.r4.s64 = ctx.r10.s64 + -23372;
	// bl 0x8221b9e0
	ctx.lr = 0x82BFD66C;
	sub_8221B9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// beq cr6,0x82bfd67c
	if (ctx.cr6.eq) goto loc_82BFD67C;
loc_82BFD678:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BFD67C:
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

__attribute__((alias("__imp__sub_82BFD694"))) PPC_WEAK_FUNC(sub_82BFD694);
PPC_FUNC_IMPL(__imp__sub_82BFD694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFD698"))) PPC_WEAK_FUNC(sub_82BFD698);
PPC_FUNC_IMPL(__imp__sub_82BFD698) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13400);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd6c4
	if (ctx.cr6.eq) goto loc_82BFD6C4;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82BFD6C4:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfd6e4
	if (ctx.cr6.eq) goto loc_82BFD6E4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfd6e8
	if (ctx.cr6.eq) goto loc_82BFD6E8;
loc_82BFD6E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BFD6E8:
	// bl 0x8221b9e0
	ctx.lr = 0x82BFD6EC;
	sub_8221B9E0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFD704"))) PPC_WEAK_FUNC(sub_82BFD704);
PPC_FUNC_IMPL(__imp__sub_82BFD704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFD708"))) PPC_WEAK_FUNC(sub_82BFD708);
PPC_FUNC_IMPL(__imp__sub_82BFD708) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13400);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd734
	if (ctx.cr6.eq) goto loc_82BFD734;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82BFD734:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfd754
	if (ctx.cr6.eq) goto loc_82BFD754;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfd758
	if (ctx.cr6.eq) goto loc_82BFD758;
loc_82BFD754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BFD758:
	// bl 0x8221b9e0
	ctx.lr = 0x82BFD75C;
	sub_8221B9E0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFD774"))) PPC_WEAK_FUNC(sub_82BFD774);
PPC_FUNC_IMPL(__imp__sub_82BFD774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFD778"))) PPC_WEAK_FUNC(sub_82BFD778);
PPC_FUNC_IMPL(__imp__sub_82BFD778) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82bca500
	sub_82BCA500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD780"))) PPC_WEAK_FUNC(sub_82BFD780);
PPC_FUNC_IMPL(__imp__sub_82BFD780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BFD788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bfd7c8
	if (ctx.cr6.eq) goto loc_82BFD7C8;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82c05d78
	ctx.lr = 0x82BFD7A8;
	sub_82C05D78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfd7cc
	if (!ctx.cr6.eq) goto loc_82BFD7CC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82bf5c98
	ctx.lr = 0x82BFD7C0;
	sub_82BF5C98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BFD7C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BFD7CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD7D4"))) PPC_WEAK_FUNC(sub_82BFD7D4);
PPC_FUNC_IMPL(__imp__sub_82BFD7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFD7D8"))) PPC_WEAK_FUNC(sub_82BFD7D8);
PPC_FUNC_IMPL(__imp__sub_82BFD7D8) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfd82c
	if (ctx.cr6.eq) goto loc_82BFD82C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfd82c
	if (ctx.cr6.eq) goto loc_82BFD82C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfd820
	if (ctx.cr6.eq) goto loc_82BFD820;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfd824
	if (ctx.cr6.eq) goto loc_82BFD824;
loc_82BFD820:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BFD824:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222ef00
	ctx.lr = 0x82BFD82C;
	sub_8222EF00(ctx, base);
loc_82BFD82C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x827f5600
	ctx.lr = 0x82BFD838;
	sub_827F5600(ctx, base);
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

__attribute__((alias("__imp__sub_82BFD84C"))) PPC_WEAK_FUNC(sub_82BFD84C);
PPC_FUNC_IMPL(__imp__sub_82BFD84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFD850"))) PPC_WEAK_FUNC(sub_82BFD850);
PPC_FUNC_IMPL(__imp__sub_82BFD850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BFD858;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bfd890
	if (ctx.cr6.eq) goto loc_82BFD890;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82bf5bf8
	ctx.lr = 0x82BFD87C;
	sub_82BF5BF8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82c05f90
	ctx.lr = 0x82BFD890;
	sub_82C05F90(ctx, base);
loc_82BFD890:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFD898"))) PPC_WEAK_FUNC(sub_82BFD898);
PPC_FUNC_IMPL(__imp__sub_82BFD898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82BFD8A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lbz r8,19(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// addi r4,r9,-23520
	ctx.r4.s64 = ctx.r9.s64 + -23520;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bl 0x827f5a90
	ctx.lr = 0x82BFD900;
	sub_827F5A90(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r5,-12388
	ctx.r5.s64 = ctx.r5.s64 + -12388;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82219f10
	ctx.lr = 0x82BFD918;
	sub_82219F10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827f5e90
	ctx.lr = 0x82BFD924;
	sub_827F5E90(ctx, base);
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82218a80
	ctx.lr = 0x82BFD938;
	sub_82218A80(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// beq cr6,0x82bfd978
	if (ctx.cr6.eq) goto loc_82BFD978;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BFD950:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfd950
	if (!ctx.cr6.eq) goto loc_82BFD950;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82219130
	ctx.lr = 0x82BFD978;
	sub_82219130(ctx, base);
loc_82BFD978:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bfd994
	if (ctx.cr6.eq) goto loc_82BFD994;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfd998
	if (ctx.cr6.eq) goto loc_82BFD998;
loc_82BFD994:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BFD998:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222efb8
	ctx.lr = 0x82BFD9B4;
	sub_8222EFB8(ctx, base);
	// cmplwi cr6,r3,1392
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1392, ctx.xer);
	// bne cr6,0x82bfd9c0
	if (!ctx.cr6.eq) goto loc_82BFD9C0;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82BFD9C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bfd9d4
	if (!ctx.cr6.eq) goto loc_82BFD9D4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82bfd9f4
	goto loc_82BFD9F4;
loc_82BFD9D4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfd9ec
	if (ctx.cr6.eq) goto loc_82BFD9EC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82bfd9f4
	goto loc_82BFD9F4;
loc_82BFD9EC:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82BFD9F4:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82120040
	ctx.lr = 0x82BFDA04;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfda3c
	if (ctx.cr6.eq) goto loc_82BFDA3C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bfda28
	if (ctx.cr6.eq) goto loc_82BFDA28;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfda2c
	if (ctx.cr6.eq) goto loc_82BFDA2C;
loc_82BFDA28:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BFDA2C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82bf5f50
	ctx.lr = 0x82BFDA38;
	sub_82BF5F50(ctx, base);
	// b 0x82bfda40
	goto loc_82BFDA40;
loc_82BFDA3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82BFDA40:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bf6088
	ctx.lr = 0x82BFDA4C;
	sub_82BF6088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827f5600
	ctx.lr = 0x82BFDA58;
	sub_827F5600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDA64"))) PPC_WEAK_FUNC(sub_82BFDA64);
PPC_FUNC_IMPL(__imp__sub_82BFDA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFDA68"))) PPC_WEAK_FUNC(sub_82BFDA68);
PPC_FUNC_IMPL(__imp__sub_82BFDA68) {
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
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lbz r9,19(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// rlwinm r8,r9,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// xori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82120040
	ctx.lr = 0x82BFDAD0;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfdaf0
	if (ctx.cr6.eq) goto loc_82BFDAF0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,13616
	ctx.r4.s64 = ctx.r11.s64 + 13616;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82bf5f50
	ctx.lr = 0x82BFDAEC;
	sub_82BF5F50(ctx, base);
	// b 0x82bfdaf4
	goto loc_82BFDAF4;
loc_82BFDAF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BFDAF4:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bf6088
	ctx.lr = 0x82BFDB00;
	sub_82BF6088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82BFDB1C"))) PPC_WEAK_FUNC(sub_82BFDB1C);
PPC_FUNC_IMPL(__imp__sub_82BFDB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFDB20"))) PPC_WEAK_FUNC(sub_82BFDB20);
PPC_FUNC_IMPL(__imp__sub_82BFDB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BFDB28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfdba0
	if (!ctx.cr6.eq) goto loc_82BFDBA0;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x82120040
	ctx.lr = 0x82BFDB4C;
	sub_82120040(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bl 0x82219130
	ctx.lr = 0x82BFDB60;
	sub_82219130(ctx, base);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bfdba0
	if (ctx.cr6.eq) goto loc_82BFDBA0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BFDB74:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfdb8c
	if (ctx.cr6.eq) goto loc_82BFDB8C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x821338a0
	ctx.lr = 0x82BFDB8C;
	sub_821338A0(ctx, base);
loc_82BFDB8C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bfdb74
	if (ctx.cr6.lt) goto loc_82BFDB74;
loc_82BFDBA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDBA8"))) PPC_WEAK_FUNC(sub_82BFDBA8);
PPC_FUNC_IMPL(__imp__sub_82BFDBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BFDBB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bfdbcc
	if (!ctx.cr6.eq) goto loc_82BFDBCC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82BFDBCC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdc90
	if (ctx.cr6.eq) goto loc_82BFDC90;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdc78
	if (ctx.cr6.eq) goto loc_82BFDC78;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82BFDBF0:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdc50
	if (ctx.cr6.eq) goto loc_82BFDC50;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bfdc30
	if (ctx.cr6.eq) goto loc_82BFDC30;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bfdc30
	if (!ctx.cr6.eq) goto loc_82BFDC30;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82bfdc30
	if (ctx.cr6.eq) goto loc_82BFDC30;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82BFDC30:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfdc48
	if (!ctx.cr6.eq) goto loc_82BFDC48;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// b 0x82bfdc50
	goto loc_82BFDC50;
loc_82BFDC48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82134c70
	ctx.lr = 0x82BFDC50;
	sub_82134C70(ctx, base);
loc_82BFDC50:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// lhz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82bfdbf0
	if (ctx.cr6.lt) goto loc_82BFDBF0;
loc_82BFDC78:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82120a70
	ctx.lr = 0x82BFDC80;
	sub_82120A70(ctx, base);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82BFDC90:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bfdcec
	if (ctx.cr6.eq) goto loc_82BFDCEC;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdcec
	if (ctx.cr6.eq) goto loc_82BFDCEC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82BFDCAC:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfdcc8
	if (ctx.cr6.eq) goto loc_82BFDCC8;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82bfdce8
	if (ctx.cr6.eq) goto loc_82BFDCE8;
loc_82BFDCC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bfdcac
	if (ctx.cr6.lt) goto loc_82BFDCAC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82BFDCE8:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82BFDCEC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFDCF8"))) PPC_WEAK_FUNC(sub_82BFDCF8);
PPC_FUNC_IMPL(__imp__sub_82BFDCF8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bfdd48
	if (ctx.cr6.eq) goto loc_82BFDD48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfdd48
	if (ctx.cr6.eq) goto loc_82BFDD48;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdd48
	if (ctx.cr6.eq) goto loc_82BFDD48;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdd48
	if (ctx.cr6.eq) goto loc_82BFDD48;
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x82bfdd4c
	goto loc_82BFDD4C;
loc_82BFDD48:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BFDD4C:
	// bl 0x82bfdba8
	ctx.lr = 0x82BFDD50;
	sub_82BFDBA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bfdda0
	if (ctx.cr6.eq) goto loc_82BFDDA0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bfdda0
	if (ctx.cr6.eq) goto loc_82BFDDA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfdda0
	if (ctx.cr6.eq) goto loc_82BFDDA0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfdda0
	if (ctx.cr6.eq) goto loc_82BFDDA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfdda0
	if (ctx.cr6.eq) goto loc_82BFDDA0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bfdda0
	if (ctx.cr6.eq) goto loc_82BFDDA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdf4f8
	ctx.lr = 0x82BFDDA0;
	sub_82BDF4F8(ctx, base);
loc_82BFDDA0:
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

__attribute__((alias("__imp__sub_82BFDDB4"))) PPC_WEAK_FUNC(sub_82BFDDB4);
PPC_FUNC_IMPL(__imp__sub_82BFDDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFDDB8"))) PPC_WEAK_FUNC(sub_82BFDDB8);
PPC_FUNC_IMPL(__imp__sub_82BFDDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82BFDDC0;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfdde8
	if (!ctx.cr6.eq) goto loc_82BFDDE8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82BFDDE8:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82BFDDFC;
	sub_82BFD450(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfde30
	if (ctx.cr6.eq) goto loc_82BFDE30;
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mulli r11,r29,52
	ctx.r11.s64 = ctx.r29.s64 * 52;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82bfde98
	if (!ctx.cr0.eq) goto loc_82BFDE98;
loc_82BFDE30:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,836
	ctx.r3.s64 = 836;
	// bl 0x82120040
	ctx.lr = 0x82BFDE3C;
	sub_82120040(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stb r23,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r23.u8);
	// stb r23,1(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1, ctx.r23.u8);
loc_82BFDE48:
	// clrlwi r26,r30,24
	ctx.r26.u64 = ctx.r30.u32 & 0xFF;
	// sth r23,2(r24)
	PPC_STORE_U16(ctx.r24.u32 + 2, ctx.r23.u16);
	// addi r28,r24,4
	ctx.r28.s64 = ctx.r24.s64 + 4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82bfe3bc
	if (!ctx.cr6.gt) goto loc_82BFE3BC;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82BFDE60:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82BFDE68:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82bfe108
	if (ctx.cr6.eq) goto loc_82BFE108;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfe108
	if (ctx.cr6.eq) goto loc_82BFE108;
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,32664
	ctx.r5.s64 = ctx.r11.s64 + 32664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82BFDE94;
	sub_82BCE5D8(ctx, base);
	// b 0x82bfe11c
	goto loc_82BFE11C;
loc_82BFDE98:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82BFDEA0;
	sub_82120040(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r4,12476(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12476);
	// lwz r28,12496(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12496);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r30,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r30.u8);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r11,1(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1, ctx.r11.u8);
	// beq cr6,0x82bfdecc
	if (ctx.cr6.eq) goto loc_82BFDECC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82bfded0
	if (ctx.cr6.eq) goto loc_82BFDED0;
loc_82BFDECC:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82BFDED0:
	// addi r10,r24,4
	ctx.r10.s64 = ctx.r24.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82bfde48
	if (!ctx.cr6.gt) goto loc_82BFDE48;
	// lwz r6,12456(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12456);
	// addi r5,r24,48
	ctx.r5.s64 = ctx.r24.s64 + 48;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BFDEE8:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// li r8,8
	ctx.r8.s64 = 8;
loc_82BFDEF0:
	// lbz r27,1(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r26,2(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r27,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r27.u8);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// stb r26,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r26.u8);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// beq cr6,0x82bfdf3c
	if (ctx.cr6.eq) goto loc_82BFDF3C;
	// lbz r27,81(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r26,82(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// stb r26,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r26.u8);
loc_82BFDF3C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82bfdef0
	if (!ctx.cr0.eq) goto loc_82BFDEF0;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r31,1(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r9,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// stb r8,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r8.u8);
	// stb r7,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r7.u8);
	// stb r31,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r31.u8);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82bfdfa4
	if (ctx.cr6.eq) goto loc_82BFDFA4;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r31,82(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
loc_82BFDFA4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// stb r31,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// stb r7,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r7.u8);
	// stb r8,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// beq cr6,0x82bfdff8
	if (ctx.cr6.eq) goto loc_82BFDFF8;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r31,82(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
loc_82BFDFF8:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r8.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r7.u8);
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// stb r8,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r8.u8);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// beq cr6,0x82bfe04c
	if (ctx.cr6.eq) goto loc_82BFE04C;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r31,82(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
loc_82BFE04C:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r8.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,45(r10)
	PPC_STORE_U8(ctx.r10.u32 + 45, ctx.r7.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,46(r10)
	PPC_STORE_U8(ctx.r10.u32 + 46, ctx.r9.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,47(r10)
	PPC_STORE_U8(ctx.r10.u32 + 47, ctx.r8.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// lhz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// beq cr6,0x82bfe0b0
	if (ctx.cr6.eq) goto loc_82BFE0B0;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
loc_82BFE0B0:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// sth r11,48(r10)
	PPC_STORE_U16(ctx.r10.u32 + 48, ctx.r11.u16);
	// beq cr6,0x82bfe0c8
	if (ctx.cr6.eq) goto loc_82BFE0C8;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82bfe0cc
	if (ctx.cr6.eq) goto loc_82BFE0CC;
loc_82BFE0C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82BFE0CC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82bfe0dc
	if (ctx.cr6.eq) goto loc_82BFE0DC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82bfe0e0
	if (ctx.cr6.eq) goto loc_82BFE0E0;
loc_82BFE0DC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82BFE0E0:
	// stb r23,51(r10)
	PPC_STORE_U8(ctx.r10.u32 + 51, ctx.r23.u8);
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfe0f4
	if (!ctx.cr6.eq) goto loc_82BFE0F4;
	// stb r3,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r3.u8);
loc_82BFE0F4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r5,52
	ctx.r5.s64 = ctx.r5.s64 + 52;
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// bne 0x82bfdee8
	if (!ctx.cr0.eq) goto loc_82BFDEE8;
	// b 0x82bfde48
	goto loc_82BFDE48;
loc_82BFE108:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82bfe118
	if (ctx.cr6.eq) goto loc_82BFE118;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfe11c
	if (ctx.cr6.eq) goto loc_82BFE11C;
loc_82BFE118:
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82BFE11C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x82bfde68
	if (ctx.cr6.lt) goto loc_82BFDE68;
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,40
	ctx.r4.s64 = ctx.r28.s64 + 40;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82bfe154
	if (ctx.cr6.eq) goto loc_82BFE154;
	// lis r11,-32067
	ctx.r11.s64 = -2101542912;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,23968
	ctx.r5.s64 = ctx.r11.s64 + 23968;
	// bl 0x82bce5d8
	ctx.lr = 0x82BFE150;
	sub_82BCE5D8(ctx, base);
	// b 0x82bfe158
	goto loc_82BFE158;
loc_82BFE154:
	// stw r23,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r23.u32);
loc_82BFE158:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// bne 0x82bfde60
	if (!ctx.cr0.eq) goto loc_82BFDE60;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82bfe3bc
	if (!ctx.cr6.gt) goto loc_82BFE3BC;
	// addi r29,r24,40
	ctx.r29.s64 = ctx.r24.s64 + 40;
loc_82BFE170:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfe3b0
	if (ctx.cr6.eq) goto loc_82BFE3B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82120040
	ctx.lr = 0x82BFE188;
	sub_82120040(ctx, base);
	// lwz r6,12476(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12476);
	// lwz r5,12496(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12496);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82bfe1a4
	if (ctx.cr6.eq) goto loc_82BFE1A4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82bfe1a8
	if (ctx.cr6.eq) goto loc_82BFE1A8;
loc_82BFE1A4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82BFE1A8:
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r9,12456(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12456);
	// stb r7,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// stb r8,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r10.u8);
	// stb r4,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r4.u8);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82bfe1fc
	if (ctx.cr6.eq) goto loc_82BFE1FC;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BFE1FC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82bfe210
	if (ctx.cr6.eq) goto loc_82BFE210;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82bfe214
	if (ctx.cr6.eq) goto loc_82BFE214;
loc_82BFE210:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82BFE214:
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stb r6,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r6.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r9.u8);
	// stb r7,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r7.u8);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// beq cr6,0x82bfe264
	if (ctx.cr6.eq) goto loc_82BFE264;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
loc_82BFE264:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// bl 0x82120040
	ctx.lr = 0x82BFE280;
	sub_82120040(ctx, base);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,12456(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12456);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ble cr6,0x82bfe328
	if (!ctx.cr6.gt) goto loc_82BFE328;
	// lwz r8,12476(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12476);
	// lwz r7,12496(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12496);
loc_82BFE2AC:
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lbz r28,2(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r6,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r6.u8);
	// stb r28,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r28.u8);
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bfe2f8
	if (ctx.cr6.eq) goto loc_82BFE2F8;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r28,82(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
loc_82BFE2F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82bfe310
	if (ctx.cr6.eq) goto loc_82BFE310;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82bfe314
	if (ctx.cr6.eq) goto loc_82BFE314;
loc_82BFE310:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82BFE314:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bfe2ac
	if (ctx.cr6.lt) goto loc_82BFE2AC;
loc_82BFE328:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82bfe3ac
	if (!ctx.cr6.gt) goto loc_82BFE3AC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82BFE340:
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// lhz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// beq cr6,0x82bfe378
	if (ctx.cr6.eq) goto loc_82BFE378;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
loc_82BFE378:
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r3,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r3.u8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bfe340
	if (ctx.cr6.lt) goto loc_82BFE340;
loc_82BFE3AC:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_82BFE3B0:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// bne 0x82bfe170
	if (!ctx.cr0.eq) goto loc_82BFE170;
loc_82BFE3BC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFE3C8"))) PPC_WEAK_FUNC(sub_82BFE3C8);
PPC_FUNC_IMPL(__imp__sub_82BFE3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82BFE3D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,12480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfe3f0
	if (!ctx.cr6.eq) goto loc_82BFE3F0;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_82BFE3F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82BFE404;
	sub_82BFD450(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfe43c
	if (!ctx.cr6.eq) goto loc_82BFE43C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8008
	ctx.r3.s64 = 8008;
	// bl 0x82120040
	ctx.lr = 0x82BFE420;
	sub_82120040(ctx, base);
	// li r5,8008
	ctx.r5.s64 = 8008;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BFE430;
	sub_82218A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_82BFE43C:
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lwz r11,12476(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfe460
	if (ctx.cr6.eq) goto loc_82BFE460;
	// lwz r11,12496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12496);
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bfe464
	if (ctx.cr6.eq) goto loc_82BFE464;
loc_82BFE460:
	// rlwinm r30,r10,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
loc_82BFE464:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8008
	ctx.r3.s64 = 8008;
	// bl 0x82120040
	ctx.lr = 0x82BFE470;
	sub_82120040(ctx, base);
	// li r5,8008
	ctx.r5.s64 = 8008;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BFE480;
	sub_82218A80(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// sth r30,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r30.u16);
	// sth r26,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r26.u16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// ble cr6,0x82bfe54c
	if (!ctx.cr6.gt) goto loc_82BFE54C;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
loc_82BFE4A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r7,12456(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82bfe4f4
	if (ctx.cr6.eq) goto loc_82BFE4F4;
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
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BFE4F4:
	// lwz r11,12476(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfe50c
	if (ctx.cr6.eq) goto loc_82BFE50C;
	// lwz r11,12496(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bfe510
	if (ctx.cr6.eq) goto loc_82BFE510;
loc_82BFE50C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82BFE510:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82bfe53c
	if (ctx.cr6.eq) goto loc_82BFE53C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bfe53c
	if (ctx.cr6.eq) goto loc_82BFE53C;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-8776
	ctx.r5.s64 = ctx.r11.s64 + -8776;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82BFE538;
	sub_82BCE5D8(ctx, base);
	// b 0x82bfe540
	goto loc_82BFE540;
loc_82BFE53C:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
loc_82BFE540:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82bfe4a0
	if (!ctx.cr0.eq) goto loc_82BFE4A0;
loc_82BFE54C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFE558"))) PPC_WEAK_FUNC(sub_82BFE558);
PPC_FUNC_IMPL(__imp__sub_82BFE558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BFE560;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ad14
	ctx.lr = 0x82BFE568;
	__savefpr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x82747da0
	ctx.lr = 0x82BFE588;
	sub_82747DA0(ctx, base);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82747a18
	ctx.lr = 0x82BFE598;
	sub_82747A18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x82747da0
	ctx.lr = 0x82BFE5A8;
	sub_82747DA0(ctx, base);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82747a18
	ctx.lr = 0x82BFE5BC;
	sub_82747A18(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f0,-30812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30812);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82bfe5f4
	if (!ctx.cr6.lt) goto loc_82BFE5F4;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f31,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82bfe5f8
	goto loc_82BFE5F8;
loc_82BFE5F4:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BFE5F8:
	// lfs f11,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f28,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82bfe61c
	if (!ctx.cr6.lt) goto loc_82BFE61C;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f28,f31,f11
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82bfe620
	goto loc_82BFE620;
loc_82BFE61C:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
loc_82BFE620:
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82bfe644
	if (!ctx.cr6.lt) goto loc_82BFE644;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f29,f31,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82bfe648
	goto loc_82BFE648;
loc_82BFE644:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82BFE648:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82bfe714
	if (ctx.cr6.eq) goto loc_82BFE714;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82bfe694
	if (ctx.cr6.eq) goto loc_82BFE694;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f11,f30,f13
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f27,f11,f12
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fneg f1,f10
	ctx.f1.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// bl 0x8221a968
	ctx.lr = 0x82BFE680;
	sub_8221A968(ctx, base);
	// lfs f9,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// fsubs f7,f27,f9
	ctx.f7.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
	// fnmsubs f6,f8,f7,f27
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f7.f64 - ctx.f27.f64)));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82BFE694:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfe6d4
	if (ctx.cr6.eq) goto loc_82BFE6D4;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f28,f11,f28
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fneg f1,f10
	ctx.f1.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// bl 0x8221a968
	ctx.lr = 0x82BFE6C0;
	sub_8221A968(ctx, base);
	// lfs f9,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// fsubs f7,f28,f9
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f9.f64));
	// fnmsubs f6,f8,f7,f28
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f7.f64 - ctx.f28.f64)));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82BFE6D4:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfe714
	if (ctx.cr6.eq) goto loc_82BFE714;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fdivs f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fneg f1,f10
	ctx.f1.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f31,f11,f29
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// bl 0x8221a968
	ctx.lr = 0x82BFE700;
	sub_8221A968(ctx, base);
	// lfs f9,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// fsubs f7,f31,f9
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// fnmsubs f6,f8,f7,f31
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f7.f64 - ctx.f31.f64)));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82BFE714:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x82747a18
	ctx.lr = 0x82BFE728;
	sub_82747A18(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ad60
	ctx.lr = 0x82BFE734;
	__restfpr_27(ctx, base);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFE738"))) PPC_WEAK_FUNC(sub_82BFE738);
PPC_FUNC_IMPL(__imp__sub_82BFE738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8221ad00
	ctx.lr = 0x82BFE74C;
	__savefpr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f22,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// beq cr6,0x82bfe894
	if (ctx.cr6.eq) goto loc_82BFE894;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f31,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f24,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f3,f5,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f2,f4,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fdivs f13,f24,f1
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f1.f64));
	// fmuls f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f9,f5,f13
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f5,f9,f10,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f4,f8,f7,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmuls f26,f11,f4
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// stfs f26,100(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f27,f9,f4
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f25,f8,f4
	ctx.f25.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// stfs f25,96(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fabs f23,f4
	ctx.f23.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fsubs f29,f12,f26
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f30,f10,f27
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f28,f7,f25
	ctx.f28.f64 = double(float(ctx.f7.f64 - ctx.f25.f64));
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f3,f29,f29
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// fmadds f2,f30,f30,f3
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f3.f64));
	// fmadds f1,f28,f28,f2
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f2.f64));
	// fsqrts f13,f1
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82bfe834
	if (!ctx.cr6.gt) goto loc_82BFE834;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82128270
	ctx.lr = 0x82BFE824;
	sub_82128270(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
loc_82BFE834:
	// fcmpu cr6,f23,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f23.f64, ctx.f22.f64);
	// ble cr6,0x82bfe85c
	if (!ctx.cr6.gt) goto loc_82BFE85C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82128270
	ctx.lr = 0x82BFE84C;
	sub_82128270(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f27,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f25.f64 = double(temp.f32);
loc_82BFE85C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bfe8d0
	if (ctx.cr6.eq) goto loc_82BFE8D0;
	// fdivs f0,f24,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f31.f64));
	// fadds f13,f28,f25
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f25.f64));
	// fadds f12,f29,f26
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// fadds f11,f30,f27
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82bfe8d0
	goto loc_82BFE8D0;
loc_82BFE894:
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f1,f4
	ctx.f1.f64 = double(float(sqrt(ctx.f4.f64)));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82bfe8cc
	if (!ctx.cr6.gt) goto loc_82BFE8CC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82BFE8CC:
	// bl 0x8212cfb0
	ctx.lr = 0x82BFE8D0;
	sub_8212CFB0(ctx, base);
loc_82BFE8D0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8221ad4c
	ctx.lr = 0x82BFE8DC;
	__restfpr_22(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE8EC"))) PPC_WEAK_FUNC(sub_82BFE8EC);
PPC_FUNC_IMPL(__imp__sub_82BFE8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFE8F0"))) PPC_WEAK_FUNC(sub_82BFE8F0);
PPC_FUNC_IMPL(__imp__sub_82BFE8F0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bfe968
	if (ctx.cr6.eq) goto loc_82BFE968;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bfe930
	if (!ctx.cr6.eq) goto loc_82BFE930;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82120040
	ctx.lr = 0x82BFE92C;
	sub_82120040(ctx, base);
	// b 0x82bfe940
	goto loc_82BFE940;
loc_82BFE930:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x82BFE940;
	sub_82121828(ctx, base);
loc_82BFE940:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfe968
	if (ctx.cr6.eq) goto loc_82BFE968;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82BFE968:
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

__attribute__((alias("__imp__sub_82BFE980"))) PPC_WEAK_FUNC(sub_82BFE980);
PPC_FUNC_IMPL(__imp__sub_82BFE980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13400);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bfe99c
	if (!ctx.cr6.eq) goto loc_82BFE99C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82bfe9a4
	goto loc_82BFE9A4;
loc_82BFE99C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82BFE9A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r4,24,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xF0000;
	// rlwinm r9,r11,20,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// oris r3,r6,64768
	ctx.r3.u64 = ctx.r6.u64 | 4244635648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFE9C4"))) PPC_WEAK_FUNC(sub_82BFE9C4);
PPC_FUNC_IMPL(__imp__sub_82BFE9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFE9C8"))) PPC_WEAK_FUNC(sub_82BFE9C8);
PPC_FUNC_IMPL(__imp__sub_82BFE9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,15828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfe9e4
	if (!ctx.cr6.eq) goto loc_82BFE9E4;
loc_82BFE9DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BFE9E4:
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bfe9dc
	if (!ctx.cr6.lt) goto loc_82BFE9DC;
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bfe9dc
	if (!ctx.cr6.lt) goto loc_82BFE9DC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFEA14"))) PPC_WEAK_FUNC(sub_82BFEA14);
PPC_FUNC_IMPL(__imp__sub_82BFEA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFEA18"))) PPC_WEAK_FUNC(sub_82BFEA18);
PPC_FUNC_IMPL(__imp__sub_82BFEA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x82809688
	sub_82809688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEA30"))) PPC_WEAK_FUNC(sub_82BFEA30);
PPC_FUNC_IMPL(__imp__sub_82BFEA30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,15828
	ctx.r3.s64 = ctx.r10.s64 + 15828;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82809be0
	sub_82809BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEA4C"))) PPC_WEAK_FUNC(sub_82BFEA4C);
PPC_FUNC_IMPL(__imp__sub_82BFEA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFEA50"))) PPC_WEAK_FUNC(sub_82BFEA50);
PPC_FUNC_IMPL(__imp__sub_82BFEA50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,15828
	ctx.r3.s64 = ctx.r10.s64 + 15828;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82809b40
	sub_82809B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEA6C"))) PPC_WEAK_FUNC(sub_82BFEA6C);
PPC_FUNC_IMPL(__imp__sub_82BFEA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFEA70"))) PPC_WEAK_FUNC(sub_82BFEA70);
PPC_FUNC_IMPL(__imp__sub_82BFEA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,15828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfea8c
	if (!ctx.cr6.eq) goto loc_82BFEA8C;
loc_82BFEA84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BFEA8C:
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bfea84
	if (!ctx.cr6.lt) goto loc_82BFEA84;
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bfea84
	if (!ctx.cr6.lt) goto loc_82BFEA84;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFEABC"))) PPC_WEAK_FUNC(sub_82BFEABC);
PPC_FUNC_IMPL(__imp__sub_82BFEABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFEAC0"))) PPC_WEAK_FUNC(sub_82BFEAC0);
PPC_FUNC_IMPL(__imp__sub_82BFEAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x82809688
	sub_82809688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEAD8"))) PPC_WEAK_FUNC(sub_82BFEAD8);
PPC_FUNC_IMPL(__imp__sub_82BFEAD8) {
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
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82BFEAF8;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bfeb10
	if (ctx.cr6.eq) goto loc_82BFEB10;
	// lhz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
loc_82BFEB10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFEB20"))) PPC_WEAK_FUNC(sub_82BFEB20);
PPC_FUNC_IMPL(__imp__sub_82BFEB20) {
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
	// lis r10,-31940
	ctx.r10.s64 = -2093219840;
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,-19216
	ctx.r31.s64 = ctx.r11.s64 + -19216;
	// lwz r11,-19164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19164);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bfeb98
	if (!ctx.cr6.eq) goto loc_82BFEB98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r11,-19164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19164, ctx.r11.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lfs f0,29744(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_82BFEB98:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r30,r10,15828
	ctx.r30.s64 = ctx.r10.s64 + 15828;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfebc8
	if (!ctx.cr6.eq) goto loc_82BFEBC8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82bfec04
	goto loc_82BFEC04;
loc_82BFEBC8:
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bfebdc
	if (ctx.cr6.lt) goto loc_82BFEBDC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82bfec04
	goto loc_82BFEC04;
loc_82BFEBDC:
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bfebf0
	if (ctx.cr6.lt) goto loc_82BFEBF0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82bfec04
	goto loc_82BFEC04;
loc_82BFEBF0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
loc_82BFEC04:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfec20
	if (!ctx.cr6.eq) goto loc_82BFEC20;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82bfec5c
	goto loc_82BFEC5C;
loc_82BFEC20:
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bfec34
	if (ctx.cr6.lt) goto loc_82BFEC34;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82bfec5c
	goto loc_82BFEC5C;
loc_82BFEC34:
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bfec48
	if (ctx.cr6.lt) goto loc_82BFEC48;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82bfec5c
	goto loc_82BFEC5C;
loc_82BFEC48:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
loc_82BFEC5C:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfec78
	if (!ctx.cr6.eq) goto loc_82BFEC78;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82bfecb4
	goto loc_82BFECB4;
loc_82BFEC78:
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bfec8c
	if (ctx.cr6.lt) goto loc_82BFEC8C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82bfecb4
	goto loc_82BFECB4;
loc_82BFEC8C:
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bfeca0
	if (ctx.cr6.lt) goto loc_82BFECA0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82bfecb4
	goto loc_82BFECB4;
loc_82BFECA0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
loc_82BFECB4:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfecd0
	if (!ctx.cr6.eq) goto loc_82BFECD0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x82bfed10
	goto loc_82BFED10;
loc_82BFECD0:
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bfece4
	if (ctx.cr6.lt) goto loc_82BFECE4;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x82bfed10
	goto loc_82BFED10;
loc_82BFECE4:
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bfecf8
	if (ctx.cr6.lt) goto loc_82BFECF8;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x82bfed10
	goto loc_82BFED10;
loc_82BFECF8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_82BFED10:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfed30
	if (!ctx.cr6.eq) goto loc_82BFED30;
loc_82BFED28:
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// b 0x82bfed60
	goto loc_82BFED60;
loc_82BFED30:
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82bfed28
	if (!ctx.cr6.lt) goto loc_82BFED28;
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82bfed28
	if (!ctx.cr6.lt) goto loc_82BFED28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_82BFED60:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// bl 0x8280a870
	ctx.lr = 0x82BFED78;
	sub_8280A870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// bl 0x8280a870
	ctx.lr = 0x82BFED88;
	sub_8280A870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82BFEDA4"))) PPC_WEAK_FUNC(sub_82BFEDA4);
PPC_FUNC_IMPL(__imp__sub_82BFEDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFEDA8"))) PPC_WEAK_FUNC(sub_82BFEDA8);
PPC_FUNC_IMPL(__imp__sub_82BFEDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BFEDB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r29,15828
	ctx.r28.s64 = ctx.r29.s64 + 15828;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x82BFEDD8;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x82BFEDEC;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x82BFEE00;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82809688
	ctx.lr = 0x82BFEE1C;
	sub_82809688(ctx, base);
	// lwz r11,15828(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15828);
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82809688
	ctx.lr = 0x82BFEE38;
	sub_82809688(ctx, base);
	// addi r30,r4,1
	ctx.r30.s64 = ctx.r4.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8280a378
	ctx.lr = 0x82BFEE4C;
	sub_8280A378(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r30,3
	ctx.r4.s64 = ctx.r30.s64 + 3;
	// bl 0x8280a378
	ctx.lr = 0x82BFEE5C;
	sub_8280A378(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEE64"))) PPC_WEAK_FUNC(sub_82BFEE64);
PPC_FUNC_IMPL(__imp__sub_82BFEE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFEE68"))) PPC_WEAK_FUNC(sub_82BFEE68);
PPC_FUNC_IMPL(__imp__sub_82BFEE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r11,15828
	ctx.r3.s64 = ctx.r11.s64 + 15828;
	// li r6,70
	ctx.r6.s64 = 70;
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x8280a480
	sub_8280A480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEE80"))) PPC_WEAK_FUNC(sub_82BFEE80);
PPC_FUNC_IMPL(__imp__sub_82BFEE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r11,15828
	ctx.r3.s64 = ctx.r11.s64 + 15828;
	// li r6,70
	ctx.r6.s64 = 70;
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x82809f60
	sub_82809F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEE98"))) PPC_WEAK_FUNC(sub_82BFEE98);
PPC_FUNC_IMPL(__imp__sub_82BFEE98) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,15828
	ctx.r3.s64 = ctx.r10.s64 + 15828;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8280a870
	sub_8280A870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEEB0"))) PPC_WEAK_FUNC(sub_82BFEEB0);
PPC_FUNC_IMPL(__imp__sub_82BFEEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,15828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bfeed4
	if (!ctx.cr6.eq) goto loc_82BFEED4;
loc_82BFEEC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82BFEED4:
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bfeec4
	if (!ctx.cr6.lt) goto loc_82BFEEC4;
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bfeec4
	if (!ctx.cr6.lt) goto loc_82BFEEC4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFEF0C"))) PPC_WEAK_FUNC(sub_82BFEF0C);
PPC_FUNC_IMPL(__imp__sub_82BFEF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFEF10"))) PPC_WEAK_FUNC(sub_82BFEF10);
PPC_FUNC_IMPL(__imp__sub_82BFEF10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,15828
	ctx.r3.s64 = ctx.r10.s64 + 15828;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8280a378
	sub_8280A378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEF28"))) PPC_WEAK_FUNC(sub_82BFEF28);
PPC_FUNC_IMPL(__imp__sub_82BFEF28) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82809688
	ctx.lr = 0x82BFEF50;
	sub_82809688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFEF60"))) PPC_WEAK_FUNC(sub_82BFEF60);
PPC_FUNC_IMPL(__imp__sub_82BFEF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,15828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// b 0x8280ac18
	sub_8280AC18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEF78"))) PPC_WEAK_FUNC(sub_82BFEF78);
PPC_FUNC_IMPL(__imp__sub_82BFEF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,15828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// b 0x8280ab80
	sub_8280AB80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFEF90"))) PPC_WEAK_FUNC(sub_82BFEF90);
PPC_FUNC_IMPL(__imp__sub_82BFEF90) {
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
	// addi r31,r11,15828
	ctx.r31.s64 = ctx.r11.s64 + 15828;
	// lwz r3,15828(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// bl 0x8280acb0
	ctx.lr = 0x82BFEFB0;
	sub_8280ACB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8280b410
	ctx.lr = 0x82BFEFB8;
	sub_8280B410(ctx, base);
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

__attribute__((alias("__imp__sub_82BFEFCC"))) PPC_WEAK_FUNC(sub_82BFEFCC);
PPC_FUNC_IMPL(__imp__sub_82BFEFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFEFD0"))) PPC_WEAK_FUNC(sub_82BFEFD0);
PPC_FUNC_IMPL(__imp__sub_82BFEFD0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8280af60
	ctx.lr = 0x82BFEFF4;
	sub_8280AF60(ctx, base);
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

__attribute__((alias("__imp__sub_82BFF010"))) PPC_WEAK_FUNC(sub_82BFF010);
PPC_FUNC_IMPL(__imp__sub_82BFF010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r10,r11,15828
	ctx.r10.s64 = ctx.r11.s64 + 15828;
	// lwz r8,15828(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r8,32
	ctx.r9.s64 = ctx.r8.s64 + 32;
	// lwz r7,76(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwz r5,68(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// lwz r4,64(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// b 0x8280c040
	sub_8280C040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFF038"))) PPC_WEAK_FUNC(sub_82BFF038);
PPC_FUNC_IMPL(__imp__sub_82BFF038) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82120040
	ctx.lr = 0x82BFF050;
	sub_82120040(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BFF060:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82bff060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BFF060;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFF09C"))) PPC_WEAK_FUNC(sub_82BFF09C);
PPC_FUNC_IMPL(__imp__sub_82BFF09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFF0A0"))) PPC_WEAK_FUNC(sub_82BFF0A0);
PPC_FUNC_IMPL(__imp__sub_82BFF0A0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8221ad00
	ctx.lr = 0x82BFF0B8;
	__savefpr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x82bff0f0
	if (!ctx.cr6.lt) goto loc_82BFF0F0;
loc_82BFF0E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bff3bc
	goto loc_82BFF3BC;
loc_82BFF0F0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bff11c
	if (!ctx.cr6.eq) goto loc_82BFF11C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// addi r4,r11,492
	ctx.r4.s64 = ctx.r11.s64 + 492;
	// bl 0x827482b0
	ctx.lr = 0x82BFF118;
	sub_827482B0(ctx, base);
	// b 0x82bff3b8
	goto loc_82BFF3B8;
loc_82BFF11C:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82bff0e8
	if (ctx.cr6.lt) goto loc_82BFF0E8;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,12728(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12728);
	// addi r4,r7,424
	ctx.r4.s64 = ctx.r7.s64 + 424;
	// bl 0x827482b0
	ctx.lr = 0x82BFF140;
	sub_827482B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r7,492
	ctx.r4.s64 = ctx.r7.s64 + 492;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f27,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f24,f27,f30
	ctx.f24.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f23,f26,f29
	ctx.f23.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// fsubs f22,f25,f28
	ctx.f22.f64 = double(float(ctx.f25.f64 - ctx.f28.f64));
	// bl 0x827482b0
	ctx.lr = 0x82BFF174;
	sub_827482B0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82ba0bb0
	ctx.lr = 0x82BFF18C;
	sub_82BA0BB0(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r10,12728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12728);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lfs f0,29760(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4012(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12792);
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f31,0(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f31,4(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f31,12(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f31,24(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f12,472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 476);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 480);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f25,f10
	ctx.f9.f64 = double(float(ctx.f25.f64 - ctx.f10.f64));
	// fsubs f8,f27,f12
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// fmuls f6,f9,f24
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f24.f64));
	// fsubs f5,f26,f11
	ctx.f5.f64 = double(float(ctx.f26.f64 - ctx.f11.f64));
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f2,f23,f8
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f8.f64));
	// fmsubs f3,f22,f8,f6
	ctx.f3.f64 = double(float(ctx.f22.f64 * ctx.f8.f64 - ctx.f6.f64));
	// fmuls f1,f5,f22
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f22.f64));
	// fmsubs f12,f5,f24,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f24.f64 - ctx.f2.f64));
	// fmuls f13,f3,f3
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmsubs f11,f9,f23,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f23.f64 - ctx.f1.f64));
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f5,f3,f7
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f3,f12,f7
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fadds f12,f1,f26
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fadds f13,f2,f27
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f27.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fadds f11,f0,f25
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// stfs f11,8(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// fadds f10,f2,f30
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// stfs f10,12(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// fadds f9,f1,f29
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// stfs f9,16(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// fadds f8,f0,f28
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// stfs f8,20(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// fsubs f7,f30,f2
	ctx.f7.f64 = double(float(ctx.f30.f64 - ctx.f2.f64));
	// stfs f7,24(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// fsubs f4,f27,f2
	ctx.f4.f64 = double(float(ctx.f27.f64 - ctx.f2.f64));
	// fsubs f6,f29,f1
	ctx.f6.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// stfs f6,28(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// fsubs f5,f28,f0
	ctx.f5.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// stfs f5,32(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// stfs f4,36(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 36, temp.u32);
	// fsubs f3,f26,f1
	ctx.f3.f64 = double(float(ctx.f26.f64 - ctx.f1.f64));
	// stfs f3,40(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 40, temp.u32);
	// fsubs f2,f25,f0
	ctx.f2.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// stfs f2,44(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 44, temp.u32);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r9,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r9.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// lis r3,-31942
	ctx.r3.s64 = -2093350912;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r6,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r6.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,12788(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12788);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r8,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r8.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r9,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, ctx.r9.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r6,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r6.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r8,10(r6)
	PPC_STORE_U16(ctx.r6.u32 + 10, ctx.r8.u16);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// sth r8,28(r4)
	PPC_STORE_U16(ctx.r4.u32 + 28, ctx.r8.u16);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r7,30(r5)
	PPC_STORE_U16(ctx.r5.u32 + 30, ctx.r7.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r9,32(r6)
	PPC_STORE_U16(ctx.r6.u32 + 32, ctx.r9.u16);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// sth r8,34(r4)
	PPC_STORE_U16(ctx.r4.u32 + 34, ctx.r8.u16);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// sth r7,36(r6)
	PPC_STORE_U16(ctx.r6.u32 + 36, ctx.r7.u16);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// sth r9,38(r4)
	PPC_STORE_U16(ctx.r4.u32 + 38, ctx.r9.u16);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r6.u32);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r31,204(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// rlwinm r4,r31,0,27,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm r4,r4,0,24,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// ori r9,r4,2048
	ctx.r9.u64 = ctx.r4.u64 | 2048;
	// stw r9,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BFF3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12728);
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
loc_82BFF3B8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BFF3BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8221ad4c
	ctx.lr = 0x82BFF3C8;
	__restfpr_22(ctx, base);
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

__attribute__((alias("__imp__sub_82BFF3DC"))) PPC_WEAK_FUNC(sub_82BFF3DC);
PPC_FUNC_IMPL(__imp__sub_82BFF3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFF3E0"))) PPC_WEAK_FUNC(sub_82BFF3E0);
PPC_FUNC_IMPL(__imp__sub_82BFF3E0) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82120040
	ctx.lr = 0x82BFF3FC;
	sub_82120040(ctx, base);
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BFF40C;
	sub_82218A80(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// lfs f0,-27236(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27236);
	ctx.f0.f64 = double(temp.f32);
loc_82BFF428:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,-44(r11)
	PPC_STORE_U32(ctx.r11.u32 + -44, ctx.r9.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82bff428
	if (!ctx.cr0.eq) goto loc_82BFF428;
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

__attribute__((alias("__imp__sub_82BFF458"))) PPC_WEAK_FUNC(sub_82BFF458);
PPC_FUNC_IMPL(__imp__sub_82BFF458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x82BFF460;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// mullw. r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bff74c
	if (ctx.cr0.eq) goto loc_82BFF74C;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82bff4a4
	if (ctx.cr6.eq) goto loc_82BFF4A4;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ba0bb0
	ctx.lr = 0x82BFF4A4;
	sub_82BA0BB0(ctx, base);
loc_82BFF4A4:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,12792(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12792);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// lwz r26,12728(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12728);
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r9,348(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 348);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfs f0,324(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lfs f13,320(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r4,344(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 344);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// frsp f10,f8
	ctx.f10.f64 = double(float(ctx.f8.f64));
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// fadds f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fsubs f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f13,f11,f9,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f7.f64));
	// ble cr6,0x82bff6e0
	if (!ctx.cr6.gt) goto loc_82BFF6E0;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// fsubs f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r25,r31,48
	ctx.r25.s64 = ctx.r31.s64 + 48;
	// li r27,12
	ctx.r27.s64 = 12;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
loc_82BFF5A0:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f9,f0,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f11,f8,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f10.f64));
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bff6c4
	if (!ctx.cr6.gt) goto loc_82BFF6C4;
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
loc_82BFF5C4:
	// lbzx r9,r4,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// lfs f8,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r21,12(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// fmadds f0,f11,f8,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f0.f64));
	// subf r21,r21,r10
	ctx.r21.s64 = ctx.r10.s64 - ctx.r21.s64;
	// addi r20,r9,1
	ctx.r20.s64 = ctx.r9.s64 + 1;
	// divw r9,r21,r27
	ctx.r9.s32 = ctx.r21.s32 / ctx.r27.s32;
	// rlwinm r21,r20,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r9,2
	ctx.r19.s64 = ctx.r9.s64 + 2;
	// clrlwi r18,r9,16
	ctx.r18.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r20,r9,1
	ctx.r20.s64 = ctx.r9.s64 + 1;
	// clrlwi r19,r19,16
	ctx.r19.u64 = ctx.r19.u32 & 0xFFFF;
	// lwzx r21,r21,r31
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// addi r17,r9,3
	ctx.r17.s64 = ctx.r9.s64 + 3;
	// sth r18,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r18.u16);
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
	// sth r20,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r20.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sth r19,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r19.u16);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// sth r29,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r29.u16);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// sth r28,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r28.u16);
	// sth r5,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r5.u16);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// sth r19,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r19.u16);
	// sth r17,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r17.u16);
	// sth r18,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r18.u16);
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// sth r3,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r3.u16);
	// sth r29,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r29.u16);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lfs f6,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lfs f5,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,8(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lfs f4,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,8(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lfs f3,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r21,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r21.u32);
	// stw r21,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r21.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r21,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r21.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// stw r21,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r21.u32);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bff5c4
	if (ctx.cr6.lt) goto loc_82BFF5C4;
loc_82BFF6C4:
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82bff5a0
	if (ctx.cr6.lt) goto loc_82BFF5A0;
loc_82BFF6E0:
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82bff710
	if (!ctx.cr6.gt) goto loc_82BFF710;
	// addi r6,r26,284
	ctx.r6.s64 = ctx.r26.s64 + 284;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_82BFF6F4:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82badd60
	ctx.lr = 0x82BFF704;
	sub_82BADD60(ctx, base);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// bne 0x82bff6f4
	if (!ctx.cr0.eq) goto loc_82BFF6F4;
loc_82BFF710:
	// lwz r31,204(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 204);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// rlwinm r10,r31,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r3,12788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12788);
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
	// stw r9,204(r26)
	PPC_STORE_U32(ctx.r26.u32 + 204, ctx.r9.u32);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r29,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r29.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BFF744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12728(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12728);
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
loc_82BFF74C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFF758"))) PPC_WEAK_FUNC(sub_82BFF758);
PPC_FUNC_IMPL(__imp__sub_82BFF758) {
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
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bff798
	if (!ctx.cr6.eq) goto loc_82BFF798;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82120a70
	ctx.lr = 0x82BFF784;
	sub_82120A70(ctx, base);
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
loc_82BFF798:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82bff7c0
	if (ctx.cr6.eq) goto loc_82BFF7C0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82121828
	ctx.lr = 0x82BFF7BC;
	sub_82121828(ctx, base);
	// b 0x82bff7c8
	goto loc_82BFF7C8;
loc_82BFF7C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82BFF7C8;
	sub_82120040(ctx, base);
loc_82BFF7C8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BFF7E8"))) PPC_WEAK_FUNC(sub_82BFF7E8);
PPC_FUNC_IMPL(__imp__sub_82BFF7E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// b 0x82120a70
	sub_82120A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFF810"))) PPC_WEAK_FUNC(sub_82BFF810);
PPC_FUNC_IMPL(__imp__sub_82BFF810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BFF814"))) PPC_WEAK_FUNC(sub_82BFF814);
PPC_FUNC_IMPL(__imp__sub_82BFF814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFF818"))) PPC_WEAK_FUNC(sub_82BFF818);
PPC_FUNC_IMPL(__imp__sub_82BFF818) {
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82120040
	ctx.lr = 0x82BFF834;
	sub_82120040(ctx, base);
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x82BFF844;
	sub_82218A80(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfs f13,-19784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19784);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f12,-30440(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30440);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// lfs f0,-4368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-30400(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30400);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-27236(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -27236);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
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

__attribute__((alias("__imp__sub_82BFF8D4"))) PPC_WEAK_FUNC(sub_82BFF8D4);
PPC_FUNC_IMPL(__imp__sub_82BFF8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFF8D8"))) PPC_WEAK_FUNC(sub_82BFF8D8);
PPC_FUNC_IMPL(__imp__sub_82BFF8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82BFF8E0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8221ad04
	ctx.lr = 0x82BFF8E8;
	__savefpr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r27,104(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// fmuls f25,f0,f0
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bffdb4
	if (!ctx.cr6.gt) goto loc_82BFFDB4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lfs f29,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-30736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30736);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r27,20
	ctx.r31.s64 = ctx.r27.s64 + 20;
	// lfs f28,-29864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29864);
	ctx.f28.f64 = double(temp.f32);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lfs f31,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// lfs f26,-30764(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30764);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,29744(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29744);
	ctx.f27.f64 = double(temp.f32);
loc_82BFF94C:
	// lwz r11,12492(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12492);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// bge cr6,0x82bffa2c
	if (!ctx.cr6.lt) goto loc_82BFFA2C;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bffc14
	if (ctx.cr6.eq) goto loc_82BFFC14;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bffc14
	if (!ctx.cr6.eq) goto loc_82BFFC14;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f24,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f24.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f23,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f23.f64 = double(temp.f32);
	// bl 0x82bbcba0
	ctx.lr = 0x82BFF99C;
	sub_82BBCBA0(ctx, base);
	// bl 0x8221bf50
	ctx.lr = 0x82BFF9A0;
	sub_8221BF50(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f0,f24,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f23.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f26
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// fmadds f0,f10,f0,f23
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f23.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bgt cr6,0x82bffa0c
	if (ctx.cr6.gt) goto loc_82BFFA0C;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BFF9F4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82bff9f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BFF9F4;
	// b 0x82bffda8
	goto loc_82BFFDA8;
loc_82BFFA0C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82BFFA2C:
	// lwz r6,12492(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12492);
	// lfs f0,64(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82bffad8
	if (ctx.cr6.lt) goto loc_82BFFAD8;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
loc_82BFFA44:
	// lfs f13,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f12,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f30,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f12.f64));
	// stfs f11,-16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// lfs f10,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f30,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f10.f64));
	// stfs f8,-4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f30,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f6.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f4,f30,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f3.f64));
	// stfs f2,-4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmr f8,f2
	ctx.f8.f64 = ctx.f2.f64;
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f1,f30,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f30,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f6,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f7,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f2,f6,f8
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// stfs f2,-4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bge cr6,0x82bffa44
	if (!ctx.cr6.lt) goto loc_82BFFA44;
loc_82BFFAD8:
	// lfs f13,-16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r7,r30,24
	ctx.r7.s64 = ctx.r30.s64 + 24;
	// lfs f12,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f11,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f10,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,-16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f0,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,-12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f4,f0,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f2,-8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f13,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f12,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f0,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f9,-4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmr f2,f9
	ctx.f2.f64 = ctx.f9.f64;
	// lfs f8,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f0,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// lfs f5,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f0,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f10,-4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f6,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f10,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f11,f8,f5
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f0,f11,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f3.f64));
	// blt cr6,0x82bffcb8
	if (ctx.cr6.lt) goto loc_82BFFCB8;
	// beq cr6,0x82bffc58
	if (ctx.cr6.eq) goto loc_82BFFC58;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bffcec
	if (!ctx.cr6.lt) goto loc_82BFFCEC;
	// lfs f7,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fadds f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,4(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fadds f2,f8,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f2,0(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// b 0x82bffce4
	goto loc_82BFFCE4;
loc_82BFFC14:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BFFC40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82bffc40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BFFC40;
	// b 0x82bffda8
	goto loc_82BFFDA8;
loc_82BFFC58:
	// lfs f7,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fmuls f5,f6,f29
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f2,f12,f5
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fadds f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f1,0(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f13,f10,f3
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fadds f12,f9,f2
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f9,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f9,f4
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// lfs f8,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fsubs f6,f8,f3
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// stfs f7,0(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f6,4(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f10,8(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lfs f5,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// b 0x82bffcec
	goto loc_82BFFCEC;
loc_82BFFCB8:
	// lfs f10,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fmuls f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f1,4(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f2,0(r28)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fadds f13,f6,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f13,8(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_82BFFCE4:
	// lfs f12,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_82BFFCEC:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82bffcfc
	if (!ctx.cr6.lt) goto loc_82BFFCFC;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x82bffd00
	goto loc_82BFFD00;
loc_82BFFCFC:
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
loc_82BFFD00:
	// stfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bffd30
	if (ctx.cr6.eq) goto loc_82BFFD30;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82b98488
	ctx.lr = 0x82BFFD28;
	sub_82B98488(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// b 0x82bffd38
	goto loc_82BFFD38;
loc_82BFFD30:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82BFFD38:
	// lfs f0,64(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r27,36
	ctx.r27.s64 = ctx.r27.s64 + 36;
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// fmadds f11,f0,f12,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,-4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f3,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmuls f13,f4,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f12,f2,f3
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
loc_82BFFDA8:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bff94c
	if (ctx.cr6.lt) goto loc_82BFF94C;
loc_82BFFDB4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8221ad50
	ctx.lr = 0x82BFFDC0;
	__restfpr_23(ctx, base);
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BFFDC4"))) PPC_WEAK_FUNC(sub_82BFFDC4);
PPC_FUNC_IMPL(__imp__sub_82BFFDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BFFDC8"))) PPC_WEAK_FUNC(sub_82BFFDC8);
PPC_FUNC_IMPL(__imp__sub_82BFFDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BFFDD0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8221acf0
	ctx.lr = 0x82BFFDD8;
	__savefpr_18(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f27.f64 = double(temp.f32);
	// lfs f13,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,100(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// bge cr6,0x82c00128
	if (!ctx.cr6.lt) goto loc_82C00128;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lfs f26,-30896(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30896);
	ctx.f26.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,-30764(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30764);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r11,18092
	ctx.r26.s64 = ctx.r11.s64 + 18092;
	// lfs f28,29760(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29760);
	ctx.f28.f64 = double(temp.f32);
	// addi r27,r10,18080
	ctx.r27.s64 = ctx.r10.s64 + 18080;
loc_82BFFE34:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82c00128
	if (!ctx.cr6.lt) goto loc_82C00128;
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lfs f13,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,100(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f13,f11,f13,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmsubs f0,f9,f0,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmsubs f12,f10,f12,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f8.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82bffee4
	if (!ctx.cr6.eq) goto loc_82BFFEE4;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f0,f9,f0,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f8.f64));
	// fmsubs f13,f11,f13,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmsubs f12,f10,f12,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
loc_82BFFEE4:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,104(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lfs f10,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmsubs f2,f9,f13,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmsubs f11,f11,f0,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f6.f64));
	// fmsubs f8,f10,f12,f5
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f5.f64));
	// fmadds f7,f0,f0,f4
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmuls f9,f2,f2
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f5,f13,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,12(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmadds f6,f11,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// lfs f30,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// fsqrts f3,f5
	ctx.f3.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmadds f4,f8,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fdivs f10,f28,f3
	ctx.f10.f64 = double(float(ctx.f28.f64 / ctx.f3.f64));
	// fneg f29,f30
	ctx.f29.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fsqrts f1,f4
	ctx.f1.f64 = double(float(sqrt(ctx.f4.f64)));
	// fdivs f9,f28,f1
	ctx.f9.f64 = double(float(ctx.f28.f64 / ctx.f1.f64));
	// fmuls f25,f10,f13
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f24,f12,f10
	ctx.f24.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f23,f0,f10
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f22,f9,f8
	ctx.f22.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f21,f11,f9
	ctx.f21.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f20,f2,f9
	ctx.f20.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// bl 0x82bbcba0
	ctx.lr = 0x82BFFF90;
	sub_82BBCBA0(ctx, base);
	// bl 0x8221bf50
	ctx.lr = 0x82BFFF94;
	sub_8221BF50(ctx, base);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// fsubs f8,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmadds f30,f4,f8,f29
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f29.f64));
	// bl 0x82bbcba0
	ctx.lr = 0x82BFFFC0;
	sub_82BBCBA0(ctx, base);
	// bl 0x8221bf50
	ctx.lr = 0x82BFFFC4;
	sub_8221BF50(ctx, base);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f19,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f19.f64 = double(temp.f32);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f3,88(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// lfs f18,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmuls f29,f0,f26
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// bl 0x82bbcba0
	ctx.lr = 0x82BFFFF4;
	sub_82BBCBA0(ctx, base);
	// bl 0x8221bf50
	ctx.lr = 0x82BFFFF8;
	sub_8221BF50(ctx, base);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// fsubs f13,f19,f18
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f19.f64 - ctx.f18.f64));
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmadds f19,f9,f13,f18
	ctx.f19.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f18.f64));
	// bl 0x8221c148
	ctx.lr = 0x82C00020;
	sub_8221C148(ctx, base);
	// frsp f18,f1
	ctx.fpscr.disableFlushMode();
	ctx.f18.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8221c068
	ctx.lr = 0x82C0002C;
	sub_8221C068(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmuls f7,f8,f18
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f18.f64));
	// fmuls f6,f7,f19
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f19.f64));
	// fmuls f5,f6,f25
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f25.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f4,f24,f6
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f6.f64));
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmuls f3,f23,f6
	ctx.f3.f64 = double(float(ctx.f23.f64 * ctx.f6.f64));
	// stfs f3,24(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8221c068
	ctx.lr = 0x82C0005C;
	sub_8221C068(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8221c068
	ctx.lr = 0x82C00068;
	sub_8221C068(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f13,f2,f29
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// fmuls f12,f13,f19
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f19.f64));
	// fmadds f11,f12,f22,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f22.f64 + ctx.f0.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f21,f12,f10
	ctx.f9.f64 = double(float(ctx.f21.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f20,f12,f8
	ctx.f7.f64 = double(float(ctx.f20.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f7,24(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8221c148
	ctx.lr = 0x82C000A0;
	sub_8221C148(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f3,f6,f19
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f19.f64));
	// fmadds f2,f5,f3,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f2,16(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f3,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f0.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f3,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f30,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82bbcba0
	ctx.lr = 0x82C000EC;
	sub_82BBCBA0(ctx, base);
	// bl 0x8221bf50
	ctx.lr = 0x82C000F0;
	sub_8221BF50(ctx, base);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// fsubs f9,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// stfs f27,32(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f8,104(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmadds f4,f5,f9,f29
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f29.f64));
	// stfs f4,28(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f3,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f3,f27
	ctx.cr6.compare(ctx.f3.f64, ctx.f27.f64);
	// blt cr6,0x82bffe34
	if (ctx.cr6.lt) goto loc_82BFFE34;
loc_82C00128:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8221ad3c
	ctx.lr = 0x82C00134;
	__restfpr_18(ctx, base);
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C00138"))) PPC_WEAK_FUNC(sub_82C00138);
PPC_FUNC_IMPL(__imp__sub_82C00138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82C00140;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c004b4
	if (ctx.cr6.eq) goto loc_82C004B4;
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// lwz r10,80(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82c00164
	if (ctx.cr6.eq) goto loc_82C00164;
	// bl 0x82bff758
	ctx.lr = 0x82C00164;
	sub_82BFF758(ctx, base);
loc_82C00164:
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c004b4
	if (ctx.cr6.eq) goto loc_82C004B4;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c004c0
	if (!ctx.cr6.eq) goto loc_82C004C0;
	// bl 0x82bffdc8
	ctx.lr = 0x82C00188;
	sub_82BFFDC8(ctx, base);
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c001b0
	if (ctx.cr6.lt) goto loc_82C001B0;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82c001b0
	if (ctx.cr6.eq) goto loc_82C001B0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r11.u32);
loc_82C001B0:
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c001d0
	if (ctx.cr6.eq) goto loc_82C001D0;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82ba0bb0
	ctx.lr = 0x82C001D0;
	sub_82BA0BB0(ctx, base);
loc_82C001D0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r31,r11,12792
	ctx.r31.s64 = ctx.r11.s64 + 12792;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12792);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x82bff8d8
	ctx.lr = 0x82C001F0;
	sub_82BFF8D8(ctx, base);
loc_82C001F0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12780);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c004b4
	if (ctx.cr6.eq) goto loc_82C004B4;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0022c
	if (ctx.cr6.eq) goto loc_82C0022C;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82ba0bb0
	ctx.lr = 0x82C0022C;
	sub_82BA0BB0(ctx, base);
loc_82C0022C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lfs f13,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r25,12728(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12728);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r8,44(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r7,44(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stfs f13,12(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r3,44(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r7,96(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ble cr6,0x82c00478
	if (!ctx.cr6.gt) goto loc_82C00478;
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// lis r27,0
	ctx.r27.s64 = 0;
	// li r30,2
	ctx.r30.s64 = 2;
	// lis r31,0
	ctx.r31.s64 = 0;
	// addi r7,r25,472
	ctx.r7.s64 = ctx.r25.s64 + 472;
	// lfs f13,-4012(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// ori r3,r27,65535
	ctx.r3.u64 = ctx.r27.u64 | 65535;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 + 28;
	// ori r31,r31,65534
	ctx.r31.u64 = ctx.r31.u64 | 65534;
	// li r26,3
	ctx.r26.s64 = 3;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82C002DC:
	// lwz r23,-12(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// addi r22,r9,1
	ctx.r22.s64 = ctx.r9.s64 + 1;
	// add r21,r9,r31
	ctx.r21.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r20,r9,16
	ctx.r20.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r23,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r23.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stw r23,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r23.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stw r23,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r23.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stw r23,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r23.u32);
	// lfs f10,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// lfs f11,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f3,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f9,f12,f5
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// lfs f10,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f7,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fmuls f5,f8,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fsubs f4,f7,f3
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f12,f6,f9,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f5.f64));
	// fmuls f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f9,f6,f4
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmsubs f6,f4,f1,f10
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 - ctx.f10.f64));
	// fmsubs f5,f11,f8,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f9.f64));
	// fmadds f4,f6,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f1,f5,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fsqrts f11,f1
	ctx.f11.f64 = double(float(sqrt(ctx.f1.f64)));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f9,f10,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f7,f6,f10
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f5,f8,f3
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f4,f7,f3
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fsubs f3,f2,f6
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f2,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f2,0(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f3,-24(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// stfs f7,-20(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// lfs f1,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// stfs f12,-16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f10,-12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f4
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f8,-8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f7,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f6,-4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f1,f4
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// clrlwi r23,r21,16
	ctx.r23.u64 = ctx.r21.u32 & 0xFFFF;
	// sth r20,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r20.u16);
	// add r21,r9,r3
	ctx.r21.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sth r20,28(r10)
	PPC_STORE_U16(ctx.r10.u32 + 28, ctx.r20.u16);
	// sth r23,32(r10)
	PPC_STORE_U16(ctx.r10.u32 + 32, ctx.r23.u16);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sth r23,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r23.u16);
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// sth r29,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r29.u16);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// sth r21,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r21.u16);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// sth r27,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r27.u16);
	// sth r30,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r30.u16);
	// sth r22,30(r10)
	PPC_STORE_U16(ctx.r10.u32 + 30, ctx.r22.u16);
	// sth r30,34(r10)
	PPC_STORE_U16(ctx.r10.u32 + 34, ctx.r30.u16);
	// sth r29,38(r10)
	PPC_STORE_U16(ctx.r10.u32 + 38, ctx.r29.u16);
	// sth r26,36(r10)
	PPC_STORE_U16(ctx.r10.u32 + 36, ctx.r26.u16);
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// lwz r23,96(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmpw cr6,r5,r23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82c002dc
	if (ctx.cr6.lt) goto loc_82C002DC;
loc_82C00478:
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r31,204(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// rlwinm r9,r31,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm r9,r9,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// lwz r3,12788(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12788);
	// ori r8,r9,2048
	ctx.r8.u64 = ctx.r9.u64 | 2048;
	// stw r8,204(r25)
	PPC_STORE_U32(ctx.r25.u32 + 204, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C004AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12728(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12728);
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
loc_82C004B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82C004C0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r31,r11,12792
	ctx.r31.s64 = ctx.r11.s64 + 12792;
	// lwz r11,12792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12792);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x82bff8d8
	ctx.lr = 0x82C004DC;
	sub_82BFF8D8(ctx, base);
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c001f0
	if (!ctx.cr6.eq) goto loc_82C001F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C004F4"))) PPC_WEAK_FUNC(sub_82C004F4);
PPC_FUNC_IMPL(__imp__sub_82C004F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C004F8"))) PPC_WEAK_FUNC(sub_82C004F8);
PPC_FUNC_IMPL(__imp__sub_82C004F8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82120040
	ctx.lr = 0x82C00510;
	sub_82120040(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lfs f13,-30784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30784);
	ctx.f13.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,-4476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4476);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-27236(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27236);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0057C"))) PPC_WEAK_FUNC(sub_82C0057C);
PPC_FUNC_IMPL(__imp__sub_82C0057C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C00580"))) PPC_WEAK_FUNC(sub_82C00580);
PPC_FUNC_IMPL(__imp__sub_82C00580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82C00588;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ad18
	ctx.lr = 0x82C00590;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82ba0bb0
	ctx.lr = 0x82C005B4;
	sub_82BA0BB0(ctx, base);
	// lfs f3,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// fsubs f30,f0,f3
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsubs f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82c00bf0
	if (ctx.cr6.eq) goto loc_82C00BF0;
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f7,f3
	ctx.f7.f64 = ctx.f3.f64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// fsubs f10,f11,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lwz r5,12728(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// lfs f11,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r5,472
	ctx.r11.s64 = ctx.r5.s64 + 472;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f8,476(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 476);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f9,472(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 472);
	ctx.f9.f64 = double(temp.f32);
	// lfs f28,480(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 480);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// lfs f6,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f28,f7
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f7.f64));
	// fmuls f29,f13,f13
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f12,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f29.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x82c006b0
	if (ctx.cr6.eq) goto loc_82C006B0;
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmadds f7,f12,f7,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f9,f10,f9,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82c006b0
	if (ctx.cr6.lt) goto loc_82C006B0;
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x82c006a0
	if (!ctx.cr6.gt) goto loc_82C006A0;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c006bc
	goto loc_82C006BC;
loc_82C006A0:
	// fmadds f10,f10,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f13,f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f0,f12,f0,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f3.f64));
	// b 0x82c006bc
	goto loc_82C006BC;
loc_82C006B0:
	// fmr f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f3.f64;
	// fmr f13,f4
	ctx.f13.f64 = ctx.f4.f64;
	// fmr f10,f5
	ctx.f10.f64 = ctx.f5.f64;
loc_82C006BC:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f3,f1,f10
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f0,f8,f30
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f13,f4,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmsubs f12,f8,f2,f3
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 - ctx.f3.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmsubs f0,f4,f1,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 - ctx.f0.f64));
	// fmsubs f13,f30,f10,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// clrlwi r4,r6,1
	ctx.r4.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82c00738
	if (!ctx.cr6.eq) goto loc_82C00738;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// b 0x82c00768
	goto loc_82C00768;
loc_82C00738:
	// fmuls f10,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fsqrts f4,f7
	ctx.f4.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 / ctx.f4.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
loc_82C00768:
	// fmuls f9,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fmuls f8,f2,f2
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmuls f7,f30,f30
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f10,-4368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4368);
	ctx.f10.f64 = double(temp.f32);
	// fadds f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fsqrts f4,f3
	ctx.f4.f64 = double(float(sqrt(ctx.f3.f64)));
	// fnmsubs f10,f31,f10,f4
	ctx.f10.f64 = double(float(-(ctx.f31.f64 * ctx.f10.f64 - ctx.f4.f64)));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82c007b0
	if (!ctx.cr6.lt) goto loc_82C007B0;
	// fadds f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f4,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fsqrts f3,f3
	ctx.f3.f64 = double(float(sqrt(ctx.f3.f64)));
	// fmuls f31,f3,f4
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
loc_82C007B0:
	// fadds f9,f8,f9
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f29,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,12792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12792);
	// lfs f28,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// fadds f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// fsqrts f7,f9
	ctx.f7.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 / ctx.f7.f64));
	// fmuls f7,f9,f2
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f1,f30,f9
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// fmuls f9,f7,f31
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f7,f2,f31
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f2,f1,f31
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fadds f1,f5,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f5,f4,f2
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fsubs f4,f3,f9
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fsubs f3,f29,f7
	ctx.f3.f64 = double(float(ctx.f29.f64 - ctx.f7.f64));
	// fsubs f2,f28,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f2.f64));
	// fadds f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f9,0(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,4(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f9,8(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fsubs f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f7,12(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fsubs f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f1,16(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// fsubs f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// stfs f9,20(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// fsubs f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f8,24(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// fsubs f7,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f7,28(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// fsubs f5,f2,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// stfs f5,32(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f4,36(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// fadds f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f3,40(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// fadds f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f2,44(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f9,48(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,52(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f4,56(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// stfs f2,60(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// stfs f9,64(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 64, temp.u32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f7,68(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 68, temp.u32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f4,72(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 72, temp.u32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f2,76(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 76, temp.u32);
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f9,80(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 80, temp.u32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,84(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 84, temp.u32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f4,88(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 88, temp.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f2,92(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 92, temp.u32);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r7,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r7.u32);
	// lfs f0,-27236(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27236);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fadds f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r3,r4,8
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFFFF;
	// stw r3,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r3.u32);
	// stw r3,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r3.u32);
	// stw r3,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r3.u32);
	// stw r3,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r3.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f1,16(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f6,20(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f1,24(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f11,28(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f11,36(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f13,40(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f6,44(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f12,48(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f6,52(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f12,56(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f11,60(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,2
	ctx.r7.s64 = 2;
	// sth r30,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r30.u16);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,5
	ctx.r4.s64 = 5;
	// sth r6,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r6.u16);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// sth r30,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r30.u16);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// sth r6,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r6.u16);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// sth r7,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r7.u16);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// sth r7,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r7.u16);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// sth r8,30(r28)
	PPC_STORE_U16(ctx.r28.u32 + 30, ctx.r8.u16);
	// lwz r3,12788(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12788);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r30,32(r28)
	PPC_STORE_U16(ctx.r28.u32 + 32, ctx.r30.u16);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r7,34(r28)
	PPC_STORE_U16(ctx.r28.u32 + 34, ctx.r7.u16);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r8,36(r28)
	PPC_STORE_U16(ctx.r28.u32 + 36, ctx.r8.u16);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r30,38(r28)
	PPC_STORE_U16(ctx.r28.u32 + 38, ctx.r30.u16);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r9,56(r28)
	PPC_STORE_U16(ctx.r28.u32 + 56, ctx.r9.u16);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r4,58(r28)
	PPC_STORE_U16(ctx.r28.u32 + 58, ctx.r4.u16);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r6,60(r28)
	PPC_STORE_U16(ctx.r28.u32 + 60, ctx.r6.u16);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r9,62(r28)
	PPC_STORE_U16(ctx.r28.u32 + 62, ctx.r9.u16);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r4,64(r28)
	PPC_STORE_U16(ctx.r28.u32 + 64, ctx.r4.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r6,66(r4)
	PPC_STORE_U16(ctx.r4.u32 + 66, ctx.r6.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r6,84(r4)
	PPC_STORE_U16(ctx.r4.u32 + 84, ctx.r6.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r30,86(r4)
	PPC_STORE_U16(ctx.r4.u32 + 86, ctx.r30.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r9,88(r4)
	PPC_STORE_U16(ctx.r4.u32 + 88, ctx.r9.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r6,90(r4)
	PPC_STORE_U16(ctx.r4.u32 + 90, ctx.r6.u16);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r30,92(r4)
	PPC_STORE_U16(ctx.r4.u32 + 92, ctx.r30.u16);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r9,94(r4)
	PPC_STORE_U16(ctx.r4.u32 + 94, ctx.r9.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r8,112(r4)
	PPC_STORE_U16(ctx.r4.u32 + 112, ctx.r8.u16);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r7,114(r4)
	PPC_STORE_U16(ctx.r4.u32 + 114, ctx.r7.u16);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r10,116(r4)
	PPC_STORE_U16(ctx.r4.u32 + 116, ctx.r10.u16);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r8,118(r4)
	PPC_STORE_U16(ctx.r4.u32 + 118, ctx.r8.u16);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r7,120(r4)
	PPC_STORE_U16(ctx.r4.u32 + 120, ctx.r7.u16);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// sth r10,122(r6)
	PPC_STORE_U16(ctx.r6.u32 + 122, ctx.r10.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r10,140(r7)
	PPC_STORE_U16(ctx.r7.u32 + 140, ctx.r10.u16);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r9,142(r4)
	PPC_STORE_U16(ctx.r4.u32 + 142, ctx.r9.u16);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// sth r8,144(r6)
	PPC_STORE_U16(ctx.r6.u32 + 144, ctx.r8.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r10,146(r7)
	PPC_STORE_U16(ctx.r7.u32 + 146, ctx.r10.u16);
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r9,148(r4)
	PPC_STORE_U16(ctx.r4.u32 + 148, ctx.r9.u16);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// sth r8,150(r9)
	PPC_STORE_U16(ctx.r9.u32 + 150, ctx.r8.u16);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// lwz r28,204(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 204);
	// rlwinm r7,r28,0,27,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm r7,r7,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// ori r6,r7,2048
	ctx.r6.u64 = ctx.r7.u64 | 2048;
	// stw r6,204(r5)
	PPC_STORE_U32(ctx.r5.u32 + 204, ctx.r6.u32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C00BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12788);
	// lwz r10,12728(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r30,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r30.u32);
	// stw r28,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r28.u32);
loc_82C00BF0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8221ad64
	ctx.lr = 0x82C00BFC;
	__restfpr_28(ctx, base);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C00C00"))) PPC_WEAK_FUNC(sub_82C00C00);
PPC_FUNC_IMPL(__imp__sub_82C00C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82C00C08;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82c00c38
	if (!ctx.cr6.gt) goto loc_82C00C38;
	// bl 0x82c00580
	ctx.lr = 0x82C00C2C;
	sub_82C00580(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82C00C38:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82ba0bb0
	ctx.lr = 0x82C00C50;
	sub_82BA0BB0(ctx, base);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// fsubs f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lwz r7,12728(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r7,472
	ctx.r11.s64 = ctx.r7.s64 + 472;
	// lfs f7,476(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 476);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f2,480(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 480);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f8,472(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 472);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f8,f2,f10
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmadds f11,f13,f13,f4
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmadds f5,f13,f1,f2
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmadds f4,f12,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f3,f12,f3,f5
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fdivs f11,f3,f4
	ctx.f11.f64 = double(float(ctx.f3.f64 / ctx.f4.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x82c00cf0
	if (!ctx.cr6.lt) goto loc_82C00CF0;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82c00d1c
	goto loc_82C00D1C;
loc_82C00CF0:
	// fcmpu cr6,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x82c00d08
	if (!ctx.cr6.gt) goto loc_82C00D08;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82c00d1c
	goto loc_82C00D1C;
loc_82C00D08:
	// lfs f5,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f10.f64));
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f0,f0,f11,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f13,f13,f11,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f4.f64));
loc_82C00D1C:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fmuls f0,f7,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f13,f3,f6
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f11,f1,f8
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmsubs f12,f3,f8,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 - ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmsubs f0,f1,f7,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 - ctx.f13.f64));
	// fmsubs f13,f6,f5,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 | ctx.r11.u64;
	// clrlwi r4,r5,1
	ctx.r4.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82c00d98
	if (!ctx.cr6.eq) goto loc_82C00D98;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f8,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// b 0x82c00dc8
	goto loc_82C00DC8;
loc_82C00D98:
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f12,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f6,f0,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 / ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f0,f8,f3
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmuls f12,f1,f8
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
loc_82C00DC8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// fadds f11,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,12792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12792);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f8,4(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f4,12(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f2,16(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f11,20(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f8,24(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f6,28(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// stfs f4,32(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f2,36(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f0,40(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,44(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r4,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r4.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f31,0(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f31,8(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f9,12(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f9,16(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f9,24(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stfs f31,28(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r30,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r30.u16);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// sth r6,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r6.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// sth r30,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, ctx.r30.u16);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r6,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r6.u16);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,12788(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12788);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// sth r8,10(r6)
	PPC_STORE_U16(ctx.r6.u32 + 10, ctx.r8.u16);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// sth r8,28(r4)
	PPC_STORE_U16(ctx.r4.u32 + 28, ctx.r8.u16);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// sth r10,30(r6)
	PPC_STORE_U16(ctx.r6.u32 + 30, ctx.r10.u16);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// sth r30,32(r4)
	PPC_STORE_U16(ctx.r4.u32 + 32, ctx.r30.u16);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// sth r8,34(r6)
	PPC_STORE_U16(ctx.r6.u32 + 34, ctx.r8.u16);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// sth r10,36(r4)
	PPC_STORE_U16(ctx.r4.u32 + 36, ctx.r10.u16);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// sth r30,38(r9)
	PPC_STORE_U16(ctx.r9.u32 + 38, ctx.r30.u16);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// lwz r31,204(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 204);
	// rlwinm r6,r31,0,27,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm r6,r6,0,24,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// ori r5,r6,2048
	ctx.r5.u64 = ctx.r6.u64 | 2048;
	// stw r5,204(r7)
	PPC_STORE_U32(ctx.r7.u32 + 204, ctx.r5.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C00F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12788);
	// lwz r10,12728(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// stw r31,204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 204, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C00FBC"))) PPC_WEAK_FUNC(sub_82C00FBC);
PPC_FUNC_IMPL(__imp__sub_82C00FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C00FC0"))) PPC_WEAK_FUNC(sub_82C00FC0);
PPC_FUNC_IMPL(__imp__sub_82C00FC0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f10,444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f8,448(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f4,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f2,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f0,f2,f12
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82bd25b8
	ctx.lr = 0x82C01054;
	sub_82BD25B8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f13,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f31
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// rlwinm r6,r8,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// lfs f5,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// lfs f2,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f3,164(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// beq cr6,0x82c01110
	if (ctx.cr6.eq) goto loc_82C01110;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82c010f4
	if (ctx.cr6.eq) goto loc_82C010F4;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
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
	// b 0x82c01104
	goto loc_82C01104;
loc_82C010F4:
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82C01104:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82747490
	ctx.lr = 0x82C01110;
	sub_82747490(ctx, base);
loc_82C01110:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 + 1104;
	// bl 0x82bb6900
	ctx.lr = 0x82C0111C;
	sub_82BB6900(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C01138"))) PPC_WEAK_FUNC(sub_82C01138);
PPC_FUNC_IMPL(__imp__sub_82C01138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82C01140;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r31,12728(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12728);
	// beq cr6,0x82c0136c
	if (ctx.cr6.eq) goto loc_82C0136C;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0136c
	if (ctx.cr6.eq) goto loc_82C0136C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0136c
	if (ctx.cr6.eq) goto loc_82C0136C;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c0136c
	if (ctx.cr6.eq) goto loc_82C0136C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0136c
	if (ctx.cr6.eq) goto loc_82C0136C;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0136c
	if (ctx.cr6.eq) goto loc_82C0136C;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// li r3,46
	ctx.r3.s64 = 46;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C011B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r12,231
	ctx.r12.s64 = 15138816;
	// lwz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r12,r12,2060
	ctx.r12.u64 = ctx.r12.u64 | 2060;
	// lwz r7,200(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r27,r31,208
	ctx.r27.s64 = ctx.r31.s64 + 208;
	// and r6,r8,r12
	ctx.r6.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,-3331
	ctx.r12.s64 = -218300416;
	// stw r6,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r6.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// oris r4,r5,62205
	ctx.r4.u64 = ctx.r5.u64 | 4076666880;
	// ori r4,r4,48640
	ctx.r4.u64 = ctx.r4.u64 | 48640;
	// ori r12,r12,48640
	ctx.r12.u64 = ctx.r12.u64 | 48640;
	// and r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ctx.r7.u64;
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// and r8,r10,r12
	ctx.r8.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// stw r9,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r9.u32);
	// stw r7,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c012e0
	if (ctx.cr6.eq) goto loc_82C012E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C01228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c012e0
	if (ctx.cr6.eq) goto loc_82C012E0;
	// lwz r11,2260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2260);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c01294
	if (!ctx.cr6.eq) goto loc_82C01294;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c01260
	if (ctx.cr6.eq) goto loc_82C01260;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c00fc0
	ctx.lr = 0x82C0125C;
	sub_82C00FC0(ctx, base);
	// b 0x82c0126c
	goto loc_82C0126C;
loc_82C01260:
	// addi r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 + 1104;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82bb6900
	ctx.lr = 0x82C0126C;
	sub_82BB6900(ctx, base);
loc_82C0126C:
	// lwz r3,2192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C01280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x82c0131c
	goto loc_82C0131C;
loc_82C01294:
	// addi r30,r31,1104
	ctx.r30.s64 = ctx.r31.s64 + 1104;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb6900
	ctx.lr = 0x82C012A4;
	sub_82BB6900(ctx, base);
	// lwz r3,2192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C012B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,2198(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2198);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01348
	if (ctx.cr6.eq) goto loc_82C01348;
	// lwz r10,1088(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1088);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-68
	ctx.r10.s64 = ctx.r10.s64 + -68;
	// sth r11,1094(r30)
	PPC_STORE_U16(ctx.r30.u32 + 1094, ctx.r11.u16);
	// stw r10,1088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1088, ctx.r10.u32);
	// b 0x82c01348
	goto loc_82C01348;
loc_82C012E0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c01300
	if (ctx.cr6.eq) goto loc_82C01300;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c00fc0
	ctx.lr = 0x82C012FC;
	sub_82C00FC0(ctx, base);
	// b 0x82c0130c
	goto loc_82C0130C;
loc_82C01300:
	// addi r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 + 1104;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x82bb6900
	ctx.lr = 0x82C0130C;
	sub_82BB6900(ctx, base);
loc_82C0130C:
	// lwz r3,2192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r3,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C0131C:
	// bctrl 
	ctx.lr = 0x82C01320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,2198(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2198);
	// addi r11,r31,1104
	ctx.r11.s64 = ctx.r31.s64 + 1104;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c01348
	if (ctx.cr6.eq) goto loc_82C01348;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r9,1088(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-68
	ctx.r9.s64 = ctx.r9.s64 + -68;
	// sth r10,1094(r11)
	PPC_STORE_U16(ctx.r11.u32 + 1094, ctx.r10.u16);
	// stw r9,1088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1088, ctx.r9.u32);
loc_82C01348:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,12728(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12728);
	// li r3,46
	ctx.r3.s64 = 46;
	// rlwinm r9,r10,0,22,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C0136C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C0136C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C01374"))) PPC_WEAK_FUNC(sub_82C01374);
PPC_FUNC_IMPL(__imp__sub_82C01374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C01378"))) PPC_WEAK_FUNC(sub_82C01378);
PPC_FUNC_IMPL(__imp__sub_82C01378) {
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
	// lwz r3,12712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0139c
	if (ctx.cr6.eq) goto loc_82C0139C;
	// bl 0x82120a70
	ctx.lr = 0x82C0139C;
	sub_82120A70(ctx, base);
loc_82C0139C:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r11.u32);
	// stw r10,12708(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12708, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82C013C4"))) PPC_WEAK_FUNC(sub_82C013C4);
PPC_FUNC_IMPL(__imp__sub_82C013C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C013C8"))) PPC_WEAK_FUNC(sub_82C013C8);
PPC_FUNC_IMPL(__imp__sub_82C013C8) {
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
	// lwz r11,13324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c01414
	if (ctx.cr6.eq) goto loc_82C01414;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,12504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c013fc
	if (ctx.cr6.eq) goto loc_82C013FC;
	// bl 0x82120a70
	ctx.lr = 0x82C013FC;
	sub_82120A70(ctx, base);
loc_82C013FC:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,12504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12504, ctx.r11.u32);
	// stw r10,12508(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12508, ctx.r10.u32);
	// bl 0x82c01378
	ctx.lr = 0x82C01414;
	sub_82C01378(ctx, base);
loc_82C01414:
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

__attribute__((alias("__imp__sub_82C01428"))) PPC_WEAK_FUNC(sub_82C01428);
PPC_FUNC_IMPL(__imp__sub_82C01428) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,12508(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12508);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82c014a4
	if (!ctx.cr6.gt) goto loc_82C014A4;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// stw r11,12508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12508, ctx.r11.u32);
	// lwz r3,12504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c01480
	if (ctx.cr6.eq) goto loc_82C01480;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82121828
	ctx.lr = 0x82C01468;
	sub_82121828(ctx, base);
	// stw r3,12504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12504, ctx.r3.u32);
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
loc_82C01480:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82120040
	ctx.lr = 0x82C0148C;
	sub_82120040(ctx, base);
	// stw r3,12504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12504, ctx.r3.u32);
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
loc_82C014A4:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12504(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12504);
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

__attribute__((alias("__imp__sub_82C014C0"))) PPC_WEAK_FUNC(sub_82C014C0);
PPC_FUNC_IMPL(__imp__sub_82C014C0) {
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
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x827fc5c0
	ctx.lr = 0x82C014E0;
	sub_827FC5C0(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82C014FC"))) PPC_WEAK_FUNC(sub_82C014FC);
PPC_FUNC_IMPL(__imp__sub_82C014FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C01500"))) PPC_WEAK_FUNC(sub_82C01500);
PPC_FUNC_IMPL(__imp__sub_82C01500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// b 0x82bcd7f0
	sub_82BCD7F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0150C"))) PPC_WEAK_FUNC(sub_82C0150C);
PPC_FUNC_IMPL(__imp__sub_82C0150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C01510"))) PPC_WEAK_FUNC(sub_82C01510);
PPC_FUNC_IMPL(__imp__sub_82C01510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// b 0x82bcd888
	sub_82BCD888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0151C"))) PPC_WEAK_FUNC(sub_82C0151C);
PPC_FUNC_IMPL(__imp__sub_82C0151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C01520"))) PPC_WEAK_FUNC(sub_82C01520);
PPC_FUNC_IMPL(__imp__sub_82C01520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// b 0x82bcd888
	sub_82BCD888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0152C"))) PPC_WEAK_FUNC(sub_82C0152C);
PPC_FUNC_IMPL(__imp__sub_82C0152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C01530"))) PPC_WEAK_FUNC(sub_82C01530);
PPC_FUNC_IMPL(__imp__sub_82C01530) {
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
	// lwz r3,12480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// bl 0x82bcd7f0
	ctx.lr = 0x82C0154C;
	sub_82BCD7F0(ctx, base);
	// lwz r3,12480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12480);
	// bl 0x82bce558
	ctx.lr = 0x82C01554;
	sub_82BCE558(ctx, base);
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

__attribute__((alias("__imp__sub_82C01568"))) PPC_WEAK_FUNC(sub_82C01568);
PPC_FUNC_IMPL(__imp__sub_82C01568) {
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
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r31,r11,-17492
	ctx.r31.s64 = ctx.r11.s64 + -17492;
	// lwz r3,-17492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c01590
	if (ctx.cr6.eq) goto loc_82C01590;
	// bl 0x82120a70
	ctx.lr = 0x82C01590;
	sub_82120A70(ctx, base);
loc_82C01590:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82C015BC"))) PPC_WEAK_FUNC(sub_82C015BC);
PPC_FUNC_IMPL(__imp__sub_82C015BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C015C0"))) PPC_WEAK_FUNC(sub_82C015C0);
PPC_FUNC_IMPL(__imp__sub_82C015C0) {
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
	// lis r31,-31945
	ctx.r31.s64 = -2093547520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,-17492
	ctx.r7.s64 = ctx.r31.s64 + -17492;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// stw r11,-17492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17492, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// li r3,8000
	ctx.r3.s64 = 8000;
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// bl 0x82120040
	ctx.lr = 0x82C01604;
	sub_82120040(ctx, base);
	// stw r3,-17492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17492, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82C0161C"))) PPC_WEAK_FUNC(sub_82C0161C);
PPC_FUNC_IMPL(__imp__sub_82C0161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C01620"))) PPC_WEAK_FUNC(sub_82C01620);
PPC_FUNC_IMPL(__imp__sub_82C01620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82C01628;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c01648
	if (ctx.cr6.eq) goto loc_82C01648;
	// lwz r28,20(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x82c0164c
	goto loc_82C0164C;
loc_82C01648:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C0164C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c01664
	if (ctx.cr6.eq) goto loc_82C01664;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be62a0
	ctx.lr = 0x82C01664;
	sub_82BE62A0(ctx, base);
loc_82C01664:
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c01684
	if (ctx.cr6.eq) goto loc_82C01684;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01684
	if (ctx.cr6.eq) goto loc_82C01684;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82c01688
	goto loc_82C01688;
loc_82C01684:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C01688:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// bne cr6,0x82c016cc
	if (!ctx.cr6.eq) goto loc_82C016CC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c016b8
	if (ctx.cr6.eq) goto loc_82C016B8;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82219130
	ctx.lr = 0x82C016B4;
	sub_82219130(ctx, base);
	// b 0x82c01780
	goto loc_82C01780;
loc_82C016B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82C016C8;
	sub_82219130(ctx, base);
	// b 0x82c01780
	goto loc_82C01780;
loc_82C016CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c01754
	if (ctx.cr6.eq) goto loc_82C01754;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c016f0
	if (ctx.cr6.eq) goto loc_82C016F0;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c016f0
	if (ctx.cr6.eq) goto loc_82C016F0;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82c016f4
	goto loc_82C016F4;
loc_82C016F0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82C016F4:
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82c01734
	if (!ctx.cr6.lt) goto loc_82C01734;
loc_82C01718:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c01738
	if (ctx.cr6.eq) goto loc_82C01738;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c01718
	if (ctx.cr6.lt) goto loc_82C01718;
loc_82C01734:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82C01738:
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mulli r11,r10,68
	ctx.r11.s64 = ctx.r10.s64 * 68;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// b 0x82c01778
	goto loc_82C01778;
loc_82C01754:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c01764
	if (ctx.cr6.eq) goto loc_82C01764;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// b 0x82c01768
	goto loc_82C01768;
loc_82C01764:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82C01768:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82747da0
	ctx.lr = 0x82C01770;
	sub_82747DA0(ctx, base);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82C01778:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747e68
	ctx.lr = 0x82C01780;
	sub_82747E68(ctx, base);
loc_82C01780:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,163(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 163);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c0188c
	if (ctx.cr6.eq) goto loc_82C0188C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c017c0
	if (ctx.cr6.eq) goto loc_82C017C0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,163(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 163);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r9,163(r11)
	PPC_STORE_U8(ctx.r11.u32 + 163, ctx.r9.u8);
loc_82C017C0:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// beq cr6,0x82c017f8
	if (ctx.cr6.eq) goto loc_82C017F8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c017f8
	if (ctx.cr6.eq) goto loc_82C017F8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82c017fc
	goto loc_82C017FC;
loc_82C017F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C017FC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82c0188c
	if (!ctx.cr6.eq) goto loc_82C0188C;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,164(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fmr f6,f12
	ctx.f6.f64 = ctx.f12.f64;
	// stfs f7,56(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fmr f3,f11
	ctx.f3.f64 = ctx.f11.f64;
	// fmr f2,f9
	ctx.f2.f64 = ctx.f9.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fsubs f13,f3,f8
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// fsubs f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// fsubs f11,f4,f5
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fadds f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfs f9,60(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// fadds f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f8,56(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f7,64(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// bl 0x82be5ba0
	ctx.lr = 0x82C0188C;
	sub_82BE5BA0(ctx, base);
loc_82C0188C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c018ac
	if (!ctx.cr6.eq) goto loc_82C018AC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82747e68
	ctx.lr = 0x82C018AC;
	sub_82747E68(ctx, base);
loc_82C018AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C018B4"))) PPC_WEAK_FUNC(sub_82C018B4);
PPC_FUNC_IMPL(__imp__sub_82C018B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C018B8"))) PPC_WEAK_FUNC(sub_82C018B8);
PPC_FUNC_IMPL(__imp__sub_82C018B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x82C018C0;
	__savegprlr_17(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r19,-31942
	ctx.r19.s64 = -2093350912;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r8,12728(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12728);
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r23,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r23.u32);
	// lwz r29,12(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r10,36(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// xori r18,r7,1
	ctx.r18.u64 = ctx.r7.u64 ^ 1;
	// bne cr6,0x82c01908
	if (!ctx.cr6.eq) goto loc_82C01908;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
loc_82C01908:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827e4d40
	ctx.lr = 0x82C0191C;
	sub_827E4D40(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stb r9,236(r8)
	PPC_STORE_U8(ctx.r8.u32 + 236, ctx.r9.u8);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r6,86(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 86);
	// rlwinm r5,r6,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r21,r11,-8
	ctx.r21.s64 = ctx.r11.s64 + -8;
	// beq cr6,0x82c01a10
	if (ctx.cr6.eq) goto loc_82C01A10;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b95088
	ctx.lr = 0x82C01964;
	sub_82B95088(ctx, base);
	// lwz r4,144(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 144);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c01978
	if (ctx.cr6.eq) goto loc_82C01978;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82C01978:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,26668
	ctx.r30.s64 = ctx.r11.s64 + 26668;
	// beq cr6,0x82c019b8
	if (ctx.cr6.eq) goto loc_82C019B8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c019b8
	if (ctx.cr6.eq) goto loc_82C019B8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c019a4
	if (ctx.cr6.eq) goto loc_82C019A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc88b8
	ctx.lr = 0x82C019A4;
	sub_82BC88B8(ctx, base);
loc_82C019A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bc8978
	ctx.lr = 0x82C019B4;
	sub_82BC8978(ctx, base);
	// stw r3,144(r24)
	PPC_STORE_U32(ctx.r24.u32 + 144, ctx.r3.u32);
loc_82C019B8:
	// lwz r4,136(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c019cc
	if (ctx.cr6.eq) goto loc_82C019CC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82C019CC:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c01a04
	if (ctx.cr6.eq) goto loc_82C01A04;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c01a04
	if (ctx.cr6.eq) goto loc_82C01A04;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c019f0
	if (ctx.cr6.eq) goto loc_82C019F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc88b8
	ctx.lr = 0x82C019F0;
	sub_82BC88B8(ctx, base);
loc_82C019F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bc8978
	ctx.lr = 0x82C01A00;
	sub_82BC8978(ctx, base);
	// stw r3,136(r24)
	PPC_STORE_U32(ctx.r24.u32 + 136, ctx.r3.u32);
loc_82C01A04:
	// lwz r8,12728(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12728);
	// lwz r11,2424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2424);
	// stw r11,88(r24)
	PPC_STORE_U32(ctx.r24.u32 + 88, ctx.r11.u32);
loc_82C01A10:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x82c01b84
	if (ctx.cr6.gt) goto loc_82C01B84;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// li r22,255
	ctx.r22.s64 = 255;
loc_82C01A30:
	// rlwinm r11,r27,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r11,45
	ctx.r11.s64 = ctx.r11.s64 + 45;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x82c01a48
	if (!ctx.cr6.eq) goto loc_82C01A48;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82C01A48:
	// lbz r11,86(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 86);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c01a68
	if (ctx.cr6.eq) goto loc_82C01A68;
	// lwzx r11,r26,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r24.u32);
	// and r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c01b68
	if (ctx.cr6.eq) goto loc_82C01B68;
loc_82C01A68:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82c01a88
	if (ctx.cr6.eq) goto loc_82C01A88;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82c01b80
	if (!ctx.cr6.lt) goto loc_82C01B80;
loc_82C01A88:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r22,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r22.u8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01b08
	if (ctx.cr6.eq) goto loc_82C01B08;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c01b08
	if (!ctx.cr6.gt) goto loc_82C01B08;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82C01AC0;
	sub_82219130(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82124910
	ctx.lr = 0x82C01AC8;
	sub_82124910(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82C01ADC;
	sub_82219130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133e00
	ctx.lr = 0x82C01AE4;
	sub_82133E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9fe60
	ctx.lr = 0x82C01AF4;
	sub_82B9FE60(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,68
	ctx.r5.s64 = 68;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82219130
	ctx.lr = 0x82C01B04;
	sub_82219130(ctx, base);
	// b 0x82c01b54
	goto loc_82C01B54;
loc_82C01B08:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c01b68
	if (ctx.cr6.eq) goto loc_82C01B68;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c01b48
	if (!ctx.cr6.eq) goto loc_82C01B48;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82c01620
	ctx.lr = 0x82C01B48;
	sub_82C01620(ctx, base);
loc_82C01B48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133e00
	ctx.lr = 0x82C01B50;
	sub_82133E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C01B54:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82c01b68
	if (ctx.cr6.eq) goto loc_82C01B68;
	// lwzx r11,r26,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r24.u32);
	// or r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 | ctx.r29.u64;
	// stwx r10,r26,r24
	PPC_STORE_U32(ctx.r26.u32 + ctx.r24.u32, ctx.r10.u32);
loc_82C01B68:
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,68
	ctx.r25.s64 = ctx.r25.s64 + 68;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x82c01a30
	if (!ctx.cr6.gt) goto loc_82C01A30;
loc_82C01B80:
	// lwz r8,12728(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12728);
loc_82C01B84:
	// lbz r10,86(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 86);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stb r9,86(r24)
	PPC_STORE_U8(ctx.r24.u32 + 86, ctx.r9.u8);
	// stb r20,236(r8)
	PPC_STORE_U8(ctx.r8.u32 + 236, ctx.r20.u8);
	// stw r20,228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 228, ctx.r20.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C01BA0"))) PPC_WEAK_FUNC(sub_82C01BA0);
PPC_FUNC_IMPL(__imp__sub_82C01BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82C01BA8;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8960(r1)
	ea = -8960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r23,12(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c01e64
	if (ctx.cr6.eq) goto loc_82C01E64;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c01c04
	if (ctx.cr6.eq) goto loc_82C01C04;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c01c04
	if (ctx.cr6.eq) goto loc_82C01C04;
	// bl 0x82133cc8
	ctx.lr = 0x82C01C00;
	sub_82133CC8(ctx, base);
	// stw r3,13308(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13308, ctx.r3.u32);
loc_82C01C04:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r21,1
	ctx.r21.s64 = 1;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// clrlwi r28,r11,28
	ctx.r28.u64 = ctx.r11.u32 & 0xF;
	// lfs f30,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c01d5c
	if (ctx.cr6.eq) goto loc_82C01D5C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01d5c
	if (ctx.cr6.eq) goto loc_82C01D5C;
	// lbz r11,83(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 83);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c01d5c
	if (!ctx.cr6.eq) goto loc_82C01D5C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01d5c
	if (ctx.cr6.eq) goto loc_82C01D5C;
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r31,36
	ctx.r27.s64 = ctx.r31.s64 + 36;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
loc_82C01C60:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c01d40
	if (ctx.cr6.eq) goto loc_82C01D40;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01d40
	if (ctx.cr6.eq) goto loc_82C01D40;
	// lbz r11,83(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 83);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c01d40
	if (!ctx.cr6.eq) goto loc_82C01D40;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c01cb8
	if (ctx.cr6.eq) goto loc_82C01CB8;
	// lwz r11,12492(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12492);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82bfbb40
	ctx.lr = 0x82C01CB8;
	sub_82BFBB40(ctx, base);
loc_82C01CB8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f30,f0
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// bl 0x82133dd8
	ctx.lr = 0x82C01CD4;
	sub_82133DD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c01d24
	if (ctx.cr6.eq) goto loc_82C01D24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82132428
	ctx.lr = 0x82C01CE4;
	sub_82132428(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c01d24
	if (!ctx.cr6.eq) goto loc_82C01D24;
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82133b78
	ctx.lr = 0x82C01CF8;
	sub_82133B78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01d24
	if (ctx.cr6.eq) goto loc_82C01D24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82133bf0
	ctx.lr = 0x82C01D0C;
	sub_82133BF0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfs f31,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
loc_82C01D24:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bfa630
	ctx.lr = 0x82C01D40;
	sub_82BFA630(ctx, base);
loc_82C01D40:
	// rlwinm r28,r28,31,25,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7F;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c01c60
	if (!ctx.cr6.eq) goto loc_82C01C60;
	// b 0x82c01d60
	goto loc_82C01D60;
loc_82C01D5C:
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
loc_82C01D60:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stw r10,13308(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13308, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c01e64
	if (ctx.cr6.eq) goto loc_82C01E64;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01da4
	if (ctx.cr6.eq) goto loc_82C01DA4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01da4
	if (ctx.cr6.eq) goto loc_82C01DA4;
	// lbz r11,83(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 83);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c01e64
	if (ctx.cr6.eq) goto loc_82C01E64;
loc_82C01DA4:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01e64
	if (ctx.cr6.eq) goto loc_82C01E64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bfa630
	ctx.lr = 0x82C01DCC;
	sub_82BFA630(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lfs f31,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
loc_82C01DD8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82c01dec
	if (!ctx.cr6.lt) goto loc_82C01DEC;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
loc_82C01DEC:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r21,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r21.u8);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82784e10
	ctx.lr = 0x82C01E04;
	sub_82784E10(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stb r20,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r20.u8);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lfs f1,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82c01e58
	if (!ctx.cr6.gt) goto loc_82C01E58;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x82c01e58
	if (!ctx.cr6.lt) goto loc_82C01E58;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// bl 0x82bfa630
	ctx.lr = 0x82C01E58;
	sub_82BFA630(ctx, base);
loc_82C01E58:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82c01dd8
	if (ctx.cr6.lt) goto loc_82C01DD8;
loc_82C01E64:
	// addi r1,r1,8960
	ctx.r1.s64 = ctx.r1.s64 + 8960;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C01E74"))) PPC_WEAK_FUNC(sub_82C01E74);
PPC_FUNC_IMPL(__imp__sub_82C01E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C01E78"))) PPC_WEAK_FUNC(sub_82C01E78);
PPC_FUNC_IMPL(__imp__sub_82C01E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82C01E80;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// rlwinm r7,r9,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c01ed0
	if (ctx.cr6.eq) goto loc_82C01ED0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c01ed0
	if (ctx.cr6.eq) goto loc_82C01ED0;
	// lbz r11,83(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 83);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c01ed0
	if (!ctx.cr6.eq) goto loc_82C01ED0;
	// bl 0x82c01ba0
	ctx.lr = 0x82C01ED0;
	sub_82C01BA0(ctx, base);
loc_82C01ED0:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r25,12(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c01f08
	if (!ctx.cr6.eq) goto loc_82C01F08;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c01f08
	if (ctx.cr6.eq) goto loc_82C01F08;
	// lbz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c01f08
	if (ctx.cr6.eq) goto loc_82C01F08;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827ac670
	ctx.lr = 0x82C01F08;
	sub_827AC670(ctx, base);
loc_82C01F08:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r24,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r24.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r22,r9,1
	ctx.r22.u64 = ctx.r9.u64 ^ 1;
	// bne cr6,0x82c01f3c
	if (!ctx.cr6.eq) goto loc_82C01F3C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// stw r24,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_82C01F3C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82c01f9c
	if (ctx.cr6.eq) goto loc_82C01F9C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82c01f9c
	if (!ctx.cr6.eq) goto loc_82C01F9C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c01f88
	if (ctx.cr6.eq) goto loc_82C01F88;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c01f88
	if (ctx.cr6.eq) goto loc_82C01F88;
	// lbz r10,83(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 83);
	// rlwinm r9,r10,0,24,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0;
	// rlwinm r9,r9,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c01f9c
	if (ctx.cr6.eq) goto loc_82C01F9C;
loc_82C01F88:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c01fa0
	if (ctx.cr6.eq) goto loc_82C01FA0;
loc_82C01F9C:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82C01FA0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82c01fd4
	if (ctx.cr6.eq) goto loc_82C01FD4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r10,r10,0,27,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// rlwinm r8,r8,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r7,r10,-144
	ctx.r7.s64 = ctx.r10.s64 + -144;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// or r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 | ctx.r27.u64;
loc_82C01FD4:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r8,r9,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r30,16(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r26,r11,-8
	ctx.r26.s64 = ctx.r11.s64 + -8;
	// beq cr6,0x82c02050
	if (ctx.cr6.eq) goto loc_82C02050;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02050
	if (ctx.cr6.eq) goto loc_82C02050;
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c02050
	if (ctx.cr6.eq) goto loc_82C02050;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x82c02050
	if (!ctx.cr6.eq) goto loc_82C02050;
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82c02050
	if (!ctx.cr6.gt) goto loc_82C02050;
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
loc_82C0202C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0221c
	if (ctx.cr6.eq) goto loc_82C0221C;
	// bl 0x82be62a0
	ctx.lr = 0x82C0203C;
	sub_82BE62A0(ctx, base);
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c0202c
	if (ctx.cr6.lt) goto loc_82C0202C;
loc_82C02050:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82c021a0
	if (ctx.cr6.eq) goto loc_82C021A0;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82c02128
	if (ctx.cr6.gt) goto loc_82C02128;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r28,r30,24
	ctx.r28.s64 = ctx.r30.s64 + 24;
loc_82C0206C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82c0208c
	if (ctx.cr6.eq) goto loc_82C0208C;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82c02128
	if (!ctx.cr6.lt) goto loc_82C02128;
loc_82C0208C:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82c020b8
	if (!ctx.cr6.lt) goto loc_82C020B8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// dcbt r0,r11
	// lwz r10,-8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// dcbt r0,r9
	// lwz r8,-16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// dcbt r0,r6
loc_82C020B8:
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82c01620
	ctx.lr = 0x82C020DC;
	sub_82C01620(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r9,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c02110
	if (ctx.cr6.eq) goto loc_82C02110;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02110
	if (ctx.cr6.eq) goto loc_82C02110;
	// lis r4,256
	ctx.r4.s64 = 16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e5078
	ctx.lr = 0x82C02108;
	sub_827E5078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e4ff0
	ctx.lr = 0x82C02110;
	sub_827E4FF0(ctx, base);
loc_82C02110:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82c0206c
	if (!ctx.cr6.gt) goto loc_82C0206C;
loc_82C02128:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82c0221c
	if (ctx.cr6.gt) goto loc_82C0221C;
loc_82C0213C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82c0215c
	if (ctx.cr6.eq) goto loc_82C0215C;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82c0221c
	if (!ctx.cr6.lt) goto loc_82C0221C;
loc_82C0215C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02188
	if (ctx.cr6.eq) goto loc_82C02188;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02188
	if (ctx.cr6.eq) goto loc_82C02188;
	// lis r4,2048
	ctx.r4.s64 = 134217728;
	// bl 0x827e5078
	ctx.lr = 0x82C02188;
	sub_827E5078(ctx, base);
loc_82C02188:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82c0213c
	if (!ctx.cr6.gt) goto loc_82C0213C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_82C021A0:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82c0221c
	if (ctx.cr6.gt) goto loc_82C0221C;
loc_82C021AC:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82c021cc
	if (ctx.cr6.eq) goto loc_82C021CC;
	// lwz r11,28(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82c0221c
	if (!ctx.cr6.lt) goto loc_82C0221C;
loc_82C021CC:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0220c
	if (ctx.cr6.eq) goto loc_82C0220C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0220c
	if (ctx.cr6.eq) goto loc_82C0220C;
	// li r5,54
	ctx.r5.s64 = 54;
	// lis r4,2304
	ctx.r4.s64 = 150994944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e4f58
	ctx.lr = 0x82C02200;
	sub_827E4F58(ctx, base);
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e4ec0
	ctx.lr = 0x82C0220C;
	sub_827E4EC0(ctx, base);
loc_82C0220C:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82c021ac
	if (!ctx.cr6.gt) goto loc_82C021AC;
loc_82C0221C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C02224"))) PPC_WEAK_FUNC(sub_82C02224);
PPC_FUNC_IMPL(__imp__sub_82C02224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C02228"))) PPC_WEAK_FUNC(sub_82C02228);
PPC_FUNC_IMPL(__imp__sub_82C02228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C02230;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r7,r11,108
	ctx.r7.s64 = ctx.r11.s64 + 108;
	// addi r6,r11,132
	ctx.r6.s64 = ctx.r11.s64 + 132;
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// bl 0x827e6900
	ctx.lr = 0x82C02298;
	sub_827E6900(ctx, base);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02410
	if (ctx.cr6.eq) goto loc_82C02410;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r29,r11,26668
	ctx.r29.s64 = ctx.r11.s64 + 26668;
loc_82C022AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821249a8
	ctx.lr = 0x82C022B4;
	sub_821249A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e6b90
	ctx.lr = 0x82C022C0;
	sub_827E6B90(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c02404
	if (ctx.cr6.eq) goto loc_82C02404;
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82c02404
	if (ctx.cr6.eq) goto loc_82C02404;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02338
	if (ctx.cr6.eq) goto loc_82C02338;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c02300
	if (ctx.cr6.eq) goto loc_82C02300;
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
loc_82C02300:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c0231c
	if (ctx.cr6.eq) goto loc_82C0231C;
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
loc_82C0231C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c02338
	if (ctx.cr6.eq) goto loc_82C02338;
	// stw r30,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r30.u32);
loc_82C02338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02404
	if (ctx.cr6.eq) goto loc_82C02404;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 124);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c02364
	if (ctx.cr6.eq) goto loc_82C02364;
	// stw r30,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r30.u32);
loc_82C02364:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,144(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c0238c
	if (ctx.cr6.eq) goto loc_82C0238C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc88b8
	ctx.lr = 0x82C02380;
	sub_82BC88B8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r30.u32);
loc_82C0238C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,136(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c023b4
	if (ctx.cr6.eq) goto loc_82C023B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc88b8
	ctx.lr = 0x82C023A8;
	sub_82BC88B8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r30.u32);
loc_82C023B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c023dc
	if (ctx.cr6.eq) goto loc_82C023DC;
	// lbz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 124);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c023dc
	if (ctx.cr6.eq) goto loc_82C023DC;
	// stw r30,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r30.u32);
loc_82C023DC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02404
	if (ctx.cr6.eq) goto loc_82C02404;
	// lbz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 124);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c02404
	if (ctx.cr6.eq) goto loc_82C02404;
	// stw r30,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r30.u32);
loc_82C02404:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c022ac
	if (!ctx.cr6.eq) goto loc_82C022AC;
loc_82C02410:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e7200
	ctx.lr = 0x82C02418;
	sub_827E7200(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C02420"))) PPC_WEAK_FUNC(sub_82C02420);
PPC_FUNC_IMPL(__imp__sub_82C02420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82C02428;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bne cr6,0x82c02508
	if (!ctx.cr6.eq) goto loc_82C02508;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r7,r11,108
	ctx.r7.s64 = ctx.r11.s64 + 108;
	// addi r6,r11,132
	ctx.r6.s64 = ctx.r11.s64 + 132;
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// bl 0x827e6900
	ctx.lr = 0x82C024B0;
	sub_827E6900(ctx, base);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c024fc
	if (ctx.cr6.eq) goto loc_82C024FC;
loc_82C024BC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821249a8
	ctx.lr = 0x82C024C4;
	sub_821249A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x827e6b90
	ctx.lr = 0x82C024D4;
	sub_827E6B90(ctx, base);
	// lbz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c024f0
	if (!ctx.cr6.eq) goto loc_82C024F0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212f980
	ctx.lr = 0x82C024F0;
	sub_8212F980(ctx, base);
loc_82C024F0:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c024bc
	if (!ctx.cr6.eq) goto loc_82C024BC;
loc_82C024FC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827e7200
	ctx.lr = 0x82C02504;
	sub_827E7200(ctx, base);
	// b 0x82c02560
	goto loc_82C02560;
loc_82C02508:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82c0256c
	if (ctx.cr6.gt) goto loc_82C0256C;
loc_82C0251C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82c02558
	if (ctx.cr6.eq) goto loc_82C02558;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82c02558
	if (ctx.cr6.eq) goto loc_82C02558;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c02558
	if (!ctx.cr6.eq) goto loc_82C02558;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212f980
	ctx.lr = 0x82C02558;
	sub_8212F980(ctx, base);
loc_82C02558:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82c0251c
	if (!ctx.cr6.gt) goto loc_82C0251C;
loc_82C02560:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c02574
	if (!ctx.cr6.eq) goto loc_82C02574;
loc_82C0256C:
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// b 0x82c02580
	goto loc_82C02580;
loc_82C02574:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r24,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r9.s32 >> 2;
loc_82C02580:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82c02710
	if (ctx.cr6.eq) goto loc_82C02710;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
loc_82C0259C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c025b8
	if (ctx.cr6.eq) goto loc_82C025B8;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c025bc
	if (ctx.cr6.lt) goto loc_82C025BC;
loc_82C025B8:
	// twi 31,r0,22
loc_82C025BC:
	// lwzx r31,r25,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// bl 0x827e17c8
	ctx.lr = 0x82C025D4;
	sub_827E17C8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c026fc
	if (ctx.cr6.eq) goto loc_82C026FC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c02630
	if (ctx.cr6.eq) goto loc_82C02630;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r28,12480(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x82C02604;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc5990
	ctx.lr = 0x82C02620;
	sub_82BC5990(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82C0262C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_82C02630:
	// lwz r29,56(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c02674
	if (ctx.cr6.eq) goto loc_82C02674;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r28,12480(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x82C02648;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc5990
	ctx.lr = 0x82C02664;
	sub_82BC5990(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82C02670;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_82C02674:
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c026b8
	if (ctx.cr6.eq) goto loc_82C026B8;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r28,12480(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x82C0268C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc5990
	ctx.lr = 0x82C026A8;
	sub_82BC5990(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82C026B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_82C026B8:
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c026fc
	if (ctx.cr6.eq) goto loc_82C026FC;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r28,12480(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x82C026D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc5990
	ctx.lr = 0x82C026EC;
	sub_82BC5990(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82C026F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
loc_82C026FC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82c0259c
	if (ctx.cr6.lt) goto loc_82C0259C;
loc_82C02710:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02774
	if (ctx.cr6.eq) goto loc_82C02774;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lwz r31,-17448(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// lwz r30,-17440(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82C02734;
	sub_821FD9D8(ctx, base);
	// lis r4,-32029
	ctx.r4.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,-17444(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -17444);
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
	ctx.lr = 0x82C02764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c02774
	if (ctx.cr6.eq) goto loc_82C02774;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82C02774;
	sub_821FD9E0(ctx, base);
loc_82C02774:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0277C"))) PPC_WEAK_FUNC(sub_82C0277C);
PPC_FUNC_IMPL(__imp__sub_82C0277C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C02780"))) PPC_WEAK_FUNC(sub_82C02780);
PPC_FUNC_IMPL(__imp__sub_82C02780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82C02788;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// beq cr6,0x82c027b0
	if (ctx.cr6.eq) goto loc_82C027B0;
	// lwz r11,13412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13412);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827ef3d0
	ctx.lr = 0x82C027B0;
	sub_827EF3D0(ctx, base);
loc_82C027B0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c02d64
	if (ctx.cr6.eq) goto loc_82C02D64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r10,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02808
	if (ctx.cr6.eq) goto loc_82C02808;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c027f8
	if (ctx.cr6.eq) goto loc_82C027F8;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c027f8
	if (ctx.cr6.eq) goto loc_82C027F8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x82bd5758
	ctx.lr = 0x82C027F4;
	sub_82BD5758(ctx, base);
	// b 0x82c02808
	goto loc_82C02808;
loc_82C027F8:
	// li r5,-1
	ctx.r5.s64 = -1;
	// rlwinm r4,r10,0,9,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827d5090
	ctx.lr = 0x82C02808;
	sub_827D5090(ctx, base);
loc_82C02808:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02838
	if (ctx.cr6.eq) goto loc_82C02838;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c02838
	if (ctx.cr6.eq) goto loc_82C02838;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C02838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C02838:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02868
	if (ctx.cr6.eq) goto loc_82C02868;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02868
	if (ctx.cr6.eq) goto loc_82C02868;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82C02868:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02b78
	if (ctx.cr6.eq) goto loc_82C02B78;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c02b44
	if (ctx.cr6.eq) goto loc_82C02B44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C028A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 11, ctx.xer);
	// beq cr6,0x82c02948
	if (ctx.cr6.eq) goto loc_82C02948;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c028f4
	if (ctx.cr6.eq) goto loc_82C028F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c028f4
	if (ctx.cr6.eq) goto loc_82C028F4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c028f4
	if (ctx.cr6.eq) goto loc_82C028F4;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c028f4
	if (ctx.cr6.eq) goto loc_82C028F4;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// beq cr6,0x82c028f8
	if (ctx.cr6.eq) goto loc_82C028F8;
loc_82C028F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C028F8:
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02940
	if (ctx.cr6.eq) goto loc_82C02940;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c02940
	if (ctx.cr6.eq) goto loc_82C02940;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02940
	if (ctx.cr6.eq) goto loc_82C02940;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02940
	if (ctx.cr6.eq) goto loc_82C02940;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x82c02944
	if (ctx.cr6.eq) goto loc_82C02944;
loc_82C02940:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C02944:
	// stw r11,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r11.u32);
loc_82C02948:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82c02998
	if (!ctx.cr6.eq) goto loc_82C02998;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ba8ce8
	ctx.lr = 0x82C02960;
	sub_82BA8CE8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c02998
	if (!ctx.cr6.eq) goto loc_82C02998;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r31,r11,48
	ctx.r31.s64 = ctx.r11.s64 + 48;
loc_82C02978:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c0298c
	if (ctx.cr6.eq) goto loc_82C0298C;
	// lwz r3,13412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13412);
	// bl 0x827ef1b0
	ctx.lr = 0x82C0298C;
	sub_827EF1B0(ctx, base);
loc_82C0298C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82c02978
	if (!ctx.cr0.eq) goto loc_82C02978;
loc_82C02998:
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c029dc
	if (ctx.cr6.eq) goto loc_82C029DC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82c029dc
	if (!ctx.cr6.eq) goto loc_82C029DC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c029dc
	if (ctx.cr6.eq) goto loc_82C029DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x82C029D0;
	sub_82121828(ctx, base);
	// stw r3,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r3.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82C029DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82c029f4
	if (ctx.cr6.eq) goto loc_82C029F4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82c02b5c
	if (!ctx.cr6.eq) goto loc_82C02B5C;
loc_82C029F4:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r4,r4,0,16,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r4,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r4.u32);
	// beq cr6,0x82c02a38
	if (ctx.cr6.eq) goto loc_82C02A38;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x82c02aa0
	if (ctx.cr6.eq) goto loc_82C02AA0;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02a38
	if (ctx.cr6.eq) goto loc_82C02A38;
loc_82C02A30:
	// oris r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 | 65536;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82C02A38:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02a50
	if (ctx.cr6.eq) goto loc_82C02A50;
	// rlwinm r11,r11,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82C02A50:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02b5c
	if (ctx.cr6.eq) goto loc_82C02B5C;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02b5c
	if (ctx.cr6.eq) goto loc_82C02B5C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02b5c
	if (ctx.cr6.eq) goto loc_82C02B5C;
loc_82C02A78:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x82c02a90
	if (!ctx.cr6.eq) goto loc_82C02A90;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82C02A90:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c02a78
	if (!ctx.cr6.eq) goto loc_82C02A78;
	// b 0x82c02b5c
	goto loc_82C02B5C;
loc_82C02AA0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82c02a38
	if (!ctx.cr6.eq) goto loc_82C02A38;
	// lwz r5,48(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82c02a38
	if (!ctx.cr6.gt) goto loc_82C02A38;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82C02AD0:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x82c02b14
	if (!ctx.cr6.eq) goto loc_82C02B14;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c02b30
	if (!ctx.cr6.lt) goto loc_82C02B30;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c02b30
	if (ctx.cr6.eq) goto loc_82C02B30;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bne cr6,0x82c02b30
	if (!ctx.cr6.eq) goto loc_82C02B30;
	// b 0x82c02b18
	goto loc_82C02B18;
loc_82C02B14:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82C02B18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02b30
	if (ctx.cr6.eq) goto loc_82C02B30;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c02a30
	if (!ctx.cr6.eq) goto loc_82C02A30;
loc_82C02B30:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82c02ad0
	if (ctx.cr6.lt) goto loc_82C02AD0;
	// b 0x82c02a38
	goto loc_82C02A38;
loc_82C02B44:
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c02b54
	if (ctx.cr6.eq) goto loc_82C02B54;
	// bl 0x82120a70
	ctx.lr = 0x82C02B54;
	sub_82120A70(ctx, base);
loc_82C02B54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_82C02B5C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c02b78
	if (ctx.cr6.eq) goto loc_82C02B78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C02B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C02B78:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02c00
	if (ctx.cr6.eq) goto loc_82C02C00;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02c00
	if (ctx.cr6.eq) goto loc_82C02C00;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c02bc0
	if (ctx.cr6.eq) goto loc_82C02BC0;
loc_82C02BA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C02BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c02ba0
	if (!ctx.cr6.eq) goto loc_82C02BA0;
loc_82C02BC0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02c00
	if (ctx.cr6.eq) goto loc_82C02C00;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02c00
	if (ctx.cr6.eq) goto loc_82C02C00;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02c00
	if (ctx.cr6.eq) goto loc_82C02C00;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82C02C00:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02d64
	if (ctx.cr6.eq) goto loc_82C02D64;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c02c5c
	if (ctx.cr6.eq) goto loc_82C02C5C;
	// bl 0x821339c8
	ctx.lr = 0x82C02C28;
	sub_821339C8(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// bl 0x821339c8
	ctx.lr = 0x82C02C34;
	sub_821339C8(ctx, base);
	// lbz r11,162(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 162);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02ca0
	if (ctx.cr6.eq) goto loc_82C02CA0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bdb790
	ctx.lr = 0x82C02C58;
	sub_82BDB790(ctx, base);
	// b 0x82c02ca0
	goto loc_82C02CA0;
loc_82C02C5C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02c78
	if (ctx.cr6.eq) goto loc_82C02C78;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c02c78
	if (ctx.cr6.eq) goto loc_82C02C78;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82bfa5a8
	ctx.lr = 0x82C02C78;
	sub_82BFA5A8(ctx, base);
loc_82C02C78:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02ca0
	if (ctx.cr6.eq) goto loc_82C02CA0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82779940
	ctx.lr = 0x82C02CA0;
	sub_82779940(ctx, base);
loc_82C02CA0:
	// lbz r10,86(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r9.u8);
	// beq cr6,0x82c02d64
	if (ctx.cr6.eq) goto loc_82C02D64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02d64
	if (ctx.cr6.eq) goto loc_82C02D64;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82c02d64
	if (ctx.cr6.gt) goto loc_82C02D64;
	// li r7,-128
	ctx.r7.s64 = -128;
loc_82C02CDC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02d58
	if (ctx.cr6.eq) goto loc_82C02D58;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82c02d58
	if (ctx.cr6.eq) goto loc_82C02D58;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02d58
	if (ctx.cr6.eq) goto loc_82C02D58;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r10,0,17,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c02d58
	if (ctx.cr6.eq) goto loc_82C02D58;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02d58
	if (ctx.cr6.eq) goto loc_82C02D58;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82c02d3c
	if (ctx.cr6.eq) goto loc_82C02D3C;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82c02d58
	if (!ctx.cr6.eq) goto loc_82C02D58;
loc_82C02D3C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02d58
	if (ctx.cr6.eq) goto loc_82C02D58;
	// lbz r10,86(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stb r6,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r6.u8);
loc_82C02D58:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82c02cdc
	if (!ctx.cr6.gt) goto loc_82C02CDC;
loc_82C02D64:
	// lbz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,8(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C02D78"))) PPC_WEAK_FUNC(sub_82C02D78);
PPC_FUNC_IMPL(__imp__sub_82C02D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82C02D80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r5,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02de0
	if (ctx.cr6.eq) goto loc_82C02DE0;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02de0
	if (ctx.cr6.eq) goto loc_82C02DE0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02de0
	if (ctx.cr6.eq) goto loc_82C02DE0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c02de0
	if (!ctx.cr6.eq) goto loc_82C02DE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r5,0,18,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// bl 0x827d5090
	ctx.lr = 0x82C02DE0;
	sub_827D5090(ctx, base);
loc_82C02DE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e1040
	ctx.lr = 0x82C02DE8;
	sub_827E1040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827af960
	ctx.lr = 0x82C02DF0;
	sub_827AF960(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02e04
	if (ctx.cr6.eq) goto loc_82C02E04;
	// bl 0x827d2a10
	ctx.lr = 0x82C02E04;
	sub_827D2A10(ctx, base);
loc_82C02E04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02e20
	if (ctx.cr6.eq) goto loc_82C02E20;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bd6590
	ctx.lr = 0x82C02E20;
	sub_82BD6590(ctx, base);
loc_82C02E20:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82c02e38
	if (ctx.cr6.eq) goto loc_82C02E38;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c02780
	ctx.lr = 0x82C02E38;
	sub_82C02780(ctx, base);
loc_82C02E38:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82c02e48
	if (ctx.cr6.eq) goto loc_82C02E48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e17c8
	ctx.lr = 0x82C02E48;
	sub_827E17C8(ctx, base);
loc_82C02E48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02f28
	if (ctx.cr6.eq) goto loc_82C02F28;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02f28
	if (ctx.cr6.eq) goto loc_82C02F28;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02f28
	if (ctx.cr6.eq) goto loc_82C02F28;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82c02f28
	if (!ctx.cr6.gt) goto loc_82C02F28;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c02f28
	if (ctx.cr6.eq) goto loc_82C02F28;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82c02f28
	if (!ctx.cr6.eq) goto loc_82C02F28;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c02f28
	if (!ctx.cr6.eq) goto loc_82C02F28;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02f28
	if (ctx.cr6.eq) goto loc_82C02F28;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82120040
	ctx.lr = 0x82C02EC4;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c02efc
	if (ctx.cr6.eq) goto loc_82C02EFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b82e68
	ctx.lr = 0x82C02ED8;
	sub_82B82E68(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-18456
	ctx.r9.s64 = ctx.r10.s64 + -18456;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// b 0x82c02f00
	goto loc_82C02F00;
loc_82C02EFC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C02F00:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82b97730
	ctx.lr = 0x82C02F1C;
	sub_82B97730(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r30,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r30.u32);
loc_82C02F28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02f80
	if (ctx.cr6.eq) goto loc_82C02F80;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c02f80
	if (ctx.cr6.eq) goto loc_82C02F80;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c02f80
	if (ctx.cr6.eq) goto loc_82C02F80;
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c02f80
	if (!ctx.cr6.eq) goto loc_82C02F80;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c02f80
	if (ctx.cr6.eq) goto loc_82C02F80;
	// bl 0x827ce8f8
	ctx.lr = 0x82C02F6C;
	sub_827CE8F8(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r10.u32);
loc_82C02F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82798cd0
	ctx.lr = 0x82C02F88;
	sub_82798CD0(ctx, base);
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c02f9c
	if (!ctx.cr6.eq) goto loc_82C02F9C;
	// bl 0x827e2630
	ctx.lr = 0x82C02F9C;
	sub_827E2630(ctx, base);
loc_82C02F9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C02FA4"))) PPC_WEAK_FUNC(sub_82C02FA4);
PPC_FUNC_IMPL(__imp__sub_82C02FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C02FA8"))) PPC_WEAK_FUNC(sub_82C02FA8);
PPC_FUNC_IMPL(__imp__sub_82C02FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C02FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c03050
	if (ctx.cr6.eq) goto loc_82C03050;
	// addic. r31,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r31.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c03050
	if (ctx.cr0.eq) goto loc_82C03050;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r30,r31,7
	ctx.r30.s64 = ctx.r31.s64 + 7;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x82c03050
	if (ctx.cr6.eq) goto loc_82C03050;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r29,r11,-14944
	ctx.r29.s64 = ctx.r11.s64 + -14944;
loc_82C02FE0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82c03004
	if (!ctx.cr6.eq) goto loc_82C03004;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x82b73df8
	ctx.lr = 0x82C03000;
	sub_82B73DF8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82C03004:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82b73ab8
	ctx.lr = 0x82C03010;
	sub_82B73AB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c0302c
	if (!ctx.cr6.eq) goto loc_82C0302C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// sth r7,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r7.u16);
loc_82C0302C:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// addi r30,r31,7
	ctx.r30.s64 = ctx.r31.s64 + 7;
	// lbz r7,7(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// cmplwi cr6,r7,31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 31, ctx.xer);
	// bne cr6,0x82c02fe0
	if (!ctx.cr6.eq) goto loc_82C02FE0;
loc_82C03050:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C03058"))) PPC_WEAK_FUNC(sub_82C03058);
PPC_FUNC_IMPL(__imp__sub_82C03058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82C03060;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r11,12456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12456);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82c030cc
	if (ctx.cr6.eq) goto loc_82C030CC;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C030CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c03104
	if (ctx.cr6.eq) goto loc_82C03104;
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
loc_82C030D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82bcea38
	ctx.lr = 0x82C030E8;
	sub_82BCEA38(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82c030d8
	if (!ctx.cr0.eq) goto loc_82C030D8;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
loc_82C03104:
	// subf r3,r31,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r31.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C03110"))) PPC_WEAK_FUNC(sub_82C03110);
PPC_FUNC_IMPL(__imp__sub_82C03110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82C03118;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13296);
	// lwz r30,4(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c0314c
	if (ctx.cr6.eq) goto loc_82C0314C;
	// lwz r11,13260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13260);
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c03bd0
	if (ctx.cr6.eq) goto loc_82C03BD0;
loc_82C0314C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c03bd0
	if (ctx.cr6.eq) goto loc_82C03BD0;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r25,r11,-15760
	ctx.r25.s64 = ctx.r11.s64 + -15760;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c09bec
	ctx.lr = 0x82C03164;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r10,13180(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// stw r9,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r9.u32);
	// lwz r8,13188(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r11,13260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13260);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r22,13172(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,13172(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13172, ctx.r10.u32);
	// beq cr6,0x82c0324c
	if (ctx.cr6.eq) goto loc_82C0324C;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82c031d4
	if (!ctx.cr6.eq) goto loc_82C031D4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c03244
	if (!ctx.cr6.eq) goto loc_82C03244;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r8,13244(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13244);
	// b 0x82c03244
	goto loc_82C03244;
loc_82C031D4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c03bc8
	if (ctx.cr6.eq) goto loc_82C03BC8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c03bc8
	if (ctx.cr6.eq) goto loc_82C03BC8;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c03bc8
	if (ctx.cr6.eq) goto loc_82C03BC8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c03bc8
	if (ctx.cr6.eq) goto loc_82C03BC8;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c03bc8
	if (ctx.cr6.eq) goto loc_82C03BC8;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r10,r10,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFF00000;
	// srawi r9,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82c03bc8
	if (!ctx.cr6.lt) goto loc_82C03BC8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82C03244:
	// stw r8,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r8.u32);
	// stw r8,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r8.u32);
loc_82C0324C:
	// lbz r9,11(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// addi r4,r10,26596
	ctx.r4.s64 = ctx.r10.s64 + 26596;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhzx r9,r6,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// beq cr6,0x82c032c8
	if (ctx.cr6.eq) goto loc_82C032C8;
	// lis r6,-32030
	ctx.r6.s64 = -2099118080;
	// addi r6,r6,18608
	ctx.r6.s64 = ctx.r6.s64 + 18608;
loc_82C0328C:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82c03318
	if (!ctx.cr6.eq) goto loc_82C03318;
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// cmplwi cr6,r9,6000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6000, ctx.xer);
	// beq cr6,0x82c03338
	if (ctx.cr6.eq) goto loc_82C03338;
	// lhz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
loc_82C032C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c032cc
	if (!ctx.cr6.eq) goto loc_82C032CC;
loc_82C032C8:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82C032CC:
	// cmplwi cr6,r7,7104
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7104, ctx.xer);
	// bgt cr6,0x82c03368
	if (ctx.cr6.gt) goto loc_82C03368;
	// beq cr6,0x82c0335c
	if (ctx.cr6.eq) goto loc_82C0335C;
	// addi r11,r7,-4201
	ctx.r11.s64 = ctx.r7.s64 + -4201;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82c03bb4
	if (ctx.cr6.gt) goto loc_82C03BB4;
	// lis r12,-32064
	ctx.r12.s64 = -2101346304;
	// addi r12,r12,13052
	ctx.r12.s64 = ctx.r12.s64 + 13052;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82C03BB4;
	case 1:
		goto loc_82C03BB4;
	case 2:
		goto loc_82C03BB4;
	case 3:
		goto loc_82C03BB4;
	case 4:
		goto loc_82C03BB4;
	case 5:
		goto loc_82C03BB4;
	case 6:
		goto loc_82C03BB4;
	default:
		__builtin_unreachable();
	}
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
loc_82C03318:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82c03328
	if (!ctx.cr6.eq) goto loc_82C03328;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82c03338
	goto loc_82C03338;
loc_82C03328:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82c03338
	if (!ctx.cr6.eq) goto loc_82C03338;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82C03338:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// bne cr6,0x82c0328c
	if (!ctx.cr6.eq) goto loc_82C0328C;
	// b 0x82c032c0
	goto loc_82C032C0;
loc_82C0335C:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bf01f8
	ctx.lr = 0x82C03364;
	sub_82BF01F8(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03368:
	// cmplwi cr6,r7,15873
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15873, ctx.xer);
	// bgt cr6,0x82c03848
	if (ctx.cr6.gt) goto loc_82C03848;
	// beq cr6,0x82c0383c
	if (ctx.cr6.eq) goto loc_82C0383C;
	// cmplwi cr6,r7,8208
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8208, ctx.xer);
	// bgt cr6,0x82c03700
	if (ctx.cr6.gt) goto loc_82C03700;
	// beq cr6,0x82c036f8
	if (ctx.cr6.eq) goto loc_82C036F8;
	// addi r10,r7,-8054
	ctx.r10.s64 = ctx.r7.s64 + -8054;
	// cmplwi cr6,r10,135
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 135, ctx.xer);
	// bgt cr6,0x82c03bb4
	if (ctx.cr6.gt) goto loc_82C03BB4;
	// lis r12,-32064
	ctx.r12.s64 = -2101346304;
	// addi r12,r12,13220
	ctx.r12.s64 = ctx.r12.s64 + 13220;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82C035C4;
	case 1:
		goto loc_82C03BB4;
	case 2:
		goto loc_82C035D4;
	case 3:
		goto loc_82C03BB4;
	case 4:
		goto loc_82C03BB4;
	case 5:
		goto loc_82C03BB4;
	case 6:
		goto loc_82C03BB4;
	case 7:
		goto loc_82C03BB4;
	case 8:
		goto loc_82C03BB4;
	case 9:
		goto loc_82C03BB4;
	case 10:
		goto loc_82C03BB4;
	case 11:
		goto loc_82C03BB4;
	case 12:
		goto loc_82C03BB4;
	case 13:
		goto loc_82C03638;
	case 14:
		goto loc_82C03BB4;
	case 15:
		goto loc_82C03BB4;
	case 16:
		goto loc_82C03BB4;
	case 17:
		goto loc_82C03BB4;
	case 18:
		goto loc_82C03BB4;
	case 19:
		goto loc_82C03BB4;
	case 20:
		goto loc_82C03BB4;
	case 21:
		goto loc_82C03BB4;
	case 22:
		goto loc_82C03BB4;
	case 23:
		goto loc_82C03BB4;
	case 24:
		goto loc_82C03BB4;
	case 25:
		goto loc_82C03BB4;
	case 26:
		goto loc_82C03BB4;
	case 27:
		goto loc_82C03BB4;
	case 28:
		goto loc_82C03BB4;
	case 29:
		goto loc_82C03BB4;
	case 30:
		goto loc_82C03BB4;
	case 31:
		goto loc_82C03BB4;
	case 32:
		goto loc_82C03BB4;
	case 33:
		goto loc_82C03BB4;
	case 34:
		goto loc_82C03BB4;
	case 35:
		goto loc_82C03BB4;
	case 36:
		goto loc_82C03BB4;
	case 37:
		goto loc_82C03BB4;
	case 38:
		goto loc_82C03BB4;
	case 39:
		goto loc_82C03BB4;
	case 40:
		goto loc_82C03BB4;
	case 41:
		goto loc_82C03BB4;
	case 42:
		goto loc_82C03BB4;
	case 43:
		goto loc_82C03BB4;
	case 44:
		goto loc_82C03BB4;
	case 45:
		goto loc_82C03BB4;
	case 46:
		goto loc_82C0364C;
	case 47:
		goto loc_82C03BB4;
	case 48:
		goto loc_82C03BB4;
	case 49:
		goto loc_82C03BB4;
	case 50:
		goto loc_82C03BB4;
	case 51:
		goto loc_82C03670;
	case 52:
		goto loc_82C0367C;
	case 53:
		goto loc_82C03688;
	case 54:
		goto loc_82C03BB4;
	case 55:
		goto loc_82C03BB4;
	case 56:
		goto loc_82C03BB4;
	case 57:
		goto loc_82C03BB4;
	case 58:
		goto loc_82C03BB4;
	case 59:
		goto loc_82C03BB4;
	case 60:
		goto loc_82C03BB4;
	case 61:
		goto loc_82C03BB4;
	case 62:
		goto loc_82C03BB4;
	case 63:
		goto loc_82C03BB4;
	case 64:
		goto loc_82C03BB4;
	case 65:
		goto loc_82C03BB4;
	case 66:
		goto loc_82C03BB4;
	case 67:
		goto loc_82C03BB4;
	case 68:
		goto loc_82C03BB4;
	case 69:
		goto loc_82C03BB4;
	case 70:
		goto loc_82C03BB4;
	case 71:
		goto loc_82C03BB4;
	case 72:
		goto loc_82C03BB4;
	case 73:
		goto loc_82C03BB4;
	case 74:
		goto loc_82C03BB4;
	case 75:
		goto loc_82C03BB4;
	case 76:
		goto loc_82C03BB4;
	case 77:
		goto loc_82C03BB4;
	case 78:
		goto loc_82C03BB4;
	case 79:
		goto loc_82C03BB4;
	case 80:
		goto loc_82C03BB4;
	case 81:
		goto loc_82C03BB4;
	case 82:
		goto loc_82C03BB4;
	case 83:
		goto loc_82C03BB4;
	case 84:
		goto loc_82C03BB4;
	case 85:
		goto loc_82C03BB4;
	case 86:
		goto loc_82C03BB4;
	case 87:
		goto loc_82C03BB4;
	case 88:
		goto loc_82C03BB4;
	case 89:
		goto loc_82C03BB4;
	case 90:
		goto loc_82C03BB4;
	case 91:
		goto loc_82C03BB4;
	case 92:
		goto loc_82C03BB4;
	case 93:
		goto loc_82C03BB4;
	case 94:
		goto loc_82C03BB4;
	case 95:
		goto loc_82C03BB4;
	case 96:
		goto loc_82C03BB4;
	case 97:
		goto loc_82C03BB4;
	case 98:
		goto loc_82C03694;
	case 99:
		goto loc_82C03BB4;
	case 100:
		goto loc_82C03BB4;
	case 101:
		goto loc_82C03BB4;
	case 102:
		goto loc_82C03BB4;
	case 103:
		goto loc_82C03BB4;
	case 104:
		goto loc_82C03BB4;
	case 105:
		goto loc_82C03BB4;
	case 106:
		goto loc_82C03BB4;
	case 107:
		goto loc_82C03BB4;
	case 108:
		goto loc_82C03BB4;
	case 109:
		goto loc_82C03BB4;
	case 110:
		goto loc_82C03BB4;
	case 111:
		goto loc_82C03BB4;
	case 112:
		goto loc_82C03BB4;
	case 113:
		goto loc_82C03BB4;
	case 114:
		goto loc_82C03BB4;
	case 115:
		goto loc_82C03BB4;
	case 116:
		goto loc_82C03BB4;
	case 117:
		goto loc_82C03BB4;
	case 118:
		goto loc_82C03BB4;
	case 119:
		goto loc_82C036A0;
	case 120:
		goto loc_82C036B4;
	case 121:
		goto loc_82C03BB4;
	case 122:
		goto loc_82C03BB4;
	case 123:
		goto loc_82C03BB4;
	case 124:
		goto loc_82C03BB4;
	case 125:
		goto loc_82C03BB4;
	case 126:
		goto loc_82C036CC;
	case 127:
		goto loc_82C03BB4;
	case 128:
		goto loc_82C03BB4;
	case 129:
		goto loc_82C03BB4;
	case 130:
		goto loc_82C03BB4;
	case 131:
		goto loc_82C03BB4;
	case 132:
		goto loc_82C03BB4;
	case 133:
		goto loc_82C03BB4;
	case 134:
		goto loc_82C03BB4;
	case 135:
		goto loc_82C036F0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,13764(0)
	ctx.r22.u64 = PPC_LOAD_U32(13764);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,13780(0)
	ctx.r22.u64 = PPC_LOAD_U32(13780);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,13880(0)
	ctx.r22.u64 = PPC_LOAD_U32(13880);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,13900(0)
	ctx.r22.u64 = PPC_LOAD_U32(13900);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,13936(0)
	ctx.r22.u64 = PPC_LOAD_U32(13936);
	// lwz r22,13948(0)
	ctx.r22.u64 = PPC_LOAD_U32(13948);
	// lwz r22,13960(0)
	ctx.r22.u64 = PPC_LOAD_U32(13960);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,13972(0)
	ctx.r22.u64 = PPC_LOAD_U32(13972);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,13984(0)
	ctx.r22.u64 = PPC_LOAD_U32(13984);
	// lwz r22,14004(0)
	ctx.r22.u64 = PPC_LOAD_U32(14004);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,14028(0)
	ctx.r22.u64 = PPC_LOAD_U32(14028);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,14064(0)
	ctx.r22.u64 = PPC_LOAD_U32(14064);
loc_82C035C4:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82b78c48
	ctx.lr = 0x82C035D0;
	sub_82B78C48(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C035D4:
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lfs f10,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f9,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x827ffe00
	ctx.lr = 0x82C03634;
	sub_827FFE00(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03638:
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82b78b98
	ctx.lr = 0x82C03648;
	sub_82B78B98(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C0364C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82803d90
	ctx.lr = 0x82C0366C;
	sub_82803D90(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03670:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82804a78
	ctx.lr = 0x82C03678;
	sub_82804A78(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C0367C:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82804910
	ctx.lr = 0x82C03684;
	sub_82804910(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03688:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828047a8
	ctx.lr = 0x82C03690;
	sub_828047A8(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03694:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828051c0
	ctx.lr = 0x82C0369C;
	sub_828051C0(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C036A0:
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82805778
	ctx.lr = 0x82C036B0;
	sub_82805778(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C036B4:
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828055d0
	ctx.lr = 0x82C036C8;
	sub_828055D0(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C036CC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82804f38
	ctx.lr = 0x82C036EC;
	sub_82804F38(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C036F0:
	// bl 0x82bf16e8
	ctx.lr = 0x82C036F4;
	sub_82BF16E8(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C036F8:
	// bl 0x827d4dc8
	ctx.lr = 0x82C036FC;
	sub_827D4DC8(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03700:
	// cmplwi cr6,r7,15516
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15516, ctx.xer);
	// bgt cr6,0x82c037c0
	if (ctx.cr6.gt) goto loc_82C037C0;
	// beq cr6,0x82c037a8
	if (ctx.cr6.eq) goto loc_82C037A8;
	// cmplwi cr6,r7,12524
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12524, ctx.xer);
	// bgt cr6,0x82c0376c
	if (ctx.cr6.gt) goto loc_82C0376C;
	// beq cr6,0x82c03754
	if (ctx.cr6.eq) goto loc_82C03754;
	// cmplwi cr6,r7,12505
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12505, ctx.xer);
	// beq cr6,0x82c0373c
	if (ctx.cr6.eq) goto loc_82C0373C;
	// cmplwi cr6,r7,12518
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12518, ctx.xer);
	// bne cr6,0x82c03bb4
	if (!ctx.cr6.eq) goto loc_82C03BB4;
	// lfs f2,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bef560
	ctx.lr = 0x82C03738;
	sub_82BEF560(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C0373C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bef718
	ctx.lr = 0x82C03750;
	sub_82BEF718(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03754:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bef718
	ctx.lr = 0x82C03768;
	sub_82BEF718(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C0376C:
	// cmplwi cr6,r7,12525
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12525, ctx.xer);
	// beq cr6,0x82c03790
	if (ctx.cr6.eq) goto loc_82C03790;
	// cmplwi cr6,r7,15006
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15006, ctx.xer);
	// bne cr6,0x82c03bb4
	if (!ctx.cr6.eq) goto loc_82C03BB4;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bf1618
	ctx.lr = 0x82C0378C;
	sub_82BF1618(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03790:
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bef718
	ctx.lr = 0x82C037A4;
	sub_82BEF718(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C037A8:
	// lfs f3,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b8bb40
	ctx.lr = 0x82C037BC;
	sub_82B8BB40(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C037C0:
	// cmplwi cr6,r7,15869
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15869, ctx.xer);
	// bgt cr6,0x82c03814
	if (ctx.cr6.gt) goto loc_82C03814;
	// beq cr6,0x82c03808
	if (ctx.cr6.eq) goto loc_82C03808;
	// cmplwi cr6,r7,15600
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15600, ctx.xer);
	// beq cr6,0x82c037f0
	if (ctx.cr6.eq) goto loc_82C037F0;
	// cmplwi cr6,r7,15863
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15863, ctx.xer);
	// bne cr6,0x82c03bb4
	if (!ctx.cr6.eq) goto loc_82C03BB4;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82806830
	ctx.lr = 0x82C037EC;
	sub_82806830(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C037F0:
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bf0088
	ctx.lr = 0x82C03804;
	sub_82BF0088(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03808:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff5c8
	ctx.lr = 0x82C03810;
	sub_827FF5C8(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03814:
	// cmplwi cr6,r7,15870
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15870, ctx.xer);
	// beq cr6,0x82c03830
	if (ctx.cr6.eq) goto loc_82C03830;
	// cmplwi cr6,r7,15871
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15871, ctx.xer);
	// bne cr6,0x82c03bb4
	if (!ctx.cr6.eq) goto loc_82C03BB4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827fef48
	ctx.lr = 0x82C0382C;
	sub_827FEF48(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03830:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff028
	ctx.lr = 0x82C03838;
	sub_827FF028(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C0383C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff950
	ctx.lr = 0x82C03844;
	sub_827FF950(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03848:
	// addi r10,r7,-15875
	ctx.r10.s64 = ctx.r7.s64 + -15875;
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// bgt cr6,0x82c03bb4
	if (ctx.cr6.gt) goto loc_82C03BB4;
	// lis r12,-32064
	ctx.r12.s64 = -2101346304;
	// addi r12,r12,14444
	ctx.r12.s64 = ctx.r12.s64 + 14444;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82C03A78;
	case 1:
		goto loc_82C03AC8;
	case 2:
		goto loc_82C03B70;
	case 3:
		goto loc_82C03B80;
	case 4:
		goto loc_82C03AF0;
	case 5:
		goto loc_82C03BB4;
	case 6:
		goto loc_82C03B40;
	case 7:
		goto loc_82C03BB4;
	case 8:
		goto loc_82C03A58;
	case 9:
		goto loc_82C03B18;
	case 10:
		goto loc_82C03AA0;
	case 11:
		goto loc_82C03BB4;
	case 12:
		goto loc_82C03A3C;
	case 13:
		goto loc_82C03B90;
	case 14:
		goto loc_82C03B9C;
	case 15:
		goto loc_82C03BA8;
	case 16:
		goto loc_82C03BB4;
	case 17:
		goto loc_82C03BB4;
	case 18:
		goto loc_82C03BB4;
	case 19:
		goto loc_82C03BB4;
	case 20:
		goto loc_82C03BB4;
	case 21:
		goto loc_82C03BB4;
	case 22:
		goto loc_82C03BB4;
	case 23:
		goto loc_82C03BB4;
	case 24:
		goto loc_82C03BB4;
	case 25:
		goto loc_82C03BB4;
	case 26:
		goto loc_82C03BB4;
	case 27:
		goto loc_82C03BB4;
	case 28:
		goto loc_82C03BB4;
	case 29:
		goto loc_82C03BB4;
	case 30:
		goto loc_82C03BB4;
	case 31:
		goto loc_82C03BB4;
	case 32:
		goto loc_82C03BB4;
	case 33:
		goto loc_82C03BB4;
	case 34:
		goto loc_82C03BB4;
	case 35:
		goto loc_82C03BB4;
	case 36:
		goto loc_82C03BB4;
	case 37:
		goto loc_82C03BB4;
	case 38:
		goto loc_82C03BB4;
	case 39:
		goto loc_82C03BB4;
	case 40:
		goto loc_82C03BB4;
	case 41:
		goto loc_82C03BB4;
	case 42:
		goto loc_82C03BB4;
	case 43:
		goto loc_82C03BB4;
	case 44:
		goto loc_82C03BB4;
	case 45:
		goto loc_82C03BB4;
	case 46:
		goto loc_82C03BB4;
	case 47:
		goto loc_82C03BB4;
	case 48:
		goto loc_82C03BB4;
	case 49:
		goto loc_82C03BB4;
	case 50:
		goto loc_82C03BB4;
	case 51:
		goto loc_82C03BB4;
	case 52:
		goto loc_82C03BB4;
	case 53:
		goto loc_82C03BB4;
	case 54:
		goto loc_82C03BB4;
	case 55:
		goto loc_82C03BB4;
	case 56:
		goto loc_82C03BB4;
	case 57:
		goto loc_82C03BB4;
	case 58:
		goto loc_82C03BB4;
	case 59:
		goto loc_82C03BB4;
	case 60:
		goto loc_82C03BB4;
	case 61:
		goto loc_82C03BB4;
	case 62:
		goto loc_82C03BB4;
	case 63:
		goto loc_82C03BB4;
	case 64:
		goto loc_82C03BB4;
	case 65:
		goto loc_82C03BB4;
	case 66:
		goto loc_82C03BB4;
	case 67:
		goto loc_82C03BB4;
	case 68:
		goto loc_82C03BB4;
	case 69:
		goto loc_82C03BB4;
	case 70:
		goto loc_82C03BB4;
	case 71:
		goto loc_82C03BB4;
	case 72:
		goto loc_82C03BB4;
	case 73:
		goto loc_82C03BB4;
	case 74:
		goto loc_82C03BB4;
	case 75:
		goto loc_82C03BB4;
	case 76:
		goto loc_82C03BB4;
	case 77:
		goto loc_82C03BB4;
	case 78:
		goto loc_82C03BB4;
	case 79:
		goto loc_82C03BB4;
	case 80:
		goto loc_82C03BB4;
	case 81:
		goto loc_82C03BB4;
	case 82:
		goto loc_82C03BB4;
	case 83:
		goto loc_82C03BB4;
	case 84:
		goto loc_82C03BB4;
	case 85:
		goto loc_82C03BB4;
	case 86:
		goto loc_82C03BB4;
	case 87:
		goto loc_82C03BB4;
	case 88:
		goto loc_82C03BB4;
	case 89:
		goto loc_82C03BB4;
	case 90:
		goto loc_82C03BB4;
	case 91:
		goto loc_82C03BB4;
	case 92:
		goto loc_82C03BB4;
	case 93:
		goto loc_82C03BB4;
	case 94:
		goto loc_82C03A28;
	case 95:
		goto loc_82C03BB4;
	case 96:
		goto loc_82C03BB4;
	case 97:
		goto loc_82C03BB4;
	case 98:
		goto loc_82C03A44;
	case 99:
		goto loc_82C03BB4;
	case 100:
		goto loc_82C03A88;
	case 101:
		goto loc_82C03AD8;
	case 102:
		goto loc_82C03BB4;
	case 103:
		goto loc_82C03BB4;
	case 104:
		goto loc_82C03B00;
	case 105:
		goto loc_82C03BB4;
	case 106:
		goto loc_82C03B54;
	case 107:
		goto loc_82C03BB4;
	case 108:
		goto loc_82C03A64;
	case 109:
		goto loc_82C03B28;
	case 110:
		goto loc_82C03AB0;
	default:
		__builtin_unreachable();
	}
	// lwz r22,14968(0)
	ctx.r22.u64 = PPC_LOAD_U32(14968);
	// lwz r22,15048(0)
	ctx.r22.u64 = PPC_LOAD_U32(15048);
	// lwz r22,15216(0)
	ctx.r22.u64 = PPC_LOAD_U32(15216);
	// lwz r22,15232(0)
	ctx.r22.u64 = PPC_LOAD_U32(15232);
	// lwz r22,15088(0)
	ctx.r22.u64 = PPC_LOAD_U32(15088);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15168(0)
	ctx.r22.u64 = PPC_LOAD_U32(15168);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,14936(0)
	ctx.r22.u64 = PPC_LOAD_U32(14936);
	// lwz r22,15128(0)
	ctx.r22.u64 = PPC_LOAD_U32(15128);
	// lwz r22,15008(0)
	ctx.r22.u64 = PPC_LOAD_U32(15008);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,14908(0)
	ctx.r22.u64 = PPC_LOAD_U32(14908);
	// lwz r22,15248(0)
	ctx.r22.u64 = PPC_LOAD_U32(15248);
	// lwz r22,15260(0)
	ctx.r22.u64 = PPC_LOAD_U32(15260);
	// lwz r22,15272(0)
	ctx.r22.u64 = PPC_LOAD_U32(15272);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,14888(0)
	ctx.r22.u64 = PPC_LOAD_U32(14888);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,14916(0)
	ctx.r22.u64 = PPC_LOAD_U32(14916);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,14984(0)
	ctx.r22.u64 = PPC_LOAD_U32(14984);
	// lwz r22,15064(0)
	ctx.r22.u64 = PPC_LOAD_U32(15064);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15104(0)
	ctx.r22.u64 = PPC_LOAD_U32(15104);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,15188(0)
	ctx.r22.u64 = PPC_LOAD_U32(15188);
	// lwz r22,15284(0)
	ctx.r22.u64 = PPC_LOAD_U32(15284);
	// lwz r22,14948(0)
	ctx.r22.u64 = PPC_LOAD_U32(14948);
	// lwz r22,15144(0)
	ctx.r22.u64 = PPC_LOAD_U32(15144);
	// lwz r22,15024(0)
	ctx.r22.u64 = PPC_LOAD_U32(15024);
loc_82C03A28:
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff568
	ctx.lr = 0x82C03A38;
	sub_827FF568(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03A3C:
	// bl 0x827ff9b0
	ctx.lr = 0x82C03A40;
	sub_827FF9B0(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03A44:
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff8e8
	ctx.lr = 0x82C03A54;
	sub_827FF8E8(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03A58:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff790
	ctx.lr = 0x82C03A60;
	sub_827FF790(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03A64:
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff728
	ctx.lr = 0x82C03A74;
	sub_827FF728(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03A78:
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff2f0
	ctx.lr = 0x82C03A84;
	sub_827FF2F0(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03A88:
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff288
	ctx.lr = 0x82C03A9C;
	sub_827FF288(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03AA0:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff4f0
	ctx.lr = 0x82C03AAC;
	sub_827FF4F0(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03AB0:
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff488
	ctx.lr = 0x82C03AC4;
	sub_827FF488(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03AC8:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff3f0
	ctx.lr = 0x82C03AD4;
	sub_827FF3F0(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03AD8:
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff360
	ctx.lr = 0x82C03AEC;
	sub_827FF360(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03AF0:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff870
	ctx.lr = 0x82C03AFC;
	sub_827FF870(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03B00:
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff7f0
	ctx.lr = 0x82C03B14;
	sub_827FF7F0(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03B18:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff6b0
	ctx.lr = 0x82C03B24;
	sub_827FF6B0(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03B28:
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff630
	ctx.lr = 0x82C03B3C;
	sub_827FF630(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03B40:
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff200
	ctx.lr = 0x82C03B50;
	sub_827FF200(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03B54:
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff180
	ctx.lr = 0x82C03B6C;
	sub_827FF180(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03B70:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827fefb0
	ctx.lr = 0x82C03B7C;
	sub_827FEFB0(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03B80:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827feed0
	ctx.lr = 0x82C03B8C;
	sub_827FEED0(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03B90:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff108
	ctx.lr = 0x82C03B98;
	sub_827FF108(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03B9C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827ff090
	ctx.lr = 0x82C03BA4;
	sub_827FF090(ctx, base);
	// b 0x82c03bb4
	goto loc_82C03BB4;
loc_82C03BA8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// stw r11,26196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26196, ctx.r11.u32);
loc_82C03BB4:
	// stw r22,13172(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13172, ctx.r22.u32);
	// stw r31,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r31.u32);
	// stw r31,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r31.u32);
	// stw r23,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r23.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
loc_82C03BC8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x82C03BD0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82C03BD0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C03BDC"))) PPC_WEAK_FUNC(sub_82C03BDC);
PPC_FUNC_IMPL(__imp__sub_82C03BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C03BE0"))) PPC_WEAK_FUNC(sub_82C03BE0);
PPC_FUNC_IMPL(__imp__sub_82C03BE0) {
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
	// bl 0x821201b0
	ctx.lr = 0x82C03BFC;
	sub_821201B0(ctx, base);
	// addi r30,r3,376
	ctx.r30.s64 = ctx.r3.s64 + 376;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcaeb8
	ctx.lr = 0x82C03C0C;
	sub_82BCAEB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,944(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bcb9a0
	ctx.lr = 0x82C03C1C;
	sub_82BCB9A0(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8222ee40
	ctx.lr = 0x82C03C30;
	sub_8222EE40(ctx, base);
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

__attribute__((alias("__imp__sub_82C03C48"))) PPC_WEAK_FUNC(sub_82C03C48);
PPC_FUNC_IMPL(__imp__sub_82C03C48) {
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
	// bl 0x821201b0
	ctx.lr = 0x82C03C64;
	sub_821201B0(ctx, base);
	// addi r30,r3,376
	ctx.r30.s64 = ctx.r3.s64 + 376;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcaeb8
	ctx.lr = 0x82C03C74;
	sub_82BCAEB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,944(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bcb938
	ctx.lr = 0x82C03C84;
	sub_82BCB938(ctx, base);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
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

__attribute__((alias("__imp__sub_82C03CA0"))) PPC_WEAK_FUNC(sub_82C03CA0);
PPC_FUNC_IMPL(__imp__sub_82C03CA0) {
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
	// bl 0x821201b0
	ctx.lr = 0x82C03CBC;
	sub_821201B0(ctx, base);
	// addi r30,r3,376
	ctx.r30.s64 = ctx.r3.s64 + 376;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcaeb8
	ctx.lr = 0x82C03CCC;
	sub_82BCAEB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,944(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bcb8d0
	ctx.lr = 0x82C03CDC;
	sub_82BCB8D0(ctx, base);
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

__attribute__((alias("__imp__sub_82C03CF4"))) PPC_WEAK_FUNC(sub_82C03CF4);
PPC_FUNC_IMPL(__imp__sub_82C03CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C03CF8"))) PPC_WEAK_FUNC(sub_82C03CF8);
PPC_FUNC_IMPL(__imp__sub_82C03CF8) {
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
	// bl 0x821201b0
	ctx.lr = 0x82C03D14;
	sub_821201B0(ctx, base);
	// addi r30,r3,376
	ctx.r30.s64 = ctx.r3.s64 + 376;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcaeb8
	ctx.lr = 0x82C03D24;
	sub_82BCAEB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,944(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bcba08
	ctx.lr = 0x82C03D34;
	sub_82BCBA08(ctx, base);
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

__attribute__((alias("__imp__sub_82C03D4C"))) PPC_WEAK_FUNC(sub_82C03D4C);
PPC_FUNC_IMPL(__imp__sub_82C03D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C03D50"))) PPC_WEAK_FUNC(sub_82C03D50);
PPC_FUNC_IMPL(__imp__sub_82C03D50) {
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
	// bl 0x821201b0
	ctx.lr = 0x82C03D60;
	sub_821201B0(ctx, base);
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// bl 0x82bcaf58
	ctx.lr = 0x82C03D68;
	sub_82BCAF58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C03D78"))) PPC_WEAK_FUNC(sub_82C03D78);
PPC_FUNC_IMPL(__imp__sub_82C03D78) {
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
	// bl 0x821201b0
	ctx.lr = 0x82C03D88;
	sub_821201B0(ctx, base);
	// addi r11,r3,376
	ctx.r11.s64 = ctx.r3.s64 + 376;
	// lwz r4,944(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82bcb6f8
	ctx.lr = 0x82C03D98;
	sub_82BCB6F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c03db0
	if (!ctx.cr6.eq) goto loc_82C03DB0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C03DB0:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C03DC4"))) PPC_WEAK_FUNC(sub_82C03DC4);
PPC_FUNC_IMPL(__imp__sub_82C03DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C03DC8"))) PPC_WEAK_FUNC(sub_82C03DC8);
PPC_FUNC_IMPL(__imp__sub_82C03DC8) {
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
	// bl 0x821201b0
	ctx.lr = 0x82C03DD8;
	sub_821201B0(ctx, base);
	// lwz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c03df4
	if (ctx.cr6.eq) goto loc_82C03DF4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c03df8
	if (!ctx.cr6.eq) goto loc_82C03DF8;
loc_82C03DF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C03DF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C03E08"))) PPC_WEAK_FUNC(sub_82C03E08);
PPC_FUNC_IMPL(__imp__sub_82C03E08) {
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
	// bl 0x821200d8
	ctx.lr = 0x82C03E20;
	sub_821200D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82c03e40
	if (ctx.cr6.lt) goto loc_82C03E40;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82c03e40
	if (!ctx.cr6.lt) goto loc_82C03E40;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82c03e44
	goto loc_82C03E44;
loc_82C03E40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C03E44:
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c03e88
	if (ctx.cr6.eq) goto loc_82C03E88;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c03e88
	if (ctx.cr6.eq) goto loc_82C03E88;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c03e88
	if (ctx.cr6.eq) goto loc_82C03E88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bcb8d0
	ctx.lr = 0x82C03E74;
	sub_82BCB8D0(ctx, base);
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
loc_82C03E88:
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
}

__attribute__((alias("__imp__sub_82C03EA0"))) PPC_WEAK_FUNC(sub_82C03EA0);
PPC_FUNC_IMPL(__imp__sub_82C03EA0) {
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
	// bl 0x821200d8
	ctx.lr = 0x82C03EB8;
	sub_821200D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82c03ed8
	if (ctx.cr6.lt) goto loc_82C03ED8;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82c03ed8
	if (!ctx.cr6.lt) goto loc_82C03ED8;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82c03edc
	goto loc_82C03EDC;
loc_82C03ED8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C03EDC:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82bcae50
	ctx.lr = 0x82C03EE8;
	sub_82BCAE50(ctx, base);
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

__attribute__((alias("__imp__sub_82C03EFC"))) PPC_WEAK_FUNC(sub_82C03EFC);
PPC_FUNC_IMPL(__imp__sub_82C03EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C03F00"))) PPC_WEAK_FUNC(sub_82C03F00);
PPC_FUNC_IMPL(__imp__sub_82C03F00) {
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
	// bl 0x821200d8
	ctx.lr = 0x82C03F18;
	sub_821200D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82c03f38
	if (ctx.cr6.lt) goto loc_82C03F38;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82c03f38
	if (!ctx.cr6.lt) goto loc_82C03F38;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82c03f3c
	goto loc_82C03F3C;
loc_82C03F38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C03F3C:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c03f64
	if (ctx.cr6.eq) goto loc_82C03F64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c03f64
	if (ctx.cr6.eq) goto loc_82C03F64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c03f68
	if (!ctx.cr6.eq) goto loc_82C03F68;
loc_82C03F64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C03F68:
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

__attribute__((alias("__imp__sub_82C03F7C"))) PPC_WEAK_FUNC(sub_82C03F7C);
PPC_FUNC_IMPL(__imp__sub_82C03F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C03F80"))) PPC_WEAK_FUNC(sub_82C03F80);
PPC_FUNC_IMPL(__imp__sub_82C03F80) {
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
	// bl 0x821201b0
	ctx.lr = 0x82C03FA0;
	sub_821201B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// bl 0x82bcb178
	ctx.lr = 0x82C03FB0;
	sub_82BCB178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c03fd0
	if (ctx.cr6.eq) goto loc_82C03FD0;
	// bl 0x821201b0
	ctx.lr = 0x82C03FBC;
	sub_821201B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// bl 0x82bcb1e0
	ctx.lr = 0x82C03FCC;
	sub_82BCB1E0(ctx, base);
	// b 0x82c03fd4
	goto loc_82C03FD4;
loc_82C03FD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C03FD4:
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

__attribute__((alias("__imp__sub_82C03FEC"))) PPC_WEAK_FUNC(sub_82C03FEC);
PPC_FUNC_IMPL(__imp__sub_82C03FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C03FF0"))) PPC_WEAK_FUNC(sub_82C03FF0);
PPC_FUNC_IMPL(__imp__sub_82C03FF0) {
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
	// bl 0x821200d8
	ctx.lr = 0x82C04008;
	sub_821200D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82c04028
	if (ctx.cr6.lt) goto loc_82C04028;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82c04028
	if (!ctx.cr6.lt) goto loc_82C04028;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82c0402c
	goto loc_82C0402C;
loc_82C04028:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C0402C:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// ld r4,1392(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1392);
	// bl 0x82bcb528
	ctx.lr = 0x82C04038;
	sub_82BCB528(ctx, base);
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

__attribute__((alias("__imp__sub_82C0404C"))) PPC_WEAK_FUNC(sub_82C0404C);
PPC_FUNC_IMPL(__imp__sub_82C0404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C04050"))) PPC_WEAK_FUNC(sub_82C04050);
PPC_FUNC_IMPL(__imp__sub_82C04050) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821200d8
	ctx.lr = 0x82C04070;
	sub_821200D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82c040ac
	if (ctx.cr6.lt) goto loc_82C040AC;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82c040ac
	if (!ctx.cr6.lt) goto loc_82C040AC;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c040ac
	if (ctx.cr6.eq) goto loc_82C040AC;
	// bl 0x821201b0
	ctx.lr = 0x82C04098;
	sub_821201B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// bl 0x82bcb340
	ctx.lr = 0x82C040A8;
	sub_82BCB340(ctx, base);
	// b 0x82c040b0
	goto loc_82C040B0;
loc_82C040AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C040B0:
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

__attribute__((alias("__imp__sub_82C040C8"))) PPC_WEAK_FUNC(sub_82C040C8);
PPC_FUNC_IMPL(__imp__sub_82C040C8) {
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
	// bl 0x821201b0
	ctx.lr = 0x82C040E8;
	sub_821201B0(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// bl 0x82bcb2c0
	ctx.lr = 0x82C040FC;
	sub_82BCB2C0(ctx, base);
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

__attribute__((alias("__imp__sub_82C04114"))) PPC_WEAK_FUNC(sub_82C04114);
PPC_FUNC_IMPL(__imp__sub_82C04114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C04118"))) PPC_WEAK_FUNC(sub_82C04118);
PPC_FUNC_IMPL(__imp__sub_82C04118) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821200d8
	ctx.lr = 0x82C04138;
	sub_821200D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82c04184
	if (ctx.cr6.lt) goto loc_82C04184;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82c04184
	if (!ctx.cr6.lt) goto loc_82C04184;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c04184
	if (ctx.cr6.eq) goto loc_82C04184;
	// bl 0x821200d8
	ctx.lr = 0x82C04160;
	sub_821200D8(ctx, base);
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// ld r31,1392(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1392);
	// bl 0x821201b0
	ctx.lr = 0x82C0416C;
	sub_821201B0(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,376
	ctx.r3.s64 = ctx.r3.s64 + 376;
	// bl 0x82bcb240
	ctx.lr = 0x82C04180;
	sub_82BCB240(ctx, base);
	// b 0x82c04188
	goto loc_82C04188;
loc_82C04184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C04188:
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

__attribute__((alias("__imp__sub_82C041A0"))) PPC_WEAK_FUNC(sub_82C041A0);
PPC_FUNC_IMPL(__imp__sub_82C041A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C041A8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8221ad14
	ctx.lr = 0x82C041B0;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0434c
	if (ctx.cr6.eq) goto loc_82C0434C;
	// lbz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82c0434c
	if (!ctx.cr6.lt) goto loc_82C0434C;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add. r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82c0434c
	if (ctx.cr0.eq) goto loc_82C0434C;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c048d0
	if (!ctx.cr6.eq) goto loc_82C048D0;
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c048d0
	if (!ctx.cr6.eq) goto loc_82C048D0;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82b96908
	ctx.lr = 0x82C0420C;
	sub_82B96908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b96868
	ctx.lr = 0x82C0421C;
	sub_82B96868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c048d0
	if (ctx.cr6.eq) goto loc_82C048D0;
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// rlwinm r4,r3,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,1320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1320);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r5,r4,r6
	ctx.r5.u64 = ctx.r4.u64 + ctx.r6.u64;
	// subf r7,r11,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subf r4,r11,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	// srawi r3,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 4;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r3,r7,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bgt cr6,0x82c048d0
	if (ctx.cr6.gt) goto loc_82C048D0;
	// lis r12,-32064
	ctx.r12.s64 = -2101346304;
	// addi r12,r12,17056
	ctx.r12.s64 = ctx.r12.s64 + 17056;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u64) {
	case 0:
		goto loc_82C042B8;
	case 1:
		goto loc_82C04360;
	case 2:
		goto loc_82C044A4;
	case 3:
		goto loc_82C04594;
	case 4:
		goto loc_82C0463C;
	case 5:
		goto loc_82C04750;
	default:
		__builtin_unreachable();
	}
	// lwz r22,17080(0)
	ctx.r22.u64 = PPC_LOAD_U32(17080);
	// lwz r22,17248(0)
	ctx.r22.u64 = PPC_LOAD_U32(17248);
	// lwz r22,17572(0)
	ctx.r22.u64 = PPC_LOAD_U32(17572);
	// lwz r22,17812(0)
	ctx.r22.u64 = PPC_LOAD_U32(17812);
	// lwz r22,17980(0)
	ctx.r22.u64 = PPC_LOAD_U32(17980);
	// lwz r22,18256(0)
	ctx.r22.u64 = PPC_LOAD_U32(18256);
loc_82C042B8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12792);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82c04328
	if (!ctx.cr6.lt) goto loc_82C04328;
	// subf r11,r6,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
loc_82C042F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82b93348
	ctx.lr = 0x82C04300;
	sub_82B93348(ctx, base);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bne 0x82c042f4
	if (!ctx.cr0.eq) goto loc_82C042F4;
loc_82C04328:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82c048d0
	if (ctx.cr6.lt) goto loc_82C048D0;
loc_82C0434C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8221ad60
	ctx.lr = 0x82C0435C;
	__restfpr_27(ctx, base);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82C04360:
	// rlwinm r11,r9,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c043bc
	if (ctx.cr6.eq) goto loc_82C043BC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// rlwinm r9,r9,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f11,f13,f0,f12
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// lfs f0,-4368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4368);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// beq cr6,0x82c043ac
	if (ctx.cr6.eq) goto loc_82C043AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
loc_82C043AC:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82b93348
	ctx.lr = 0x82C043B8;
	sub_82B93348(ctx, base);
	// b 0x82c043d4
	goto loc_82C043D4;
loc_82C043BC:
	// rlwinm r11,r9,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c043d0
	if (ctx.cr6.eq) goto loc_82C043D0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x82c043d4
	goto loc_82C043D4;
loc_82C043D0:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_82C043D4:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12792);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82c0442c
	if (!ctx.cr6.lt) goto loc_82C0442C;
	// subf r11,r6,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C04404:
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82c04404
	if (!ctx.cr0.eq) goto loc_82C04404;
loc_82C0442C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82c048d0
	if (ctx.cr6.lt) goto loc_82C048D0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// beq cr6,0x82c04488
	if (ctx.cr6.eq) goto loc_82C04488;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8221ad60
	ctx.lr = 0x82C04484;
	__restfpr_27(ctx, base);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82C04488:
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8221ad60
	ctx.lr = 0x82C044A0;
	__restfpr_27(ctx, base);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82C044A4:
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r11,12792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12792);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,29744(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfsx f11,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f10,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,-20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82c048d0
	if (ctx.cr6.eq) goto loc_82C048D0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82c048d0
	if (ctx.cr6.eq) goto loc_82C048D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// bge cr6,0x82c048d0
	if (!ctx.cr6.lt) goto loc_82C048D0;
loc_82C04528:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// bl 0x82b93348
	ctx.lr = 0x82C04550;
	sub_82B93348(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82b93348
	ctx.lr = 0x82C04560;
	sub_82B93348(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f5.f64;
	// bl 0x82b93348
	ctx.lr = 0x82C0456C;
	sub_82B93348(ctx, base);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82c04528
	if (ctx.cr6.lt) goto loc_82C04528;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8221ad60
	ctx.lr = 0x82C04590;
	__restfpr_27(ctx, base);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82C04594:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x82b93348
	ctx.lr = 0x82C045AC;
	sub_82B93348(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12792);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82c04604
	if (!ctx.cr6.lt) goto loc_82C04604;
	// subf r11,r6,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C045DC:
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82c045dc
	if (!ctx.cr0.eq) goto loc_82C045DC;
loc_82C04604:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82c048d0
	if (ctx.cr6.lt) goto loc_82C048D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8221ad60
	ctx.lr = 0x82C04638;
	__restfpr_27(ctx, base);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82C0463C:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,12792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12792);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmuls f29,f10,f12
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// fmuls f30,f9,f12
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// bge cr6,0x82c04718
	if (!ctx.cr6.lt) goto loc_82C04718;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f31,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f31.f64 = double(temp.f32);
loc_82C04698:
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmadds f1,f10,f11,f29
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f29.f64));
	// bl 0x8221c068
	ctx.lr = 0x82C046B4;
	sub_8221C068(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r30,r10,12
	ctx.r30.s64 = ctx.r10.s64 + 12;
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82c04698
	if (ctx.cr6.lt) goto loc_82C04698;
loc_82C04718:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82c048d0
	if (ctx.cr6.lt) goto loc_82C048D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8221ad60
	ctx.lr = 0x82C0474C;
	__restfpr_27(ctx, base);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82C04750:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r11,12792(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12792);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// fmuls f30,f11,f11
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// bge cr6,0x82c048a8
	if (!ctx.cr6.lt) goto loc_82C048A8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f31,-30764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30764);
	ctx.f31.f64 = double(temp.f32);
loc_82C047A8:
	// lfs f29,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// fneg f28,f29
	ctx.f28.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// bl 0x82bbcba0
	ctx.lr = 0x82C047BC;
	sub_82BBCBA0(ctx, base);
	// bl 0x8221bf50
	ctx.lr = 0x82C047C0;
	sub_8221BF50(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f0,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// lfs f29,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fneg f27,f29
	ctx.f27.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f9,f10,f0,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f28.f64));
	// fmuls f28,f9,f30
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x82bbcba0
	ctx.lr = 0x82C047F8;
	sub_82BBCBA0(ctx, base);
	// bl 0x8221bf50
	ctx.lr = 0x82C047FC;
	sub_8221BF50(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// fsubs f8,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f27.f64));
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// fadds f2,f7,f28
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// fmuls f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmadds f0,f1,f8,f27
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f27.f64));
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fsubs f12,f4,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fadds f10,f11,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f10,12(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fadds f1,f2,f28
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f28.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82c047a8
	if (ctx.cr6.lt) goto loc_82C047A8;
loc_82C048A8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82c048d4
	if (!ctx.cr6.lt) goto loc_82C048D4;
loc_82C048D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C048D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8221ad60
	ctx.lr = 0x82C048E0;
	__restfpr_27(ctx, base);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C048E4"))) PPC_WEAK_FUNC(sub_82C048E4);
PPC_FUNC_IMPL(__imp__sub_82C048E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C048E8"))) PPC_WEAK_FUNC(sub_82C048E8);
PPC_FUNC_IMPL(__imp__sub_82C048E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C048F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c04988
	if (ctx.cr6.eq) goto loc_82C04988;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
loc_82C0490C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c041a0
	ctx.lr = 0x82C04918;
	sub_82C041A0(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c04974
	if (ctx.cr6.eq) goto loc_82C04974;
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82c0497c
	if (!ctx.cr6.lt) goto loc_82C0497C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,10
	ctx.r9.s64 = 10;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82C0495C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c0495c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C0495C;
	// b 0x82c0497c
	goto loc_82C0497C;
loc_82C04974:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
loc_82C0497C:
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c0490c
	if (ctx.cr6.lt) goto loc_82C0490C;
loc_82C04988:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C04990"))) PPC_WEAK_FUNC(sub_82C04990);
PPC_FUNC_IMPL(__imp__sub_82C04990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C04998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82783ab0
	ctx.lr = 0x82C049A4;
	sub_82783AB0(ctx, base);
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c049fc
	if (ctx.cr6.eq) goto loc_82C049FC;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C049B8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c049fc
	if (!ctx.cr6.lt) goto loc_82C049FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c049e8
	if (ctx.cr6.eq) goto loc_82C049E8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c049e8
	if (ctx.cr6.eq) goto loc_82C049E8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x827834e8
	ctx.lr = 0x82C049E8;
	sub_827834E8(ctx, base);
loc_82C049E8:
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c049b8
	if (!ctx.cr6.eq) goto loc_82C049B8;
loc_82C049FC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// lfs f0,-30832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30832);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,26592(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 26592, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C04A14"))) PPC_WEAK_FUNC(sub_82C04A14);
PPC_FUNC_IMPL(__imp__sub_82C04A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C04A18"))) PPC_WEAK_FUNC(sub_82C04A18);
PPC_FUNC_IMPL(__imp__sub_82C04A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82C04A20;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,13548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13548);
	// lwz r26,13336(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13336);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c04a50
	if (!ctx.cr6.eq) goto loc_82C04A50;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c04c10
	if (ctx.cr6.eq) goto loc_82C04C10;
loc_82C04A50:
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// stw r10,13336(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13336, ctx.r10.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,13164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13164, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// lwz r11,13412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13412);
	// addi r7,r11,108
	ctx.r7.s64 = ctx.r11.s64 + 108;
	// addi r6,r11,132
	ctx.r6.s64 = ctx.r11.s64 + 132;
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// bl 0x827e6900
	ctx.lr = 0x82C04AC4;
	sub_827E6900(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c04b34
	if (ctx.cr6.eq) goto loc_82C04B34;
loc_82C04AD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821249a8
	ctx.lr = 0x82C04AD8;
	sub_821249A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e6b90
	ctx.lr = 0x82C04AE4;
	sub_827E6B90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c04b28
	if (ctx.cr6.eq) goto loc_82C04B28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c04b28
	if (ctx.cr6.eq) goto loc_82C04B28;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c04b28
	if (ctx.cr6.eq) goto loc_82C04B28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b77660
	ctx.lr = 0x82C04B1C;
	sub_82B77660(ctx, base);
	// lwz r11,13164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c04b34
	if (!ctx.cr6.eq) goto loc_82C04B34;
loc_82C04B28:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c04ad0
	if (!ctx.cr6.eq) goto loc_82C04AD0;
loc_82C04B34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e7200
	ctx.lr = 0x82C04B3C;
	sub_827E7200(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// lwz r11,13412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13412);
	// addi r7,r11,108
	ctx.r7.s64 = ctx.r11.s64 + 108;
	// addi r6,r11,132
	ctx.r6.s64 = ctx.r11.s64 + 132;
	// addi r5,r11,84
	ctx.r5.s64 = ctx.r11.s64 + 84;
	// bl 0x827e6900
	ctx.lr = 0x82C04B98;
	sub_827E6900(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c04c08
	if (ctx.cr6.eq) goto loc_82C04C08;
loc_82C04BA4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821249a8
	ctx.lr = 0x82C04BAC;
	sub_821249A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827e6b90
	ctx.lr = 0x82C04BB8;
	sub_827E6B90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c04bfc
	if (ctx.cr6.eq) goto loc_82C04BFC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c04bfc
	if (ctx.cr6.eq) goto loc_82C04BFC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c04bfc
	if (ctx.cr6.eq) goto loc_82C04BFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b77660
	ctx.lr = 0x82C04BF0;
	sub_82B77660(ctx, base);
	// lwz r11,13164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c04c08
	if (!ctx.cr6.eq) goto loc_82C04C08;
loc_82C04BFC:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c04ba4
	if (!ctx.cr6.eq) goto loc_82C04BA4;
loc_82C04C08:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827e7200
	ctx.lr = 0x82C04C10;
	sub_827E7200(ctx, base);
loc_82C04C10:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r26,13336(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13336, ctx.r26.u32);
	// lwz r30,13316(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13316);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c04c34
	if (ctx.cr6.eq) goto loc_82C04C34;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x827f7f50
	ctx.lr = 0x82C04C30;
	sub_827F7F50(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82C04C34:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C04C3C"))) PPC_WEAK_FUNC(sub_82C04C3C);
PPC_FUNC_IMPL(__imp__sub_82C04C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C04C40"))) PPC_WEAK_FUNC(sub_82C04C40);
PPC_FUNC_IMPL(__imp__sub_82C04C40) {
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
	// bl 0x827f7cb0
	ctx.lr = 0x82C04C50;
	sub_827F7CB0(ctx, base);
	// bl 0x82c07df8
	ctx.lr = 0x82C04C54;
	sub_82C07DF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C04C64"))) PPC_WEAK_FUNC(sub_82C04C64);
PPC_FUNC_IMPL(__imp__sub_82C04C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C04C68"))) PPC_WEAK_FUNC(sub_82C04C68);
PPC_FUNC_IMPL(__imp__sub_82C04C68) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,13348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13348, ctx.r11.u32);
	// bl 0x827f8378
	ctx.lr = 0x82C04C84;
	sub_827F8378(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r3,13604(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13604);
	// bl 0x827bcce8
	ctx.lr = 0x82C04C90;
	sub_827BCCE8(ctx, base);
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// li r11,254
	ctx.r11.s64 = 254;
	// addi r7,r8,-17552
	ctx.r7.s64 = ctx.r8.s64 + -17552;
	// stb r11,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C04CB0"))) PPC_WEAK_FUNC(sub_82C04CB0);
PPC_FUNC_IMPL(__imp__sub_82C04CB0) {
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
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r31,r11,-20000
	ctx.r31.s64 = ctx.r11.s64 + -20000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c07e78
	ctx.lr = 0x82C04CD0;
	sub_82C07E78(ctx, base);
	// bl 0x827e0d10
	ctx.lr = 0x82C04CD4;
	sub_827E0D10(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12480(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12480);
	// bl 0x82bce390
	ctx.lr = 0x82C04CE4;
	sub_82BCE390(ctx, base);
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

__attribute__((alias("__imp__sub_82C04CF8"))) PPC_WEAK_FUNC(sub_82C04CF8);
PPC_FUNC_IMPL(__imp__sub_82C04CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82C04D00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r30,13988(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13988);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c04d24
	if (ctx.cr6.eq) goto loc_82C04D24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82746f10
	ctx.lr = 0x82C04D1C;
	sub_82746F10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C04D24;
	sub_82120A70(ctx, base);
loc_82C04D24:
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13988, ctx.r11.u32);
	// lwz r3,13420(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13420);
	// bl 0x827ee9e8
	ctx.lr = 0x82C04D3C;
	sub_827EE9E8(ctx, base);
	// lwz r3,13420(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13420);
	// bl 0x82120a70
	ctx.lr = 0x82C04D44;
	sub_82120A70(ctx, base);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13420, ctx.r11.u32);
	// lwz r31,13772(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13772);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c04d74
	if (ctx.cr6.eq) goto loc_82C04D74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a2640
	ctx.lr = 0x82C04D64;
	sub_827A2640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C04D6C;
	sub_82120A70(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13772, ctx.r11.u32);
loc_82C04D74:
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r31,13980(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13980);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c04d9c
	if (ctx.cr6.eq) goto loc_82C04D9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82786940
	ctx.lr = 0x82C04D8C;
	sub_82786940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C04D94;
	sub_82120A70(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13980(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13980, ctx.r11.u32);
loc_82C04D9C:
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r31,13416(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13416);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c04dc4
	if (ctx.cr6.eq) goto loc_82C04DC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bed4c0
	ctx.lr = 0x82C04DB4;
	sub_82BED4C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C04DBC;
	sub_82120A70(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13416, ctx.r11.u32);
loc_82C04DC4:
	// bl 0x82c07ee0
	ctx.lr = 0x82C04DC8;
	sub_82C07EE0(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,13424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c04de4
	if (ctx.cr6.eq) goto loc_82C04DE4;
	// bl 0x82120a70
	ctx.lr = 0x82C04DDC;
	sub_82120A70(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13424, ctx.r11.u32);
loc_82C04DE4:
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r31,13404(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13404);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c04e0c
	if (ctx.cr6.eq) goto loc_82C04E0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e428
	ctx.lr = 0x82C04DFC;
	sub_8212E428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C04E04;
	sub_82120A70(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13404, ctx.r11.u32);
loc_82C04E0C:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,13400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c04e38
	if (ctx.cr6.eq) goto loc_82C04E38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C04E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13400, ctx.r11.u32);
loc_82C04E38:
	// bl 0x827df008
	ctx.lr = 0x82C04E3C;
	sub_827DF008(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// bl 0x827c9ca8
	ctx.lr = 0x82C04E48;
	sub_827C9CA8(ctx, base);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r3,12480(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// bl 0x82bcd7f0
	ctx.lr = 0x82C04E54;
	sub_82BCD7F0(ctx, base);
	// lwz r3,12480(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// bl 0x82bce558
	ctx.lr = 0x82C04E5C;
	sub_82BCE558(ctx, base);
	// bl 0x82c013c8
	ctx.lr = 0x82C04E60;
	sub_82C013C8(ctx, base);
	// bl 0x82c06020
	ctx.lr = 0x82C04E64;
	sub_82C06020(ctx, base);
	// bl 0x82c01568
	ctx.lr = 0x82C04E68;
	sub_82C01568(ctx, base);
	// bl 0x82bad478
	ctx.lr = 0x82C04E6C;
	sub_82BAD478(ctx, base);
	// bl 0x82ba0fa8
	ctx.lr = 0x82C04E70;
	sub_82BA0FA8(ctx, base);
	// bl 0x82bb6408
	ctx.lr = 0x82C04E74;
	sub_82BB6408(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,12752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12752);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x82120a70
	ctx.lr = 0x82C04E84;
	sub_82120A70(ctx, base);
	// lwz r11,12752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12752);
	// stw r28,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r28.u32);
	// bl 0x82153900
	ctx.lr = 0x82C04E90;
	sub_82153900(ctx, base);
	// bl 0x827eff48
	ctx.lr = 0x82C04E94;
	sub_827EFF48(ctx, base);
	// bl 0x827cb6e8
	ctx.lr = 0x82C04E98;
	sub_827CB6E8(ctx, base);
	// lis r31,-31947
	ctx.r31.s64 = -2093678592;
	// lbz r11,12107(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12107);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c04eb4
	if (ctx.cr6.eq) goto loc_82C04EB4;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r3,r11,18196
	ctx.r3.s64 = ctx.r11.s64 + 18196;
	// bl 0x82746cf8
	ctx.lr = 0x82C04EB4;
	sub_82746CF8(ctx, base);
loc_82C04EB4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r11,12107(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12107, ctx.r11.u8);
	// bl 0x82b76d90
	ctx.lr = 0x82C04EC0;
	sub_82B76D90(ctx, base);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r31,13240(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13240);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c04efc
	if (ctx.cr6.eq) goto loc_82C04EFC;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c04eec
	if (ctx.cr6.eq) goto loc_82C04EEC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8212e1f8
	ctx.lr = 0x82C04EE4;
	sub_8212E1F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C04EEC;
	sub_82120A70(ctx, base);
loc_82C04EEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C04EF4;
	sub_82120A70(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13240, ctx.r11.u32);
loc_82C04EFC:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,13204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c04f18
	if (ctx.cr6.eq) goto loc_82C04F18;
	// bl 0x82120a70
	ctx.lr = 0x82C04F10;
	sub_82120A70(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13204, ctx.r11.u32);
loc_82C04F18:
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r3,13208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c04f8c
	if (ctx.cr6.eq) goto loc_82C04F8C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b76f30
	ctx.lr = 0x82C04F30;
	sub_82B76F30(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r11,13208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13208, ctx.r11.u32);
	// bl 0x8212e5e8
	ctx.lr = 0x82C04F40;
	sub_8212E5E8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8212e578
	ctx.lr = 0x82C04F48;
	sub_8212E578(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c04f5c
	if (ctx.cr6.eq) goto loc_82C04F5C;
	// bl 0x82120a70
	ctx.lr = 0x82C04F5C;
	sub_82120A70(ctx, base);
loc_82C04F5C:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c04f78
	if (ctx.cr6.eq) goto loc_82C04F78;
	// bl 0x82120a70
	ctx.lr = 0x82C04F78;
	sub_82120A70(ctx, base);
loc_82C04F78:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bl 0x82120a70
	ctx.lr = 0x82C04F8C;
	sub_82120A70(ctx, base);
loc_82C04F8C:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,15840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c04fb8
	if (ctx.cr6.eq) goto loc_82C04FB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C04FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,15840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15840, ctx.r11.u32);
loc_82C04FB8:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,13984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c04fe4
	if (ctx.cr6.eq) goto loc_82C04FE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C04FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13984, ctx.r11.u32);
loc_82C04FE4:
	// bl 0x82c06830
	ctx.lr = 0x82C04FE8;
	sub_82C06830(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,13596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c04ffc
	if (ctx.cr6.eq) goto loc_82C04FFC;
	// bl 0x82120a70
	ctx.lr = 0x82C04FFC;
	sub_82120A70(ctx, base);
loc_82C04FFC:
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13596, ctx.r11.u32);
	// lwz r31,13604(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13604);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c05024
	if (ctx.cr6.eq) goto loc_82C05024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827bca40
	ctx.lr = 0x82C0501C;
	sub_827BCA40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C05024;
	sub_82120A70(ctx, base);
loc_82C05024:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13604, ctx.r11.u32);
	// lwz r30,14188(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14188);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c0504c
	if (ctx.cr6.eq) goto loc_82C0504C;
	// addi r3,r30,540
	ctx.r3.s64 = ctx.r30.s64 + 540;
	// bl 0x82120568
	ctx.lr = 0x82C05044;
	sub_82120568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C0504C;
	sub_82120A70(ctx, base);
loc_82C0504C:
	// lwz r30,12480(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,14188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14188, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c05070
	if (ctx.cr6.eq) goto loc_82C05070;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcda50
	ctx.lr = 0x82C05068;
	sub_82BCDA50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C05070;
	sub_82120A70(ctx, base);
loc_82C05070:
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,12480(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12480, ctx.r11.u32);
	// lwz r31,12452(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12452);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c050a0
	if (ctx.cr6.eq) goto loc_82C050A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf6870
	ctx.lr = 0x82C05090;
	sub_82BF6870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C05098;
	sub_82120A70(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,12452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12452, ctx.r11.u32);
loc_82C050A0:
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r30,12492(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12492);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c050d4
	if (ctx.cr6.eq) goto loc_82C050D4;
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c050cc
	if (ctx.cr6.eq) goto loc_82C050CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbdce0
	ctx.lr = 0x82C050C4;
	sub_82BBDCE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C050CC;
	sub_82120A70(ctx, base);
loc_82C050CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C050D4;
	sub_82120A70(ctx, base);
loc_82C050D4:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,12492(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12492, ctx.r11.u32);
	// lwz r31,12704(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12704);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c050fc
	if (ctx.cr6.eq) goto loc_82C050FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbe258
	ctx.lr = 0x82C050F4;
	sub_82BBE258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C050FC;
	sub_82120A70(ctx, base);
loc_82C050FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C05104"))) PPC_WEAK_FUNC(sub_82C05104);
PPC_FUNC_IMPL(__imp__sub_82C05104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C05108"))) PPC_WEAK_FUNC(sub_82C05108);
PPC_FUNC_IMPL(__imp__sub_82C05108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C05110;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// beq cr6,0x82c05128
	if (ctx.cr6.eq) goto loc_82C05128;
	// bl 0x827e1040
	ctx.lr = 0x82C05128;
	sub_827E1040(ctx, base);
loc_82C05128:
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,13412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// lwz r10,684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c0514c
	if (ctx.cr6.eq) goto loc_82C0514C;
	// lbz r9,19(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// b 0x82c05158
	goto loc_82C05158;
loc_82C0514C:
	// lbz r10,19(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_82C05158:
	// stb r8,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r8.u8);
	// lwz r10,688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c05180
	if (ctx.cr6.eq) goto loc_82C05180;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// li r9,-128
	ctx.r9.s64 = -128;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stb r7,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r7.u8);
	// b 0x82c0518c
	goto loc_82C0518C;
loc_82C05180:
	// lbz r10,19(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stb r9,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r9.u8);
loc_82C0518C:
	// lwz r10,692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c051ac
	if (ctx.cr6.eq) goto loc_82C051AC;
	// lbz r10,19(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// b 0x82c051b4
	goto loc_82C051B4;
loc_82C051AC:
	// lbz r9,19(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// ori r8,r9,64
	ctx.r8.u64 = ctx.r9.u64 | 64;
loc_82C051B4:
	// stb r8,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r8.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82c051dc
	if (!ctx.cr6.eq) goto loc_82C051DC;
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c051dc
	if (ctx.cr6.eq) goto loc_82C051DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x827d0c88
	ctx.lr = 0x82C051DC;
	sub_827D0C88(ctx, base);
loc_82C051DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c051fc
	if (ctx.cr6.eq) goto loc_82C051FC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82b77f10
	ctx.lr = 0x82C051FC;
	sub_82B77F10(ctx, base);
loc_82C051FC:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0522c
	if (ctx.cr6.eq) goto loc_82C0522C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13980);
	// bl 0x827869c8
	ctx.lr = 0x82C0521C;
	sub_827869C8(ctx, base);
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r9,r9,0,18,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// sth r9,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r9.u16);
loc_82C0522C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0524c
	if (ctx.cr6.eq) goto loc_82C0524C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r9,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
loc_82C0524C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c05268
	if (ctx.cr6.eq) goto loc_82C05268;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x827fd608
	ctx.lr = 0x82C05268;
	sub_827FD608(ctx, base);
loc_82C05268:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0528c
	if (ctx.cr6.eq) goto loc_82C0528C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0528c
	if (ctx.cr6.eq) goto loc_82C0528C;
	// bl 0x827836c0
	ctx.lr = 0x82C0528C;
	sub_827836C0(ctx, base);
loc_82C0528C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c052ac
	if (ctx.cr6.eq) goto loc_82C052AC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,260(r9)
	PPC_STORE_U32(ctx.r9.u32 + 260, ctx.r10.u32);
loc_82C052AC:
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82c052c4
	if (!ctx.cr6.eq) goto loc_82C052C4;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82c052d4
	goto loc_82C052D4;
loc_82C052C4:
	// li r10,-2
	ctx.r10.s64 = -2;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r30,r8,28,30,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
loc_82C052D4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c05338
	if (ctx.cr6.eq) goto loc_82C05338;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c05338
	if (ctx.cr6.eq) goto loc_82C05338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db950
	ctx.lr = 0x82C052F4;
	sub_827DB950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c05484
	if (ctx.cr6.eq) goto loc_82C05484;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c05484
	if (!ctx.cr6.eq) goto loc_82C05484;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,-1
	ctx.r10.s64 = -1;
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
	// lfs f0,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// b 0x82c05484
	goto loc_82C05484;
loc_82C05338:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c05368
	if (ctx.cr6.eq) goto loc_82C05368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db950
	ctx.lr = 0x82C05350;
	sub_827DB950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c05484
	if (ctx.cr6.eq) goto loc_82C05484;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827dbb88
	ctx.lr = 0x82C05364;
	sub_827DBB88(ctx, base);
	// b 0x82c05484
	goto loc_82C05484;
loc_82C05368:
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c05430
	if (ctx.cr6.eq) goto loc_82C05430;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c053a8
	if (!ctx.cr6.eq) goto loc_82C053A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db950
	ctx.lr = 0x82C05390;
	sub_827DB950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c05484
	if (ctx.cr6.eq) goto loc_82C05484;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827da248
	ctx.lr = 0x82C053A4;
	sub_827DA248(ctx, base);
	// b 0x82c05484
	goto loc_82C05484;
loc_82C053A8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82c05410
	if (ctx.cr6.eq) goto loc_82C05410;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82c053e8
	if (ctx.cr6.eq) goto loc_82C053E8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82c0544c
	if (!ctx.cr6.eq) goto loc_82C0544C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db950
	ctx.lr = 0x82C053D0;
	sub_827DB950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0544c
	if (ctx.cr6.eq) goto loc_82C0544C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827dbb28
	ctx.lr = 0x82C053E4;
	sub_827DBB28(ctx, base);
	// b 0x82c0544c
	goto loc_82C0544C;
loc_82C053E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db950
	ctx.lr = 0x82C053F0;
	sub_827DB950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0544c
	if (ctx.cr6.eq) goto loc_82C0544C;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827d9c98
	ctx.lr = 0x82C0540C;
	sub_827D9C98(ctx, base);
	// b 0x82c0544c
	goto loc_82C0544C;
loc_82C05410:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db950
	ctx.lr = 0x82C05418;
	sub_827DB950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0544c
	if (ctx.cr6.eq) goto loc_82C0544C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827dae88
	ctx.lr = 0x82C0542C;
	sub_827DAE88(ctx, base);
	// b 0x82c0544c
	goto loc_82C0544C;
loc_82C05430:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db950
	ctx.lr = 0x82C05438;
	sub_827DB950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0544c
	if (ctx.cr6.eq) goto loc_82C0544C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827da248
	ctx.lr = 0x82C0544C;
	sub_827DA248(ctx, base);
loc_82C0544C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c05484
	if (ctx.cr6.eq) goto loc_82C05484;
	// rlwinm r11,r11,0,21,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c05484
	if (!ctx.cr6.eq) goto loc_82C05484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db950
	ctx.lr = 0x82C05470;
	sub_827DB950(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c05484
	if (ctx.cr6.eq) goto loc_82C05484;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d9bc0
	ctx.lr = 0x82C05484;
	sub_827D9BC0(ctx, base);
loc_82C05484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be1910
	ctx.lr = 0x82C0548C;
	sub_82BE1910(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c054f0
	if (ctx.cr6.eq) goto loc_82C054F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c054f0
	if (ctx.cr6.eq) goto loc_82C054F0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c054dc
	if (ctx.cr6.eq) goto loc_82C054DC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c054f0
	if (!ctx.cr6.eq) goto loc_82C054F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// bl 0x827ef528
	ctx.lr = 0x82C054D8;
	sub_827EF528(ctx, base);
	// b 0x82c054f0
	goto loc_82C054F0;
loc_82C054DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r4,r11,0,10,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// bl 0x827d5090
	ctx.lr = 0x82C054F0;
	sub_827D5090(ctx, base);
loc_82C054F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c05540
	if (ctx.cr6.eq) goto loc_82C05540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdfda8
	ctx.lr = 0x82C05508;
	sub_82BDFDA8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c05540
	if (ctx.cr6.eq) goto loc_82C05540;
	// lbz r11,162(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 162);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c05540
	if (ctx.cr6.eq) goto loc_82C05540;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdb790
	ctx.lr = 0x82C05540;
	sub_82BDB790(ctx, base);
loc_82C05540:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c05598
	if (ctx.cr6.eq) goto loc_82C05598;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c05564
	if (ctx.cr6.eq) goto loc_82C05564;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82c05568
	goto loc_82C05568;
loc_82C05564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C05568:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r8,-31944
	ctx.r8.s64 = -2093481984;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// addi r8,r8,18068
	ctx.r8.s64 = ctx.r8.s64 + 18068;
	// lfs f1,29760(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// ori r4,r4,65
	ctx.r4.u64 = ctx.r4.u64 | 65;
	// lfs f3,-30776(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30776);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bl 0x82bda5f0
	ctx.lr = 0x82C05598;
	sub_82BDA5F0(ctx, base);
loc_82C05598:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c055b8
	if (ctx.cr6.eq) goto loc_82C055B8;
	// lwz r11,13412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// bl 0x82bd7068
	ctx.lr = 0x82C055B8;
	sub_82BD7068(ctx, base);
loc_82C055B8:
	// lbz r10,19(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r5,r7,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// stb r7,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r7.u8);
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// rlwinm r7,r10,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// stb r10,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r10.u8);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stb r5,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r5.u8);
	// beq cr6,0x82c05610
	if (ctx.cr6.eq) goto loc_82C05610;
	// lhz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 46);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r9,r9,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// sth r9,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r9.u16);
loc_82C05610:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r5,r11,1
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r5,0,2,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20000000;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stb r9,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r9.u8);
	// rlwinm r11,r5,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c05648
	if (ctx.cr6.eq) goto loc_82C05648;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c0565c
	if (!ctx.cr6.eq) goto loc_82C0565C;
	// oris r4,r5,32
	ctx.r4.u64 = ctx.r5.u64 | 2097152;
	// b 0x82c05654
	goto loc_82C05654;
loc_82C05648:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0565c
	if (ctx.cr6.eq) goto loc_82C0565C;
	// rlwinm r4,r5,0,11,9
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
loc_82C05654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d4f40
	ctx.lr = 0x82C0565C;
	sub_827D4F40(ctx, base);
loc_82C0565C:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r5,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r5,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x400000;
	// beq cr6,0x82c05680
	if (ctx.cr6.eq) goto loc_82C05680;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c05694
	if (!ctx.cr6.eq) goto loc_82C05694;
	// oris r4,r5,64
	ctx.r4.u64 = ctx.r5.u64 | 4194304;
	// b 0x82c0568c
	goto loc_82C0568C;
loc_82C05680:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c05694
	if (ctx.cr6.eq) goto loc_82C05694;
	// rlwinm r4,r5,0,10,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
loc_82C0568C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d4f40
	ctx.lr = 0x82C05694;
	sub_827D4F40(ctx, base);
loc_82C05694:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c056a8
	if (ctx.cr6.eq) goto loc_82C056A8;
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 42);
	// sth r10,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_82C056A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C056B0"))) PPC_WEAK_FUNC(sub_82C056B0);
PPC_FUNC_IMPL(__imp__sub_82C056B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C056B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r11,-20000
	ctx.r3.s64 = ctx.r11.s64 + -20000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82218a80
	ctx.lr = 0x82C056D0;
	sub_82218A80(ctx, base);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-19740
	ctx.r9.s64 = ctx.r10.s64 + -19740;
	// stw r30,-19740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19740, ctx.r30.u32);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r30.u32);
	// bl 0x82bc5760
	ctx.lr = 0x82C056F0;
	sub_82BC5760(ctx, base);
	// bl 0x82745698
	ctx.lr = 0x82C056F4;
	sub_82745698(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,12492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c0572c
	if (!ctx.cr6.eq) goto loc_82C0572C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82120040
	ctx.lr = 0x82C05710;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c05724
	if (ctx.cr6.eq) goto loc_82C05724;
	// bl 0x82bc8ef0
	ctx.lr = 0x82C0571C;
	sub_82BC8EF0(ctx, base);
	// stw r3,12492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12492, ctx.r3.u32);
	// b 0x82c0572c
	goto loc_82C0572C;
loc_82C05724:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,12492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12492, ctx.r11.u32);
loc_82C0572C:
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,12704(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c05754
	if (!ctx.cr6.eq) goto loc_82C05754;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82120040
	ctx.lr = 0x82C05748;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c05754
	if (ctx.cr6.eq) goto loc_82C05754;
	// bl 0x82bbe000
	ctx.lr = 0x82C05754;
	sub_82BBE000(ctx, base);
loc_82C05754:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,12452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c0578c
	if (!ctx.cr6.eq) goto loc_82C0578C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82120040
	ctx.lr = 0x82C05770;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c05784
	if (ctx.cr6.eq) goto loc_82C05784;
	// bl 0x82bf68d0
	ctx.lr = 0x82C0577C;
	sub_82BF68D0(ctx, base);
	// stw r3,12452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12452, ctx.r3.u32);
	// b 0x82c0578c
	goto loc_82C0578C;
loc_82C05784:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,12452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12452, ctx.r11.u32);
loc_82C0578C:
	// bl 0x8212e508
	ctx.lr = 0x82C05790;
	sub_8212E508(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,552
	ctx.r3.s64 = 552;
	// bl 0x82120040
	ctx.lr = 0x82C0579C;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c057b4
	if (ctx.cr6.eq) goto loc_82C057B4;
	// bl 0x8215a2e8
	ctx.lr = 0x82C057A8;
	sub_8215A2E8(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r3,14188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14188, ctx.r3.u32);
	// b 0x82c057c0
	goto loc_82C057C0;
loc_82C057B4:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,14188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14188, ctx.r11.u32);
loc_82C057C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4148
	ctx.r3.s64 = 4148;
	// bl 0x82120040
	ctx.lr = 0x82C057CC;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c057e8
	if (ctx.cr6.eq) goto loc_82C057E8;
	// bl 0x82bcdf08
	ctx.lr = 0x82C057D8;
	sub_82BCDF08(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r31,r11,12480
	ctx.r31.s64 = ctx.r11.s64 + 12480;
	// stw r3,12480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12480, ctx.r3.u32);
	// b 0x82c057f8
	goto loc_82C057F8;
loc_82C057E8:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r31,r10,12480
	ctx.r31.s64 = ctx.r10.s64 + 12480;
	// stw r11,12480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12480, ctx.r11.u32);
loc_82C057F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16600
	ctx.r3.s64 = 16600;
	// bl 0x82120040
	ctx.lr = 0x82C05804;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0581c
	if (ctx.cr6.eq) goto loc_82C0581C;
	// bl 0x827bbbf0
	ctx.lr = 0x82C05810;
	sub_827BBBF0(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r3,13604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13604, ctx.r3.u32);
	// b 0x82c05828
	goto loc_82C05828;
loc_82C0581C:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,13604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13604, ctx.r11.u32);
loc_82C05828:
	// lis r3,5
	ctx.r3.s64 = 327680;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,10772
	ctx.r3.u64 = ctx.r3.u64 | 10772;
	// bl 0x82120040
	ctx.lr = 0x82C05838;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c05850
	if (ctx.cr6.eq) goto loc_82C05850;
	// bl 0x827c6580
	ctx.lr = 0x82C05844;
	sub_827C6580(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r3,13596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13596, ctx.r3.u32);
	// b 0x82c0585c
	goto loc_82C0585C;
loc_82C05850:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,13596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13596, ctx.r11.u32);
loc_82C0585C:
	// bl 0x82c06888
	ctx.lr = 0x82C05860;
	sub_82C06888(ctx, base);
	// bl 0x827851b0
	ctx.lr = 0x82C05864;
	sub_827851B0(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c05884
	if (ctx.cr6.eq) goto loc_82C05884;
	// bl 0x82785ae8
	ctx.lr = 0x82C05878;
	sub_82785AE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c05884
	if (!ctx.cr6.eq) goto loc_82C05884;
	// bl 0x82785080
	ctx.lr = 0x82C05884;
	sub_82785080(ctx, base);
loc_82C05884:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bcd888
	ctx.lr = 0x82C0588C;
	sub_82BCD888(ctx, base);
	// lwz r3,12704(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12704);
	// bl 0x82bbe810
	ctx.lr = 0x82C05894;
	sub_82BBE810(ctx, base);
	// bl 0x821200d8
	ctx.lr = 0x82C05898;
	sub_821200D8(ctx, base);
	// bl 0x82bcfea0
	ctx.lr = 0x82C0589C;
	sub_82BCFEA0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82C058A0;
	sub_821201B0(ctx, base);
	// bl 0x82bcc8d8
	ctx.lr = 0x82C058A4;
	sub_82BCC8D8(ctx, base);
	// bl 0x82bd1160
	ctx.lr = 0x82C058A8;
	sub_82BD1160(ctx, base);
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r6,-31947
	ctx.r6.s64 = -2093678592;
	// addi r5,r7,18196
	ctx.r5.s64 = ctx.r7.s64 + 18196;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r9,18196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 18196, ctx.r9.u32);
	// stb r8,12107(r6)
	PPC_STORE_U8(ctx.r6.u32 + 12107, ctx.r8.u8);
	// bl 0x827cb740
	ctx.lr = 0x82C058D8;
	sub_827CB740(ctx, base);
	// bl 0x827effa0
	ctx.lr = 0x82C058DC;
	sub_827EFFA0(ctx, base);
	// bl 0x82c06080
	ctx.lr = 0x82C058E0;
	sub_82C06080(ctx, base);
	// bl 0x82c015c0
	ctx.lr = 0x82C058E4;
	sub_82C015C0(ctx, base);
	// bl 0x82bbb168
	ctx.lr = 0x82C058E8;
	sub_82BBB168(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// lis r8,-31944
	ctx.r8.s64 = -2093481984;
	// lwz r11,13400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13400);
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lfs f0,-30784(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -30784);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30788(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -30788);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f12,27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,18052(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 18052, temp.u32);
	// stfs f13,18048(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 18048, temp.u32);
	// stfs f12,17508(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 17508, temp.u32);
	// bne cr6,0x82c05950
	if (!ctx.cr6.eq) goto loc_82C05950;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82120040
	ctx.lr = 0x82C05934;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c05948
	if (ctx.cr6.eq) goto loc_82C05948;
	// bl 0x827f2220
	ctx.lr = 0x82C05940;
	sub_827F2220(ctx, base);
	// stw r3,13400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13400, ctx.r3.u32);
	// b 0x82c05950
	goto loc_82C05950;
loc_82C05948:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,13400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13400, ctx.r11.u32);
loc_82C05950:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c059d4
	if (!ctx.cr6.eq) goto loc_82C059D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16432
	ctx.r3.s64 = 16432;
	// bl 0x82120040
	ctx.lr = 0x82C0596C;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c059cc
	if (ctx.cr6.eq) goto loc_82C059CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r3,13404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13404, ctx.r3.u32);
	// addi r8,r11,-12148
	ctx.r8.s64 = ctx.r11.s64 + -12148;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r6,r10,-12136
	ctx.r6.s64 = ctx.r10.s64 + -12136;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r5,r9,-12124
	ctx.r5.s64 = ctx.r9.s64 + -12124;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r4,r7,-12112
	ctx.r4.s64 = ctx.r7.s64 + -12112;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// b 0x82c059d4
	goto loc_82C059D4;
loc_82C059CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,13404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13404, ctx.r11.u32);
loc_82C059D4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,-18016
	ctx.r9.s64 = ctx.r11.s64 + -18016;
	// lfs f0,-4012(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 220, temp.u32);
	// bl 0x827eddf8
	ctx.lr = 0x82C059EC;
	sub_827EDDF8(ctx, base);
	// bl 0x82c07f48
	ctx.lr = 0x82C059F0;
	sub_82C07F48(ctx, base);
	// bl 0x827df278
	ctx.lr = 0x82C059F4;
	sub_827DF278(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c05a2c
	if (!ctx.cr6.eq) goto loc_82C05A2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82120040
	ctx.lr = 0x82C05A10;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c05a24
	if (ctx.cr6.eq) goto loc_82C05A24;
	// bl 0x82bed598
	ctx.lr = 0x82C05A1C;
	sub_82BED598(ctx, base);
	// stw r3,13416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13416, ctx.r3.u32);
	// b 0x82c05a2c
	goto loc_82C05A2C;
loc_82C05A24:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,13416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13416, ctx.r11.u32);
loc_82C05A2C:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13980);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c05a94
	if (!ctx.cr6.eq) goto loc_82C05A94;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82120040
	ctx.lr = 0x82C05A48;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c05a8c
	if (ctx.cr6.eq) goto loc_82C05A8C;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C05A78:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82c05a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C05A78;
	// stw r3,13980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13980, ctx.r3.u32);
	// b 0x82c05a94
	goto loc_82C05A94;
loc_82C05A8C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,13980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13980, ctx.r11.u32);
loc_82C05A94:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c05acc
	if (!ctx.cr6.eq) goto loc_82C05ACC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82120040
	ctx.lr = 0x82C05AB0;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c05ac4
	if (ctx.cr6.eq) goto loc_82C05AC4;
	// bl 0x827a4070
	ctx.lr = 0x82C05ABC;
	sub_827A4070(ctx, base);
	// stw r3,13772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13772, ctx.r3.u32);
	// b 0x82c05acc
	goto loc_82C05ACC;
loc_82C05AC4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,13772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13772, ctx.r11.u32);
loc_82C05ACC:
	// bl 0x827ee5f0
	ctx.lr = 0x82C05AD0;
	sub_827EE5F0(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// bl 0x827eece8
	ctx.lr = 0x82C05ADC;
	sub_827EECE8(ctx, base);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,13208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c05b50
	if (!ctx.cr6.eq) goto loc_82C05B50;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82120040
	ctx.lr = 0x82C05AF8;
	sub_82120040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c05b50
	if (ctx.cr6.eq) goto loc_82C05B50;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stb r9,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r9.u8);
	// bl 0x8212ed80
	ctx.lr = 0x82C05B3C;
	sub_8212ED80(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stb r8,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r8.u8);
	// bl 0x8212f2e8
	ctx.lr = 0x82C05B4C;
	sub_8212F2E8(ctx, base);
	// stw r31,13208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13208, ctx.r31.u32);
loc_82C05B50:
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,13240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c05ba4
	if (!ctx.cr6.eq) goto loc_82C05BA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2056
	ctx.r3.s64 = 2056;
	// bl 0x82120040
	ctx.lr = 0x82C05B6C;
	sub_82120040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c05b9c
	if (ctx.cr6.eq) goto loc_82C05B9C;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82218a80
	ctx.lr = 0x82C05B94;
	sub_82218A80(ctx, base);
	// stw r31,13240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13240, ctx.r31.u32);
	// b 0x82c05ba4
	goto loc_82C05BA4;
loc_82C05B9C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,13240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13240, ctx.r11.u32);
loc_82C05BA4:
	// bl 0x82b76e08
	ctx.lr = 0x82C05BA8;
	sub_82B76E08(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c05bc8
	if (!ctx.cr6.eq) goto loc_82C05BC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82120040
	ctx.lr = 0x82C05BC4;
	sub_82120040(ctx, base);
	// stw r3,13204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13204, ctx.r3.u32);
loc_82C05BC8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// bl 0x827e38e0
	ctx.lr = 0x82C05BD4;
	sub_827E38E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x82C05BE0;
	sub_82120040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c05c08
	if (ctx.cr6.eq) goto loc_82C05C08;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,128
	ctx.r4.s64 = 128;
	// lfs f1,-27236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27236);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82746fe0
	ctx.lr = 0x82C05BFC;
	sub_82746FE0(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r31,13988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13988, ctx.r31.u32);
	// b 0x82c05c10
	goto loc_82C05C10;
loc_82C05C08:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r30,13988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13988, ctx.r30.u32);
loc_82C05C10:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r11,-17544
	ctx.r3.s64 = ctx.r11.s64 + -17544;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82218a80
	ctx.lr = 0x82C05C24;
	sub_82218A80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C05C2C"))) PPC_WEAK_FUNC(sub_82C05C2C);
PPC_FUNC_IMPL(__imp__sub_82C05C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C05C30"))) PPC_WEAK_FUNC(sub_82C05C30);
PPC_FUNC_IMPL(__imp__sub_82C05C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82C05C38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c05ca4
	if (ctx.cr6.eq) goto loc_82C05CA4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c05ca4
	if (!ctx.cr6.gt) goto loc_82C05CA4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C05C60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c05c90
	if (ctx.cr6.eq) goto loc_82C05C90;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x827f5600
	ctx.lr = 0x82C05C7C;
	sub_827F5600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f5600
	ctx.lr = 0x82C05C88;
	sub_827F5600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C05C90;
	sub_82120A70(ctx, base);
loc_82C05C90:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c05c60
	if (ctx.cr6.lt) goto loc_82C05C60;
loc_82C05CA4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c05cb4
	if (ctx.cr6.eq) goto loc_82C05CB4;
	// bl 0x82120a70
	ctx.lr = 0x82C05CB4;
	sub_82120A70(ctx, base);
loc_82C05CB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C05CBC"))) PPC_WEAK_FUNC(sub_82C05CBC);
PPC_FUNC_IMPL(__imp__sub_82C05CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C05CC0"))) PPC_WEAK_FUNC(sub_82C05CC0);
PPC_FUNC_IMPL(__imp__sub_82C05CC0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
loc_82C05CC4:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82c05d70
	if (!ctx.cr6.gt) goto loc_82C05D70;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82C05CDC:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c05cec
	if (ctx.cr6.lt) goto loc_82C05CEC;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82c05cf8
	goto loc_82C05CF8;
loc_82C05CEC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
loc_82C05CF8:
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c05d0c
	if (ctx.cr6.lt) goto loc_82C05D0C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82c05d14
	goto loc_82C05D14;
loc_82C05D0C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82C05D14:
	// lwz r4,24(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r31,24(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82c05d50
	if (!ctx.cr6.gt) goto loc_82C05D50;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82c05d38
	if (!ctx.cr6.lt) goto loc_82C05D38;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r10.u32);
loc_82C05D38:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c05d4c
	if (!ctx.cr6.lt) goto loc_82C05D4C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_82C05D4C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82C05D50:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c05cdc
	if (ctx.cr6.lt) goto loc_82C05CDC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82c05cc4
	if (!ctx.cr6.eq) goto loc_82C05CC4;
loc_82C05D70:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C05D78"))) PPC_WEAK_FUNC(sub_82C05D78);
PPC_FUNC_IMPL(__imp__sub_82C05D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82C05D80;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c05e2c
	if (!ctx.cr6.gt) goto loc_82C05E2C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C05DA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c05e18
	if (ctx.cr6.eq) goto loc_82C05E18;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82c05e18
	if (!ctx.cr6.eq) goto loc_82C05E18;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C05DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c05e18
	if (ctx.cr6.eq) goto loc_82C05E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821230b8
	ctx.lr = 0x82C05DEC;
	sub_821230B8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8221b9e0
	ctx.lr = 0x82C05DF4;
	sub_8221B9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c05e18
	if (!ctx.cr6.eq) goto loc_82C05E18;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c05e14
	if (ctx.cr6.eq) goto loc_82C05E14;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c05e18
	if (ctx.cr6.lt) goto loc_82C05E18;
loc_82C05E14:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82C05E18:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c05da8
	if (ctx.cr6.lt) goto loc_82C05DA8;
loc_82C05E2C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C05E38"))) PPC_WEAK_FUNC(sub_82C05E38);
PPC_FUNC_IMPL(__imp__sub_82C05E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82C05E40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82c05e60
	if (!ctx.cr6.eq) goto loc_82C05E60;
loc_82C05E54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82C05E60:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82c05ecc
	if (ctx.cr6.eq) goto loc_82C05ECC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c05ecc
	if (!ctx.cr6.gt) goto loc_82C05ECC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C05E7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82c05eb8
	if (!ctx.cr6.eq) goto loc_82C05EB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821230b8
	ctx.lr = 0x82C05E9C;
	sub_821230B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821230b8
	ctx.lr = 0x82C05EA8;
	sub_821230B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8221b9e0
	ctx.lr = 0x82C05EB0;
	sub_8221B9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c05f00
	if (ctx.cr6.eq) goto loc_82C05F00;
loc_82C05EB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c05e7c
	if (ctx.cr6.lt) goto loc_82C05E7C;
loc_82C05ECC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c05f68
	if (ctx.cr6.lt) goto loc_82C05F68;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c05f54
	if (!ctx.cr6.eq) goto loc_82C05F54;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82120040
	ctx.lr = 0x82C05EFC;
	sub_82120040(ctx, base);
	// b 0x82c05f64
	goto loc_82C05F64;
loc_82C05F00:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c05e54
	if (!ctx.cr6.gt) goto loc_82C05E54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82c05f84
	if (ctx.cr6.eq) goto loc_82C05F84;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x827f5600
	ctx.lr = 0x82C05F34;
	sub_827F5600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f5600
	ctx.lr = 0x82C05F40;
	sub_827F5600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C05F48;
	sub_82120A70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82C05F54:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r11,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82121828
	ctx.lr = 0x82C05F64;
	sub_82121828(ctx, base);
loc_82C05F64:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82C05F68:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82C05F84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C05F90"))) PPC_WEAK_FUNC(sub_82C05F90);
PPC_FUNC_IMPL(__imp__sub_82C05F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82C05F98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c06014
	if (!ctx.cr6.gt) goto loc_82C06014;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C05FC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c06000
	if (ctx.cr6.eq) goto loc_82C06000;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82c06000
	if (!ctx.cr6.eq) goto loc_82C06000;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bfc8b8
	ctx.lr = 0x82C05FE8;
	sub_82BFC8B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c06000
	if (ctx.cr6.eq) goto loc_82C06000;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c05e38
	ctx.lr = 0x82C06000;
	sub_82C05E38(ctx, base);
loc_82C06000:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c05fc0
	if (ctx.cr6.lt) goto loc_82C05FC0;
loc_82C06014:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0601C"))) PPC_WEAK_FUNC(sub_82C0601C);
PPC_FUNC_IMPL(__imp__sub_82C0601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C06020"))) PPC_WEAK_FUNC(sub_82C06020);
PPC_FUNC_IMPL(__imp__sub_82C06020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C06028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,13200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13200);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c06064
	if (ctx.cr6.eq) goto loc_82C06064;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c06050
	if (ctx.cr6.eq) goto loc_82C06050;
	// bl 0x82120a70
	ctx.lr = 0x82C06050;
	sub_82120A70(ctx, base);
loc_82C06050:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x82120a70
	ctx.lr = 0x82C06064;
	sub_82120A70(ctx, base);
loc_82C06064:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,13200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13200, ctx.r11.u32);
	// addi r3,r10,15828
	ctx.r3.s64 = ctx.r10.s64 + 15828;
	// bl 0x8280b928
	ctx.lr = 0x82C06078;
	sub_8280B928(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C06080"))) PPC_WEAK_FUNC(sub_82C06080);
PPC_FUNC_IMPL(__imp__sub_82C06080) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r3,r11,15828
	ctx.r3.s64 = ctx.r11.s64 + 15828;
	// bl 0x8280b9a8
	ctx.lr = 0x82C0609C;
	sub_8280B9A8(ctx, base);
	// bl 0x82b77508
	ctx.lr = 0x82C060A0;
	sub_82B77508(ctx, base);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r31,-29532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29532, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// bl 0x82120040
	ctx.lr = 0x82C060C0;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c060f8
	if (ctx.cr6.eq) goto loc_82C060F8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r3,13200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13200, ctx.r3.u32);
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
loc_82C060F8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r31,13200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13200, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82C06114"))) PPC_WEAK_FUNC(sub_82C06114);
PPC_FUNC_IMPL(__imp__sub_82C06114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C06118"))) PPC_WEAK_FUNC(sub_82C06118);
PPC_FUNC_IMPL(__imp__sub_82C06118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82C06120;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82beb670
	ctx.lr = 0x82C06130;
	sub_82BEB670(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,12492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// beq cr6,0x82c06174
	if (ctx.cr6.eq) goto loc_82C06174;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c06174
	if (ctx.cr6.eq) goto loc_82C06174;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06174
	if (ctx.cr6.eq) goto loc_82C06174;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c06174
	if (ctx.cr6.eq) goto loc_82C06174;
	// lfs f31,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f31.f64 = double(temp.f32);
loc_82C06174:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c06304
	if (ctx.cr6.eq) goto loc_82C06304;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r30,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4000000;
	// rlwinm r27,r11,0,9,9
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c061a8
	if (ctx.cr6.eq) goto loc_82C061A8;
	// lfs f0,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
loc_82C061A8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82c061b8
	if (ctx.cr6.eq) goto loc_82C061B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be5d08
	ctx.lr = 0x82C061B8;
	sub_82BE5D08(ctx, base);
loc_82C061B8:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x82c06244
	if (!ctx.cr6.eq) goto loc_82C06244;
	// rlwinm r10,r30,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c06224
	if (ctx.cr6.eq) goto loc_82C06224;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c06224
	if (ctx.cr6.eq) goto loc_82C06224;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x82c06244
	goto loc_82C06244;
loc_82C06224:
	// rlwinm r11,r30,0,11,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1C0000;
	// lis r10,28
	ctx.r10.s64 = 1835008;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c06244
	if (ctx.cr6.eq) goto loc_82C06244;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82137c30
	ctx.lr = 0x82C06244;
	sub_82137C30(ctx, base);
loc_82C06244:
	// rlwinm r28,r30,0,3,3
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c0625c
	if (ctx.cr6.eq) goto loc_82C0625C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c06264
	if (!ctx.cr6.eq) goto loc_82C06264;
loc_82C0625C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bfe738
	ctx.lr = 0x82C06264;
	sub_82BFE738(ctx, base);
loc_82C06264:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c06290
	if (!ctx.cr6.eq) goto loc_82C06290;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c06288
	if (ctx.cr6.eq) goto loc_82C06288;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c06290
	if (!ctx.cr6.eq) goto loc_82C06290;
loc_82C06288:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// b 0x82c06294
	goto loc_82C06294;
loc_82C06290:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82C06294:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82137e60
	ctx.lr = 0x82C062A8;
	sub_82137E60(ctx, base);
	// rlwinm r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c062c8
	if (ctx.cr6.eq) goto loc_82C062C8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821380f8
	ctx.lr = 0x82C062C8;
	sub_821380F8(ctx, base);
loc_82C062C8:
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c062f4
	if (ctx.cr6.eq) goto loc_82C062F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bdaf70
	ctx.lr = 0x82C062E0;
	sub_82BDAF70(ctx, base);
	// bl 0x82bdb058
	ctx.lr = 0x82C062E4;
	sub_82BDB058(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82bdb330
	ctx.lr = 0x82C062F4;
	sub_82BDB330(ctx, base);
loc_82C062F4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82c06304
	if (ctx.cr6.eq) goto loc_82C06304;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82be62a0
	ctx.lr = 0x82C06304;
	sub_82BE62A0(ctx, base);
loc_82C06304:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C06310"))) PPC_WEAK_FUNC(sub_82C06310);
PPC_FUNC_IMPL(__imp__sub_82C06310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82C06318;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r11,13412(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13412);
	// addi r3,r11,220
	ctx.r3.s64 = ctx.r11.s64 + 220;
	// lwz r27,692(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// bl 0x8212a980
	ctx.lr = 0x82C0634C;
	sub_8212A980(ctx, base);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
loc_82C06350:
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C06358:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c06374
	if (ctx.cr6.eq) goto loc_82C06374;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subfc r9,r11,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x82c06388
	goto loc_82C06388;
loc_82C06374:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subfc r8,r9,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82C06388:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06594
	if (ctx.cr6.eq) goto loc_82C06594;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c063ac
	if (ctx.cr6.eq) goto loc_82C063AC;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x82c063c0
	goto loc_82C063C0;
loc_82C063AC:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r30,r8,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
loc_82C063C0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c06358
	if (ctx.cr6.eq) goto loc_82C06358;
	// rlwinm r11,r11,0,5,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C00000;
	// rlwinm r11,r11,0,9,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFC7FFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c06358
	if (!ctx.cr6.eq) goto loc_82C06358;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0640c
	if (ctx.cr6.eq) goto loc_82C0640C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0640c
	if (ctx.cr6.eq) goto loc_82C0640C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82c06410
	goto loc_82C06410;
loc_82C0640C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C06410:
	// lwz r9,13348(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13348);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82c0642c
	if (ctx.cr6.eq) goto loc_82C0642C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r9,0,21,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c06450
	if (!ctx.cr6.eq) goto loc_82C06450;
loc_82C0642C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06490
	if (ctx.cr6.eq) goto loc_82C06490;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06490
	if (ctx.cr6.eq) goto loc_82C06490;
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rlwinm r9,r11,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c06490
	if (ctx.cr6.eq) goto loc_82C06490;
loc_82C06450:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06490
	if (ctx.cr6.eq) goto loc_82C06490;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c06490
	if (ctx.cr6.eq) goto loc_82C06490;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06490
	if (ctx.cr6.eq) goto loc_82C06490;
	// li r5,68
	ctx.r5.s64 = 68;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82219130
	ctx.lr = 0x82C06488;
	sub_82219130(ctx, base);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C06490:
	// clrlwi r8,r27,31
	ctx.r8.u64 = ctx.r27.u32 & 0x1;
	// lbz r11,19(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c064b0
	if (ctx.cr6.eq) goto loc_82C064B0;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// not r6,r9
	ctx.r6.u64 = ~ctx.r9.u64;
	// rlwinm r11,r6,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// b 0x82c064b4
	goto loc_82C064B4;
loc_82C064B0:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
loc_82C064B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c06358
	if (!ctx.cr6.eq) goto loc_82C06358;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0653c
	if (ctx.cr6.eq) goto loc_82C0653C;
loc_82C064CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0652c
	if (ctx.cr6.eq) goto loc_82C0652C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0652c
	if (ctx.cr6.eq) goto loc_82C0652C;
	// lbz r10,19(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c06504
	if (ctx.cr6.eq) goto loc_82C06504;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// rlwinm r10,r5,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x1;
	// b 0x82c06508
	goto loc_82C06508;
loc_82C06504:
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
loc_82C06508:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c0652c
	if (!ctx.cr6.eq) goto loc_82C0652C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c064cc
	if (!ctx.cr6.eq) goto loc_82C064CC;
	// b 0x82c06534
	goto loc_82C06534;
loc_82C0652C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82c0653c
	if (ctx.cr6.eq) goto loc_82C0653C;
loc_82C06534:
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82C0653C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c06554
	if (ctx.cr6.eq) goto loc_82C06554;
	// lbz r11,19(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r9,r10,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// b 0x82c0655c
	goto loc_82C0655C;
loc_82C06554:
	// lbz r10,19(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
loc_82C0655C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stb r9,19(r30)
	PPC_STORE_U8(ctx.r30.u32 + 19, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06350
	if (ctx.cr6.eq) goto loc_82C06350;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06350
	if (ctx.cr6.eq) goto loc_82C06350;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c06350
	if (!ctx.cr6.eq) goto loc_82C06350;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c06118
	ctx.lr = 0x82C06590;
	sub_82C06118(ctx, base);
	// b 0x82c06350
	goto loc_82C06350;
loc_82C06594:
	// lwz r11,13412(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13412);
	// lwz r10,692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 692, ctx.r10.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c065b8
	if (ctx.cr6.eq) goto loc_82C065B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827e6668
	ctx.lr = 0x82C065B8;
	sub_827E6668(ctx, base);
loc_82C065B8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c065cc
	if (ctx.cr6.eq) goto loc_82C065CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827e65a8
	ctx.lr = 0x82C065CC;
	sub_827E65A8(ctx, base);
loc_82C065CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C065D4"))) PPC_WEAK_FUNC(sub_82C065D4);
PPC_FUNC_IMPL(__imp__sub_82C065D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C065D8"))) PPC_WEAK_FUNC(sub_82C065D8);
PPC_FUNC_IMPL(__imp__sub_82C065D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82C065E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c06690
	if (!ctx.cr6.gt) goto loc_82C06690;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C06600:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82c0667c
	if (!ctx.cr6.eq) goto loc_82C0667C;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c06630
	if (ctx.cr6.eq) goto loc_82C06630;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c06634
	if (ctx.cr6.eq) goto loc_82C06634;
loc_82C06630:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C06634:
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b330
	ctx.lr = 0x82C06640;
	sub_8221B330(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0664c
	if (ctx.cr6.eq) goto loc_82C0664C;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
loc_82C0664C:
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b330
	ctx.lr = 0x82C06658;
	sub_8221B330(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c06664
	if (ctx.cr6.eq) goto loc_82C06664;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
loc_82C06664:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// bl 0x827f53f8
	ctx.lr = 0x82C06674;
	sub_827F53F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c0669c
	if (!ctx.cr6.eq) goto loc_82C0669C;
loc_82C0667C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c06600
	if (ctx.cr6.lt) goto loc_82C06600;
loc_82C06690:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82C0669C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C066A8"))) PPC_WEAK_FUNC(sub_82C066A8);
PPC_FUNC_IMPL(__imp__sub_82C066A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C066B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x827ccbc0
	ctx.lr = 0x82C066C0;
	sub_827CCBC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-2528
	ctx.r9.s64 = ctx.r11.s64 + -2528;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// lbz r8,103(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 103);
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x827f6280
	ctx.lr = 0x82C066F8;
	sub_827F6280(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f6408
	ctx.lr = 0x82C06704;
	sub_827F6408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C06710"))) PPC_WEAK_FUNC(sub_82C06710);
PPC_FUNC_IMPL(__imp__sub_82C06710) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c065d8
	ctx.lr = 0x82C06734;
	sub_82C065D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c06744
	if (ctx.cr6.eq) goto loc_82C06744;
loc_82C0673C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c06788
	goto loc_82C06788;
loc_82C06744:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c0673c
	if (!ctx.cr6.eq) goto loc_82C0673C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82120040
	ctx.lr = 0x82C06760;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0673c
	if (ctx.cr6.eq) goto loc_82C0673C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8275e740
	ctx.lr = 0x82C06774;
	sub_8275E740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c0673c
	if (ctx.cr6.eq) goto loc_82C0673C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be4850
	ctx.lr = 0x82C06788;
	sub_82BE4850(ctx, base);
loc_82C06788:
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

__attribute__((alias("__imp__sub_82C067A0"))) PPC_WEAK_FUNC(sub_82C067A0);
PPC_FUNC_IMPL(__imp__sub_82C067A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82C067A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82c06828
	if (ctx.cr6.eq) goto loc_82C06828;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcd558
	ctx.lr = 0x82C067C8;
	sub_82BCD558(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c06818
	if (ctx.cr6.eq) goto loc_82C06818;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c06828
	if (!ctx.cr6.gt) goto loc_82C06828;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C067E8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82133e60
	ctx.lr = 0x82C067FC;
	sub_82133E60(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c067e8
	if (ctx.cr6.lt) goto loc_82C067E8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82C06818:
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82133e60
	ctx.lr = 0x82C06828;
	sub_82133E60(ctx, base);
loc_82C06828:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C06830"))) PPC_WEAK_FUNC(sub_82C06830);
PPC_FUNC_IMPL(__imp__sub_82C06830) {
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
	// lwz r31,13560(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13560);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c06864
	if (ctx.cr6.eq) goto loc_82C06864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133fa0
	ctx.lr = 0x82C0685C;
	sub_82133FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82C06864;
	sub_82120A70(ctx, base);
loc_82C06864:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13560, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C06884"))) PPC_WEAK_FUNC(sub_82C06884);
PPC_FUNC_IMPL(__imp__sub_82C06884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C06888"))) PPC_WEAK_FUNC(sub_82C06888);
PPC_FUNC_IMPL(__imp__sub_82C06888) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82120040
	ctx.lr = 0x82C068A4;
	sub_82120040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c068d8
	if (ctx.cr6.eq) goto loc_82C068D8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// bl 0x82134a48
	ctx.lr = 0x82C068BC;
	sub_82134A48(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r31,13560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13560, ctx.r31.u32);
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
loc_82C068D8:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13560, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C068F8"))) PPC_WEAK_FUNC(sub_82C068F8);
PPC_FUNC_IMPL(__imp__sub_82C068F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82C06900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,15796
	ctx.r10.s64 = ctx.r11.s64 + 15796;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,13136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13136);
	// rlwinm r11,r11,4,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82C06924:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06994
	if (ctx.cr6.eq) goto loc_82C06994;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c06994
	if (!ctx.cr6.lt) goto loc_82C06994;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06964
	if (ctx.cr6.eq) goto loc_82C06964;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c06968
	if (ctx.cr6.lt) goto loc_82C06968;
loc_82C06964:
	// twi 31,r0,22
loc_82C06968:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c06988
	if (ctx.cr6.eq) goto loc_82C06988;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C06988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C06988:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x82c06924
	goto loc_82C06924;
loc_82C06994:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c06a04
	if (ctx.cr6.eq) goto loc_82C06A04;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c06a04
	if (ctx.cr0.eq) goto loc_82C06A04;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82c069c0
	if (!ctx.cr6.gt) goto loc_82C069C0;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82C069C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82c069d8
	if (ctx.cr6.gt) goto loc_82C069D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c069dc
	if (!ctx.cr6.lt) goto loc_82C069DC;
loc_82C069D8:
	// twi 31,r0,22
loc_82C069DC:
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82c06a04
	if (ctx.cr6.eq) goto loc_82C06A04;
	// subf r11,r5,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r6,r3
	ctx.r30.u64 = ctx.r6.u64 + ctx.r3.u64;
	// ble 0x82c06a00
	if (!ctx.cr0.gt) goto loc_82C06A00;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8221b920
	ctx.lr = 0x82C06A00;
	sub_8221B920(ctx, base);
loc_82C06A00:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82C06A04:
	// lwz r11,13136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13136, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C06A18"))) PPC_WEAK_FUNC(sub_82C06A18);
PPC_FUNC_IMPL(__imp__sub_82C06A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r10,r10,15796
	ctx.r10.s64 = ctx.r10.s64 + 15796;
	// lwz r11,13136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13136);
	// rlwinm r11,r11,4,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c06a54
	if (!ctx.cr6.eq) goto loc_82C06A54;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82c06a60
	goto loc_82C06A60;
loc_82C06A54:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_82C06A60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06a9c
	if (ctx.cr6.eq) goto loc_82C06A9C;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c06a9c
	if (!ctx.cr6.lt) goto loc_82C06A9C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C06A9C:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c06aac
	if (!ctx.cr6.gt) goto loc_82C06AAC;
	// twi 31,r0,22
loc_82C06AAC:
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82128848
	ctx.lr = 0x82C06AC4;
	sub_82128848(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C06AD4"))) PPC_WEAK_FUNC(sub_82C06AD4);
PPC_FUNC_IMPL(__imp__sub_82C06AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C06AD8"))) PPC_WEAK_FUNC(sub_82C06AD8);
PPC_FUNC_IMPL(__imp__sub_82C06AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C06AE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C06AF0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c06a18
	ctx.lr = 0x82C06AF8;
	sub_82C06A18(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82c06af0
	if (!ctx.cr0.eq) goto loc_82C06AF0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C06B10"))) PPC_WEAK_FUNC(sub_82C06B10);
PPC_FUNC_IMPL(__imp__sub_82C06B10) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lbz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r10,13140(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13140);
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r3,13140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13140, ctx.r3.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C06B40"))) PPC_WEAK_FUNC(sub_82C06B40);
PPC_FUNC_IMPL(__imp__sub_82C06B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C06B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r4,12
	ctx.r31.s64 = ctx.r4.s64 + 12;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// li r30,4
	ctx.r30.s64 = 4;
loc_82C06B5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c06a18
	ctx.lr = 0x82C06B64;
	sub_82C06A18(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82c06b5c
	if (!ctx.cr0.eq) goto loc_82C06B5C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C06B7C"))) PPC_WEAK_FUNC(sub_82C06B7C);
PPC_FUNC_IMPL(__imp__sub_82C06B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C06B80"))) PPC_WEAK_FUNC(sub_82C06B80);
PPC_FUNC_IMPL(__imp__sub_82C06B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82C06B88;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,156
	ctx.r25.s64 = 156;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c06bb4
	if (!ctx.cr6.eq) goto loc_82C06BB4;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// b 0x82c06bc0
	goto loc_82C06BC0;
loc_82C06BB4:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r24,r9,r25
	ctx.r24.s32 = ctx.r9.s32 / ctx.r25.s32;
loc_82C06BC0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-30728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4476);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,40(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f31,f10,f0,f13
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// beq cr6,0x82c06c84
	if (ctx.cr6.eq) goto loc_82C06C84;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82C06BF4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06c14
	if (ctx.cr6.eq) goto loc_82C06C14;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = ctx.r9.s32 / ctx.r25.s32;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82c06c18
	if (ctx.cr6.lt) goto loc_82C06C18;
loc_82C06C14:
	// twi 31,r0,22
loc_82C06C18:
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82c06c74
	if (!ctx.cr6.lt) goto loc_82C06C74;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06c48
	if (ctx.cr6.eq) goto loc_82C06C48;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = ctx.r9.s32 / ctx.r25.s32;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82c06c4c
	if (ctx.cr6.lt) goto loc_82C06C4C;
loc_82C06C48:
	// twi 31,r0,22
loc_82C06C4C:
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwx r26,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r26.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r10,12
	ctx.r31.s64 = ctx.r10.s64 + 12;
loc_82C06C5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c06a18
	ctx.lr = 0x82C06C64;
	sub_82C06A18(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82c06c5c
	if (!ctx.cr0.eq) goto loc_82C06C5C;
loc_82C06C74:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,156
	ctx.r29.s64 = ctx.r29.s64 + 156;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82c06bf4
	if (ctx.cr6.lt) goto loc_82C06BF4;
loc_82C06C84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C06C90"))) PPC_WEAK_FUNC(sub_82C06C90);
PPC_FUNC_IMPL(__imp__sub_82C06C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82C06C98;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// li r24,156
	ctx.r24.s64 = 156;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06d28
	if (ctx.cr6.eq) goto loc_82C06D28;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r25,r9,r24
	ctx.r25.s32 = ctx.r9.s32 / ctx.r24.s32;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82c06d28
	if (ctx.cr0.eq) goto loc_82C06D28;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82C06CCC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c06cec
	if (ctx.cr6.eq) goto loc_82C06CEC;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = ctx.r9.s32 / ctx.r24.s32;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82c06cf0
	if (ctx.cr6.lt) goto loc_82C06CF0;
loc_82C06CEC:
	// twi 31,r0,22
loc_82C06CF0:
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stwx r28,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r28.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r10,12
	ctx.r31.s64 = ctx.r10.s64 + 12;
loc_82C06D00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c06a18
	ctx.lr = 0x82C06D08;
	sub_82C06A18(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82c06d00
	if (!ctx.cr0.eq) goto loc_82C06D00;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,156
	ctx.r29.s64 = ctx.r29.s64 + 156;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82c06ccc
	if (ctx.cr6.lt) goto loc_82C06CCC;
loc_82C06D28:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82c06d44
	if (!ctx.cr6.gt) goto loc_82C06D44;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
loc_82C06D44:
	// beq cr6,0x82c06d88
	if (ctx.cr6.eq) goto loc_82C06D88;
	// subf r10,r31,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r31.s64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// divw r9,r10,r24
	ctx.r9.s32 = ctx.r10.s32 / ctx.r24.s32;
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// mulli r10,r9,156
	ctx.r10.s64 = ctx.r9.s64 * 156;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82c06d84
	if (ctx.cr6.eq) goto loc_82C06D84;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_82C06D68:
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r5,156
	ctx.r5.s64 = 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82C06D78;
	sub_82219130(ctx, base);
	// addi r30,r30,156
	ctx.r30.s64 = ctx.r30.s64 + 156;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82c06d68
	if (!ctx.cr6.eq) goto loc_82C06D68;
loc_82C06D84:
	// stw r28,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r28.u32);
loc_82C06D88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C06D90"))) PPC_WEAK_FUNC(sub_82C06D90);
PPC_FUNC_IMPL(__imp__sub_82C06D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82C06D98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r9,156
	ctx.r9.s64 = 156;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c06dbc
	if (!ctx.cr6.eq) goto loc_82C06DBC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82c06dc8
	goto loc_82C06DC8;
loc_82C06DBC:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r8,r9
	ctx.r10.s32 = ctx.r8.s32 / ctx.r9.s32;
loc_82C06DC8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c06e60
	if (!ctx.cr6.lt) goto loc_82C06E60;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c06df4
	if (ctx.cr6.eq) goto loc_82C06DF4;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = ctx.r7.s32 / ctx.r9.s32;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82c06df8
	if (ctx.cr6.lt) goto loc_82C06DF8;
loc_82C06DF4:
	// twi 31,r0,22
loc_82C06DF8:
	// mulli r8,r11,156
	ctx.r8.s64 = ctx.r11.s64 * 156;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82c06e60
	if (!ctx.cr6.eq) goto loc_82C06E60;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c06e28
	if (ctx.cr6.eq) goto loc_82C06E28;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = ctx.r7.s32 / ctx.r9.s32;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82c06e2c
	if (ctx.cr6.lt) goto loc_82C06E2C;
loc_82C06E28:
	// twi 31,r0,22
loc_82C06E2C:
	// mulli r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 * 156;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_82C06E40:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c06a18
	ctx.lr = 0x82C06E48;
	sub_82C06A18(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82c06e40
	if (!ctx.cr0.eq) goto loc_82C06E40;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
loc_82C06E60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C06E68"))) PPC_WEAK_FUNC(sub_82C06E68);
PPC_FUNC_IMPL(__imp__sub_82C06E68) {
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
	// bl 0x82c06c90
	ctx.lr = 0x82C06E80;
	sub_82C06C90(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,13140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13140);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82c06e9c
	if (!ctx.cr6.eq) goto loc_82C06E9C;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,13140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13140, ctx.r10.u32);
	// b 0x82c06ec8
	goto loc_82C06EC8;
loc_82C06E9C:
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c06ec0
	if (ctx.cr6.eq) goto loc_82C06EC0;
loc_82C06EAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 + 20;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82c06eac
	if (!ctx.cr6.eq) goto loc_82C06EAC;
loc_82C06EC0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
loc_82C06EC8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c06edc
	if (ctx.cr6.eq) goto loc_82C06EDC;
	// bl 0x82120a70
	ctx.lr = 0x82C06EDC;
	sub_82120A70(ctx, base);
loc_82C06EDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C06F00"))) PPC_WEAK_FUNC(sub_82C06F00);
PPC_FUNC_IMPL(__imp__sub_82C06F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r31,13140(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13140);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c06f44
	if (ctx.cr6.eq) goto loc_82C06F44;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f31,-4476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4476);
	ctx.f31.f64 = double(temp.f32);
loc_82C06F2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82c06b80
	ctx.lr = 0x82C06F38;
	sub_82C06B80(ctx, base);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c06f2c
	if (!ctx.cr6.eq) goto loc_82C06F2C;
loc_82C06F44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C06F5C"))) PPC_WEAK_FUNC(sub_82C06F5C);
PPC_FUNC_IMPL(__imp__sub_82C06F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C06F60"))) PPC_WEAK_FUNC(sub_82C06F60);
PPC_FUNC_IMPL(__imp__sub_82C06F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82C06F68;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r8,12492(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12492);
	// li r29,156
	ctx.r29.s64 = 156;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f31,-30728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r25,4
	ctx.r31.s64 = ctx.r25.s64 + 4;
	// lfs f0,-4472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4472);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfd f13,40(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 40);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmsubs f0,f11,f31,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f0.f64));
	// bne cr6,0x82c06fc0
	if (!ctx.cr6.eq) goto loc_82C06FC0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// b 0x82c06fcc
	goto loc_82C06FCC;
loc_82C06FC0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r6,r9,r29
	ctx.r6.s32 = ctx.r9.s32 / ctx.r29.s32;
loc_82C06FCC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c06fe0
	if (!ctx.cr6.eq) goto loc_82C06FE0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x82c06fec
	goto loc_82C06FEC;
loc_82C06FE0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r29
	ctx.r10.s32 = ctx.r9.s32 / ctx.r29.s32;
loc_82C06FEC:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c0705c
	if (!ctx.cr6.lt) goto loc_82C0705C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c07018
	if (ctx.cr6.eq) goto loc_82C07018;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = ctx.r8.s32 / ctx.r29.s32;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c0701c
	if (ctx.cr6.lt) goto loc_82C0701C;
loc_82C07018:
	// twi 31,r0,22
loc_82C0701C:
	// mulli r9,r11,156
	ctx.r9.s64 = ctx.r11.s64 * 156;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82c0705c
	if (!ctx.cr6.eq) goto loc_82C0705C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0704c
	if (ctx.cr6.eq) goto loc_82C0704C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = ctx.r8.s32 / ctx.r29.s32;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c07050
	if (ctx.cr6.lt) goto loc_82C07050;
loc_82C0704C:
	// twi 31,r0,22
loc_82C07050:
	// mulli r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 * 156;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82c072a4
	goto loc_82C072A4;
loc_82C0705C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c07190
	if (ctx.cr6.eq) goto loc_82C07190;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82C07078:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c07098
	if (ctx.cr6.eq) goto loc_82C07098;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	// divw r3,r4,r29
	ctx.r3.s32 = ctx.r4.s32 / ctx.r29.s32;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82c0709c
	if (ctx.cr6.lt) goto loc_82C0709C;
loc_82C07098:
	// twi 31,r0,22
loc_82C0709C:
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82c07148
	if (ctx.cr6.eq) goto loc_82C07148;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x82c070e8
	if (!ctx.cr6.eq) goto loc_82C070E8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c070d0
	if (ctx.cr6.eq) goto loc_82C070D0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	// divw r3,r4,r29
	ctx.r3.s32 = ctx.r4.s32 / ctx.r29.s32;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82c070d4
	if (ctx.cr6.lt) goto loc_82C070D4;
loc_82C070D0:
	// twi 31,r0,22
loc_82C070D4:
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c070e8
	if (!ctx.cr6.eq) goto loc_82C070E8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x82c07128
	goto loc_82C07128;
loc_82C070E8:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82c07128
	if (!ctx.cr6.eq) goto loc_82C07128;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c07110
	if (ctx.cr6.eq) goto loc_82C07110;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	// divw r3,r4,r29
	ctx.r3.s32 = ctx.r4.s32 / ctx.r29.s32;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82c07114
	if (ctx.cr6.lt) goto loc_82C07114;
loc_82C07110:
	// twi 31,r0,22
loc_82C07114:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82c07128
	if (!ctx.cr6.lt) goto loc_82C07128;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82C07128:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,156
	ctx.r9.s64 = ctx.r9.s64 + 156;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82c07078
	if (ctx.cr6.lt) goto loc_82C07078;
loc_82C07138:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82c07180
	if (ctx.cr6.eq) goto loc_82C07180;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82c07264
	goto loc_82C07264;
loc_82C07148:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82c07138
	if (!ctx.cr6.lt) goto loc_82C07138;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c07170
	if (ctx.cr6.eq) goto loc_82C07170;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = ctx.r8.s32 / ctx.r29.s32;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c07174
	if (ctx.cr6.lt) goto loc_82C07174;
loc_82C07170:
	// twi 31,r0,22
loc_82C07174:
	// mulli r9,r11,156
	ctx.r9.s64 = ctx.r11.s64 * 156;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82c072a0
	goto loc_82C072A0;
loc_82C07180:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82c07190
	if (ctx.cr6.eq) goto loc_82C07190;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82c07264
	goto loc_82C07264;
loc_82C07190:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// li r10,19
	ctx.r10.s64 = 19;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C071A0:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82c071a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C071A0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c071c4
	if (!ctx.cr6.eq) goto loc_82C071C4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82c071d0
	goto loc_82C071D0;
loc_82C071C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r29
	ctx.r11.s32 = ctx.r9.s32 / ctx.r29.s32;
loc_82C071D0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c07214
	if (ctx.cr6.eq) goto loc_82C07214;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = ctx.r8.s32 / ctx.r29.s32;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82c07214
	if (!ctx.cr6.lt) goto loc_82C07214;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c07208
	if (ctx.cr6.eq) goto loc_82C07208;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,156
	ctx.r5.s64 = 156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82C07208;
	sub_82219130(ctx, base);
loc_82C07208:
	// addi r11,r30,156
	ctx.r11.s64 = ctx.r30.s64 + 156;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82c07240
	goto loc_82C07240;
loc_82C07214:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c07224
	if (!ctx.cr6.gt) goto loc_82C07224;
	// twi 31,r0,22
loc_82C07224:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82128768
	ctx.lr = 0x82C07240;
	sub_82128768(ctx, base);
loc_82C07240:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c07254
	if (!ctx.cr6.eq) goto loc_82C07254;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82c07260
	goto loc_82C07260;
loc_82C07254:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r9,r29
	ctx.r11.s32 = ctx.r9.s32 / ctx.r29.s32;
loc_82C07260:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82C07264:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c07284
	if (ctx.cr6.eq) goto loc_82C07284;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = ctx.r8.s32 / ctx.r29.s32;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c07288
	if (ctx.cr6.lt) goto loc_82C07288;
loc_82C07284:
	// twi 31,r0,22
loc_82C07288:
	// mulli r9,r11,156
	ctx.r9.s64 = ctx.r11.s64 * 156;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82C072A0:
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
loc_82C072A4:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c072f0
	if (ctx.cr6.eq) goto loc_82C072F0;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// li r29,4
	ctx.r29.s64 = 4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82C072C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c06a18
	ctx.lr = 0x82C072C8;
	sub_82C06A18(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c072c0
	if (!ctx.cr0.eq) goto loc_82C072C0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82b9de50
	ctx.lr = 0x82C072E8;
	sub_82B9DE50(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82C072F0:
	// lwz r11,12492(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12492);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,40(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C07318"))) PPC_WEAK_FUNC(sub_82C07318);
PPC_FUNC_IMPL(__imp__sub_82C07318) {
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
	// bl 0x82c06f60
	ctx.lr = 0x82C07328;
	sub_82C06F60(ctx, base);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0733C"))) PPC_WEAK_FUNC(sub_82C0733C);
PPC_FUNC_IMPL(__imp__sub_82C0733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C07340"))) PPC_WEAK_FUNC(sub_82C07340);
PPC_FUNC_IMPL(__imp__sub_82C07340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82C07348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82120040
	ctx.lr = 0x82C0735C;
	sub_82120040(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c07384
	if (!ctx.cr6.eq) goto loc_82C07384;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82C07384:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82C07398;
	sub_82BFD450(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r11,12456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12456);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82c073f0
	if (ctx.cr6.eq) goto loc_82C073F0;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C073F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07420
	if (ctx.cr6.eq) goto loc_82C07420;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82c07420
	if (ctx.cr6.eq) goto loc_82C07420;
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-12184
	ctx.r5.s64 = ctx.r11.s64 + -12184;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82C07418;
	sub_82BCE5D8(ctx, base);
	// lwz r11,12456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12456);
	// b 0x82c07424
	goto loc_82C07424;
loc_82C07420:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82C07424:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82c07480
	if (ctx.cr6.eq) goto loc_82C07480;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82C07480:
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C07490"))) PPC_WEAK_FUNC(sub_82C07490);
PPC_FUNC_IMPL(__imp__sub_82C07490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82C07498;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82120040
	ctx.lr = 0x82C074AC;
	sub_82120040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c074d4
	if (!ctx.cr6.eq) goto loc_82C074D4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82C074D4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82C074EC;
	sub_82BFD450(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c07500
	if (!ctx.cr6.eq) goto loc_82C07500;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82C07500:
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,12476(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c0752c
	if (ctx.cr6.eq) goto loc_82C0752C;
	// lwz r11,12496(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82c0752c
	if (!ctx.cr6.eq) goto loc_82C0752C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82c07534
	goto loc_82C07534;
loc_82C0752C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82C07534:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0763c
	if (ctx.cr6.eq) goto loc_82C0763C;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82C07554;
	sub_82120040(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c07624
	if (ctx.cr6.eq) goto loc_82C07624;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
loc_82C0756C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r7,12456(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82c075c0
	if (ctx.cr6.eq) goto loc_82C075C0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C075C0:
	// lwz r11,12476(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c075d8
	if (ctx.cr6.eq) goto loc_82C075D8;
	// lwz r11,12496(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82c075dc
	if (ctx.cr6.eq) goto loc_82C075DC;
loc_82C075D8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82C075DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c07614
	if (ctx.cr6.eq) goto loc_82C07614;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32064
	ctx.r9.s64 = -2101346304;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r9,29504
	ctx.r5.s64 = ctx.r9.s64 + 29504;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x82C07608;
	sub_82BCE5D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82C07614:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c0756c
	if (ctx.cr6.lt) goto loc_82C0756C;
loc_82C07624:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c0763c
	if (!ctx.cr6.eq) goto loc_82C0763C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82120a70
	ctx.lr = 0x82C07638;
	sub_82120A70(ctx, base);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_82C0763C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

