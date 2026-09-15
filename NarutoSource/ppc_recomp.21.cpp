#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822103E4"))) PPC_WEAK_FUNC(sub_822103E4);
PPC_FUNC_IMPL(__imp__sub_822103E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822103E8"))) PPC_WEAK_FUNC(sub_822103E8);
PPC_FUNC_IMPL(__imp__sub_822103E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210404"))) PPC_WEAK_FUNC(sub_82210404);
PPC_FUNC_IMPL(__imp__sub_82210404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210408"))) PPC_WEAK_FUNC(sub_82210408);
PPC_FUNC_IMPL(__imp__sub_82210408) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82210434
	if (ctx.cr6.gt) goto loc_82210434;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_82210434:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82219130
	ctx.lr = 0x82210440;
	sub_82219130(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82210474"))) PPC_WEAK_FUNC(sub_82210474);
PPC_FUNC_IMPL(__imp__sub_82210474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210478"))) PPC_WEAK_FUNC(sub_82210478);
PPC_FUNC_IMPL(__imp__sub_82210478) {
	PPC_FUNC_PROLOGUE();
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
loc_82210480:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82210480
	if (!ctx.cr0.eq) goto loc_82210480;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822104b8
	if (!ctx.cr6.eq) goto loc_822104B8;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_822104B8:
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822104C4"))) PPC_WEAK_FUNC(sub_822104C4);
PPC_FUNC_IMPL(__imp__sub_822104C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822104C8"))) PPC_WEAK_FUNC(sub_822104C8);
PPC_FUNC_IMPL(__imp__sub_822104C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x822104D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_822104E4:
	// subf r5,r31,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82210408
	ctx.lr = 0x822104F4;
	sub_82210408(ctx, base);
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82210510
	if (!ctx.cr6.gt) goto loc_82210510;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822104e4
	if (!ctx.cr6.eq) goto loc_822104E4;
loc_82210510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221051C"))) PPC_WEAK_FUNC(sub_8221051C);
PPC_FUNC_IMPL(__imp__sub_8221051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210520"))) PPC_WEAK_FUNC(sub_82210520);
PPC_FUNC_IMPL(__imp__sub_82210520) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82210534:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82210568
	if (ctx.cr6.eq) goto loc_82210568;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82210544:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82210544
	if (!ctx.cr0.eq) goto loc_82210544;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_82210568:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82210580
	if (ctx.cr6.eq) goto loc_82210580;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x82210584
	goto loc_82210584;
loc_82210580:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82210584:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82210534
	if (ctx.cr6.eq) goto loc_82210534;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x822109a8
	sub_822109A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210594"))) PPC_WEAK_FUNC(sub_82210594);
PPC_FUNC_IMPL(__imp__sub_82210594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210598"))) PPC_WEAK_FUNC(sub_82210598);
PPC_FUNC_IMPL(__imp__sub_82210598) {
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
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822105d8
	if (ctx.cr0.eq) goto loc_822105D8;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// bne cr6,0x822105c8
	if (!ctx.cr6.eq) goto loc_822105C8;
	// bl 0x82204940
	ctx.lr = 0x822105C4;
	sub_82204940(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822105C8:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// subf r3,r11,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r11.s64;
	// b 0x822105dc
	goto loc_822105DC;
loc_822105D8:
	// ld r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
loc_822105DC:
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

__attribute__((alias("__imp__sub_822105F0"))) PPC_WEAK_FUNC(sub_822105F0);
PPC_FUNC_IMPL(__imp__sub_822105F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82210624
	if (ctx.cr0.eq) goto loc_82210624;
	// bl 0x82204940
	ctx.lr = 0x82210618;
	sub_82204940(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82210624:
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82210640"))) PPC_WEAK_FUNC(sub_82210640);
PPC_FUNC_IMPL(__imp__sub_82210640) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82210598
	ctx.lr = 0x82210658;
	sub_82210598(ctx, base);
	// mulli r31,r3,1000
	ctx.r31.s64 = ctx.r3.s64 * 1000;
	// bl 0x82204968
	ctx.lr = 0x82210660;
	sub_82204968(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// divdu r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 / ctx.r11.u64;
	// divdu r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 / ctx.r11.u64;
	// tdllei r11,0
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

__attribute__((alias("__imp__sub_82210684"))) PPC_WEAK_FUNC(sub_82210684);
PPC_FUNC_IMPL(__imp__sub_82210684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210688"))) PPC_WEAK_FUNC(sub_82210688);
PPC_FUNC_IMPL(__imp__sub_82210688) {
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
	// bl 0x822105f0
	ctx.lr = 0x8221069C;
	sub_822105F0(ctx, base);
	// mulli r31,r3,1000
	ctx.r31.s64 = ctx.r3.s64 * 1000;
	// bl 0x82204968
	ctx.lr = 0x822106A4;
	sub_82204968(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// divdu r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 / ctx.r11.u64;
	// divdu r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 / ctx.r11.u64;
	// tdllei r11,0
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

__attribute__((alias("__imp__sub_822106C8"))) PPC_WEAK_FUNC(sub_822106C8);
PPC_FUNC_IMPL(__imp__sub_822106C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// beq 0x82210708
	if (ctx.cr0.eq) goto loc_82210708;
	// bl 0x82204940
	ctx.lr = 0x822106F8;
	sub_82204940(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// b 0x8221070c
	goto loc_8221070C;
loc_82210708:
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8221070C:
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

__attribute__((alias("__imp__sub_82210724"))) PPC_WEAK_FUNC(sub_82210724);
PPC_FUNC_IMPL(__imp__sub_82210724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210728"))) PPC_WEAK_FUNC(sub_82210728);
PPC_FUNC_IMPL(__imp__sub_82210728) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r8,r4,30
	ctx.r8.u64 = ctx.r4.u32 & 0x3;
	// rlwinm. r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82210768
	if (ctx.cr0.eq) goto loc_82210768;
loc_82210734:
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm r9,r10,21,11,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFFF;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x82210734
	if (!ctx.cr0.eq) goto loc_82210734;
loc_82210768:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x822107bc
	if (ctx.cr6.eq) goto loc_822107BC;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x822107a4
	if (ctx.cr6.eq) goto loc_822107A4;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x822107d4
	if (!ctx.cr6.eq) goto loc_822107D4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,21,11,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// b 0x822107d0
	goto loc_822107D0;
loc_822107A4:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,15,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// b 0x822107d0
	goto loc_822107D0;
loc_822107BC:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r11,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_822107D0:
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822107D4:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// xor r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210800"))) PPC_WEAK_FUNC(sub_82210800);
PPC_FUNC_IMPL(__imp__sub_82210800) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82210808;
	__savegprlr_29(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r9,9552
	ctx.r8.s64 = ctx.r9.s64 + 9552;
	// beq 0x82210850
	if (ctx.cr0.eq) goto loc_82210850;
loc_82210820:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8221093c
	if (ctx.cr0.eq) goto loc_8221093C;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi. r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// bne 0x82210820
	if (!ctx.cr0.eq) goto loc_82210820;
loc_82210850:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r7,32510
	ctx.r7.s64 = 2130575360;
	// lis r12,-32511
	ctx.r12.s64 = -2130640896;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwimi r6,r9,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r6,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// ori r7,r7,65279
	ctx.r7.u64 = ctx.r7.u64 | 65279;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// eqv r6,r6,r9
	// and. r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82210908
	if (!ctx.cr0.eq) goto loc_82210908;
loc_82210890:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// addi r9,r8,1024
	ctx.r9.s64 = ctx.r8.s64 + 1024;
	// rlwinm r6,r10,18,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FC;
	// rlwinm r5,r10,26,22,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r8,2048
	ctx.r3.s64 = ctx.r8.s64 + 2048;
	// rlwinm r31,r10,10,22,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwimi r30,r4,16,16,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r29,r4,16,0,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// lwzx r5,r5,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// rlwinm r9,r30,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFFFF;
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r3,r29,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r10,r10,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// or r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 | ctx.r3.u64;
	// addi r3,r8,3072
	ctx.r3.s64 = ctx.r8.s64 + 3072;
	// xor r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// add r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lis r12,-32511
	ctx.r12.s64 = -2130640896;
	// eqv r5,r31,r9
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// xor r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// ori r12,r12,256
	ctx.r12.u64 = ctx.r12.u64 | 256;
	// xor r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// and. r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82210890
	if (ctx.cr0.eq) goto loc_82210890;
loc_82210908:
	// li r9,4
	ctx.r9.s64 = 4;
loc_8221090C:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8221093c
	if (ctx.cr0.eq) goto loc_8221093C;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// bne 0x8221090c
	if (!ctx.cr0.eq) goto loc_8221090C;
loc_8221093C:
	// not r3,r10
	ctx.r3.u64 = ~ctx.r10.u64;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210944"))) PPC_WEAK_FUNC(sub_82210944);
PPC_FUNC_IMPL(__imp__sub_82210944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210948"))) PPC_WEAK_FUNC(sub_82210948);
PPC_FUNC_IMPL(__imp__sub_82210948) {
	PPC_FUNC_PROLOGUE();
	// b 0x82210800
	sub_82210800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221094C"))) PPC_WEAK_FUNC(sub_8221094C);
PPC_FUNC_IMPL(__imp__sub_8221094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210950"))) PPC_WEAK_FUNC(sub_82210950);
PPC_FUNC_IMPL(__imp__sub_82210950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82210958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8221096C;
	sub_821FD9D8(ctx, base);
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82210988
	if (ctx.cr6.eq) goto loc_82210988;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_82210988:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82210998
	if (ctx.cr6.eq) goto loc_82210998;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82210998;
	sub_821FD9E0(ctx, base);
loc_82210998:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822109A4"))) PPC_WEAK_FUNC(sub_822109A4);
PPC_FUNC_IMPL(__imp__sub_822109A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822109A8"))) PPC_WEAK_FUNC(sub_822109A8);
PPC_FUNC_IMPL(__imp__sub_822109A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x822109B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x822109CC;
	sub_821FD9D8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// beq cr6,0x822109e8
	if (ctx.cr6.eq) goto loc_822109E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x822109E8;
	sub_821FD9E0(ctx, base);
loc_822109E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822109F0"))) PPC_WEAK_FUNC(sub_822109F0);
PPC_FUNC_IMPL(__imp__sub_822109F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x822109F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82210a64
	if (ctx.cr6.eq) goto loc_82210A64;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r30,r4,-4
	ctx.r30.s64 = ctx.r4.s64 + -4;
	// lwz r31,-17448(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82210A24;
	sub_821FD9D8(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r11,-17444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17444);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82210a64
	if (ctx.cr6.eq) goto loc_82210A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82210A64;
	sub_821FD9E0(ctx, base);
loc_82210A64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210A6C"))) PPC_WEAK_FUNC(sub_82210A6C);
PPC_FUNC_IMPL(__imp__sub_82210A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210A70"))) PPC_WEAK_FUNC(sub_82210A70);
PPC_FUNC_IMPL(__imp__sub_82210A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82210A78;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r30,-17448(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82210AA8;
	sub_821FD9D8(ctx, base);
	// lis r3,-32029
	ctx.r3.s64 = -2099052544;
	// mulli r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 * 20;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,-17444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17444);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82210afc
	if (ctx.cr6.eq) goto loc_82210AFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82210AFC;
	sub_821FD9E0(ctx, base);
loc_82210AFC:
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82210b3c
	if (ctx.cr6.eq) goto loc_82210B3C;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82210B14:
	// addic. r9,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r9.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82210b30
	if (ctx.cr0.eq) goto loc_82210B30;
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82210B30:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne 0x82210b14
	if (!ctx.cr0.eq) goto loc_82210B14;
loc_82210B3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210B44"))) PPC_WEAK_FUNC(sub_82210B44);
PPC_FUNC_IMPL(__imp__sub_82210B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210B48"))) PPC_WEAK_FUNC(sub_82210B48);
PPC_FUNC_IMPL(__imp__sub_82210B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82210B50;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147020
	ctx.lr = 0x82210B7C;
	sub_82147020(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq 0x82210bc4
	if (ctx.cr0.eq) goto loc_82210BC4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82210BC4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210BE0"))) PPC_WEAK_FUNC(sub_82210BE0);
PPC_FUNC_IMPL(__imp__sub_82210BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82210BE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82210C00;
	sub_821FD9D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82210a70
	ctx.lr = 0x82210C24;
	sub_82210A70(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82210b48
	ctx.lr = 0x82210C48;
	sub_82210B48(ctx, base);
	// addic. r28,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r28.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82210c70
	if (ctx.cr0.eq) goto loc_82210C70;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82210C54:
	// addi r26,r3,20
	ctx.r26.s64 = ctx.r3.s64 + 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822103e8
	ctx.lr = 0x82210C64;
	sub_822103E8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne 0x82210c54
	if (!ctx.cr0.eq) goto loc_82210C54;
loc_82210C70:
	// mulli r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 * 20;
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,-20
	ctx.r3.s64 = ctx.r28.s64 + -20;
	// bl 0x822103e8
	ctx.lr = 0x82210C88;
	sub_822103E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82210C90;
	sub_821FD9D8(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r11.u32);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// beq cr6,0x82210cac
	if (ctx.cr6.eq) goto loc_82210CAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82210CAC;
	sub_821FD9E0(ctx, base);
loc_82210CAC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// beq cr6,0x82210cc8
	if (ctx.cr6.eq) goto loc_82210CC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82210CC8;
	sub_821FD9E0(ctx, base);
loc_82210CC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210CD0"))) PPC_WEAK_FUNC(sub_82210CD0);
PPC_FUNC_IMPL(__imp__sub_82210CD0) {
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x821fd9e8
	ctx.lr = 0x82210CF4;
	sub_821FD9E8(ctx, base);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r8,-17440(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17440);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bne cr6,0x82210d2c
	if (!ctx.cr6.eq) goto loc_82210D2C;
	// lwz r30,-17440(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17440);
loc_82210D2C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82210D4C"))) PPC_WEAK_FUNC(sub_82210D4C);
PPC_FUNC_IMPL(__imp__sub_82210D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210D50"))) PPC_WEAK_FUNC(sub_82210D50);
PPC_FUNC_IMPL(__imp__sub_82210D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82210D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
	// lwz r31,48(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82210dac
	if (ctx.cr6.eq) goto loc_82210DAC;
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
loc_82210D74:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822109f0
	ctx.lr = 0x82210D8C;
	sub_822109F0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822040a8
	ctx.lr = 0x82210DA0;
	sub_822040A8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82210d74
	if (!ctx.cr6.eq) goto loc_82210D74;
loc_82210DAC:
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82203ab8
	ctx.lr = 0x82210DB4;
	sub_82203AB8(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82492d68
	ctx.lr = 0x82210DBC;
	sub_82492D68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210DC4"))) PPC_WEAK_FUNC(sub_82210DC4);
PPC_FUNC_IMPL(__imp__sub_82210DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210DC8"))) PPC_WEAK_FUNC(sub_82210DC8);
PPC_FUNC_IMPL(__imp__sub_82210DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82211940
	ctx.lr = 0x82210DFC;
	sub_82211940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82210E0C"))) PPC_WEAK_FUNC(sub_82210E0C);
PPC_FUNC_IMPL(__imp__sub_82210E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210E10"))) PPC_WEAK_FUNC(sub_82210E10);
PPC_FUNC_IMPL(__imp__sub_82210E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82210E18;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x82210f00
	if (ctx.cr6.eq) goto loc_82210F00;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82210e54
	if (!ctx.cr6.lt) goto loc_82210E54;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82210E54:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
loc_82210E5C:
	// divwu r10,r3,r9
	ctx.r10.u32 = ctx.r3.u32 / ctx.r9.u32;
	// twllei r9,0
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r9
	ctx.r3.u32 = ctx.r3.u32 / ctx.r9.u32;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// twllei r9,0
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x82210e88
	if (!ctx.cr6.gt) goto loc_82210E88;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x82210e8c
	goto loc_82210E8C;
loc_82210E88:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_82210E8C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82210ea8
	if (ctx.cr6.eq) goto loc_82210EA8;
	// cmplwi cr6,r31,63
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 63, ctx.xer);
	// blt cr6,0x82210e5c
	if (ctx.cr6.lt) goto loc_82210E5C;
loc_82210EA8:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82210EB0:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210eb0
	if (ctx.cr6.lt) goto loc_82210EB0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x82210ef0
	if (!ctx.cr6.lt) goto loc_82210EF0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82210EE8;
	sub_82219130(ctx, base);
	// stbx r28,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x82210f00
	goto loc_82210F00;
loc_82210EF0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82210EF8;
	sub_82219130(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_82210F00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82210F0C"))) PPC_WEAK_FUNC(sub_82210F0C);
PPC_FUNC_IMPL(__imp__sub_82210F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82210F10"))) PPC_WEAK_FUNC(sub_82210F10);
PPC_FUNC_IMPL(__imp__sub_82210F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82210F18;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x82211010
	if (ctx.cr6.eq) goto loc_82211010;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82210f48
	if (ctx.cr6.lt) goto loc_82210F48;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82210F48:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82210f64
	if (ctx.cr0.eq) goto loc_82210F64;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82210F64:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrldi r9,r6,56
	ctx.r9.u64 = ctx.r6.u64 & 0xFF;
loc_82210F6C:
	// divdu r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 / ctx.r9.u64;
	// tdllei r9,0
	// mulld r10,r10,r9
	ctx.r10.s64 = ctx.r10.s64 * ctx.r9.s64;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divdu r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 / ctx.r9.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// tdllei r9,0
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x82210f98
	if (!ctx.cr6.gt) goto loc_82210F98;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x82210f9c
	goto loc_82210F9C;
loc_82210F98:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_82210F9C:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// ble cr6,0x82210fb8
	if (!ctx.cr6.gt) goto loc_82210FB8;
	// cmplwi cr6,r31,63
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 63, ctx.xer);
	// blt cr6,0x82210f6c
	if (ctx.cr6.lt) goto loc_82210F6C;
loc_82210FB8:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82210FC0:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82210fc0
	if (ctx.cr6.lt) goto loc_82210FC0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x82211000
	if (!ctx.cr6.lt) goto loc_82211000;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82210FF8;
	sub_82219130(ctx, base);
	// stbx r28,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x82211010
	goto loc_82211010;
loc_82211000:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82211008;
	sub_82219130(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_82211010:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221101C"))) PPC_WEAK_FUNC(sub_8221101C);
PPC_FUNC_IMPL(__imp__sub_8221101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211020"))) PPC_WEAK_FUNC(sub_82211020);
PPC_FUNC_IMPL(__imp__sub_82211020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82211028;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x8221111c
	if (ctx.cr6.eq) goto loc_8221111C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
loc_82211050:
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// twllei r10,0
	// divw r8,r6,r10
	ctx.r8.s32 = ctx.r6.s32 / ctx.r10.s32;
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r5,r8,r10
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r5,r5,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r5.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// divw r6,r6,r10
	ctx.r6.s32 = ctx.r6.s32 / ctx.r10.s32;
	// andc r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// twllei r10,0
	// twlgei r4,-1
	// twlgei r8,-1
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// ble cr6,0x822110a4
	if (!ctx.cr6.gt) goto loc_822110A4;
	// addi r9,r9,87
	ctx.r9.s64 = ctx.r9.s64 + 87;
	// b 0x822110a8
	goto loc_822110A8;
loc_822110A4:
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
loc_822110A8:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// beq 0x822110c4
	if (ctx.cr0.eq) goto loc_822110C4;
	// cmplwi cr6,r31,63
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 63, ctx.xer);
	// blt cr6,0x82211050
	if (ctx.cr6.lt) goto loc_82211050;
loc_822110C4:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822110CC:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r9.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822110cc
	if (ctx.cr6.lt) goto loc_822110CC;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x8221110c
	if (!ctx.cr6.lt) goto loc_8221110C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82211104;
	sub_82219130(ctx, base);
	// stbx r28,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x8221111c
	goto loc_8221111C;
loc_8221110C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82211114;
	sub_82219130(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_8221111C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211128"))) PPC_WEAK_FUNC(sub_82211128);
PPC_FUNC_IMPL(__imp__sub_82211128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82211130;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x82211200
	if (ctx.cr6.eq) goto loc_82211200;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
loc_8221115C:
	// divwu r9,r10,r8
	ctx.r9.u32 = ctx.r10.u32 / ctx.r8.u32;
	// twllei r8,0
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divwu r10,r10,r8
	ctx.r10.u32 = ctx.r10.u32 / ctx.r8.u32;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// twllei r8,0
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// ble cr6,0x82211188
	if (!ctx.cr6.gt) goto loc_82211188;
	// addi r9,r9,87
	ctx.r9.s64 = ctx.r9.s64 + 87;
	// b 0x8221118c
	goto loc_8221118C;
loc_82211188:
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
loc_8221118C:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822111a8
	if (ctx.cr6.eq) goto loc_822111A8;
	// cmplwi cr6,r31,63
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 63, ctx.xer);
	// blt cr6,0x8221115c
	if (ctx.cr6.lt) goto loc_8221115C;
loc_822111A8:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822111B0:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r9.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822111b0
	if (ctx.cr6.lt) goto loc_822111B0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x822111f0
	if (!ctx.cr6.lt) goto loc_822111F0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x822111E8;
	sub_82219130(ctx, base);
	// stbx r28,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x82211200
	goto loc_82211200;
loc_822111F0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x822111F8;
	sub_82219130(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_82211200:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221120C"))) PPC_WEAK_FUNC(sub_8221120C);
PPC_FUNC_IMPL(__imp__sub_8221120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211210"))) PPC_WEAK_FUNC(sub_82211210);
PPC_FUNC_IMPL(__imp__sub_82211210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82211218;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x82211324
	if (ctx.cr6.eq) goto loc_82211324;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82211258
	if (!ctx.cr6.lt) goto loc_82211258;
	// li r9,45
	ctx.r9.s64 = 45;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82211258:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
loc_82211260:
	// divw r6,r11,r9
	ctx.r6.s32 = ctx.r11.s32 / ctx.r9.s32;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// subf r6,r6,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// andc r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// andc r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// twllei r9,0
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// twllei r9,0
	// twlgei r7,-1
	// twlgei r6,-1
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// ble cr6,0x822112ac
	if (!ctx.cr6.gt) goto loc_822112AC;
	// addi r8,r8,87
	ctx.r8.s64 = ctx.r8.s64 + 87;
	// b 0x822112b0
	goto loc_822112B0;
loc_822112AC:
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
loc_822112B0:
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822112cc
	if (!ctx.cr6.gt) goto loc_822112CC;
	// cmplwi cr6,r31,63
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 63, ctx.xer);
	// blt cr6,0x82211260
	if (ctx.cr6.lt) goto loc_82211260;
loc_822112CC:
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_822112D4:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822112d4
	if (ctx.cr6.lt) goto loc_822112D4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x82211314
	if (!ctx.cr6.lt) goto loc_82211314;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x8221130C;
	sub_82219130(ctx, base);
	// stbx r28,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x82211324
	goto loc_82211324;
loc_82211314:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x8221131C;
	sub_82219130(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_82211324:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211330"))) PPC_WEAK_FUNC(sub_82211330);
PPC_FUNC_IMPL(__imp__sub_82211330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82211338;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq cr6,0x82211408
	if (ctx.cr6.eq) goto loc_82211408;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrldi r8,r6,56
	ctx.r8.u64 = ctx.r6.u64 & 0xFF;
loc_82211364:
	// divdu r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 / ctx.r8.u64;
	// tdllei r8,0
	// mulld r9,r9,r8
	ctx.r9.s64 = ctx.r9.s64 * ctx.r8.s64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divdu r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 / ctx.r8.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// tdllei r8,0
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// ble cr6,0x82211390
	if (!ctx.cr6.gt) goto loc_82211390;
	// addi r9,r9,87
	ctx.r9.s64 = ctx.r9.s64 + 87;
	// b 0x82211394
	goto loc_82211394;
loc_82211390:
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
loc_82211394:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// ble cr6,0x822113b0
	if (!ctx.cr6.gt) goto loc_822113B0;
	// cmplwi cr6,r31,63
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 63, ctx.xer);
	// blt cr6,0x82211364
	if (ctx.cr6.lt) goto loc_82211364;
loc_822113B0:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822113B8:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r9.u8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822113b8
	if (ctx.cr6.lt) goto loc_822113B8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bge cr6,0x822113f8
	if (!ctx.cr6.lt) goto loc_822113F8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x822113F0;
	sub_82219130(ctx, base);
	// stbx r28,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x82211408
	goto loc_82211408;
loc_822113F8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82211400;
	sub_82219130(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
loc_82211408:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82211414"))) PPC_WEAK_FUNC(sub_82211414);
PPC_FUNC_IMPL(__imp__sub_82211414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211418"))) PPC_WEAK_FUNC(sub_82211418);
PPC_FUNC_IMPL(__imp__sub_82211418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82211420;
	__savegprlr_27(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,32
	ctx.r28.s64 = 32;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lfd f13,-30416(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -30416);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82211448
	if (!ctx.cr6.lt) goto loc_82211448;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// li r28,45
	ctx.r28.s64 = 45;
loc_82211448:
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// cmpwi cr6,r6,510
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 510, ctx.xer);
	// bge cr6,0x8221146c
	if (!ctx.cr6.lt) goto loc_8221146C;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,3328
	ctx.r11.s64 = ctx.r11.s64 + 3328;
	// lfdx f0,r10,r11
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fadd f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
loc_8221146C:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r8,r11,2808
	ctx.r8.s64 = ctx.r11.s64 + 2808;
	// lfd f0,2808(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2808);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x822114a0
	if (ctx.cr6.lt) goto loc_822114A0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82211484:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82211484
	if (!ctx.cr6.lt) goto loc_82211484;
	// cmpwi cr6,r31,260
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 260, ctx.xer);
	// bgt cr6,0x8221175c
	if (ctx.cr6.gt) goto loc_8221175C;
loc_822114A0:
	// cmpwi cr6,r6,260
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 260, ctx.xer);
	// bgt cr6,0x8221175c
	if (ctx.cr6.gt) goto loc_8221175C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8221175c
	if (!ctx.cr6.gt) goto loc_8221175C;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82211524
	if (ctx.cr0.lt) goto loc_82211524;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r10,r1,48
	ctx.r10.s64 = ctx.r1.s64 + 48;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_822114D4:
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fdiv f11,f1,f0
	ctx.f11.f64 = ctx.f1.f64 / ctx.f0.f64;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f11.u64);
	// lwz r7,36(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// std r3,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r3.u64);
	// lfd f11,24(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// fnmsub f1,f11,f0,f1
	ctx.f1.f64 = -(ctx.f11.f64 * ctx.f0.f64 - ctx.f1.f64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// std r7,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r7.u64);
	// lfd f11,16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmadd f13,f11,f0,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64;
	// bge 0x822114d4
	if (!ctx.cr0.lt) goto loc_822114D4;
loc_82211524:
	// fsub f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64 - ctx.f13.f64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addic. r29,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r29.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfdx f13,r11,r8
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// ble 0x82211634
	if (!ctx.cr0.gt) goto loc_82211634;
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82211560:
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fdiv f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f12.u64);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r10.u64);
	// lfd f12,24(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fnmsub f0,f12,f13,f0
	ctx.f0.f64 = -(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82211624
	if (!ctx.cr6.eq) goto loc_82211624;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r27.u32);
	// blt cr6,0x822115e0
	if (ctx.cr6.lt) goto loc_822115E0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_822115AC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,48
	ctx.r10.s64 = ctx.r1.s64 + 48;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x822115e0
	if (ctx.cr6.lt) goto loc_822115E0;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r27,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r27.u32);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bge 0x822115ac
	if (!ctx.cr0.lt) goto loc_822115AC;
loc_822115E0:
	// lwz r11,48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82211624
	if (!ctx.cr6.eq) goto loc_82211624;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r11,48(r1)
	PPC_STORE_U32(ctx.r1.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x82211624
	if (!ctx.cr6.gt) goto loc_82211624;
	// addi r11,r1,52
	ctx.r11.s64 = ctx.r1.s64 + 52;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82211624
	if (ctx.cr0.eq) goto loc_82211624;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82211618:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82211618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82211618;
loc_82211624:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bgt 0x82211560
	if (ctx.cr0.gt) goto loc_82211560;
loc_82211634:
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r9,r28
	ctx.r9.s64 = ctx.r28.s8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// stfiwx f0,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f0.u32);
	// beq cr6,0x8221166c
	if (ctx.cr6.eq) goto loc_8221166C;
	// stb r28,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r28.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8221166C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x822116a8
	if (!ctx.cr6.gt) goto loc_822116A8;
	// addi r9,r1,48
	ctx.r9.s64 = ctx.r1.s64 + 48;
loc_8221167C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822116a8
	if (ctx.cr6.eq) goto loc_822116A8;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// blt cr6,0x8221167c
	if (ctx.cr6.lt) goto loc_8221167C;
loc_822116A8:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi r29,0
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x822116dc
	if (!ctx.cr0.gt) goto loc_822116DC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_822116C0:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822116dc
	if (!ctx.cr6.eq) goto loc_822116DC;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bgt 0x822116c0
	if (ctx.cr0.gt) goto loc_822116C0;
loc_822116DC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822116fc
	if (!ctx.cr6.eq) goto loc_822116FC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822116fc
	if (ctx.cr6.eq) goto loc_822116FC;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_822116FC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8221171c
	if (ctx.cr6.eq) goto loc_8221171C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221171c
	if (ctx.cr6.eq) goto loc_8221171C;
	// li r10,46
	ctx.r10.s64 = 46;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8221171C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82211760
	if (!ctx.cr6.gt) goto loc_82211760;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
loc_8221172C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82211760
	if (ctx.cr6.eq) goto loc_82211760;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// blt cr6,0x8221172c
	if (ctx.cr6.lt) goto loc_8221172C;
	// b 0x82211760
	goto loc_82211760;
loc_8221175C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82211760:
	// stb r27,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r27.u8);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221176C"))) PPC_WEAK_FUNC(sub_8221176C);
PPC_FUNC_IMPL(__imp__sub_8221176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211770"))) PPC_WEAK_FUNC(sub_82211770);
PPC_FUNC_IMPL(__imp__sub_82211770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82211778;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// clrlwi. r20,r6,24
	ctx.r20.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stb r21,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r21.u8);
	// beq 0x822118e4
	if (ctx.cr0.eq) goto loc_822118E4;
	// clrlwi r25,r7,24
	ctx.r25.u64 = ctx.r7.u32 & 0xFF;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// clrlwi r27,r4,24
	ctx.r27.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r26,r5,24
	ctx.r26.u64 = ctx.r5.u32 & 0xFF;
	// addi r24,r11,-16764
	ctx.r24.s64 = ctx.r11.s64 + -16764;
	// addi r23,r10,13684
	ctx.r23.s64 = ctx.r10.s64 + 13684;
	// addi r22,r9,-6428
	ctx.r22.s64 = ctx.r9.s64 + -6428;
	// addi r29,r8,-23296
	ctx.r29.s64 = ctx.r8.s64 + -23296;
	// addi r28,r7,13680
	ctx.r28.s64 = ctx.r7.s64 + 13680;
loc_822117C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212d2b0
	ctx.lr = 0x822117CC;
	sub_8212D2B0(ctx, base);
	// subfic r6,r3,128
	ctx.xer.ca = ctx.r3.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r3.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x82201d30
	ctx.lr = 0x822117E0;
	sub_82201D30(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82211020
	ctx.lr = 0x822117F4;
	sub_82211020(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212d2b0
	ctx.lr = 0x822117FC;
	sub_8212D2B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfic r19,r30,128
	ctx.xer.ca = ctx.r30.u32 <= 128;
	ctx.r19.s64 = 128 - ctx.r30.s64;
	// bl 0x8212d2b0
	ctx.lr = 0x8221180C;
	sub_8212D2B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// bl 0x82201d30
	ctx.lr = 0x82211820;
	sub_82201D30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212d2b0
	ctx.lr = 0x82211828;
	sub_8212D2B0(ctx, base);
	// subfic r6,r3,128
	ctx.xer.ca = ctx.r3.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r3.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x82201d30
	ctx.lr = 0x8221183C;
	sub_82201D30(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82211020
	ctx.lr = 0x82211850;
	sub_82211020(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212d2b0
	ctx.lr = 0x82211858;
	sub_8212D2B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfic r19,r30,128
	ctx.xer.ca = ctx.r30.u32 <= 128;
	ctx.r19.s64 = 128 - ctx.r30.s64;
	// bl 0x8212d2b0
	ctx.lr = 0x82211868;
	sub_8212D2B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// bl 0x82201d30
	ctx.lr = 0x8221187C;
	sub_82201D30(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82211894
	if (ctx.cr6.eq) goto loc_82211894;
	// bl 0x8212d2b0
	ctx.lr = 0x8221188C;
	sub_8212D2B0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x8221189c
	goto loc_8221189C;
loc_82211894:
	// bl 0x8212d2b0
	ctx.lr = 0x82211898;
	sub_8212D2B0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8221189C:
	// subfic r6,r3,128
	ctx.xer.ca = ctx.r3.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r3.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x82201d30
	ctx.lr = 0x822118AC;
	sub_82201D30(ctx, base);
	// addi r30,r21,1
	ctx.r30.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// bge cr6,0x822118d4
	if (!ctx.cr6.lt) goto loc_822118D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212d2b0
	ctx.lr = 0x822118C0;
	sub_8212D2B0(ctx, base);
	// subfic r6,r3,128
	ctx.xer.ca = ctx.r3.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r3.s64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x82201d30
	ctx.lr = 0x822118D4;
	sub_82201D30(ctx, base);
loc_822118D4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x822117c4
	if (ctx.cr6.lt) goto loc_822117C4;
loc_822118E4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822118EC"))) PPC_WEAK_FUNC(sub_822118EC);
PPC_FUNC_IMPL(__imp__sub_822118EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822118F0"))) PPC_WEAK_FUNC(sub_822118F0);
PPC_FUNC_IMPL(__imp__sub_822118F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8221192c
	if (ctx.cr0.eq) goto loc_8221192C;
	// lis r8,-32056
	ctx.r8.s64 = -2100822016;
	// addi r8,r8,2248
	ctx.r8.s64 = ctx.r8.s64 + 2248;
loc_8221190C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8221190c
	if (!ctx.cr0.eq) goto loc_8221190C;
loc_8221192C:
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r3,r3,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221193C"))) PPC_WEAK_FUNC(sub_8221193C);
PPC_FUNC_IMPL(__imp__sub_8221193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82211940"))) PPC_WEAK_FUNC(sub_82211940);
PPC_FUNC_IMPL(__imp__sub_82211940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82211948;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r29,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r29.u32);
	// stw r27,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r27.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82211980
	if (!ctx.cr6.eq) goto loc_82211980;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r20,r11,13434
	ctx.r20.s64 = ctx.r11.s64 + 13434;
loc_82211980:
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221285c
	if (ctx.cr0.eq) goto loc_8221285C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfd f31,-30416(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -30416);
loc_82211994:
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x82211a28
	if (ctx.cr6.eq) goto loc_82211A28;
	// li r4,37
	ctx.r4.s64 = 37;
	// addi r3,r20,1
	ctx.r3.s64 = ctx.r20.s64 + 1;
	// bl 0x8220aed0
	ctx.lr = 0x822119A8;
	sub_8220AED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822119c0
	if (!ctx.cr0.eq) goto loc_822119C0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8212d2b0
	ctx.lr = 0x822119B8;
	sub_8212D2B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822119c4
	goto loc_822119C4;
loc_822119C0:
	// subf r31,r20,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r20.s64;
loc_822119C4:
	// cmplw cr6,r17,r27
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82211a1c
	if (!ctx.cr6.lt) goto loc_82211A1C;
	// subf r5,r17,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r17.s64;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x822119dc
	if (ctx.cr6.gt) goto loc_822119DC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_822119DC:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// blt cr6,0x822119f4
	if (ctx.cr6.lt) goto loc_822119F4;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r3,r17,r29
	ctx.r3.u64 = ctx.r17.u64 + ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x822119F0;
	sub_82219130(ctx, base);
	// b 0x82211a1c
	goto loc_82211A1C;
loc_822119F4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82211a1c
	if (ctx.cr6.eq) goto loc_82211A1C;
	// subf r10,r20,r17
	ctx.r10.s64 = ctx.r17.s64 - ctx.r20.s64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82211A08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82211a08
	if (!ctx.cr0.eq) goto loc_82211A08;
loc_82211A1C:
	// add r20,r31,r20
	ctx.r20.u64 = ctx.r31.u64 + ctx.r20.u64;
	// add r17,r31,r17
	ctx.r17.u64 = ctx.r31.u64 + ctx.r17.u64;
	// b 0x82212850
	goto loc_82212850;
loc_82211A28:
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
loc_82211A58:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82211a94
	if (ctx.cr6.eq) goto loc_82211A94;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82211a94
	if (ctx.cr6.eq) goto loc_82211A94;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82211a94
	if (ctx.cr6.eq) goto loc_82211A94;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82211ad0
	if (ctx.cr6.eq) goto loc_82211AD0;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x82211a94
	if (ctx.cr6.eq) goto loc_82211A94;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// bne cr6,0x82211ae0
	if (!ctx.cr6.eq) goto loc_82211AE0;
loc_82211A94:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82211ad0
	if (ctx.cr6.eq) goto loc_82211AD0;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x82211ad8
	if (ctx.cr6.eq) goto loc_82211AD8;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82211acc
	if (ctx.cr6.eq) goto loc_82211ACC;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82211ac4
	if (ctx.cr6.eq) goto loc_82211AC4;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82211a58
	if (!ctx.cr6.eq) goto loc_82211A58;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x82211a58
	goto loc_82211A58;
loc_82211AC4:
	// li r14,1
	ctx.r14.s64 = 1;
	// b 0x82211a58
	goto loc_82211A58;
loc_82211ACC:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_82211AD0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82211a58
	goto loc_82211A58;
loc_82211AD8:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x82211a58
	goto loc_82211A58;
loc_82211AE0:
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82211b20
	if (!ctx.cr6.eq) goto loc_82211B20;
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82211b14
	if (ctx.cr6.lt) goto loc_82211B14;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// b 0x82211b70
	goto loc_82211B70;
loc_82211B14:
	// neg r16,r11
	ctx.r16.s64 = -ctx.r11.s64;
	// li r14,1
	ctx.r14.s64 = 1;
	// b 0x82211b70
	goto loc_82211B70;
loc_82211B20:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82211b70
	if (ctx.cr6.lt) goto loc_82211B70;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82211b70
	if (ctx.cr6.gt) goto loc_82211B70;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r10,r11,-48
	ctx.r10.s64 = ctx.r11.s64 + -48;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82211b64
	goto loc_82211B64;
loc_82211B44:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82211b6c
	if (ctx.cr6.gt) goto loc_82211B6C;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// lbz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
loc_82211B64:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x82211b44
	if (!ctx.cr6.lt) goto loc_82211B44;
loc_82211B6C:
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
loc_82211B70:
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82211c14
	if (!ctx.cr6.eq) goto loc_82211C14;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// li r23,1
	ctx.r23.s64 = 1;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82211bc4
	if (!ctx.cr6.eq) goto loc_82211BC4;
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82211bb8
	if (ctx.cr6.lt) goto loc_82211BB8;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x82211c14
	goto loc_82211C14;
loc_82211BB8:
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// b 0x82211c14
	goto loc_82211C14;
loc_82211BC4:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82211c14
	if (ctx.cr6.lt) goto loc_82211C14;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82211c14
	if (ctx.cr6.gt) goto loc_82211C14;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r10,r11,-48
	ctx.r10.s64 = ctx.r11.s64 + -48;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82211c08
	goto loc_82211C08;
loc_82211BE8:
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82211c10
	if (ctx.cr6.gt) goto loc_82211C10;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// lbz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
loc_82211C08:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bge cr6,0x82211be8
	if (!ctx.cr6.lt) goto loc_82211BE8;
loc_82211C10:
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_82211C14:
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,104
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 104, ctx.xer);
	// beq cr6,0x82211c2c
	if (ctx.cr6.eq) goto loc_82211C2C;
	// cmpwi cr6,r10,108
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 108, ctx.xer);
	// bne cr6,0x82211c54
	if (!ctx.cr6.eq) goto loc_82211C54;
loc_82211C2C:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpwi cr6,r10,108
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 108, ctx.xer);
	// bne cr6,0x82211c54
	if (!ctx.cr6.eq) goto loc_82211C54;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x82211c54
	if (!ctx.cr6.eq) goto loc_82211C54;
	// li r5,50
	ctx.r5.s64 = 50;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_82211C54:
	// lbz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,68
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 68, ctx.xer);
	// beq cr6,0x82211c98
	if (ctx.cr6.eq) goto loc_82211C98;
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// beq cr6,0x82211c90
	if (ctx.cr6.eq) goto loc_82211C90;
	// cmpwi cr6,r11,85
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 85, ctx.xer);
	// beq cr6,0x82211c84
	if (ctx.cr6.eq) goto loc_82211C84;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// bne cr6,0x82211ca0
	if (!ctx.cr6.eq) goto loc_82211CA0;
	// b 0x82211c9c
	goto loc_82211C9C;
loc_82211C84:
	// li r6,117
	ctx.r6.s64 = 117;
loc_82211C88:
	// li r5,108
	ctx.r5.s64 = 108;
	// b 0x82211ca0
	goto loc_82211CA0;
loc_82211C90:
	// li r6,111
	ctx.r6.s64 = 111;
	// b 0x82211c88
	goto loc_82211C88;
loc_82211C98:
	// li r5,108
	ctx.r5.s64 = 108;
loc_82211C9C:
	// li r6,100
	ctx.r6.s64 = 100;
loc_82211CA0:
	// extsb r27,r6
	ctx.r27.s64 = ctx.r6.s8;
	// cmpwi cr6,r27,102
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 102, ctx.xer);
	// bgt cr6,0x82211d40
	if (ctx.cr6.gt) goto loc_82211D40;
	// beq cr6,0x82211d04
	if (ctx.cr6.eq) goto loc_82211D04;
	// cmpwi cr6,r27,37
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 37, ctx.xer);
	// beq cr6,0x82212084
	if (ctx.cr6.eq) goto loc_82212084;
	// cmpwi cr6,r27,70
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 70, ctx.xer);
	// beq cr6,0x82211d04
	if (ctx.cr6.eq) goto loc_82211D04;
	// cmpwi cr6,r27,71
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 71, ctx.xer);
	// beq cr6,0x8221259c
	if (ctx.cr6.eq) goto loc_8221259C;
	// cmpwi cr6,r27,88
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 88, ctx.xer);
	// beq cr6,0x82212140
	if (ctx.cr6.eq) goto loc_82212140;
	// cmpwi cr6,r27,99
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 99, ctx.xer);
	// beq cr6,0x82212084
	if (ctx.cr6.eq) goto loc_82212084;
	// cmpwi cr6,r27,100
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 100, ctx.xer);
loc_82211CDC:
	// beq cr6,0x82212140
	if (ctx.cr6.eq) goto loc_82212140;
loc_82211CE0:
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// li r14,1
	ctx.r14.s64 = 1;
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// beq 0x822125f8
	if (ctx.cr0.eq) goto loc_822125F8;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x822125f8
	goto loc_822125F8;
loc_82211D04:
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// addi r21,r1,208
	ctx.r21.s64 = ctx.r1.s64 + 208;
	// lfd f1,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// beq cr6,0x82211d30
	if (ctx.cr6.eq) goto loc_82211D30;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82211d30
	if (!ctx.cr6.gt) goto loc_82211D30;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82211D30:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x822125d4
	if (!ctx.cr6.eq) goto loc_822125D4;
	// li r25,6
	ctx.r25.s64 = 6;
	// b 0x822125d4
	goto loc_822125D4;
loc_82211D40:
	// cmpwi cr6,r27,103
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 103, ctx.xer);
	// beq cr6,0x8221259c
	if (ctx.cr6.eq) goto loc_8221259C;
	// cmpwi cr6,r27,110
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 110, ctx.xer);
	// ble cr6,0x82211ce0
	if (!ctx.cr6.gt) goto loc_82211CE0;
	// cmpwi cr6,r27,112
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 112, ctx.xer);
	// ble cr6,0x82212140
	if (!ctx.cr6.gt) goto loc_82212140;
	// cmpwi cr6,r27,115
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 115, ctx.xer);
	// beq cr6,0x82212084
	if (ctx.cr6.eq) goto loc_82212084;
	// cmpwi cr6,r27,117
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 117, ctx.xer);
	// beq cr6,0x82212140
	if (ctx.cr6.eq) goto loc_82212140;
	// cmpwi cr6,r27,118
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 118, ctx.xer);
	// beq cr6,0x82211d78
	if (ctx.cr6.eq) goto loc_82211D78;
	// cmpwi cr6,r27,120
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 120, ctx.xer);
	// b 0x82211cdc
	goto loc_82211CDC;
loc_82211D78:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r21,r1,208
	ctx.r21.s64 = ctx.r1.s64 + 208;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x82211fa4
	if (ctx.cr6.eq) goto loc_82211FA4;
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// beq cr6,0x82211eb0
	if (ctx.cr6.eq) goto loc_82211EB0;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// bne cr6,0x822125f8
	if (!ctx.cr6.eq) goto loc_822125F8;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x82211e30
	if (!ctx.cr6.eq) goto loc_82211E30;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82211dc4
	if (!ctx.cr6.eq) goto loc_82211DC4;
	// li r25,6
	ctx.r25.s64 = 6;
loc_82211DC4:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82211770
	ctx.lr = 0x82211DDC;
	sub_82211770(ctx, base);
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82210dc8
	ctx.lr = 0x82211E2C;
	sub_82210DC8(ctx, base);
	// b 0x8221207c
	goto loc_8221207C;
loc_82211E30:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bne cr6,0x822125f8
	if (!ctx.cr6.eq) goto loc_822125F8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82211e44
	if (!ctx.cr6.eq) goto loc_82211E44;
	// li r25,8
	ctx.r25.s64 = 8;
loc_82211E44:
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// bl 0x82211770
	ctx.lr = 0x82211E6C;
	sub_82211770(ctx, base);
	// lfd f4,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// lfd f3,16(r31)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// lfd f1,0(r31)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// lfd f2,8(r31)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x82210dc8
	ctx.lr = 0x82211EAC;
	sub_82210DC8(ctx, base);
	// b 0x8221207c
	goto loc_8221207C;
loc_82211EB0:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x82211f30
	if (!ctx.cr6.eq) goto loc_82211F30;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82211ed0
	if (!ctx.cr6.eq) goto loc_82211ED0;
	// li r25,6
	ctx.r25.s64 = 6;
loc_82211ED0:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82211770
	ctx.lr = 0x82211EE8;
	sub_82211770(ctx, base);
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x82210dc8
	ctx.lr = 0x82211F2C;
	sub_82210DC8(ctx, base);
	// b 0x8221207c
	goto loc_8221207C;
loc_82211F30:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bne cr6,0x822125f8
	if (!ctx.cr6.eq) goto loc_822125F8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82211f44
	if (!ctx.cr6.eq) goto loc_82211F44;
	// li r25,8
	ctx.r25.s64 = 8;
loc_82211F44:
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// bl 0x82211770
	ctx.lr = 0x82211F6C;
	sub_82211770(ctx, base);
	// lfd f3,16(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// lfd f2,8(r31)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// lfd f1,0(r31)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82210dc8
	ctx.lr = 0x82211FA0;
	sub_82210DC8(ctx, base);
	// b 0x8221207c
	goto loc_8221207C;
loc_82211FA4:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x82212018
	if (!ctx.cr6.eq) goto loc_82212018;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82211fc4
	if (!ctx.cr6.eq) goto loc_82211FC4;
	// li r25,6
	ctx.r25.s64 = 6;
loc_82211FC4:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82211770
	ctx.lr = 0x82211FDC;
	sub_82211770(ctx, base);
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x82210dc8
	ctx.lr = 0x82212014;
	sub_82210DC8(ctx, base);
	// b 0x8221207c
	goto loc_8221207C;
loc_82212018:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bne cr6,0x822125f8
	if (!ctx.cr6.eq) goto loc_822125F8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8221202c
	if (!ctx.cr6.eq) goto loc_8221202C;
	// li r25,8
	ctx.r25.s64 = 8;
loc_8221202C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82211770
	ctx.lr = 0x82212044;
	sub_82211770(ctx, base);
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfd f2,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f1,0(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82210dc8
	ctx.lr = 0x8221207C;
	sub_82210DC8(ctx, base);
loc_8221207C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822125f8
	goto loc_822125F8;
loc_82212084:
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r27,37
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 37, ctx.xer);
	// beq cr6,0x82212138
	if (ctx.cr6.eq) goto loc_82212138;
	// cmpwi cr6,r27,99
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 99, ctx.xer);
	// beq cr6,0x82212118
	if (ctx.cr6.eq) goto loc_82212118;
	// cmpwi cr6,r27,115
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 115, ctx.xer);
	// bne cr6,0x822125f8
	if (!ctx.cr6.eq) goto loc_822125F8;
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// lwz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822120d8
	if (ctx.cr6.eq) goto loc_822120D8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x822120d0
	if (!ctx.cr6.eq) goto loc_822120D0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8212d2b0
	ctx.lr = 0x822120CC;
	sub_8212D2B0(ctx, base);
	// b 0x8221207c
	goto loc_8221207C;
loc_822120D0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822120e0
	if (!ctx.cr6.eq) goto loc_822120E0;
loc_822120D8:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x822125f8
	goto loc_822125F8;
loc_822120E0:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r5,r11,65535
	ctx.r5.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r25,r5
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x822120f4
	if (ctx.cr6.gt) goto loc_822120F4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_822120F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8221ada0
	ctx.lr = 0x82212100;
	sub_8221ADA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82212110
	if (!ctx.cr0.eq) goto loc_82212110;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x822125f8
	goto loc_822125F8;
loc_82212110:
	// subf r31,r21,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r21.s64;
	// b 0x822125f8
	goto loc_822125F8;
loc_82212118:
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// stb r28,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r28.u8);
	// addi r21,r1,208
	ctx.r21.s64 = ctx.r1.s64 + 208;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r11,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r11.u8);
	// b 0x822125f8
	goto loc_822125F8;
loc_82212138:
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// b 0x822125f8
	goto loc_822125F8;
loc_82212140:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r27,112
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 112, ctx.xer);
	// bne cr6,0x82212180
	if (!ctx.cr6.eq) goto loc_82212180;
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// b 0x82212248
	goto loc_82212248;
loc_82212180:
	// cmpwi cr6,r27,100
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 100, ctx.xer);
	// extsb. r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822121f4
	if (!ctx.cr6.eq) goto loc_822121F4;
	// beq 0x822121e0
	if (ctx.cr0.eq) goto loc_822121E0;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x822121cc
	if (ctx.cr6.eq) goto loc_822121CC;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x822121e0
	if (ctx.cr6.eq) goto loc_822121E0;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// bne cr6,0x82212254
	if (!ctx.cr6.eq) goto loc_82212254;
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_822121B8:
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// bgt cr6,0x82212250
	if (ctx.cr6.gt) goto loc_82212250;
	// bge cr6,0x82212254
	if (!ctx.cr6.lt) goto loc_82212254;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x82212254
	goto loc_82212254;
loc_822121CC:
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// b 0x822121b8
	goto loc_822121B8;
loc_822121E0:
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// b 0x822121b8
	goto loc_822121B8;
loc_822121F4:
	// beq 0x82212238
	if (ctx.cr0.eq) goto loc_82212238;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x82212224
	if (ctx.cr6.eq) goto loc_82212224;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x82212238
	if (ctx.cr6.eq) goto loc_82212238;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// bne cr6,0x82212254
	if (!ctx.cr6.eq) goto loc_82212254;
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// b 0x82212248
	goto loc_82212248;
loc_82212224:
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// ld r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// b 0x82212248
	goto loc_82212248;
loc_82212238:
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
loc_82212248:
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x82212254
	if (ctx.cr6.eq) goto loc_82212254;
loc_82212250:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82212254:
	// addi r21,r1,208
	ctx.r21.s64 = ctx.r1.s64 + 208;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r27,100
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 100, ctx.xer);
	// bne cr6,0x82212290
	if (!ctx.cr6.eq) goto loc_82212290;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822122c0
	if (ctx.cr6.eq) goto loc_822122C0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822122c0
	if (ctx.cr6.lt) goto loc_822122C0;
	// subfic r11,r26,0
	ctx.xer.ca = ctx.r26.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r26.s64;
	// li r31,1
	ctx.r31.s64 = 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r11,r11,43
	ctx.r11.s64 = ctx.r11.s64 + 43;
	// b 0x822122bc
	goto loc_822122BC;
loc_82212290:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x822122c0
	if (ctx.cr6.eq) goto loc_822122C0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822122c0
	if (ctx.cr6.eq) goto loc_822122C0;
	// cmpwi cr6,r27,120
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 120, ctx.xer);
	// beq cr6,0x822122b0
	if (ctx.cr6.eq) goto loc_822122B0;
	// cmpwi cr6,r27,88
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 88, ctx.xer);
	// bne cr6,0x822122c0
	if (!ctx.cr6.eq) goto loc_822122C0;
loc_822122B0:
	// li r11,48
	ctx.r11.s64 = 48;
	// stb r6,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r6.u8);
	// li r31,2
	ctx.r31.s64 = 2;
loc_822122BC:
	// stb r11,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r11.u8);
loc_822122C0:
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x822122d0
	if (!ctx.cr6.eq) goto loc_822122D0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_822122D0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822122e0
	if (!ctx.cr6.eq) goto loc_822122E0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82212528
	if (ctx.cr6.eq) goto loc_82212528;
loc_822122E0:
	// cmpwi cr6,r27,112
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 112, ctx.xer);
	// bne cr6,0x82212354
	if (!ctx.cr6.eq) goto loc_82212354;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82211128
	ctx.lr = 0x822122FC;
	sub_82211128(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822118f0
	ctx.lr = 0x82212304;
	sub_822118F0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8212d2b0
	ctx.lr = 0x8221230C;
	sub_8212D2B0(ctx, base);
	// subfic r8,r3,8
	ctx.xer.ca = ctx.r3.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r3.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x822124b4
	if (!ctx.cr6.gt) goto loc_822124B4;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// subfic r9,r31,256
	ctx.xer.ca = ctx.r31.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r31.s64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82212328:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822124b4
	if (ctx.cr6.lt) goto loc_822124B4;
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82212328
	if (ctx.cr6.lt) goto loc_82212328;
	// b 0x822124b4
	goto loc_822124B4;
loc_82212354:
	// cmpwi cr6,r27,100
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 100, ctx.xer);
	// extsb. r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822123c4
	if (!ctx.cr6.eq) goto loc_822123C4;
	// beq 0x822123ac
	if (ctx.cr0.eq) goto loc_822123AC;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x82212394
	if (ctx.cr6.eq) goto loc_82212394;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x822123ac
	if (ctx.cr6.eq) goto loc_822123AC;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// bne cr6,0x822124ec
	if (!ctx.cr6.eq) goto loc_822124EC;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82210e10
	ctx.lr = 0x82212390;
	sub_82210E10(ctx, base);
	// b 0x822124b4
	goto loc_822124B4;
loc_82212394:
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82210f10
	ctx.lr = 0x822123A8;
	sub_82210F10(ctx, base);
	// b 0x822124b4
	goto loc_822124B4;
loc_822123AC:
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82211210
	ctx.lr = 0x822123C0;
	sub_82211210(ctx, base);
	// b 0x822124b4
	goto loc_822124B4;
loc_822123C4:
	// beq 0x82212470
	if (ctx.cr0.eq) goto loc_82212470;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x82212428
	if (ctx.cr6.eq) goto loc_82212428;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x82212470
	if (ctx.cr6.eq) goto loc_82212470;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// bne cr6,0x822124ec
	if (!ctx.cr6.eq) goto loc_822124EC;
	// cmpwi cr6,r27,120
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 120, ctx.xer);
	// bne cr6,0x822123f0
	if (!ctx.cr6.eq) goto loc_822123F0;
	// li r6,16
	ctx.r6.s64 = 16;
	// b 0x82212414
	goto loc_82212414;
loc_822123F0:
	// cmpwi cr6,r27,88
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 88, ctx.xer);
	// bne cr6,0x82212410
	if (!ctx.cr6.eq) goto loc_82212410;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82211128
	ctx.lr = 0x8221240C;
	sub_82211128(ctx, base);
	// b 0x82212498
	goto loc_82212498;
loc_82212410:
	// li r6,10
	ctx.r6.s64 = 10;
loc_82212414:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82211128
	ctx.lr = 0x82212424;
	sub_82211128(ctx, base);
	// b 0x822124b4
	goto loc_822124B4;
loc_82212428:
	// cmpwi cr6,r27,120
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 120, ctx.xer);
	// bne cr6,0x82212438
	if (!ctx.cr6.eq) goto loc_82212438;
	// li r6,16
	ctx.r6.s64 = 16;
	// b 0x8221245c
	goto loc_8221245C;
loc_82212438:
	// cmpwi cr6,r27,88
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 88, ctx.xer);
	// bne cr6,0x82212458
	if (!ctx.cr6.eq) goto loc_82212458;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82211330
	ctx.lr = 0x82212454;
	sub_82211330(ctx, base);
	// b 0x82212498
	goto loc_82212498;
loc_82212458:
	// li r6,10
	ctx.r6.s64 = 10;
loc_8221245C:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82211330
	ctx.lr = 0x8221246C;
	sub_82211330(ctx, base);
	// b 0x822124b4
	goto loc_822124B4;
loc_82212470:
	// cmpwi cr6,r27,120
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 120, ctx.xer);
	// bne cr6,0x82212480
	if (!ctx.cr6.eq) goto loc_82212480;
	// li r6,16
	ctx.r6.s64 = 16;
	// b 0x822124a8
	goto loc_822124A8;
loc_82212480:
	// cmpwi cr6,r27,88
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 88, ctx.xer);
	// bne cr6,0x822124a4
	if (!ctx.cr6.eq) goto loc_822124A4;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82211128
	ctx.lr = 0x82212498;
	sub_82211128(ctx, base);
loc_82212498:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822118f0
	ctx.lr = 0x822124A0;
	sub_822118F0(ctx, base);
	// b 0x822124b4
	goto loc_822124B4;
loc_822124A4:
	// li r6,10
	ctx.r6.s64 = 10;
loc_822124A8:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82211128
	ctx.lr = 0x822124B4;
	sub_82211128(ctx, base);
loc_822124B4:
	// subfic r6,r31,256
	ctx.xer.ca = ctx.r31.u32 <= 256;
	ctx.r6.s64 = 256 - ctx.r31.s64;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82201d30
	ctx.lr = 0x822124CC;
	sub_82201D30(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r19,r31
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x822124ec
	if (!ctx.cr6.lt) goto loc_822124EC;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lbzx r11,r19,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x822124ec
	if (!ctx.cr6.eq) goto loc_822124EC;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
loc_822124EC:
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82212528
	if (!ctx.cr6.lt) goto loc_82212528;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lbzx r11,r19,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82212528
	if (!ctx.cr6.eq) goto loc_82212528;
	// addi r11,r1,209
	ctx.r11.s64 = ctx.r1.s64 + 209;
	// lbzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82212524
	if (ctx.cr6.eq) goto loc_82212524;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82212528
	if (!ctx.cr6.eq) goto loc_82212528;
loc_82212524:
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
loc_82212528:
	// subf r11,r19,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r19.s64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8221256c
	if (ctx.cr6.eq) goto loc_8221256C;
	// cmpwi cr6,r27,111
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 111, ctx.xer);
	// bne cr6,0x8221256c
	if (!ctx.cr6.eq) goto loc_8221256C;
	// cmplw cr6,r19,r31
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82212554
	if (!ctx.cr6.lt) goto loc_82212554;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lbzx r10,r19,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x8221256c
	if (ctx.cr6.eq) goto loc_8221256C;
loc_82212554:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82212568
	if (ctx.cr6.eq) goto loc_82212568;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8221256c
	if (!ctx.cr6.lt) goto loc_8221256C;
loc_82212568:
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_8221256C:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82212578
	if (!ctx.cr6.lt) goto loc_82212578;
	// subf r15,r11,r25
	ctx.r15.s64 = ctx.r25.s64 - ctx.r11.s64;
loc_82212578:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x822125f8
	if (!ctx.cr6.eq) goto loc_822125F8;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x822125f8
	if (ctx.cr6.eq) goto loc_822125F8;
	// subf r11,r31,r16
	ctx.r11.s64 = ctx.r16.s64 - ctx.r31.s64;
	// subf. r11,r15,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r15.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822125f8
	if (!ctx.cr0.gt) goto loc_822125F8;
	// add r15,r11,r15
	ctx.r15.u64 = ctx.r11.u64 + ctx.r15.u64;
	// b 0x822125f8
	goto loc_822125F8;
loc_8221259C:
	// addi r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 7;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// addi r21,r1,208
	ctx.r21.s64 = ctx.r1.s64 + 208;
	// lfd f1,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bne cr6,0x822125c0
	if (!ctx.cr6.eq) goto loc_822125C0;
	// li r25,8
	ctx.r25.s64 = 8;
loc_822125C0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822125d4
	if (ctx.cr6.eq) goto loc_822125D4;
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x822125d4
	if (!ctx.cr6.gt) goto loc_822125D4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_822125D4:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stb r28,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r28.u8);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// subfic r5,r31,256
	ctx.xer.ca = ctx.r31.u32 <= 256;
	ctx.r5.s64 = 256 - ctx.r31.s64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82211418
	ctx.lr = 0x822125EC;
	sub_82211418(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8212d2b0
	ctx.lr = 0x822125F4;
	sub_8212D2B0(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_822125F8:
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212608
	if (ctx.cr6.eq) goto loc_82212608;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_82212608:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x822126ac
	if (!ctx.cr6.eq) goto loc_822126AC;
	// subf r11,r31,r16
	ctx.r11.s64 = ctx.r16.s64 - ctx.r31.s64;
	// subf. r30,r15,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r15.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x822126ac
	if (!ctx.cr0.gt) goto loc_822126AC;
	// lwz r27,780(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// cmplw cr6,r17,r27
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x822126a0
	if (!ctx.cr6.lt) goto loc_822126A0;
	// subf r5,r17,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r17.s64;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82212638
	if (ctx.cr6.gt) goto loc_82212638;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82212638:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// blt cr6,0x82212660
	if (ctx.cr6.lt) goto loc_82212660;
	// subfic r11,r18,0
	ctx.xer.ca = ctx.r18.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r18.s64;
	// lwz r29,772(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r17,r29
	ctx.r3.u64 = ctx.r17.u64 + ctx.r29.u64;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82218a80
	ctx.lr = 0x8221265C;
	sub_82218A80(ctx, base);
	// b 0x822126a4
	goto loc_822126A4;
loc_82212660:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822126a0
	if (ctx.cr6.eq) goto loc_822126A0;
	// subfic r11,r18,0
	ctx.xer.ca = ctx.r18.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r18.s64;
	// lwz r29,772(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r17,r29
	ctx.r11.u64 = ctx.r17.u64 + ctx.r29.u64;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// beq 0x822126a4
	if (ctx.cr0.eq) goto loc_822126A4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82212690:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82212690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82212690;
	// b 0x822126a4
	goto loc_822126A4;
loc_822126A0:
	// lwz r29,772(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
loc_822126A4:
	// add r17,r30,r17
	ctx.r17.u64 = ctx.r30.u64 + ctx.r17.u64;
	// b 0x822126b4
	goto loc_822126B4;
loc_822126AC:
	// lwz r27,780(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// lwz r29,772(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
loc_822126B4:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x822126c8
	if (!ctx.cr6.eq) goto loc_822126C8;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// b 0x82212794
	goto loc_82212794;
loc_822126C8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x8221272c
	if (!ctx.cr6.gt) goto loc_8221272C;
	// cmplw cr6,r17,r27
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82212728
	if (!ctx.cr6.lt) goto loc_82212728;
	// subf r5,r17,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r17.s64;
	// cmpw cr6,r19,r5
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x822126e8
	if (ctx.cr6.gt) goto loc_822126E8;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_822126E8:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// blt cr6,0x82212700
	if (ctx.cr6.lt) goto loc_82212700;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r3,r17,r29
	ctx.r3.u64 = ctx.r17.u64 + ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x822126FC;
	sub_82219130(ctx, base);
	// b 0x82212728
	goto loc_82212728;
loc_82212700:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82212728
	if (ctx.cr6.eq) goto loc_82212728;
	// subf r10,r21,r17
	ctx.r10.s64 = ctx.r17.s64 - ctx.r21.s64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82212714:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82212714
	if (!ctx.cr0.eq) goto loc_82212714;
loc_82212728:
	// add r17,r19,r17
	ctx.r17.u64 = ctx.r19.u64 + ctx.r17.u64;
loc_8221272C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82212790
	if (!ctx.cr6.gt) goto loc_82212790;
	// cmplw cr6,r17,r27
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8221278c
	if (!ctx.cr6.lt) goto loc_8221278C;
	// subf r5,r17,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r17.s64;
	// cmpw cr6,r15,r5
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x8221274c
	if (ctx.cr6.gt) goto loc_8221274C;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
loc_8221274C:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// blt cr6,0x82212764
	if (ctx.cr6.lt) goto loc_82212764;
	// li r4,48
	ctx.r4.s64 = 48;
	// add r3,r17,r29
	ctx.r3.u64 = ctx.r17.u64 + ctx.r29.u64;
	// bl 0x82218a80
	ctx.lr = 0x82212760;
	sub_82218A80(ctx, base);
	// b 0x8221278c
	goto loc_8221278C;
loc_82212764:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221278c
	if (ctx.cr6.eq) goto loc_8221278C;
	// add r11,r17,r29
	ctx.r11.u64 = ctx.r17.u64 + ctx.r29.u64;
	// li r10,48
	ctx.r10.s64 = 48;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8221278c
	if (ctx.cr0.eq) goto loc_8221278C;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82212780:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82212780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82212780;
loc_8221278C:
	// add r17,r15,r17
	ctx.r17.u64 = ctx.r15.u64 + ctx.r17.u64;
loc_82212790:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82212794:
	// subf. r30,r19,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r19.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x822127f8
	if (!ctx.cr0.gt) goto loc_822127F8;
	// cmplw cr6,r17,r27
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x822127f4
	if (!ctx.cr6.lt) goto loc_822127F4;
	// subf r5,r17,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r17.s64;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x822127b4
	if (ctx.cr6.gt) goto loc_822127B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_822127B4:
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// blt cr6,0x822127cc
	if (ctx.cr6.lt) goto loc_822127CC;
	// add r4,r21,r19
	ctx.r4.u64 = ctx.r21.u64 + ctx.r19.u64;
	// add r3,r17,r29
	ctx.r3.u64 = ctx.r17.u64 + ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x822127C8;
	sub_82219130(ctx, base);
	// b 0x822127f4
	goto loc_822127F4;
loc_822127CC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822127f4
	if (ctx.cr6.eq) goto loc_822127F4;
	// add r11,r21,r19
	ctx.r11.u64 = ctx.r21.u64 + ctx.r19.u64;
	// subf r10,r11,r17
	ctx.r10.s64 = ctx.r17.s64 - ctx.r11.s64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_822127E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x822127e0
	if (!ctx.cr0.eq) goto loc_822127E0;
loc_822127F4:
	// add r17,r30,r17
	ctx.r17.u64 = ctx.r30.u64 + ctx.r17.u64;
loc_822127F8:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82212850
	if (ctx.cr6.eq) goto loc_82212850;
	// subf r11,r31,r16
	ctx.r11.s64 = ctx.r16.s64 - ctx.r31.s64;
	// subf. r8,r15,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r15.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x82212850
	if (!ctx.cr0.gt) goto loc_82212850;
	// cmplw cr6,r17,r27
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8221284c
	if (!ctx.cr6.lt) goto loc_8221284C;
	// subf r11,r17,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r17.s64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82212824
	if (ctx.cr6.gt) goto loc_82212824;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82212824:
	// add r10,r17,r29
	ctx.r10.u64 = ctx.r17.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221284c
	if (ctx.cr6.eq) goto loc_8221284C;
	// li r9,32
	ctx.r9.s64 = 32;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221284c
	if (ctx.cr0.eq) goto loc_8221284C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82212840:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82212840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82212840;
loc_8221284C:
	// add r17,r8,r17
	ctx.r17.u64 = ctx.r8.u64 + ctx.r17.u64;
loc_82212850:
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82211994
	if (!ctx.cr0.eq) goto loc_82211994;
loc_8221285C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82212878
	if (ctx.cr6.eq) goto loc_82212878;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82212874
	if (ctx.cr6.gt) goto loc_82212874;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82212874:
	// stbx r28,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r28.u8);
loc_82212878:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212888"))) PPC_WEAK_FUNC(sub_82212888);
PPC_FUNC_IMPL(__imp__sub_82212888) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822128A4"))) PPC_WEAK_FUNC(sub_822128A4);
PPC_FUNC_IMPL(__imp__sub_822128A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822128A8"))) PPC_WEAK_FUNC(sub_822128A8);
PPC_FUNC_IMPL(__imp__sub_822128A8) {
	PPC_FUNC_PROLOGUE();
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822128B8"))) PPC_WEAK_FUNC(sub_822128B8);
PPC_FUNC_IMPL(__imp__sub_822128B8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822128C0"))) PPC_WEAK_FUNC(sub_822128C0);
PPC_FUNC_IMPL(__imp__sub_822128C0) {
	PPC_FUNC_PROLOGUE();
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ld r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 48);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822128d8
	if (ctx.cr6.eq) goto loc_822128D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822128D8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822128E0"))) PPC_WEAK_FUNC(sub_822128E0);
PPC_FUNC_IMPL(__imp__sub_822128E0) {
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
	// bl 0x82210948
	ctx.lr = 0x822128FC;
	sub_82210948(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82212914"))) PPC_WEAK_FUNC(sub_82212914);
PPC_FUNC_IMPL(__imp__sub_82212914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212918"))) PPC_WEAK_FUNC(sub_82212918);
PPC_FUNC_IMPL(__imp__sub_82212918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82212920;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// ld r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x822129a0
	if (!ctx.cr6.lt) goto loc_822129A0;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// bge cr6,0x8221295c
	if (!ctx.cr6.lt) goto loc_8221295C;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_8221295C:
	// rotlwi r30,r8,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// ld r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82208120
	ctx.lr = 0x82212984;
	sub_82208120(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x822129e8
	if (ctx.cr0.eq) goto loc_822129E8;
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x822129e8
	goto loc_822129E8;
loc_822129A0:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,1600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822129C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822129e8
	if (ctx.cr6.eq) goto loc_822129E8;
	// lwz r3,164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822129E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822129E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822129F4"))) PPC_WEAK_FUNC(sub_822129F4);
PPC_FUNC_IMPL(__imp__sub_822129F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822129F8"))) PPC_WEAK_FUNC(sub_822129F8);
PPC_FUNC_IMPL(__imp__sub_822129F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82205c30
	sub_82205C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212A00"))) PPC_WEAK_FUNC(sub_82212A00);
PPC_FUNC_IMPL(__imp__sub_82212A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x822065d0
	sub_822065D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212A08"))) PPC_WEAK_FUNC(sub_82212A08);
PPC_FUNC_IMPL(__imp__sub_82212A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82212A10;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82212a40
	if (!ctx.cr6.gt) goto loc_82212A40;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82212A40:
	// ld r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82208120
	ctx.lr = 0x82212A6C;
	sub_82208120(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82212ab0
	if (ctx.cr0.eq) goto loc_82212AB0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82205c30
	ctx.lr = 0x82212A88;
	sub_82205C30(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82212ab0
	if (ctx.cr6.eq) goto loc_82212AB0;
	// bl 0x82210520
	ctx.lr = 0x82212A98;
	sub_82210520(ctx, base);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r29,1
	ctx.r29.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_82212AB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212ABC"))) PPC_WEAK_FUNC(sub_82212ABC);
PPC_FUNC_IMPL(__imp__sub_82212ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212AC0"))) PPC_WEAK_FUNC(sub_82212AC0);
PPC_FUNC_IMPL(__imp__sub_82212AC0) {
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
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82212B08"))) PPC_WEAK_FUNC(sub_82212B08);
PPC_FUNC_IMPL(__imp__sub_82212B08) {
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
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x82212b3c
	if (ctx.cr6.gt) goto loc_82212B3C;
	// std r11,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r11.u64);
	// b 0x82212ba4
	goto loc_82212BA4;
loc_82212B3C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r9,9440(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9440);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82212b54
	if (!ctx.cr6.eq) goto loc_82212B54;
	// std r10,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r10.u64);
	// b 0x82212ba4
	goto loc_82212BA4;
loc_82212B54:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r11,1600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212ba0
	if (ctx.cr6.eq) goto loc_82212BA0;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82212BA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82212BA4:
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

__attribute__((alias("__imp__sub_82212BBC"))) PPC_WEAK_FUNC(sub_82212BBC);
PPC_FUNC_IMPL(__imp__sub_82212BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212BC0"))) PPC_WEAK_FUNC(sub_82212BC0);
PPC_FUNC_IMPL(__imp__sub_82212BC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x82212c34
	if (ctx.cr6.gt) goto loc_82212C34;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82208120
	ctx.lr = 0x82212C18;
	sub_82208120(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82212c80
	if (ctx.cr0.eq) goto loc_82212C80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82205c30
	ctx.lr = 0x82212C30;
	sub_82205C30(ctx, base);
	// b 0x82212c80
	goto loc_82212C80;
loc_82212C34:
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// lwz r11,1600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212c80
	if (ctx.cr6.eq) goto loc_82212C80;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82212C80:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
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

__attribute__((alias("__imp__sub_82212C9C"))) PPC_WEAK_FUNC(sub_82212C9C);
PPC_FUNC_IMPL(__imp__sub_82212C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212CA0"))) PPC_WEAK_FUNC(sub_82212CA0);
PPC_FUNC_IMPL(__imp__sub_82212CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82212CA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8220f870
	ctx.lr = 0x82212CC4;
	sub_8220F870(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13688
	ctx.r10.s64 = ctx.r10.s64 + 13688;
	// li r9,41
	ctx.r9.s64 = 41;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// std r11,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r11.u64);
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// std r31,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r31.u64);
	// std r27,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r27.u64);
	// stw r28,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r28.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r11,564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 564);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// std r11,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212D1C"))) PPC_WEAK_FUNC(sub_82212D1C);
PPC_FUNC_IMPL(__imp__sub_82212D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212D20"))) PPC_WEAK_FUNC(sub_82212D20);
PPC_FUNC_IMPL(__imp__sub_82212D20) {
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
	// bl 0x8220f860
	ctx.lr = 0x82212D40;
	sub_8220F860(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82212d50
	if (ctx.cr0.eq) goto loc_82212D50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821200c8
	ctx.lr = 0x82212D50;
	sub_821200C8(ctx, base);
loc_82212D50:
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

__attribute__((alias("__imp__sub_82212D6C"))) PPC_WEAK_FUNC(sub_82212D6C);
PPC_FUNC_IMPL(__imp__sub_82212D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212D70"))) PPC_WEAK_FUNC(sub_82212D70);
PPC_FUNC_IMPL(__imp__sub_82212D70) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// addi r11,r11,8264
	ctx.r11.s64 = ctx.r11.s64 + 8264;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82492d68
	ctx.lr = 0x82212D98;
	sub_82492D68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,7240
	ctx.r11.s64 = ctx.r11.s64 + 7240;
	// addi r10,r10,7152
	ctx.r10.s64 = ctx.r10.s64 + 7152;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82212DC4"))) PPC_WEAK_FUNC(sub_82212DC4);
PPC_FUNC_IMPL(__imp__sub_82212DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212DC8"))) PPC_WEAK_FUNC(sub_82212DC8);
PPC_FUNC_IMPL(__imp__sub_82212DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82212DD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,188
	ctx.r29.s64 = ctx.r31.s64 + 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82212DE8;
	sub_821FD9D8(ctx, base);
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r31,180(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// beq cr6,0x82212e18
	if (ctx.cr6.eq) goto loc_82212E18;
loc_82212E00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82212e18
	if (ctx.cr6.eq) goto loc_82212E18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82212e00
	if (ctx.cr6.lt) goto loc_82212E00;
loc_82212E18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82212E20;
	sub_821FD9E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82212E2C"))) PPC_WEAK_FUNC(sub_82212E2C);
PPC_FUNC_IMPL(__imp__sub_82212E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212E30"))) PPC_WEAK_FUNC(sub_82212E30);
PPC_FUNC_IMPL(__imp__sub_82212E30) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,13720
	ctx.r11.s64 = ctx.r11.s64 + 13720;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82212e5c
	if (ctx.cr0.eq) goto loc_82212E5C;
	// bl 0x821200c8
	ctx.lr = 0x82212E5C;
	sub_821200C8(ctx, base);
loc_82212E5C:
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

__attribute__((alias("__imp__sub_82212E74"))) PPC_WEAK_FUNC(sub_82212E74);
PPC_FUNC_IMPL(__imp__sub_82212E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82212E78"))) PPC_WEAK_FUNC(sub_82212E78);
PPC_FUNC_IMPL(__imp__sub_82212E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82212E80"))) PPC_WEAK_FUNC(sub_82212E80);
PPC_FUNC_IMPL(__imp__sub_82212E80) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82212eb4
	goto loc_82212EB4;
loc_82212E8C:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,42
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 42, ctx.xer);
	// beq cr6,0x82212f20
	if (ctx.cr6.eq) goto loc_82212F20;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82212eac
	if (ctx.cr6.eq) goto loc_82212EAC;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82212ec4
	if (!ctx.cr6.eq) goto loc_82212EC4;
loc_82212EAC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82212EB4:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82212e8c
	if (!ctx.cr0.eq) goto loc_82212E8C;
	// b 0x82212f20
	goto loc_82212F20;
loc_82212EC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82212ECC:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,42
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 42, ctx.xer);
	// bne cr6,0x82212ef8
	if (!ctx.cr6.eq) goto loc_82212EF8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212f30
	if (ctx.cr6.eq) goto loc_82212F30;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// b 0x82212f20
	goto loc_82212F20;
loc_82212EF8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82212f18
	if (ctx.cr6.eq) goto loc_82212F18;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// beq cr6,0x82212f18
	if (ctx.cr6.eq) goto loc_82212F18;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82212f20
	goto loc_82212F20;
loc_82212F18:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82212F20:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82212ecc
	if (!ctx.cr0.eq) goto loc_82212ECC;
	// b 0x82212f3c
	goto loc_82212F3C;
loc_82212F30:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82212F38:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82212F3C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// beq cr6,0x82212f38
	if (ctx.cr6.eq) goto loc_82212F38;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82212F58"))) PPC_WEAK_FUNC(sub_82212F58);
PPC_FUNC_IMPL(__imp__sub_82212F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82212F60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,13736
	ctx.r11.s64 = ctx.r11.s64 + 13736;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82212ffc
	if (ctx.cr6.eq) goto loc_82212FFC;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-4624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4624);
	// bl 0x822014c0
	ctx.lr = 0x82212F90;
	sub_822014C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lwz r30,-17448(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82212FBC;
	sub_821FD9D8(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,-17444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17444);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82212FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82212ffc
	if (ctx.cr6.eq) goto loc_82212FFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82212FFC;
	sub_821FD9E0(ctx, base);
loc_82212FFC:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82213014
	if (ctx.cr0.eq) goto loc_82213014;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f81a8
	ctx.lr = 0x82213014;
	sub_821F81A8(ctx, base);
loc_82213014:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221302c
	if (ctx.cr6.eq) goto loc_8221302C;
	// bl 0x8212d1b8
	ctx.lr = 0x8221302C;
	sub_8212D1B8(ctx, base);
loc_8221302C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213044
	if (ctx.cr6.eq) goto loc_82213044;
	// bl 0x8212d1b8
	ctx.lr = 0x82213044;
	sub_8212D1B8(ctx, base);
loc_82213044:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,13720
	ctx.r11.s64 = ctx.r11.s64 + 13720;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213058"))) PPC_WEAK_FUNC(sub_82213058);
PPC_FUNC_IMPL(__imp__sub_82213058) {
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
	// bl 0x82212f58
	ctx.lr = 0x82213078;
	sub_82212F58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82213088
	if (ctx.cr0.eq) goto loc_82213088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821200c8
	ctx.lr = 0x82213088;
	sub_821200C8(ctx, base);
loc_82213088:
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

__attribute__((alias("__imp__sub_822130A4"))) PPC_WEAK_FUNC(sub_822130A4);
PPC_FUNC_IMPL(__imp__sub_822130A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822130A8"))) PPC_WEAK_FUNC(sub_822130A8);
PPC_FUNC_IMPL(__imp__sub_822130A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x822130B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,13736
	ctx.r11.s64 = ctx.r11.s64 + 13736;
	// stb r26,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r26.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// lwz r11,-17440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17440);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r11,-17440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17440);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// beq cr6,0x82213114
	if (ctx.cr6.eq) goto loc_82213114;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8214bf48
	ctx.lr = 0x82213114;
	sub_8214BF48(ctx, base);
loc_82213114:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822137b8
	ctx.lr = 0x82213120;
	sub_822137B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82146238
	ctx.lr = 0x8221312C;
	sub_82146238(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213144
	if (ctx.cr6.eq) goto loc_82213144;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212d1b8
	ctx.lr = 0x82213144;
	sub_8212D1B8(ctx, base);
loc_82213144:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213158
	if (ctx.cr6.eq) goto loc_82213158;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8221315c
	goto loc_8221315C;
loc_82213158:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8221315C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x822131ac
	if (ctx.cr6.eq) goto loc_822131AC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213188
	if (ctx.cr6.eq) goto loc_82213188;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8221318c
	goto loc_8221318C;
loc_82213188:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8221318C:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x822131ac
	if (ctx.cr6.eq) goto loc_822131AC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-23364
	ctx.r4.s64 = ctx.r11.s64 + -23364;
	// bl 0x8214a3a0
	ctx.lr = 0x822131AC;
	sub_8214A3A0(ctx, base);
loc_822131AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822131C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d020
	ctx.lr = 0x822131CC;
	sub_8212D020(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822131e0
	if (ctx.cr6.eq) goto loc_822131E0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822131e4
	goto loc_822131E4;
loc_822131E0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822131E4:
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x82213208
	if (!ctx.cr6.eq) goto loc_82213208;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,8372
	ctx.r4.s64 = ctx.r11.s64 + 8372;
	// b 0x82213210
	goto loc_82213210;
loc_82213208:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-23360
	ctx.r4.s64 = ctx.r11.s64 + -23360;
loc_82213210:
	// bl 0x8214a3a0
	ctx.lr = 0x82213214;
	sub_8214A3A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// bl 0x8213ecd8
	ctx.lr = 0x82213220;
	sub_8213ECD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821f8248
	ctx.lr = 0x82213228;
	sub_821F8248(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82213348
	if (ctx.cr6.eq) goto loc_82213348;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213258
	if (ctx.cr6.eq) goto loc_82213258;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8221325c
	goto loc_8221325C;
loc_82213258:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8221325C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213284
	if (ctx.cr6.eq) goto loc_82213284;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r1,172
	ctx.r29.s64 = ctx.r1.s64 + 172;
	// bl 0x8213ecd8
	ctx.lr = 0x82213270;
	sub_8213ECD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82212e80
	ctx.lr = 0x82213278;
	sub_82212E80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq 0x82213288
	if (ctx.cr0.eq) goto loc_82213288;
loc_82213284:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82213288:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
loc_8221328C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82213304
	if (!ctx.cr6.eq) goto loc_82213304;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f81f0
	ctx.lr = 0x822132A4;
	sub_821F81F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822132fc
	if (ctx.cr0.eq) goto loc_822132FC;
	// lbz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x822132fc
	if (ctx.cr6.eq) goto loc_822132FC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822132d4
	if (ctx.cr6.eq) goto loc_822132D4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822132d8
	goto loc_822132D8;
loc_822132D4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822132D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213304
	if (ctx.cr6.eq) goto loc_82213304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r25,r1,172
	ctx.r25.s64 = ctx.r1.s64 + 172;
	// bl 0x8213ecd8
	ctx.lr = 0x822132EC;
	sub_8213ECD8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82212e80
	ctx.lr = 0x822132F4;
	sub_82212E80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82213304
	if (!ctx.cr0.eq) goto loc_82213304;
loc_822132FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8221328c
	if (!ctx.cr6.eq) goto loc_8221328C;
loc_82213304:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82213348
	if (ctx.cr0.eq) goto loc_82213348;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8220a510
	ctx.lr = 0x8221331C;
	sub_8220A510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82213aa0
	ctx.lr = 0x82213328;
	sub_82213AA0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213340
	if (ctx.cr6.eq) goto loc_82213340;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x82213340;
	sub_8212D1B8(ctx, base);
loc_82213340:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_82213348:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82213360
	if (!ctx.cr0.eq) goto loc_82213360;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f81a8
	ctx.lr = 0x82213360;
	sub_821F81A8(ctx, base);
loc_82213360:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213378
	if (ctx.cr6.eq) goto loc_82213378;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d1b8
	ctx.lr = 0x82213378;
	sub_8212D1B8(ctx, base);
loc_82213378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213384"))) PPC_WEAK_FUNC(sub_82213384);
PPC_FUNC_IMPL(__imp__sub_82213384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213388"))) PPC_WEAK_FUNC(sub_82213388);
PPC_FUNC_IMPL(__imp__sub_82213388) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82213404
	goto loc_82213404;
loc_822133A4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f81f0
	ctx.lr = 0x822133B4;
	sub_821F81F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// beq 0x82213404
	if (ctx.cr0.eq) goto loc_82213404;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822133e0
	if (ctx.cr6.eq) goto loc_822133E0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822133e4
	goto loc_822133E4;
loc_822133E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822133E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213410
	if (ctx.cr6.eq) goto loc_82213410;
	// addi r30,r1,140
	ctx.r30.s64 = ctx.r1.s64 + 140;
	// bl 0x8213ecd8
	ctx.lr = 0x822133F4;
	sub_8213ECD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82212e80
	ctx.lr = 0x822133FC;
	sub_82212E80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82213410
	if (!ctx.cr0.eq) goto loc_82213410;
loc_82213404:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822133a4
	if (!ctx.cr0.eq) goto loc_822133A4;
loc_82213410:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8221342c
	if (!ctx.cr0.eq) goto loc_8221342C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f81a8
	ctx.lr = 0x82213428;
	sub_821F81A8(ctx, base);
	// b 0x82213460
	goto loc_82213460;
loc_8221342C:
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220a510
	ctx.lr = 0x8221343C;
	sub_8220A510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82213aa0
	ctx.lr = 0x82213448;
	sub_82213AA0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213460
	if (ctx.cr6.eq) goto loc_82213460;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d1b8
	ctx.lr = 0x82213460;
	sub_8212D1B8(ctx, base);
loc_82213460:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
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

__attribute__((alias("__imp__sub_82213478"))) PPC_WEAK_FUNC(sub_82213478);
PPC_FUNC_IMPL(__imp__sub_82213478) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822134d4
	if (ctx.cr6.eq) goto loc_822134D4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822134d4
	if (ctx.cr6.eq) goto loc_822134D4;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf. r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
	// beq 0x822134c4
	if (ctx.cr0.eq) goto loc_822134C4;
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
loc_822134A8:
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x822134dc
	if (ctx.cr6.eq) goto loc_822134DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822134a8
	if (ctx.cr6.lt) goto loc_822134A8;
loc_822134C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822134C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r3,r8,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r8.s64;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822134D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822134DC:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x822134c8
	goto loc_822134C8;
}

__attribute__((alias("__imp__sub_822134E4"))) PPC_WEAK_FUNC(sub_822134E4);
PPC_FUNC_IMPL(__imp__sub_822134E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822134E8"))) PPC_WEAK_FUNC(sub_822134E8);
PPC_FUNC_IMPL(__imp__sub_822134E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x822134F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r29,-17440(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17440);
	// beq cr6,0x8221356c
	if (ctx.cr6.eq) goto loc_8221356C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221351C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lwz r30,-17448(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8221352C;
	sub_821FD9D8(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,-17444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17444);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221355C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221356c
	if (ctx.cr6.eq) goto loc_8221356C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8221356C;
	sub_821FD9E0(ctx, base);
loc_8221356C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213574"))) PPC_WEAK_FUNC(sub_82213574);
PPC_FUNC_IMPL(__imp__sub_82213574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213578"))) PPC_WEAK_FUNC(sub_82213578);
PPC_FUNC_IMPL(__imp__sub_82213578) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// bl 0x82146150
	ctx.lr = 0x822135A0;
	sub_82146150(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82146150
	ctx.lr = 0x822135B4;
	sub_82146150(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x822135c8
	if (!ctx.cr6.eq) goto loc_822135C8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822135dc
	if (!ctx.cr6.eq) goto loc_822135DC;
	// b 0x822135dc
	goto loc_822135DC;
loc_822135C8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822135d8
	if (ctx.cr6.eq) goto loc_822135D8;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x822135dc
	if (!ctx.cr6.gt) goto loc_822135DC;
loc_822135D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822135DC:
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

__attribute__((alias("__imp__sub_822135F4"))) PPC_WEAK_FUNC(sub_822135F4);
PPC_FUNC_IMPL(__imp__sub_822135F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822135F8"))) PPC_WEAK_FUNC(sub_822135F8);
PPC_FUNC_IMPL(__imp__sub_822135F8) {
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
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// bl 0x82146238
	ctx.lr = 0x82213640;
	sub_82146238(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// bl 0x82146238
	ctx.lr = 0x8221364C;
	sub_82146238(ctx, base);
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

__attribute__((alias("__imp__sub_82213668"))) PPC_WEAK_FUNC(sub_82213668);
PPC_FUNC_IMPL(__imp__sub_82213668) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213680
	if (ctx.cr6.eq) goto loc_82213680;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82213684
	goto loc_82213684;
loc_82213680:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82213684:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r10,-1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x822136bc
	if (ctx.cr6.eq) goto loc_822136BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822136a8
	if (ctx.cr6.eq) goto loc_822136A8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822136ac
	goto loc_822136AC;
loc_822136A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822136AC:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r10,-1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_822136BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822136cc
	if (ctx.cr6.eq) goto loc_822136CC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822136d0
	goto loc_822136D0;
loc_822136CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822136D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// b 0x8214b858
	sub_8214B858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822136DC"))) PPC_WEAK_FUNC(sub_822136DC);
PPC_FUNC_IMPL(__imp__sub_822136DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822136E0"))) PPC_WEAK_FUNC(sub_822136E0);
PPC_FUNC_IMPL(__imp__sub_822136E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,13756
	ctx.r11.s64 = ctx.r11.s64 + 13756;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213718
	if (ctx.cr6.eq) goto loc_82213718;
	// bl 0x8212d1b8
	ctx.lr = 0x82213718;
	sub_8212D1B8(ctx, base);
loc_82213718:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213730
	if (ctx.cr6.eq) goto loc_82213730;
	// bl 0x8212d1b8
	ctx.lr = 0x82213730;
	sub_8212D1B8(ctx, base);
loc_82213730:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-28956
	ctx.r11.s64 = ctx.r11.s64 + -28956;
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

__attribute__((alias("__imp__sub_82213750"))) PPC_WEAK_FUNC(sub_82213750);
PPC_FUNC_IMPL(__imp__sub_82213750) {
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
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bf48
	ctx.lr = 0x82213774;
	sub_8214BF48(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213788
	if (ctx.cr6.eq) goto loc_82213788;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8221378c
	goto loc_8221378C;
loc_82213788:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221378C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822137a0
	if (ctx.cr6.eq) goto loc_822137A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82213668
	ctx.lr = 0x822137A0;
	sub_82213668(ctx, base);
loc_822137A0:
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

__attribute__((alias("__imp__sub_822137B8"))) PPC_WEAK_FUNC(sub_822137B8);
PPC_FUNC_IMPL(__imp__sub_822137B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x822137f4
	if (ctx.cr6.eq) goto loc_822137F4;
loc_822137D0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822137d0
	if (!ctx.cr0.eq) goto loc_822137D0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822137f8
	goto loc_822137F8;
loc_822137F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822137F8:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213800"))) PPC_WEAK_FUNC(sub_82213800);
PPC_FUNC_IMPL(__imp__sub_82213800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82213808;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r28,-17448(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// lwz r31,-17440(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17440);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82213828;
	sub_821FD9D8(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,-17444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17444);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8221387c
	if (ctx.cr6.eq) goto loc_8221387C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8221387C;
	sub_821FD9E0(ctx, base);
loc_8221387C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822138b8
	if (ctx.cr6.eq) goto loc_822138B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r11,r11,13756
	ctx.r11.s64 = ctx.r11.s64 + 13756;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,-17440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17440);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lwz r11,-17440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17440);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x822138bc
	goto loc_822138BC;
loc_822138B8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_822138BC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822135f8
	ctx.lr = 0x822138C8;
	sub_822135F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822138D4"))) PPC_WEAK_FUNC(sub_822138D4);
PPC_FUNC_IMPL(__imp__sub_822138D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822138D8"))) PPC_WEAK_FUNC(sub_822138D8);
PPC_FUNC_IMPL(__imp__sub_822138D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x822138E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82146238
	ctx.lr = 0x822138F4;
	sub_82146238(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213908
	if (ctx.cr6.eq) goto loc_82213908;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8221390c
	goto loc_8221390C;
loc_82213908:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221390C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213974
	if (ctx.cr6.eq) goto loc_82213974;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,46
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 46, ctx.xer);
	// beq cr6,0x8221395c
	if (ctx.cr6.eq) goto loc_8221395C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82213478
	ctx.lr = 0x8221393C;
	sub_82213478(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82213954
	if (!ctx.cr6.eq) goto loc_82213954;
	// cmpwi cr6,r30,47
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 47, ctx.xer);
	// beq cr6,0x82213954
	if (ctx.cr6.eq) goto loc_82213954;
	// cmpwi cr6,r30,92
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 92, ctx.xer);
	// bne cr6,0x8221395c
	if (!ctx.cr6.eq) goto loc_8221395C;
loc_82213954:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82213960
	goto loc_82213960;
loc_8221395C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82213960:
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213668
	ctx.lr = 0x82213970;
	sub_82213668(ctx, base);
	// b 0x8221397c
	goto loc_8221397C;
loc_82213974:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
loc_8221397C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221398C"))) PPC_WEAK_FUNC(sub_8221398C);
PPC_FUNC_IMPL(__imp__sub_8221398C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213990"))) PPC_WEAK_FUNC(sub_82213990);
PPC_FUNC_IMPL(__imp__sub_82213990) {
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
	// bl 0x822136e0
	ctx.lr = 0x822139B0;
	sub_822136E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822139c0
	if (ctx.cr0.eq) goto loc_822139C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821200c8
	ctx.lr = 0x822139C0;
	sub_821200C8(ctx, base);
loc_822139C0:
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

__attribute__((alias("__imp__sub_822139DC"))) PPC_WEAK_FUNC(sub_822139DC);
PPC_FUNC_IMPL(__imp__sub_822139DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822139E0"))) PPC_WEAK_FUNC(sub_822139E0);
PPC_FUNC_IMPL(__imp__sub_822139E0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,13756
	ctx.r10.s64 = ctx.r10.s64 + 13756;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r10,-17440(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17440);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,-17440(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17440);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x822138d8
	ctx.lr = 0x82213A30;
	sub_822138D8(ctx, base);
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

__attribute__((alias("__imp__sub_82213A48"))) PPC_WEAK_FUNC(sub_82213A48);
PPC_FUNC_IMPL(__imp__sub_82213A48) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8213ecd8
	ctx.lr = 0x82213A6C;
	sub_8213ECD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201d30
	ctx.lr = 0x82213A80;
	sub_82201D30(ctx, base);
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

__attribute__((alias("__imp__sub_82213A98"))) PPC_WEAK_FUNC(sub_82213A98);
PPC_FUNC_IMPL(__imp__sub_82213A98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8213ecd8
	sub_8213ECD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213AA0"))) PPC_WEAK_FUNC(sub_82213AA0);
PPC_FUNC_IMPL(__imp__sub_82213AA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822138d8
	sub_822138D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213AA4"))) PPC_WEAK_FUNC(sub_82213AA4);
PPC_FUNC_IMPL(__imp__sub_82213AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213AA8"))) PPC_WEAK_FUNC(sub_82213AA8);
PPC_FUNC_IMPL(__imp__sub_82213AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82213AB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213ad8
	if (ctx.cr6.eq) goto loc_82213AD8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82213adc
	goto loc_82213ADC;
loc_82213AD8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82213ADC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82213b28
	if (!ctx.cr6.eq) goto loc_82213B28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213b20
	if (ctx.cr6.eq) goto loc_82213B20;
loc_82213AF8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82213af8
	if (!ctx.cr0.eq) goto loc_82213AF8;
loc_82213B14:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82213b80
	goto loc_82213B80;
loc_82213B20:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// b 0x82213b80
	goto loc_82213B80;
loc_82213B28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82213578
	ctx.lr = 0x82213B30;
	sub_82213578(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82213b70
	if (!ctx.cr6.eq) goto loc_82213B70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213b20
	if (ctx.cr6.eq) goto loc_82213B20;
loc_82213B50:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82213b50
	if (!ctx.cr0.eq) goto loc_82213B50;
	// b 0x82213b14
	goto loc_82213B14;
loc_82213B70:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821461c0
	ctx.lr = 0x82213B80;
	sub_821461C0(ctx, base);
loc_82213B80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213B8C"))) PPC_WEAK_FUNC(sub_82213B8C);
PPC_FUNC_IMPL(__imp__sub_82213B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213B90"))) PPC_WEAK_FUNC(sub_82213B90);
PPC_FUNC_IMPL(__imp__sub_82213B90) {
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
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8214a3a0
	ctx.lr = 0x82213BAC;
	sub_8214A3A0(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82213BC8"))) PPC_WEAK_FUNC(sub_82213BC8);
PPC_FUNC_IMPL(__imp__sub_82213BC8) {
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
	// addi r5,r4,20
	ctx.r5.s64 = ctx.r4.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82213aa8
	ctx.lr = 0x82213BE4;
	sub_82213AA8(ctx, base);
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

__attribute__((alias("__imp__sub_82213BFC"))) PPC_WEAK_FUNC(sub_82213BFC);
PPC_FUNC_IMPL(__imp__sub_82213BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213C00"))) PPC_WEAK_FUNC(sub_82213C00);
PPC_FUNC_IMPL(__imp__sub_82213C00) {
	PPC_FUNC_PROLOGUE();
	// li r11,60
	ctx.r11.s64 = 60;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213C0C"))) PPC_WEAK_FUNC(sub_82213C0C);
PPC_FUNC_IMPL(__imp__sub_82213C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213C10"))) PPC_WEAK_FUNC(sub_82213C10);
PPC_FUNC_IMPL(__imp__sub_82213C10) {
	PPC_FUNC_PROLOGUE();
	// li r11,62
	ctx.r11.s64 = 62;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213C1C"))) PPC_WEAK_FUNC(sub_82213C1C);
PPC_FUNC_IMPL(__imp__sub_82213C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213C20"))) PPC_WEAK_FUNC(sub_82213C20);
PPC_FUNC_IMPL(__imp__sub_82213C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,3844
	ctx.r11.s64 = ctx.r11.s64 + 3844;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213C30"))) PPC_WEAK_FUNC(sub_82213C30);
PPC_FUNC_IMPL(__imp__sub_82213C30) {
	PPC_FUNC_PROLOGUE();
	// li r11,60
	ctx.r11.s64 = 60;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213C3C"))) PPC_WEAK_FUNC(sub_82213C3C);
PPC_FUNC_IMPL(__imp__sub_82213C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213C40"))) PPC_WEAK_FUNC(sub_82213C40);
PPC_FUNC_IMPL(__imp__sub_82213C40) {
	PPC_FUNC_PROLOGUE();
	// li r11,62
	ctx.r11.s64 = 62;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213C4C"))) PPC_WEAK_FUNC(sub_82213C4C);
PPC_FUNC_IMPL(__imp__sub_82213C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213C50"))) PPC_WEAK_FUNC(sub_82213C50);
PPC_FUNC_IMPL(__imp__sub_82213C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,3856
	ctx.r11.s64 = ctx.r11.s64 + 3856;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82213C60"))) PPC_WEAK_FUNC(sub_82213C60);
PPC_FUNC_IMPL(__imp__sub_82213C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82213C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82213c80
	if (!ctx.cr6.eq) goto loc_82213C80;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lwz r30,-17440(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17440);
loc_82213C80:
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lwz r31,-17448(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82213C90;
	sub_821FD9D8(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,-17444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17444);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82213ce0
	if (ctx.cr6.eq) goto loc_82213CE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82213CE0;
	sub_821FD9E0(ctx, base);
loc_82213CE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82213cf8
	if (ctx.cr6.eq) goto loc_82213CF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82216618
	ctx.lr = 0x82213CF4;
	sub_82216618(ctx, base);
	// b 0x82213cfc
	goto loc_82213CFC;
loc_82213CF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213CFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213D04"))) PPC_WEAK_FUNC(sub_82213D04);
PPC_FUNC_IMPL(__imp__sub_82213D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213D08"))) PPC_WEAK_FUNC(sub_82213D08);
PPC_FUNC_IMPL(__imp__sub_82213D08) {
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
	// bl 0x821fd9e8
	ctx.lr = 0x82213D20;
	sub_821FD9E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82213D40"))) PPC_WEAK_FUNC(sub_82213D40);
PPC_FUNC_IMPL(__imp__sub_82213D40) {
	PPC_FUNC_PROLOGUE();
	// b 0x82492d68
	sub_82492D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213D44"))) PPC_WEAK_FUNC(sub_82213D44);
PPC_FUNC_IMPL(__imp__sub_82213D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213D48"))) PPC_WEAK_FUNC(sub_82213D48);
PPC_FUNC_IMPL(__imp__sub_82213D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82213D50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82213da8
	if (!ctx.cr6.gt) goto loc_82213DA8;
loc_82213D6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82213dac
	if (!ctx.cr0.gt) goto loc_82213DAC;
	// subf. r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// beq 0x82213da0
	if (ctx.cr0.eq) goto loc_82213DA0;
	// bl 0x8220f9b0
	ctx.lr = 0x82213DA0;
	sub_8220F9B0(ctx, base);
loc_82213DA0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82213d6c
	if (ctx.cr6.gt) goto loc_82213D6C;
loc_82213DA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82213DAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213DB4"))) PPC_WEAK_FUNC(sub_82213DB4);
PPC_FUNC_IMPL(__imp__sub_82213DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213DB8"))) PPC_WEAK_FUNC(sub_82213DB8);
PPC_FUNC_IMPL(__imp__sub_82213DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82213DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82213e30
	if (!ctx.cr6.gt) goto loc_82213E30;
loc_82213DDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82213e20
	if (ctx.cr0.gt) goto loc_82213E20;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x82213e3c
	if (!ctx.cr6.eq) goto loc_82213E3C;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x8220f9a8
	ctx.lr = 0x82213E14;
	sub_8220F9A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82213e28
	goto loc_82213E28;
loc_82213E20:
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_82213E28:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82213ddc
	if (ctx.cr6.gt) goto loc_82213DDC;
loc_82213E30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82213E34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82213E3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82213e34
	goto loc_82213E34;
}

__attribute__((alias("__imp__sub_82213E44"))) PPC_WEAK_FUNC(sub_82213E44);
PPC_FUNC_IMPL(__imp__sub_82213E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82213E48"))) PPC_WEAK_FUNC(sub_82213E48);
PPC_FUNC_IMPL(__imp__sub_82213E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82213E50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82213e84
	if (!ctx.cr0.eq) goto loc_82213E84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82213ed8
	goto loc_82213ED8;
loc_82213E84:
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x8212d2b0
	ctx.lr = 0x82213E8C;
	sub_8212D2B0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,8,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r11,1(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x82213db8
	ctx.lr = 0x82213ECC;
	sub_82213DB8(ctx, base);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82213ED8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82213EE0"))) PPC_WEAK_FUNC(sub_82213EE0);
PPC_FUNC_IMPL(__imp__sub_82213EE0) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82213e48
	ctx.lr = 0x82213F08;
	sub_82213E48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82213f3c
	if (ctx.cr0.eq) goto loc_82213F3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82213f40
	goto loc_82213F40;
loc_82213F3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213F40:
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

__attribute__((alias("__imp__sub_82213F58"))) PPC_WEAK_FUNC(sub_82213F58);
PPC_FUNC_IMPL(__imp__sub_82213F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82213F60;
	__savegprlr_26(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82213F80;
	sub_821FD9D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,8088
	ctx.r5.s64 = 8088;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82214060
	if (ctx.cr0.eq) goto loc_82214060;
	// li r10,27
	ctx.r10.s64 = 27;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq 0x82213fc8
	if (ctx.cr0.eq) goto loc_82213FC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,8788
	ctx.r9.s64 = ctx.r11.s64 + 8788;
	// b 0x82213fd0
	goto loc_82213FD0;
loc_82213FC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,8780
	ctx.r9.s64 = ctx.r11.s64 + 8780;
loc_82213FD0:
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r28,r11,4
	ctx.r28.u64 = ctx.r11.u64 | 4;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,-4268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4268);
	// addi r7,r10,13824
	ctx.r7.s64 = ctx.r10.s64 + 13824;
	// addi r5,r8,13796
	ctx.r5.s64 = ctx.r8.s64 + 13796;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,114
	ctx.r3.s64 = ctx.r1.s64 + 114;
	// bl 0x82210dc8
	ctx.lr = 0x8221400C;
	sub_82210DC8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213ee0
	ctx.lr = 0x82214020;
	sub_82213EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221403c
	if (ctx.cr0.eq) goto loc_8221403C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8221403c
	if (ctx.cr6.lt) goto loc_8221403C;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82214044
	if (ctx.cr6.eq) goto loc_82214044;
loc_8221403C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
loc_82214044:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82214068
	if (ctx.cr0.eq) goto loc_82214068;
	// lwz r11,-4268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4268);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4268(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4268, ctx.r11.u32);
	// b 0x82214068
	goto loc_82214068;
loc_82214060:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
loc_82214068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// bl 0x821fd9e0
	ctx.lr = 0x82214074;
	sub_821FD9E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214080"))) PPC_WEAK_FUNC(sub_82214080);
PPC_FUNC_IMPL(__imp__sub_82214080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82214088;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,8404
	ctx.r10.s64 = ctx.r10.s64 + 8404;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,8788
	ctx.r5.s64 = ctx.r11.s64 + 8788;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8220cd30
	ctx.lr = 0x822140D4;
	sub_8220CD30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82214118
	if (!ctx.cr0.eq) goto loc_82214118;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r9,8780
	ctx.r5.s64 = ctx.r9.s64 + 8780;
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8220cd30
	ctx.lr = 0x8221410C;
	sub_8220CD30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82214118
	if (ctx.cr0.eq) goto loc_82214118;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82214118:
	// li r4,62
	ctx.r4.s64 = 62;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201e08
	ctx.lr = 0x82214128;
	sub_82201E08(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82214144
	if (!ctx.cr0.eq) goto loc_82214144;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220aed0
	ctx.lr = 0x82214140;
	sub_8220AED0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82214144:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221415C"))) PPC_WEAK_FUNC(sub_8221415C);
PPC_FUNC_IMPL(__imp__sub_8221415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214160"))) PPC_WEAK_FUNC(sub_82214160);
PPC_FUNC_IMPL(__imp__sub_82214160) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214168"))) PPC_WEAK_FUNC(sub_82214168);
PPC_FUNC_IMPL(__imp__sub_82214168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82214170;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r27,-32029
	ctx.r27.s64 = -2099052544;
	// addi r11,r11,13828
	ctx.r11.s64 = ctx.r11.s64 + 13828;
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221420c
	if (ctx.cr6.eq) goto loc_8221420C;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-4624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4624);
	// bl 0x822014c0
	ctx.lr = 0x822141A8;
	sub_822014C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822141C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,-17448(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17448);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x822141D0;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822141FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221420c
	if (ctx.cr6.eq) goto loc_8221420C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8221420C;
	sub_821FD9E0(ctx, base);
loc_8221420C:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addi r25,r28,52
	ctx.r25.s64 = ctx.r28.s64 + 52;
	// addi r4,r25,4
	ctx.r4.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214228
	if (ctx.cr6.eq) goto loc_82214228;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8212d1b8
	ctx.lr = 0x82214228;
	sub_8212D1B8(ctx, base);
loc_82214228:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221423C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r29,-17440(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17440);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822142b0
	if (ctx.cr6.eq) goto loc_822142B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,-17448(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17448);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82214274;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822142A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822142b0
	if (ctx.cr6.eq) goto loc_822142B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x822142B0;
	sub_821FD9E0(ctx, base);
loc_822142B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r28,72
	ctx.r3.s64 = ctx.r28.s64 + 72;
	// stb r11,49(r28)
	PPC_STORE_U8(ctx.r28.u32 + 49, ctx.r11.u8);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822142d0
	if (ctx.cr6.eq) goto loc_822142D0;
	// bl 0x8212d1b8
	ctx.lr = 0x822142D0;
	sub_8212D1B8(ctx, base);
loc_822142D0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r25,4
	ctx.r4.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822142e8
	if (ctx.cr6.eq) goto loc_822142E8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8212d1b8
	ctx.lr = 0x822142E8;
	sub_8212D1B8(ctx, base);
loc_822142E8:
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// bl 0x82213d40
	ctx.lr = 0x822142F0;
	sub_82213D40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,13720
	ctx.r11.s64 = ctx.r11.s64 + 13720;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214304"))) PPC_WEAK_FUNC(sub_82214304);
PPC_FUNC_IMPL(__imp__sub_82214304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214308"))) PPC_WEAK_FUNC(sub_82214308);
PPC_FUNC_IMPL(__imp__sub_82214308) {
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
	// bl 0x82214168
	ctx.lr = 0x82214328;
	sub_82214168(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82214338
	if (ctx.cr0.eq) goto loc_82214338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821200c8
	ctx.lr = 0x82214338;
	sub_821200C8(ctx, base);
loc_82214338:
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

__attribute__((alias("__imp__sub_82214354"))) PPC_WEAK_FUNC(sub_82214354);
PPC_FUNC_IMPL(__imp__sub_82214354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214358"))) PPC_WEAK_FUNC(sub_82214358);
PPC_FUNC_IMPL(__imp__sub_82214358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82214360;
	__savegprlr_28(ctx, base);
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82214548
	if (ctx.cr0.eq) goto loc_82214548;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,129
	ctx.r3.s64 = ctx.r1.s64 + 129;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// bl 0x82218a80
	ctx.lr = 0x82214390;
	sub_82218A80(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// bl 0x822137b8
	ctx.lr = 0x822143A4;
	sub_822137B8(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x822143A8;
	sub_8213ECD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82214080
	ctx.lr = 0x822143B8;
	sub_82214080(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822143d4
	if (ctx.cr6.eq) goto loc_822143D4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8212d1b8
	ctx.lr = 0x822143D4;
	sub_8212D1B8(ctx, base);
loc_822143D4:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82214414
	if (!ctx.cr0.eq) goto loc_82214414;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,1720
	ctx.r11.s64 = ctx.r11.s64 + 1720;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82213f58
	ctx.lr = 0x82214404;
	sub_82213F58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82214414
	if (ctx.cr0.eq) goto loc_82214414;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
loc_82214414:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82214534
	if (ctx.cr0.eq) goto loc_82214534;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r10,27
	ctx.r10.s64 = 27;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214440
	if (ctx.cr6.eq) goto loc_82214440;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82214444
	goto loc_82214444;
loc_82214440:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82214444:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214458
	if (ctx.cr6.eq) goto loc_82214458;
	// bl 0x8213ecd8
	ctx.lr = 0x82214450;
	sub_8213ECD8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x82214460
	goto loc_82214460;
loc_82214458:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r7,r11,13434
	ctx.r7.s64 = ctx.r11.s64 + 13434;
loc_82214460:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r5,r11,13848
	ctx.r5.s64 = ctx.r11.s64 + 13848;
	// addi r3,r1,386
	ctx.r3.s64 = ctx.r1.s64 + 386;
	// bl 0x82210dc8
	ctx.lr = 0x82214478;
	sub_82210DC8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82213ee0
	ctx.lr = 0x8221448C;
	sub_82213EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82214498
	if (!ctx.cr0.eq) goto loc_82214498;
	// stb r28,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r28.u8);
loc_82214498:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822144b4
	if (!ctx.cr6.lt) goto loc_822144B4;
	// stb r28,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r28.u8);
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// bl 0x82201c70
	ctx.lr = 0x822144B0;
	sub_82201C70(ctx, base);
	// b 0x82214568
	goto loc_82214568;
loc_822144B4:
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8213ecd8
	ctx.lr = 0x822144BC;
	sub_8213ECD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82201d30
	ctx.lr = 0x822144D0;
	sub_82201D30(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822144e4
	if (ctx.cr6.eq) goto loc_822144E4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822144e8
	goto loc_822144E8;
loc_822144E4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_822144E8:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82213d48
	ctx.lr = 0x82214500;
	sub_82213D48(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212d020
	ctx.lr = 0x8221450C;
	sub_8212D020(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82213aa0
	ctx.lr = 0x82214518;
	sub_82213AA0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214568
	if (ctx.cr6.eq) goto loc_82214568;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212d1b8
	ctx.lr = 0x82214530;
	sub_8212D1B8(ctx, base);
	// b 0x82214568
	goto loc_82214568;
loc_82214534:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r28,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82214554
	goto loc_82214554;
loc_82214548:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82214554:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82214568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82214568:
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214570"))) PPC_WEAK_FUNC(sub_82214570);
PPC_FUNC_IMPL(__imp__sub_82214570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82214578;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,13828
	ctx.r11.s64 = ctx.r11.s64 + 13828;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82213d08
	ctx.lr = 0x822145A4;
	sub_82213D08(ctx, base);
	// lis r28,-32029
	ctx.r28.s64 = -2099052544;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,-17440(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17440);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// lwz r10,-17440(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17440);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// beq cr6,0x822145f0
	if (ctx.cr6.eq) goto loc_822145F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8214bf48
	ctx.lr = 0x822145F0;
	sub_8214BF48(ctx, base);
loc_822145F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822137b8
	ctx.lr = 0x822145FC;
	sub_822137B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82146238
	ctx.lr = 0x82214608;
	sub_82146238(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214620
	if (ctx.cr6.eq) goto loc_82214620;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d1b8
	ctx.lr = 0x82214620;
	sub_8212D1B8(ctx, base);
loc_82214620:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82213478
	ctx.lr = 0x82214630;
	sub_82213478(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82213478
	ctx.lr = 0x82214644;
	sub_82213478(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82214650
	if (!ctx.cr6.gt) goto loc_82214650;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82214650:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82214670
	if (ctx.cr6.lt) goto loc_82214670;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214b858
	ctx.lr = 0x82214668;
	sub_8214B858(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
loc_82214670:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,-17440(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17440);
	// bl 0x82213c60
	ctx.lr = 0x8221467C;
	sub_82213C60(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82214358
	ctx.lr = 0x82214688;
	sub_82214358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214694"))) PPC_WEAK_FUNC(sub_82214694);
PPC_FUNC_IMPL(__imp__sub_82214694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214698"))) PPC_WEAK_FUNC(sub_82214698);
PPC_FUNC_IMPL(__imp__sub_82214698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x822146A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,256
	ctx.r5.s64 = 256;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82201d30
	ctx.lr = 0x822146D8;
	sub_82201D30(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8212d2b0
	ctx.lr = 0x822146E4;
	sub_8212D2B0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subfic r6,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r6.s64 = 256 - ctx.r11.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82201d30
	ctx.lr = 0x82214700;
	sub_82201D30(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// beq 0x8221471c
	if (ctx.cr0.eq) goto loc_8221471C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-4612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4612);
	// bl 0x82202430
	ctx.lr = 0x8221471C;
	sub_82202430(ctx, base);
loc_8221471C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-4612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4612);
	// bl 0x822027f0
	ctx.lr = 0x82214728;
	sub_822027F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214730"))) PPC_WEAK_FUNC(sub_82214730);
PPC_FUNC_IMPL(__imp__sub_82214730) {
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
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,1720
	ctx.r30.s64 = ctx.r11.s64 + 1720;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r31,2544
	ctx.r3.s64 = ctx.r31.s64 + 2544;
	// addi r4,r10,-23304
	ctx.r4.s64 = ctx.r10.s64 + -23304;
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x82214698
	ctx.lr = 0x82214764;
	sub_82214698(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r3,r31,2820
	ctx.r3.s64 = ctx.r31.s64 + 2820;
	// addi r4,r11,13880
	ctx.r4.s64 = ctx.r11.s64 + 13880;
	// bl 0x82214698
	ctx.lr = 0x82214778;
	sub_82214698(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,3096
	ctx.r3.s64 = ctx.r31.s64 + 3096;
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r4,r11,13872
	ctx.r4.s64 = ctx.r11.s64 + 13872;
	// bl 0x82214698
	ctx.lr = 0x8221478C;
	sub_82214698(ctx, base);
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

__attribute__((alias("__imp__sub_822147A4"))) PPC_WEAK_FUNC(sub_822147A4);
PPC_FUNC_IMPL(__imp__sub_822147A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822147A8"))) PPC_WEAK_FUNC(sub_822147A8);
PPC_FUNC_IMPL(__imp__sub_822147A8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822147B0"))) PPC_WEAK_FUNC(sub_822147B0);
PPC_FUNC_IMPL(__imp__sub_822147B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82216b98
	sub_82216B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822147B8"))) PPC_WEAK_FUNC(sub_822147B8);
PPC_FUNC_IMPL(__imp__sub_822147B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822147C8"))) PPC_WEAK_FUNC(sub_822147C8);
PPC_FUNC_IMPL(__imp__sub_822147C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// addi r3,r11,-4240
	ctx.r3.s64 = ctx.r11.s64 + -4240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822147D4"))) PPC_WEAK_FUNC(sub_822147D4);
PPC_FUNC_IMPL(__imp__sub_822147D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822147D8"))) PPC_WEAK_FUNC(sub_822147D8);
PPC_FUNC_IMPL(__imp__sub_822147D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x822147E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lbz r30,182(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 182);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8222e850
	ctx.lr = 0x822147FC;
	sub_8222E850(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr. r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r9.u8);
	// bne 0x8221481c
	if (!ctx.cr0.eq) goto loc_8221481C;
	// clrlwi. r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x82214820
	if (!ctx.cr0.eq) goto loc_82214820;
loc_8221481C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82214820:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214838
	if (ctx.cr6.eq) goto loc_82214838;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8221483c
	if (ctx.cr0.eq) goto loc_8221483C;
loc_82214838:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221483C:
	// clrlwi. r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8221485c
	if (ctx.cr0.eq) goto loc_8221485C;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8222e848
	ctx.lr = 0x8221485C;
	sub_8222E848(ctx, base);
loc_8221485C:
	// lbz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221487c
	if (ctx.cr0.eq) goto loc_8221487C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221487C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221487C:
	// lbz r10,182(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 182);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subfic r9,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r30.s64;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822148B8"))) PPC_WEAK_FUNC(sub_822148B8);
PPC_FUNC_IMPL(__imp__sub_822148B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82216d00
	ctx.lr = 0x822148D8;
	sub_82216D00(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82214bf8
	if (ctx.cr6.eq) goto loc_82214BF8;
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x82214920;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x82214944;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x82214968;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x8221498C;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x822149B0;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x822149D4;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x822149F8;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x82214A1C;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82216908
	ctx.lr = 0x82214A40;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x82214A64;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x82214A88;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x82214AAC;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x82214AD0;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x82214AF4;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82216908
	ctx.lr = 0x82214B18;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// lbz r5,26(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// bl 0x82216908
	ctx.lr = 0x82214B2C;
	sub_82216908(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// lbz r5,27(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// bl 0x82216908
	ctx.lr = 0x82214B40;
	sub_82216908(ctx, base);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,-30952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30952);
	ctx.f31.f64 = double(temp.f32);
	// lha r10,28(r10)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 28));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x822169d0
	ctx.lr = 0x82214B74;
	sub_822169D0(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 30));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x822169d0
	ctx.lr = 0x82214BA0;
	sub_822169D0(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lha r11,32(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 32));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x822169d0
	ctx.lr = 0x82214BCC;
	sub_822169D0(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lha r11,34(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 34));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x822169d0
	ctx.lr = 0x82214BF8;
	sub_822169D0(ctx, base);
loc_82214BF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82214C14"))) PPC_WEAK_FUNC(sub_82214C14);
PPC_FUNC_IMPL(__imp__sub_82214C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214C18"))) PPC_WEAK_FUNC(sub_82214C18);
PPC_FUNC_IMPL(__imp__sub_82214C18) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-4240
	ctx.r31.s64 = ctx.r11.s64 + -4240;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82216ab0
	ctx.lr = 0x82214C40;
	sub_82216AB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82216ae0
	ctx.lr = 0x82214C4C;
	sub_82216AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82216940
	ctx.lr = 0x82214C5C;
	sub_82216940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82216a88
	ctx.lr = 0x82214C6C;
	sub_82216A88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82216a88
	ctx.lr = 0x82214C7C;
	sub_82216A88(ctx, base);
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

__attribute__((alias("__imp__sub_82214C90"))) PPC_WEAK_FUNC(sub_82214C90);
PPC_FUNC_IMPL(__imp__sub_82214C90) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,209(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 209);
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// beq 0x82214cd4
	if (ctx.cr0.eq) goto loc_82214CD4;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// sth r11,36(r10)
	PPC_STORE_U16(ctx.r10.u32 + 36, ctx.r11.u16);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// b 0x82214ce0
	goto loc_82214CE0;
loc_82214CD4:
	// sth r11,36(r10)
	PPC_STORE_U16(ctx.r10.u32 + 36, ctx.r11.u16);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// sth r11,38(r10)
	PPC_STORE_U16(ctx.r10.u32 + 38, ctx.r11.u16);
loc_82214CE0:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x8222e860
	ctx.lr = 0x82214CF0;
	sub_8222E860(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82214d00
	if (ctx.cr0.eq) goto loc_82214D00;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
loc_82214D00:
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

__attribute__((alias("__imp__sub_82214D14"))) PPC_WEAK_FUNC(sub_82214D14);
PPC_FUNC_IMPL(__imp__sub_82214D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214D18"))) PPC_WEAK_FUNC(sub_82214D18);
PPC_FUNC_IMPL(__imp__sub_82214D18) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,13944
	ctx.r11.s64 = ctx.r11.s64 + 13944;
	// addi r10,r10,13888
	ctx.r10.s64 = ctx.r10.s64 + 13888;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// stw r9,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r9.u32);
	// bl 0x821fe640
	ctx.lr = 0x82214D54;
	sub_821FE640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217168
	ctx.lr = 0x82214D5C;
	sub_82217168(ctx, base);
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

__attribute__((alias("__imp__sub_82214D70"))) PPC_WEAK_FUNC(sub_82214D70);
PPC_FUNC_IMPL(__imp__sub_82214D70) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,181(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 181);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214D78"))) PPC_WEAK_FUNC(sub_82214D78);
PPC_FUNC_IMPL(__imp__sub_82214D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// lbz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 120);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214D98"))) PPC_WEAK_FUNC(sub_82214D98);
PPC_FUNC_IMPL(__imp__sub_82214D98) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214DA4"))) PPC_WEAK_FUNC(sub_82214DA4);
PPC_FUNC_IMPL(__imp__sub_82214DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214DA8"))) PPC_WEAK_FUNC(sub_82214DA8);
PPC_FUNC_IMPL(__imp__sub_82214DA8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214DB8"))) PPC_WEAK_FUNC(sub_82214DB8);
PPC_FUNC_IMPL(__imp__sub_82214DB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214DC0"))) PPC_WEAK_FUNC(sub_82214DC0);
PPC_FUNC_IMPL(__imp__sub_82214DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214DC8"))) PPC_WEAK_FUNC(sub_82214DC8);
PPC_FUNC_IMPL(__imp__sub_82214DC8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214DD8"))) PPC_WEAK_FUNC(sub_82214DD8);
PPC_FUNC_IMPL(__imp__sub_82214DD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214DE0"))) PPC_WEAK_FUNC(sub_82214DE0);
PPC_FUNC_IMPL(__imp__sub_82214DE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214DE8"))) PPC_WEAK_FUNC(sub_82214DE8);
PPC_FUNC_IMPL(__imp__sub_82214DE8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214DF8"))) PPC_WEAK_FUNC(sub_82214DF8);
PPC_FUNC_IMPL(__imp__sub_82214DF8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214E00"))) PPC_WEAK_FUNC(sub_82214E00);
PPC_FUNC_IMPL(__imp__sub_82214E00) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,182(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 182);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214E08"))) PPC_WEAK_FUNC(sub_82214E08);
PPC_FUNC_IMPL(__imp__sub_82214E08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82216bb8
	sub_82216BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214E10"))) PPC_WEAK_FUNC(sub_82214E10);
PPC_FUNC_IMPL(__imp__sub_82214E10) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82216968
	sub_82216968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214E1C"))) PPC_WEAK_FUNC(sub_82214E1C);
PPC_FUNC_IMPL(__imp__sub_82214E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214E20"))) PPC_WEAK_FUNC(sub_82214E20);
PPC_FUNC_IMPL(__imp__sub_82214E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 + 148;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214E48"))) PPC_WEAK_FUNC(sub_82214E48);
PPC_FUNC_IMPL(__imp__sub_82214E48) {
	PPC_FUNC_PROLOGUE();
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214E50"))) PPC_WEAK_FUNC(sub_82214E50);
PPC_FUNC_IMPL(__imp__sub_82214E50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214E58"))) PPC_WEAK_FUNC(sub_82214E58);
PPC_FUNC_IMPL(__imp__sub_82214E58) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,182(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 182);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214E6C"))) PPC_WEAK_FUNC(sub_82214E6C);
PPC_FUNC_IMPL(__imp__sub_82214E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214E70"))) PPC_WEAK_FUNC(sub_82214E70);
PPC_FUNC_IMPL(__imp__sub_82214E70) {
	PPC_FUNC_PROLOGUE();
	// stb r4,181(r3)
	PPC_STORE_U8(ctx.r3.u32 + 181, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82214E78"))) PPC_WEAK_FUNC(sub_82214E78);
PPC_FUNC_IMPL(__imp__sub_82214E78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82214fd8
	sub_82214FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214E80"))) PPC_WEAK_FUNC(sub_82214E80);
PPC_FUNC_IMPL(__imp__sub_82214E80) {
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
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lis r31,-32029
	ctx.r31.s64 = -2099052544;
	// lwz r11,-4260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4260);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82214ec0
	if (!ctx.cr0.eq) goto loc_82214EC0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-4260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4260, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r9,-4264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4264, ctx.r9.u32);
	// addi r3,r11,-27112
	ctx.r3.s64 = ctx.r11.s64 + -27112;
	// bl 0x82218998
	ctx.lr = 0x82214EC0;
	sub_82218998(ctx, base);
loc_82214EC0:
	// lwz r3,-4264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82214edc
	if (!ctx.cr6.eq) goto loc_82214EDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14084
	ctx.r3.s64 = ctx.r11.s64 + 14084;
	// bl 0x82217410
	ctx.lr = 0x82214ED8;
	sub_82217410(ctx, base);
	// stw r3,-4264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4264, ctx.r3.u32);
loc_82214EDC:
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

__attribute__((alias("__imp__sub_82214EF0"))) PPC_WEAK_FUNC(sub_82214EF0);
PPC_FUNC_IMPL(__imp__sub_82214EF0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82214e80
	ctx.lr = 0x82214F08;
	sub_82214E80(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82214F28"))) PPC_WEAK_FUNC(sub_82214F28);
PPC_FUNC_IMPL(__imp__sub_82214F28) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82124828
	ctx.lr = 0x82214F40;
	sub_82124828(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82214f50
	if (!ctx.cr6.eq) goto loc_82214F50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82214f60
	goto loc_82214F60;
loc_82214F50:
	// bl 0x82214e80
	ctx.lr = 0x82214F54;
	sub_82214E80(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82214F60:
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

__attribute__((alias("__imp__sub_82214F74"))) PPC_WEAK_FUNC(sub_82214F74);
PPC_FUNC_IMPL(__imp__sub_82214F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214F78"))) PPC_WEAK_FUNC(sub_82214F78);
PPC_FUNC_IMPL(__imp__sub_82214F78) {
	PPC_FUNC_PROLOGUE();
	// b 0x821247b8
	sub_821247B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82214F7C"))) PPC_WEAK_FUNC(sub_82214F7C);
PPC_FUNC_IMPL(__imp__sub_82214F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82214F80"))) PPC_WEAK_FUNC(sub_82214F80);
PPC_FUNC_IMPL(__imp__sub_82214F80) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821247b8
	ctx.lr = 0x82214F98;
	sub_821247B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82214fa8
	if (!ctx.cr6.eq) goto loc_82214FA8;
loc_82214FA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82214fc4
	goto loc_82214FC4;
loc_82214FA8:
	// bl 0x82124828
	ctx.lr = 0x82214FAC;
	sub_82124828(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82214fa0
	if (ctx.cr6.eq) goto loc_82214FA0;
	// bl 0x82214e80
	ctx.lr = 0x82214FB8;
	sub_82214E80(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82214FC4:
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

__attribute__((alias("__imp__sub_82214FD8"))) PPC_WEAK_FUNC(sub_82214FD8);
PPC_FUNC_IMPL(__imp__sub_82214FD8) {
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
	// bl 0x82214d18
	ctx.lr = 0x82214FF8;
	sub_82214D18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215008
	if (ctx.cr0.eq) goto loc_82215008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821200c8
	ctx.lr = 0x82215008;
	sub_821200C8(ctx, base);
loc_82215008:
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

__attribute__((alias("__imp__sub_82215024"))) PPC_WEAK_FUNC(sub_82215024);
PPC_FUNC_IMPL(__imp__sub_82215024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215028"))) PPC_WEAK_FUNC(sub_82215028);
PPC_FUNC_IMPL(__imp__sub_82215028) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82215030"))) PPC_WEAK_FUNC(sub_82215030);
PPC_FUNC_IMPL(__imp__sub_82215030) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82215298
	sub_82215298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215038"))) PPC_WEAK_FUNC(sub_82215038);
PPC_FUNC_IMPL(__imp__sub_82215038) {
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
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lis r31,-32029
	ctx.r31.s64 = -2099052544;
	// lwz r11,-4252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4252);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82215078
	if (!ctx.cr0.eq) goto loc_82215078;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-4252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4252, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r9,-4256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4256, ctx.r9.u32);
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// bl 0x82218998
	ctx.lr = 0x82215078;
	sub_82218998(ctx, base);
loc_82215078:
	// lwz r3,-4256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82215094
	if (!ctx.cr6.eq) goto loc_82215094;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14304
	ctx.r3.s64 = ctx.r11.s64 + 14304;
	// bl 0x82217410
	ctx.lr = 0x82215090;
	sub_82217410(ctx, base);
	// stw r3,-4256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4256, ctx.r3.u32);
loc_82215094:
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

__attribute__((alias("__imp__sub_822150A8"))) PPC_WEAK_FUNC(sub_822150A8);
PPC_FUNC_IMPL(__imp__sub_822150A8) {
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
	// bl 0x82215038
	ctx.lr = 0x822150C8;
	sub_82215038(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822150d8
	if (!ctx.cr6.eq) goto loc_822150D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822150e4
	goto loc_822150E4;
loc_822150D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82214f80
	ctx.lr = 0x822150E4;
	sub_82214F80(ctx, base);
loc_822150E4:
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

__attribute__((alias("__imp__sub_822150FC"))) PPC_WEAK_FUNC(sub_822150FC);
PPC_FUNC_IMPL(__imp__sub_822150FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215100"))) PPC_WEAK_FUNC(sub_82215100);
PPC_FUNC_IMPL(__imp__sub_82215100) {
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
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lis r31,-32029
	ctx.r31.s64 = -2099052544;
	// lwz r11,-4244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4244);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82215140
	if (!ctx.cr0.eq) goto loc_82215140;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-4244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4244, ctx.r11.u32);
	// lis r11,-32063
	ctx.r11.s64 = -2101280768;
	// stw r9,-4248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4248, ctx.r9.u32);
	// addi r3,r11,-27080
	ctx.r3.s64 = ctx.r11.s64 + -27080;
	// bl 0x82218998
	ctx.lr = 0x82215140;
	sub_82218998(ctx, base);
loc_82215140:
	// lwz r3,-4248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221515c
	if (!ctx.cr6.eq) goto loc_8221515C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,14328
	ctx.r3.s64 = ctx.r11.s64 + 14328;
	// bl 0x82217410
	ctx.lr = 0x82215158;
	sub_82217410(ctx, base);
	// stw r3,-4248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4248, ctx.r3.u32);
loc_8221515C:
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

__attribute__((alias("__imp__sub_82215170"))) PPC_WEAK_FUNC(sub_82215170);
PPC_FUNC_IMPL(__imp__sub_82215170) {
	PPC_FUNC_PROLOGUE();
	// b 0x82215100
	sub_82215100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215174"))) PPC_WEAK_FUNC(sub_82215174);
PPC_FUNC_IMPL(__imp__sub_82215174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215178"))) PPC_WEAK_FUNC(sub_82215178);
PPC_FUNC_IMPL(__imp__sub_82215178) {
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
	// bl 0x82215100
	ctx.lr = 0x82215198;
	sub_82215100(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822151a8
	if (!ctx.cr6.eq) goto loc_822151A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822151b4
	goto loc_822151B4;
loc_822151A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822150a8
	ctx.lr = 0x822151B4;
	sub_822150A8(ctx, base);
loc_822151B4:
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

__attribute__((alias("__imp__sub_822151CC"))) PPC_WEAK_FUNC(sub_822151CC);
PPC_FUNC_IMPL(__imp__sub_822151CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822151D0"))) PPC_WEAK_FUNC(sub_822151D0);
PPC_FUNC_IMPL(__imp__sub_822151D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x822151D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82217398
	ctx.lr = 0x822151E8;
	sub_82217398(ctx, base);
	// addi r10,r31,236
	ctx.r10.s64 = ctx.r31.s64 + 236;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,14160
	ctx.r8.s64 = ctx.r11.s64 + 14160;
	// addi r9,r9,14104
	ctx.r9.s64 = ctx.r9.s64 + 14104;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r29,30
	ctx.r29.s64 = 30;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// lfs f0,14348(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14348);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 186, ctx.r11.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stb r9,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
	// stb r8,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r8.u8);
	// stb r7,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r7.u8);
	// stb r6,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r6.u8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r29,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r29.u8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82216b98
	ctx.lr = 0x8221526C;
	sub_82216B98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,14344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14344);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82216b98
	ctx.lr = 0x8221528C;
	sub_82216B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215298"))) PPC_WEAK_FUNC(sub_82215298);
PPC_FUNC_IMPL(__imp__sub_82215298) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,14160
	ctx.r11.s64 = ctx.r11.s64 + 14160;
	// addi r10,r10,14104
	ctx.r10.s64 = ctx.r10.s64 + 14104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82214d18
	ctx.lr = 0x822152D0;
	sub_82214D18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822152e0
	if (ctx.cr0.eq) goto loc_822152E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821200c8
	ctx.lr = 0x822152E0;
	sub_821200C8(ctx, base);
loc_822152E0:
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

__attribute__((alias("__imp__sub_822152FC"))) PPC_WEAK_FUNC(sub_822152FC);
PPC_FUNC_IMPL(__imp__sub_822152FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215300"))) PPC_WEAK_FUNC(sub_82215300);
PPC_FUNC_IMPL(__imp__sub_82215300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8221b118
	ctx.lr = 0x8221533C;
	sub_8221B118(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221534C"))) PPC_WEAK_FUNC(sub_8221534C);
PPC_FUNC_IMPL(__imp__sub_8221534C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215350"))) PPC_WEAK_FUNC(sub_82215350);
PPC_FUNC_IMPL(__imp__sub_82215350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r5,r10,9248
	ctx.r5.s64 = ctx.r10.s64 + 9248;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82215300
	ctx.lr = 0x82215384;
	sub_82215300(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221b130
	ctx.lr = 0x8221538C;
	sub_8221B130(ctx, base);
	// bl 0x8222e960
	ctx.lr = 0x82215390;
	sub_8222E960(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822153A4"))) PPC_WEAK_FUNC(sub_822153A4);
PPC_FUNC_IMPL(__imp__sub_822153A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822153A8"))) PPC_WEAK_FUNC(sub_822153A8);
PPC_FUNC_IMPL(__imp__sub_822153A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x822153B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822153e4
	if (!ctx.cr6.eq) goto loc_822153E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822153E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822153E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82215458
	if (ctx.cr6.eq) goto loc_82215458;
loc_822153EC:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82215458
	if (ctx.cr6.eq) goto loc_82215458;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82215404
	if (!ctx.cr6.lt) goto loc_82215404;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82215404:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82215418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// subf. r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x82215450
	if (!ctx.cr0.eq) goto loc_82215450;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82215450:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822153ec
	if (!ctx.cr6.eq) goto loc_822153EC;
loc_82215458:
	// subf r3,r29,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r29.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215464"))) PPC_WEAK_FUNC(sub_82215464);
PPC_FUNC_IMPL(__imp__sub_82215464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215468"))) PPC_WEAK_FUNC(sub_82215468);
PPC_FUNC_IMPL(__imp__sub_82215468) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82219130
	ctx.lr = 0x82215480;
	sub_82219130(ctx, base);
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

__attribute__((alias("__imp__sub_82215498"))) PPC_WEAK_FUNC(sub_82215498);
PPC_FUNC_IMPL(__imp__sub_82215498) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822154c0
	if (ctx.cr6.eq) goto loc_822154C0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822154A8:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x822154a8
	if (!ctx.cr0.eq) goto loc_822154A8;
loc_822154C0:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822154C8"))) PPC_WEAK_FUNC(sub_822154C8);
PPC_FUNC_IMPL(__imp__sub_822154C8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822154f0
	if (ctx.cr6.eq) goto loc_822154F0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822154D8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x822154d8
	if (!ctx.cr0.eq) goto loc_822154D8;
loc_822154F0:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822154F8"))) PPC_WEAK_FUNC(sub_822154F8);
PPC_FUNC_IMPL(__imp__sub_822154F8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82219130
	ctx.lr = 0x8221551C;
	sub_82219130(ctx, base);
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

__attribute__((alias("__imp__sub_82215534"))) PPC_WEAK_FUNC(sub_82215534);
PPC_FUNC_IMPL(__imp__sub_82215534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215538"))) PPC_WEAK_FUNC(sub_82215538);
PPC_FUNC_IMPL(__imp__sub_82215538) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,14352
	ctx.r10.s64 = ctx.r10.s64 + 14352;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82215554"))) PPC_WEAK_FUNC(sub_82215554);
PPC_FUNC_IMPL(__imp__sub_82215554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215558"))) PPC_WEAK_FUNC(sub_82215558);
PPC_FUNC_IMPL(__imp__sub_82215558) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-20236
	ctx.r11.s64 = ctx.r11.s64 + -20236;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82215584
	if (ctx.cr0.eq) goto loc_82215584;
	// bl 0x821200c8
	ctx.lr = 0x82215584;
	sub_821200C8(ctx, base);
loc_82215584:
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

__attribute__((alias("__imp__sub_8221559C"))) PPC_WEAK_FUNC(sub_8221559C);
PPC_FUNC_IMPL(__imp__sub_8221559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822155A0"))) PPC_WEAK_FUNC(sub_822155A0);
PPC_FUNC_IMPL(__imp__sub_822155A0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822155cc
	if (!ctx.cr6.eq) goto loc_822155CC;
	// twi 31,r0,22
loc_822155CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8221561c
	if (ctx.cr6.gt) goto loc_8221561C;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822155E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf. r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x8221562c
	if (!ctx.cr0.eq) goto loc_8221562C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221562c
	goto loc_8221562C;
loc_8221561C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822153a8
	ctx.lr = 0x82215628;
	sub_822153A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8221562C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82215648"))) PPC_WEAK_FUNC(sub_82215648);
PPC_FUNC_IMPL(__imp__sub_82215648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,21656
	ctx.r6.s64 = ctx.r11.s64 + 21656;
	// b 0x822155a0
	sub_822155A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215658"))) PPC_WEAK_FUNC(sub_82215658);
PPC_FUNC_IMPL(__imp__sub_82215658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,21656
	ctx.r6.s64 = ctx.r11.s64 + 21656;
	// b 0x822155a0
	sub_822155A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215668"))) PPC_WEAK_FUNC(sub_82215668);
PPC_FUNC_IMPL(__imp__sub_82215668) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221567c
	if (ctx.cr6.eq) goto loc_8221567C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r11,21608
	ctx.r6.s64 = ctx.r11.s64 + 21608;
	// b 0x822155a0
	sub_822155A0(ctx, base);
	return;
loc_8221567C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82215684"))) PPC_WEAK_FUNC(sub_82215684);
PPC_FUNC_IMPL(__imp__sub_82215684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215688"))) PPC_WEAK_FUNC(sub_82215688);
PPC_FUNC_IMPL(__imp__sub_82215688) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822156a4
	if (ctx.cr6.eq) goto loc_822156A4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,-27416
	ctx.r6.s64 = ctx.r11.s64 + -27416;
	// b 0x822155a0
	sub_822155A0(ctx, base);
	return;
loc_822156A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822156AC"))) PPC_WEAK_FUNC(sub_822156AC);
PPC_FUNC_IMPL(__imp__sub_822156AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822156B0"))) PPC_WEAK_FUNC(sub_822156B0);
PPC_FUNC_IMPL(__imp__sub_822156B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,21704
	ctx.r6.s64 = ctx.r11.s64 + 21704;
	// b 0x822155a0
	sub_822155A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822156C0"))) PPC_WEAK_FUNC(sub_822156C0);
PPC_FUNC_IMPL(__imp__sub_822156C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,21704
	ctx.r6.s64 = ctx.r11.s64 + 21704;
	// b 0x822155a0
	sub_822155A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822156D0"))) PPC_WEAK_FUNC(sub_822156D0);
PPC_FUNC_IMPL(__imp__sub_822156D0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822156f8
	if (ctx.cr6.eq) goto loc_822156F8;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r11,21752
	ctx.r6.s64 = ctx.r11.s64 + 21752;
	// bl 0x822155a0
	ctx.lr = 0x822156F4;
	sub_822155A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822156F8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221570C"))) PPC_WEAK_FUNC(sub_8221570C);
PPC_FUNC_IMPL(__imp__sub_8221570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215710"))) PPC_WEAK_FUNC(sub_82215710);
PPC_FUNC_IMPL(__imp__sub_82215710) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lbz r7,118(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r6,117(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// addi r31,r11,-4204
	ctx.r31.s64 = ctx.r11.s64 + -4204;
	// lbz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// addi r4,r8,14364
	ctx.r4.s64 = ctx.r8.s64 + 14364;
	// lbz r10,119(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// bl 0x82219e28
	ctx.lr = 0x82215750;
	sub_82219E28(ctx, base);
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

__attribute__((alias("__imp__sub_82215768"))) PPC_WEAK_FUNC(sub_82215768);
PPC_FUNC_IMPL(__imp__sub_82215768) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,359(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 359);
	// b 0x82215710
	sub_82215710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215770"))) PPC_WEAK_FUNC(sub_82215770);
PPC_FUNC_IMPL(__imp__sub_82215770) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,10093
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10093, ctx.xer);
	// bne cr6,0x82215780
	if (!ctx.cr6.eq) goto loc_82215780;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x822157f0
	goto loc_822157F0;
loc_82215780:
	// cmpwi cr6,r4,10050
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10050, ctx.xer);
	// bne cr6,0x82215790
	if (!ctx.cr6.eq) goto loc_82215790;
loc_82215788:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x822157f0
	goto loc_822157F0;
loc_82215790:
	// cmpwi cr6,r4,11001
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11001, ctx.xer);
	// bne cr6,0x822157a0
	if (!ctx.cr6.eq) goto loc_822157A0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x822157f0
	goto loc_822157F0;
loc_822157A0:
	// cmpwi cr6,r4,11002
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11002, ctx.xer);
	// bne cr6,0x822157b0
	if (!ctx.cr6.eq) goto loc_822157B0;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x822157f0
	goto loc_822157F0;
loc_822157B0:
	// cmpwi cr6,r4,11003
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11003, ctx.xer);
	// beq cr6,0x82215788
	if (ctx.cr6.eq) goto loc_82215788;
	// cmpwi cr6,r4,11004
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11004, ctx.xer);
	// bne cr6,0x822157c8
	if (!ctx.cr6.eq) goto loc_822157C8;
loc_822157C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822157f0
	goto loc_822157F0;
loc_822157C8:
	// cmpwi cr6,r4,10036
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10036, ctx.xer);
	// bne cr6,0x822157d8
	if (!ctx.cr6.eq) goto loc_822157D8;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x822157f0
	goto loc_822157F0;
loc_822157D8:
	// cmpwi cr6,r4,10014
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10014, ctx.xer);
	// beq cr6,0x822157c0
	if (ctx.cr6.eq) goto loc_822157C0;
	// cmpwi cr6,r4,10004
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10004, ctx.xer);
	// li r11,10
	ctx.r11.s64 = 10;
	// beq cr6,0x822157f0
	if (ctx.cr6.eq) goto loc_822157F0;
	// li r11,4
	ctx.r11.s64 = 4;
loc_822157F0:
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822157F8"))) PPC_WEAK_FUNC(sub_822157F8);
PPC_FUNC_IMPL(__imp__sub_822157F8) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8221583c
	goto loc_8221583C;
loc_82215814:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8221b268
	ctx.lr = 0x82215820;
	sub_8221B268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82215834
	if (ctx.cr0.eq) goto loc_82215834;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x8221585c
	if (!ctx.cr6.eq) goto loc_8221585C;
loc_82215834:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
loc_8221583C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215814
	if (!ctx.cr6.eq) goto loc_82215814;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82215848:
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
loc_8221585C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82215848
	goto loc_82215848;
}

__attribute__((alias("__imp__sub_82215864"))) PPC_WEAK_FUNC(sub_82215864);
PPC_FUNC_IMPL(__imp__sub_82215864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215868"))) PPC_WEAK_FUNC(sub_82215868);
PPC_FUNC_IMPL(__imp__sub_82215868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82215870;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82215a8c
	if (ctx.cr6.eq) goto loc_82215A8C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r6,359
	ctx.r6.s64 = 359;
	// addi r4,r11,13434
	ctx.r4.s64 = ctx.r11.s64 + 13434;
	// li r5,359
	ctx.r5.s64 = 359;
	// bl 0x82201d30
	ctx.lr = 0x82215898;
	sub_82201D30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822157f8
	ctx.lr = 0x822158A0;
	sub_822157F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221593c
	if (!ctx.cr0.eq) goto loc_8221593C;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// bl 0x82238868
	ctx.lr = 0x822158B4;
	sub_82238868(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82238460
	ctx.lr = 0x822158CC;
	sub_82238460(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x822158ec
	if (ctx.cr0.eq) goto loc_822158EC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82238478
	ctx.lr = 0x822158DC;
	sub_82238478(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_822158E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82215770
	ctx.lr = 0x822158E8;
	sub_82215770(ctx, base);
	// b 0x82215a94
	goto loc_82215A94;
loc_822158EC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa708
	ctx.lr = 0x822158F8;
	sub_821FA708(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82215918
	if (ctx.cr6.eq) goto loc_82215918;
	// bl 0x82238478
	ctx.lr = 0x8221590C;
	sub_82238478(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822158e0
	goto loc_822158E0;
loc_82215918:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,359(r31)
	PPC_STORE_U32(ctx.r31.u32 + 359, ctx.r11.u32);
	// bl 0x82238478
	ctx.lr = 0x82215924;
	sub_82238478(ctx, base);
	// li r6,359
	ctx.r6.s64 = 359;
	// li r5,359
	ctx.r5.s64 = 359;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201d30
	ctx.lr = 0x82215938;
	sub_82201D30(ctx, base);
	// b 0x82215a94
	goto loc_82215A94;
loc_8221593C:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r4,46
	ctx.r4.s64 = 46;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220aed0
	ctx.lr = 0x82215950;
	sub_8220AED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82215a94
	if (ctx.cr0.eq) goto loc_82215A94;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220aed0
	ctx.lr = 0x82215968;
	sub_8220AED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82215a94
	if (ctx.cr0.eq) goto loc_82215A94;
	// addi r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8220aed0
	ctx.lr = 0x82215980;
	sub_8220AED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82215a94
	if (ctx.cr0.eq) goto loc_82215A94;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// stb r28,359(r31)
	PPC_STORE_U8(ctx.r31.u32 + 359, ctx.r28.u8);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,2504
	ctx.r11.s64 = ctx.r11.s64 + 2504;
	// b 0x822159b8
	goto loc_822159B8;
loc_822159A0:
	// lbz r8,359(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 359);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mulli r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 * 10;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,208
	ctx.r9.s64 = ctx.r9.s64 + 208;
	// stb r9,359(r31)
	PPC_STORE_U8(ctx.r31.u32 + 359, ctx.r9.u8);
loc_822159B8:
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm. r8,r8,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822159a0
	if (!ctx.cr0.eq) goto loc_822159A0;
	// stb r28,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r28.u8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// b 0x822159f4
	goto loc_822159F4;
loc_822159D8:
	// lbz r7,360(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 360);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mulli r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 * 10;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,208
	ctx.r8.s64 = ctx.r8.s64 + 208;
	// stb r8,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r8.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
loc_822159F4:
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm. r7,r7,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x822159d8
	if (!ctx.cr0.eq) goto loc_822159D8;
	// stb r28,361(r31)
	PPC_STORE_U8(ctx.r31.u32 + 361, ctx.r28.u8);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lbz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// b 0x82215a2c
	goto loc_82215A2C;
loc_82215A10:
	// lbz r7,361(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 361);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mulli r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 * 10;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,208
	ctx.r8.s64 = ctx.r8.s64 + 208;
	// stb r8,361(r31)
	PPC_STORE_U8(ctx.r31.u32 + 361, ctx.r8.u8);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
loc_82215A2C:
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm. r7,r7,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82215a10
	if (!ctx.cr0.eq) goto loc_82215A10;
	// stb r28,362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 362, ctx.r28.u8);
	// b 0x82215a58
	goto loc_82215A58;
loc_82215A40:
	// lbz r8,362(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 362);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r8,r8,10
	ctx.r8.s64 = ctx.r8.s64 * 10;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,208
	ctx.r9.s64 = ctx.r9.s64 + 208;
	// stb r9,362(r31)
	PPC_STORE_U8(ctx.r31.u32 + 362, ctx.r9.u8);
loc_82215A58:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm. r8,r8,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82215a40
	if (!ctx.cr0.eq) goto loc_82215A40;
	// lwz r3,359(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 359);
	// bl 0x82215710
	ctx.lr = 0x82215A70;
	sub_82215710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,359
	ctx.r6.s64 = 359;
	// li r5,359
	ctx.r5.s64 = 359;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201d30
	ctx.lr = 0x82215A84;
	sub_82201D30(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// b 0x82215a94
	goto loc_82215A94;
loc_82215A8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
loc_82215A94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215AA0"))) PPC_WEAK_FUNC(sub_82215AA0);
PPC_FUNC_IMPL(__imp__sub_82215AA0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,14376
	ctx.r11.s64 = ctx.r11.s64 + 14376;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822175a8
	ctx.lr = 0x82215ACC;
	sub_822175A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215adc
	if (ctx.cr0.eq) goto loc_82215ADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821200c8
	ctx.lr = 0x82215ADC;
	sub_821200C8(ctx, base);
loc_82215ADC:
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

__attribute__((alias("__imp__sub_82215AF8"))) PPC_WEAK_FUNC(sub_82215AF8);
PPC_FUNC_IMPL(__imp__sub_82215AF8) {
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
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822179b0
	ctx.lr = 0x82215B34;
	sub_822179B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82215b4c
	if (!ctx.cr0.eq) goto loc_82215B4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822175a0
	ctx.lr = 0x82215B4C;
	sub_822175A0(ctx, base);
loc_82215B4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82215B68"))) PPC_WEAK_FUNC(sub_82215B68);
PPC_FUNC_IMPL(__imp__sub_82215B68) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215bb4
	if (ctx.cr0.eq) goto loc_82215BB4;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x822176f8
	ctx.lr = 0x82215B9C;
	sub_822176F8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
loc_82215BB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82215BD0"))) PPC_WEAK_FUNC(sub_82215BD0);
PPC_FUNC_IMPL(__imp__sub_82215BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82215BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215c30
	if (ctx.cr0.eq) goto loc_82215C30;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82217a18
	ctx.lr = 0x82215C1C;
	sub_82217A18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82215c3c
	if (!ctx.cr0.eq) goto loc_82215C3C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82215c34
	goto loc_82215C34;
loc_82215C30:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82215C34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822175a0
	ctx.lr = 0x82215C3C;
	sub_822175A0(ctx, base);
loc_82215C3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215C48"))) PPC_WEAK_FUNC(sub_82215C48);
PPC_FUNC_IMPL(__imp__sub_82215C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82215C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215ccc
	if (ctx.cr0.eq) goto loc_82215CCC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82217638
	ctx.lr = 0x82215C8C;
	sub_82217638(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82217ab0
	ctx.lr = 0x82215CA8;
	sub_82217AB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82215cc0
	if (!ctx.cr0.eq) goto loc_82215CC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822175a0
	ctx.lr = 0x82215CC0;
	sub_822175A0(ctx, base);
loc_82215CC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82492d68
	ctx.lr = 0x82215CC8;
	sub_82492D68(ctx, base);
	// b 0x82215cd8
	goto loc_82215CD8;
loc_82215CCC:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822175a0
	ctx.lr = 0x82215CD8;
	sub_822175A0(ctx, base);
loc_82215CD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215CE4"))) PPC_WEAK_FUNC(sub_82215CE4);
PPC_FUNC_IMPL(__imp__sub_82215CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215CE8"))) PPC_WEAK_FUNC(sub_82215CE8);
PPC_FUNC_IMPL(__imp__sub_82215CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82215CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82215d68
	if (ctx.cr0.eq) goto loc_82215D68;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82217548
	ctx.lr = 0x82215D28;
	sub_82217548(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82215d70
	if (!ctx.cr0.eq) goto loc_82215D70;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82217b40
	ctx.lr = 0x82215D50;
	sub_82217B40(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82215d70
	if (ctx.cr6.eq) goto loc_82215D70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82215d6c
	goto loc_82215D6C;
loc_82215D68:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82215D6C:
	// bl 0x822175a0
	ctx.lr = 0x82215D70;
	sub_822175A0(ctx, base);
loc_82215D70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215D7C"))) PPC_WEAK_FUNC(sub_82215D7C);
PPC_FUNC_IMPL(__imp__sub_82215D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215D80"))) PPC_WEAK_FUNC(sub_82215D80);
PPC_FUNC_IMPL(__imp__sub_82215D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82215D88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82215e00
	if (ctx.cr0.eq) goto loc_82215E00;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82217548
	ctx.lr = 0x82215DC0;
	sub_82217548(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82215e08
	if (!ctx.cr0.eq) goto loc_82215E08;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82217ba8
	ctx.lr = 0x82215DE8;
	sub_82217BA8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82215e08
	if (ctx.cr6.eq) goto loc_82215E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82215e04
	goto loc_82215E04;
loc_82215E00:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82215E04:
	// bl 0x822175a0
	ctx.lr = 0x82215E08;
	sub_822175A0(ctx, base);
loc_82215E08:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215E14"))) PPC_WEAK_FUNC(sub_82215E14);
PPC_FUNC_IMPL(__imp__sub_82215E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82215E18"))) PPC_WEAK_FUNC(sub_82215E18);
PPC_FUNC_IMPL(__imp__sub_82215E18) {
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
	// rlwinm. r11,r4,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// rlwinm r10,r4,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bne 0x82215e48
	if (!ctx.cr0.eq) goto loc_82215E48;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82215E48:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// bne 0x82215e58
	if (!ctx.cr0.eq) goto loc_82215E58;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82215E58:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// bne 0x82215e68
	if (!ctx.cr0.eq) goto loc_82215E68;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82215E68:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82215E88"))) PPC_WEAK_FUNC(sub_82215E88);
PPC_FUNC_IMPL(__imp__sub_82215E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82215E90;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215ef8
	if (ctx.cr0.eq) goto loc_82215EF8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82217f90
	ctx.lr = 0x82215EE4;
	sub_82217F90(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82215f04
	if (ctx.cr6.eq) goto loc_82215F04;
	// b 0x82215efc
	goto loc_82215EFC;
loc_82215EF8:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82215EFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822175a0
	ctx.lr = 0x82215F04;
	sub_822175A0(ctx, base);
loc_82215F04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82215F10"))) PPC_WEAK_FUNC(sub_82215F10);
PPC_FUNC_IMPL(__imp__sub_82215F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82215F18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82215F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215f6c
	if (ctx.cr0.eq) goto loc_82215F6C;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82217c10
	ctx.lr = 0x82215F58;
	sub_82217C10(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82215f78
	if (ctx.cr6.eq) goto loc_82215F78;
	// b 0x82215f70
	goto loc_82215F70;
loc_82215F6C:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82215F70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822175a0
	ctx.lr = 0x82215F78;
	sub_822175A0(ctx, base);
loc_82215F78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

