#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C096C0"))) PPC_WEAK_FUNC(sub_82C096C0);
PPC_FUNC_IMPL(__imp__sub_82C096C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// b 0x822b45a8
	sub_822B45A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C096CC"))) PPC_WEAK_FUNC(sub_82C096CC);
PPC_FUNC_IMPL(__imp__sub_82C096CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C096D0"))) PPC_WEAK_FUNC(sub_82C096D0);
PPC_FUNC_IMPL(__imp__sub_82C096D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 192;
	// b 0x822889e0
	sub_822889E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C096DC"))) PPC_WEAK_FUNC(sub_82C096DC);
PPC_FUNC_IMPL(__imp__sub_82C096DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C096E0"))) PPC_WEAK_FUNC(sub_82C096E0);
PPC_FUNC_IMPL(__imp__sub_82C096E0) {
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
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r31,r11,8436
	ctx.r31.s64 = ctx.r11.s64 + 8436;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c09714
	if (ctx.cr6.eq) goto loc_82C09714;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22600
	ctx.r4.s64 = ctx.r11.s64 + -22600;
	// bl 0x825fe700
	ctx.lr = 0x82C09714;
	sub_825FE700(ctx, base);
loc_82C09714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822998d8
	ctx.lr = 0x82C0971C;
	sub_822998D8(ctx, base);
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

__attribute__((alias("__imp__sub_82C09730"))) PPC_WEAK_FUNC(sub_82C09730);
PPC_FUNC_IMPL(__imp__sub_82C09730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,8520
	ctx.r3.s64 = ctx.r11.s64 + 8520;
	// b 0x822b45a8
	sub_822B45A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0973C"))) PPC_WEAK_FUNC(sub_82C0973C);
PPC_FUNC_IMPL(__imp__sub_82C0973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09740"))) PPC_WEAK_FUNC(sub_82C09740);
PPC_FUNC_IMPL(__imp__sub_82C09740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,8564
	ctx.r3.s64 = ctx.r11.s64 + 8564;
	// b 0x822c0a78
	sub_822C0A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0974C"))) PPC_WEAK_FUNC(sub_82C0974C);
PPC_FUNC_IMPL(__imp__sub_82C0974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09750"))) PPC_WEAK_FUNC(sub_82C09750);
PPC_FUNC_IMPL(__imp__sub_82C09750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09754"))) PPC_WEAK_FUNC(sub_82C09754);
PPC_FUNC_IMPL(__imp__sub_82C09754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09758"))) PPC_WEAK_FUNC(sub_82C09758);
PPC_FUNC_IMPL(__imp__sub_82C09758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,-9736
	ctx.r11.s64 = ctx.r11.s64 + -9736;
	// stw r11,-18296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18296, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0976C"))) PPC_WEAK_FUNC(sub_82C0976C);
PPC_FUNC_IMPL(__imp__sub_82C0976C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09770"))) PPC_WEAK_FUNC(sub_82C09770);
PPC_FUNC_IMPL(__imp__sub_82C09770) {
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
	// lis r31,-32029
	ctx.r31.s64 = -2099052544;
	// addi r11,r31,8816
	ctx.r11.s64 = ctx.r31.s64 + 8816;
	// addi r3,r11,1360
	ctx.r3.s64 = ctx.r11.s64 + 1360;
	// bl 0x822c0a78
	ctx.lr = 0x82C09790;
	sub_822C0A78(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-2476
	ctx.r11.s64 = ctx.r11.s64 + -2476;
	// stw r11,8816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8816, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C097B0"))) PPC_WEAK_FUNC(sub_82C097B0);
PPC_FUNC_IMPL(__imp__sub_82C097B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,-2476
	ctx.r11.s64 = ctx.r11.s64 + -2476;
	// stw r11,8744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C097C4"))) PPC_WEAK_FUNC(sub_82C097C4);
PPC_FUNC_IMPL(__imp__sub_82C097C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C097C8"))) PPC_WEAK_FUNC(sub_82C097C8);
PPC_FUNC_IMPL(__imp__sub_82C097C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,-11184
	ctx.r11.s64 = ctx.r11.s64 + -11184;
	// stw r11,10212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C097DC"))) PPC_WEAK_FUNC(sub_82C097DC);
PPC_FUNC_IMPL(__imp__sub_82C097DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C097E0"))) PPC_WEAK_FUNC(sub_82C097E0);
PPC_FUNC_IMPL(__imp__sub_82C097E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,10232
	ctx.r3.s64 = ctx.r10.s64 + 10232;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// b 0x822c0a78
	sub_822C0A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C097F4"))) PPC_WEAK_FUNC(sub_82C097F4);
PPC_FUNC_IMPL(__imp__sub_82C097F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C097F8"))) PPC_WEAK_FUNC(sub_82C097F8);
PPC_FUNC_IMPL(__imp__sub_82C097F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,5844
	ctx.r11.s64 = ctx.r11.s64 + 5844;
	// stw r11,-15716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0980C"))) PPC_WEAK_FUNC(sub_82C0980C);
PPC_FUNC_IMPL(__imp__sub_82C0980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09810"))) PPC_WEAK_FUNC(sub_82C09810);
PPC_FUNC_IMPL(__imp__sub_82C09810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,5844
	ctx.r11.s64 = ctx.r11.s64 + 5844;
	// stw r11,-15712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09824"))) PPC_WEAK_FUNC(sub_82C09824);
PPC_FUNC_IMPL(__imp__sub_82C09824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09828"))) PPC_WEAK_FUNC(sub_82C09828);
PPC_FUNC_IMPL(__imp__sub_82C09828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,8004
	ctx.r11.s64 = ctx.r11.s64 + 8004;
	// stw r11,10272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10272, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0983C"))) PPC_WEAK_FUNC(sub_82C0983C);
PPC_FUNC_IMPL(__imp__sub_82C0983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09840"))) PPC_WEAK_FUNC(sub_82C09840);
PPC_FUNC_IMPL(__imp__sub_82C09840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,8004
	ctx.r11.s64 = ctx.r11.s64 + 8004;
	// stw r11,10280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10280, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09854"))) PPC_WEAK_FUNC(sub_82C09854);
PPC_FUNC_IMPL(__imp__sub_82C09854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09858"))) PPC_WEAK_FUNC(sub_82C09858);
PPC_FUNC_IMPL(__imp__sub_82C09858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,10292
	ctx.r3.s64 = ctx.r11.s64 + 10292;
	// b 0x822dca48
	sub_822DCA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C09864"))) PPC_WEAK_FUNC(sub_82C09864);
PPC_FUNC_IMPL(__imp__sub_82C09864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09868"))) PPC_WEAK_FUNC(sub_82C09868);
PPC_FUNC_IMPL(__imp__sub_82C09868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,8004
	ctx.r11.s64 = ctx.r11.s64 + 8004;
	// stw r11,-15708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15708, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0987C"))) PPC_WEAK_FUNC(sub_82C0987C);
PPC_FUNC_IMPL(__imp__sub_82C0987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09880"))) PPC_WEAK_FUNC(sub_82C09880);
PPC_FUNC_IMPL(__imp__sub_82C09880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,5844
	ctx.r11.s64 = ctx.r11.s64 + 5844;
	// stw r11,-15704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15704, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09894"))) PPC_WEAK_FUNC(sub_82C09894);
PPC_FUNC_IMPL(__imp__sub_82C09894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09898"))) PPC_WEAK_FUNC(sub_82C09898);
PPC_FUNC_IMPL(__imp__sub_82C09898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,10376
	ctx.r3.s64 = ctx.r11.s64 + 10376;
	// lbz r11,10376(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10376);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// b 0x82356010
	sub_82356010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C098B0"))) PPC_WEAK_FUNC(sub_82C098B0);
PPC_FUNC_IMPL(__imp__sub_82C098B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C098B4"))) PPC_WEAK_FUNC(sub_82C098B4);
PPC_FUNC_IMPL(__imp__sub_82C098B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C098B8"))) PPC_WEAK_FUNC(sub_82C098B8);
PPC_FUNC_IMPL(__imp__sub_82C098B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r3,r11,-14664
	ctx.r3.s64 = ctx.r11.s64 + -14664;
	// lbz r11,-14664(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -14664);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// b 0x82356010
	sub_82356010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C098D0"))) PPC_WEAK_FUNC(sub_82C098D0);
PPC_FUNC_IMPL(__imp__sub_82C098D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C098D4"))) PPC_WEAK_FUNC(sub_82C098D4);
PPC_FUNC_IMPL(__imp__sub_82C098D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C098D8"))) PPC_WEAK_FUNC(sub_82C098D8);
PPC_FUNC_IMPL(__imp__sub_82C098D8) {
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
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,-14648
	ctx.r11.s64 = ctx.r11.s64 + -14648;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_82C098FC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82c09914
	if (ctx.cr6.lt) goto loc_82C09914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356010
	ctx.lr = 0x82C09914;
	sub_82356010(ctx, base);
loc_82C09914:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82c098fc
	if (!ctx.cr0.lt) goto loc_82C098FC;
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

__attribute__((alias("__imp__sub_82C09934"))) PPC_WEAK_FUNC(sub_82C09934);
PPC_FUNC_IMPL(__imp__sub_82C09934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09938"))) PPC_WEAK_FUNC(sub_82C09938);
PPC_FUNC_IMPL(__imp__sub_82C09938) {
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
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,10400
	ctx.r11.s64 = ctx.r11.s64 + 10400;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
loc_82C0995C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82c09974
	if (ctx.cr6.lt) goto loc_82C09974;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356010
	ctx.lr = 0x82C09974;
	sub_82356010(ctx, base);
loc_82C09974:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82c0995c
	if (!ctx.cr0.lt) goto loc_82C0995C;
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

__attribute__((alias("__imp__sub_82C09994"))) PPC_WEAK_FUNC(sub_82C09994);
PPC_FUNC_IMPL(__imp__sub_82C09994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09998"))) PPC_WEAK_FUNC(sub_82C09998);
PPC_FUNC_IMPL(__imp__sub_82C09998) {
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
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-13872
	ctx.r11.s64 = ctx.r11.s64 + -13872;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_82C099BC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82c099d4
	if (ctx.cr6.lt) goto loc_82C099D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356010
	ctx.lr = 0x82C099D4;
	sub_82356010(ctx, base);
loc_82C099D4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82c099bc
	if (!ctx.cr0.lt) goto loc_82C099BC;
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

__attribute__((alias("__imp__sub_82C099F4"))) PPC_WEAK_FUNC(sub_82C099F4);
PPC_FUNC_IMPL(__imp__sub_82C099F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C099F8"))) PPC_WEAK_FUNC(sub_82C099F8);
PPC_FUNC_IMPL(__imp__sub_82C099F8) {
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
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,10504
	ctx.r11.s64 = ctx.r11.s64 + 10504;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
loc_82C09A1C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82c09a34
	if (ctx.cr6.lt) goto loc_82C09A34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356010
	ctx.lr = 0x82C09A34;
	sub_82356010(ctx, base);
loc_82C09A34:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82c09a1c
	if (!ctx.cr0.lt) goto loc_82C09A1C;
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

__attribute__((alias("__imp__sub_82C09A54"))) PPC_WEAK_FUNC(sub_82C09A54);
PPC_FUNC_IMPL(__imp__sub_82C09A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09A58"))) PPC_WEAK_FUNC(sub_82C09A58);
PPC_FUNC_IMPL(__imp__sub_82C09A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,5844
	ctx.r11.s64 = ctx.r11.s64 + 5844;
	// stw r11,-13840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09A6C"))) PPC_WEAK_FUNC(sub_82C09A6C);
PPC_FUNC_IMPL(__imp__sub_82C09A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09A70"))) PPC_WEAK_FUNC(sub_82C09A70);
PPC_FUNC_IMPL(__imp__sub_82C09A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,8004
	ctx.r11.s64 = ctx.r11.s64 + 8004;
	// stw r11,-13836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13836, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09A84"))) PPC_WEAK_FUNC(sub_82C09A84);
PPC_FUNC_IMPL(__imp__sub_82C09A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09A88"))) PPC_WEAK_FUNC(sub_82C09A88);
PPC_FUNC_IMPL(__imp__sub_82C09A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r11,r11,5844
	ctx.r11.s64 = ctx.r11.s64 + 5844;
	// stw r11,-13832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13832, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09A9C"))) PPC_WEAK_FUNC(sub_82C09A9C);
PPC_FUNC_IMPL(__imp__sub_82C09A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09AA0"))) PPC_WEAK_FUNC(sub_82C09AA0);
PPC_FUNC_IMPL(__imp__sub_82C09AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,31956
	ctx.r11.s64 = ctx.r11.s64 + 31956;
	// stw r11,10560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09AB4"))) PPC_WEAK_FUNC(sub_82C09AB4);
PPC_FUNC_IMPL(__imp__sub_82C09AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09AB8"))) PPC_WEAK_FUNC(sub_82C09AB8);
PPC_FUNC_IMPL(__imp__sub_82C09AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,31956
	ctx.r11.s64 = ctx.r11.s64 + 31956;
	// stw r11,10536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09ACC"))) PPC_WEAK_FUNC(sub_82C09ACC);
PPC_FUNC_IMPL(__imp__sub_82C09ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09AD0"))) PPC_WEAK_FUNC(sub_82C09AD0);
PPC_FUNC_IMPL(__imp__sub_82C09AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,31956
	ctx.r11.s64 = ctx.r11.s64 + 31956;
	// stw r11,10544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10544, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09AE4"))) PPC_WEAK_FUNC(sub_82C09AE4);
PPC_FUNC_IMPL(__imp__sub_82C09AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09AE8"))) PPC_WEAK_FUNC(sub_82C09AE8);
PPC_FUNC_IMPL(__imp__sub_82C09AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,31956
	ctx.r11.s64 = ctx.r11.s64 + 31956;
	// stw r11,10548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09AFC"))) PPC_WEAK_FUNC(sub_82C09AFC);
PPC_FUNC_IMPL(__imp__sub_82C09AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09B00"))) PPC_WEAK_FUNC(sub_82C09B00);
PPC_FUNC_IMPL(__imp__sub_82C09B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,31956
	ctx.r11.s64 = ctx.r11.s64 + 31956;
	// stw r11,10552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C09B14"))) PPC_WEAK_FUNC(sub_82C09B14);
PPC_FUNC_IMPL(__imp__sub_82C09B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C09B18"))) PPC_WEAK_FUNC(sub_82C09B18);
PPC_FUNC_IMPL(__imp__sub_82C09B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r11,r11,31956
	ctx.r11.s64 = ctx.r11.s64 + 31956;
	// stw r11,10556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10556, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0AD0C"))) PPC_WEAK_FUNC(sub_82C0AD0C);
PPC_FUNC_IMPL(__imp__sub_82C0AD0C) {
	PPC_FUNC_PROLOGUE();
loc_82C0AD0C:
	// b 0x82c0ad0c
	goto loc_82C0AD0C;
}

__attribute__((alias("__imp__sub_82C0AD10"))) PPC_WEAK_FUNC(sub_82C0AD10);
PPC_FUNC_IMPL(__imp__sub_82C0AD10) {
	PPC_FUNC_PROLOGUE();
	// .long 0x485645
}

__attribute__((alias("__imp__sub_82C0AD14"))) PPC_WEAK_FUNC(sub_82C0AD14);
PPC_FUNC_IMPL(__imp__sub_82C0AD14) {
	PPC_FUNC_PROLOGUE();
loc_82C0AD14:
	// b 0x82c0ad14
	goto loc_82C0AD14;
}

__attribute__((alias("__imp__sub_82C0AD18"))) PPC_WEAK_FUNC(sub_82C0AD18);
PPC_FUNC_IMPL(__imp__sub_82C0AD18) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0AD1C"))) PPC_WEAK_FUNC(sub_82C0AD1C);
PPC_FUNC_IMPL(__imp__sub_82C0AD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0AD20"))) PPC_WEAK_FUNC(sub_82C0AD20);
PPC_FUNC_IMPL(__imp__sub_82C0AD20) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0AD24"))) PPC_WEAK_FUNC(sub_82C0AD24);
PPC_FUNC_IMPL(__imp__sub_82C0AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0AD28"))) PPC_WEAK_FUNC(sub_82C0AD28);
PPC_FUNC_IMPL(__imp__sub_82C0AD28) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0AD2C"))) PPC_WEAK_FUNC(sub_82C0AD2C);
PPC_FUNC_IMPL(__imp__sub_82C0AD2C) {
	PPC_FUNC_PROLOGUE();
	// attn 
	// .long 0x95
}

__attribute__((alias("__imp__sub_82C0AD34"))) PPC_WEAK_FUNC(sub_82C0AD34);
PPC_FUNC_IMPL(__imp__sub_82C0AD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x1
}

__attribute__((alias("__imp__sub_82C0AD38"))) PPC_WEAK_FUNC(sub_82C0AD38);
PPC_FUNC_IMPL(__imp__sub_82C0AD38) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3ef8
}

__attribute__((alias("__imp__sub_82C0AD3C"))) PPC_WEAK_FUNC(sub_82C0AD3C);
PPC_FUNC_IMPL(__imp__sub_82C0AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x131c30
}

__attribute__((alias("__imp__sub_82C0AD40"))) PPC_WEAK_FUNC(sub_82C0AD40);
PPC_FUNC_IMPL(__imp__sub_82C0AD40) {
	PPC_FUNC_PROLOGUE();
	// .long 0x131bd0
}

__attribute__((alias("__imp__sub_82C0AD44"))) PPC_WEAK_FUNC(sub_82C0AD44);
PPC_FUNC_IMPL(__imp__sub_82C0AD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d5a68
}

__attribute__((alias("__imp__sub_82C0AD48"))) PPC_WEAK_FUNC(sub_82C0AD48);
PPC_FUNC_IMPL(__imp__sub_82C0AD48) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d59f8
}

__attribute__((alias("__imp__sub_82C0AD4C"))) PPC_WEAK_FUNC(sub_82C0AD4C);
PPC_FUNC_IMPL(__imp__sub_82C0AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d1bc8
}

__attribute__((alias("__imp__sub_82C0AD50"))) PPC_WEAK_FUNC(sub_82C0AD50);
PPC_FUNC_IMPL(__imp__sub_82C0AD50) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d1d60
}

__attribute__((alias("__imp__sub_82C0AD54"))) PPC_WEAK_FUNC(sub_82C0AD54);
PPC_FUNC_IMPL(__imp__sub_82C0AD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d1918
}

__attribute__((alias("__imp__sub_82C0AD58"))) PPC_WEAK_FUNC(sub_82C0AD58);
PPC_FUNC_IMPL(__imp__sub_82C0AD58) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d18b0
}

__attribute__((alias("__imp__sub_82C0AD5C"))) PPC_WEAK_FUNC(sub_82C0AD5C);
PPC_FUNC_IMPL(__imp__sub_82C0AD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4078
}

__attribute__((alias("__imp__sub_82C0AD60"))) PPC_WEAK_FUNC(sub_82C0AD60);
PPC_FUNC_IMPL(__imp__sub_82C0AD60) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d28e8
}

__attribute__((alias("__imp__sub_82C0AD64"))) PPC_WEAK_FUNC(sub_82C0AD64);
PPC_FUNC_IMPL(__imp__sub_82C0AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3188
}

__attribute__((alias("__imp__sub_82C0AD68"))) PPC_WEAK_FUNC(sub_82C0AD68);
PPC_FUNC_IMPL(__imp__sub_82C0AD68) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2248
}

__attribute__((alias("__imp__sub_82C0AD6C"))) PPC_WEAK_FUNC(sub_82C0AD6C);
PPC_FUNC_IMPL(__imp__sub_82C0AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30c990
}

__attribute__((alias("__imp__sub_82C0AD70"))) PPC_WEAK_FUNC(sub_82C0AD70);
PPC_FUNC_IMPL(__imp__sub_82C0AD70) {
	PPC_FUNC_PROLOGUE();
	// .long 0x131a68
}

__attribute__((alias("__imp__sub_82C0AD74"))) PPC_WEAK_FUNC(sub_82C0AD74);
PPC_FUNC_IMPL(__imp__sub_82C0AD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x131a68
}

__attribute__((alias("__imp__sub_82C0AD78"))) PPC_WEAK_FUNC(sub_82C0AD78);
PPC_FUNC_IMPL(__imp__sub_82C0AD78) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3f80
}

__attribute__((alias("__imp__sub_82C0AD7C"))) PPC_WEAK_FUNC(sub_82C0AD7C);
PPC_FUNC_IMPL(__imp__sub_82C0AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d8508
}

__attribute__((alias("__imp__sub_82C0AD80"))) PPC_WEAK_FUNC(sub_82C0AD80);
PPC_FUNC_IMPL(__imp__sub_82C0AD80) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d5b30
}

__attribute__((alias("__imp__sub_82C0AD84"))) PPC_WEAK_FUNC(sub_82C0AD84);
PPC_FUNC_IMPL(__imp__sub_82C0AD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2c0a78
}

__attribute__((alias("__imp__sub_82C0AD88"))) PPC_WEAK_FUNC(sub_82C0AD88);
PPC_FUNC_IMPL(__imp__sub_82C0AD88) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2368
}

__attribute__((alias("__imp__sub_82C0AD8C"))) PPC_WEAK_FUNC(sub_82C0AD8C);
PPC_FUNC_IMPL(__imp__sub_82C0AD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d1980
}

__attribute__((alias("__imp__sub_82C0AD90"))) PPC_WEAK_FUNC(sub_82C0AD90);
PPC_FUNC_IMPL(__imp__sub_82C0AD90) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4100
}

__attribute__((alias("__imp__sub_82C0AD94"))) PPC_WEAK_FUNC(sub_82C0AD94);
PPC_FUNC_IMPL(__imp__sub_82C0AD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2410
}

__attribute__((alias("__imp__sub_82C0AD98"))) PPC_WEAK_FUNC(sub_82C0AD98);
PPC_FUNC_IMPL(__imp__sub_82C0AD98) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d23d0
}

__attribute__((alias("__imp__sub_82C0AD9C"))) PPC_WEAK_FUNC(sub_82C0AD9C);
PPC_FUNC_IMPL(__imp__sub_82C0AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30ce80
}

__attribute__((alias("__imp__sub_82C0ADA0"))) PPC_WEAK_FUNC(sub_82C0ADA0);
PPC_FUNC_IMPL(__imp__sub_82C0ADA0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3688
}

__attribute__((alias("__imp__sub_82C0ADA4"))) PPC_WEAK_FUNC(sub_82C0ADA4);
PPC_FUNC_IMPL(__imp__sub_82C0ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4218
}

__attribute__((alias("__imp__sub_82C0ADA8"))) PPC_WEAK_FUNC(sub_82C0ADA8);
PPC_FUNC_IMPL(__imp__sub_82C0ADA8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3700
}

__attribute__((alias("__imp__sub_82C0ADAC"))) PPC_WEAK_FUNC(sub_82C0ADAC);
PPC_FUNC_IMPL(__imp__sub_82C0ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d42c0
}

__attribute__((alias("__imp__sub_82C0ADB0"))) PPC_WEAK_FUNC(sub_82C0ADB0);
PPC_FUNC_IMPL(__imp__sub_82C0ADB0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x131b38
}

__attribute__((alias("__imp__sub_82C0ADB4"))) PPC_WEAK_FUNC(sub_82C0ADB4);
PPC_FUNC_IMPL(__imp__sub_82C0ADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x131a60
}

__attribute__((alias("__imp__sub_82C0ADB8"))) PPC_WEAK_FUNC(sub_82C0ADB8);
PPC_FUNC_IMPL(__imp__sub_82C0ADB8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x131b28
}

__attribute__((alias("__imp__sub_82C0ADBC"))) PPC_WEAK_FUNC(sub_82C0ADBC);
PPC_FUNC_IMPL(__imp__sub_82C0ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x131b48
}

__attribute__((alias("__imp__sub_82C0ADC0"))) PPC_WEAK_FUNC(sub_82C0ADC0);
PPC_FUNC_IMPL(__imp__sub_82C0ADC0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x131b58
}

__attribute__((alias("__imp__sub_82C0ADC4"))) PPC_WEAK_FUNC(sub_82C0ADC4);
PPC_FUNC_IMPL(__imp__sub_82C0ADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2dc5b8
}

__attribute__((alias("__imp__sub_82C0ADC8"))) PPC_WEAK_FUNC(sub_82C0ADC8);
PPC_FUNC_IMPL(__imp__sub_82C0ADC8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4ca0
}

__attribute__((alias("__imp__sub_82C0ADCC"))) PPC_WEAK_FUNC(sub_82C0ADCC);
PPC_FUNC_IMPL(__imp__sub_82C0ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4868
}

__attribute__((alias("__imp__sub_82C0ADD0"))) PPC_WEAK_FUNC(sub_82C0ADD0);
PPC_FUNC_IMPL(__imp__sub_82C0ADD0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4a90
}

__attribute__((alias("__imp__sub_82C0ADD4"))) PPC_WEAK_FUNC(sub_82C0ADD4);
PPC_FUNC_IMPL(__imp__sub_82C0ADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3990
}

__attribute__((alias("__imp__sub_82C0ADD8"))) PPC_WEAK_FUNC(sub_82C0ADD8);
PPC_FUNC_IMPL(__imp__sub_82C0ADD8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350870
}

__attribute__((alias("__imp__sub_82C0ADDC"))) PPC_WEAK_FUNC(sub_82C0ADDC);
PPC_FUNC_IMPL(__imp__sub_82C0ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39f2d8
}

__attribute__((alias("__imp__sub_82C0ADE0"))) PPC_WEAK_FUNC(sub_82C0ADE0);
PPC_FUNC_IMPL(__imp__sub_82C0ADE0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30c640
}

__attribute__((alias("__imp__sub_82C0ADE4"))) PPC_WEAK_FUNC(sub_82C0ADE4);
PPC_FUNC_IMPL(__imp__sub_82C0ADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3e20
}

__attribute__((alias("__imp__sub_82C0ADE8"))) PPC_WEAK_FUNC(sub_82C0ADE8);
PPC_FUNC_IMPL(__imp__sub_82C0ADE8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3d60
}

__attribute__((alias("__imp__sub_82C0ADEC"))) PPC_WEAK_FUNC(sub_82C0ADEC);
PPC_FUNC_IMPL(__imp__sub_82C0ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc0
}

__attribute__((alias("__imp__sub_82C0ADF0"))) PPC_WEAK_FUNC(sub_82C0ADF0);
PPC_FUNC_IMPL(__imp__sub_82C0ADF0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d34f0
}

__attribute__((alias("__imp__sub_82C0ADF4"))) PPC_WEAK_FUNC(sub_82C0ADF4);
PPC_FUNC_IMPL(__imp__sub_82C0ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2c30
}

__attribute__((alias("__imp__sub_82C0ADF8"))) PPC_WEAK_FUNC(sub_82C0ADF8);
PPC_FUNC_IMPL(__imp__sub_82C0ADF8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3780
}

__attribute__((alias("__imp__sub_82C0ADFC"))) PPC_WEAK_FUNC(sub_82C0ADFC);
PPC_FUNC_IMPL(__imp__sub_82C0ADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc8
}

__attribute__((alias("__imp__sub_82C0AE00"))) PPC_WEAK_FUNC(sub_82C0AE00);
PPC_FUNC_IMPL(__imp__sub_82C0AE00) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30cdf0
}

__attribute__((alias("__imp__sub_82C0AE04"))) PPC_WEAK_FUNC(sub_82C0AE04);
PPC_FUNC_IMPL(__imp__sub_82C0AE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39f128
}

__attribute__((alias("__imp__sub_82C0AE08"))) PPC_WEAK_FUNC(sub_82C0AE08);
PPC_FUNC_IMPL(__imp__sub_82C0AE08) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39f640
}

__attribute__((alias("__imp__sub_82C0AE0C"))) PPC_WEAK_FUNC(sub_82C0AE0C);
PPC_FUNC_IMPL(__imp__sub_82C0AE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc8
}

__attribute__((alias("__imp__sub_82C0AE10"))) PPC_WEAK_FUNC(sub_82C0AE10);
PPC_FUNC_IMPL(__imp__sub_82C0AE10) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4478
}

__attribute__((alias("__imp__sub_82C0AE14"))) PPC_WEAK_FUNC(sub_82C0AE14);
PPC_FUNC_IMPL(__imp__sub_82C0AE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350730
}

__attribute__((alias("__imp__sub_82C0AE18"))) PPC_WEAK_FUNC(sub_82C0AE18);
PPC_FUNC_IMPL(__imp__sub_82C0AE18) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350b20
}

__attribute__((alias("__imp__sub_82C0AE1C"))) PPC_WEAK_FUNC(sub_82C0AE1C);
PPC_FUNC_IMPL(__imp__sub_82C0AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3120
}

__attribute__((alias("__imp__sub_82C0AE20"))) PPC_WEAK_FUNC(sub_82C0AE20);
PPC_FUNC_IMPL(__imp__sub_82C0AE20) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2f80
}

__attribute__((alias("__imp__sub_82C0AE24"))) PPC_WEAK_FUNC(sub_82C0AE24);
PPC_FUNC_IMPL(__imp__sub_82C0AE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc0
}

__attribute__((alias("__imp__sub_82C0AE28"))) PPC_WEAK_FUNC(sub_82C0AE28);
PPC_FUNC_IMPL(__imp__sub_82C0AE28) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39ecd0
}

__attribute__((alias("__imp__sub_82C0AE2C"))) PPC_WEAK_FUNC(sub_82C0AE2C);
PPC_FUNC_IMPL(__imp__sub_82C0AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350540
}

__attribute__((alias("__imp__sub_82C0AE30"))) PPC_WEAK_FUNC(sub_82C0AE30);
PPC_FUNC_IMPL(__imp__sub_82C0AE30) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3888
}

__attribute__((alias("__imp__sub_82C0AE34"))) PPC_WEAK_FUNC(sub_82C0AE34);
PPC_FUNC_IMPL(__imp__sub_82C0AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2c20
}

__attribute__((alias("__imp__sub_82C0AE38"))) PPC_WEAK_FUNC(sub_82C0AE38);
PPC_FUNC_IMPL(__imp__sub_82C0AE38) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3888
}

__attribute__((alias("__imp__sub_82C0AE3C"))) PPC_WEAK_FUNC(sub_82C0AE3C);
PPC_FUNC_IMPL(__imp__sub_82C0AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3900
}

__attribute__((alias("__imp__sub_82C0AE40"))) PPC_WEAK_FUNC(sub_82C0AE40);
PPC_FUNC_IMPL(__imp__sub_82C0AE40) {
	PPC_FUNC_PROLOGUE();
	// .long 0x387d88
}

__attribute__((alias("__imp__sub_82C0AE44"))) PPC_WEAK_FUNC(sub_82C0AE44);
PPC_FUNC_IMPL(__imp__sub_82C0AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d38a0
}

__attribute__((alias("__imp__sub_82C0AE48"))) PPC_WEAK_FUNC(sub_82C0AE48);
PPC_FUNC_IMPL(__imp__sub_82C0AE48) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350768
}

__attribute__((alias("__imp__sub_82C0AE4C"))) PPC_WEAK_FUNC(sub_82C0AE4C);
PPC_FUNC_IMPL(__imp__sub_82C0AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30c608
}

__attribute__((alias("__imp__sub_82C0AE50"))) PPC_WEAK_FUNC(sub_82C0AE50);
PPC_FUNC_IMPL(__imp__sub_82C0AE50) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2498
}

__attribute__((alias("__imp__sub_82C0AE54"))) PPC_WEAK_FUNC(sub_82C0AE54);
PPC_FUNC_IMPL(__imp__sub_82C0AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30ca40
}

__attribute__((alias("__imp__sub_82C0AE58"))) PPC_WEAK_FUNC(sub_82C0AE58);
PPC_FUNC_IMPL(__imp__sub_82C0AE58) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39f8a0
}

__attribute__((alias("__imp__sub_82C0AE5C"))) PPC_WEAK_FUNC(sub_82C0AE5C);
PPC_FUNC_IMPL(__imp__sub_82C0AE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39f7c0
}

__attribute__((alias("__imp__sub_82C0AE60"))) PPC_WEAK_FUNC(sub_82C0AE60);
PPC_FUNC_IMPL(__imp__sub_82C0AE60) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39ef68
}

__attribute__((alias("__imp__sub_82C0AE64"))) PPC_WEAK_FUNC(sub_82C0AE64);
PPC_FUNC_IMPL(__imp__sub_82C0AE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39f400
}

__attribute__((alias("__imp__sub_82C0AE68"))) PPC_WEAK_FUNC(sub_82C0AE68);
PPC_FUNC_IMPL(__imp__sub_82C0AE68) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30c558
}

__attribute__((alias("__imp__sub_82C0AE6C"))) PPC_WEAK_FUNC(sub_82C0AE6C);
PPC_FUNC_IMPL(__imp__sub_82C0AE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x3509d8
}

__attribute__((alias("__imp__sub_82C0AE70"))) PPC_WEAK_FUNC(sub_82C0AE70);
PPC_FUNC_IMPL(__imp__sub_82C0AE70) {
	PPC_FUNC_PROLOGUE();
	// .long 0x3507c0
}

__attribute__((alias("__imp__sub_82C0AE74"))) PPC_WEAK_FUNC(sub_82C0AE74);
PPC_FUNC_IMPL(__imp__sub_82C0AE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d24c8
}

__attribute__((alias("__imp__sub_82C0AE78"))) PPC_WEAK_FUNC(sub_82C0AE78);
PPC_FUNC_IMPL(__imp__sub_82C0AE78) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350788
}

__attribute__((alias("__imp__sub_82C0AE7C"))) PPC_WEAK_FUNC(sub_82C0AE7C);
PPC_FUNC_IMPL(__imp__sub_82C0AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350790
}

__attribute__((alias("__imp__sub_82C0AE80"))) PPC_WEAK_FUNC(sub_82C0AE80);
PPC_FUNC_IMPL(__imp__sub_82C0AE80) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2c5cb8
}

__attribute__((alias("__imp__sub_82C0AE84"))) PPC_WEAK_FUNC(sub_82C0AE84);
PPC_FUNC_IMPL(__imp__sub_82C0AE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x3507a8
}

__attribute__((alias("__imp__sub_82C0AE88"))) PPC_WEAK_FUNC(sub_82C0AE88);
PPC_FUNC_IMPL(__imp__sub_82C0AE88) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2488
}

__attribute__((alias("__imp__sub_82C0AE8C"))) PPC_WEAK_FUNC(sub_82C0AE8C);
PPC_FUNC_IMPL(__imp__sub_82C0AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2c10
}

__attribute__((alias("__imp__sub_82C0AE90"))) PPC_WEAK_FUNC(sub_82C0AE90);
PPC_FUNC_IMPL(__imp__sub_82C0AE90) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d34e8
}

__attribute__((alias("__imp__sub_82C0AE94"))) PPC_WEAK_FUNC(sub_82C0AE94);
PPC_FUNC_IMPL(__imp__sub_82C0AE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d1e00
}

__attribute__((alias("__imp__sub_82C0AE98"))) PPC_WEAK_FUNC(sub_82C0AE98);
PPC_FUNC_IMPL(__imp__sub_82C0AE98) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d37b0
}

__attribute__((alias("__imp__sub_82C0AE9C"))) PPC_WEAK_FUNC(sub_82C0AE9C);
PPC_FUNC_IMPL(__imp__sub_82C0AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc0
}

__attribute__((alias("__imp__sub_82C0AEA0"))) PPC_WEAK_FUNC(sub_82C0AEA0);
PPC_FUNC_IMPL(__imp__sub_82C0AEA0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d24a8
}

__attribute__((alias("__imp__sub_82C0AEA4"))) PPC_WEAK_FUNC(sub_82C0AEA4);
PPC_FUNC_IMPL(__imp__sub_82C0AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x3503f8
}

__attribute__((alias("__imp__sub_82C0AEA8"))) PPC_WEAK_FUNC(sub_82C0AEA8);
PPC_FUNC_IMPL(__imp__sub_82C0AEA8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30c4f8
}

__attribute__((alias("__imp__sub_82C0AEAC"))) PPC_WEAK_FUNC(sub_82C0AEAC);
PPC_FUNC_IMPL(__imp__sub_82C0AEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30c5d8
}

__attribute__((alias("__imp__sub_82C0AEB0"))) PPC_WEAK_FUNC(sub_82C0AEB0);
PPC_FUNC_IMPL(__imp__sub_82C0AEB0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30c6c0
}

__attribute__((alias("__imp__sub_82C0AEB4"))) PPC_WEAK_FUNC(sub_82C0AEB4);
PPC_FUNC_IMPL(__imp__sub_82C0AEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30c528
}

__attribute__((alias("__imp__sub_82C0AEB8"))) PPC_WEAK_FUNC(sub_82C0AEB8);
PPC_FUNC_IMPL(__imp__sub_82C0AEB8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d1df0
}

__attribute__((alias("__imp__sub_82C0AEBC"))) PPC_WEAK_FUNC(sub_82C0AEBC);
PPC_FUNC_IMPL(__imp__sub_82C0AEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d22f8
}

__attribute__((alias("__imp__sub_82C0AEC0"))) PPC_WEAK_FUNC(sub_82C0AEC0);
PPC_FUNC_IMPL(__imp__sub_82C0AEC0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d22a0
}

__attribute__((alias("__imp__sub_82C0AEC4"))) PPC_WEAK_FUNC(sub_82C0AEC4);
PPC_FUNC_IMPL(__imp__sub_82C0AEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d22a8
}

__attribute__((alias("__imp__sub_82C0AEC8"))) PPC_WEAK_FUNC(sub_82C0AEC8);
PPC_FUNC_IMPL(__imp__sub_82C0AEC8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3568
}

__attribute__((alias("__imp__sub_82C0AECC"))) PPC_WEAK_FUNC(sub_82C0AECC);
PPC_FUNC_IMPL(__imp__sub_82C0AECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2c0a78
}

__attribute__((alias("__imp__sub_82C0AED0"))) PPC_WEAK_FUNC(sub_82C0AED0);
PPC_FUNC_IMPL(__imp__sub_82C0AED0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x3507d0
}

__attribute__((alias("__imp__sub_82C0AED4"))) PPC_WEAK_FUNC(sub_82C0AED4);
PPC_FUNC_IMPL(__imp__sub_82C0AED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3ff0
}

__attribute__((alias("__imp__sub_82C0AED8"))) PPC_WEAK_FUNC(sub_82C0AED8);
PPC_FUNC_IMPL(__imp__sub_82C0AED8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30cd38
}

__attribute__((alias("__imp__sub_82C0AEDC"))) PPC_WEAK_FUNC(sub_82C0AEDC);
PPC_FUNC_IMPL(__imp__sub_82C0AEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3e38
}

__attribute__((alias("__imp__sub_82C0AEE0"))) PPC_WEAK_FUNC(sub_82C0AEE0);
PPC_FUNC_IMPL(__imp__sub_82C0AEE0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4170
}

__attribute__((alias("__imp__sub_82C0AEE4"))) PPC_WEAK_FUNC(sub_82C0AEE4);
PPC_FUNC_IMPL(__imp__sub_82C0AEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3a80
}

__attribute__((alias("__imp__sub_82C0AEE8"))) PPC_WEAK_FUNC(sub_82C0AEE8);
PPC_FUNC_IMPL(__imp__sub_82C0AEE8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3498
}

__attribute__((alias("__imp__sub_82C0AEEC"))) PPC_WEAK_FUNC(sub_82C0AEEC);
PPC_FUNC_IMPL(__imp__sub_82C0AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d27c8
}

__attribute__((alias("__imp__sub_82C0AEF0"))) PPC_WEAK_FUNC(sub_82C0AEF0);
PPC_FUNC_IMPL(__imp__sub_82C0AEF0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d22b0
}

__attribute__((alias("__imp__sub_82C0AEF4"))) PPC_WEAK_FUNC(sub_82C0AEF4);
PPC_FUNC_IMPL(__imp__sub_82C0AEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30cd50
}

__attribute__((alias("__imp__sub_82C0AEF8"))) PPC_WEAK_FUNC(sub_82C0AEF8);
PPC_FUNC_IMPL(__imp__sub_82C0AEF8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4bd0
}

__attribute__((alias("__imp__sub_82C0AEFC"))) PPC_WEAK_FUNC(sub_82C0AEFC);
PPC_FUNC_IMPL(__imp__sub_82C0AEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2968
}

__attribute__((alias("__imp__sub_82C0AF00"))) PPC_WEAK_FUNC(sub_82C0AF00);
PPC_FUNC_IMPL(__imp__sub_82C0AF00) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39f748
}

__attribute__((alias("__imp__sub_82C0AF04"))) PPC_WEAK_FUNC(sub_82C0AF04);
PPC_FUNC_IMPL(__imp__sub_82C0AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39f5a8
}

__attribute__((alias("__imp__sub_82C0AF08"))) PPC_WEAK_FUNC(sub_82C0AF08);
PPC_FUNC_IMPL(__imp__sub_82C0AF08) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39ecf8
}

__attribute__((alias("__imp__sub_82C0AF0C"))) PPC_WEAK_FUNC(sub_82C0AF0C);
PPC_FUNC_IMPL(__imp__sub_82C0AF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x39ee38
}

__attribute__((alias("__imp__sub_82C0AF10"))) PPC_WEAK_FUNC(sub_82C0AF10);
PPC_FUNC_IMPL(__imp__sub_82C0AF10) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350490
}

__attribute__((alias("__imp__sub_82C0AF14"))) PPC_WEAK_FUNC(sub_82C0AF14);
PPC_FUNC_IMPL(__imp__sub_82C0AF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350658
}

__attribute__((alias("__imp__sub_82C0AF18"))) PPC_WEAK_FUNC(sub_82C0AF18);
PPC_FUNC_IMPL(__imp__sub_82C0AF18) {
	PPC_FUNC_PROLOGUE();
	// .long 0x3504c0
}

__attribute__((alias("__imp__sub_82C0AF1C"))) PPC_WEAK_FUNC(sub_82C0AF1C);
PPC_FUNC_IMPL(__imp__sub_82C0AF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d19c0
}

__attribute__((alias("__imp__sub_82C0AF20"))) PPC_WEAK_FUNC(sub_82C0AF20);
PPC_FUNC_IMPL(__imp__sub_82C0AF20) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30c628
}

__attribute__((alias("__imp__sub_82C0AF24"))) PPC_WEAK_FUNC(sub_82C0AF24);
PPC_FUNC_IMPL(__imp__sub_82C0AF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d22d0
}

__attribute__((alias("__imp__sub_82C0AF28"))) PPC_WEAK_FUNC(sub_82C0AF28);
PPC_FUNC_IMPL(__imp__sub_82C0AF28) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2ff8
}

__attribute__((alias("__imp__sub_82C0AF2C"))) PPC_WEAK_FUNC(sub_82C0AF2C);
PPC_FUNC_IMPL(__imp__sub_82C0AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2988
}

__attribute__((alias("__imp__sub_82C0AF30"))) PPC_WEAK_FUNC(sub_82C0AF30);
PPC_FUNC_IMPL(__imp__sub_82C0AF30) {
	PPC_FUNC_PROLOGUE();
	// .long 0x131b68
}

__attribute__((alias("__imp__sub_82C0AF34"))) PPC_WEAK_FUNC(sub_82C0AF34);
PPC_FUNC_IMPL(__imp__sub_82C0AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x30c510
}

__attribute__((alias("__imp__sub_82C0AF38"))) PPC_WEAK_FUNC(sub_82C0AF38);
PPC_FUNC_IMPL(__imp__sub_82C0AF38) {
	PPC_FUNC_PROLOGUE();
	// .long 0x3505c8
}

__attribute__((alias("__imp__sub_82C0AF3C"))) PPC_WEAK_FUNC(sub_82C0AF3C);
PPC_FUNC_IMPL(__imp__sub_82C0AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350918
}

__attribute__((alias("__imp__sub_82C0AF40"))) PPC_WEAK_FUNC(sub_82C0AF40);
PPC_FUNC_IMPL(__imp__sub_82C0AF40) {
	PPC_FUNC_PROLOGUE();
	// .long 0x350618
}

__attribute__((alias("__imp__sub_82C0AF44"))) PPC_WEAK_FUNC(sub_82C0AF44);
PPC_FUNC_IMPL(__imp__sub_82C0AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc0
}

__attribute__((alias("__imp__sub_82C0AF48"))) PPC_WEAK_FUNC(sub_82C0AF48);
PPC_FUNC_IMPL(__imp__sub_82C0AF48) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d34f0
}

__attribute__((alias("__imp__sub_82C0AF4C"))) PPC_WEAK_FUNC(sub_82C0AF4C);
PPC_FUNC_IMPL(__imp__sub_82C0AF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d1e18
}

__attribute__((alias("__imp__sub_82C0AF50"))) PPC_WEAK_FUNC(sub_82C0AF50);
PPC_FUNC_IMPL(__imp__sub_82C0AF50) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d37a0
}

__attribute__((alias("__imp__sub_82C0AF54"))) PPC_WEAK_FUNC(sub_82C0AF54);
PPC_FUNC_IMPL(__imp__sub_82C0AF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc0
}

__attribute__((alias("__imp__sub_82C0AF58"))) PPC_WEAK_FUNC(sub_82C0AF58);
PPC_FUNC_IMPL(__imp__sub_82C0AF58) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc0
}

__attribute__((alias("__imp__sub_82C0AF5C"))) PPC_WEAK_FUNC(sub_82C0AF5C);
PPC_FUNC_IMPL(__imp__sub_82C0AF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2c68
}

__attribute__((alias("__imp__sub_82C0AF60"))) PPC_WEAK_FUNC(sub_82C0AF60);
PPC_FUNC_IMPL(__imp__sub_82C0AF60) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4358
}

__attribute__((alias("__imp__sub_82C0AF64"))) PPC_WEAK_FUNC(sub_82C0AF64);
PPC_FUNC_IMPL(__imp__sub_82C0AF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc0
}

__attribute__((alias("__imp__sub_82C0AF68"))) PPC_WEAK_FUNC(sub_82C0AF68);
PPC_FUNC_IMPL(__imp__sub_82C0AF68) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d3508
}

__attribute__((alias("__imp__sub_82C0AF6C"))) PPC_WEAK_FUNC(sub_82C0AF6C);
PPC_FUNC_IMPL(__imp__sub_82C0AF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc0
}

__attribute__((alias("__imp__sub_82C0AF70"))) PPC_WEAK_FUNC(sub_82C0AF70);
PPC_FUNC_IMPL(__imp__sub_82C0AF70) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc0
}

__attribute__((alias("__imp__sub_82C0AF74"))) PPC_WEAK_FUNC(sub_82C0AF74);
PPC_FUNC_IMPL(__imp__sub_82C0AF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d1df8
}

__attribute__((alias("__imp__sub_82C0AF78"))) PPC_WEAK_FUNC(sub_82C0AF78);
PPC_FUNC_IMPL(__imp__sub_82C0AF78) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2c00
}

__attribute__((alias("__imp__sub_82C0AF7C"))) PPC_WEAK_FUNC(sub_82C0AF7C);
PPC_FUNC_IMPL(__imp__sub_82C0AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d33f8
}

__attribute__((alias("__imp__sub_82C0AF80"))) PPC_WEAK_FUNC(sub_82C0AF80);
PPC_FUNC_IMPL(__imp__sub_82C0AF80) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d2298
}

__attribute__((alias("__imp__sub_82C0AF84"))) PPC_WEAK_FUNC(sub_82C0AF84);
PPC_FUNC_IMPL(__imp__sub_82C0AF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2d4698
}

__attribute__((alias("__imp__sub_82C0AF88"))) PPC_WEAK_FUNC(sub_82C0AF88);
PPC_FUNC_IMPL(__imp__sub_82C0AF88) {
	PPC_FUNC_PROLOGUE();
	// .long 0x2aefc8
}

__attribute__((alias("__imp__sub_82C0B000"))) PPC_WEAK_FUNC(sub_82C0B000);
PPC_FUNC_IMPL(__imp__sub_82C0B000) {
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
	// bl 0x82c0ef40
	ctx.lr = 0x82C0B020;
	sub_82C0EF40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// bl 0x82c0ef50
	ctx.lr = 0x82C0B03C;
	sub_82C0EF50(ctx, base);
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

__attribute__((alias("__imp__sub_82C0B054"))) PPC_WEAK_FUNC(sub_82C0B054);
PPC_FUNC_IMPL(__imp__sub_82C0B054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0B058"))) PPC_WEAK_FUNC(sub_82C0B058);
PPC_FUNC_IMPL(__imp__sub_82C0B058) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0b0d4
	if (ctx.cr6.eq) goto loc_82C0B0D4;
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// addi r31,r11,-15360
	ctx.r31.s64 = ctx.r11.s64 + -15360;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0b09c
	if (ctx.cr6.eq) goto loc_82C0B09C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c0b0a0
	if (ctx.cr6.eq) goto loc_82C0B0A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c0b0d4
	if (!ctx.cr6.eq) goto loc_82C0B0D4;
loc_82C0B09C:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82C0B0A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0B0B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0b0c4
	if (ctx.cr6.eq) goto loc_82C0B0C4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82c0b0c8
	goto loc_82C0B0C8;
loc_82C0B0C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82C0B0C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82c0b0d8
	if (!ctx.cr6.eq) goto loc_82C0B0D8;
loc_82C0B0D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C0B0D8:
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

__attribute__((alias("__imp__sub_82C0B0EC"))) PPC_WEAK_FUNC(sub_82C0B0EC);
PPC_FUNC_IMPL(__imp__sub_82C0B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0B0F0"))) PPC_WEAK_FUNC(sub_82C0B0F0);
PPC_FUNC_IMPL(__imp__sub_82C0B0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82C0B0F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// lwz r10,752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// mulli r11,r11,380
	ctx.r11.s64 = ctx.r11.s64 * 380;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,-380(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -380);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c0b458
	if (ctx.cr6.eq) goto loc_82C0B458;
	// lis r26,-31940
	ctx.r26.s64 = -2093219840;
	// addi r27,r31,832
	ctx.r27.s64 = ctx.r31.s64 + 832;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-15344(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -15344);
	// bl 0x82c0f640
	ctx.lr = 0x82C0B130;
	sub_82C0F640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0b458
	if (ctx.cr6.eq) goto loc_82C0B458;
	// lwz r8,744(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82c0b44c
	if (!ctx.cr6.gt) goto loc_82C0B44C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C0B14C:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C0B160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0b438
	if (ctx.cr6.eq) goto loc_82C0B438;
loc_82C0B168:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82c0b1a4
	if (ctx.cr6.gt) goto loc_82C0B1A4;
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82c0b438
	if (!ctx.cr6.gt) goto loc_82C0B438;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0b438
	if (ctx.cr6.eq) goto loc_82C0B438;
loc_82C0B1A4:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C0B1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0b438
	if (ctx.cr6.eq) goto loc_82C0B438;
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c0b1ec
	if (ctx.cr6.eq) goto loc_82C0B1EC;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82c0b1f0
	goto loc_82C0B1F0;
loc_82C0B1EC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C0B1F0:
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c0b204
	if (!ctx.cr6.gt) goto loc_82C0B204;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82C0B204:
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,72(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82c0b230
	if (ctx.cr6.gt) goto loc_82C0B230;
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// slw r11,r4,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r3.u8 & 0x3F));
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82C0B230:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// subf r30,r6,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82c0b370
	if (!ctx.cr6.lt) goto loc_82C0B370;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c0b2e4
	if (ctx.cr6.eq) goto loc_82C0B2E4;
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r5,68(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c0b2c4
	if (ctx.cr6.eq) goto loc_82C0B2C4;
	// rlwinm r11,r30,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0b2b8
	if (ctx.cr6.eq) goto loc_82C0B2B8;
loc_82C0B294:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r3,r8,128
	ctx.r3.s64 = ctx.r8.s64 + 128;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82c0b294
	if (!ctx.cr6.eq) goto loc_82C0B294;
loc_82C0B2B8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x82c0b2e8
	goto loc_82C0B2E8;
loc_82C0B2C4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,56(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82219130
	ctx.lr = 0x82C0B2D4;
	sub_82219130(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r30,r7
	ctx.r9.u64 = ctx.r30.u64 + ctx.r7.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x82c0b2e8
	goto loc_82C0B2E8;
loc_82C0B2E4:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C0B2E8:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c0b33c
	if (ctx.cr6.eq) goto loc_82C0B33C;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// subf r4,r30,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r30.s64;
	// rlwinm r11,r4,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0b350
	if (ctx.cr6.eq) goto loc_82C0B350;
loc_82C0B314:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne cr6,0x82c0b314
	if (!ctx.cr6.eq) goto loc_82C0B314;
	// b 0x82c0b350
	goto loc_82C0B350;
loc_82C0B33C:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// subf r5,r30,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r30.s64;
	// bl 0x82219130
	ctx.lr = 0x82C0B350;
	sub_82219130(ctx, base);
loc_82C0B350:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// subf r10,r30,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r30.s64;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// b 0x82c0b3e4
	goto loc_82C0B3E4;
loc_82C0B370:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0b3c0
	if (ctx.cr6.eq) goto loc_82C0B3C0;
	// rlwinm r11,r5,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0b3cc
	if (ctx.cr6.eq) goto loc_82C0B3CC;
loc_82C0B398:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r7,r8,128
	ctx.r7.s64 = ctx.r8.s64 + 128;
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne cr6,0x82c0b398
	if (!ctx.cr6.eq) goto loc_82C0B398;
	// b 0x82c0b3cc
	goto loc_82C0B3CC;
loc_82C0B3C0:
	// lwz r4,56(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82219130
	ctx.lr = 0x82C0B3CC;
	sub_82219130(ctx, base);
loc_82C0B3CC:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// add r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r4,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
loc_82C0B3E4:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0b404
	if (ctx.cr6.eq) goto loc_82C0B404;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82C0B404:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C0B41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C0B430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c0b168
	if (!ctx.cr6.eq) goto loc_82C0B168;
loc_82C0B438:
	// lwz r6,744(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,380
	ctx.r29.s64 = ctx.r29.s64 + 380;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82c0b14c
	if (ctx.cr6.lt) goto loc_82C0B14C;
loc_82C0B44C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-15344(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -15344);
	// bl 0x82c0f6c8
	ctx.lr = 0x82C0B458;
	sub_82C0F6C8(ctx, base);
loc_82C0B458:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0B460"))) PPC_WEAK_FUNC(sub_82C0B460);
PPC_FUNC_IMPL(__imp__sub_82C0B460) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c0b488
	if (ctx.cr6.eq) goto loc_82C0B488;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82C0B488:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// beq cr6,0x82c0b4a4
	if (ctx.cr6.eq) goto loc_82C0B4A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0b0f0
	ctx.lr = 0x82C0B4A4;
	sub_82C0B0F0(ctx, base);
loc_82C0B4A4:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bne cr6,0x82c0b4ec
	if (!ctx.cr6.eq) goto loc_82C0B4EC;
	// bl 0x82c0fa60
	ctx.lr = 0x82C0B4B8;
	sub_82C0FA60(ctx, base);
	// lwz r8,728(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c0b4c8
	if (!ctx.cr6.eq) goto loc_82C0B4C8;
	// stw r3,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r3.u32);
loc_82C0B4C8:
	// lwz r7,728(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r5,r6,37856
	ctx.r5.u64 = ctx.r6.u64 | 37856;
	// subf r4,r7,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r7.s64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82c0b4ec
	if (!ctx.cr6.gt) goto loc_82C0B4EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r3.u32);
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
loc_82C0B4EC:
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0b520
	if (ctx.cr6.eq) goto loc_82C0B520;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r7,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r8,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r4.u32);
	// b 0x82c0b558
	goto loc_82C0B558;
loc_82C0B520:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r5,r10,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C0B558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C0B558:
	// lwz r10,744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0b578
	if (ctx.cr6.eq) goto loc_82C0B578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0b0f0
	ctx.lr = 0x82C0B56C;
	sub_82C0B0F0(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// b 0x82c0b580
	goto loc_82C0B580;
loc_82C0B578:
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_82C0B580:
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

__attribute__((alias("__imp__sub_82C0B598"))) PPC_WEAK_FUNC(sub_82C0B598);
PPC_FUNC_IMPL(__imp__sub_82C0B598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// stw r3,-15336(r11)
	PPC_STORE_U32(ctx.r11.u32 + -15336, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0B5A4"))) PPC_WEAK_FUNC(sub_82C0B5A4);
PPC_FUNC_IMPL(__imp__sub_82C0B5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0B5A8"))) PPC_WEAK_FUNC(sub_82C0B5A8);
PPC_FUNC_IMPL(__imp__sub_82C0B5A8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// ble cr6,0x82c0b5b8
	if (!ctx.cr6.gt) goto loc_82C0B5B8;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82C0B5B8:
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,-15324
	ctx.r11.s64 = ctx.r11.s64 + -15324;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
loc_82C0B5D0:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82c0b5d0
	if (!ctx.cr6.eq) goto loc_82C0B5D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0B5EC"))) PPC_WEAK_FUNC(sub_82C0B5EC);
PPC_FUNC_IMPL(__imp__sub_82C0B5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0B5F0"))) PPC_WEAK_FUNC(sub_82C0B5F0);
PPC_FUNC_IMPL(__imp__sub_82C0B5F0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82C0B5F8;
	__savegprlr_27(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r31,r5,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r5.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82c0b65c
	if (!ctx.cr6.gt) goto loc_82C0B65C;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_82C0B624:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,0(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r10,r27,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r27.s64;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82c0b640
	if (!ctx.cr6.gt) goto loc_82C0B640;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82C0B640:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82c0b624
	if (ctx.cr6.lt) goto loc_82C0B624;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c0b680
	if (!ctx.cr6.eq) goto loc_82C0B680;
loc_82C0B65C:
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// clrldi r3,r30,32
	ctx.r3.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwzx r11,r9,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mulld r9,r10,r5
	ctx.r9.s64 = ctx.r10.s64 * ctx.r5.s64;
	// divdu r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 / ctx.r3.u64;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82C0B680:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82c0b6c0
	if (!ctx.cr6.gt) goto loc_82C0B6C0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82C0B690:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c0b6bc
	if (ctx.cr6.eq) goto loc_82C0B6BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82c0b690
	if (ctx.cr6.lt) goto loc_82C0B690;
	// stw r28,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82C0B6BC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C0B6C0:
	// stw r28,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0B6CC"))) PPC_WEAK_FUNC(sub_82C0B6CC);
PPC_FUNC_IMPL(__imp__sub_82C0B6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0B6D0"))) PPC_WEAK_FUNC(sub_82C0B6D0);
PPC_FUNC_IMPL(__imp__sub_82C0B6D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -184);
	// lwz r11,-188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -188);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mulli r8,r10,100
	ctx.r8.s64 = ctx.r10.s64 * 100;
	// divwu r11,r8,r9
	ctx.r11.u32 = ctx.r8.u32 / ctx.r9.u32;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bge cr6,0x82c0b6f8
	if (!ctx.cr6.lt) goto loc_82C0B6F8;
	// subfic r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r3.s64 = -1 - ctx.r11.s64;
	// blr 
	return;
loc_82C0B6F8:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82c0b710
	if (ctx.cr6.eq) goto loc_82C0B710;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subf r3,r11,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r11.s64;
	// blr 
	return;
loc_82C0B710:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0B718"))) PPC_WEAK_FUNC(sub_82C0B718);
PPC_FUNC_IMPL(__imp__sub_82C0B718) {
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
	// addi r31,r3,-500
	ctx.r31.s64 = ctx.r3.s64 + -500;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0B744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C0B760"))) PPC_WEAK_FUNC(sub_82C0B760);
PPC_FUNC_IMPL(__imp__sub_82C0B760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// addi r4,r3,260
	ctx.r4.s64 = ctx.r3.s64 + 260;
	// lwz r3,-15348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15348);
	// b 0x82c0f698
	sub_82C0F698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0B770"))) PPC_WEAK_FUNC(sub_82C0B770);
PPC_FUNC_IMPL(__imp__sub_82C0B770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// addi r4,r3,260
	ctx.r4.s64 = ctx.r3.s64 + 260;
	// lwz r3,-15348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15348);
	// b 0x82c0f640
	sub_82C0F640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0B780"))) PPC_WEAK_FUNC(sub_82C0B780);
PPC_FUNC_IMPL(__imp__sub_82C0B780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// addi r4,r3,260
	ctx.r4.s64 = ctx.r3.s64 + 260;
	// lwz r3,-15348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15348);
	// b 0x82c0f6c8
	sub_82C0F6C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0B790"))) PPC_WEAK_FUNC(sub_82C0B790);
PPC_FUNC_IMPL(__imp__sub_82C0B790) {
	PPC_FUNC_PROLOGUE();
	// b 0x82c0f7a0
	sub_82C0F7A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0B794"))) PPC_WEAK_FUNC(sub_82C0B794);
PPC_FUNC_IMPL(__imp__sub_82C0B794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0B798"))) PPC_WEAK_FUNC(sub_82C0B798);
PPC_FUNC_IMPL(__imp__sub_82C0B798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// subfic r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r3.s64 = -1 - ctx.r11.s64;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0B7B0"))) PPC_WEAK_FUNC(sub_82C0B7B0);
PPC_FUNC_IMPL(__imp__sub_82C0B7B0) {
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
	// addi r31,r3,-832
	ctx.r31.s64 = ctx.r3.s64 + -832;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0b7e0
	if (ctx.cr6.eq) goto loc_82C0B7E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0b0f0
	ctx.lr = 0x82C0B7E0;
	sub_82C0B0F0(ctx, base);
loc_82C0B7E0:
	// stw r30,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C0B7FC"))) PPC_WEAK_FUNC(sub_82C0B7FC);
PPC_FUNC_IMPL(__imp__sub_82C0B7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0B800"))) PPC_WEAK_FUNC(sub_82C0B800);
PPC_FUNC_IMPL(__imp__sub_82C0B800) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r4,24
	ctx.r8.s64 = ctx.r4.s64 + 24;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r9,572(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// rlwinm r7,r9,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// lwz r9,576(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// addi r6,r9,7
	ctx.r6.s64 = ctx.r9.s64 + 7;
	// rlwinm r5,r6,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// lwz r9,572(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// rlwinm r6,r7,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// lwz r9,576(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// stw r10,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r10.u32);
	// rlwinm r9,r5,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// rlwinm r7,r9,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r6,0,11,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82c0b884
	if (!ctx.cr6.eq) goto loc_82C0B884;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82C0B884:
	// stw r9,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r9.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// stw r11,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r11.u32);
	// stw r11,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r11.u32);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stw r11,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r11.u32);
	// lwz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0b8bc
	if (ctx.cr6.eq) goto loc_82C0B8BC;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82C0B8BC:
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r4,72
	ctx.r11.s64 = ctx.r4.s64 + 72;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C0B8D0:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82c0b8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C0B8D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0B8E8"))) PPC_WEAK_FUNC(sub_82C0B8E8);
PPC_FUNC_IMPL(__imp__sub_82C0B8E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0B8F8"))) PPC_WEAK_FUNC(sub_82C0B8F8);
PPC_FUNC_IMPL(__imp__sub_82C0B8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82C0B900;
	__savegprlr_20(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r31,r11,20432
	ctx.r31.s64 = ctx.r11.s64 + 20432;
	// rlwinm r10,r20,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4000;
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r23,r11,-15348
	ctx.r23.s64 = ctx.r11.s64 + -15348;
	// bne cr6,0x82c0b940
	if (!ctx.cr6.eq) goto loc_82C0B940;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// stw r11,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
loc_82C0B940:
	// li r5,904
	ctx.r5.s64 = 904;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82218a80
	ctx.lr = 0x82C0B950;
	sub_82218A80(ctx, base);
	// bl 0x82c0fa60
	ctx.lr = 0x82C0B954;
	sub_82C0FA60(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// rlwinm r25,r20,0,5,5
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4000000;
	// stw r3,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r3.u32);
	// addi r26,r11,-1280
	ctx.r26.s64 = ctx.r11.s64 + -1280;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stb r11,8(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8, ctx.r11.u8);
	// beq cr6,0x82c0b988
	if (ctx.cr6.eq) goto loc_82C0B988;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82219130
	ctx.lr = 0x82C0B984;
	sub_82219130(ctx, base);
	// b 0x82c0ba28
	goto loc_82C0BA28;
loc_82C0B988:
	// rlwinm r9,r20,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c0b9a4
	if (ctx.cr6.eq) goto loc_82C0B9A4;
	// lwz r11,56(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0b9a4
	if (ctx.cr6.eq) goto loc_82C0B9A4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82C0B9A4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r11,56(r23)
	PPC_STORE_U32(ctx.r23.u32 + 56, ctx.r11.u32);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C0B9C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c0ba0c
	if (!ctx.cr6.eq) goto loc_82C0BA0C;
	// lbz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c0ba00
	if (!ctx.cr6.eq) goto loc_82C0BA00;
	// li r11,69
	ctx.r11.s64 = 69;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,23280
	ctx.r9.s64 = ctx.r10.s64 + 23280;
	// stb r11,8(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8, ctx.r11.u8);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C0B9E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r26,8
	ctx.r7.s64 = ctx.r26.s64 + 8;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// bne cr6,0x82c0b9e8
	if (!ctx.cr6.eq) goto loc_82C0B9E8;
loc_82C0BA00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82C0BA0C:
	// lwz r11,560(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0BA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C0BA28:
	// lis r10,26187
	ctx.r10.s64 = 1716191232;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,26443
	ctx.r9.s64 = 1732968448;
	// ori r4,r10,18754
	ctx.r4.u64 = ctx.r10.u64 | 18754;
	// lis r8,26699
	ctx.r8.s64 = 1749745664;
	// ori r3,r9,18754
	ctx.r3.u64 = ctx.r9.u64 | 18754;
	// ori r31,r8,18754
	ctx.r31.u64 = ctx.r8.u64 | 18754;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82c0ba6c
	if (ctx.cr6.eq) goto loc_82C0BA6C;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82c0ba6c
	if (ctx.cr6.eq) goto loc_82C0BA6C;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82c0ba6c
	if (ctx.cr6.eq) goto loc_82C0BA6C;
	// lis r7,26955
	ctx.r7.s64 = 1766522880;
	// ori r5,r7,18754
	ctx.r5.u64 = ctx.r7.u64 | 18754;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82c0ba78
	if (!ctx.cr6.eq) goto loc_82C0BA78;
loc_82C0BA6C:
	// lwz r11,592(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0baa8
	if (ctx.cr6.eq) goto loc_82C0BAA8;
loc_82C0BA78:
	// li r11,78
	ctx.r11.s64 = 78;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,23260
	ctx.r9.s64 = ctx.r10.s64 + 23260;
	// stb r11,8(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8, ctx.r11.u8);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C0BA8C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r26,8
	ctx.r8.s64 = ctx.r26.s64 + 8;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// bne cr6,0x82c0ba8c
	if (!ctx.cr6.eq) goto loc_82C0BA8C;
	// b 0x82c0c268
	goto loc_82C0C268;
loc_82C0BAA8:
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c0bae4
	if (!ctx.cr6.eq) goto loc_82C0BAE4;
	// li r11,84
	ctx.r11.s64 = 84;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,23208
	ctx.r9.s64 = ctx.r10.s64 + 23208;
	// stb r11,8(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8, ctx.r11.u8);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C0BAC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r26,8
	ctx.r6.s64 = ctx.r26.s64 + 8;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// bne cr6,0x82c0bac8
	if (!ctx.cr6.eq) goto loc_82C0BAC8;
	// b 0x82c0c268
	goto loc_82C0C268;
loc_82C0BAE4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r10,15
	ctx.r7.s64 = ctx.r10.s64 + 15;
	// or r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 | ctx.r20.u64;
	// rlwinm r30,r7,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// rlwinm r7,r9,0,4,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r10.u32);
	// rlwinm r28,r11,0,11,11
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// stw r8,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r8.u32);
	// stw r30,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r30.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
	// bne cr6,0x82c0bb38
	if (!ctx.cr6.eq) goto loc_82C0BB38;
	// rlwinm r7,r7,0,12,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
loc_82C0BB38:
	// rlwinm r9,r20,0,1,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x70000000;
	// lis r28,28672
	ctx.r28.s64 = 1879048192;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82c0bbc8
	if (ctx.cr6.eq) goto loc_82C0BBC8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c0bb58
	if (ctx.cr6.eq) goto loc_82C0BB58;
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// b 0x82c0bb60
	goto loc_82C0BB60;
loc_82C0BB58:
	// rlwinm r11,r11,0,1,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000000;
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
loc_82C0BB60:
	// rlwinm r11,r7,0,1,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x70000000;
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82c0bba0
	if (ctx.cr6.gt) goto loc_82C0BBA0;
	// beq cr6,0x82c0bb94
	if (ctx.cr6.eq) goto loc_82C0BB94;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c0bbc0
	if (ctx.cr6.eq) goto loc_82C0BBC0;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c0bbc8
	if (!ctx.cr6.eq) goto loc_82C0BBC8;
	// b 0x82c0bbc0
	goto loc_82C0BBC0;
loc_82C0BB94:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// b 0x82c0bbc8
	goto loc_82C0BBC8;
loc_82C0BBA0:
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82c0bbb8
	if (ctx.cr6.eq) goto loc_82C0BBB8;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c0bbc8
	if (!ctx.cr6.eq) goto loc_82C0BBC8;
loc_82C0BBB8:
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r5.u32);
loc_82C0BBC0:
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
loc_82C0BBC8:
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82c0bbec
	if (ctx.cr6.eq) goto loc_82C0BBEC;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82c0bbec
	if (ctx.cr6.eq) goto loc_82C0BBEC;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82c0bbf8
	if (!ctx.cr6.eq) goto loc_82C0BBF8;
	// ori r4,r7,32768
	ctx.r4.u64 = ctx.r7.u64 | 32768;
	// stw r4,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r4.u32);
	// b 0x82c0bbf8
	goto loc_82C0BBF8;
loc_82C0BBEC:
	// oris r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 | 65536;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// stw r3,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r3.u32);
loc_82C0BBF8:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r20,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x1000;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r29,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r10.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// beq cr6,0x82c0bc3c
	if (ctx.cr6.eq) goto loc_82C0BC3C;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c0bc3c
	if (ctx.cr6.eq) goto loc_82C0BC3C;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// b 0x82c0bc44
	goto loc_82C0BC44;
loc_82C0BC3C:
	// stw r8,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r8.u32);
	// stw r10,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
loc_82C0BC44:
	// addi r9,r5,15
	ctx.r9.s64 = ctx.r5.s64 + 15;
	// stw r10,1000(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1000, ctx.r10.u32);
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r7,r9,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r11,r7,r30
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// stw r8,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r8.u32);
	// stw r5,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r5.u32);
	// stw r4,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r4.u32);
	// stw r3,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r3.u32);
	// stw r11,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r11.u32);
	// divwu r9,r6,r10
	ctx.r9.u32 = ctx.r6.u32 / ctx.r10.u32;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r9.u32);
	// stw r10,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r10.u32);
	// bne cr6,0x82c0bc98
	if (!ctx.cr6.eq) goto loc_82C0BC98;
	// stw r21,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r21.u32);
loc_82C0BC98:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,508
	ctx.r3.s64 = ctx.r1.s64 + 508;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BCA4;
	sub_82C0EE58(ctx, base);
	// lwz r9,1004(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// addi r3,r1,1012
	ctx.r3.s64 = ctx.r1.s64 + 1012;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BCB4;
	sub_82C0EE58(ctx, base);
	// lwz r8,1004(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// addi r3,r1,1016
	ctx.r3.s64 = ctx.r1.s64 + 1016;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BCC4;
	sub_82C0EE58(ctx, base);
	// lwz r7,1004(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// addi r3,r1,1020
	ctx.r3.s64 = ctx.r1.s64 + 1020;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BCD4;
	sub_82C0EE58(ctx, base);
	// lwz r6,1004(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BCE4;
	sub_82C0EE58(ctx, base);
	// lwz r5,1004(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// addi r3,r1,1028
	ctx.r3.s64 = ctx.r1.s64 + 1028;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BCF4;
	sub_82C0EE58(ctx, base);
	// lwz r4,1004(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BD04;
	sub_82C0EE58(ctx, base);
	// lwz r3,1004(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,1036
	ctx.r3.s64 = ctx.r1.s64 + 1036;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BD14;
	sub_82C0EE58(ctx, base);
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c0bd24
	if (!ctx.cr6.eq) goto loc_82C0BD24;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82C0BD24:
	// mulli r4,r11,380
	ctx.r4.s64 = ctx.r11.s64 * 380;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BD30;
	sub_82C0EE58(ctx, base);
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// addi r3,r1,900
	ctx.r3.s64 = ctx.r1.s64 + 900;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BD40;
	sub_82C0EE58(ctx, base);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// rlwinm r4,r10,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82c12500
	ctx.lr = 0x82C0BD54;
	sub_82C12500(ctx, base);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// lwz r4,1088(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BD60;
	sub_82C0EE58(ctx, base);
	// addi r3,r1,1092
	ctx.r3.s64 = ctx.r1.s64 + 1092;
	// lwz r4,1092(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1092);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BD6C;
	sub_82C0EE58(ctx, base);
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// lwz r4,1096(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1096);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BD78;
	sub_82C0EE58(ctx, base);
	// addi r3,r1,1100
	ctx.r3.s64 = ctx.r1.s64 + 1100;
	// lwz r4,1100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BD84;
	sub_82C0EE58(ctx, base);
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// lwz r4,1104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BD90;
	sub_82C0EE58(ctx, base);
	// addi r3,r1,1108
	ctx.r3.s64 = ctx.r1.s64 + 1108;
	// lwz r4,1108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BD9C;
	sub_82C0EE58(ctx, base);
	// addi r3,r1,1112
	ctx.r3.s64 = ctx.r1.s64 + 1112;
	// lwz r4,1112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1112);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BDA8;
	sub_82C0EE58(ctx, base);
	// addi r3,r1,1116
	ctx.r3.s64 = ctx.r1.s64 + 1116;
	// lwz r4,1116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1116);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BDB4;
	sub_82C0EE58(ctx, base);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// lwz r4,1120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BDC0;
	sub_82C0EE58(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82c0be0c
	if (!ctx.cr6.eq) goto loc_82C0BE0C;
	// lwz r9,524(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// addi r3,r1,556
	ctx.r3.s64 = ctx.r1.s64 + 556;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BDDC;
	sub_82C0EE58(ctx, base);
	// lwz r7,528(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// addi r3,r1,904
	ctx.r3.s64 = ctx.r1.s64 + 904;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BDEC;
	sub_82C0EE58(ctx, base);
	// lwz r6,528(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// addi r3,r1,908
	ctx.r3.s64 = ctx.r1.s64 + 908;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BDFC;
	sub_82C0EE58(ctx, base);
	// lwz r5,528(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BE0C;
	sub_82C0EE58(ctx, base);
loc_82C0BE0C:
	// li r4,904
	ctx.r4.s64 = 904;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82c0b000
	ctx.lr = 0x82C0BE18;
	sub_82C0B000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c0c23c
	if (ctx.cr6.eq) goto loc_82C0C23C;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// li r5,904
	ctx.r5.s64 = 904;
	// bl 0x82219130
	ctx.lr = 0x82C0BE30;
	sub_82219130(ctx, base);
	// lwz r4,696(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// stw r31,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r31.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r22,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r22.u32);
	// lwz r3,700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// lwz r10,708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// lwz r9,712(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// stw r22,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r22.u32);
	// lwz r8,716(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// stw r22,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r22.u32);
	// beq cr6,0x82c0c084
	if (ctx.cr6.eq) goto loc_82C0C084;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r7,r27,44
	ctx.r7.s64 = ctx.r27.s64 + 44;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,11
	ctx.r6.s64 = ctx.r11.s64 + 11;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r7.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r3,r10,44
	ctx.r3.s64 = ctx.r10.s64 + 44;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// stw r4,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r4.u32);
	// stw r3,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r3.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
loc_82C0BEB0:
	// addi r7,r31,896
	ctx.r7.s64 = ctx.r31.s64 + 896;
	// lwz r5,684(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// addi r6,r31,216
	ctx.r6.s64 = ctx.r31.s64 + 216;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c0b5f0
	ctx.lr = 0x82C0BEC8;
	sub_82C0B5F0(ctx, base);
	// rlwinm r5,r20,0,21,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x400;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82c0c058
	if (!ctx.cr6.eq) goto loc_82C0C058;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0b800
	ctx.lr = 0x82C0BEE4;
	sub_82C0B800(ctx, base);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82c0bfc8
	if (!ctx.cr6.gt) goto loc_82C0BFC8;
	// addi r30,r1,220
	ctx.r30.s64 = ctx.r1.s64 + 220;
loc_82C0BEFC:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0bf28
	if (ctx.cr6.eq) goto loc_82C0BF28;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BF1C;
	sub_82C0EE58(ctx, base);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_82C0BF28:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82c0bf54
	if (ctx.cr6.eq) goto loc_82C0BF54;
	// lwz r6,204(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BF48;
	sub_82C0EE58(ctx, base);
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r4,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r4.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_82C0BF54:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0bf80
	if (ctx.cr6.eq) goto loc_82C0BF80;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BF74;
	sub_82C0EE58(ctx, base);
	// lwz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_82C0BF80:
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82c0bfac
	if (ctx.cr6.eq) goto loc_82C0BFAC;
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0BFA0;
	sub_82C0EE58(ctx, base);
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r4,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r4.u32);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_82C0BFAC:
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82c0befc
	if (ctx.cr6.lt) goto loc_82C0BEFC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bge cr6,0x82c0bffc
	if (!ctx.cr6.lt) goto loc_82C0BFFC;
loc_82C0BFC8:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,244
	ctx.r9.s64 = ctx.r1.s64 + 244;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subfic r10,r29,2
	ctx.xer.ca = ctx.r29.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r29.s64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82C0BFE0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r22,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r22.u32);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// stw r22,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r22.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne cr6,0x82c0bfe0
	if (!ctx.cr6.eq) goto loc_82C0BFE0;
loc_82C0BFFC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82c0c058
	if (ctx.cr6.eq) goto loc_82C0C058;
	// bl 0x82c0ef40
	ctx.lr = 0x82C0C008;
	sub_82C0EF40(ctx, base);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,120
	ctx.r3.s64 = 120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,120
	ctx.r10.s64 = ctx.r11.s64 + 120;
	// stw r10,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r10.u32);
	// bl 0x82c0ef50
	ctx.lr = 0x82C0C024;
	sub_82C0EF50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r3.u32);
	// beq cr6,0x82c0c234
	if (ctx.cr6.eq) goto loc_82C0C234;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,30
	ctx.r9.s64 = 30;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82C0C044:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c0c044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C0C044;
loc_82C0C058:
	// rlwinm r8,r20,0,7,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c0c148
	if (ctx.cr6.eq) goto loc_82C0C148;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c0c148
	if (ctx.cr6.eq) goto loc_82C0C148;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r7,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r7.u32);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// b 0x82c0c150
	goto loc_82C0C150;
loc_82C0C084:
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r5,584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C0C0A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r5,588(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C0C0C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,208(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r5,592(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0C0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r5,236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C0C10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c0beb0
	if (ctx.cr6.eq) goto loc_82C0BEB0;
	// li r11,69
	ctx.r11.s64 = 69;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,23180
	ctx.r9.s64 = ctx.r10.s64 + 23180;
	// stb r11,8(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8, ctx.r11.u8);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C0C12C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r26,8
	ctx.r7.s64 = ctx.r26.s64 + 8;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// bne cr6,0x82c0c12c
	if (!ctx.cr6.eq) goto loc_82C0C12C;
	// b 0x82c0c268
	goto loc_82C0C268;
loc_82C0C148:
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r6,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r6.u32);
loc_82C0C150:
	// rlwinm r5,r20,0,9,9
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c0c178
	if (ctx.cr6.eq) goto loc_82C0C178;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c0c178
	if (ctx.cr6.eq) goto loc_82C0C178;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r11.u32);
	// b 0x82c0c17c
	goto loc_82C0C17C;
loc_82C0C178:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_82C0C17C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c0c19c
	if (ctx.cr6.eq) goto loc_82C0C19C;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// b 0x82c0c340
	goto loc_82C0C340;
loc_82C0C19C:
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// lwz r4,568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C0C1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-13108
	ctx.r9.s64 = -859045888;
	// stw r3,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r3.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r8,r9,52429
	ctx.r8.u64 = ctx.r9.u64 | 52429;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulhwu r6,r7,r8
	ctx.r6.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r5,r6,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82c0c1ec
	if (ctx.cr6.lt) goto loc_82C0C1EC;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r20,r20,8192
	ctx.r20.u64 = ctx.r20.u64 | 8192;
	// ori r3,r4,8192
	ctx.r3.u64 = ctx.r4.u64 | 8192;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_82C0C1EC:
	// rlwinm r10,r20,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0c2f4
	if (ctx.cr6.eq) goto loc_82C0C2F4;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c0b000
	ctx.lr = 0x82C0C218;
	sub_82C0B000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r3.u32);
	// bne cr6,0x82c0c290
	if (!ctx.cr6.eq) goto loc_82C0C290;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0c234
	if (ctx.cr6.eq) goto loc_82C0C234;
	// bl 0x82231908
	ctx.lr = 0x82C0C234;
	sub_82231908(ctx, base);
loc_82C0C234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231908
	ctx.lr = 0x82C0C23C;
	sub_82231908(ctx, base);
loc_82C0C23C:
	// li r11,79
	ctx.r11.s64 = 79;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,23164
	ctx.r9.s64 = ctx.r10.s64 + 23164;
	// stb r11,8(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8, ctx.r11.u8);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C0C250:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r26,8
	ctx.r6.s64 = ctx.r26.s64 + 8;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// bne cr6,0x82c0c250
	if (!ctx.cr6.eq) goto loc_82C0C250;
loc_82C0C268:
	// rlwinm r4,r20,0,5,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82c0c284
	if (!ctx.cr6.eq) goto loc_82C0C284;
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C0C284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C0C284:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82C0C290:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C0C2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r6,232(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r5,r5,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C0C2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82C0C2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r22.u32);
	// b 0x82c0c340
	goto loc_82C0C340;
loc_82C0C2F4:
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x82c0ee58
	ctx.lr = 0x82C0C300;
	sub_82C0EE58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// bl 0x82c0b000
	ctx.lr = 0x82C0C30C;
	sub_82C0B000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r4.u32);
	// bne cr6,0x82c0c320
	if (!ctx.cr6.eq) goto loc_82C0C320;
	// stw r22,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r22.u32);
loc_82C0C320:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,568(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C0C340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C0C340:
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stbx r22,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r22.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0c378
	if (ctx.cr6.eq) goto loc_82C0C378;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrldi r6,r11,32
	ctx.r6.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulli r5,r7,2000
	ctx.r5.s64 = ctx.r7.s64 * 2000;
	// divdu r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 / ctx.r6.u64;
	// stw r4,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r4.u32);
	// b 0x82c0c380
	goto loc_82C0C380;
loc_82C0C378:
	// li r11,2000
	ctx.r11.s64 = 2000;
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
loc_82C0C380:
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r21,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r21.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0b460
	ctx.lr = 0x82C0C390;
	sub_82C0B460(ctx, base);
	// bl 0x82c0fa60
	ctx.lr = 0x82C0C394;
	sub_82C0FA60(ctx, base);
	// lwz r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r8,752(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// lis r25,1
	ctx.r25.s64 = 65536;
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// stw r9,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r9.u32);
	// stw r25,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r25.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r22,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r22.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82c0c438
	if (ctx.cr6.eq) goto loc_82C0C438;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0c438
	if (ctx.cr6.eq) goto loc_82C0C438;
	// addi r8,r23,24
	ctx.r8.s64 = ctx.r23.s64 + 24;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82C0C3D0:
	// lwz r6,208(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82c0c428
	if (!ctx.cr6.gt) goto loc_82C0C428;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
loc_82C0C3E8:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82c0c40c
	if (ctx.cr6.eq) goto loc_82C0C40C;
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82c0c3e8
	if (ctx.cr6.lt) goto loc_82C0C3E8;
	// b 0x82c0c428
	goto loc_82C0C428;
loc_82C0C40C:
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// lwz r11,580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r6.u32);
loc_82C0C428:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c0c3d0
	if (!ctx.cr6.eq) goto loc_82C0C3D0;
loc_82C0C438:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// stw r11,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r11.u32);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lwz r5,744(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// ble cr6,0x82c0c854
	if (!ctx.cr6.gt) goto loc_82C0C854;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82C0C460:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r22,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r22.u32);
	// lwz r9,580(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwz r10,588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lwzx r3,r28,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c0c498
	if (!ctx.cr6.eq) goto loc_82C0C498;
	// rlwinm r7,r11,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c0c7e8
	if (ctx.cr6.eq) goto loc_82C0C7E8;
loc_82C0C498:
	// lwz r6,-8(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c0c7e8
	if (ctx.cr6.eq) goto loc_82C0C7E8;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// beq cr6,0x82c0c53c
	if (ctx.cr6.eq) goto loc_82C0C53C;
	// lwz r8,344(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c0c53c
	if (ctx.cr6.eq) goto loc_82C0C53C;
	// lwz r4,1000(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1000);
	// extsw r5,r27
	ctx.r5.s64 = ctx.r27.s32;
	// lwz r7,996(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 996);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f10,176(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lfd f13,160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f7,152(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f9,144(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fmul f4,f12,f11
	ctx.f4.f64 = ctx.f12.f64 * ctx.f11.f64;
	// fmul f3,f6,f5
	ctx.f3.f64 = ctx.f6.f64 * ctx.f5.f64;
	// fmul f2,f4,f8
	ctx.f2.f64 = ctx.f4.f64 * ctx.f8.f64;
	// fdiv f1,f2,f3
	ctx.f1.f64 = ctx.f2.f64 / ctx.f3.f64;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f0.u32);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C0C53C:
	// lwzx r7,r28,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// addi r6,r23,-8
	ctx.r6.s64 = ctx.r23.s64 + -8;
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r11,r5,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C0C580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0c7e8
	if (ctx.cr6.eq) goto loc_82C0C7E8;
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82c0c5a0
	if (!ctx.cr6.eq) goto loc_82C0C5A0;
	// stw r24,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r24.u32);
loc_82C0C5A0:
	// lwz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r8,r28,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// addi r6,r11,255
	ctx.r6.s64 = ctx.r11.s64 + 255;
	// rlwinm r5,r6,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// stw r5,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r5.u32);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r29,40(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x82c0ef40
	ctx.lr = 0x82C0C5D8;
	sub_82C0EF40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// bl 0x82c0ef50
	ctx.lr = 0x82C0C5F4;
	sub_82C0EF50(ctx, base);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r3,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r3.u32);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c0c624
	if (!ctx.cr6.eq) goto loc_82C0C624;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C0C620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c0c7e8
	goto loc_82C0C7E8;
loc_82C0C624:
	// lwz r7,580(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwz r6,588(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lwzx r5,r28,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// rlwinm r11,r11,5,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x8;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x82c0c650
	if (ctx.cr6.eq) goto loc_82C0C650;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82C0C650:
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lis r7,6815
	ctx.r7.s64 = 446627840;
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// lis r5,1572
	ctx.r5.s64 = 103022592;
	// ori r6,r7,48759
	ctx.r6.u64 = ctx.r7.u64 | 48759;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ori r4,r5,56623
	ctx.r4.u64 = ctx.r5.u64 | 56623;
	// clrldi r8,r27,32
	ctx.r8.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// lwz r7,580(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwz r5,588(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r4,r28,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// subfic r4,r5,750
	ctx.xer.ca = ctx.r5.u32 <= 750;
	ctx.r4.s64 = 750 - ctx.r5.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// mulld r10,r3,r7
	ctx.r10.s64 = ctx.r3.s64 * ctx.r7.s64;
	// mulld r9,r10,r8
	ctx.r9.s64 = ctx.r10.s64 * ctx.r8.s64;
	// rldicr r10,r9,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// mulhdu r9,r10,r6
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rldicl r10,r8,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rldicl r6,r7,55,9
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 55) & 0x7FFFFFFFFFFFFF;
	// rlwinm r5,r6,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r5,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c0c71c
	if (!ctx.cr6.gt) goto loc_82C0C71C;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
loc_82C0C71C:
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lwzx r3,r28,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c0c74c
	if (!ctx.cr6.eq) goto loc_82C0C74C;
	// rlwinm r7,r9,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c0c750
	if (!ctx.cr6.eq) goto loc_82C0C750;
loc_82C0C74C:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_82C0C750:
	// lwzx r6,r28,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// bl 0x82c10698
	ctx.lr = 0x82C0C76C;
	sub_82C10698(ctx, base);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c0c7a4
	if (!ctx.cr6.eq) goto loc_82C0C7A4;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C0C798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r22,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r22.u32);
loc_82C0C7A4:
	// lwz r10,-4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,680(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,-4(r23)
	PPC_STORE_U32(ctx.r23.u32 + -4, ctx.r10.u32);
	// lwz r10,752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r4,r30,r10
	ctx.r4.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divwu r11,r3,r5
	ctx.r11.u32 = ctx.r3.u32 / ctx.r5.u32;
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r10,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r10.u32);
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r22,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r22.u32);
loc_82C0C7E8:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c0c800
	if (!ctx.cr6.eq) goto loc_82C0C800;
	// stw r25,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r25.u32);
loc_82C0C800:
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82c0c83c
	if (!ctx.cr6.eq) goto loc_82C0C83C;
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r28,r10
	ctx.r3.u64 = ctx.r28.u64 + ctx.r10.u64;
	// subf r5,r26,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r26.s64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
	// bl 0x82219130
	ctx.lr = 0x82C0C838;
	sub_82219130(ctx, base);
	// b 0x82c0c848
	goto loc_82C0C848;
loc_82C0C83C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,380
	ctx.r30.s64 = ctx.r30.s64 + 380;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82C0C848:
	// lwz r4,744(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmplw cr6,r26,r4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82c0c460
	if (ctx.cr6.lt) goto loc_82C0C460;
loc_82C0C854:
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0c8bc
	if (ctx.cr6.eq) goto loc_82C0C8BC;
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// stw r21,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r21.u32);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c0c8bc
	if (!ctx.cr6.eq) goto loc_82C0C8BC;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c0c8a4
	if (!ctx.cr6.eq) goto loc_82C0C8A4;
	// li r3,-13
	ctx.r3.s64 = -13;
	// bl 0x82c0f330
	ctx.lr = 0x82C0C888;
	sub_82C0F330(ctx, base);
	// stw r3,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0c8bc
	if (ctx.cr6.eq) goto loc_82C0C8BC;
	// bl 0x82c0f5b8
	ctx.lr = 0x82C0C898;
	sub_82C0F5B8(ctx, base);
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0c8bc
	if (ctx.cr6.eq) goto loc_82C0C8BC;
loc_82C0C8A4:
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r6,r10,-18512
	ctx.r6.s64 = ctx.r10.s64 + -18512;
	// addi r5,r11,-18536
	ctx.r5.s64 = ctx.r11.s64 + -18536;
	// addi r4,r31,832
	ctx.r4.s64 = ctx.r31.s64 + 832;
	// bl 0x82c0f428
	ctx.lr = 0x82C0C8BC;
	sub_82C0F428(ctx, base);
loc_82C0C8BC:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r9,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c0c920
	if (!ctx.cr6.eq) goto loc_82C0C920;
	// lwz r7,232(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c0c920
	if (!ctx.cr6.eq) goto loc_82C0C920;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c0c908
	if (!ctx.cr6.eq) goto loc_82C0C908;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82c0f330
	ctx.lr = 0x82C0C8EC;
	sub_82C0F330(ctx, base);
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0c920
	if (ctx.cr6.eq) goto loc_82C0C920;
	// bl 0x82c0f5b8
	ctx.lr = 0x82C0C8FC;
	sub_82C0F5B8(ctx, base);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c0c920
	if (ctx.cr6.eq) goto loc_82C0C920;
loc_82C0C908:
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r6,r10,-18664
	ctx.r6.s64 = ctx.r10.s64 + -18664;
	// addi r5,r11,-18736
	ctx.r5.s64 = ctx.r11.s64 + -18736;
	// addi r4,r31,500
	ctx.r4.s64 = ctx.r31.s64 + 500;
	// bl 0x82c0f428
	ctx.lr = 0x82C0C920;
	sub_82C0F428(ctx, base);
loc_82C0C920:
	// lis r8,-32063
	ctx.r8.s64 = -2101280768;
	// lwz r6,232(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lis r9,-32063
	ctx.r9.s64 = -2101280768;
	// lis r10,-32063
	ctx.r10.s64 = -2101280768;
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// addi r5,r8,-18560
	ctx.r5.s64 = ctx.r8.s64 + -18560;
	// addi r4,r9,-18592
	ctx.r4.s64 = ctx.r9.s64 + -18592;
	// addi r3,r10,-18576
	ctx.r3.s64 = ctx.r10.s64 + -18576;
	// addi r11,r11,-18544
	ctx.r11.s64 = ctx.r11.s64 + -18544;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r5,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r5.u32);
	// stw r4,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r4.u32);
	// stw r3,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r3.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// bne cr6,0x82c0c984
	if (!ctx.cr6.eq) goto loc_82C0C984;
	// rlwinm r10,r20,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c0c984
	if (!ctx.cr6.eq) goto loc_82C0C984;
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
loc_82C0C96C:
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C0C97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c0c96c
	if (!ctx.cr6.eq) goto loc_82C0C96C;
loc_82C0C984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C0C990"))) PPC_WEAK_FUNC(sub_82C0C990);
PPC_FUNC_IMPL(__imp__sub_82C0C990) {
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
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c0ca38
	if (!ctx.cr6.eq) goto loc_82C0CA38;
	// lwz r10,744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0ca38
	if (ctx.cr6.eq) goto loc_82C0CA38;
	// lwz r9,648(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c0ca38
	if (ctx.cr6.eq) goto loc_82C0CA38;
	// lwz r8,600(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// lwz r7,620(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// mulld r10,r11,r6
	ctx.r10.s64 = ctx.r11.s64 * ctx.r6.s64;
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mulli r8,r10,1000
	ctx.r8.s64 = ctx.r10.s64 * 1000;
	// divdu r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 / ctx.r4.u64;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// mulld r4,r5,r9
	ctx.r4.s64 = ctx.r5.s64 * ctx.r9.s64;
	// rldicl r3,r4,48,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r30,r3,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x82c0fa60
	ctx.lr = 0x82C0CA0C;
	sub_82C0FA60(ctx, base);
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// lwz r10,616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82c0ca38
	if (ctx.cr6.lt) goto loc_82C0CA38;
	// lwz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// subf r7,r30,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82c0ca3c
	if (ctx.cr6.gt) goto loc_82C0CA3C;
loc_82C0CA38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C0CA3C:
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

__attribute__((alias("__imp__sub_82C0CA54"))) PPC_WEAK_FUNC(sub_82C0CA54);
PPC_FUNC_IMPL(__imp__sub_82C0CA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0CA58"))) PPC_WEAK_FUNC(sub_82C0CA58);
PPC_FUNC_IMPL(__imp__sub_82C0CA58) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c0cb64
	if (ctx.cr6.eq) goto loc_82C0CB64;
	// rlwinm r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c0ca94
	if (!ctx.cr6.eq) goto loc_82C0CA94;
	// lwz r11,236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c0ca94
	if (ctx.cr6.eq) goto loc_82C0CA94;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82C0CA94:
	// clrlwi r11,r5,25
	ctx.r11.u64 = ctx.r5.u32 & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82c0cb6c
	if (ctx.cr6.lt) goto loc_82C0CB6C;
	// beq cr6,0x82c0cb28
	if (ctx.cr6.eq) goto loc_82C0CB28;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82c0cb64
	if (!ctx.cr6.lt) goto loc_82C0CB64;
	// addi r7,r4,-2
	ctx.r7.s64 = ctx.r4.s64 + -2;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C0CABC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82c0caec
	if (ctx.cr6.lt) goto loc_82C0CAEC;
	// lwz r9,236(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82c0cb20
	if (!ctx.cr6.eq) goto loc_82C0CB20;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82c0cb14
	if (!ctx.cr6.lt) goto loc_82C0CB14;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82c0cb00
	goto loc_82C0CB00;
loc_82C0CAEC:
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82c0cb64
	if (!ctx.cr6.lt) goto loc_82C0CB64;
	// lwz r4,236(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// lwzx r9,r4,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
loc_82C0CB00:
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82C0CB14:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// b 0x82c0cabc
	goto loc_82C0CABC;
loc_82C0CB20:
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// blr 
	return;
loc_82C0CB28:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82c0cb64
	if (!ctx.cr6.lt) goto loc_82C0CB64;
	// lwz r11,236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82C0CB44:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c0cb44
	if (ctx.cr6.lt) goto loc_82C0CB44;
loc_82C0CB64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C0CB6C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82c0cba4
	if (ctx.cr6.lt) goto loc_82C0CBA4;
	// lwz r10,236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C0CB84:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c0cba4
	if (!ctx.cr6.eq) goto loc_82C0CBA4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82c0cb84
	if (!ctx.cr6.lt) goto loc_82C0CB84;
loc_82C0CBA4:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0CBAC"))) PPC_WEAK_FUNC(sub_82C0CBAC);
PPC_FUNC_IMPL(__imp__sub_82C0CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0CBB0"))) PPC_WEAK_FUNC(sub_82C0CBB0);
PPC_FUNC_IMPL(__imp__sub_82C0CBB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// stw r10,628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 628, ctx.r10.u32);
	// lwz r10,632(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 632);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c0cbf0
	if (!ctx.cr6.gt) goto loc_82C0CBF0;
	// lwz r8,636(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 640, ctx.r10.u32);
	// stw r11,632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 632, ctx.r11.u32);
	// stw r8,644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 644, ctx.r8.u32);
	// stw r9,636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 636, ctx.r9.u32);
	// blr 
	return;
loc_82C0CBF0:
	// lwz r7,640(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 640, ctx.r11.u32);
	// stw r6,644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 644, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C0CC0C"))) PPC_WEAK_FUNC(sub_82C0CC0C);
PPC_FUNC_IMPL(__imp__sub_82C0CC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C0CC10"))) PPC_WEAK_FUNC(sub_82C0CC10);
PPC_FUNC_IMPL(__imp__sub_82C0CC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82C0CC18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c0cdac
	if (ctx.cr6.eq) goto loc_82C0CDAC;
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c0cc40
	if (!ctx.cr6.eq) goto loc_82C0CC40;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c0cdac
	if (ctx.cr6.eq) goto loc_82C0CDAC;
loc_82C0CC40:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c0cdac
	if (!ctx.cr6.eq) goto loc_82C0CDAC;
	// lwz r30,616(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82c0cc80
	if (!ctx.cr6.eq) goto loc_82C0CC80;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c0cc7c
	if (!ctx.cr6.eq) goto loc_82C0CC7C;
	// bl 0x82c0fa60
	ctx.lr = 0x82C0CC68;
	sub_82C0FA60(ctx, base);
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// stw r3,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r3.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r29,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r29.u32);
	// stw r8,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r8.u32);
loc_82C0CC7C:
	// lwz r30,616(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
loc_82C0CC80:
	// lwz r7,744(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c0cc94
	if (ctx.cr6.eq) goto loc_82C0CC94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0b0f0
	ctx.lr = 0x82C0CC94;
	sub_82C0B0F0(ctx, base);
loc_82C0CC94:
	// bl 0x82c0fa60
	ctx.lr = 0x82C0CC98;
	sub_82C0FA60(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0ccbc
	if (ctx.cr6.eq) goto loc_82C0CCBC;
	// lwz r6,668(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// stw r29,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r29.u32);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r5,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r5.u32);
loc_82C0CCBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0cbb0
	ctx.lr = 0x82C0CCC4;
	sub_82C0CBB0(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c0cdb8
	if (!ctx.cr6.eq) goto loc_82C0CDB8;
	// lwz r5,744(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c0cce8
	if (ctx.cr6.eq) goto loc_82C0CCE8;
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0cdb8
	if (ctx.cr6.eq) goto loc_82C0CDB8;
loc_82C0CCE8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c0cdac
	if (ctx.cr6.eq) goto loc_82C0CDAC;
	// lwz r10,752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r6,600(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,808(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulld r10,r11,r8
	ctx.r10.s64 = ctx.r11.s64 * ctx.r8.s64;
	// mulli r11,r10,1000
	ctx.r11.s64 = ctx.r10.s64 * 1000;
	// divdu r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 / ctx.r7.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulld r3,r10,r3
	ctx.r3.s64 = ctx.r10.s64 * ctx.r3.s64;
	// rldicl r11,r3,48,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 48) & 0xFFFFFFFFFFFF;
	// subf r10,r9,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r9.s64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c0cdb8
	if (ctx.cr6.lt) goto loc_82C0CDB8;
	// lwz r3,624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82c0cd88
	if (!ctx.cr6.gt) goto loc_82C0CD88;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82c0cd70
	if (!ctx.cr6.eq) goto loc_82C0CD70;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// stw r4,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r4.u32);
	// stw r29,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r29.u32);
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// b 0x82c0cd88
	goto loc_82C0CD88;
loc_82C0CD70:
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// mulld r9,r10,r8
	ctx.r9.s64 = ctx.r10.s64 * ctx.r8.s64;
	// divdu r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 / ctx.r7.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r8,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r8.u32);
loc_82C0CD88:
	// lwz r11,812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c0cda4
	if (!ctx.cr6.lt) goto loc_82C0CDA4;
	// stw r29,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82C0CDA4:
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r6,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r6.u32);
loc_82C0CDAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82C0CDB8:
	// lwz r5,232(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82c0ce30
	if (!ctx.cr6.eq) goto loc_82C0CE30;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r3,r4,0,4,4
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c0cdf8
	if (!ctx.cr6.eq) goto loc_82C0CDF8;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c0cde8
	if (ctx.cr6.lt) goto loc_82C0CDE8;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
loc_82C0CDE8:
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c0ce30
	if (!ctx.cr6.lt) goto loc_82C0CE30;
loc_82C0CDF8:
	// lis r29,-31940
	ctx.r29.s64 = -2093219840;
	// addi r30,r31,500
	ctx.r30.s64 = ctx.r31.s64 + 500;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-15348(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -15348);
	// bl 0x82c0f640
	ctx.lr = 0x82C0CE0C;
	sub_82C0F640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c0ce30
	if (ctx.cr6.eq) goto loc_82C0CE30;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C0CE24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-15348(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -15348);
	// bl 0x82c0f6c8
	ctx.lr = 0x82C0CE30;
	sub_82C0F6C8(ctx, base);
loc_82C0CE30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

