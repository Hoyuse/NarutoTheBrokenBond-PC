#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8214C03C"))) PPC_WEAK_FUNC(sub_8214C03C);
PPC_FUNC_IMPL(__imp__sub_8214C03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C040"))) PPC_WEAK_FUNC(sub_8214C040);
PPC_FUNC_IMPL(__imp__sub_8214C040) {
	PPC_FUNC_PROLOGUE();
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C04C"))) PPC_WEAK_FUNC(sub_8214C04C);
PPC_FUNC_IMPL(__imp__sub_8214C04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C050"))) PPC_WEAK_FUNC(sub_8214C050);
PPC_FUNC_IMPL(__imp__sub_8214C050) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82238408
	ctx.lr = 0x8214C07C;
	sub_82238408(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212d020
	ctx.lr = 0x8214C088;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lhz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r4,r11,7380
	ctx.r4.s64 = ctx.r11.s64 + 7380;
	// bl 0x8214b638
	ctx.lr = 0x8214C09C;
	sub_8214B638(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c0bc
	if (ctx.cr6.eq) goto loc_8214C0BC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8214a758
	ctx.lr = 0x8214C0BC;
	sub_8214A758(ctx, base);
loc_8214C0BC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c0d4
	if (ctx.cr6.eq) goto loc_8214C0D4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x8214C0D4;
	sub_8212D1B8(ctx, base);
loc_8214C0D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8214C0F0"))) PPC_WEAK_FUNC(sub_8214C0F0);
PPC_FUNC_IMPL(__imp__sub_8214C0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,7384
	ctx.r3.s64 = ctx.r11.s64 + 7384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C0FC"))) PPC_WEAK_FUNC(sub_8214C0FC);
PPC_FUNC_IMPL(__imp__sub_8214C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C100"))) PPC_WEAK_FUNC(sub_8214C100);
PPC_FUNC_IMPL(__imp__sub_8214C100) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,9280
	ctx.r3.s64 = ctx.r31.s64 + 9280;
	// addi r11,r11,8360
	ctx.r11.s64 = ctx.r11.s64 + 8360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r11,9284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c140
	if (ctx.cr6.eq) goto loc_8214C140;
	// bl 0x8212d1b8
	ctx.lr = 0x8214C140;
	sub_8212D1B8(ctx, base);
loc_8214C140:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,3296
	ctx.r11.s64 = ctx.r11.s64 + 3296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8214c15c
	if (ctx.cr0.eq) goto loc_8214C15C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x8214C15C;
	sub_82120A70(ctx, base);
loc_8214C15C:
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

__attribute__((alias("__imp__sub_8214C178"))) PPC_WEAK_FUNC(sub_8214C178);
PPC_FUNC_IMPL(__imp__sub_8214C178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8214C180;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,9296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9296);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8214c664
	if (ctx.cr6.lt) goto loc_8214C664;
	// beq cr6,0x8214c4cc
	if (ctx.cr6.eq) goto loc_8214C4CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8214c474
	if (ctx.cr6.lt) goto loc_8214C474;
	// beq cr6,0x8214c2b0
	if (ctx.cr6.eq) goto loc_8214C2B0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8214c1b8
	if (ctx.cr6.lt) goto loc_8214C1B8;
	// bne cr6,0x8214c6c4
	if (!ctx.cr6.eq) goto loc_8214C6C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214c6c8
	goto loc_8214C6C8;
loc_8214C1B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214cbe0
	ctx.lr = 0x8214C1C0;
	sub_8214CBE0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// clrlwi. r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r27,5
	ctx.r27.s64 = 5;
	// addi r30,r11,1580
	ctx.r30.s64 = ctx.r11.s64 + 1580;
	// addi r29,r10,7484
	ctx.r29.s64 = ctx.r10.s64 + 7484;
	// addi r28,r9,7452
	ctx.r28.s64 = ctx.r9.s64 + 7452;
	// bne 0x8214c248
	if (!ctx.cr0.eq) goto loc_8214C248;
	// bl 0x82146770
	ctx.lr = 0x8214C1E8;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214c238
	if (ctx.cr6.gt) goto loc_8214C238;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,7632
	ctx.r4.s64 = ctx.r11.s64 + 7632;
	// bl 0x8212d020
	ctx.lr = 0x8214C204;
	sub_8212D020(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// li r7,239
	ctx.r7.s64 = 239;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214C220;
	sub_821469C8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c238
	if (ctx.cr6.eq) goto loc_8214C238;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8212d1b8
	ctx.lr = 0x8214C238;
	sub_8212D1B8(ctx, base);
loc_8214C238:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r27,9296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9296, ctx.r27.u32);
	// ori r11,r11,501
	ctx.r11.u64 = ctx.r11.u64 | 501;
	// stw r11,9292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9292, ctx.r11.u32);
loc_8214C248:
	// lbz r11,9268(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9268);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214c6c4
	if (ctx.cr0.eq) goto loc_8214C6C4;
	// bl 0x82146770
	ctx.lr = 0x8214C258;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8214c2a8
	if (ctx.cr6.gt) goto loc_8214C2A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,7664
	ctx.r4.s64 = ctx.r11.s64 + 7664;
	// bl 0x8212d020
	ctx.lr = 0x8214C274;
	sub_8212D020(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// li r7,246
	ctx.r7.s64 = 246;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821469c8
	ctx.lr = 0x8214C290;
	sub_821469C8(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c2a8
	if (ctx.cr6.eq) goto loc_8214C2A8;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8212d1b8
	ctx.lr = 0x8214C2A8;
	sub_8212D1B8(ctx, base);
loc_8214C2A8:
	// stw r27,9296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9296, ctx.r27.u32);
	// b 0x8214c6c4
	goto loc_8214C6C4;
loc_8214C2B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c6e8
	ctx.lr = 0x8214C2B8;
	sub_8214C6E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214c320
	if (!ctx.cr0.eq) goto loc_8214C320;
	// bl 0x82146770
	ctx.lr = 0x8214C2C4;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214c3f4
	if (ctx.cr6.gt) goto loc_8214C3F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,7544
	ctx.r4.s64 = ctx.r11.s64 + 7544;
	// bl 0x8212d020
	ctx.lr = 0x8214C2E0;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,7452
	ctx.r6.s64 = ctx.r11.s64 + 7452;
	// addi r5,r10,7484
	ctx.r5.s64 = ctx.r10.s64 + 7484;
	// addi r3,r9,1580
	ctx.r3.s64 = ctx.r9.s64 + 1580;
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// li r7,204
	ctx.r7.s64 = 204;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214C308;
	sub_821469C8(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c3f4
	if (ctx.cr6.eq) goto loc_8214C3F4;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// b 0x8214c3f0
	goto loc_8214C3F0;
loc_8214C320:
	// bl 0x82146770
	ctx.lr = 0x8214C324;
	sub_82146770(ctx, base);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// addi r30,r11,1580
	ctx.r30.s64 = ctx.r11.s64 + 1580;
	// addi r29,r10,7484
	ctx.r29.s64 = ctx.r10.s64 + 7484;
	// addi r28,r9,7452
	ctx.r28.s64 = ctx.r9.s64 + 7452;
	// bgt cr6,0x8214c390
	if (ctx.cr6.gt) goto loc_8214C390;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r31,34
	ctx.r5.s64 = ctx.r31.s64 + 34;
	// addi r4,r11,7572
	ctx.r4.s64 = ctx.r11.s64 + 7572;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8214b638
	ctx.lr = 0x8214C35C;
	sub_8214B638(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,210
	ctx.r7.s64 = 210;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214C378;
	sub_821469C8(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c390
	if (ctx.cr6.eq) goto loc_8214C390;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8212d1b8
	ctx.lr = 0x8214C390;
	sub_8212D1B8(ctx, base);
loc_8214C390:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214c800
	ctx.lr = 0x8214C398;
	sub_8214C800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214c40c
	if (!ctx.cr0.eq) goto loc_8214C40C;
	// bl 0x82146770
	ctx.lr = 0x8214C3A4;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214c3f4
	if (ctx.cr6.gt) goto loc_8214C3F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r4,r11,7600
	ctx.r4.s64 = ctx.r11.s64 + 7600;
	// bl 0x8212d020
	ctx.lr = 0x8214C3C0;
	sub_8212D020(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// li r7,213
	ctx.r7.s64 = 213;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214C3DC;
	sub_821469C8(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c3f4
	if (ctx.cr6.eq) goto loc_8214C3F4;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
loc_8214C3F0:
	// bl 0x8212d1b8
	ctx.lr = 0x8214C3F4;
	sub_8212D1B8(ctx, base);
loc_8214C3F4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,500
	ctx.r11.u64 = ctx.r11.u64 | 500;
loc_8214C3FC:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,9292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9292, ctx.r11.u32);
	// stw r10,9296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9296, ctx.r10.u32);
	// b 0x8214c6c4
	goto loc_8214C6C4;
loc_8214C40C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bne cr6,0x8214c45c
	if (!ctx.cr6.eq) goto loc_8214C45C;
	// addi r29,r31,34
	ctx.r29.s64 = ctx.r31.s64 + 34;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82218a80
	ctx.lr = 0x8214C430;
	sub_82218A80(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// stb r30,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r30.u8);
	// bl 0x82218a80
	ctx.lr = 0x8214C454;
	sub_82218A80(ctx, base);
	// stw r30,9296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9296, ctx.r30.u32);
	// b 0x8214c6c4
	goto loc_8214C6C4;
loc_8214C45C:
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8214c6c0
	goto loc_8214C6C0;
loc_8214C474:
	// lwz r3,9276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9276);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r30.u8);
	// addi r4,r1,113
	ctx.r4.s64 = ctx.r1.s64 + 113;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C4A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214c4b8
	if (ctx.cr0.eq) goto loc_8214C4B8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,301
	ctx.r11.u64 = ctx.r11.u64 | 301;
	// b 0x8214c3fc
	goto loc_8214C3FC;
loc_8214C4B8:
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214c6c4
	if (ctx.cr0.eq) goto loc_8214C6C4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8214c6c0
	goto loc_8214C6C0;
loc_8214C4CC:
	// lwz r11,9284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9284);
	// addi r29,r31,9280
	ctx.r29.s64 = ctx.r31.s64 + 9280;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c4e8
	if (ctx.cr6.eq) goto loc_8214C4E8;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8214c4ec
	goto loc_8214C4EC;
loc_8214C4E8:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8214C4EC:
	// lwz r27,9276(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9276);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8213ecd8
	ctx.lr = 0x8214C4FC;
	sub_8213ECD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8214c58c
	if (!ctx.cr0.lt) goto loc_8214C58C;
	// bl 0x82146770
	ctx.lr = 0x8214C520;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214c69c
	if (ctx.cr6.gt) goto loc_8214C69C;
	// lwz r11,9276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9276);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r10,7404
	ctx.r4.s64 = ctx.r10.s64 + 7404;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8214b638
	ctx.lr = 0x8214C544;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,1580
	ctx.r11.s64 = ctx.r11.s64 + 1580;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,7452
	ctx.r6.s64 = ctx.r10.s64 + 7452;
	// addi r5,r9,7484
	ctx.r5.s64 = ctx.r9.s64 + 7484;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214C570;
	sub_821469C8(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c69c
	if (ctx.cr6.eq) goto loc_8214C69C;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8212d1b8
	ctx.lr = 0x8214C588;
	sub_8212D1B8(ctx, base);
	// b 0x8214c69c
	goto loc_8214C69C;
loc_8214C58C:
	// bl 0x82146770
	ctx.lr = 0x8214C590;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8214c5fc
	if (ctx.cr6.gt) goto loc_8214C5FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213ecd8
	ctx.lr = 0x8214C5A4;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,7520
	ctx.r4.s64 = ctx.r11.s64 + 7520;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8214b638
	ctx.lr = 0x8214C5B8;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,1580
	ctx.r11.s64 = ctx.r11.s64 + 1580;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,7452
	ctx.r6.s64 = ctx.r10.s64 + 7452;
	// addi r5,r9,7484
	ctx.r5.s64 = ctx.r9.s64 + 7484;
	// li r7,169
	ctx.r7.s64 = 169;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214C5E4;
	sub_821469C8(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c5fc
	if (ctx.cr6.eq) goto loc_8214C5FC;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8212d1b8
	ctx.lr = 0x8214C5FC;
	sub_8212D1B8(ctx, base);
loc_8214C5FC:
	// addi r29,r31,34
	ctx.r29.s64 = ctx.r31.s64 + 34;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82218a80
	ctx.lr = 0x8214C614;
	sub_82218A80(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// stb r30,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r30.u8);
	// bl 0x82218a80
	ctx.lr = 0x8214C634;
	sub_82218A80(ctx, base);
	// addi r29,r31,1068
	ctx.r29.s64 = ctx.r31.s64 + 1068;
	// stw r30,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r30.u32);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stw r30,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82218a80
	ctx.lr = 0x8214C650;
	sub_82218A80(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,9264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9264, ctx.r29.u32);
	// stb r30,9268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9268, ctx.r30.u8);
	// stw r30,9272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9272, ctx.r30.u32);
	// b 0x8214c6c0
	goto loc_8214C6C0;
loc_8214C664:
	// lwz r3,9276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9276);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,113
	ctx.r6.s64 = ctx.r1.s64 + 113;
	// stb r30,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r30.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214c6b0
	if (ctx.cr0.eq) goto loc_8214C6B0;
loc_8214C69C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,300
	ctx.r11.u64 = ctx.r11.u64 | 300;
	// stw r11,9292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9292, ctx.r11.u32);
	// b 0x8214c6c8
	goto loc_8214C6C8;
loc_8214C6B0:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214c6c4
	if (ctx.cr0.eq) goto loc_8214C6C4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8214C6C0:
	// stw r11,9296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9296, ctx.r11.u32);
loc_8214C6C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214C6C8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214C6D0"))) PPC_WEAK_FUNC(sub_8214C6D0);
PPC_FUNC_IMPL(__imp__sub_8214C6D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,9292(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 9292);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214C6E4"))) PPC_WEAK_FUNC(sub_8214C6E4);
PPC_FUNC_IMPL(__imp__sub_8214C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C6E8"))) PPC_WEAK_FUNC(sub_8214C6E8);
PPC_FUNC_IMPL(__imp__sub_8214C6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8214C6F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,7748
	ctx.r29.s64 = ctx.r11.s64 + 7748;
loc_8214C704:
	// cmplwi cr6,r30,1024
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1024, ctx.xer);
	// bgt cr6,0x8214c788
	if (ctx.cr6.gt) goto loc_8214C788;
	// lwz r3,9276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9276);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214c77c
	if (ctx.cr0.eq) goto loc_8214C77C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_8214C74C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8214c76c
	if (!ctx.cr0.eq) goto loc_8214C76C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8214c74c
	if (!ctx.cr6.eq) goto loc_8214C74C;
loc_8214C76C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8214c704
	if (!ctx.cr0.eq) goto loc_8214C704;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8214C77C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214C780:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8214C788:
	// bl 0x82146770
	ctx.lr = 0x8214C78C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214c7e8
	if (ctx.cr6.gt) goto loc_8214C7E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7688
	ctx.r4.s64 = ctx.r11.s64 + 7688;
	// bl 0x8212d020
	ctx.lr = 0x8214C7A8;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,7712
	ctx.r6.s64 = ctx.r11.s64 + 7712;
	// addi r5,r10,7484
	ctx.r5.s64 = ctx.r10.s64 + 7484;
	// addi r3,r9,1580
	ctx.r3.s64 = ctx.r9.s64 + 1580;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,391
	ctx.r7.s64 = 391;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214C7D0;
	sub_821469C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c7e8
	if (ctx.cr6.eq) goto loc_8214C7E8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d1b8
	ctx.lr = 0x8214C7E8;
	sub_8212D1B8(ctx, base);
loc_8214C7E8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,500
	ctx.r11.u64 = ctx.r11.u64 | 500;
	// stw r11,9292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9292, ctx.r11.u32);
	// b 0x8214c780
	goto loc_8214C780;
}

__attribute__((alias("__imp__sub_8214C7FC"))) PPC_WEAK_FUNC(sub_8214C7FC);
PPC_FUNC_IMPL(__imp__sub_8214C7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214C800"))) PPC_WEAK_FUNC(sub_8214C800);
PPC_FUNC_IMPL(__imp__sub_8214C800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8214C808;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r28,34
	ctx.r30.s64 = ctx.r28.s64 + 34;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,7756
	ctx.r4.s64 = ctx.r11.s64 + 7756;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x8221b878
	ctx.lr = 0x8214C830;
	sub_8221B878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8214c8a0
	if (ctx.cr0.eq) goto loc_8214C8A0;
	// bl 0x82146770
	ctx.lr = 0x8214C83C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214c898
	if (ctx.cr6.gt) goto loc_8214C898;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7764
	ctx.r4.s64 = ctx.r11.s64 + 7764;
	// bl 0x8212d020
	ctx.lr = 0x8214C858;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,7792
	ctx.r6.s64 = ctx.r11.s64 + 7792;
	// addi r5,r10,7484
	ctx.r5.s64 = ctx.r10.s64 + 7484;
	// addi r3,r9,1580
	ctx.r3.s64 = ctx.r9.s64 + 1580;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,432
	ctx.r7.s64 = 432;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214C880;
	sub_821469C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c898
	if (ctx.cr6.eq) goto loc_8214C898;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8214C894:
	// bl 0x8212d1b8
	ctx.lr = 0x8214C898;
	sub_8212D1B8(ctx, base);
loc_8214C898:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214cbd8
	goto loc_8214CBD8;
loc_8214C8A0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214c930
	if (ctx.cr0.eq) goto loc_8214C930;
loc_8214C8AC:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8214c8c8
	if (ctx.cr6.eq) goto loc_8214C8C8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214c8ac
	if (!ctx.cr0.eq) goto loc_8214C8AC;
loc_8214C8C8:
	// cmplwi cr6,r29,15
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 15, ctx.xer);
	// blt cr6,0x8214c930
	if (ctx.cr6.lt) goto loc_8214C930;
	// bl 0x82146770
	ctx.lr = 0x8214C8D4;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214c898
	if (ctx.cr6.gt) goto loc_8214C898;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,7832
	ctx.r4.s64 = ctx.r11.s64 + 7832;
	// bl 0x8212d020
	ctx.lr = 0x8214C8F0;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,7792
	ctx.r6.s64 = ctx.r11.s64 + 7792;
	// addi r5,r10,7484
	ctx.r5.s64 = ctx.r10.s64 + 7484;
	// addi r3,r9,1580
	ctx.r3.s64 = ctx.r9.s64 + 1580;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,446
	ctx.r7.s64 = 446;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214C918;
	sub_821469C8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c898
	if (ctx.cr6.eq) goto loc_8214C898;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x8214c894
	goto loc_8214C894;
loc_8214C930:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r4,r29,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r29.s64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x8221d030
	ctx.lr = 0x8214C940;
	sub_8221D030(ctx, base);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8214c9d8
	if (ctx.cr0.eq) goto loc_8214C9D8;
loc_8214C954:
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x8214c970
	if (ctx.cr6.eq) goto loc_8214C970;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8214c954
	if (!ctx.cr0.eq) goto loc_8214C954;
loc_8214C970:
	// cmplwi cr6,r5,15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 15, ctx.xer);
	// blt cr6,0x8214c9d8
	if (ctx.cr6.lt) goto loc_8214C9D8;
	// bl 0x82146770
	ctx.lr = 0x8214C97C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214c898
	if (ctx.cr6.gt) goto loc_8214C898;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,7860
	ctx.r4.s64 = ctx.r11.s64 + 7860;
	// bl 0x8212d020
	ctx.lr = 0x8214C998;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,7792
	ctx.r6.s64 = ctx.r11.s64 + 7792;
	// addi r5,r10,7484
	ctx.r5.s64 = ctx.r10.s64 + 7484;
	// addi r3,r9,1580
	ctx.r3.s64 = ctx.r9.s64 + 1580;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,464
	ctx.r7.s64 = 464;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214C9C0;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c898
	if (ctx.cr6.eq) goto loc_8214C898;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x8214c894
	goto loc_8214C894;
loc_8214C9D8:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// sth r31,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r31.u16);
	// stb r31,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r31.u8);
	// bl 0x8221d030
	ctx.lr = 0x8214C9FC;
	sub_8221D030(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8221cf20
	ctx.lr = 0x8214CA04;
	sub_8221CF20(ctx, base);
	// stw r3,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,200
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 200, ctx.xer);
	// bne cr6,0x8214cbd4
	if (!ctx.cr6.eq) goto loc_8214CBD4;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r10,7892
	ctx.r5.s64 = ctx.r10.s64 + 7892;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// sth r31,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r31.u16);
	// stb r31,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r31.u8);
	// bl 0x8214cf90
	ctx.lr = 0x8214CA40;
	sub_8214CF90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214caa8
	if (!ctx.cr0.eq) goto loc_8214CAA8;
	// bl 0x82146770
	ctx.lr = 0x8214CA4C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214c898
	if (ctx.cr6.gt) goto loc_8214C898;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,7908
	ctx.r4.s64 = ctx.r11.s64 + 7908;
	// bl 0x8212d020
	ctx.lr = 0x8214CA68;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,7792
	ctx.r6.s64 = ctx.r11.s64 + 7792;
	// addi r5,r10,7484
	ctx.r5.s64 = ctx.r10.s64 + 7484;
	// addi r3,r9,1580
	ctx.r3.s64 = ctx.r9.s64 + 1580;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,483
	ctx.r7.s64 = 483;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214CA90;
	sub_821469C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c898
	if (ctx.cr6.eq) goto loc_8214C898;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x8214c894
	goto loc_8214C894;
loc_8214CAA8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8221cf20
	ctx.lr = 0x8214CAB0;
	sub_8221CF20(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r3,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r3.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r10,7956
	ctx.r5.s64 = ctx.r10.s64 + 7956;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// sth r31,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r31.u16);
	// stb r31,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r31.u8);
	// bl 0x8214cf90
	ctx.lr = 0x8214CAE4;
	sub_8214CF90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214cb54
	if (!ctx.cr0.eq) goto loc_8214CB54;
	// bl 0x82146770
	ctx.lr = 0x8214CAF0;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8214cb4c
	if (ctx.cr6.gt) goto loc_8214CB4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,7968
	ctx.r4.s64 = ctx.r11.s64 + 7968;
	// bl 0x8212d020
	ctx.lr = 0x8214CB0C;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,7792
	ctx.r6.s64 = ctx.r11.s64 + 7792;
	// addi r5,r10,7484
	ctx.r5.s64 = ctx.r10.s64 + 7484;
	// addi r3,r9,1580
	ctx.r3.s64 = ctx.r9.s64 + 1580;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r7,495
	ctx.r7.s64 = 495;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821469c8
	ctx.lr = 0x8214CB34;
	sub_821469C8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214cb4c
	if (ctx.cr6.eq) goto loc_8214CB4C;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8212d1b8
	ctx.lr = 0x8214CB4C;
	sub_8212D1B8(ctx, base);
loc_8214CB4C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8214cb70
	goto loc_8214CB70;
loc_8214CB54:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,8012
	ctx.r4.s64 = ctx.r11.s64 + 8012;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8221b878
	ctx.lr = 0x8214CB68;
	sub_8221B878(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8214CB70:
	// stb r11,33(r28)
	PPC_STORE_U8(ctx.r28.u32 + 33, ctx.r11.u8);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r10,8020
	ctx.r5.s64 = ctx.r10.s64 + 8020;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// sth r31,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r31.u16);
	// stb r31,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r31.u8);
	// bl 0x8214cf90
	ctx.lr = 0x8214CBA4;
	sub_8214CF90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214cbb4
	if (!ctx.cr0.eq) goto loc_8214CBB4;
	// stb r31,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r31.u8);
	// b 0x8214cbd4
	goto loc_8214CBD4;
loc_8214CBB4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,8036
	ctx.r4.s64 = ctx.r11.s64 + 8036;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8221b878
	ctx.lr = 0x8214CBC8;
	sub_8221B878(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r11.u8);
loc_8214CBD4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214CBD8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214CBE0"))) PPC_WEAK_FUNC(sub_8214CBE0);
PPC_FUNC_IMPL(__imp__sub_8214CBE0) {
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
	// li r30,8192
	ctx.r30.s64 = 8192;
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214ccac
	if (ctx.cr0.eq) goto loc_8214CCAC;
	// bl 0x8214cd48
	ctx.lr = 0x8214CC0C;
	sub_8214CD48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214cc7c
	if (!ctx.cr0.eq) goto loc_8214CC7C;
	// bl 0x82146770
	ctx.lr = 0x8214CC18;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214cc74
	if (ctx.cr6.gt) goto loc_8214CC74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8044
	ctx.r4.s64 = ctx.r11.s64 + 8044;
	// bl 0x8212d020
	ctx.lr = 0x8214CC34;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,8076
	ctx.r6.s64 = ctx.r11.s64 + 8076;
	// addi r5,r10,7484
	ctx.r5.s64 = ctx.r10.s64 + 7484;
	// addi r3,r9,1580
	ctx.r3.s64 = ctx.r9.s64 + 1580;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,529
	ctx.r7.s64 = 529;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214CC5C;
	sub_821469C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214cc74
	if (ctx.cr6.eq) goto loc_8214CC74;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d1b8
	ctx.lr = 0x8214CC74;
	sub_8212D1B8(ctx, base);
loc_8214CC74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214cd30
	goto loc_8214CD30;
loc_8214CC7C:
	// lwz r11,1060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214cc9c
	if (!ctx.cr6.eq) goto loc_8214CC9C;
	// lwz r11,9272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9272);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,1068(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1068, ctx.r10.u8);
	// b 0x8214cd2c
	goto loc_8214CD2C;
loc_8214CC9C:
	// lwz r11,1064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bge cr6,0x8214ccac
	if (!ctx.cr6.lt) goto loc_8214CCAC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8214CCAC:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214cccc
	if (ctx.cr6.eq) goto loc_8214CCCC;
	// lwz r11,9272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9272);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8214cccc
	if (ctx.cr6.lt) goto loc_8214CCCC;
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8214CCCC:
	// lwz r3,9276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9276);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,9264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9264);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,9272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9272);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,9272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9272, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8214cd14
	if (ctx.cr6.lt) goto loc_8214CD14;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,1068(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1068, ctx.r10.u8);
	// stb r9,9268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9268, ctx.r9.u8);
loc_8214CD14:
	// lbz r11,9268(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9268);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8214cd2c
	if (!ctx.cr0.eq) goto loc_8214CD2C;
	// lwz r11,9264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9264);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,9264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9264, ctx.r11.u32);
loc_8214CD2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214CD30:
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

__attribute__((alias("__imp__sub_8214CD48"))) PPC_WEAK_FUNC(sub_8214CD48);
PPC_FUNC_IMPL(__imp__sub_8214CD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8214CD50;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r11,5804
	ctx.r28.s64 = ctx.r11.s64 + 5804;
	// addi r29,r10,8180
	ctx.r29.s64 = ctx.r10.s64 + 8180;
loc_8214CD70:
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// bgt cr6,0x8214cea8
	if (ctx.cr6.gt) goto loc_8214CEA8;
	// lwz r3,9276(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9276);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CD94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214ce8c
	if (ctx.cr0.eq) goto loc_8214CE8C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_8214CDB8:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8214cdd8
	if (!ctx.cr0.eq) goto loc_8214CDD8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8214cdb8
	if (!ctx.cr6.eq) goto loc_8214CDB8;
loc_8214CDD8:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8214cf10
	if (ctx.cr0.eq) goto loc_8214CF10;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
loc_8214CDEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8214ce0c
	if (!ctx.cr0.eq) goto loc_8214CE0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8214cdec
	if (!ctx.cr6.eq) goto loc_8214CDEC;
loc_8214CE0C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8214cd70
	if (!ctx.cr0.eq) goto loc_8214CD70;
	// addi r31,r30,1060
	ctx.r31.s64 = ctx.r30.s64 + 1060;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8214d7b8
	ctx.lr = 0x8214CE24;
	sub_8214D7B8(ctx, base);
	// bl 0x82146770
	ctx.lr = 0x8214CE28;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8214ce8c
	if (ctx.cr6.gt) goto loc_8214CE8C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,8184
	ctx.r4.s64 = ctx.r11.s64 + 8184;
	// bl 0x8214b638
	ctx.lr = 0x8214CE48;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,1580
	ctx.r11.s64 = ctx.r11.s64 + 1580;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,8140
	ctx.r6.s64 = ctx.r10.s64 + 8140;
	// addi r5,r9,7484
	ctx.r5.s64 = ctx.r9.s64 + 7484;
	// li r7,617
	ctx.r7.s64 = 617;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214CE74;
	sub_821469C8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ce8c
	if (ctx.cr6.eq) goto loc_8214CE8C;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_8214CE88:
	// bl 0x8212d1b8
	ctx.lr = 0x8214CE8C;
	sub_8212D1B8(ctx, base);
loc_8214CE8C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214ce9c
	if (ctx.cr0.eq) goto loc_8214CE9C;
	// lwz r11,1060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// stw r11,1064(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1064, ctx.r11.u32);
loc_8214CE9C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214CEA0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_8214CEA8:
	// bl 0x82146770
	ctx.lr = 0x8214CEAC;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214cf08
	if (ctx.cr6.gt) goto loc_8214CF08;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,8116
	ctx.r4.s64 = ctx.r11.s64 + 8116;
	// bl 0x8212d020
	ctx.lr = 0x8214CEC8;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,8140
	ctx.r6.s64 = ctx.r11.s64 + 8140;
	// addi r5,r10,7484
	ctx.r5.s64 = ctx.r10.s64 + 7484;
	// addi r3,r9,1580
	ctx.r3.s64 = ctx.r9.s64 + 1580;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,590
	ctx.r7.s64 = 590;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214CEF0;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214cf08
	if (ctx.cr6.eq) goto loc_8214CF08;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x8214CF08;
	sub_8212D1B8(ctx, base);
loc_8214CF08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214cea0
	goto loc_8214CEA0;
loc_8214CF10:
	// addi r31,r30,1060
	ctx.r31.s64 = ctx.r30.s64 + 1060;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8214d7b8
	ctx.lr = 0x8214CF20;
	sub_8214D7B8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82146770
	ctx.lr = 0x8214CF28;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8214ce8c
	if (ctx.cr6.gt) goto loc_8214CE8C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,8184
	ctx.r4.s64 = ctx.r11.s64 + 8184;
	// bl 0x8214b638
	ctx.lr = 0x8214CF48;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,1580
	ctx.r11.s64 = ctx.r11.s64 + 1580;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,8140
	ctx.r6.s64 = ctx.r10.s64 + 8140;
	// addi r5,r9,7484
	ctx.r5.s64 = ctx.r9.s64 + 7484;
	// li r7,606
	ctx.r7.s64 = 606;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214CF74;
	sub_821469C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ce8c
	if (ctx.cr6.eq) goto loc_8214CE8C;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x8214ce88
	goto loc_8214CE88;
}

__attribute__((alias("__imp__sub_8214CF8C"))) PPC_WEAK_FUNC(sub_8214CF8C);
PPC_FUNC_IMPL(__imp__sub_8214CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214CF90"))) PPC_WEAK_FUNC(sub_8214CF90);
PPC_FUNC_IMPL(__imp__sub_8214CF90) {
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
	// lbz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 34);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r3,34
	ctx.r10.s64 = ctx.r3.s64 + 34;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214d010
	if (ctx.cr0.eq) goto loc_8214D010;
	// lis r8,-32056
	ctx.r8.s64 = -2100822016;
	// addi r8,r8,1992
	ctx.r8.s64 = ctx.r8.s64 + 1992;
loc_8214CFC4:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8214cffc
	if (!ctx.cr6.eq) goto loc_8214CFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214d000
	if (!ctx.cr6.eq) goto loc_8214D000;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x8214d014
	goto loc_8214D014;
loc_8214CFFC:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_8214D000:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8214cfc4
	if (!ctx.cr0.eq) goto loc_8214CFC4;
loc_8214D010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214D014:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8214d024
	if (!ctx.cr6.eq) goto loc_8214D024;
loc_8214D01C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214d070
	goto loc_8214D070;
loc_8214D024:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-23368
	ctx.r4.s64 = ctx.r11.s64 + -23368;
	// bl 0x822187b0
	ctx.lr = 0x8214D030;
	sub_822187B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214d01c
	if (ctx.cr0.eq) goto loc_8214D01C;
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5804
	ctx.r4.s64 = ctx.r11.s64 + 5804;
	// bl 0x822187b0
	ctx.lr = 0x8214D04C;
	sub_822187B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214d01c
	if (ctx.cr0.eq) goto loc_8214D01C;
	// subf r5,r31,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// bge cr6,0x8214d01c
	if (!ctx.cr6.lt) goto loc_8214D01C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221d030
	ctx.lr = 0x8214D06C;
	sub_8221D030(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8214D070:
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

__attribute__((alias("__imp__sub_8214D088"))) PPC_WEAK_FUNC(sub_8214D088);
PPC_FUNC_IMPL(__imp__sub_8214D088) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,2632
	ctx.r11.s64 = ctx.r11.s64 + 2632;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r10,r10,2184
	ctx.r10.s64 = ctx.r10.s64 + 2184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,2264
	ctx.r9.s64 = ctx.r9.s64 + 2264;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,-17440(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17440);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r6,r10,8340
	ctx.r6.s64 = ctx.r10.s64 + 8340;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r9,r9,8348
	ctx.r9.s64 = ctx.r9.s64 + 8348;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r7,r7,8356
	ctx.r7.s64 = ctx.r7.s64 + 8356;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,-17440(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17440);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lwz r10,-17440(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17440);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bl 0x82216618
	ctx.lr = 0x8214D144;
	sub_82216618(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// sth r30,140(r31)
	PPC_STORE_U16(ctx.r31.u32 + 140, ctx.r30.u16);
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

__attribute__((alias("__imp__sub_8214D168"))) PPC_WEAK_FUNC(sub_8214D168);
PPC_FUNC_IMPL(__imp__sub_8214D168) {
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
	// bl 0x8214d1b8
	ctx.lr = 0x8214D188;
	sub_8214D1B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214d198
	if (ctx.cr0.eq) goto loc_8214D198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x8214D198;
	sub_82120A70(ctx, base);
loc_8214D198:
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

__attribute__((alias("__imp__sub_8214D1B4"))) PPC_WEAK_FUNC(sub_8214D1B4);
PPC_FUNC_IMPL(__imp__sub_8214D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D1B8"))) PPC_WEAK_FUNC(sub_8214D1B8);
PPC_FUNC_IMPL(__imp__sub_8214D1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8214D1C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r10,r10,8340
	ctx.r10.s64 = ctx.r10.s64 + 8340;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r9,8348
	ctx.r9.s64 = ctx.r9.s64 + 8348;
	// addi r8,r8,8356
	ctx.r8.s64 = ctx.r8.s64 + 8356;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82216710
	ctx.lr = 0x8214D214;
	sub_82216710(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82145e70
	ctx.lr = 0x8214D21C;
	sub_82145E70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821472c8
	ctx.lr = 0x8214D224;
	sub_821472C8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,2632
	ctx.r11.s64 = ctx.r11.s64 + 2632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214D238"))) PPC_WEAK_FUNC(sub_8214D238);
PPC_FUNC_IMPL(__imp__sub_8214D238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x8214D240;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// sth r11,140(r31)
	PPC_STORE_U16(ctx.r31.u32 + 140, ctx.r11.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214d418
	if (ctx.cr0.eq) goto loc_8214D418;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214d418
	if (ctx.cr0.eq) goto loc_8214D418;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82146770
	ctx.lr = 0x8214D2A8;
	sub_82146770(ctx, base);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// addi r28,r11,1580
	ctx.r28.s64 = ctx.r11.s64 + 1580;
	// addi r27,r10,7484
	ctx.r27.s64 = ctx.r10.s64 + 7484;
	// addi r26,r9,8232
	ctx.r26.s64 = ctx.r9.s64 + 8232;
	// bgt cr6,0x8214d33c
	if (ctx.cr6.gt) goto loc_8214D33C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8214c050
	ctx.lr = 0x8214D2D8;
	sub_8214C050(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x8214D2DC;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,8212
	ctx.r4.s64 = ctx.r11.s64 + 8212;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8214b638
	ctx.lr = 0x8214D2F0;
	sub_8214B638(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r7,720
	ctx.r7.s64 = 720;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214D30C;
	sub_821469C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d324
	if (ctx.cr6.eq) goto loc_8214D324;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x8214D324;
	sub_8212D1B8(ctx, base);
loc_8214D324:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d33c
	if (ctx.cr6.eq) goto loc_8214D33C;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8212d1b8
	ctx.lr = 0x8214D33C;
	sub_8212D1B8(ctx, base);
loc_8214D33C:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lhz r25,140(r31)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r31.u32 + 140);
	// bl 0x82238408
	ctx.lr = 0x8214D350;
	sub_82238408(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d020
	ctx.lr = 0x8214D35C;
	sub_8212D020(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8213ecd8
	ctx.lr = 0x8214D368;
	sub_8213ECD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8214d3a4
	if (ctx.cr6.eq) goto loc_8214D3A4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x8214D3A4;
	sub_8212D1B8(ctx, base);
loc_8214D3A4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214d424
	if (ctx.cr0.eq) goto loc_8214D424;
	// lwz r31,84(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x8214d424
	if (ctx.cr6.eq) goto loc_8214D424;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x8214d424
	if (ctx.cr6.eq) goto loc_8214D424;
	// bl 0x82146770
	ctx.lr = 0x8214D3C4;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214d418
	if (ctx.cr6.gt) goto loc_8214D418;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,8260
	ctx.r4.s64 = ctx.r11.s64 + 8260;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8214b638
	ctx.lr = 0x8214D3E4;
	sub_8214B638(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r7,728
	ctx.r7.s64 = 728;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214D400;
	sub_821469C8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d418
	if (ctx.cr6.eq) goto loc_8214D418;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8212d1b8
	ctx.lr = 0x8214D418;
	sub_8212D1B8(ctx, base);
loc_8214D418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214D41C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_8214D424:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8214d41c
	goto loc_8214D41C;
}

__attribute__((alias("__imp__sub_8214D42C"))) PPC_WEAK_FUNC(sub_8214D42C);
PPC_FUNC_IMPL(__imp__sub_8214D42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D430"))) PPC_WEAK_FUNC(sub_8214D430);
PPC_FUNC_IMPL(__imp__sub_8214D430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8214D438;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r26,r29,8
	ctx.r26.s64 = ctx.r29.s64 + 8;
	// bne cr6,0x8214d458
	if (!ctx.cr6.eq) goto loc_8214D458;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_8214D458:
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r30,-17448(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// lwz r31,-17440(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17440);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8214D470;
	sub_821FD9D8(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,9300
	ctx.r5.s64 = 9300;
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
	ctx.lr = 0x8214D4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214d4c0
	if (ctx.cr6.eq) goto loc_8214D4C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8214D4C0;
	sub_821FD9E0(ctx, base);
loc_8214D4C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8214d52c
	if (ctx.cr6.eq) goto loc_8214D52C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r29,80
	ctx.r10.s64 = ctx.r29.s64 + 80;
	// addi r11,r11,8360
	ctx.r11.s64 = ctx.r11.s64 + 8360;
	// stw r10,9276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9276, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,9280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9280, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d518
	if (ctx.cr6.eq) goto loc_8214D518;
loc_8214D4F0:
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
	// bne 0x8214d4f0
	if (!ctx.cr0.eq) goto loc_8214D4F0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,9284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9284, ctx.r11.u32);
	// b 0x8214d51c
	goto loc_8214D51C;
loc_8214D518:
	// stw r27,9284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9284, ctx.r27.u32);
loc_8214D51C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r27,9296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9296, ctx.r27.u32);
	// stw r11,9292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9292, ctx.r11.u32);
	// b 0x8214d530
	goto loc_8214D530;
loc_8214D52C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8214D530:
	// bl 0x82144b48
	ctx.lr = 0x8214D534;
	sub_82144B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821476c0
	ctx.lr = 0x8214D55C;
	sub_821476C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214D564"))) PPC_WEAK_FUNC(sub_8214D564);
PPC_FUNC_IMPL(__imp__sub_8214D564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D568"))) PPC_WEAK_FUNC(sub_8214D568);
PPC_FUNC_IMPL(__imp__sub_8214D568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8214D570;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8214d604
	if (ctx.cr6.eq) goto loc_8214D604;
	// bl 0x82146770
	ctx.lr = 0x8214D58C;
	sub_82146770(ctx, base);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r31,r11,7484
	ctx.r31.s64 = ctx.r11.s64 + 7484;
	// bgt cr6,0x8214d5ec
	if (ctx.cr6.gt) goto loc_8214D5EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,2116
	ctx.r4.s64 = ctx.r11.s64 + 2116;
	// bl 0x8212d020
	ctx.lr = 0x8214D5B0;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,8308
	ctx.r6.s64 = ctx.r11.s64 + 8308;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r10,1580
	ctx.r3.s64 = ctx.r10.s64 + 1580;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,763
	ctx.r7.s64 = 763;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821469c8
	ctx.lr = 0x8214D5D4;
	sub_821469C8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d5ec
	if (ctx.cr6.eq) goto loc_8214D5EC;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212d1b8
	ctx.lr = 0x8214D5EC;
	sub_8212D1B8(ctx, base);
loc_8214D5EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,2148
	ctx.r3.s64 = ctx.r11.s64 + 2148;
	// li r5,764
	ctx.r5.s64 = 764;
	// bl 0x821470a0
	ctx.lr = 0x8214D600;
	sub_821470A0(ctx, base);
	// b 0x8214d6f0
	goto loc_8214D6F0;
loc_8214D604:
	// addic. r28,r3,-8
	ctx.xer.ca = ctx.r3.u32 > 7;
	ctx.r28.s64 = ctx.r3.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8214d618
	if (ctx.cr0.eq) goto loc_8214D618;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_8214D618:
	// addic. r11,r3,-8
	ctx.xer.ca = ctx.r3.u32 > 7;
	ctx.r11.s64 = ctx.r3.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// bne 0x8214d628
	if (!ctx.cr0.eq) goto loc_8214D628;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8214D628:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8214D638:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8214d6a4
	if (!ctx.cr6.lt) goto loc_8214D6A4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214d6a4
	if (ctx.cr6.eq) goto loc_8214D6A4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x8214d67c
	if (ctx.cr0.eq) goto loc_8214D67C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8214D67C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r7,r29,34
	ctx.r7.s64 = ctx.r29.s64 + 34;
	// addi r6,r29,1068
	ctx.r6.s64 = ctx.r29.s64 + 1068;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D6A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8214d638
	goto loc_8214D638;
loc_8214D6A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d6c4
	if (ctx.cr6.eq) goto loc_8214D6C4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x8214d6c4
	if (!ctx.cr0.eq) goto loc_8214D6C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d6f8
	ctx.lr = 0x8214D6C4;
	sub_8214D6F8(ctx, base);
loc_8214D6C4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8214d6f0
	if (ctx.cr6.eq) goto loc_8214D6F0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bne 0x8214d6f0
	if (!ctx.cr0.eq) goto loc_8214D6F0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214D6F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214D6F8"))) PPC_WEAK_FUNC(sub_8214D6F8);
PPC_FUNC_IMPL(__imp__sub_8214D6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8214D700;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8214d7a0
	if (ctx.cr6.gt) goto loc_8214D7A0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8214d754
	if (ctx.cr6.eq) goto loc_8214D754;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
loc_8214D738:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821463f8
	ctx.lr = 0x8214D748;
	sub_821463F8(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8214d738
	if (!ctx.cr6.eq) goto loc_8214D738;
loc_8214D754:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8214d79c
	if (ctx.cr6.eq) goto loc_8214D79C;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
loc_8214D780:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146360
	ctx.lr = 0x8214D790;
	sub_82146360(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8214d780
	if (!ctx.cr6.eq) goto loc_8214D780;
loc_8214D79C:
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
loc_8214D7A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214D7A8"))) PPC_WEAK_FUNC(sub_8214D7A8);
PPC_FUNC_IMPL(__imp__sub_8214D7A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8214d168
	sub_8214D168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214D7B0"))) PPC_WEAK_FUNC(sub_8214D7B0);
PPC_FUNC_IMPL(__imp__sub_8214D7B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x8214d168
	sub_8214D168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214D7B8"))) PPC_WEAK_FUNC(sub_8214D7B8);
PPC_FUNC_IMPL(__imp__sub_8214D7B8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x8214d7c8
	goto loc_8214D7C8;
loc_8214D7C4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8214D7C8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8214d7c4
	if (ctx.cr6.eq) goto loc_8214D7C4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8214d7fc
	if (!ctx.cr6.eq) goto loc_8214D7FC;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r11,2248
	ctx.r11.s64 = ctx.r11.s64 + 2248;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,88
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 88, ctx.xer);
	// bne cr6,0x8214d7fc
	if (!ctx.cr6.eq) goto loc_8214D7FC;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
loc_8214D7FC:
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r7,r10,1992
	ctx.r7.s64 = ctx.r10.s64 + 1992;
	// addi r8,r11,2504
	ctx.r8.s64 = ctx.r11.s64 + 2504;
loc_8214D80C:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm. r6,r9,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8214d840
	if (ctx.cr0.eq) goto loc_8214D840;
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8214d834
	if (ctx.cr0.eq) goto loc_8214D834;
	// addi r11,r10,-48
	ctx.r11.s64 = ctx.r10.s64 + -48;
loc_8214D82C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x8214d844
	goto loc_8214D844;
loc_8214D834:
	// lbzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// b 0x8214d82c
	goto loc_8214D82C;
loc_8214D840:
	// li r11,16
	ctx.r11.s64 = 16;
loc_8214D844:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x8214d80c
	goto loc_8214D80C;
}

__attribute__((alias("__imp__sub_8214D868"))) PPC_WEAK_FUNC(sub_8214D868);
PPC_FUNC_IMPL(__imp__sub_8214D868) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214D86C"))) PPC_WEAK_FUNC(sub_8214D86C);
PPC_FUNC_IMPL(__imp__sub_8214D86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214D870"))) PPC_WEAK_FUNC(sub_8214D870);
PPC_FUNC_IMPL(__imp__sub_8214D870) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,8548
	ctx.r11.s64 = ctx.r11.s64 + 8548;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82146770
	ctx.lr = 0x8214D894;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8214d8f8
	if (ctx.cr6.gt) goto loc_8214D8F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,8396
	ctx.r4.s64 = ctx.r11.s64 + 8396;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8214b638
	ctx.lr = 0x8214D8B4;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,1580
	ctx.r11.s64 = ctx.r11.s64 + 1580;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,8424
	ctx.r6.s64 = ctx.r10.s64 + 8424;
	// addi r5,r9,8452
	ctx.r5.s64 = ctx.r9.s64 + 8452;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214D8E0;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d8f8
	if (ctx.cr6.eq) goto loc_8214D8F8;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x8214D8F8;
	sub_8212D1B8(ctx, base);
loc_8214D8F8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14152);
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8214d92c
	goto loc_8214D92C;
loc_8214D91C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8214d938
	if (ctx.cr6.eq) goto loc_8214D938;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8214D92C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8214d91c
	if (!ctx.cr6.eq) goto loc_8214D91C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8214D938:
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8214d9c4
	if (ctx.cr6.eq) goto loc_8214D9C4;
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8214d9b8
	if (!ctx.cr6.gt) goto loc_8214D9B8;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214d9b8
	if (ctx.cr0.eq) goto loc_8214D9B8;
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d9b8
	if (ctx.cr6.eq) goto loc_8214D9B8;
loc_8214D998:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214d9a8
	if (ctx.cr6.eq) goto loc_8214D9A8;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_8214D9A8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8214d998
	if (!ctx.cr0.eq) goto loc_8214D998;
loc_8214D9B8:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_8214D9C4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82238420
	ctx.lr = 0x8214D9CC;
	sub_82238420(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214d9e4
	if (ctx.cr6.eq) goto loc_8214D9E4;
	// bl 0x8212d1b8
	ctx.lr = 0x8214D9E4;
	sub_8212D1B8(ctx, base);
loc_8214D9E4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,2632
	ctx.r11.s64 = ctx.r11.s64 + 2632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8214DA04"))) PPC_WEAK_FUNC(sub_8214DA04);
PPC_FUNC_IMPL(__imp__sub_8214DA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214DA08"))) PPC_WEAK_FUNC(sub_8214DA08);
PPC_FUNC_IMPL(__imp__sub_8214DA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8214DA10;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,8548
	ctx.r11.s64 = ctx.r11.s64 + 8548;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214da78
	if (ctx.cr6.eq) goto loc_8214DA78;
loc_8214DA50:
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
	// bne 0x8214da50
	if (!ctx.cr0.eq) goto loc_8214DA50;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8214da7c
	goto loc_8214DA7C;
loc_8214DA78:
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8214DA7C:
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// bl 0x82146770
	ctx.lr = 0x8214DA84;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8214dae8
	if (ctx.cr6.gt) goto loc_8214DAE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,8492
	ctx.r4.s64 = ctx.r11.s64 + 8492;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8214b638
	ctx.lr = 0x8214DAA4;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,1580
	ctx.r11.s64 = ctx.r11.s64 + 1580;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,8520
	ctx.r6.s64 = ctx.r10.s64 + 8520;
	// addi r5,r9,8452
	ctx.r5.s64 = ctx.r9.s64 + 8452;
	// li r7,33
	ctx.r7.s64 = 33;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214DAD0;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214dae8
	if (ctx.cr6.eq) goto loc_8214DAE8;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x8214DAE8;
	sub_8212D1B8(ctx, base);
loc_8214DAE8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r29,14152(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14152);
	// addi r30,r29,112
	ctx.r30.s64 = ctx.r29.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,120(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// bl 0x82146590
	ctx.lr = 0x8214DB08;
	sub_82146590(ctx, base);
	// lwz r10,120(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// lwz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214db20
	if (ctx.cr0.eq) goto loc_8214DB20;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8214DB20:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214DB38"))) PPC_WEAK_FUNC(sub_8214DB38);
PPC_FUNC_IMPL(__imp__sub_8214DB38) {
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
	// bl 0x8214d870
	ctx.lr = 0x8214DB58;
	sub_8214D870(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214db68
	if (ctx.cr0.eq) goto loc_8214DB68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x8214DB68;
	sub_82120A70(ctx, base);
loc_8214DB68:
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

__attribute__((alias("__imp__sub_8214DB84"))) PPC_WEAK_FUNC(sub_8214DB84);
PPC_FUNC_IMPL(__imp__sub_8214DB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214DB88"))) PPC_WEAK_FUNC(sub_8214DB88);
PPC_FUNC_IMPL(__imp__sub_8214DB88) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,9576
	ctx.r11.s64 = ctx.r11.s64 + 9576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82145e70
	ctx.lr = 0x8214DBB4;
	sub_82145E70(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214dbc4
	if (ctx.cr0.eq) goto loc_8214DBC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x8214DBC4;
	sub_82120A70(ctx, base);
loc_8214DBC4:
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

__attribute__((alias("__imp__sub_8214DBE0"))) PPC_WEAK_FUNC(sub_8214DBE0);
PPC_FUNC_IMPL(__imp__sub_8214DBE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8214DBE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,14164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214dc8c
	if (!ctx.cr6.eq) goto loc_8214DC8C;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r31,-17448(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// lwz r30,-17440(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8214DC14;
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
	// li r5,13376
	ctx.r5.s64 = 13376;
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
	ctx.lr = 0x8214DC50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8214dc64
	if (ctx.cr6.eq) goto loc_8214DC64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8214DC64;
	sub_821FD9E0(ctx, base);
loc_8214DC64:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214dc7c
	if (ctx.cr6.eq) goto loc_8214DC7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214dd50
	ctx.lr = 0x8214DC74;
	sub_8214DD50(ctx, base);
	// stw r3,14164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14164, ctx.r3.u32);
	// b 0x8214dc84
	goto loc_8214DC84;
loc_8214DC7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14164, ctx.r11.u32);
loc_8214DC84:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// b 0x8214dcf4
	goto loc_8214DCF4;
loc_8214DC8C:
	// bl 0x82146770
	ctx.lr = 0x8214DC90;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214dcec
	if (ctx.cr6.gt) goto loc_8214DCEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,8556
	ctx.r4.s64 = ctx.r11.s64 + 8556;
	// bl 0x8212d020
	ctx.lr = 0x8214DCAC;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,8592
	ctx.r6.s64 = ctx.r11.s64 + 8592;
	// addi r5,r10,8620
	ctx.r5.s64 = ctx.r10.s64 + 8620;
	// addi r3,r9,8644
	ctx.r3.s64 = ctx.r9.s64 + 8644;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,59
	ctx.r7.s64 = 59;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214DCD4;
	sub_821469C8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214dcec
	if (ctx.cr6.eq) goto loc_8214DCEC;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212d1b8
	ctx.lr = 0x8214DCEC;
	sub_8212D1B8(ctx, base);
loc_8214DCEC:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_8214DCF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214DCFC"))) PPC_WEAK_FUNC(sub_8214DCFC);
PPC_FUNC_IMPL(__imp__sub_8214DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214DD00"))) PPC_WEAK_FUNC(sub_8214DD00);
PPC_FUNC_IMPL(__imp__sub_8214DD00) {
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
	// lwz r3,14164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8214dd3c
	if (!ctx.cr6.eq) goto loc_8214DD3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,8620
	ctx.r4.s64 = ctx.r11.s64 + 8620;
	// addi r3,r10,1724
	ctx.r3.s64 = ctx.r10.s64 + 1724;
	// li r5,65
	ctx.r5.s64 = 65;
	// bl 0x821470a0
	ctx.lr = 0x8214DD38;
	sub_821470A0(ctx, base);
	// lwz r3,14164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14164);
loc_8214DD3C:
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

__attribute__((alias("__imp__sub_8214DD50"))) PPC_WEAK_FUNC(sub_8214DD50);
PPC_FUNC_IMPL(__imp__sub_8214DD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8214DD58;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// addi r11,r11,2264
	ctx.r11.s64 = ctx.r11.s64 + 2264;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r7,r10,5660
	ctx.r7.s64 = ctx.r10.s64 + 5660;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r9,r9,9584
	ctx.r9.s64 = ctx.r9.s64 + 9584;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r8,r8,9592
	ctx.r8.s64 = ctx.r8.s64 + 9592;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r6,2000
	ctx.r6.s64 = 2000;
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r27,r31,112
	ctx.r27.s64 = ctx.r31.s64 + 112;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r26,r31,68
	ctx.r26.s64 = ctx.r31.s64 + 68;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lwz r10,-17440(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// sth r30,188(r31)
	PPC_STORE_U16(ctx.r31.u32 + 188, ctx.r30.u16);
	// sth r30,190(r31)
	PPC_STORE_U16(ctx.r31.u32 + 190, ctx.r30.u16);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r6,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r6.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r30,13368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13368, ctx.r30.u32);
	// bl 0x82144b48
	ctx.lr = 0x8214DE90;
	sub_82144B48(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r3,28
	ctx.r5.s64 = ctx.r3.s64 + 28;
	// bgt cr6,0x8214dea8
	if (ctx.cr6.gt) goto loc_8214DEA8;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
loc_8214DEA8:
	// bl 0x82146360
	ctx.lr = 0x8214DEAC;
	sub_82146360(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r11,r11,-7136
	ctx.r11.s64 = ctx.r11.s64 + -7136;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x82219130
	ctx.lr = 0x8214DED8;
	sub_82219130(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-3208
	ctx.r11.s64 = ctx.r11.s64 + -3208;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// bl 0x82144b48
	ctx.lr = 0x8214DF0C;
	sub_82144B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r11,r11,-7304
	ctx.r11.s64 = ctx.r11.s64 + -7304;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x82219130
	ctx.lr = 0x8214DF4C;
	sub_82219130(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-3184
	ctx.r11.s64 = ctx.r11.s64 + -3184;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// bl 0x82144b48
	ctx.lr = 0x8214DF80;
	sub_82144B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214DF94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// stw r11,13364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13364, ctx.r11.u32);
	// lwz r28,-17440(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// lwz r29,-17448(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17448);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8214DFB0;
	sub_821FD9D8(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,176
	ctx.r5.s64 = 176;
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
	ctx.lr = 0x8214DFEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8214e000
	if (ctx.cr6.eq) goto loc_8214E000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8214E000;
	sub_821FD9E0(ctx, base);
loc_8214E000:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8214e018
	if (ctx.cr6.eq) goto loc_8214E018;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8214fb78
	ctx.lr = 0x8214E014;
	sub_8214FB78(ctx, base);
	// b 0x8214e01c
	goto loc_8214E01C;
loc_8214E018:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8214E01C:
	// stw r3,13360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13360, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214E02C"))) PPC_WEAK_FUNC(sub_8214E02C);
PPC_FUNC_IMPL(__imp__sub_8214E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E030"))) PPC_WEAK_FUNC(sub_8214E030);
PPC_FUNC_IMPL(__imp__sub_8214E030) {
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
	// bl 0x8214e080
	ctx.lr = 0x8214E050;
	sub_8214E080(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e060
	if (ctx.cr0.eq) goto loc_8214E060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x8214E060;
	sub_82120A70(ctx, base);
loc_8214E060:
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

__attribute__((alias("__imp__sub_8214E07C"))) PPC_WEAK_FUNC(sub_8214E07C);
PPC_FUNC_IMPL(__imp__sub_8214E07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E080"))) PPC_WEAK_FUNC(sub_8214E080);
PPC_FUNC_IMPL(__imp__sub_8214E080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8214E088;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,9584
	ctx.r11.s64 = ctx.r11.s64 + 9584;
	// addi r10,r10,9592
	ctx.r10.s64 = ctx.r10.s64 + 9592;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r10,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r10.u32);
	// addi r23,r28,68
	ctx.r23.s64 = ctx.r28.s64 + 68;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// addi r31,r28,112
	ctx.r31.s64 = ctx.r28.s64 + 112;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214e0d0
	if (!ctx.cr6.eq) goto loc_8214E0D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq cr6,0x8214e0d4
	if (ctx.cr6.eq) goto loc_8214E0D4;
loc_8214E0D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8214E0D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e0f4
	if (ctx.cr0.eq) goto loc_8214E0F4;
	// bl 0x82144b48
	ctx.lr = 0x8214E0E0;
	sub_82144B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214E0F4:
	// lwz r29,72(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r24,r28,72
	ctx.r24.s64 = ctx.r28.s64 + 72;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8214e208
	if (ctx.cr6.eq) goto loc_8214E208;
	// lis r27,-32029
	ctx.r27.s64 = -2099052544;
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
loc_8214E110:
	// lwz r31,20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8214e18c
	if (ctx.cr6.eq) goto loc_8214E18C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-4624(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4624);
	// bl 0x822014c0
	ctx.lr = 0x8214E128;
	sub_822014C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,-17448(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17448);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8214E150;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
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
	ctx.lr = 0x8214E17C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214e18c
	if (ctx.cr6.eq) goto loc_8214E18C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8214E18C;
	sub_821FD9E0(ctx, base);
loc_8214E18C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214e1a0
	if (!ctx.cr6.eq) goto loc_8214E1A0;
	// b 0x8214e1fc
	goto loc_8214E1FC;
loc_8214E1A0:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214e1cc
	if (ctx.cr6.eq) goto loc_8214E1CC;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8214e1c0
	goto loc_8214E1C0;
loc_8214E1B8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8214E1C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214e1b8
	if (!ctx.cr6.eq) goto loc_8214E1B8;
	// b 0x8214e1fc
	goto loc_8214E1FC;
loc_8214E1CC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214e1ec
	if (!ctx.cr6.eq) goto loc_8214E1EC;
loc_8214E1D8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8214e1d8
	if (ctx.cr6.eq) goto loc_8214E1D8;
loc_8214E1EC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214e1fc
	if (ctx.cr6.eq) goto loc_8214E1FC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8214E1FC:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x8214e110
	if (!ctx.cr6.eq) goto loc_8214E110;
loc_8214E208:
	// bl 0x82144b48
	ctx.lr = 0x8214E20C;
	sub_82144B48(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8214e228
	if (!ctx.cr6.gt) goto loc_8214E228;
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// bl 0x82146360
	ctx.lr = 0x8214E224;
	sub_82146360(ctx, base);
	// b 0x8214e230
	goto loc_8214E230;
loc_8214E228:
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// bl 0x821463f8
	ctx.lr = 0x8214E230;
	sub_821463F8(ctx, base);
loc_8214E230:
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// addi r3,r28,232
	ctx.r3.s64 = ctx.r28.s64 + 232;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e248
	if (ctx.cr6.eq) goto loc_8214E248;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E248;
	sub_8212D1B8(ctx, base);
loc_8214E248:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// addi r3,r28,216
	ctx.r3.s64 = ctx.r28.s64 + 216;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e260
	if (ctx.cr6.eq) goto loc_8214E260;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E260;
	sub_8212D1B8(ctx, base);
loc_8214E260:
	// lwz r11,208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// addi r3,r28,204
	ctx.r3.s64 = ctx.r28.s64 + 204;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e278
	if (ctx.cr6.eq) goto loc_8214E278;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E278;
	sub_8212D1B8(ctx, base);
loc_8214E278:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// addi r3,r28,192
	ctx.r3.s64 = ctx.r28.s64 + 192;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e290
	if (ctx.cr6.eq) goto loc_8214E290;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E290;
	sub_8212D1B8(ctx, base);
loc_8214E290:
	// lwz r11,180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// addi r3,r28,176
	ctx.r3.s64 = ctx.r28.s64 + 176;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e2a8
	if (ctx.cr6.eq) goto loc_8214E2A8;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E2A8;
	sub_8212D1B8(ctx, base);
loc_8214E2A8:
	// lwz r11,168(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// addi r3,r28,164
	ctx.r3.s64 = ctx.r28.s64 + 164;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e2c0
	if (ctx.cr6.eq) goto loc_8214E2C0;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E2C0;
	sub_8212D1B8(ctx, base);
loc_8214E2C0:
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// addi r3,r28,152
	ctx.r3.s64 = ctx.r28.s64 + 152;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e2d8
	if (ctx.cr6.eq) goto loc_8214E2D8;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E2D8;
	sub_8212D1B8(ctx, base);
loc_8214E2D8:
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// addi r3,r28,140
	ctx.r3.s64 = ctx.r28.s64 + 140;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e2f0
	if (ctx.cr6.eq) goto loc_8214E2F0;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E2F0;
	sub_8212D1B8(ctx, base);
loc_8214E2F0:
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// addi r3,r28,128
	ctx.r3.s64 = ctx.r28.s64 + 128;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e308
	if (ctx.cr6.eq) goto loc_8214E308;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E308;
	sub_8212D1B8(ctx, base);
loc_8214E308:
	// lwz r31,8(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8214e338
	if (ctx.cr6.eq) goto loc_8214E338;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8214f520
	ctx.lr = 0x8214E320;
	sub_8214F520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82120a70
	ctx.lr = 0x8214E32C;
	sub_82120A70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8214f520
	ctx.lr = 0x8214E338;
	sub_8214F520(ctx, base);
loc_8214E338:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r24,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r24.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r24,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r24.u32);
	// addi r11,r11,5660
	ctx.r11.s64 = ctx.r11.s64 + 5660;
	// stw r22,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r22.u32);
	// addi r10,r10,9576
	ctx.r10.s64 = ctx.r10.s64 + 9576;
	// stw r22,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r22.u32);
	// stw r22,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r22.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x82145e70
	ctx.lr = 0x8214E36C;
	sub_82145E70(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214E374"))) PPC_WEAK_FUNC(sub_8214E374);
PPC_FUNC_IMPL(__imp__sub_8214E374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E378"))) PPC_WEAK_FUNC(sub_8214E378);
PPC_FUNC_IMPL(__imp__sub_8214E378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8214E380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,14164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14164, ctx.r11.u32);
	// beq cr6,0x8214e418
	if (ctx.cr6.eq) goto loc_8214E418;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-4624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4624);
	// bl 0x822014c0
	ctx.lr = 0x8214E3AC;
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
	ctx.lr = 0x8214E3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lwz r30,-17448(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8214E3D8;
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
	ctx.lr = 0x8214E408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214e418
	if (ctx.cr6.eq) goto loc_8214E418;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8214E418;
	sub_821FD9E0(ctx, base);
loc_8214E418:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214E420"))) PPC_WEAK_FUNC(sub_8214E420);
PPC_FUNC_IMPL(__imp__sub_8214E420) {
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
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214e4b8
	if (!ctx.cr6.gt) goto loc_8214E4B8;
	// subf. r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bgt 0x8214e584
	if (ctx.cr0.gt) goto loc_8214E584;
	// bl 0x82146770
	ctx.lr = 0x8214E450;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8214e4ac
	if (ctx.cr6.gt) goto loc_8214E4AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8656
	ctx.r4.s64 = ctx.r11.s64 + 8656;
	// bl 0x8212d020
	ctx.lr = 0x8214E46C;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,8696
	ctx.r6.s64 = ctx.r11.s64 + 8696;
	// addi r5,r10,8620
	ctx.r5.s64 = ctx.r10.s64 + 8620;
	// addi r3,r9,8644
	ctx.r3.s64 = ctx.r9.s64 + 8644;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,209
	ctx.r7.s64 = 209;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821469c8
	ctx.lr = 0x8214E494;
	sub_821469C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e4ac
	if (ctx.cr6.eq) goto loc_8214E4AC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E4AC;
	sub_8212D1B8(ctx, base);
loc_8214E4AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// b 0x8214e584
	goto loc_8214E584;
loc_8214E4B8:
	// lwz r11,13368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13368);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214e544
	if (ctx.cr6.eq) goto loc_8214E544;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8214e508
	if (ctx.cr6.eq) goto loc_8214E508;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214e4e8
	if (ctx.cr6.eq) goto loc_8214E4E8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8214e584
	if (!ctx.cr6.eq) goto loc_8214E584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214e598
	ctx.lr = 0x8214E4E4;
	sub_8214E598(ctx, base);
	// b 0x8214e584
	goto loc_8214E584;
loc_8214E4E8:
	// bl 0x82144b48
	ctx.lr = 0x8214E4EC;
	sub_82144B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,13372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13372, ctx.r3.u32);
	// b 0x8214e580
	goto loc_8214E580;
loc_8214E508:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150fb0
	ctx.lr = 0x8214E510;
	sub_82150FB0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e524
	if (ctx.cr6.eq) goto loc_8214E524;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8214e528
	goto loc_8214E528;
loc_8214E524:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214E528:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e538
	if (ctx.cr6.eq) goto loc_8214E538;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8214e580
	goto loc_8214E580;
loc_8214E538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214f250
	ctx.lr = 0x8214E540;
	sub_8214F250(ctx, base);
	// b 0x8214e584
	goto loc_8214E584;
loc_8214E544:
	// bl 0x82144b48
	ctx.lr = 0x8214E548;
	sub_82144B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e568
	if (ctx.cr0.eq) goto loc_8214E568;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8214e580
	goto loc_8214E580;
loc_8214E568:
	// bl 0x82144b48
	ctx.lr = 0x8214E56C;
	sub_82144B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8214E580:
	// stw r11,13368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13368, ctx.r11.u32);
loc_8214E584:
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

__attribute__((alias("__imp__sub_8214E598"))) PPC_WEAK_FUNC(sub_8214E598);
PPC_FUNC_IMPL(__imp__sub_8214E598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8214E5A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r29,72
	ctx.r30.s64 = ctx.r29.s64 + 72;
	// lwz r31,72(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8214e644
	if (ctx.cr6.eq) goto loc_8214E644;
loc_8214E5BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82150910
	ctx.lr = 0x8214E5C8;
	sub_82150910(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214e5dc
	if (!ctx.cr6.eq) goto loc_8214E5DC;
	// b 0x8214e638
	goto loc_8214E638;
loc_8214E5DC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214e608
	if (ctx.cr6.eq) goto loc_8214E608;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8214e5fc
	goto loc_8214E5FC;
loc_8214E5F4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8214E5FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214e5f4
	if (!ctx.cr6.eq) goto loc_8214E5F4;
	// b 0x8214e638
	goto loc_8214E638;
loc_8214E608:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214e628
	if (!ctx.cr6.eq) goto loc_8214E628;
loc_8214E614:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8214e614
	if (ctx.cr6.eq) goto loc_8214E614;
loc_8214E628:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214e638
	if (ctx.cr6.eq) goto loc_8214E638;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8214E638:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8214e5bc
	if (!ctx.cr6.eq) goto loc_8214E5BC;
loc_8214E644:
	// lwz r3,13360(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214e664
	if (ctx.cr6.eq) goto loc_8214E664;
	// lwz r11,13364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13364);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214e664
	if (!ctx.cr6.eq) goto loc_8214E664;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82150910
	ctx.lr = 0x8214E664;
	sub_82150910(ctx, base);
loc_8214E664:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214E66C"))) PPC_WEAK_FUNC(sub_8214E66C);
PPC_FUNC_IMPL(__imp__sub_8214E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E670"))) PPC_WEAK_FUNC(sub_8214E670);
PPC_FUNC_IMPL(__imp__sub_8214E670) {
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
	// lwz r11,13304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13304);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8214e6c4
	if (!ctx.cr6.eq) goto loc_8214E6C4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8214e6b4
	if (!ctx.cr6.eq) goto loc_8214E6B4;
	// addi r3,r31,-68
	ctx.r3.s64 = ctx.r31.s64 + -68;
	// bl 0x8214e728
	ctx.lr = 0x8214E6A4;
	sub_8214E728(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e6b4
	if (ctx.cr0.eq) goto loc_8214E6B4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8214e6c0
	goto loc_8214E6C0;
loc_8214E6B4:
	// addi r3,r31,-68
	ctx.r3.s64 = ctx.r31.s64 + -68;
	// bl 0x8214f250
	ctx.lr = 0x8214E6BC;
	sub_8214F250(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_8214E6C0:
	// stw r11,13300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13300, ctx.r11.u32);
loc_8214E6C4:
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

__attribute__((alias("__imp__sub_8214E6D8"))) PPC_WEAK_FUNC(sub_8214E6D8);
PPC_FUNC_IMPL(__imp__sub_8214E6D8) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8214e700
	if (!ctx.cr6.eq) goto loc_8214E700;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8214e70c
	goto loc_8214E70C;
loc_8214E700:
	// addi r3,r31,-68
	ctx.r3.s64 = ctx.r31.s64 + -68;
	// bl 0x8214f250
	ctx.lr = 0x8214E708;
	sub_8214F250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214E70C:
	// stw r11,13300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13300, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8214E724"))) PPC_WEAK_FUNC(sub_8214E724);
PPC_FUNC_IMPL(__imp__sub_8214E724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214E728"))) PPC_WEAK_FUNC(sub_8214E728);
PPC_FUNC_IMPL(__imp__sub_8214E728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8214E730;
	__savegprlr_20(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x82144b48
	ctx.lr = 0x8214E73C;
	sub_82144B48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r4,r11,8732
	ctx.r4.s64 = ctx.r11.s64 + 8732;
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r11,-17440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17440);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// bl 0x82145f28
	ctx.lr = 0x8214E780;
	sub_82145F28(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,396(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8214e7c0
	if (ctx.cr6.eq) goto loc_8214E7C0;
	// addi r4,r1,396
	ctx.r4.s64 = ctx.r1.s64 + 396;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82146040
	ctx.lr = 0x8214E7C0;
	sub_82146040(ctx, base);
loc_8214E7C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// clrlwi. r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r28,r11,8644
	ctx.r28.s64 = ctx.r11.s64 + 8644;
	// addi r27,r10,8620
	ctx.r27.s64 = ctx.r10.s64 + 8620;
	// addi r26,r9,8800
	ctx.r26.s64 = ctx.r9.s64 + 8800;
	// beq 0x8214e838
	if (ctx.cr0.eq) goto loc_8214E838;
	// bl 0x82146770
	ctx.lr = 0x8214E7E4;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214e834
	if (ctx.cr6.gt) goto loc_8214E834;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// addi r4,r11,8756
	ctx.r4.s64 = ctx.r11.s64 + 8756;
	// bl 0x8212d020
	ctx.lr = 0x8214E800;
	sub_8212D020(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r1,360
	ctx.r8.s64 = ctx.r1.s64 + 360;
	// li r7,300
	ctx.r7.s64 = 300;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214E81C;
	sub_821469C8(ctx, base);
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e834
	if (ctx.cr6.eq) goto loc_8214E834;
	// addi r4,r1,364
	ctx.r4.s64 = ctx.r1.s64 + 364;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E834;
	sub_8212D1B8(ctx, base);
loc_8214E834:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8214E838:
	// addi r20,r22,140
	ctx.r20.s64 = ctx.r22.s64 + 140;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8214b6a8
	ctx.lr = 0x8214E848;
	sub_8214B6A8(ctx, base);
	// lwz r11,144(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e85c
	if (ctx.cr6.eq) goto loc_8214E85C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8214e860
	goto loc_8214E860;
loc_8214E85C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8214E860:
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x8214e8c0
	if (!ctx.cr6.gt) goto loc_8214E8C0;
	// bl 0x82146770
	ctx.lr = 0x8214E86C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214e8bc
	if (ctx.cr6.gt) goto loc_8214E8BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r4,r11,8852
	ctx.r4.s64 = ctx.r11.s64 + 8852;
	// bl 0x8212d020
	ctx.lr = 0x8214E888;
	sub_8212D020(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r1,264
	ctx.r8.s64 = ctx.r1.s64 + 264;
	// li r7,307
	ctx.r7.s64 = 307;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214E8A4;
	sub_821469C8(ctx, base);
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e8bc
	if (ctx.cr6.eq) goto loc_8214E8BC;
	// addi r4,r1,268
	ctx.r4.s64 = ctx.r1.s64 + 268;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E8BC;
	sub_8212D1B8(ctx, base);
loc_8214E8BC:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8214E8C0:
	// lwz r11,-17440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17440);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// addi r4,r10,8876
	ctx.r4.s64 = ctx.r10.s64 + 8876;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x82145f28
	ctx.lr = 0x8214E8DC;
	sub_82145F28(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214E8F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,428(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8214e91c
	if (ctx.cr6.eq) goto loc_8214E91C;
	// addi r4,r1,428
	ctx.r4.s64 = ctx.r1.s64 + 428;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x82146040
	ctx.lr = 0x8214E91C;
	sub_82146040(ctx, base);
loc_8214E91C:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e97c
	if (ctx.cr0.eq) goto loc_8214E97C;
	// bl 0x82146770
	ctx.lr = 0x8214E928;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214e978
	if (ctx.cr6.gt) goto loc_8214E978;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// addi r4,r11,8896
	ctx.r4.s64 = ctx.r11.s64 + 8896;
	// bl 0x8212d020
	ctx.lr = 0x8214E944;
	sub_8212D020(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r1,296
	ctx.r8.s64 = ctx.r1.s64 + 296;
	// li r7,314
	ctx.r7.s64 = 314;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214E960;
	sub_821469C8(ctx, base);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e978
	if (ctx.cr6.eq) goto loc_8214E978;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x8212d1b8
	ctx.lr = 0x8214E978;
	sub_8212D1B8(ctx, base);
loc_8214E978:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8214E97C:
	// addi r21,r22,152
	ctx.r21.s64 = ctx.r22.s64 + 152;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8214b6a8
	ctx.lr = 0x8214E98C;
	sub_8214B6A8(ctx, base);
	// lwz r11,156(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e9a0
	if (ctx.cr6.eq) goto loc_8214E9A0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8214e9a4
	goto loc_8214E9A4;
loc_8214E9A0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8214E9A4:
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x8214ea04
	if (!ctx.cr6.gt) goto loc_8214EA04;
	// bl 0x82146770
	ctx.lr = 0x8214E9B0;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214ea00
	if (ctx.cr6.gt) goto loc_8214EA00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// addi r4,r11,8936
	ctx.r4.s64 = ctx.r11.s64 + 8936;
	// bl 0x8212d020
	ctx.lr = 0x8214E9CC;
	sub_8212D020(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// li r7,321
	ctx.r7.s64 = 321;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214E9E8;
	sub_821469C8(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ea00
	if (ctx.cr6.eq) goto loc_8214EA00;
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8212d1b8
	ctx.lr = 0x8214EA00;
	sub_8212D1B8(ctx, base);
loc_8214EA00:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8214EA04:
	// lwz r11,-17440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17440);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r23,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r23.u32);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// addi r4,r10,8960
	ctx.r4.s64 = ctx.r10.s64 + 8960;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x82145f28
	ctx.lr = 0x8214EA20;
	sub_82145F28(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EA3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8214ea60
	if (ctx.cr6.eq) goto loc_8214EA60;
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82146040
	ctx.lr = 0x8214EA60;
	sub_82146040(ctx, base);
loc_8214EA60:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214eac0
	if (ctx.cr0.eq) goto loc_8214EAC0;
	// bl 0x82146770
	ctx.lr = 0x8214EA6C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214eabc
	if (ctx.cr6.gt) goto loc_8214EABC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// addi r4,r11,8992
	ctx.r4.s64 = ctx.r11.s64 + 8992;
	// bl 0x8212d020
	ctx.lr = 0x8214EA88;
	sub_8212D020(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r1,456
	ctx.r8.s64 = ctx.r1.s64 + 456;
	// li r7,328
	ctx.r7.s64 = 328;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214EAA4;
	sub_821469C8(ctx, base);
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214eabc
	if (ctx.cr6.eq) goto loc_8214EABC;
	// addi r4,r1,460
	ctx.r4.s64 = ctx.r1.s64 + 460;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x8212d1b8
	ctx.lr = 0x8214EABC;
	sub_8212D1B8(ctx, base);
loc_8214EABC:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8214EAC0:
	// addi r25,r22,164
	ctx.r25.s64 = ctx.r22.s64 + 164;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8214b6a8
	ctx.lr = 0x8214EAD0;
	sub_8214B6A8(ctx, base);
	// lwz r11,168(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214eae4
	if (ctx.cr6.eq) goto loc_8214EAE4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8214eae8
	goto loc_8214EAE8;
loc_8214EAE4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8214EAE8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// addi r29,r10,9040
	ctx.r29.s64 = ctx.r10.s64 + 9040;
	// ble cr6,0x8214eb4c
	if (!ctx.cr6.gt) goto loc_8214EB4C;
	// bl 0x82146770
	ctx.lr = 0x8214EAFC;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214eb48
	if (ctx.cr6.gt) goto loc_8214EB48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8212d020
	ctx.lr = 0x8214EB14;
	sub_8212D020(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r1,232
	ctx.r8.s64 = ctx.r1.s64 + 232;
	// li r7,335
	ctx.r7.s64 = 335;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214EB30;
	sub_821469C8(ctx, base);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214eb48
	if (ctx.cr6.eq) goto loc_8214EB48;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8212d1b8
	ctx.lr = 0x8214EB48;
	sub_8212D1B8(ctx, base);
loc_8214EB48:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8214EB4C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// addi r4,r11,9068
	ctx.r4.s64 = ctx.r11.s64 + 9068;
	// bl 0x82145f28
	ctx.lr = 0x8214EB5C;
	sub_82145F28(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8214eb9c
	if (ctx.cr6.eq) goto loc_8214EB9C;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82146040
	ctx.lr = 0x8214EB9C;
	sub_82146040(ctx, base);
loc_8214EB9C:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214ebfc
	if (ctx.cr0.eq) goto loc_8214EBFC;
	// bl 0x82146770
	ctx.lr = 0x8214EBA8;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214ebf8
	if (ctx.cr6.gt) goto loc_8214EBF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// addi r4,r11,9100
	ctx.r4.s64 = ctx.r11.s64 + 9100;
	// bl 0x8212d020
	ctx.lr = 0x8214EBC4;
	sub_8212D020(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r1,280
	ctx.r8.s64 = ctx.r1.s64 + 280;
	// li r7,342
	ctx.r7.s64 = 342;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214EBE0;
	sub_821469C8(ctx, base);
	// lwz r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ebf8
	if (ctx.cr6.eq) goto loc_8214EBF8;
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x8212d1b8
	ctx.lr = 0x8214EBF8;
	sub_8212D1B8(ctx, base);
loc_8214EBF8:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8214EBFC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// addi r4,r10,9148
	ctx.r4.s64 = ctx.r10.s64 + 9148;
	// sth r11,188(r22)
	PPC_STORE_U16(ctx.r22.u32 + 188, ctx.r11.u16);
	// lwz r11,-17440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17440);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x82145f28
	ctx.lr = 0x8214EC20;
	sub_82145F28(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8214ec60
	if (ctx.cr6.eq) goto loc_8214EC60;
	// addi r4,r1,316
	ctx.r4.s64 = ctx.r1.s64 + 316;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82146040
	ctx.lr = 0x8214EC60;
	sub_82146040(ctx, base);
loc_8214EC60:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214ecc0
	if (ctx.cr0.eq) goto loc_8214ECC0;
	// bl 0x82146770
	ctx.lr = 0x8214EC6C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214ecbc
	if (ctx.cr6.gt) goto loc_8214ECBC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// addi r4,r11,9180
	ctx.r4.s64 = ctx.r11.s64 + 9180;
	// bl 0x8212d020
	ctx.lr = 0x8214EC88;
	sub_8212D020(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r1,344
	ctx.r8.s64 = ctx.r1.s64 + 344;
	// li r7,350
	ctx.r7.s64 = 350;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214ECA4;
	sub_821469C8(ctx, base);
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ecbc
	if (ctx.cr6.eq) goto loc_8214ECBC;
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x8212d1b8
	ctx.lr = 0x8214ECBC;
	sub_8212D1B8(ctx, base);
loc_8214ECBC:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8214ECC0:
	// addi r30,r22,176
	ctx.r30.s64 = ctx.r22.s64 + 176;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214b6a8
	ctx.lr = 0x8214ECD0;
	sub_8214B6A8(ctx, base);
	// lwz r11,180(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ece4
	if (ctx.cr6.eq) goto loc_8214ECE4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8214ece8
	goto loc_8214ECE8;
loc_8214ECE4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8214ECE8:
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// ble cr6,0x8214ed44
	if (!ctx.cr6.gt) goto loc_8214ED44;
	// bl 0x82146770
	ctx.lr = 0x8214ECF4;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214ed40
	if (ctx.cr6.gt) goto loc_8214ED40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x8212d020
	ctx.lr = 0x8214ED0C;
	sub_8212D020(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r1,376
	ctx.r8.s64 = ctx.r1.s64 + 376;
	// li r7,357
	ctx.r7.s64 = 357;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214ED28;
	sub_821469C8(ctx, base);
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ed40
	if (ctx.cr6.eq) goto loc_8214ED40;
	// addi r4,r1,380
	ctx.r4.s64 = ctx.r1.s64 + 380;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x8212d1b8
	ctx.lr = 0x8214ED40;
	sub_8212D1B8(ctx, base);
loc_8214ED40:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8214ED44:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// addi r4,r11,9228
	ctx.r4.s64 = ctx.r11.s64 + 9228;
	// bl 0x82145f28
	ctx.lr = 0x8214ED54;
	sub_82145F28(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214ED70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,412(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8214ed94
	if (ctx.cr6.eq) goto loc_8214ED94;
	// addi r4,r1,412
	ctx.r4.s64 = ctx.r1.s64 + 412;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82146040
	ctx.lr = 0x8214ED94;
	sub_82146040(ctx, base);
loc_8214ED94:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214edf4
	if (ctx.cr0.eq) goto loc_8214EDF4;
	// bl 0x82146770
	ctx.lr = 0x8214EDA0;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214edf0
	if (ctx.cr6.gt) goto loc_8214EDF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// addi r4,r11,9260
	ctx.r4.s64 = ctx.r11.s64 + 9260;
	// bl 0x8212d020
	ctx.lr = 0x8214EDBC;
	sub_8212D020(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r8,r1,440
	ctx.r8.s64 = ctx.r1.s64 + 440;
	// li r7,363
	ctx.r7.s64 = 363;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214EDD8;
	sub_821469C8(ctx, base);
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214edf0
	if (ctx.cr6.eq) goto loc_8214EDF0;
	// addi r4,r1,444
	ctx.r4.s64 = ctx.r1.s64 + 444;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x8212d1b8
	ctx.lr = 0x8214EDF0;
	sub_8212D1B8(ctx, base);
loc_8214EDF0:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8214EDF4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi. r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,190(r22)
	PPC_STORE_U16(ctx.r22.u32 + 190, ctx.r11.u16);
	// beq 0x8214eea4
	if (ctx.cr0.eq) goto loc_8214EEA4;
	// bl 0x82146770
	ctx.lr = 0x8214EE08;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8214eea4
	if (ctx.cr6.gt) goto loc_8214EEA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r31,190(r22)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r22.u32 + 190);
	// bl 0x8213ecd8
	ctx.lr = 0x8214EE20;
	sub_8213ECD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r29,188(r22)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r22.u32 + 188);
	// bl 0x8213ecd8
	ctx.lr = 0x8214EE30;
	sub_8213ECD8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8213ecd8
	ctx.lr = 0x8214EE3C;
	sub_8213ECD8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8213ecd8
	ctx.lr = 0x8214EE48;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,9312
	ctx.r4.s64 = ctx.r11.s64 + 9312;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x8214b638
	ctx.lr = 0x8214EE70;
	sub_8214B638(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r7,389
	ctx.r7.s64 = 389;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214EE8C;
	sub_821469C8(ctx, base);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214eea4
	if (ctx.cr6.eq) goto loc_8214EEA4;
	// addi r4,r1,476
	ctx.r4.s64 = ctx.r1.s64 + 476;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x8212d1b8
	ctx.lr = 0x8214EEA4;
	sub_8212D1B8(ctx, base);
loc_8214EEA4:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214eebc
	if (ctx.cr6.eq) goto loc_8214EEBC;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82146040
	ctx.lr = 0x8214EEBC;
	sub_82146040(ctx, base);
loc_8214EEBC:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214eed4
	if (ctx.cr6.eq) goto loc_8214EED4;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82146040
	ctx.lr = 0x8214EED4;
	sub_82146040(ctx, base);
loc_8214EED4:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214eeec
	if (ctx.cr6.eq) goto loc_8214EEEC;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82146040
	ctx.lr = 0x8214EEEC;
	sub_82146040(ctx, base);
loc_8214EEEC:
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ef04
	if (ctx.cr6.eq) goto loc_8214EF04;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82146040
	ctx.lr = 0x8214EF04;
	sub_82146040(ctx, base);
loc_8214EF04:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ef40
	if (ctx.cr6.eq) goto loc_8214EF40;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214ef40
	if (!ctx.cr6.eq) goto loc_8214EF40;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214EF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214EF40:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214EF4C"))) PPC_WEAK_FUNC(sub_8214EF4C);
PPC_FUNC_IMPL(__imp__sub_8214EF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214EF50"))) PPC_WEAK_FUNC(sub_8214EF50);
PPC_FUNC_IMPL(__imp__sub_8214EF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8214EF58;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ef80
	if (ctx.cr6.eq) goto loc_8214EF80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8214ef84
	goto loc_8214EF84;
loc_8214EF80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214EF84:
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x8214eff4
	if (!ctx.cr6.gt) goto loc_8214EFF4;
	// bl 0x82146770
	ctx.lr = 0x8214EF90;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214efec
	if (ctx.cr6.gt) goto loc_8214EFEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,9392
	ctx.r4.s64 = ctx.r11.s64 + 9392;
	// bl 0x8212d020
	ctx.lr = 0x8214EFAC;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,9412
	ctx.r6.s64 = ctx.r11.s64 + 9412;
	// addi r5,r10,8620
	ctx.r5.s64 = ctx.r10.s64 + 8620;
	// addi r3,r9,8644
	ctx.r3.s64 = ctx.r9.s64 + 8644;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,399
	ctx.r7.s64 = 399;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214EFD4;
	sub_821469C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214efec
	if (ctx.cr6.eq) goto loc_8214EFEC;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_8214EFE8:
	// bl 0x8212d1b8
	ctx.lr = 0x8214EFEC;
	sub_8212D1B8(ctx, base);
loc_8214EFEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214f244
	goto loc_8214F244;
loc_8214EFF4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f008
	if (ctx.cr6.eq) goto loc_8214F008;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8214f00c
	goto loc_8214F00C;
loc_8214F008:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214F00C:
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// ble cr6,0x8214f074
	if (!ctx.cr6.gt) goto loc_8214F074;
	// bl 0x82146770
	ctx.lr = 0x8214F018;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8214efec
	if (ctx.cr6.gt) goto loc_8214EFEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,9444
	ctx.r4.s64 = ctx.r11.s64 + 9444;
	// bl 0x8212d020
	ctx.lr = 0x8214F034;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,9412
	ctx.r6.s64 = ctx.r11.s64 + 9412;
	// addi r5,r10,8620
	ctx.r5.s64 = ctx.r10.s64 + 8620;
	// addi r3,r9,8644
	ctx.r3.s64 = ctx.r9.s64 + 8644;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// li r7,405
	ctx.r7.s64 = 405;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x8214F05C;
	sub_821469C8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214efec
	if (ctx.cr6.eq) goto loc_8214EFEC;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x8214efe8
	goto loc_8214EFE8;
loc_8214F074:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x8214f084
	if (!ctx.cr6.eq) goto loc_8214F084;
	// lwz r31,13360(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13360);
	// b 0x8214f234
	goto loc_8214F234;
loc_8214F084:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f0f0
	if (ctx.cr6.eq) goto loc_8214F0F0;
loc_8214F098:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8214f0ac
	if (ctx.cr6.lt) goto loc_8214F0AC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8214F0AC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8214f0c0
	if (!ctx.cr0.eq) goto loc_8214F0C0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8214f0c4
	goto loc_8214F0C4;
loc_8214F0C0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8214F0C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214f098
	if (!ctx.cr6.eq) goto loc_8214F098;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214f0f0
	if (ctx.cr6.eq) goto loc_8214F0F0;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8214f0e8
	if (ctx.cr6.lt) goto loc_8214F0E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214F0E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214f0f4
	if (ctx.cr0.eq) goto loc_8214F0F4;
loc_8214F0F0:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_8214F0F4:
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8214f230
	if (!ctx.cr6.eq) goto loc_8214F230;
	// lwz r11,13364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13364);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8214f18c
	if (!ctx.cr6.eq) goto loc_8214F18C;
	// bl 0x82146770
	ctx.lr = 0x8214F10C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8214f170
	if (ctx.cr6.gt) goto loc_8214F170;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,9464
	ctx.r4.s64 = ctx.r11.s64 + 9464;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8214b638
	ctx.lr = 0x8214F12C;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,9412
	ctx.r6.s64 = ctx.r10.s64 + 9412;
	// addi r5,r9,8620
	ctx.r5.s64 = ctx.r9.s64 + 8620;
	// li r7,422
	ctx.r7.s64 = 422;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214F158;
	sub_821469C8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f170
	if (ctx.cr6.eq) goto loc_8214F170;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8212d1b8
	ctx.lr = 0x8214F170;
	sub_8212D1B8(ctx, base);
loc_8214F170:
	// lwz r11,13360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13360);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,13364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13364, ctx.r28.u32);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// lwz r31,13360(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13360);
	// b 0x8214f214
	goto loc_8214F214;
loc_8214F18C:
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r31,-17448(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// lwz r30,-17440(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8214F1A4;
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
	// li r5,176
	ctx.r5.s64 = 176;
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
	ctx.lr = 0x8214F1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8214f1f4
	if (ctx.cr6.eq) goto loc_8214F1F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8214F1F4;
	sub_821FD9E0(ctx, base);
loc_8214F1F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8214f210
	if (ctx.cr6.eq) goto loc_8214F210;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214fb78
	ctx.lr = 0x8214F208;
	sub_8214FB78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8214f214
	goto loc_8214F214;
loc_8214F210:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8214F214:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8214f3a8
	ctx.lr = 0x8214F22C;
	sub_8214F3A8(ctx, base);
	// b 0x8214f234
	goto loc_8214F234;
loc_8214F230:
	// lwz r31,20(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
loc_8214F234:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150108
	ctx.lr = 0x8214F244;
	sub_82150108(ctx, base);
loc_8214F244:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214F24C"))) PPC_WEAK_FUNC(sub_8214F24C);
PPC_FUNC_IMPL(__imp__sub_8214F24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214F250"))) PPC_WEAK_FUNC(sub_8214F250);
PPC_FUNC_IMPL(__imp__sub_8214F250) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,60000
	ctx.r11.u64 = ctx.r11.u64 | 60000;
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// bl 0x82146770
	ctx.lr = 0x8214F26C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8214f2c8
	if (ctx.cr6.gt) goto loc_8214F2C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9508
	ctx.r4.s64 = ctx.r11.s64 + 9508;
	// bl 0x8212d020
	ctx.lr = 0x8214F288;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,9540
	ctx.r6.s64 = ctx.r11.s64 + 9540;
	// addi r5,r10,8620
	ctx.r5.s64 = ctx.r10.s64 + 8620;
	// addi r3,r9,8644
	ctx.r3.s64 = ctx.r9.s64 + 8644;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,446
	ctx.r7.s64 = 446;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821469c8
	ctx.lr = 0x8214F2B0;
	sub_821469C8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f2c8
	if (ctx.cr6.eq) goto loc_8214F2C8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d1b8
	ctx.lr = 0x8214F2C8;
	sub_8212D1B8(ctx, base);
loc_8214F2C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214F2D8"))) PPC_WEAK_FUNC(sub_8214F2D8);
PPC_FUNC_IMPL(__imp__sub_8214F2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8214F2E0;
	__savegprlr_26(ctx, base);
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
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8214F308:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8214f350
	if (!ctx.cr6.lt) goto loc_8214F350;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214f350
	if (ctx.cr6.eq) goto loc_8214F350;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214F34C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8214f308
	goto loc_8214F308;
loc_8214F350:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214f370
	if (ctx.cr6.eq) goto loc_8214F370;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x8214f370
	if (!ctx.cr0.eq) goto loc_8214F370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214f578
	ctx.lr = 0x8214F370;
	sub_8214F578(ctx, base);
loc_8214F370:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214F378"))) PPC_WEAK_FUNC(sub_8214F378);
PPC_FUNC_IMPL(__imp__sub_8214F378) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8214F390"))) PPC_WEAK_FUNC(sub_8214F390);
PPC_FUNC_IMPL(__imp__sub_8214F390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8214F3A8"))) PPC_WEAK_FUNC(sub_8214F3A8);
PPC_FUNC_IMPL(__imp__sub_8214F3A8) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8214f418
	if (ctx.cr6.eq) goto loc_8214F418;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8214F3E4:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x8214f3fc
	if (ctx.cr6.lt) goto loc_8214F3FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214F3FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214f40c
	if (ctx.cr0.eq) goto loc_8214F40C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8214f410
	goto loc_8214F410;
loc_8214F40C:
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_8214F410:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8214f3e4
	if (!ctx.cr6.eq) goto loc_8214F3E4;
loc_8214F418:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// beq 0x8214f4d4
	if (ctx.cr0.eq) goto loc_8214F4D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214f444
	if (!ctx.cr6.eq) goto loc_8214F444;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_8214F434:
	// bl 0x8214f628
	ctx.lr = 0x8214F438;
	sub_8214F628(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// b 0x8214f500
	goto loc_8214F500;
loc_8214F444:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214f458
	if (!ctx.cr6.eq) goto loc_8214F458;
	// b 0x8214f4d4
	goto loc_8214F4D4;
loc_8214F458:
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8214f478
	if (!ctx.cr6.eq) goto loc_8214F478;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8214f478
	if (!ctx.cr6.eq) goto loc_8214F478;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x8214f4d4
	goto loc_8214F4D4;
loc_8214F478:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214f4a4
	if (ctx.cr6.eq) goto loc_8214F4A4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8214f494
	goto loc_8214F494;
loc_8214F48C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8214F494:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214f48c
	if (!ctx.cr6.eq) goto loc_8214F48C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x8214f4d4
	goto loc_8214F4D4;
loc_8214F4A4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8214f4c4
	if (!ctx.cr6.eq) goto loc_8214F4C4;
loc_8214F4B0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8214f4b0
	if (ctx.cr6.eq) goto loc_8214F4B0;
loc_8214F4C4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214f4d4
	if (ctx.cr6.eq) goto loc_8214F4D4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8214F4D4:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x8214f4ec
	if (ctx.cr6.lt) goto loc_8214F4EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214F4EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214f434
	if (!ctx.cr0.eq) goto loc_8214F434;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_8214F500:
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

__attribute__((alias("__imp__sub_8214F51C"))) PPC_WEAK_FUNC(sub_8214F51C);
PPC_FUNC_IMPL(__imp__sub_8214F51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214F520"))) PPC_WEAK_FUNC(sub_8214F520);
PPC_FUNC_IMPL(__imp__sub_8214F520) {
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
	// b 0x8214f558
	goto loc_8214F558;
loc_8214F540:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8214f520
	ctx.lr = 0x8214F54C;
	sub_8214F520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82120a70
	ctx.lr = 0x8214F558;
	sub_82120A70(ctx, base);
loc_8214F558:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8214f540
	if (!ctx.cr6.eq) goto loc_8214F540;
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

__attribute__((alias("__imp__sub_8214F578"))) PPC_WEAK_FUNC(sub_8214F578);
PPC_FUNC_IMPL(__imp__sub_8214F578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8214F580;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8214f620
	if (ctx.cr6.gt) goto loc_8214F620;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8214f5d4
	if (ctx.cr6.eq) goto loc_8214F5D4;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
loc_8214F5B8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213eee8
	ctx.lr = 0x8214F5C8;
	sub_8213EEE8(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8214f5b8
	if (!ctx.cr6.eq) goto loc_8214F5B8;
loc_8214F5D4:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8214f61c
	if (ctx.cr6.eq) goto loc_8214F61C;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
loc_8214F600:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213ee50
	ctx.lr = 0x8214F610;
	sub_8213EE50(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8214f600
	if (!ctx.cr6.eq) goto loc_8214F600;
loc_8214F61C:
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
loc_8214F620:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214F628"))) PPC_WEAK_FUNC(sub_8214F628);
PPC_FUNC_IMPL(__imp__sub_8214F628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8214F630;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82120040
	ctx.lr = 0x8214F650;
	sub_82120040(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8214f67c
	if (ctx.cr0.eq) goto loc_8214F67C;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8214F67C:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8214f6c0
	if (ctx.cr6.eq) goto loc_8214F6C0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8214f6c0
	if (!ctx.cr6.eq) goto loc_8214F6C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8214f6a4
	if (ctx.cr6.lt) goto loc_8214F6A4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8214F6A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214f6c0
	if (!ctx.cr0.eq) goto loc_8214F6C0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214f6e8
	if (!ctx.cr6.eq) goto loc_8214F6E8;
	// b 0x8214f6d0
	goto loc_8214F6D0;
loc_8214F6C0:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8214f6d8
	if (!ctx.cr6.eq) goto loc_8214F6D8;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_8214F6D0:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x8214f6e8
	goto loc_8214F6E8;
loc_8214F6D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214f6e8
	if (!ctx.cr6.eq) goto loc_8214F6E8;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_8214F6E8:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x8214f710
	ctx.lr = 0x8214F704;
	sub_8214F710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214F710"))) PPC_WEAK_FUNC(sub_8214F710);
PPC_FUNC_IMPL(__imp__sub_8214F710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214f968
	if (ctx.cr6.eq) goto loc_8214F968;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8214F724:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214f968
	if (!ctx.cr6.eq) goto loc_8214F968;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8214f850
	if (!ctx.cr6.eq) goto loc_8214F850;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214f778
	if (ctx.cr6.eq) goto loc_8214F778;
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8214f778
	if (!ctx.cr6.eq) goto loc_8214F778;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8214f95c
	goto loc_8214F95C;
loc_8214F778:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214f7e4
	if (!ctx.cr6.eq) goto loc_8214F7E4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214f7a4
	if (ctx.cr6.eq) goto loc_8214F7A4;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
loc_8214F7A4:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8214f7c0
	if (!ctx.cr6.eq) goto loc_8214F7C0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8214f7dc
	goto loc_8214F7DC;
loc_8214F7C0:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214f7d8
	if (!ctx.cr6.eq) goto loc_8214F7D8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8214f7dc
	goto loc_8214F7DC;
loc_8214F7D8:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_8214F7DC:
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_8214F7E4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214f810
	if (ctx.cr6.eq) goto loc_8214F810;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_8214F810:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214f82c
	if (!ctx.cr6.eq) goto loc_8214F82C;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8214f848
	goto loc_8214F848;
loc_8214F82C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8214f844
	if (!ctx.cr6.eq) goto loc_8214F844;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x8214f848
	goto loc_8214F848;
loc_8214F844:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8214F848:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8214f958
	goto loc_8214F958;
loc_8214F850:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214f884
	if (ctx.cr6.eq) goto loc_8214F884;
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8214f884
	if (!ctx.cr6.eq) goto loc_8214F884;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8214f95c
	goto loc_8214F95C;
loc_8214F884:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214f8f0
	if (!ctx.cr6.eq) goto loc_8214F8F0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214f8b0
	if (ctx.cr6.eq) goto loc_8214F8B0;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
loc_8214F8B0:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8214f8cc
	if (!ctx.cr6.eq) goto loc_8214F8CC;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8214f8e8
	goto loc_8214F8E8;
loc_8214F8CC:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214f8e4
	if (!ctx.cr6.eq) goto loc_8214F8E4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8214f8e8
	goto loc_8214F8E8;
loc_8214F8E4:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8214F8E8:
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_8214F8F0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214f91c
	if (ctx.cr6.eq) goto loc_8214F91C;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_8214F91C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214f938
	if (!ctx.cr6.eq) goto loc_8214F938;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8214f954
	goto loc_8214F954;
loc_8214F938:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8214f950
	if (!ctx.cr6.eq) goto loc_8214F950;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x8214f954
	goto loc_8214F954;
loc_8214F950:
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_8214F954:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8214F958:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8214F95C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214f724
	if (!ctx.cr6.eq) goto loc_8214F724;
loc_8214F968:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214F980"))) PPC_WEAK_FUNC(sub_8214F980);
PPC_FUNC_IMPL(__imp__sub_8214F980) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-68
	ctx.r3.s64 = ctx.r3.s64 + -68;
	// b 0x8214e030
	sub_8214E030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214F988"))) PPC_WEAK_FUNC(sub_8214F988);
PPC_FUNC_IMPL(__imp__sub_8214F988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8214F990;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,10524
	ctx.r11.s64 = ctx.r11.s64 + 10524;
	// addi r10,r10,10552
	ctx.r10.s64 = ctx.r10.s64 + 10552;
	// addi r9,r9,10560
	ctx.r9.s64 = ctx.r9.s64 + 10560;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// bl 0x82144b48
	ctx.lr = 0x8214F9C8;
	sub_82144B48(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8214f9e4
	if (!ctx.cr6.gt) goto loc_8214F9E4;
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// bl 0x82146360
	ctx.lr = 0x8214F9E0;
	sub_82146360(ctx, base);
	// b 0x8214f9ec
	goto loc_8214F9EC;
loc_8214F9E4:
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// bl 0x821463f8
	ctx.lr = 0x8214F9EC;
	sub_821463F8(ctx, base);
loc_8214F9EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214fc90
	ctx.lr = 0x8214F9F4;
	sub_8214FC90(ctx, base);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82150ca0
	ctx.lr = 0x8214FA00;
	sub_82150CA0(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// beq cr6,0x8214fa18
	if (ctx.cr6.eq) goto loc_8214FA18;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FA18;
	sub_8212D1B8(ctx, base);
loc_8214FA18:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fa48
	if (ctx.cr6.eq) goto loc_8214FA48;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x8214fa48
	if (!ctx.cr0.eq) goto loc_8214FA48;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214FA48:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fa78
	if (ctx.cr6.eq) goto loc_8214FA78;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x8214fa78
	if (!ctx.cr0.eq) goto loc_8214FA78;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214FA78:
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// beq cr6,0x8214fa94
	if (ctx.cr6.eq) goto loc_8214FA94;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FA94;
	sub_8212D1B8(ctx, base);
loc_8214FA94:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214faac
	if (ctx.cr6.eq) goto loc_8214FAAC;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FAAC;
	sub_8212D1B8(ctx, base);
loc_8214FAAC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fac4
	if (ctx.cr6.eq) goto loc_8214FAC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FAC4;
	sub_8212D1B8(ctx, base);
loc_8214FAC4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fadc
	if (ctx.cr6.eq) goto loc_8214FADC;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FADC;
	sub_8212D1B8(ctx, base);
loc_8214FADC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214faf4
	if (ctx.cr6.eq) goto loc_8214FAF4;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FAF4;
	sub_8212D1B8(ctx, base);
loc_8214FAF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82150ca0
	ctx.lr = 0x8214FAFC;
	sub_82150CA0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,5688
	ctx.r11.s64 = ctx.r11.s64 + 5688;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x821472c8
	ctx.lr = 0x8214FB10;
	sub_821472C8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,5660
	ctx.r11.s64 = ctx.r11.s64 + 5660;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214FB24"))) PPC_WEAK_FUNC(sub_8214FB24);
PPC_FUNC_IMPL(__imp__sub_8214FB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214FB28"))) PPC_WEAK_FUNC(sub_8214FB28);
PPC_FUNC_IMPL(__imp__sub_8214FB28) {
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
	// bl 0x8214f988
	ctx.lr = 0x8214FB48;
	sub_8214F988(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214fb58
	if (ctx.cr0.eq) goto loc_8214FB58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x8214FB58;
	sub_82120A70(ctx, base);
loc_8214FB58:
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

__attribute__((alias("__imp__sub_8214FB74"))) PPC_WEAK_FUNC(sub_8214FB74);
PPC_FUNC_IMPL(__imp__sub_8214FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214FB78"))) PPC_WEAK_FUNC(sub_8214FB78);
PPC_FUNC_IMPL(__imp__sub_8214FB78) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,2184
	ctx.r11.s64 = ctx.r11.s64 + 2184;
	// addi r10,r10,5688
	ctx.r10.s64 = ctx.r10.s64 + 5688;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r11,r9,10524
	ctx.r11.s64 = ctx.r9.s64 + 10524;
	// lis r6,-32029
	ctx.r6.s64 = -2099052544;
	// addi r10,r8,10552
	ctx.r10.s64 = ctx.r8.s64 + 10552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r7,10560
	ctx.r9.s64 = ctx.r7.s64 + 10560;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// lwz r11,-17440(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17440);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r10,-17440(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17440);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r11,-17440(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17440);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,-17440(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17440);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,-17440(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17440);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lwz r11,-17440(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17440);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// bl 0x82144b48
	ctx.lr = 0x8214FC54;
	sub_82144B48(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r5,r3,28
	ctx.r5.s64 = ctx.r3.s64 + 28;
	// bgt cr6,0x8214fc6c
	if (ctx.cr6.gt) goto loc_8214FC6C;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
loc_8214FC6C:
	// bl 0x82146360
	ctx.lr = 0x8214FC70;
	sub_82146360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8214FC90"))) PPC_WEAK_FUNC(sub_8214FC90);
PPC_FUNC_IMPL(__imp__sub_8214FC90) {
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
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fd48
	if (ctx.cr6.eq) goto loc_8214FD48;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8214fcd4
	if (!ctx.cr6.gt) goto loc_8214FCD4;
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// bl 0x82146360
	ctx.lr = 0x8214FCD0;
	sub_82146360(ctx, base);
	// b 0x8214fcdc
	goto loc_8214FCDC;
loc_8214FCD4:
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// bl 0x821463f8
	ctx.lr = 0x8214FCDC;
	sub_821463F8(ctx, base);
loc_8214FCDC:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fd14
	if (ctx.cr6.eq) goto loc_8214FD14;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x8214fd10
	if (!ctx.cr0.eq) goto loc_8214FD10;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FD10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214FD10:
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_8214FD14:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fd48
	if (ctx.cr6.eq) goto loc_8214FD48;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x8214fd44
	if (!ctx.cr0.eq) goto loc_8214FD44;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214FD44:
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_8214FD48:
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

__attribute__((alias("__imp__sub_8214FD60"))) PPC_WEAK_FUNC(sub_8214FD60);
PPC_FUNC_IMPL(__imp__sub_8214FD60) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82146770
	ctx.lr = 0x8214FD7C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8214fe0c
	if (ctx.cr6.gt) goto loc_8214FE0C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fda8
	if (ctx.cr6.eq) goto loc_8214FDA8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8214FDA8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,9652
	ctx.r4.s64 = ctx.r11.s64 + 9652;
	// bl 0x8214b638
	ctx.lr = 0x8214FDC8;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,9684
	ctx.r6.s64 = ctx.r10.s64 + 9684;
	// addi r5,r9,9716
	ctx.r5.s64 = ctx.r9.s64 + 9716;
	// li r7,82
	ctx.r7.s64 = 82;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214FDF4;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214fe0c
	if (ctx.cr6.eq) goto loc_8214FE0C;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FE0C;
	sub_8212D1B8(ctx, base);
loc_8214FE0C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214fe24
	if (!ctx.cr6.eq) goto loc_8214FE24;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8214fe38
	goto loc_8214FE38;
loc_8214FE24:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8214FE38:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82150c08
	ctx.lr = 0x8214FE48;
	sub_82150C08(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// lwz r3,14164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	// bl 0x8214f2d8
	ctx.lr = 0x8214FE64;
	sub_8214F2D8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8214FE84"))) PPC_WEAK_FUNC(sub_8214FE84);
PPC_FUNC_IMPL(__imp__sub_8214FE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8214FE88"))) PPC_WEAK_FUNC(sub_8214FE88);
PPC_FUNC_IMPL(__imp__sub_8214FE88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82146770
	ctx.lr = 0x8214FEA4;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8214ff08
	if (ctx.cr6.gt) goto loc_8214FF08;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,9744
	ctx.r4.s64 = ctx.r11.s64 + 9744;
	// bl 0x8214b638
	ctx.lr = 0x8214FEC4;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,9772
	ctx.r6.s64 = ctx.r10.s64 + 9772;
	// addi r5,r9,9716
	ctx.r5.s64 = ctx.r9.s64 + 9716;
	// li r7,103
	ctx.r7.s64 = 103;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8214FEF0;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ff08
	if (ctx.cr6.eq) goto loc_8214FF08;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FF08;
	sub_8212D1B8(ctx, base);
loc_8214FF08:
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r11,25976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25976);
	// std r30,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r30.u64);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,25976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25976, ctx.r11.u32);
	// beq cr6,0x8214ff44
	if (ctx.cr6.eq) goto loc_8214FF44;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FF44;
	sub_8212D1B8(ctx, base);
loc_8214FF44:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ff5c
	if (ctx.cr6.eq) goto loc_8214FF5C;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FF5C;
	sub_8212D1B8(ctx, base);
loc_8214FF5C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ff74
	if (ctx.cr6.eq) goto loc_8214FF74;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FF74;
	sub_8212D1B8(ctx, base);
loc_8214FF74:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ff8c
	if (ctx.cr6.eq) goto loc_8214FF8C;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FF8C;
	sub_8212D1B8(ctx, base);
loc_8214FF8C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214ffa4
	if (ctx.cr6.eq) goto loc_8214FFA4;
	// bl 0x8212d1b8
	ctx.lr = 0x8214FFA4;
	sub_8212D1B8(ctx, base);
loc_8214FFA4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8214fff8
	if (ctx.cr6.eq) goto loc_8214FFF8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8214ffcc
	if (!ctx.cr6.eq) goto loc_8214FFCC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8214ffe0
	goto loc_8214FFE0;
loc_8214FFCC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// twllei r10,0
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_8214FFE0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82150000
	goto loc_82150000;
loc_8214FFF8:
	// bl 0x822048c0
	ctx.lr = 0x8214FFFC;
	sub_822048C0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_82150000:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214fc90
	ctx.lr = 0x82150008;
	sub_8214FC90(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150018
	if (ctx.cr6.eq) goto loc_82150018;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_82150018:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82152448
	ctx.lr = 0x82150024;
	sub_82152448(ctx, base);
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

__attribute__((alias("__imp__sub_8215003C"))) PPC_WEAK_FUNC(sub_8215003C);
PPC_FUNC_IMPL(__imp__sub_8215003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150040"))) PPC_WEAK_FUNC(sub_82150040);
PPC_FUNC_IMPL(__imp__sub_82150040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82150048;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821500cc
	if (!ctx.cr6.eq) goto loc_821500CC;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8214bf48
	ctx.lr = 0x82150080;
	sub_8214BF48(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82150094
	if (ctx.cr6.eq) goto loc_82150094;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821500cc
	if (!ctx.cr6.eq) goto loc_821500CC;
loc_82150094:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821500cc
	if (!ctx.cr6.eq) goto loc_821500CC;
	// cmplwi cr6,r29,200
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 200, ctx.xer);
	// bne cr6,0x821500cc
	if (!ctx.cr6.eq) goto loc_821500CC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d020
	ctx.lr = 0x821500B4;
	sub_8212D020(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821500cc
	if (ctx.cr6.eq) goto loc_821500CC;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d1b8
	ctx.lr = 0x821500CC;
	sub_8212D1B8(ctx, base);
loc_821500CC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821500fc
	if (ctx.cr6.eq) goto loc_821500FC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x821500fc
	if (!ctx.cr0.eq) goto loc_821500FC;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821500FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821500FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150104"))) PPC_WEAK_FUNC(sub_82150104);
PPC_FUNC_IMPL(__imp__sub_82150104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150108"))) PPC_WEAK_FUNC(sub_82150108);
PPC_FUNC_IMPL(__imp__sub_82150108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82150110;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8215013c
	if (ctx.cr6.gt) goto loc_8215013C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82150148
	goto loc_82150148;
loc_8215013C:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82150148:
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bne cr6,0x821501dc
	if (!ctx.cr6.eq) goto loc_821501DC;
	// bl 0x82146770
	ctx.lr = 0x82150154;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x821501d4
	if (ctx.cr6.gt) goto loc_821501D4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8213ecd8
	ctx.lr = 0x82150168;
	sub_8213ECD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213ecd8
	ctx.lr = 0x82150174;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r4,r11,9808
	ctx.r4.s64 = ctx.r11.s64 + 9808;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x8214b638
	ctx.lr = 0x82150190;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,9876
	ctx.r6.s64 = ctx.r10.s64 + 9876;
	// addi r5,r9,9716
	ctx.r5.s64 = ctx.r9.s64 + 9716;
	// li r7,158
	ctx.r7.s64 = 158;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x821501BC;
	sub_821469C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821501d4
	if (ctx.cr6.eq) goto loc_821501D4;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x821501D4;
	sub_8212D1B8(ctx, base);
loc_821501D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82150360
	goto loc_82150360;
loc_821501DC:
	// bl 0x82146770
	ctx.lr = 0x821501E0;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82150260
	if (ctx.cr6.gt) goto loc_82150260;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8213ecd8
	ctx.lr = 0x821501F4;
	sub_8213ECD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8213ecd8
	ctx.lr = 0x82150200;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r4,r11,9908
	ctx.r4.s64 = ctx.r11.s64 + 9908;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8214b638
	ctx.lr = 0x8215021C;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,9876
	ctx.r6.s64 = ctx.r10.s64 + 9876;
	// addi r5,r9,9716
	ctx.r5.s64 = ctx.r9.s64 + 9716;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x82150248;
	sub_821469C8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150260
	if (ctx.cr6.eq) goto loc_82150260;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8212d1b8
	ctx.lr = 0x82150260;
	sub_8212D1B8(ctx, base);
loc_82150260:
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// lwz r11,-17440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17440);
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x82146238
	ctx.lr = 0x8215028C;
	sub_82146238(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82146238
	ctx.lr = 0x82150298;
	sub_82146238(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82152368
	ctx.lr = 0x821502A0;
	sub_82152368(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r3,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r3.u8);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x822048c0
	ctx.lr = 0x821502B4;
	sub_822048C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821502d0
	if (ctx.cr6.gt) goto loc_821502D0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x821502dc
	goto loc_821502DC;
loc_821502D0:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821502DC:
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150d80
	ctx.lr = 0x821502E8;
	sub_82150D80(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82150304
	if (ctx.cr0.eq) goto loc_82150304;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82150ee8
	ctx.lr = 0x82150304;
	sub_82150EE8(ctx, base);
loc_82150304:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150328
	if (ctx.cr6.eq) goto loc_82150328;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// twllei r11,0
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82150328:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150344
	if (ctx.cr6.eq) goto loc_82150344;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8212d1b8
	ctx.lr = 0x82150344;
	sub_8212D1B8(ctx, base);
loc_82150344:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215035c
	if (ctx.cr6.eq) goto loc_8215035C;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8212d1b8
	ctx.lr = 0x8215035C;
	sub_8212D1B8(ctx, base);
loc_8215035C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82150360:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150368"))) PPC_WEAK_FUNC(sub_82150368);
PPC_FUNC_IMPL(__imp__sub_82150368) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214fc90
	ctx.lr = 0x82150380;
	sub_8214FC90(ctx, base);
	// li r11,10000
	ctx.r11.s64 = 10000;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bl 0x82146770
	ctx.lr = 0x8215038C;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821503f0
	if (ctx.cr6.gt) goto loc_821503F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,9944
	ctx.r4.s64 = ctx.r11.s64 + 9944;
	// bl 0x8214b638
	ctx.lr = 0x821503AC;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,9968
	ctx.r6.s64 = ctx.r10.s64 + 9968;
	// addi r5,r9,9716
	ctx.r5.s64 = ctx.r9.s64 + 9716;
	// li r7,188
	ctx.r7.s64 = 188;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x821503D8;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821503f0
	if (ctx.cr6.eq) goto loc_821503F0;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x821503F0;
	sub_8212D1B8(ctx, base);
loc_821503F0:
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

__attribute__((alias("__imp__sub_82150404"))) PPC_WEAK_FUNC(sub_82150404);
PPC_FUNC_IMPL(__imp__sub_82150404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150408"))) PPC_WEAK_FUNC(sub_82150408);
PPC_FUNC_IMPL(__imp__sub_82150408) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821504c8
	if (ctx.cr6.eq) goto loc_821504C8;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821504b4
	if (ctx.cr6.eq) goto loc_821504B4;
loc_8215043C:
	// bl 0x82146770
	ctx.lr = 0x82150440;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x821504a4
	if (ctx.cr6.gt) goto loc_821504A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,10000
	ctx.r4.s64 = ctx.r11.s64 + 10000;
	// bl 0x8214b638
	ctx.lr = 0x82150460;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,10064
	ctx.r6.s64 = ctx.r10.s64 + 10064;
	// addi r5,r9,9716
	ctx.r5.s64 = ctx.r9.s64 + 9716;
	// li r7,247
	ctx.r7.s64 = 247;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8215048C;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821504a4
	if (ctx.cr6.eq) goto loc_821504A4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x821504A4;
	sub_8212D1B8(ctx, base);
loc_821504A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x82150368
	ctx.lr = 0x821504B4;
	sub_82150368(ctx, base);
loc_821504B4:
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
loc_821504C8:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bne cr6,0x8215043c
	if (!ctx.cr6.eq) goto loc_8215043C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x821504b4
	goto loc_821504B4;
}

__attribute__((alias("__imp__sub_821504E0"))) PPC_WEAK_FUNC(sub_821504E0);
PPC_FUNC_IMPL(__imp__sub_821504E0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821505a0
	if (ctx.cr6.eq) goto loc_821505A0;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8215058c
	if (ctx.cr6.eq) goto loc_8215058C;
loc_82150514:
	// bl 0x82146770
	ctx.lr = 0x82150518;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8215057c
	if (ctx.cr6.gt) goto loc_8215057C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,10112
	ctx.r4.s64 = ctx.r11.s64 + 10112;
	// bl 0x8214b638
	ctx.lr = 0x82150538;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,10176
	ctx.r6.s64 = ctx.r10.s64 + 10176;
	// addi r5,r9,9716
	ctx.r5.s64 = ctx.r9.s64 + 9716;
	// li r7,272
	ctx.r7.s64 = 272;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x82150564;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215057c
	if (ctx.cr6.eq) goto loc_8215057C;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x8215057C;
	sub_8212D1B8(ctx, base);
loc_8215057C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x82150368
	ctx.lr = 0x8215058C;
	sub_82150368(ctx, base);
loc_8215058C:
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
loc_821505A0:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bne cr6,0x82150514
	if (!ctx.cr6.eq) goto loc_82150514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151458
	ctx.lr = 0x821505B4;
	sub_82151458(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82150514
	if (ctx.cr0.eq) goto loc_82150514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214fc90
	ctx.lr = 0x821505C4;
	sub_8214FC90(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x8215058c
	goto loc_8215058C;
}

__attribute__((alias("__imp__sub_821505D0"))) PPC_WEAK_FUNC(sub_821505D0);
PPC_FUNC_IMPL(__imp__sub_821505D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x821505D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r29,r11,8644
	ctx.r29.s64 = ctx.r11.s64 + 8644;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r25,9
	ctx.r25.s64 = 9;
	// li r26,0
	ctx.r26.s64 = 0;
	// addis r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -65536;
	// addi r28,r10,9716
	ctx.r28.s64 = ctx.r10.s64 + 9716;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r9,10260
	ctx.r27.s64 = ctx.r9.s64 + 10260;
	// beq 0x82150650
	if (ctx.cr0.eq) goto loc_82150650;
	// cmplwi cr6,r11,201
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 201, ctx.xer);
	// beq cr6,0x82150634
	if (ctx.cr6.eq) goto loc_82150634;
	// cmplwi cr6,r11,300
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 300, ctx.xer);
	// beq cr6,0x82150634
	if (ctx.cr6.eq) goto loc_82150634;
	// lis r10,11
	ctx.r10.s64 = 720896;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82150818
	if (ctx.cr6.eq) goto loc_82150818;
	// b 0x82150664
	goto loc_82150664;
loc_82150634:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,14164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	// bl 0x8214f250
	ctx.lr = 0x82150640;
	sub_8214F250(ctx, base);
	// stw r25,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214fc90
	ctx.lr = 0x8215064C;
	sub_8214FC90(ctx, base);
	// b 0x82150818
	goto loc_82150818;
loc_82150650:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// beq cr6,0x82150704
	if (ctx.cr6.eq) goto loc_82150704;
	// cmpwi cr6,r11,403
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 403, ctx.xer);
	// beq cr6,0x8215066c
	if (ctx.cr6.eq) goto loc_8215066C;
loc_82150664:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82150818
	goto loc_82150818;
loc_8215066C:
	// bl 0x82146770
	ctx.lr = 0x82150670;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x821506f8
	if (ctx.cr6.gt) goto loc_821506F8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82150690
	if (!ctx.cr6.eq) goto loc_82150690;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821506a4
	goto loc_821506A4;
loc_82150690:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_821506A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,10300
	ctx.r4.s64 = ctx.r11.s64 + 10300;
	// bl 0x8214b638
	ctx.lr = 0x821506C4;
	sub_8214B638(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r7,334
	ctx.r7.s64 = 334;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821469c8
	ctx.lr = 0x821506E0;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821506f8
	if (ctx.cr6.eq) goto loc_821506F8;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x821506F8;
	sub_8212D1B8(ctx, base);
loc_821506F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214fe88
	ctx.lr = 0x82150700;
	sub_8214FE88(ctx, base);
	// b 0x82150818
	goto loc_82150818;
loc_82150704:
	// bl 0x82146770
	ctx.lr = 0x82150708;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82150788
	if (ctx.cr6.gt) goto loc_82150788;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150734
	if (ctx.cr6.eq) goto loc_82150734;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82150734:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,10224
	ctx.r4.s64 = ctx.r11.s64 + 10224;
	// bl 0x8214b638
	ctx.lr = 0x82150754;
	sub_8214B638(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r7,325
	ctx.r7.s64 = 325;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821469c8
	ctx.lr = 0x82150770;
	sub_821469C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150788
	if (ctx.cr6.eq) goto loc_82150788;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x82150788;
	sub_8212D1B8(ctx, base);
loc_82150788:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821507a0
	if (!ctx.cr6.eq) goto loc_821507A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821507b4
	goto loc_821507B4;
loc_821507A0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_821507B4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821507d4
	if (ctx.cr6.eq) goto loc_821507D4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// twllei r11,0
	// divwu r8,r9,r11
	ctx.r8.u32 = ctx.r9.u32 / ctx.r11.u32;
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_821507D4:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// lwz r7,160(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,14164(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14164);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8214f2d8
	ctx.lr = 0x82150808;
	sub_8214F2D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82150c08
	ctx.lr = 0x82150810;
	sub_82150C08(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82150818:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82150904
	if (ctx.cr0.eq) goto loc_82150904;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150840
	if (ctx.cr6.eq) goto loc_82150840;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82150840:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82150874
	if (ctx.cr6.lt) goto loc_82150874;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214fd60
	ctx.lr = 0x82150870;
	sub_8214FD60(ctx, base);
	// b 0x82150904
	goto loc_82150904;
loc_82150874:
	// bl 0x82146770
	ctx.lr = 0x82150878;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x821508f8
	if (ctx.cr6.gt) goto loc_821508F8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821508a4
	if (ctx.cr6.eq) goto loc_821508A4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_821508A4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,10356
	ctx.r4.s64 = ctx.r11.s64 + 10356;
	// bl 0x8214b638
	ctx.lr = 0x821508C4;
	sub_8214B638(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r7,357
	ctx.r7.s64 = 357;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821469c8
	ctx.lr = 0x821508E0;
	sub_821469C8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821508f8
	if (ctx.cr6.eq) goto loc_821508F8;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8212d1b8
	ctx.lr = 0x821508F8;
	sub_8212D1B8(ctx, base);
loc_821508F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150368
	ctx.lr = 0x82150900;
	sub_82150368(ctx, base);
	// stw r25,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r25.u32);
loc_82150904:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215090C"))) PPC_WEAK_FUNC(sub_8215090C);
PPC_FUNC_IMPL(__imp__sub_8215090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150910"))) PPC_WEAK_FUNC(sub_82150910);
PPC_FUNC_IMPL(__imp__sub_82150910) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821509b4
	if (!ctx.cr6.gt) goto loc_821509B4;
	// subf. r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// bgt 0x82150bf0
	if (ctx.cr0.gt) goto loc_82150BF0;
	// bl 0x82146770
	ctx.lr = 0x82150944;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821509a8
	if (ctx.cr6.gt) goto loc_821509A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,10400
	ctx.r4.s64 = ctx.r11.s64 + 10400;
	// bl 0x8214b638
	ctx.lr = 0x82150964;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,10428
	ctx.r6.s64 = ctx.r10.s64 + 10428;
	// addi r5,r9,9716
	ctx.r5.s64 = ctx.r9.s64 + 9716;
	// li r7,371
	ctx.r7.s64 = 371;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x82150990;
	sub_821469C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821509a8
	if (ctx.cr6.eq) goto loc_821509A8;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x821509A8;
	sub_8212D1B8(ctx, base);
loc_821509A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_821509B4:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x82150b6c
	if (ctx.cr6.gt) goto loc_82150B6C;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// addi r12,r12,13232
	ctx.r12.s64 = ctx.r12.s64 + 13232;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// addi r12,r12,2536
	ctx.r12.s64 = ctx.r12.s64 + 2536;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821509E8;
	case 1:
		goto loc_821509F4;
	case 2:
		goto loc_82150A00;
	case 3:
		goto loc_82150A40;
	case 4:
		goto loc_82150A4C;
	case 5:
		goto loc_82150A58;
	case 6:
		goto loc_82150A64;
	case 7:
		goto loc_82150A70;
	case 8:
		goto loc_82150BF0;
	case 9:
		goto loc_82150B14;
	case 10:
		goto loc_82150B20;
	case 11:
		goto loc_82150B54;
	case 12:
		goto loc_82150B60;
	default:
		__builtin_unreachable();
	}
loc_821509E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214fe88
	ctx.lr = 0x821509F0;
	sub_8214FE88(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_821509F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821515d8
	ctx.lr = 0x821509FC;
	sub_821515D8(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150A00:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82150a34
	if (ctx.cr6.eq) goto loc_82150A34;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82150bf0
	if (ctx.cr6.eq) goto loc_82150BF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214fe88
	ctx.lr = 0x82150A28;
	sub_8214FE88(ctx, base);
loc_82150A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150368
	ctx.lr = 0x82150A30;
	sub_82150368(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150A34:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82150A38:
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150A40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821517b8
	ctx.lr = 0x82150A48;
	sub_821517B8(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150A4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150408
	ctx.lr = 0x82150A54;
	sub_82150408(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150A58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821518b8
	ctx.lr = 0x82150A60;
	sub_821518B8(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821504e0
	ctx.lr = 0x82150A6C;
	sub_821504E0(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150A70:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82150a88
	if (ctx.cr6.gt) goto loc_82150A88;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82150a94
	goto loc_82150A94;
loc_82150A88:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82150A94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150b08
	if (ctx.cr6.eq) goto loc_82150B08;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r4,9
	ctx.r4.s64 = 9;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150ab0
	if (ctx.cr6.eq) goto loc_82150AB0;
	// li r4,11
	ctx.r4.s64 = 11;
loc_82150AB0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150ad0
	if (ctx.cr6.eq) goto loc_82150AD0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82150AD0:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82150b00
	if (ctx.cr0.eq) goto loc_82150B00;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82150b00
	if (!ctx.cr6.gt) goto loc_82150B00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82152448
	ctx.lr = 0x82150AFC;
	sub_82152448(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150B00:
	// stw r4,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r4.u32);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150B08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214fc90
	ctx.lr = 0x82150B10;
	sub_8214FC90(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150B14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821516c8
	ctx.lr = 0x82150B1C;
	sub_821516C8(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150B20:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82150b4c
	if (ctx.cr6.eq) goto loc_82150B4C;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82150bf0
	if (ctx.cr6.eq) goto loc_82150BF0;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x82150a28
	goto loc_82150A28;
loc_82150B4C:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82150a38
	goto loc_82150A38;
loc_82150B54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151d48
	ctx.lr = 0x82150B5C;
	sub_82151D48(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150B60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821505d0
	ctx.lr = 0x82150B68;
	sub_821505D0(ctx, base);
	// b 0x82150bf0
	goto loc_82150BF0;
loc_82150B6C:
	// bl 0x82146770
	ctx.lr = 0x82150B70;
	sub_82146770(ctx, base);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r30,r11,9716
	ctx.r30.s64 = ctx.r11.s64 + 9716;
	// bgt cr6,0x82150bdc
	if (ctx.cr6.gt) goto loc_82150BDC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r6,152(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r11,10460
	ctx.r4.s64 = ctx.r11.s64 + 10460;
	// bl 0x8214b638
	ctx.lr = 0x82150B9C;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,10428
	ctx.r6.s64 = ctx.r10.s64 + 10428;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,432
	ctx.r7.s64 = 432;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x82150BC4;
	sub_821469C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150bdc
	if (ctx.cr6.eq) goto loc_82150BDC;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x82150BDC;
	sub_8212D1B8(ctx, base);
loc_82150BDC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,10492
	ctx.r3.s64 = ctx.r11.s64 + 10492;
	// li r5,433
	ctx.r5.s64 = 433;
	// bl 0x821470a0
	ctx.lr = 0x82150BF0;
	sub_821470A0(ctx, base);
loc_82150BF0:
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

__attribute__((alias("__imp__sub_82150C08"))) PPC_WEAK_FUNC(sub_82150C08);
PPC_FUNC_IMPL(__imp__sub_82150C08) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150c48
	if (ctx.cr6.eq) goto loc_82150C48;
	// bl 0x8212d1b8
	ctx.lr = 0x82150C48;
	sub_8212D1B8(ctx, base);
loc_82150C48:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150c60
	if (ctx.cr6.eq) goto loc_82150C60;
	// bl 0x8212d1b8
	ctx.lr = 0x82150C60;
	sub_8212D1B8(ctx, base);
loc_82150C60:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150c84
	if (ctx.cr6.eq) goto loc_82150C84;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// twllei r11,0
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82150C84:
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

__attribute__((alias("__imp__sub_82150CA0"))) PPC_WEAK_FUNC(sub_82150CA0);
PPC_FUNC_IMPL(__imp__sub_82150CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82150CA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150d68
	if (ctx.cr6.eq) goto loc_82150D68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82150cd8
	if (ctx.cr6.gt) goto loc_82150CD8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82150ce4
	goto loc_82150CE4;
loc_82150CD8:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82150CE4:
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82150d60
	if (!ctx.cr6.lt) goto loc_82150D60;
loc_82150CF4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82150d08
	if (!ctx.cr6.eq) goto loc_82150D08;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82150d18
	goto loc_82150D18;
loc_82150D08:
	// divwu r10,r29,r11
	ctx.r10.u32 = ctx.r29.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82150D18:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150d3c
	if (ctx.cr6.eq) goto loc_82150D3C;
	// bl 0x8212d1b8
	ctx.lr = 0x82150D3C;
	sub_8212D1B8(ctx, base);
loc_82150D3C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150d54
	if (ctx.cr6.eq) goto loc_82150D54;
	// bl 0x8212d1b8
	ctx.lr = 0x82150D54;
	sub_8212D1B8(ctx, base);
loc_82150D54:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82150cf4
	if (ctx.cr6.lt) goto loc_82150CF4;
loc_82150D60:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82120a70
	ctx.lr = 0x82150D68;
	sub_82120A70(ctx, base);
loc_82150D68:
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150D80"))) PPC_WEAK_FUNC(sub_82150D80);
PPC_FUNC_IMPL(__imp__sub_82150D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82150D88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82150dac
	if (ctx.cr6.gt) goto loc_82150DAC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x82150db8
	goto loc_82150DB8;
loc_82150DAC:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82150DB8:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82150edc
	if (!ctx.cr6.lt) goto loc_82150EDC;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 * 40;
	// bl 0x82120040
	ctx.lr = 0x82150DDC;
	sub_82120040(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150eb0
	if (ctx.cr6.eq) goto loc_82150EB0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82150ea0
	goto loc_82150EA0;
loc_82150DF4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82150e08
	if (!ctx.cr6.eq) goto loc_82150E08;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82150e18
	goto loc_82150E18;
loc_82150E08:
	// divwu r10,r29,r11
	ctx.r10.u32 = ctx.r29.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82150E18:
	// divwu r11,r29,r28
	ctx.r11.u32 = ctx.r29.u32 / ctx.r28.u32;
	// twllei r28,0
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add. r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82150e44
	if (ctx.cr0.eq) goto loc_82150E44;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r9,40
	ctx.r11.s64 = ctx.r9.s64 * 40;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82150ee8
	ctx.lr = 0x82150E44;
	sub_82150EE8(ctx, base);
loc_82150E44:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150e60
	if (ctx.cr6.eq) goto loc_82150E60;
	// divwu r10,r29,r11
	ctx.r10.u32 = ctx.r29.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82150E60:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150e84
	if (ctx.cr6.eq) goto loc_82150E84;
	// bl 0x8212d1b8
	ctx.lr = 0x82150E84;
	sub_8212D1B8(ctx, base);
loc_82150E84:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150e9c
	if (ctx.cr6.eq) goto loc_82150E9C;
	// bl 0x8212d1b8
	ctx.lr = 0x82150E9C;
	sub_8212D1B8(ctx, base);
loc_82150E9C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82150EA0:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82150df4
	if (ctx.cr6.lt) goto loc_82150DF4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82120a70
	ctx.lr = 0x82150EB0;
	sub_82120A70(ctx, base);
loc_82150EB0:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bne cr6,0x82150ec8
	if (!ctx.cr6.eq) goto loc_82150EC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82150ed8
	goto loc_82150ED8;
loc_82150EC8:
	// divwu r11,r26,r28
	ctx.r11.u32 = ctx.r26.u32 / ctx.r28.u32;
	// twllei r28,0
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
loc_82150ED8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82150EDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150EE4"))) PPC_WEAK_FUNC(sub_82150EE4);
PPC_FUNC_IMPL(__imp__sub_82150EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82150EE8"))) PPC_WEAK_FUNC(sub_82150EE8);
PPC_FUNC_IMPL(__imp__sub_82150EE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82150f34
	if (ctx.cr6.eq) goto loc_82150F34;
loc_82150F0C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82150f0c
	if (!ctx.cr0.eq) goto loc_82150F0C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82150f38
	goto loc_82150F38;
loc_82150F34:
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_82150F38:
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82150f78
	if (ctx.cr6.eq) goto loc_82150F78;
loc_82150F50:
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
	// bne 0x82150f50
	if (!ctx.cr0.eq) goto loc_82150F50;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x82150f7c
	goto loc_82150F7C;
loc_82150F78:
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
loc_82150F7C:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lbz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// lbz r11,33(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r11.u8);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82150FA0"))) PPC_WEAK_FUNC(sub_82150FA0);
PPC_FUNC_IMPL(__imp__sub_82150FA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8214fb28
	sub_8214FB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150FA8"))) PPC_WEAK_FUNC(sub_82150FA8);
PPC_FUNC_IMPL(__imp__sub_82150FA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8214fb28
	sub_8214FB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82150FB0"))) PPC_WEAK_FUNC(sub_82150FB0);
PPC_FUNC_IMPL(__imp__sub_82150FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82150FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// addi r29,r3,216
	ctx.r29.s64 = ctx.r3.s64 + 216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150fd4
	if (ctx.cr6.eq) goto loc_82150FD4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82150fd8
	goto loc_82150FD8;
loc_82150FD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82150FD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821511a0
	if (!ctx.cr6.eq) goto loc_821511A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82150FE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eb60
	ctx.lr = 0x82150FF0;
	sub_8222EB60(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82151008
	if (ctx.cr6.eq) goto loc_82151008;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82150fe8
	if (ctx.cr6.lt) goto loc_82150FE8;
	// b 0x8215100c
	goto loc_8215100C;
loc_82151008:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215100C:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82151140
	if (ctx.cr0.eq) goto loc_82151140;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82238518
	ctx.lr = 0x8215101C;
	sub_82238518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821510d8
	if (ctx.cr0.eq) goto loc_821510D8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82238430
	ctx.lr = 0x82151030;
	sub_82238430(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82151070
	if (!ctx.cr0.eq) goto loc_82151070;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,10704
	ctx.r4.s64 = ctx.r11.s64 + 10704;
	// bl 0x8214b638
	ctx.lr = 0x8215104C;
	sub_8214B638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82146238
	ctx.lr = 0x82151058;
	sub_82146238(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821511a0
	if (ctx.cr6.eq) goto loc_821511A0;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// b 0x8215119c
	goto loc_8215119C;
loc_82151070:
	// bl 0x82146770
	ctx.lr = 0x82151074;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x821511a0
	if (ctx.cr6.gt) goto loc_821511A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,10712
	ctx.r4.s64 = ctx.r11.s64 + 10712;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8214b638
	ctx.lr = 0x82151094;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,10748
	ctx.r6.s64 = ctx.r10.s64 + 10748;
	// addi r5,r9,10672
	ctx.r5.s64 = ctx.r9.s64 + 10672;
	// li r7,91
	ctx.r7.s64 = 91;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x821510C0;
	sub_821469C8(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821511a0
	if (ctx.cr6.eq) goto loc_821511A0;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// b 0x8215119c
	goto loc_8215119C;
loc_821510D8:
	// bl 0x82146770
	ctx.lr = 0x821510DC;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x821511a0
	if (ctx.cr6.gt) goto loc_821511A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,10788
	ctx.r4.s64 = ctx.r11.s64 + 10788;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8214b638
	ctx.lr = 0x821510FC;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,10748
	ctx.r6.s64 = ctx.r10.s64 + 10748;
	// addi r5,r9,10672
	ctx.r5.s64 = ctx.r9.s64 + 10672;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x82151128;
	sub_821469C8(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821511a0
	if (ctx.cr6.eq) goto loc_821511A0;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// b 0x8215119c
	goto loc_8215119C;
loc_82151140:
	// bl 0x82146770
	ctx.lr = 0x82151144;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x821511a0
	if (ctx.cr6.gt) goto loc_821511A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,10820
	ctx.r4.s64 = ctx.r11.s64 + 10820;
	// bl 0x8212d020
	ctx.lr = 0x82151160;
	sub_8212D020(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,10748
	ctx.r6.s64 = ctx.r11.s64 + 10748;
	// addi r5,r10,10672
	ctx.r5.s64 = ctx.r10.s64 + 10672;
	// addi r3,r9,8644
	ctx.r3.s64 = ctx.r9.s64 + 8644;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// li r7,101
	ctx.r7.s64 = 101;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821469c8
	ctx.lr = 0x82151188;
	sub_821469C8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821511a0
	if (ctx.cr6.eq) goto loc_821511A0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
loc_8215119C:
	// bl 0x8212d1b8
	ctx.lr = 0x821511A0;
	sub_8212D1B8(ctx, base);
loc_821511A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821511AC"))) PPC_WEAK_FUNC(sub_821511AC);
PPC_FUNC_IMPL(__imp__sub_821511AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821511B0"))) PPC_WEAK_FUNC(sub_821511B0);
PPC_FUNC_IMPL(__imp__sub_821511B0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,12
	ctx.r11.s64 = 786432;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1003
	ctx.r11.u64 = ctx.r11.u64 | 1003;
	// lwz r10,-17440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17440);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x8215124c
	if (ctx.cr6.gt) goto loc_8215124C;
	// beq cr6,0x82151240
	if (ctx.cr6.eq) goto loc_82151240;
	// addis r11,r5,-12
	ctx.r11.s64 = ctx.r5.s64 + -786432;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82151234
	if (ctx.cr0.eq) goto loc_82151234;
	// cmplwi cr6,r11,999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 999, ctx.xer);
	// beq cr6,0x82151228
	if (ctx.cr6.eq) goto loc_82151228;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// beq cr6,0x8215121c
	if (ctx.cr6.eq) goto loc_8215121C;
	// cmplwi cr6,r11,1001
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1001, ctx.xer);
	// bne cr6,0x82151268
	if (!ctx.cr6.eq) goto loc_82151268;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10924
	ctx.r4.s64 = ctx.r11.s64 + 10924;
	// b 0x821512d8
	goto loc_821512D8;
loc_8215121C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10900
	ctx.r4.s64 = ctx.r11.s64 + 10900;
	// b 0x821512d8
	goto loc_821512D8;
loc_82151228:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10872
	ctx.r4.s64 = ctx.r11.s64 + 10872;
	// b 0x821512d8
	goto loc_821512D8;
loc_82151234:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10840
	ctx.r4.s64 = ctx.r11.s64 + 10840;
	// b 0x821512d8
	goto loc_821512D8;
loc_82151240:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10952
	ctx.r4.s64 = ctx.r11.s64 + 10952;
	// b 0x821512d8
	goto loc_821512D8;
loc_8215124C:
	// addis r11,r5,-12
	ctx.r11.s64 = ctx.r5.s64 + -786432;
	// addic. r11,r11,-1004
	ctx.xer.ca = ctx.r11.u32 > 1003;
	ctx.r11.s64 = ctx.r11.s64 + -1004;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821512d0
	if (ctx.cr0.eq) goto loc_821512D0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821512c4
	if (ctx.cr6.eq) goto loc_821512C4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821512b8
	if (ctx.cr6.eq) goto loc_821512B8;
loc_82151268:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,11072
	ctx.r4.s64 = ctx.r11.s64 + 11072;
	// bl 0x8214b638
	ctx.lr = 0x82151278;
	sub_8214B638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146238
	ctx.lr = 0x82151284;
	sub_82146238(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215129c
	if (ctx.cr6.eq) goto loc_8215129C;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x8215129C;
	sub_8212D1B8(ctx, base);
loc_8215129C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,11096
	ctx.r4.s64 = ctx.r11.s64 + 11096;
	// addi r3,r10,11136
	ctx.r3.s64 = ctx.r10.s64 + 11136;
	// li r5,26
	ctx.r5.s64 = 26;
	// bl 0x821470a0
	ctx.lr = 0x821512B4;
	sub_821470A0(ctx, base);
	// b 0x821512e0
	goto loc_821512E0;
loc_821512B8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,11036
	ctx.r4.s64 = ctx.r11.s64 + 11036;
	// b 0x821512d8
	goto loc_821512D8;
loc_821512C4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,11008
	ctx.r4.s64 = ctx.r11.s64 + 11008;
	// b 0x821512d8
	goto loc_821512D8;
loc_821512D0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,10980
	ctx.r4.s64 = ctx.r11.s64 + 10980;
loc_821512D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bf48
	ctx.lr = 0x821512E0;
	sub_8214BF48(ctx, base);
loc_821512E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_821512F8"))) PPC_WEAK_FUNC(sub_821512F8);
PPC_FUNC_IMPL(__imp__sub_821512F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82151300;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82151450
	if (!ctx.cr6.eq) goto loc_82151450;
	// stw r31,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// bl 0x8214a308
	ctx.lr = 0x8215132C;
	sub_8214A308(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82151450
	if (!ctx.cr6.eq) goto loc_82151450;
	// lwz r10,152(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82151360
	if (ctx.cr6.eq) goto loc_82151360;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x8215136c
	if (!ctx.cr6.eq) goto loc_8215136C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	// lhz r11,190(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 190);
	// b 0x8215136c
	goto loc_8215136C;
loc_82151360:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	// lhz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 188);
loc_8215136C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r31,-17448(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17448);
	// lwz r30,-17440(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821fd9d8
	ctx.lr = 0x82151394;
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
	// li r5,144
	ctx.r5.s64 = 144;
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
	ctx.lr = 0x821513D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821513e4
	if (ctx.cr6.eq) goto loc_821513E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x821513E4;
	sub_821FD9E0(ctx, base);
loc_821513E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821513fc
	if (ctx.cr6.eq) goto loc_821513FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8214d088
	ctx.lr = 0x821513F4;
	sub_8214D088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82151400
	goto loc_82151400;
loc_821513FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82151400:
	// addi r31,r29,132
	ctx.r31.s64 = ctx.r29.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214a280
	ctx.lr = 0x8215140C;
	sub_8214A280(ctx, base);
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r5,r3,28
	ctx.r5.s64 = ctx.r3.s64 + 28;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8215142c
	if (ctx.cr6.gt) goto loc_8215142C;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
loc_8215142C:
	// bl 0x82146360
	ctx.lr = 0x82151430;
	sub_82146360(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8214d238
	ctx.lr = 0x8215143C;
	sub_8214D238(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82151450
	if (!ctx.cr0.eq) goto loc_82151450;
	// lis r11,12
	ctx.r11.s64 = 786432;
	// ori r11,r11,1005
	ctx.r11.u64 = ctx.r11.u64 | 1005;
	// stw r11,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r11.u32);
loc_82151450:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82151458"))) PPC_WEAK_FUNC(sub_82151458);
PPC_FUNC_IMPL(__imp__sub_82151458) {
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
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82151488
	if (ctx.cr6.eq) goto loc_82151488;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8215148c
	goto loc_8215148C;
loc_82151488:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215148C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151544
	if (ctx.cr6.eq) goto loc_82151544;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82151544
	if (ctx.cr6.eq) goto loc_82151544;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8215152c
	if (ctx.cr6.eq) goto loc_8215152C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r8,r10,11160
	ctx.r8.s64 = ctx.r10.s64 + 11160;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_821514C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,115
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 115, ctx.xer);
	// bne cr6,0x82151518
	if (!ctx.cr6.eq) goto loc_82151518;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82151500
	if (ctx.cr6.eq) goto loc_82151500;
loc_821514D8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82151500
	if (ctx.cr0.eq) goto loc_82151500;
	// lbzx r30,r7,r10
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82151500
	if (!ctx.cr6.eq) goto loc_82151500;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x821514d8
	if (!ctx.cr0.eq) goto loc_821514D8;
loc_82151500:
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215152c
	if (ctx.cr6.eq) goto loc_8215152C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82151544
	if (ctx.cr6.eq) goto loc_82151544;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82151518:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne 0x821514c0
	if (!ctx.cr0.eq) goto loc_821514C0;
	// b 0x82151544
	goto loc_82151544;
loc_8215152C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151544
	if (ctx.cr6.eq) goto loc_82151544;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8215154c
	if (!ctx.cr6.eq) goto loc_8215154C;
loc_82151544:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821515c0
	goto loc_821515C0;
loc_8215154C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151564
	if (ctx.cr6.eq) goto loc_82151564;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82151568
	goto loc_82151568;
loc_82151564:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82151568:
	// subf r6,r5,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bl 0x821461c0
	ctx.lr = 0x82151578;
	sub_821461C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146238
	ctx.lr = 0x82151584;
	sub_82146238(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215159c
	if (ctx.cr6.eq) goto loc_8215159C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212d1b8
	ctx.lr = 0x8215159C;
	sub_8212D1B8(ctx, base);
loc_8215159C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821515b0
	if (ctx.cr6.eq) goto loc_821515B0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821515b4
	goto loc_821515B4;
loc_821515B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821515B4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_821515C0:
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

__attribute__((alias("__imp__sub_821515D8"))) PPC_WEAK_FUNC(sub_821515D8);
PPC_FUNC_IMPL(__imp__sub_821515D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82146770
	ctx.lr = 0x821515F0;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82151654
	if (ctx.cr6.gt) goto loc_82151654;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,11168
	ctx.r4.s64 = ctx.r11.s64 + 11168;
	// bl 0x8214b638
	ctx.lr = 0x82151610;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,11204
	ctx.r6.s64 = ctx.r10.s64 + 11204;
	// addi r5,r9,11252
	ctx.r5.s64 = ctx.r9.s64 + 11252;
	// li r7,119
	ctx.r7.s64 = 119;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8215163C;
	sub_821469C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151654
	if (ctx.cr6.eq) goto loc_82151654;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x82151654;
	sub_8212D1B8(ctx, base);
loc_82151654:
	// lis r11,12
	ctx.r11.s64 = 786432;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,4864
	ctx.r4.s64 = ctx.r10.s64 + 4864;
	// bl 0x8212d020
	ctx.lr = 0x82151678;
	sub_8212D020(ctx, base);
	// bl 0x82144b48
	ctx.lr = 0x8215167C;
	sub_82144B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,21843
	ctx.r4.s64 = 1431502848;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,2031
	ctx.r4.u64 = ctx.r4.u64 | 2031;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821516b4
	if (ctx.cr6.eq) goto loc_821516B4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x821516B4;
	sub_8212D1B8(ctx, base);
loc_821516B4:
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

__attribute__((alias("__imp__sub_821516C8"))) PPC_WEAK_FUNC(sub_821516C8);
PPC_FUNC_IMPL(__imp__sub_821516C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82146770
	ctx.lr = 0x821516E0;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82151744
	if (ctx.cr6.gt) goto loc_82151744;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,11288
	ctx.r4.s64 = ctx.r11.s64 + 11288;
	// bl 0x8214b638
	ctx.lr = 0x82151700;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,11324
	ctx.r6.s64 = ctx.r10.s64 + 11324;
	// addi r5,r9,11252
	ctx.r5.s64 = ctx.r9.s64 + 11252;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x8215172C;
	sub_821469C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151744
	if (ctx.cr6.eq) goto loc_82151744;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x82151744;
	sub_8212D1B8(ctx, base);
loc_82151744:
	// lis r11,12
	ctx.r11.s64 = 786432;
	// li r10,10
	ctx.r10.s64 = 10;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,4864
	ctx.r4.s64 = ctx.r10.s64 + 4864;
	// bl 0x8212d020
	ctx.lr = 0x82151768;
	sub_8212D020(ctx, base);
	// bl 0x82144b48
	ctx.lr = 0x8215176C;
	sub_82144B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,21843
	ctx.r4.s64 = 1431502848;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,2031
	ctx.r4.u64 = ctx.r4.u64 | 2031;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82151788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821517a4
	if (ctx.cr6.eq) goto loc_821517A4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x821517A4;
	sub_8212D1B8(ctx, base);
loc_821517A4:
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

__attribute__((alias("__imp__sub_821517B8"))) PPC_WEAK_FUNC(sub_821517B8);
PPC_FUNC_IMPL(__imp__sub_821517B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5280(r1)
	ea = -5280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,14164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// bl 0x8213ecd8
	ctx.lr = 0x821517E0;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11376
	ctx.r4.s64 = ctx.r11.s64 + 11376;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82219e28
	ctx.lr = 0x821517F4;
	sub_82219E28(ctx, base);
	// bl 0x82146770
	ctx.lr = 0x821517F8;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8215185c
	if (ctx.cr6.gt) goto loc_8215185C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,11516
	ctx.r4.s64 = ctx.r11.s64 + 11516;
	// bl 0x8214b638
	ctx.lr = 0x82151818;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,11568
	ctx.r6.s64 = ctx.r10.s64 + 11568;
	// addi r5,r9,11252
	ctx.r5.s64 = ctx.r9.s64 + 11252;
	// li r7,149
	ctx.r7.s64 = 149;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x82151844;
	sub_821469C8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215185c
	if (ctx.cr6.eq) goto loc_8215185C;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x8215185C;
	sub_8212D1B8(ctx, base);
loc_8215185C:
	// lis r11,12
	ctx.r11.s64 = 786432;
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d020
	ctx.lr = 0x8215187C;
	sub_8212D020(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8214d430
	ctx.lr = 0x82151888;
	sub_8214D430(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821518a4
	if (ctx.cr6.eq) goto loc_821518A4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x821518A4;
	sub_8212D1B8(ctx, base);
loc_821518A4:
	// addi r1,r1,5280
	ctx.r1.s64 = ctx.r1.s64 + 5280;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821518B8"))) PPC_WEAK_FUNC(sub_821518B8);
PPC_FUNC_IMPL(__imp__sub_821518B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x821518C0;
	__savegprlr_22(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5648(r1)
	ea = -5648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r8,512
	ctx.r8.s64 = 512;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,-17440(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17440);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,512
	ctx.r4.s64 = 512;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152888
	ctx.lr = 0x821518FC;
	sub_82152888(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// lwz r30,14164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82151938
	if (!ctx.cr6.eq) goto loc_82151938;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,8620
	ctx.r4.s64 = ctx.r11.s64 + 8620;
	// addi r3,r10,1724
	ctx.r3.s64 = ctx.r10.s64 + 1724;
	// li r5,65
	ctx.r5.s64 = 65;
	// bl 0x821470a0
	ctx.lr = 0x82151934;
	sub_821470A0(ctx, base);
	// lwz r30,14164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14164);
loc_82151938:
	// li r4,5120
	ctx.r4.s64 = 5120;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82152630
	ctx.lr = 0x82151944;
	sub_82152630(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,11612
	ctx.r4.s64 = ctx.r11.s64 + 11612;
	// bl 0x8212d020
	ctx.lr = 0x82151954;
	sub_8212D020(ctx, base);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// addi r31,r30,204
	ctx.r31.s64 = ctx.r30.s64 + 204;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215196c
	if (ctx.cr6.eq) goto loc_8215196C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82151970
	goto loc_82151970;
loc_8215196C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82151970:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r10,8644
	ctx.r27.s64 = ctx.r10.s64 + 8644;
	// bne cr6,0x82151a18
	if (!ctx.cr6.eq) goto loc_82151A18;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82238518
	ctx.lr = 0x82151988;
	sub_82238518(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r29,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821519f8
	if (!ctx.cr0.eq) goto loc_821519F8;
	// bl 0x82146770
	ctx.lr = 0x82151998;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82151a18
	if (ctx.cr6.gt) goto loc_82151A18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,10576
	ctx.r4.s64 = ctx.r11.s64 + 10576;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8214b638
	ctx.lr = 0x821519B8;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r11,10632
	ctx.r6.s64 = ctx.r11.s64 + 10632;
	// addi r5,r10,10672
	ctx.r5.s64 = ctx.r10.s64 + 10672;
	// li r7,44
	ctx.r7.s64 = 44;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821469c8
	ctx.lr = 0x821519DC;
	sub_821469C8(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151a18
	if (ctx.cr6.eq) goto loc_82151A18;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8212d1b8
	ctx.lr = 0x821519F4;
	sub_8212D1B8(ctx, base);
	// b 0x82151a18
	goto loc_82151A18;
loc_821519F8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,324(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-23524
	ctx.r4.s64 = ctx.r11.s64 + -23524;
	// bl 0x82219e28
	ctx.lr = 0x82151A0C;
	sub_82219E28(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214bf48
	ctx.lr = 0x82151A18;
	sub_8214BF48(ctx, base);
loc_82151A18:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82152908
	ctx.lr = 0x82151A28;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x82151A2C;
	sub_8213ECD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 + 56;
	// bl 0x8213ecd8
	ctx.lr = 0x82151A38;
	sub_8213ECD8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213ecd8
	ctx.lr = 0x82151A44;
	sub_8213ECD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82150fb0
	ctx.lr = 0x82151A50;
	sub_82150FB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82152908
	ctx.lr = 0x82151A60;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x82151A64;
	sub_8213ECD8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r5,r30,140
	ctx.r5.s64 = ctx.r30.s64 + 140;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82152908
	ctx.lr = 0x82151A78;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x82151A7C;
	sub_8213ECD8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r5,r30,152
	ctx.r5.s64 = ctx.r30.s64 + 152;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82152908
	ctx.lr = 0x82151A90;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x82151A94;
	sub_8213ECD8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r28,136
	ctx.r5.s64 = ctx.r28.s64 + 136;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r22,r11,10568
	ctx.r22.s64 = ctx.r11.s64 + 10568;
	// bl 0x82152908
	ctx.lr = 0x82151AB0;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x82151AB4;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r4,r11,11620
	ctx.r4.s64 = ctx.r11.s64 + 11620;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x82219e28
	ctx.lr = 0x82151AE4;
	sub_82219E28(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151b00
	if (ctx.cr6.eq) goto loc_82151B00;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8212d1b8
	ctx.lr = 0x82151B00;
	sub_8212D1B8(ctx, base);
loc_82151B00:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151b18
	if (ctx.cr6.eq) goto loc_82151B18;
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8212d1b8
	ctx.lr = 0x82151B18;
	sub_8212D1B8(ctx, base);
loc_82151B18:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151b30
	if (ctx.cr6.eq) goto loc_82151B30;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8212d1b8
	ctx.lr = 0x82151B30;
	sub_8212D1B8(ctx, base);
loc_82151B30:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151b48
	if (ctx.cr6.eq) goto loc_82151B48;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8212d1b8
	ctx.lr = 0x82151B48;
	sub_8212D1B8(ctx, base);
loc_82151B48:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151b60
	if (ctx.cr6.eq) goto loc_82151B60;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8212d1b8
	ctx.lr = 0x82151B60;
	sub_8212D1B8(ctx, base);
loc_82151B60:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151b78
	if (ctx.cr6.eq) goto loc_82151B78;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8212d1b8
	ctx.lr = 0x82151B78;
	sub_8212D1B8(ctx, base);
loc_82151B78:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82152728
	ctx.lr = 0x82151B88;
	sub_82152728(ctx, base);
	// li r4,5120
	ctx.r4.s64 = 5120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82152630
	ctx.lr = 0x82151B94;
	sub_82152630(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,11676
	ctx.r4.s64 = ctx.r11.s64 + 11676;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82152728
	ctx.lr = 0x82151BA8;
	sub_82152728(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x8212d020
	ctx.lr = 0x82151BB4;
	sub_8212D020(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82152908
	ctx.lr = 0x82151BC4;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x82151BC8;
	sub_8213ECD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82151BD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82151bd0
	if (!ctx.cr6.eq) goto loc_82151BD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82152728
	ctx.lr = 0x82151BF4;
	sub_82152728(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151c0c
	if (ctx.cr6.eq) goto loc_82151C0C;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8212d1b8
	ctx.lr = 0x82151C0C;
	sub_8212D1B8(ctx, base);
loc_82151C0C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151c24
	if (ctx.cr6.eq) goto loc_82151C24;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x82151C24;
	sub_8212D1B8(ctx, base);
loc_82151C24:
	// li r4,5120
	ctx.r4.s64 = 5120;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82152630
	ctx.lr = 0x82151C30;
	sub_82152630(ctx, base);
	// addi r3,r30,164
	ctx.r3.s64 = ctx.r30.s64 + 164;
	// bl 0x8213ecd8
	ctx.lr = 0x82151C38;
	sub_8213ECD8(ctx, base);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11696
	ctx.r4.s64 = ctx.r11.s64 + 11696;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82219e28
	ctx.lr = 0x82151C54;
	sub_82219E28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82152728
	ctx.lr = 0x82151C64;
	sub_82152728(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82152728
	ctx.lr = 0x82151C74;
	sub_82152728(ctx, base);
	// bl 0x82146770
	ctx.lr = 0x82151C78;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82151cd4
	if (ctx.cr6.gt) goto loc_82151CD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,11828
	ctx.r4.s64 = ctx.r11.s64 + 11828;
	// bl 0x8214b638
	ctx.lr = 0x82151C98;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r11,11880
	ctx.r6.s64 = ctx.r11.s64 + 11880;
	// addi r5,r10,11252
	ctx.r5.s64 = ctx.r10.s64 + 11252;
	// li r7,199
	ctx.r7.s64 = 199;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821469c8
	ctx.lr = 0x82151CBC;
	sub_821469C8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151cd4
	if (ctx.cr6.eq) goto loc_82151CD4;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8212d1b8
	ctx.lr = 0x82151CD4;
	sub_8212D1B8(ctx, base);
loc_82151CD4:
	// lis r11,12
	ctx.r11.s64 = 786432;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r10,6
	ctx.r10.s64 = 6;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 152, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 160, ctx.r11.u32);
	// bl 0x8212d020
	ctx.lr = 0x82151CF4;
	sub_8212D020(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,132(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// bl 0x8214d430
	ctx.lr = 0x82151D00;
	sub_8214D430(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,168(r28)
	PPC_STORE_U32(ctx.r28.u32 + 168, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151d1c
	if (ctx.cr6.eq) goto loc_82151D1C;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x82151D1C;
	sub_8212D1B8(ctx, base);
loc_82151D1C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821526a0
	ctx.lr = 0x82151D24;
	sub_821526A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821526a0
	ctx.lr = 0x82151D2C;
	sub_821526A0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821526a0
	ctx.lr = 0x82151D34;
	sub_821526A0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821526a0
	ctx.lr = 0x82151D3C;
	sub_821526A0(ctx, base);
	// addi r1,r1,5648
	ctx.r1.s64 = ctx.r1.s64 + 5648;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82151D44"))) PPC_WEAK_FUNC(sub_82151D44);
PPC_FUNC_IMPL(__imp__sub_82151D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82151D48"))) PPC_WEAK_FUNC(sub_82151D48);
PPC_FUNC_IMPL(__imp__sub_82151D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82151D50;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5488(r1)
	ea = -5488 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r8,512
	ctx.r8.s64 = 512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,-17440(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17440);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,512
	ctx.r4.s64 = 512;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152888
	ctx.lr = 0x82151D8C;
	sub_82152888(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// bne cr6,0x82151db0
	if (!ctx.cr6.eq) goto loc_82151DB0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82151dc4
	goto loc_82151DC4;
loc_82151DB0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82151DC4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82151e60
	if (ctx.cr6.eq) goto loc_82151E60;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82151df4
	if (!ctx.cr6.eq) goto loc_82151DF4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82151e08
	goto loc_82151E08;
loc_82151DF4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r8,r10,r11
	ctx.r8.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82151E08:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addic. r11,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r11.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// bge 0x82151e2c
	if (!ctx.cr0.lt) goto loc_82151E2C;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
loc_82151E2C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82151e40
	if (!ctx.cr6.eq) goto loc_82151E40;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82151e54
	goto loc_82151E54;
loc_82151E40:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r8,r9,r11
	ctx.r8.u32 = ctx.r9.u32 / ctx.r11.u32;
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82151E54:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82151E60:
	// li r4,5120
	ctx.r4.s64 = 5120;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82152630
	ctx.lr = 0x82151E6C;
	sub_82152630(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82151e80
	if (!ctx.cr6.eq) goto loc_82151E80;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82151e94
	goto loc_82151E94;
loc_82151E80:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82151E94:
	// mulli r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 * 40;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82151eb4
	if (!ctx.cr6.eq) goto loc_82151EB4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82151ec8
	goto loc_82151EC8;
loc_82151EB4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82151EC8:
	// mulli r7,r11,40
	ctx.r7.s64 = ctx.r11.s64 * 40;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82151ee4
	if (!ctx.cr6.eq) goto loc_82151EE4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82151ef8
	goto loc_82151EF8;
loc_82151EE4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82151EF8:
	// mulli r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 * 40;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82151f18
	if (!ctx.cr6.eq) goto loc_82151F18;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82151f2c
	goto loc_82151F2C;
loc_82151F18:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r5,r10,r11
	ctx.r5.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r5,r11
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82151F2C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// lwz r6,36(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r27,r7,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r28,r28,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r28.s64;
	// bl 0x82152908
	ctx.lr = 0x82151F58;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x82151F5C;
	sub_8213ECD8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82152908
	ctx.lr = 0x82151F70;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x82151F74;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11924
	ctx.r4.s64 = ctx.r11.s64 + 11924;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x82219e28
	ctx.lr = 0x82151F94;
	sub_82219E28(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151fb0
	if (ctx.cr6.eq) goto loc_82151FB0;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8212d1b8
	ctx.lr = 0x82151FB0;
	sub_8212D1B8(ctx, base);
loc_82151FB0:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82151fc8
	if (ctx.cr6.eq) goto loc_82151FC8;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8212d1b8
	ctx.lr = 0x82151FC8;
	sub_8212D1B8(ctx, base);
loc_82151FC8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82152728
	ctx.lr = 0x82151FD8;
	sub_82152728(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82151fec
	if (!ctx.cr6.eq) goto loc_82151FEC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82152000
	goto loc_82152000;
loc_82151FEC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82152000:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821520c8
	if (ctx.cr0.eq) goto loc_821520C8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215202c
	if (!ctx.cr6.eq) goto loc_8215202C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82152040
	goto loc_82152040;
loc_8215202C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82152040:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821520c8
	if (ctx.cr6.eq) goto loc_821520C8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215206c
	if (ctx.cr6.eq) goto loc_8215206C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82152070
	goto loc_82152070;
loc_8215206C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82152070:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821520c8
	if (ctx.cr6.eq) goto loc_821520C8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82152908
	ctx.lr = 0x82152084;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x82152088;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11956
	ctx.r4.s64 = ctx.r11.s64 + 11956;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82219e28
	ctx.lr = 0x8215209C;
	sub_82219E28(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821520b8
	if (ctx.cr6.eq) goto loc_821520B8;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8212d1b8
	ctx.lr = 0x821520B8;
	sub_8212D1B8(ctx, base);
loc_821520B8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82152728
	ctx.lr = 0x821520C8;
	sub_82152728(ctx, base);
loc_821520C8:
	// li r4,5120
	ctx.r4.s64 = 5120;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82152630
	ctx.lr = 0x821520D4;
	sub_82152630(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8212d020
	ctx.lr = 0x821520E0;
	sub_8212D020(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82152908
	ctx.lr = 0x821520F0;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x821520F4;
	sub_8213ECD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82152908
	ctx.lr = 0x82152108;
	sub_82152908(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x8215210C;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11968
	ctx.r4.s64 = ctx.r11.s64 + 11968;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82219e28
	ctx.lr = 0x82152124;
	sub_82219E28(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152140
	if (ctx.cr6.eq) goto loc_82152140;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8212d1b8
	ctx.lr = 0x82152140;
	sub_8212D1B8(ctx, base);
loc_82152140:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152158
	if (ctx.cr6.eq) goto loc_82152158;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8212d1b8
	ctx.lr = 0x82152158;
	sub_8212D1B8(ctx, base);
loc_82152158:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152170
	if (ctx.cr6.eq) goto loc_82152170;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x82152170;
	sub_8212D1B8(ctx, base);
loc_82152170:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82152728
	ctx.lr = 0x82152180;
	sub_82152728(ctx, base);
	// li r4,5120
	ctx.r4.s64 = 5120;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82152630
	ctx.lr = 0x8215218C;
	sub_82152630(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// bl 0x8213ecd8
	ctx.lr = 0x8215219C;
	sub_8213ECD8(ctx, base);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11992
	ctx.r4.s64 = ctx.r11.s64 + 11992;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82219e28
	ctx.lr = 0x821521B8;
	sub_82219E28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82152728
	ctx.lr = 0x821521C8;
	sub_82152728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82152728
	ctx.lr = 0x821521D8;
	sub_82152728(ctx, base);
	// bl 0x82146770
	ctx.lr = 0x821521DC;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821522f8
	if (ctx.cr6.gt) goto loc_821522F8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821521fc
	if (!ctx.cr6.eq) goto loc_821521FC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82152210
	goto loc_82152210;
loc_821521FC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82152210:
	// mulli r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 * 40;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82152230
	if (!ctx.cr6.eq) goto loc_82152230;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82152244
	goto loc_82152244;
loc_82152230:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82152244:
	// mulli r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 * 40;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82152264
	if (!ctx.cr6.eq) goto loc_82152264;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82152278
	goto loc_82152278;
loc_82152264:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82152278:
	// addi r3,r8,16
	ctx.r3.s64 = ctx.r8.s64 + 16;
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r30,r11,40
	ctx.r30.s64 = ctx.r11.s64 * 40;
	// bl 0x8213ecd8
	ctx.lr = 0x82152288;
	sub_8213ECD8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x8213ecd8
	ctx.lr = 0x82152294;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwzx r6,r30,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r4,r11,12132
	ctx.r4.s64 = ctx.r11.s64 + 12132;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x8214b638
	ctx.lr = 0x821522B4;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,12172
	ctx.r6.s64 = ctx.r10.s64 + 12172;
	// addi r5,r9,11252
	ctx.r5.s64 = ctx.r9.s64 + 11252;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x821522E0;
	sub_821469C8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821522f8
	if (ctx.cr6.eq) goto loc_821522F8;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8212d1b8
	ctx.lr = 0x821522F8;
	sub_8212D1B8(ctx, base);
loc_821522F8:
	// lis r11,12
	ctx.r11.s64 = 786432;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x8212d020
	ctx.lr = 0x82152318;
	sub_8212D020(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8214d430
	ctx.lr = 0x82152324;
	sub_8214D430(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152340
	if (ctx.cr6.eq) goto loc_82152340;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8212d1b8
	ctx.lr = 0x82152340;
	sub_8212D1B8(ctx, base);
loc_82152340:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821526a0
	ctx.lr = 0x82152348;
	sub_821526A0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821526a0
	ctx.lr = 0x82152350;
	sub_821526A0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821526a0
	ctx.lr = 0x82152358;
	sub_821526A0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821526a0
	ctx.lr = 0x82152360;
	sub_821526A0(ctx, base);
	// addi r1,r1,5488
	ctx.r1.s64 = ctx.r1.s64 + 5488;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82152368"))) PPC_WEAK_FUNC(sub_82152368);
PPC_FUNC_IMPL(__imp__sub_82152368) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// bl 0x8222eda0
	ctx.lr = 0x82152394;
	sub_8222EDA0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82152408
	if (ctx.cr0.eq) goto loc_82152408;
	// bl 0x82146770
	ctx.lr = 0x821523A0;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82152410
	if (ctx.cr6.gt) goto loc_82152410;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,12208
	ctx.r4.s64 = ctx.r11.s64 + 12208;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8214b638
	ctx.lr = 0x821523C0;
	sub_8214B638(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8644
	ctx.r11.s64 = ctx.r11.s64 + 8644;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r6,r10,12236
	ctx.r6.s64 = ctx.r10.s64 + 12236;
	// addi r5,r9,11252
	ctx.r5.s64 = ctx.r9.s64 + 11252;
	// li r7,275
	ctx.r7.s64 = 275;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821469c8
	ctx.lr = 0x821523EC;
	sub_821469C8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152410
	if (ctx.cr6.eq) goto loc_82152410;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8212d1b8
	ctx.lr = 0x82152404;
	sub_8212D1B8(ctx, base);
	// b 0x82152410
	goto loc_82152410;
loc_82152408:
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
loc_82152410:
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82152428
	if (!ctx.cr6.eq) goto loc_82152428;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82152428:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82152444"))) PPC_WEAK_FUNC(sub_82152444);
PPC_FUNC_IMPL(__imp__sub_82152444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152448"))) PPC_WEAK_FUNC(sub_82152448);
PPC_FUNC_IMPL(__imp__sub_82152448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82152450;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82146770
	ctx.lr = 0x82152460;
	sub_82146770(ctx, base);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// addi r29,r11,8644
	ctx.r29.s64 = ctx.r11.s64 + 8644;
	// addi r28,r10,11252
	ctx.r28.s64 = ctx.r10.s64 + 11252;
	// addi r27,r9,12308
	ctx.r27.s64 = ctx.r9.s64 + 12308;
	// bgt cr6,0x821524cc
	if (ctx.cr6.gt) goto loc_821524CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,12276
	ctx.r4.s64 = ctx.r11.s64 + 12276;
	// bl 0x8214b638
	ctx.lr = 0x82152498;
	sub_8214B638(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r7,287
	ctx.r7.s64 = 287;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821469c8
	ctx.lr = 0x821524B4;
	sub_821469C8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821524cc
	if (ctx.cr6.eq) goto loc_821524CC;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8212d1b8
	ctx.lr = 0x821524CC;
	sub_8212D1B8(ctx, base);
loc_821524CC:
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r3,14164(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14164);
	// bne cr6,0x82152524
	if (!ctx.cr6.eq) goto loc_82152524;
	// bl 0x82150fb0
	ctx.lr = 0x821524E8;
	sub_82150FB0(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x821524EC;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,12344
	ctx.r4.s64 = ctx.r11.s64 + 12344;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8214b638
	ctx.lr = 0x82152500;
	sub_8214B638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82146238
	ctx.lr = 0x8215250C;
	sub_82146238(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152624
	if (ctx.cr6.eq) goto loc_82152624;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// b 0x82152620
	goto loc_82152620;
loc_82152524:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222eb60
	ctx.lr = 0x8215252C;
	sub_8222EB60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821525d8
	if (ctx.cr0.eq) goto loc_821525D8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8222eda0
	ctx.lr = 0x82152540;
	sub_8222EDA0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82152580
	if (!ctx.cr0.eq) goto loc_82152580;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,10704
	ctx.r4.s64 = ctx.r11.s64 + 10704;
	// bl 0x8214b638
	ctx.lr = 0x8215255C;
	sub_8214B638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82146238
	ctx.lr = 0x82152568;
	sub_82146238(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152624
	if (ctx.cr6.eq) goto loc_82152624;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// b 0x82152620
	goto loc_82152620;
loc_82152580:
	// bl 0x82146770
	ctx.lr = 0x82152584;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x821525d8
	if (ctx.cr6.gt) goto loc_821525D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,12208
	ctx.r4.s64 = ctx.r11.s64 + 12208;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8214b638
	ctx.lr = 0x821525A4;
	sub_8214B638(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r7,308
	ctx.r7.s64 = 308;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821469c8
	ctx.lr = 0x821525C0;
	sub_821469C8(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821525d8
	if (ctx.cr6.eq) goto loc_821525D8;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8212d1b8
	ctx.lr = 0x821525D8;
	sub_8212D1B8(ctx, base);
loc_821525D8:
	// lwz r3,14164(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14164);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82150fb0
	ctx.lr = 0x821525E4;
	sub_82150FB0(ctx, base);
	// bl 0x8213ecd8
	ctx.lr = 0x821525E8;
	sub_8213ECD8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,12352
	ctx.r4.s64 = ctx.r11.s64 + 12352;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8214b638
	ctx.lr = 0x82152600;
	sub_8214B638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82146238
	ctx.lr = 0x8215260C;
	sub_82146238(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152624
	if (ctx.cr6.eq) goto loc_82152624;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
loc_82152620:
	// bl 0x8212d1b8
	ctx.lr = 0x82152624;
	sub_8212D1B8(ctx, base);
loc_82152624:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215262C"))) PPC_WEAK_FUNC(sub_8215262C);
PPC_FUNC_IMPL(__imp__sub_8215262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152630"))) PPC_WEAK_FUNC(sub_82152630);
PPC_FUNC_IMPL(__imp__sub_82152630) {
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
	// li r11,5120
	ctx.r11.s64 = 5120;
	// lis r6,-32029
	ctx.r6.s64 = -2099052544;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,-17440(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17440);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,5120
	ctx.r4.s64 = 5120;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152888
	ctx.lr = 0x82152674;
	sub_82152888(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215269C"))) PPC_WEAK_FUNC(sub_8215269C);
PPC_FUNC_IMPL(__imp__sub_8215269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821526A0"))) PPC_WEAK_FUNC(sub_821526A0);
PPC_FUNC_IMPL(__imp__sub_821526A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x821526A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215271c
	if (ctx.cr6.eq) goto loc_8215271C;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-4624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4624);
	// bl 0x822014c0
	ctx.lr = 0x821526C8;
	sub_822014C0(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,-17448(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x821526DC;
	sub_821FD9D8(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
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
	ctx.lr = 0x8215270C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215271c
	if (ctx.cr6.eq) goto loc_8215271C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8215271C;
	sub_821FD9E0(ctx, base);
loc_8215271C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82152724"))) PPC_WEAK_FUNC(sub_82152724);
PPC_FUNC_IMPL(__imp__sub_82152724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152728"))) PPC_WEAK_FUNC(sub_82152728);
PPC_FUNC_IMPL(__imp__sub_82152728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82152730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8215275c
	if (ctx.cr6.lt) goto loc_8215275C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82152790
	ctx.lr = 0x8215275C;
	sub_82152790(ctx, base);
loc_8215275C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82219130
	ctx.lr = 0x82152774;
	sub_82219130(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215278C"))) PPC_WEAK_FUNC(sub_8215278C);
PPC_FUNC_IMPL(__imp__sub_8215278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152790"))) PPC_WEAK_FUNC(sub_82152790);
PPC_FUNC_IMPL(__imp__sub_82152790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82152798;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfd f0,-29552(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29552);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f13,-30608(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + -30608);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// fmadd f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r5,-17440(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17440);
	// bl 0x82152888
	ctx.lr = 0x821527F8;
	sub_82152888(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82219130
	ctx.lr = 0x82152808;
	sub_82219130(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82152878
	if (ctx.cr6.eq) goto loc_82152878;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-4624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4624);
	// bl 0x822014c0
	ctx.lr = 0x82152824;
	sub_822014C0(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r29,-17448(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82152838;
	sub_821FD9D8(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
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
	ctx.lr = 0x82152868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82152878
	if (ctx.cr6.eq) goto loc_82152878;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82152878;
	sub_821FD9E0(ctx, base);
loc_82152878:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82152884"))) PPC_WEAK_FUNC(sub_82152884);
PPC_FUNC_IMPL(__imp__sub_82152884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152888"))) PPC_WEAK_FUNC(sub_82152888);
PPC_FUNC_IMPL(__imp__sub_82152888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82152890;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,-17448(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x821528AC;
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
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
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
	ctx.lr = 0x821528E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821528fc
	if (ctx.cr6.eq) goto loc_821528FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x821528FC;
	sub_821FD9E0(ctx, base);
loc_821528FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82152908"))) PPC_WEAK_FUNC(sub_82152908);
PPC_FUNC_IMPL(__imp__sub_82152908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82152910;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// stw r23,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r23.u32);
	// bl 0x8213ecd8
	ctx.lr = 0x82152938;
	sub_8213ECD8(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// addi r28,r7,8644
	ctx.r28.s64 = ctx.r7.s64 + 8644;
	// addi r27,r8,12448
	ctx.r27.s64 = ctx.r8.s64 + 12448;
	// addi r26,r9,12412
	ctx.r26.s64 = ctx.r9.s64 + 12412;
	// addi r25,r10,12368
	ctx.r25.s64 = ctx.r10.s64 + 12368;
	// addi r24,r11,12360
	ctx.r24.s64 = ctx.r11.s64 + 12360;
loc_82152968:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215297c
	if (ctx.cr6.eq) goto loc_8215297C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82152980
	goto loc_82152980;
loc_8215297C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82152980:
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82152a88
	if (!ctx.cr6.lt) goto loc_82152A88;
	// lbzx r30,r22,r20
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r20.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r31,48
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 48, ctx.xer);
	// blt cr6,0x821529a0
	if (ctx.cr6.lt) goto loc_821529A0;
	// cmplwi cr6,r31,57
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 57, ctx.xer);
	// ble cr6,0x821529c0
	if (!ctx.cr6.gt) goto loc_821529C0;
loc_821529A0:
	// cmplwi cr6,r31,97
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 97, ctx.xer);
	// blt cr6,0x821529b0
	if (ctx.cr6.lt) goto loc_821529B0;
	// cmplwi cr6,r31,122
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 122, ctx.xer);
	// ble cr6,0x821529c0
	if (!ctx.cr6.gt) goto loc_821529C0;
loc_821529B0:
	// cmplwi cr6,r31,65
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65, ctx.xer);
	// blt cr6,0x821529fc
	if (ctx.cr6.lt) goto loc_821529FC;
	// cmplwi cr6,r31,90
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 90, ctx.xer);
	// bgt cr6,0x821529fc
	if (ctx.cr6.gt) goto loc_821529FC;
loc_821529C0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821529e0
	if (ctx.cr6.lt) goto loc_821529E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82152790
	ctx.lr = 0x821529E0;
	sub_82152790(ctx, base);
loc_821529E0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stbx r30,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stbx r23,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r23.u8);
	// b 0x82152a80
	goto loc_82152A80;
loc_821529FC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82219e28
	ctx.lr = 0x82152A0C;
	sub_82219E28(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82152a70
	if (!ctx.cr0.lt) goto loc_82152A70;
	// bl 0x82146770
	ctx.lr = 0x82152A18;
	sub_82146770(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82152a80
	if (ctx.cr6.gt) goto loc_82152A80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8214b638
	ctx.lr = 0x82152A38;
	sub_8214B638(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r7,54
	ctx.r7.s64 = 54;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821469c8
	ctx.lr = 0x82152A54;
	sub_821469C8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152a80
	if (ctx.cr6.eq) goto loc_82152A80;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8212d1b8
	ctx.lr = 0x82152A6C;
	sub_8212D1B8(ctx, base);
	// b 0x82152a80
	goto loc_82152A80;
loc_82152A70:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82152728
	ctx.lr = 0x82152A80;
	sub_82152728(ctx, base);
loc_82152A80:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x82152968
	goto loc_82152968;
loc_82152A88:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8212d020
	ctx.lr = 0x82152A94;
	sub_8212D020(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82152AA0"))) PPC_WEAK_FUNC(sub_82152AA0);
PPC_FUNC_IMPL(__imp__sub_82152AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82152AA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82152af0
	if (!ctx.cr6.eq) goto loc_82152AF0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82152AC8:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82152ae0
	if (!ctx.cr6.lt) goto loc_82152AE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82152ae4
	goto loc_82152AE4;
loc_82152AE0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82152AE4:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82152ac8
	if (ctx.cr6.eq) goto loc_82152AC8;
loc_82152AF0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82152b3c
	if (!ctx.cr6.eq) goto loc_82152B3C;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82152B14:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82152b28
	if (!ctx.cr6.lt) goto loc_82152B28;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82152b30
	goto loc_82152B30;
loc_82152B28:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82152B30:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82152b14
	if (ctx.cr6.eq) goto loc_82152B14;
loc_82152B3C:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
loc_82152B50:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152b64
	if (ctx.cr6.eq) goto loc_82152B64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82152b68
	if (ctx.cr6.eq) goto loc_82152B68;
loc_82152B64:
	// twi 31,r0,22
loc_82152B68:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82152b84
	if (ctx.cr6.eq) goto loc_82152B84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8212f8d8
	ctx.lr = 0x82152B80;
	sub_8212F8D8(ctx, base);
	// b 0x82152b50
	goto loc_82152B50;
loc_82152B84:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82132b10
	ctx.lr = 0x82152B98;
	sub_82132B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82152BA4"))) PPC_WEAK_FUNC(sub_82152BA4);
PPC_FUNC_IMPL(__imp__sub_82152BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82152BA8"))) PPC_WEAK_FUNC(sub_82152BA8);
PPC_FUNC_IMPL(__imp__sub_82152BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82152BB0;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r24,r11,18208
	ctx.r24.s64 = ctx.r11.s64 + 18208;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// lfs f31,-30456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30456);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r24,8224
	ctx.r30.s64 = ctx.r24.s64 + 8224;
	// addi r31,r24,2064
	ctx.r31.s64 = ctx.r24.s64 + 2064;
	// lfs f30,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f30.f64 = double(temp.f32);
loc_82152BE4:
	// stw r23,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r23.u32);
	// bl 0x8221bf50
	ctx.lr = 0x82152BEC;
	sub_8221BF50(ctx, base);
	// srawi r11,r3,9
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 9;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// li r29,2
	ctx.r29.s64 = 2;
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r8,r11,-256
	ctx.r8.s64 = ctx.r11.s64 + -256;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,12336(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12336, temp.u32);
loc_82152C24:
	// bl 0x8221bf50
	ctx.lr = 0x82152C28;
	sub_8221BF50(ctx, base);
	// srawi r11,r3,9
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 9;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r8,r11,-256
	ctx.r8.s64 = ctx.r11.s64 + -256;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,0(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82152c24
	if (!ctx.cr0.eq) goto loc_82152C24;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r31,-8
	ctx.r27.s64 = ctx.r31.s64 + -8;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r29,3
	ctx.r29.s64 = 3;
	// fmadd f10,f11,f11,f12
	ctx.f10.f64 = ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64;
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f30,f9
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f9.f64));
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_82152C9C:
	// bl 0x8221bf50
	ctx.lr = 0x82152CA0;
	sub_8221BF50(ctx, base);
	// srawi r11,r3,9
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 9;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r8,r11,-256
	ctx.r8.s64 = ctx.r11.s64 + -256;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82152c9c
	if (!ctx.cr0.eq) goto loc_82152C9C;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r24,5136
	ctx.r11.s64 = ctx.r24.s64 + 5136;
	// lfs f12,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// fadd f8,f10,f11
	ctx.f8.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fmadd f7,f9,f9,f8
	ctx.f7.f64 = ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64;
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f5,f30,f6
	ctx.f5.f64 = double(float(ctx.f30.f64 / ctx.f6.f64));
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f4,-4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,0(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82152be4
	if (ctx.cr6.lt) goto loc_82152BE4;
	// addic. r30,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r30.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82152d7c
	if (ctx.cr0.eq) goto loc_82152D7C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82152D48:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221bf50
	ctx.lr = 0x82152D50;
	sub_8221BF50(ctx, base);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// stwx r29,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r29.u32);
	// bne 0x82152d48
	if (!ctx.cr0.eq) goto loc_82152D48;
loc_82152D7C:
	// addi r9,r24,12336
	ctx.r9.s64 = ctx.r24.s64 + 12336;
	// addi r11,r24,5128
	ctx.r11.s64 = ctx.r24.s64 + 5128;
	// addi r10,r24,10272
	ctx.r10.s64 = ctx.r24.s64 + 10272;
loc_82152D88:
	// lwz r8,-12336(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12336);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1024(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1024, temp.u32);
	// addi r7,r24,12336
	ctx.r7.s64 = ctx.r24.s64 + 12336;
	// stw r8,-11312(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11312, ctx.r8.u32);
	// lfs f12,-2044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2044);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-2048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2048);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f10,-3068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3068);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-3064(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3064);
	ctx.f9.f64 = double(temp.f32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// lfs f11,-3072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3072);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// blt cr6,0x82152d88
	if (ctx.cr6.lt) goto loc_82152D88;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82152DE8"))) PPC_WEAK_FUNC(sub_82152DE8);
PPC_FUNC_IMPL(__imp__sub_82152DE8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82152e24
	if (!ctx.cr6.gt) goto loc_82152E24;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfd f2,-30840(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -30840);
	// bl 0x8221ca08
	ctx.lr = 0x82152E10;
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
loc_82152E24:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82152e54
	if (!ctx.cr6.lt) goto loc_82152E54;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfd f2,-30840(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -30840);
	// bl 0x8221ca08
	ctx.lr = 0x82152E3C;
	sub_8221CA08(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82152E54:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82152E68"))) PPC_WEAK_FUNC(sub_82152E68);
PPC_FUNC_IMPL(__imp__sub_82152E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82152E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r30,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x3FFFFFF;
	// xor r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// rlwinm r10,r10,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r29,r11,26
	ctx.r29.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x82152eb0
	if (!ctx.cr6.eq) goto loc_82152EB0;
	// bl 0x82178b90
	ctx.lr = 0x82152EB0;
	sub_82178B90(ctx, base);
loc_82152EB0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r29,9
	ctx.r8.s64 = ctx.r29.s64 + 9;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82152F10"))) PPC_WEAK_FUNC(sub_82152F10);
PPC_FUNC_IMPL(__imp__sub_82152F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ld r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82152f9c
	if (ctx.cr6.eq) goto loc_82152F9C;
	// lis r12,-8
	ctx.r12.s64 = -524288;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82152f74
	if (ctx.cr6.eq) goto loc_82152F74;
	// ori r12,r12,12799
	ctx.r12.u64 = ctx.r12.u64 | 12799;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12736
	ctx.r11.u64 = ctx.r11.u64 | 12736;
	// b 0x82152f80
	goto loc_82152F80;
loc_82152F74:
	// ori r12,r12,25471
	ctx.r12.u64 = ctx.r12.u64 | 25471;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,25408
	ctx.r11.u64 = ctx.r11.u64 | 25408;
loc_82152F80:
	// li r12,-8088
	ctx.r12.s64 = -8088;
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,1037
	ctx.r12.s64 = 1037;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// b 0x82152fd8
	goto loc_82152FD8;
loc_82152F9C:
	// li r12,31
	ctx.r12.s64 = 31;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82152fe4
	if (!ctx.cr6.eq) goto loc_82152FE4;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,127
	ctx.r12.u64 = ctx.r12.u64 | 127;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,65528
	ctx.r12.u64 = ctx.r12.u64 | 4294443008;
	// ori r12,r12,12799
	ctx.r12.u64 = ctx.r12.u64 | 12799;
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,9
	ctx.r12.s64 = 589824;
	// ori r12,r12,64
	ctx.r12.u64 = ctx.r12.u64 | 64;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r12,r12,12736
	ctx.r12.u64 = ctx.r12.u64 | 12736;
loc_82152FD8:
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// b 0x82152fec
	goto loc_82152FEC;
loc_82152FE4:
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82152FEC:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 64);
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82153038
	if (ctx.cr6.eq) goto loc_82153038;
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
loc_82153038:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82153054
	if (ctx.cr0.eq) goto loc_82153054;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82153054:
	// stfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215305C"))) PPC_WEAK_FUNC(sub_8215305C);
PPC_FUNC_IMPL(__imp__sub_8215305C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153060"))) PPC_WEAK_FUNC(sub_82153060);
PPC_FUNC_IMPL(__imp__sub_82153060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82153068;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,4
	ctx.r8.s64 = 4;
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvsr v0,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// li r30,16
	ctx.r30.s64 = 16;
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// li r28,20
	ctx.r28.s64 = 20;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r26,24
	ctx.r26.s64 = 24;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// li r24,28
	ctx.r24.s64 = 28;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// li r22,32
	ctx.r22.s64 = 32;
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// stvewx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r20,36
	ctx.r20.s64 = 36;
	// stvewx128 v63,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stvewx128 v63,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r9,40
	ctx.r9.s64 = 40;
	// stvewx128 v63,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v62,r31,r30
	ea = (ctx.r31.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,44
	ctx.r8.s64 = 44;
	// stvewx128 v62,r29,r28
	ea = (ctx.r29.u32 + ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stvewx128 v62,r27,r26
	ea = (ctx.r27.u32 + ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r6,48
	ctx.r6.s64 = 48;
	// stvewx128 v62,r25,r24
	ea = (ctx.r25.u32 + ctx.r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvewx128 v61,r23,r22
	ea = (ctx.r23.u32 + ctx.r22.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r31,52
	ctx.r31.s64 = 52;
	// stvewx128 v61,r21,r20
	ea = (ctx.r21.u32 + ctx.r20.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stvewx128 v61,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r29,56
	ctx.r29.s64 = 56;
	// li r10,60
	ctx.r10.s64 = 60;
	// stvewx128 v61,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stvewx128 v60,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stvewx128 v60,r5,r31
	ea = (ctx.r5.u32 + ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stvewx128 v60,r30,r29
	ea = (ctx.r30.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvewx128 v60,r28,r10
	ea = (ctx.r28.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,27476(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82230400
	ctx.lr = 0x82153178;
	sub_82230400(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82153180"))) PPC_WEAK_FUNC(sub_82153180);
PPC_FUNC_IMPL(__imp__sub_82153180) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,2864
	ctx.r3.s64 = ctx.r31.s64 + 2864;
	// bl 0x82158c40
	ctx.lr = 0x821531A4;
	sub_82158C40(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r11,2876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2876);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_82153244"))) PPC_WEAK_FUNC(sub_82153244);
PPC_FUNC_IMPL(__imp__sub_82153244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153248"))) PPC_WEAK_FUNC(sub_82153248);
PPC_FUNC_IMPL(__imp__sub_82153248) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,2880
	ctx.r3.s64 = ctx.r31.s64 + 2880;
	// bl 0x82158c40
	ctx.lr = 0x8215326C;
	sub_82158C40(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r11,2892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2892);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_8215330C"))) PPC_WEAK_FUNC(sub_8215330C);
PPC_FUNC_IMPL(__imp__sub_8215330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153310"))) PPC_WEAK_FUNC(sub_82153310);
PPC_FUNC_IMPL(__imp__sub_82153310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82153060
	ctx.lr = 0x8215332C;
	sub_82153060(ctx, base);
	// addi r3,r31,2912
	ctx.r3.s64 = ctx.r31.s64 + 2912;
	// bl 0x82158c40
	ctx.lr = 0x82153334;
	sub_82158C40(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r11,2924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2924);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_821533D0"))) PPC_WEAK_FUNC(sub_821533D0);
PPC_FUNC_IMPL(__imp__sub_821533D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,2928
	ctx.r3.s64 = ctx.r31.s64 + 2928;
	// bl 0x82158c40
	ctx.lr = 0x821533F4;
	sub_82158C40(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r11,2940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2940);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_82153494"))) PPC_WEAK_FUNC(sub_82153494);
PPC_FUNC_IMPL(__imp__sub_82153494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153498"))) PPC_WEAK_FUNC(sub_82153498);
PPC_FUNC_IMPL(__imp__sub_82153498) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821534c4
	if (!ctx.cr6.eq) goto loc_821534C4;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
loc_821534C4:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821534fc
	if (ctx.cr6.eq) goto loc_821534FC;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r9,3160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// addi r11,r11,91
	ctx.r11.s64 = ctx.r11.s64 + 91;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// stw r9,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
loc_821534FC:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,662
	ctx.r9.s64 = ctx.r11.s64 + 662;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8215353c
	if (ctx.cr6.eq) goto loc_8215353C;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r9,2644(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2644);
	// lwz r8,3160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r11,r11,662
	ctx.r11.s64 = ctx.r11.s64 + 662;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
loc_8215353C:
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215355c
	if (ctx.cr0.eq) goto loc_8215355C;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r11,r11,513
	ctx.r11.s64 = ctx.r11.s64 + 513;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8215355C:
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r11,r11,673
	ctx.r11.s64 = ctx.r11.s64 + 673;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,3160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82153590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82153610
	if (ctx.cr6.eq) goto loc_82153610;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r11,r11,137
	ctx.r11.s64 = ctx.r11.s64 + 137;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821535c0
	if (!ctx.cr6.gt) goto loc_821535C0;
	// twi 31,r0,22
loc_821535C0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x821535ec
	if (ctx.cr6.gt) goto loc_821535EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821535f0
	if (!ctx.cr6.lt) goto loc_821535F0;
loc_821535EC:
	// twi 31,r0,22
loc_821535F0:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82153608
	if (ctx.cr6.lt) goto loc_82153608;
	// twi 31,r0,22
loc_82153608:
	// lwz r10,3160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82153610:
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153620
	if (ctx.cr6.eq) goto loc_82153620;
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
loc_82153620:
	// stw r30,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8215363C"))) PPC_WEAK_FUNC(sub_8215363C);
PPC_FUNC_IMPL(__imp__sub_8215363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153640"))) PPC_WEAK_FUNC(sub_82153640);
PPC_FUNC_IMPL(__imp__sub_82153640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82153648;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,2644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821537ac
	if (!ctx.cr6.eq) goto loc_821537AC;
	// lwz r9,2624(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2624);
	// addi r11,r30,2616
	ctx.r11.s64 = ctx.r30.s64 + 2616;
	// lwz r8,2620(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2620);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82153790
	if (ctx.cr6.eq) goto loc_82153790;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r3,r9,144
	ctx.r3.s64 = ctx.r9.s64 * 144;
	// add r31,r3,r8
	ctx.r31.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r6,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// bl 0x82219130
	ctx.lr = 0x821536DC;
	sub_82219130(ctx, base);
	// lwz r11,2632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2632);
	// addi r4,r30,2628
	ctx.r4.s64 = ctx.r30.s64 + 2628;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821536f8
	if (!ctx.cr6.eq) goto loc_821536F8;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x82153704
	goto loc_82153704;
loc_821536F8:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
loc_82153704:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153734
	if (ctx.cr6.eq) goto loc_82153734;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82153734
	if (!ctx.cr6.lt) goto loc_82153734;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x82153760
	goto loc_82153760;
loc_82153734:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82153744
	if (!ctx.cr6.gt) goto loc_82153744;
	// twi 31,r0,22
loc_82153744:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82158828
	ctx.lr = 0x8215375C;
	sub_82158828(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82153760:
	// stw r31,2644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2644, ctx.r31.u32);
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r10,r30,2648
	ctx.r10.s64 = ctx.r30.s64 + 2648;
loc_8215376C:
	// lwz r9,2644(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2644);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r29,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,144
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 144, ctx.xer);
	// blt cr6,0x8215376c
	if (ctx.cr6.lt) goto loc_8215376C;
	// b 0x821537ac
	goto loc_821537AC;
loc_82153790:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r30,2648
	ctx.r11.s64 = ctx.r30.s64 + 2648;
	// stw r29,2648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2648, ctx.r29.u32);
	// stw r29,2652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2652, ctx.r29.u32);
	// stw r29,2656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2656, ctx.r29.u32);
	// stw r29,2660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2660, ctx.r29.u32);
	// stw r29,2644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2644, ctx.r29.u32);
loc_821537AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821537B4"))) PPC_WEAK_FUNC(sub_821537B4);
PPC_FUNC_IMPL(__imp__sub_821537B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821537B8"))) PPC_WEAK_FUNC(sub_821537B8);
PPC_FUNC_IMPL(__imp__sub_821537B8) {
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
	// rldicl r7,r4,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// rlwinm r8,r4,16,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xF;
	// rlwinm r10,r7,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xF;
	// rlwinm r9,r4,28,20,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFF0;
	// rlwinm r11,r7,28,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r4,20
	ctx.r10.u64 = ctx.r4.u32 & 0xFFF;
	// clrlwi r8,r7,20
	ctx.r8.u64 = ctx.r7.u32 & 0xFFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r11,r10,4099
	ctx.r11.s64 = ctx.r10.s64 + 4099;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x82153820
	goto loc_82153820;
loc_82153810:
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x8215383c
	if (ctx.cr6.eq) goto loc_8215383C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82153820:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82153810
	if (!ctx.cr6.eq) goto loc_82153810;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8215382C:
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x82153854
	goto loc_82153854;
loc_8215383C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x8215382c
	goto loc_8215382C;
loc_82153844:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x8215385c
	if (ctx.cr6.eq) goto loc_8215385C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82153854:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82153844
	if (!ctx.cr6.eq) goto loc_82153844;
loc_8215385C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153870
	if (ctx.cr6.eq) goto loc_82153870;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82168aa8
	ctx.lr = 0x82153870;
	sub_82168AA8(ctx, base);
loc_82153870:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82153880
	if (!ctx.cr6.eq) goto loc_82153880;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82153890
	goto loc_82153890;
loc_82153880:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82168c10
	ctx.lr = 0x8215388C;
	sub_82168C10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82153890:
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

__attribute__((alias("__imp__sub_821538A8"))) PPC_WEAK_FUNC(sub_821538A8);
PPC_FUNC_IMPL(__imp__sub_821538A8) {
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
	// lwz r3,14184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821538ec
	if (!ctx.cr6.eq) goto loc_821538EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82120040
	ctx.lr = 0x821538D4;
	sub_82120040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821538e4
	if (ctx.cr0.eq) goto loc_821538E4;
	// bl 0x82158e78
	ctx.lr = 0x821538E0;
	sub_82158E78(ctx, base);
	// b 0x821538e8
	goto loc_821538E8;
loc_821538E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821538E8:
	// stw r3,14184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14184, ctx.r3.u32);
loc_821538EC:
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

__attribute__((alias("__imp__sub_82153900"))) PPC_WEAK_FUNC(sub_82153900);
PPC_FUNC_IMPL(__imp__sub_82153900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82153908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r30,14188(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14188);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215aee8
	ctx.lr = 0x8215391C;
	sub_8215AEE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215ad50
	ctx.lr = 0x82153924;
	sub_8215AD50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215a5c8
	ctx.lr = 0x8215392C;
	sub_8215A5C8(ctx, base);
	// lwz r11,544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// addi r29,r30,540
	ctx.r29.s64 = ctx.r30.s64 + 540;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82153938:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r29,r29
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82153948
	if (ctx.cr6.eq) goto loc_82153948;
	// twi 31,r0,22
loc_82153948:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82153988
	if (ctx.cr6.eq) goto loc_82153988;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82153960
	if (!ctx.cr6.eq) goto loc_82153960;
	// twi 31,r0,22
loc_82153960:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82153970
	if (!ctx.cr6.eq) goto loc_82153970;
	// twi 31,r0,22
loc_82153970:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153938
	if (ctx.cr6.eq) goto loc_82153938;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8215a4b8
	ctx.lr = 0x82153984;
	sub_8215A4B8(ctx, base);
	// b 0x82153938
	goto loc_82153938;
loc_82153988:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16704
	ctx.r3.s64 = ctx.r11.s64 + 16704;
	// bl 0x82166278
	ctx.lr = 0x82153998;
	sub_82166278(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821539b0
	if (ctx.cr6.eq) goto loc_821539B0;
	// bl 0x821a1ae8
	ctx.lr = 0x821539AC;
	sub_821A1AE8(ctx, base);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
loc_821539B0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821539c0
	if (ctx.cr6.eq) goto loc_821539C0;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_821539C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821539C8"))) PPC_WEAK_FUNC(sub_821539C8);
PPC_FUNC_IMPL(__imp__sub_821539C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x821539D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82120040
	ctx.lr = 0x821539E4;
	sub_82120040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821539f8
	if (ctx.cr0.eq) goto loc_821539F8;
	// bl 0x82176f78
	ctx.lr = 0x821539F0;
	sub_82176F78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821539fc
	goto loc_821539FC;
loc_821539F8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821539FC:
	// stw r31,3764(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3764, ctx.r31.u32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r3,14188(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14188);
	// bl 0x8215a3f8
	ctx.lr = 0x82153A0C;
	sub_8215A3F8(ctx, base);
	// lwz r11,14188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14188);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r31.u32);
	// bl 0x8219a9f8
	ctx.lr = 0x82153A2C;
	sub_8219A9F8(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,29152
	ctx.r3.s64 = ctx.r11.s64 + 29152;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215b1c8
	ctx.lr = 0x82153A48;
	sub_8215B1C8(ctx, base);
	// lwz r11,14188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14188);
	// lwz r10,3764(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3764);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 536, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82153A60"))) PPC_WEAK_FUNC(sub_82153A60);
PPC_FUNC_IMPL(__imp__sub_82153A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r9,14188(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14188);
	// stw r10,14172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14172, ctx.r10.u32);
	// lwz r11,3764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3764);
	// stw r11,536(r9)
	PPC_STORE_U32(ctx.r9.u32 + 536, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153A88"))) PPC_WEAK_FUNC(sub_82153A88);
PPC_FUNC_IMPL(__imp__sub_82153A88) {
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
	// lwz r3,14200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14200);
	// lwz r11,7112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82153ab4
	if (ctx.cr6.eq) goto loc_82153AB4;
	// bl 0x82161070
	ctx.lr = 0x82153AB0;
	sub_82161070(ctx, base);
	// lwz r3,14200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14200);
loc_82153AB4:
	// bl 0x82160e28
	ctx.lr = 0x82153AB8;
	sub_82160E28(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14172, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82153AD8"))) PPC_WEAK_FUNC(sub_82153AD8);
PPC_FUNC_IMPL(__imp__sub_82153AD8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// rlwinm r9,r4,16,8,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF0000;
	// rlwinm r10,r4,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r4,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// rlwinm r8,r8,0,16,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153B14"))) PPC_WEAK_FUNC(sub_82153B14);
PPC_FUNC_IMPL(__imp__sub_82153B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153B18"))) PPC_WEAK_FUNC(sub_82153B18);
PPC_FUNC_IMPL(__imp__sub_82153B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// stw r10,7120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7120, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153B2C"))) PPC_WEAK_FUNC(sub_82153B2C);
PPC_FUNC_IMPL(__imp__sub_82153B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153B30"))) PPC_WEAK_FUNC(sub_82153B30);
PPC_FUNC_IMPL(__imp__sub_82153B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82153b64
	if (ctx.cr0.eq) goto loc_82153B64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827472f0
	ctx.lr = 0x82153B54;
	sub_827472F0(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// b 0x82153b78
	goto loc_82153B78;
loc_82153B64:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,14200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14200);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
loc_82153B78:
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82153180
	ctx.lr = 0x82153B88;
	sub_82153180(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153bac
	if (ctx.cr6.eq) goto loc_82153BAC;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82153bac
	if (ctx.cr6.eq) goto loc_82153BAC;
	// bl 0x82153bc0
	ctx.lr = 0x82153BAC;
	sub_82153BC0(ctx, base);
loc_82153BAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153BBC"))) PPC_WEAK_FUNC(sub_82153BBC);
PPC_FUNC_IMPL(__imp__sub_82153BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153BC0"))) PPC_WEAK_FUNC(sub_82153BC0);
PPC_FUNC_IMPL(__imp__sub_82153BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82153bf4
	if (ctx.cr0.eq) goto loc_82153BF4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827472f0
	ctx.lr = 0x82153BE4;
	sub_827472F0(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// b 0x82153c08
	goto loc_82153C08;
loc_82153BF4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,14200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14200);
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
loc_82153C08:
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82153248
	ctx.lr = 0x82153C18;
	sub_82153248(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153C28"))) PPC_WEAK_FUNC(sub_82153C28);
PPC_FUNC_IMPL(__imp__sub_82153C28) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82158c40
	ctx.lr = 0x82153C58;
	sub_82158C40(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
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

__attribute__((alias("__imp__sub_82153CEC"))) PPC_WEAK_FUNC(sub_82153CEC);
PPC_FUNC_IMPL(__imp__sub_82153CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153CF0"))) PPC_WEAK_FUNC(sub_82153CF0);
PPC_FUNC_IMPL(__imp__sub_82153CF0) {
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
	// bl 0x82153b30
	ctx.lr = 0x82153D00;
	sub_82153B30(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f4,27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lfs f6,-29800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29800);
	ctx.f6.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f5,-29084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29084);
	ctx.f5.f64 = double(temp.f32);
	// bl 0x82153d40
	ctx.lr = 0x82153D2C;
	sub_82153D40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153D3C"))) PPC_WEAK_FUNC(sub_82153D3C);
PPC_FUNC_IMPL(__imp__sub_82153D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82153D40"))) PPC_WEAK_FUNC(sub_82153D40);
PPC_FUNC_IMPL(__imp__sub_82153D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82153D5C:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82153d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82153D5C;
	// fsubs f10,f6,f5
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fadds f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// fsubs f8,f1,f2
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// fsubs f11,f4,f3
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fadds f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fsubs f4,f3,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f13,-4368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4368);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,14200(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14200);
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fdivs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// fdivs f0,f7,f4
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f4.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fdivs f0,f5,f6
	ctx.f0.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82153310
	ctx.lr = 0x82153DE8;
	sub_82153310(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153DF8"))) PPC_WEAK_FUNC(sub_82153DF8);
PPC_FUNC_IMPL(__imp__sub_82153DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,-4392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq 0x82153ee0
	if (ctx.cr0.eq) goto loc_82153EE0;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// fdivs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f13,-4368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4368);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// rlwinm r11,r7,0,30,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC3;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f12,-30440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30440);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lfs f0,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lfs f11,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fdivs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,14200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14200);
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82153310
	ctx.lr = 0x82153EDC;
	sub_82153310(ctx, base);
	// b 0x82153f20
	goto loc_82153F20;
loc_82153EE0:
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-30456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,-29088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29088);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fdivs f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f12.f64));
	// fneg f4,f3
	ctx.f4.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82153d40
	ctx.lr = 0x82153F20;
	sub_82153D40(ctx, base);
loc_82153F20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82153F30"))) PPC_WEAK_FUNC(sub_82153F30);
PPC_FUNC_IMPL(__imp__sub_82153F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82153F38;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lvsr v0,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r3,16
	ctx.r3.s64 = 16;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r31,20
	ctx.r31.s64 = 20;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r29,24
	ctx.r29.s64 = 24;
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stvewx128 v63,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvewx128 v63,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// li r5,28
	ctx.r5.s64 = 28;
	// stvewx128 v63,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stvewx128 v62,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// li r7,32
	ctx.r7.s64 = 32;
	// stvewx128 v62,r9,r31
	ea = (ctx.r9.u32 + ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,36
	ctx.r9.s64 = 36;
	// stvewx128 v62,r30,r29
	ea = (ctx.r30.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stvewx128 v61,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,40
	ctx.r11.s64 = 40;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stvewx128 v61,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// li r8,44
	ctx.r8.s64 = 44;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r10,48
	ctx.r10.s64 = 48;
	// stvewx128 v61,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r11,52
	ctx.r11.s64 = 52;
	// stvewx128 v61,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r8,56
	ctx.r8.s64 = 56;
	// stvewx128 v60,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r10,60
	ctx.r10.s64 = 60;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stvewx128 v60,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stvewx128 v60,r6,r8
	ea = (ctx.r6.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,14200(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82153310
	ctx.lr = 0x82154074;
	sub_82153310(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215407C"))) PPC_WEAK_FUNC(sub_8215407C);
PPC_FUNC_IMPL(__imp__sub_8215407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82154080"))) PPC_WEAK_FUNC(sub_82154080);
PPC_FUNC_IMPL(__imp__sub_82154080) {
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
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821540bc
	if (!ctx.cr6.eq) goto loc_821540BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215cdb0
	ctx.lr = 0x821540B8;
	sub_8215CDB0(ctx, base);
	// stw r3,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r3.u32);
loc_821540BC:
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

__attribute__((alias("__imp__sub_821540D0"))) PPC_WEAK_FUNC(sub_821540D0);
PPC_FUNC_IMPL(__imp__sub_821540D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x821540D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,14200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,3160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82154110
	if (!ctx.cr6.eq) goto loc_82154110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215cdb0
	ctx.lr = 0x82154108;
	sub_8215CDB0(ctx, base);
	// lwz r11,14200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14200);
	// stw r3,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r3.u32);
loc_82154110:
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// li r5,108
	ctx.r5.s64 = 108;
	// lwz r28,3160(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// li r4,6
	ctx.r4.s64 = 6;
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r28,64
	ctx.r31.s64 = ctx.r28.s64 + 64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82161310
	ctx.lr = 0x82154138;
	sub_82161310(ctx, base);
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82154144;
	sub_82219130(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r11,45(r28)
	PPC_STORE_U8(ctx.r28.u32 + 45, ctx.r11.u8);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82154180
	if (ctx.cr6.gt) goto loc_82154180;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82154180
	if (ctx.cr6.lt) goto loc_82154180;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82154180
	if (ctx.cr6.eq) goto loc_82154180;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82154184
	if (!ctx.cr6.eq) goto loc_82154184;
loc_82154180:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82154184:
	// li r12,-2
	ctx.r12.s64 = -2;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// rldimi r11,r10,51,12
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 51) & 0x8000000000000) | (ctx.r11.u64 & 0xFFF7FFFFFFFFFFFF);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bgt cr6,0x82154260
	if (ctx.cr6.gt) goto loc_82154260;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// addi r12,r12,13216
	ctx.r12.s64 = ctx.r12.s64 + 13216;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// addi r12,r12,16852
	ctx.r12.s64 = ctx.r12.s64 + 16852;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_821541D4;
	case 1:
		goto loc_821541D4;
	case 2:
		goto loc_821541D4;
	case 3:
		goto loc_821541E8;
	case 4:
		goto loc_821541D4;
	case 5:
		goto loc_821541FC;
	case 6:
		goto loc_82154214;
	case 7:
		goto loc_821541D4;
	case 8:
		goto loc_82154228;
	case 9:
		goto loc_82154238;
	case 10:
		goto loc_821541D4;
	case 11:
		goto loc_8215424C;
	case 12:
		goto loc_8215424C;
	case 13:
		goto loc_821541D4;
	case 14:
		goto loc_821541D4;
	default:
		__builtin_unreachable();
	}
loc_821541D4:
	// lis r12,-8
	ctx.r12.s64 = -524288;
	// ori r12,r12,12799
	ctx.r12.u64 = ctx.r12.u64 | 12799;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12736
	ctx.r11.u64 = ctx.r11.u64 | 12736;
	// b 0x8215425c
	goto loc_8215425C;
loc_821541E8:
	// lis r12,-8
	ctx.r12.s64 = -524288;
	// ori r12,r12,16447
	ctx.r12.u64 = ctx.r12.u64 | 16447;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// b 0x8215425c
	goto loc_8215425C;
loc_821541FC:
	// lis r12,-5
	ctx.r12.s64 = -327680;
	// ori r12,r12,12415
	ctx.r12.u64 = ctx.r12.u64 | 12415;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// oris r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 196608;
loc_8215420C:
	// ori r11,r11,12352
	ctx.r11.u64 = ctx.r11.u64 | 12352;
	// b 0x8215425c
	goto loc_8215425C;
loc_82154214:
	// lis r12,-6
	ctx.r12.s64 = -393216;
	// ori r12,r12,12415
	ctx.r12.u64 = ctx.r12.u64 | 12415;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x8215420c
	goto loc_8215420C;
loc_82154228:
	// lis r12,-8
	ctx.r12.s64 = -524288;
	// ori r12,r12,12415
	ctx.r12.u64 = ctx.r12.u64 | 12415;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x8215420c
	goto loc_8215420C;
loc_82154238:
	// lis r12,-4
	ctx.r12.s64 = -262144;
	// ori r12,r12,12415
	ctx.r12.u64 = ctx.r12.u64 | 12415;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// b 0x8215420c
	goto loc_8215420C;
loc_8215424C:
	// lis r12,-8
	ctx.r12.s64 = -524288;
	// ori r12,r12,127
	ctx.r12.u64 = ctx.r12.u64 | 127;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_8215425C:
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_82154260:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82154274
	if (ctx.cr6.eq) goto loc_82154274;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821542e4
	if (!ctx.cr6.eq) goto loc_821542E4;
loc_82154274:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821542e4
	if (ctx.cr6.eq) goto loc_821542E4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// rlwimi r10,r11,10,17,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 10) & 0x4000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFBFFF);
	// rlwinm r11,r10,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r11,6,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// rlwinm r11,r10,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwimi r11,r10,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwimi r11,r10,4,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_821542E4:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82154414
	if (ctx.cr6.lt) goto loc_82154414;
	// beq cr6,0x821543dc
	if (ctx.cr6.eq) goto loc_821543DC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82154384
	if (ctx.cr6.lt) goto loc_82154384;
	// beq cr6,0x82154350
	if (ctx.cr6.eq) goto loc_82154350;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82154420
	if (!ctx.cr6.lt) goto loc_82154420;
	// lis r12,7
	ctx.r12.s64 = 458752;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ori r12,r12,63488
	ctx.r12.u64 = ctx.r12.u64 | 63488;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,2047
	ctx.r12.u64 = ctx.r12.u64 | 134152192;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,-16
	ctx.r12.s64 = -16;
	// rldicr r12,r12,28,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 28) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,-4040
	ctx.r12.s64 = -264765440;
loc_82154338:
	// ori r12,r12,505
	ctx.r12.u64 = ctx.r12.u64 | 505;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,63488
	ctx.r12.u64 = ctx.r12.u64 | 4160749568;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// b 0x8215441c
	goto loc_8215441C;
loc_82154350:
	// lis r12,7
	ctx.r12.s64 = 458752;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ori r12,r12,63488
	ctx.r12.u64 = ctx.r12.u64 | 63488;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,2047
	ctx.r12.u64 = ctx.r12.u64 | 134152192;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,-16
	ctx.r12.s64 = -16;
	// rldicr r12,r12,28,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 28) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,-4048
	ctx.r12.s64 = -265289728;
	// b 0x82154338
	goto loc_82154338;
loc_82154384:
	// li r12,-16
	ctx.r12.s64 = -16;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// rldicr r12,r12,28,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 28) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,3841
	ctx.r12.s64 = 3841;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// lis r12,-4
	ctx.r12.s64 = -262144;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// ori r12,r12,252
	ctx.r12.u64 = ctx.r12.u64 | 252;
	// lbz r9,95(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 95);
	// rldicr r9,r9,43,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_821543CC:
	// li r12,16191
	ctx.r12.s64 = 16191;
	// rldicr r12,r12,27,36
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 27) & 0xFFFFFFFFF8000000;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// b 0x8215441c
	goto loc_8215441C;
loc_821543DC:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r12,5
	ctx.r12.s64 = 5;
	// rldicr r12,r12,61,2
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 61) & 0xE000000000000000;
	// clrldi r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// lis r12,-4
	ctx.r12.s64 = -262144;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// ori r12,r12,252
	ctx.r12.u64 = ctx.r12.u64 | 252;
	// lbz r10,95(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 95);
	// rldicr r10,r10,43,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x821543cc
	goto loc_821543CC;
loc_82154414:
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// clrldi r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFFFFFFFFFF;
loc_8215441C:
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
loc_82154420:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x821544a8
	if (ctx.cr6.eq) goto loc_821544A8;
	// li r12,-32
	ctx.r12.s64 = -32;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,2
	ctx.r12.s64 = 131072;
	// ori r12,r12,1
	ctx.r12.u64 = ctx.r12.u64 | 1;
	// rldicr r12,r12,31,32
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 31) & 0xFFFFFFFF80000000;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82154480
	if (ctx.cr6.eq) goto loc_82154480;
	// li r12,-32
	ctx.r12.s64 = -32;
	// rldicl r10,r11,32,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0x7FFFFFFFFFF;
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r10,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFC000000000;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x821544a4
	goto loc_821544A4;
loc_82154480:
	// li r12,-1985
	ctx.r12.s64 = -1985;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,65528
	ctx.r12.u64 = ctx.r12.u64 | 4294443008;
	// ori r12,r12,2111
	ctx.r12.u64 = ctx.r12.u64 | 2111;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,256
	ctx.r12.s64 = 16777216;
	// ori r12,r12,1
	ctx.r12.u64 = ctx.r12.u64 | 1;
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
loc_821544A4:
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_821544A8:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821544cc
	if (ctx.cr6.eq) goto loc_821544CC;
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-27872
	ctx.r11.s64 = ctx.r11.s64 + -27872;
	// ori r10,r10,32804
	ctx.r10.u64 = ctx.r10.u64 | 32804;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
loc_821544CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821544D4"))) PPC_WEAK_FUNC(sub_821544D4);
PPC_FUNC_IMPL(__imp__sub_821544D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821544D8"))) PPC_WEAK_FUNC(sub_821544D8);
PPC_FUNC_IMPL(__imp__sub_821544D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x821544E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// lis r10,1168
	ctx.r10.s64 = 76546048;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// ori r10,r10,258
	ctx.r10.u64 = ctx.r10.u64 | 258;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r7,6688
	ctx.r7.s64 = 438304768;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r9,6688
	ctx.r9.s64 = 438304768;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ori r9,r9,338
	ctx.r9.u64 = ctx.r9.u64 | 338;
	// ori r11,r8,339
	ctx.r11.u64 = ctx.r8.u64 | 339;
	// ori r10,r7,340
	ctx.r10.u64 = ctx.r7.u64 | 340;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82120040
	ctx.lr = 0x82154538;
	sub_82120040(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154550
	if (ctx.cr0.eq) goto loc_82154550;
	// bl 0x82165270
	ctx.lr = 0x82154548;
	sub_82165270(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82154554
	goto loc_82154554;
loc_82154550:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82154554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821652f8
	ctx.lr = 0x8215455C;
	sub_821652F8(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r28,r11,0,24,22
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x824ac1e0
	ctx.lr = 0x821545A8;
	sub_824AC1E0(ctx, base);
	// addi r11,r3,4095
	ctx.r11.s64 = ctx.r3.s64 + 4095;
	// rlwinm. r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x821545d0
	if (ctx.cr0.eq) goto loc_821545D0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f8f48
	ctx.lr = 0x821545C8;
	sub_821F8F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821545d4
	goto loc_821545D4;
loc_821545D0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_821545D4:
	// stw r4,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x824ac328
	ctx.lr = 0x821545E0;
	sub_824AC328(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82154604"))) PPC_WEAK_FUNC(sub_82154604);
PPC_FUNC_IMPL(__imp__sub_82154604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82154608"))) PPC_WEAK_FUNC(sub_82154608);
PPC_FUNC_IMPL(__imp__sub_82154608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82154610;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82154854
	if (ctx.cr6.eq) goto loc_82154854;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82154854
	if (ctx.cr6.eq) goto loc_82154854;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8219de98
	ctx.lr = 0x8215463C;
	sub_8219DE98(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8219e3f0
	ctx.lr = 0x82154648;
	sub_8219E3F0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r31,188(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// beq cr6,0x82154718
	if (ctx.cr6.eq) goto loc_82154718;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r11,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// rlwinm r5,r11,10,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3F;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8219d6e0
	ctx.lr = 0x8215469C;
	sub_8219D6E0(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// divwu r10,r27,r10
	ctx.r10.u32 = ctx.r27.u32 / ctx.r10.u32;
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// beq cr6,0x821547f8
	if (ctx.cr6.eq) goto loc_821547F8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_821546C4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82154704
	if (ctx.cr6.eq) goto loc_82154704;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_821546D0:
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r6,r7,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x821546d0
	if (!ctx.cr0.eq) goto loc_821546D0;
loc_82154704:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bne 0x821546c4
	if (!ctx.cr0.eq) goto loc_821546C4;
	// b 0x821547f8
	goto loc_821547F8;
loc_82154718:
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82154814
	if (!ctx.cr6.eq) goto loc_82154814;
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r11,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// rlwinm r5,r11,10,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3F;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8219d6e0
	ctx.lr = 0x8215475C;
	sub_8219D6E0(ctx, base);
	// rlwinm r10,r27,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// beq cr6,0x821547f8
	if (ctx.cr6.eq) goto loc_821547F8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82154784:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821547e8
	if (ctx.cr6.eq) goto loc_821547E8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82154790:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lbz r5,129(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lbz r4,130(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 130);
	// lbz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// lbz r6,131(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 131);
	// stb r9,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r9.u8);
	// stb r6,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r6.u8);
	// stb r5,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r5.u8);
	// stb r4,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r4.u8);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r6,r9,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// rlwinm r5,r9,16,8,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000;
	// rlwinm r9,r9,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r9,r9,0,16,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82154790
	if (!ctx.cr0.eq) goto loc_82154790;
loc_821547E8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// bne 0x82154784
	if (!ctx.cr0.eq) goto loc_82154784;
loc_821547F8:
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x821a0818
	ctx.lr = 0x82154810;
	sub_821A0818(ctx, base);
	// b 0x8215484c
	goto loc_8215484C;
loc_82154814:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c6578
	ctx.lr = 0x8215484C;
	sub_823C6578(ctx, base);
loc_8215484C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a0a78
	ctx.lr = 0x82154854;
	sub_821A0A78(ctx, base);
loc_82154854:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215485C"))) PPC_WEAK_FUNC(sub_8215485C);
PPC_FUNC_IMPL(__imp__sub_8215485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82154860"))) PPC_WEAK_FUNC(sub_82154860);
PPC_FUNC_IMPL(__imp__sub_82154860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82154868;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82120040
	ctx.lr = 0x82154888;
	sub_82120040(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821548a0
	if (ctx.cr0.eq) goto loc_821548A0;
	// bl 0x82165270
	ctx.lr = 0x82154898;
	sub_82165270(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821548a4
	goto loc_821548A4;
loc_821548A0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821548A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821652f8
	ctx.lr = 0x821548AC;
	sub_821652F8(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r7,-2
	ctx.r7.s64 = -2;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,14188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14188);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x823c8e20
	ctx.lr = 0x821548F8;
	sub_823C8E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82154920
	if (!ctx.cr0.lt) goto loc_82154920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821652f8
	ctx.lr = 0x82154908;
	sub_821652F8(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,16704
	ctx.r3.s64 = ctx.r11.s64 + 16704;
	// bl 0x821661c8
	ctx.lr = 0x82154918;
	sub_821661C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821549a0
	goto loc_821549A0;
loc_82154920:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8219d070
	ctx.lr = 0x82154930;
	sub_8219D070(ctx, base);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// bl 0x824ac1e0
	ctx.lr = 0x82154980;
	sub_824AC1E0(ctx, base);
	// addi r11,r3,4095
	ctx.r11.s64 = ctx.r3.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_821549A0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821549A8"))) PPC_WEAK_FUNC(sub_821549A8);
PPC_FUNC_IMPL(__imp__sub_821549A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,14200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r11,7104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,2968(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2968);
	// lwz r7,2972(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2972);
	// lwz r8,2956(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2956);
	// subf r11,r7,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mulli r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 * 48;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne 0x82154a3c
	if (!ctx.cr0.eq) goto loc_82154A3C;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82154ad8
	goto loc_82154AD8;
loc_82154A3C:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82154AD8:
	// stfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,7104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,2956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2956);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f0,2980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2980);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsel f13,f12,f11,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,2980(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2980, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82154B34"))) PPC_WEAK_FUNC(sub_82154B34);
PPC_FUNC_IMPL(__imp__sub_82154B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82154B38"))) PPC_WEAK_FUNC(sub_82154B38);
PPC_FUNC_IMPL(__imp__sub_82154B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82154B40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r28,2956
	ctx.r31.s64 = ctx.r28.s64 + 2956;
	// lwz r11,2968(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2968);
	// lwz r10,2960(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2960);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82154bd0
	if (!ctx.cr6.gt) goto loc_82154BD0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82154b84
	goto loc_82154B84;
loc_82154B80:
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
loc_82154B84:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82154b80
	if (ctx.cr6.lt) goto loc_82154B80;
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// mulli r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 * 48;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82154ba4
	if (!ctx.cr6.gt) goto loc_82154BA4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82154BA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82154BAC;
	sub_82120040(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mulli r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 * 48;
	// bl 0x82219130
	ctx.lr = 0x82154BC0;
	sub_82219130(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82120a70
	ctx.lr = 0x82154BC8;
	sub_82120A70(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82154BD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,2972(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2972, ctx.r29.u32);
	// stfs f0,2980(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 2980, temp.u32);
	// ble cr6,0x82154c2c
	if (!ctx.cr6.gt) goto loc_82154C2C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r11,r11,16704
	ctx.r11.s64 = ctx.r11.s64 + 16704;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x82154c24
	if (!ctx.cr6.lt) goto loc_82154C24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u16);
	// b 0x82154c28
	goto loc_82154C28;
loc_82154C24:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82154C28:
	// sth r11,2976(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2976, ctx.r11.u16);
loc_82154C2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82154C34"))) PPC_WEAK_FUNC(sub_82154C34);
PPC_FUNC_IMPL(__imp__sub_82154C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82154C38"))) PPC_WEAK_FUNC(sub_82154C38);
PPC_FUNC_IMPL(__imp__sub_82154C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82154C40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// clrlwi r27,r28,19
	ctx.r27.u64 = ctx.r28.u32 & 0x1FFF;
	// lwz r6,14200(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// lwz r11,7104(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r31,r11,r6
	ctx.r31.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82154c84
	if (!ctx.cr6.eq) goto loc_82154C84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215cdb0
	ctx.lr = 0x82154C7C;
	sub_8215CDB0(ctx, base);
	// lwz r6,14200(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// stw r3,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r3.u32);
loc_82154C84:
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// blt cr6,0x82154ce8
	if (ctx.cr6.lt) goto loc_82154CE8;
	// clrlwi. r9,r27,31
	ctx.r9.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x82154ca8
	if (!ctx.cr0.eq) goto loc_82154CA8;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82154CA8:
	// rlwinm. r9,r27,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82154cb4
	if (!ctx.cr0.eq) goto loc_82154CB4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82154CB4:
	// rlwinm r9,r10,13,16,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xE000;
	// rlwinm r7,r11,10,19,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1C00;
	// addi r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 + 28;
	// li r10,9
	ctx.r10.s64 = 9;
loc_82154CC4:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r5,0,19,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF1FFF;
	// or r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r5,r5,0,22,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82154cc4
	if (!ctx.cr0.eq) goto loc_82154CC4;
loc_82154CE8:
	// rlwinm. r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82154d2c
	if (ctx.cr0.eq) goto loc_82154D2C;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r10,r29,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm. r9,r27,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// beq 0x82154d2c
	if (ctx.cr0.eq) goto loc_82154D2C;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
loc_82154D2C:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82154d48
	if (ctx.cr0.eq) goto loc_82154D48;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
loc_82154D48:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r9,r10,51,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// beq 0x82154d64
	if (ctx.cr0.eq) goto loc_82154D64;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
loc_82154D64:
	// rlwinm. r11,r27,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82154d80
	if (ctx.cr0.eq) goto loc_82154D80;
	// li r12,-2
	ctx.r12.s64 = -2;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
loc_82154D80:
	// rlwinm r11,r28,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82154f58
	if (ctx.cr6.gt) goto loc_82154F58;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// addi r12,r12,13200
	ctx.r12.s64 = ctx.r12.s64 + 13200;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// addi r12,r12,19896
	ctx.r12.s64 = ctx.r12.s64 + 19896;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82154DB8;
	case 1:
		goto loc_82154DF0;
	case 2:
		goto loc_82154E20;
	case 3:
		goto loc_82154E50;
	case 4:
		goto loc_82154E98;
	case 5:
		goto loc_82154E68;
	case 6:
		goto loc_82154EBC;
	case 7:
		goto loc_82154F04;
	case 8:
		goto loc_82154F1C;
	case 9:
		goto loc_82154F34;
	case 10:
		goto loc_82154F58;
	case 11:
		goto loc_82154F58;
	case 12:
		goto loc_82154EEC;
	case 13:
		goto loc_82154ED4;
	default:
		__builtin_unreachable();
	}
loc_82154DB8:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// beq 0x82154dd8
	if (ctx.cr0.eq) goto loc_82154DD8;
	// ori r12,r12,14783
	ctx.r12.u64 = ctx.r12.u64 | 14783;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,14720
	ctx.r11.u64 = ctx.r11.u64 | 14720;
	// b 0x82154de4
	goto loc_82154DE4;
loc_82154DD8:
	// ori r12,r12,12799
	ctx.r12.u64 = ctx.r12.u64 | 12799;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12736
	ctx.r11.u64 = ctx.r11.u64 | 12736;
loc_82154DE4:
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82154f54
	goto loc_82154F54;
loc_82154DF0:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// beq 0x82154e10
	if (ctx.cr0.eq) goto loc_82154E10;
	// ori r12,r12,2559
	ctx.r12.u64 = ctx.r12.u64 | 2559;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,2496
	ctx.r11.u64 = ctx.r11.u64 | 2496;
	// b 0x82154de4
	goto loc_82154DE4;
loc_82154E10:
	// ori r12,r12,2495
	ctx.r12.u64 = ctx.r12.u64 | 2495;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,2432
	ctx.r11.u64 = ctx.r11.u64 | 2432;
	// b 0x82154de4
	goto loc_82154DE4;
loc_82154E20:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// beq 0x82154e40
	if (ctx.cr0.eq) goto loc_82154E40;
	// ori r12,r12,511
	ctx.r12.u64 = ctx.r12.u64 | 511;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,448
	ctx.r11.u64 = ctx.r11.u64 | 448;
	// b 0x82154de4
	goto loc_82154DE4;
loc_82154E40:
	// ori r12,r12,447
	ctx.r12.u64 = ctx.r12.u64 | 447;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,384
	ctx.r11.u64 = ctx.r11.u64 | 384;
	// b 0x82154de4
	goto loc_82154DE4;
loc_82154E50:
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,2175
	ctx.r12.u64 = ctx.r12.u64 | 2175;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,264
	ctx.r12.s64 = 17301504;
	// b 0x82154f48
	goto loc_82154F48;
loc_82154E68:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// beq 0x82154e88
	if (ctx.cr0.eq) goto loc_82154E88;
	// ori r12,r12,14463
	ctx.r12.u64 = ctx.r12.u64 | 14463;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,14400
	ctx.r11.u64 = ctx.r11.u64 | 14400;
	// b 0x82154de4
	goto loc_82154DE4;
loc_82154E88:
	// ori r12,r12,12415
	ctx.r12.u64 = ctx.r12.u64 | 12415;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12352
	ctx.r11.u64 = ctx.r11.u64 | 12352;
	// b 0x82154de4
	goto loc_82154DE4;
loc_82154E98:
	// lis r12,-4
	ctx.r12.s64 = -262144;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,2175
	ctx.r12.u64 = ctx.r12.u64 | 2175;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,8
	ctx.r12.s64 = 524288;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,4
	ctx.r12.u64 = ctx.r12.u64 | 262144;
	// ori r12,r12,2112
	ctx.r12.u64 = ctx.r12.u64 | 2112;
	// b 0x82154f50
	goto loc_82154F50;
loc_82154EBC:
	// lis r12,-8
	ctx.r12.s64 = -524288;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,383
	ctx.r12.u64 = ctx.r12.u64 | 383;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,40
	ctx.r12.s64 = 2621440;
	// b 0x82154f48
	goto loc_82154F48;
loc_82154ED4:
	// lis r12,-8
	ctx.r12.s64 = -524288;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,319
	ctx.r12.u64 = ctx.r12.u64 | 319;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,32
	ctx.r12.s64 = 2097152;
	// b 0x82154f48
	goto loc_82154F48;
loc_82154EEC:
	// lis r12,-8
	ctx.r12.s64 = -524288;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,16703
	ctx.r12.u64 = ctx.r12.u64 | 16703;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,2080
	ctx.r12.s64 = 136314880;
	// b 0x82154f48
	goto loc_82154F48;
loc_82154F04:
	// lis r12,-6
	ctx.r12.s64 = -393216;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,2175
	ctx.r12.u64 = ctx.r12.u64 | 2175;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,16648
	ctx.r12.s64 = 1091043328;
	// b 0x82154f48
	goto loc_82154F48;
loc_82154F1C:
	// lis r12,-5
	ctx.r12.s64 = -327680;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,2175
	ctx.r12.u64 = ctx.r12.u64 | 2175;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,24840
	ctx.r12.s64 = 1627914240;
	// b 0x82154f48
	goto loc_82154F48;
loc_82154F34:
	// lis r12,-8
	ctx.r12.s64 = -524288;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,18815
	ctx.r12.u64 = ctx.r12.u64 | 18815;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,2344
	ctx.r12.s64 = 153616384;
loc_82154F48:
	// ori r12,r12,1
	ctx.r12.u64 = ctx.r12.u64 | 1;
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
loc_82154F50:
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
loc_82154F54:
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
loc_82154F58:
	// lis r12,2
	ctx.r12.s64 = 131072;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ori r12,r12,1
	ctx.r12.u64 = ctx.r12.u64 | 1;
	// rldicr r12,r12,31,32
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 31) & 0xFFFFFFFF80000000;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// lwz r10,7104(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r10,2300(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2300);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82154fbc
	if (ctx.cr6.eq) goto loc_82154FBC;
	// li r12,-1024
	ctx.r12.s64 = -1024;
loc_82154F8C:
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
loc_82154F94:
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r10,16704
	ctx.r3.s64 = ctx.r10.s64 + 16704;
	// bl 0x82166148
	ctx.lr = 0x82154FB0;
	sub_82166148(ctx, base);
	// stw r3,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82154FBC:
	// rlwinm. r10,r27,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82154fe0
	if (ctx.cr0.eq) goto loc_82154FE0;
	// li r12,-16
	ctx.r12.s64 = -16;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// b 0x82154fec
	goto loc_82154FEC;
loc_82154FE0:
	// li r12,-32
	ctx.r12.s64 = -32;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
loc_82154FEC:
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,-32
	ctx.r12.s64 = -32;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82154f8c
	if (ctx.cr6.eq) goto loc_82154F8C;
	// rldicl r10,r11,32,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0x7FFFFFFFFFF;
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r10,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFC000000000;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82154f94
	goto loc_82154F94;
}

__attribute__((alias("__imp__sub_82155020"))) PPC_WEAK_FUNC(sub_82155020);
PPC_FUNC_IMPL(__imp__sub_82155020) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82b81f68
	ctx.lr = 0x82155058;
	sub_82B81F68(ctx, base);
	// lfs f12,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f7,48(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
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

__attribute__((alias("__imp__sub_82155100"))) PPC_WEAK_FUNC(sub_82155100);
PPC_FUNC_IMPL(__imp__sub_82155100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,-4012(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-30648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30648);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,29760(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29760);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r10,2892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2892);
	// lwz r11,2864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x82230400
	ctx.lr = 0x8215519C;
	sub_82230400(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821551AC"))) PPC_WEAK_FUNC(sub_821551AC);
PPC_FUNC_IMPL(__imp__sub_821551AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821551B0"))) PPC_WEAK_FUNC(sub_821551B0);
PPC_FUNC_IMPL(__imp__sub_821551B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x821551B8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8221ad18
	ctx.lr = 0x821551C0;
	__savefpr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,8
	ctx.r9.s64 = 8;
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// li r7,12
	ctx.r7.s64 = 12;
	// lvsr v0,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,24
	ctx.r4.s64 = 24;
	// vpermwi128 v63,v60,234
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x15));
	// li r3,28
	ctx.r3.s64 = 28;
	// vpermwi128 v62,v60,186
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x45));
	// li r30,32
	ctx.r30.s64 = 32;
	// vpermwi128 v61,v60,174
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x51));
	// li r28,36
	ctx.r28.s64 = 36;
	// vpermwi128 v60,v60,171
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x54));
	// li r27,40
	ctx.r27.s64 = 40;
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r26,44
	ctx.r26.s64 = 44;
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r25,48
	ctx.r25.s64 = 48;
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r24,52
	ctx.r24.s64 = 52;
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r23,56
	ctx.r23.s64 = 56;
	// li r22,60
	ctx.r22.s64 = 60;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// rlwinm r11,r29,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x7;
	// stvewx128 v63,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stvewx128 v63,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r3
	ea = (ctx.r31.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r31,r30
	ea = (ctx.r31.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r31,r28
	ea = (ctx.r31.u32 + ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r31,r27
	ea = (ctx.r31.u32 + ctx.r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r31,r26
	ea = (ctx.r31.u32 + ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r31,r25
	ea = (ctx.r31.u32 + ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r31,r24
	ea = (ctx.r31.u32 + ctx.r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r31,r23
	ea = (ctx.r31.u32 + ctx.r23.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r31,r22
	ea = (ctx.r31.u32 + ctx.r22.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r30,12728(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12728);
	// bne cr6,0x82155318
	if (!ctx.cr6.eq) goto loc_82155318;
	// lwz r9,224(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r7,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82155318
	if (ctx.cr0.eq) goto loc_82155318;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lbz r11,64(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 64);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82155310
	if (!ctx.cr6.gt) goto loc_82155310;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r9,r7,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82155304
	if (ctx.cr0.eq) goto loc_82155304;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155380
	if (ctx.cr6.eq) goto loc_82155380;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r9,0,10,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82155358
	if (ctx.cr0.eq) goto loc_82155358;
	// rlwinm. r9,r9,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82155358
	if (!ctx.cr0.eq) goto loc_82155358;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82155360
	if (!ctx.cr6.eq) goto loc_82155360;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r4,r11,18128
	ctx.r4.s64 = ctx.r11.s64 + 18128;
	// b 0x8215538c
	goto loc_8215538C;
loc_82155304:
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82155388
	goto loc_82155388;
loc_82155310:
	// lwz r4,20(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x82155388
	goto loc_82155388;
loc_82155318:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821553ac
	if (!ctx.cr6.eq) goto loc_821553AC;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// bl 0x82bdf2a0
	ctx.lr = 0x82155328;
	sub_82BDF2A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82155380
	if (ctx.cr0.eq) goto loc_82155380;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155380
	if (ctx.cr6.eq) goto loc_82155380;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155380
	if (ctx.cr6.eq) goto loc_82155380;
	// lbz r4,64(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 64);
	// bl 0x82beb878
	ctx.lr = 0x82155350;
	sub_82BEB878(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82155380
	if (ctx.cr0.eq) goto loc_82155380;
loc_82155358:
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82155360:
	// bl 0x82747da0
	ctx.lr = 0x82155364;
	sub_82747DA0(ctx, base);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82747e68
	ctx.lr = 0x82155378;
	sub_82747E68(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// b 0x82155388
	goto loc_82155388;
loc_82155380:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r4,r11,18128
	ctx.r4.s64 = ctx.r11.s64 + 18128;
loc_82155388:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8215538C:
	// bl 0x827472f0
	ctx.lr = 0x82155390;
	sub_827472F0(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x82155488
	goto loc_82155488;
loc_821553AC:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821553c8
	if (ctx.cr6.eq) goto loc_821553C8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821553c8
	if (ctx.cr6.eq) goto loc_821553C8;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82155388
	goto loc_82155388;
loc_821553C8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,2192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2192);
	// bl 0x827472f0
	ctx.lr = 0x821553D4;
	sub_827472F0(ctx, base);
	// lfs f13,312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82155488:
	// rlwinm r11,r29,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821555b8
	if (ctx.cr6.lt) goto loc_821555B8;
	// beq cr6,0x821555a4
	if (ctx.cr6.eq) goto loc_821555A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82155580
	if (ctx.cr6.lt) goto loc_82155580;
	// bne cr6,0x821555f8
	if (!ctx.cr6.eq) goto loc_821555F8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f5,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fadds f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f13,-29556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29556);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f13,-29560(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29560);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f31,f12,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f29,f6,f13
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f0,-30288(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30288);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f8,f13
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fadds f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fmuls f28,f4,f0
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,-29564(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29564);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f1,f8,f13,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmsubs f31,f10,f13,f31
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f31.f64));
	// lfs f12,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f7,f7,f13,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - ctx.f29.f64));
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f30,f9,f13,f30
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f30.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f8,f11,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f28.f64));
	// fmsubs f3,f13,f0,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmsubs f3,f10,f0,f2
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f2.f64));
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f4,f4,f12,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmadds f13,f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f31.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f13,f10,f12,f30
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f30.f64));
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmsubs f0,f9,f0,f6
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f6.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmadds f13,f9,f12,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmadds f0,f5,f11,f8
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// b 0x821555f8
	goto loc_821555F8;
loc_82155580:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// b 0x821555d8
	goto loc_821555D8;
loc_821555A4:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// b 0x821555c8
	goto loc_821555C8;
loc_821555B8:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
loc_821555C8:
	// lfs f7,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
loc_821555D8:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f7,52(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_821555F8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8221ad64
	ctx.lr = 0x82155604;
	__restfpr_28(ctx, base);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82155608"))) PPC_WEAK_FUNC(sub_82155608);
PPC_FUNC_IMPL(__imp__sub_82155608) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,23,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8215575c
	if (!ctx.cr0.eq) goto loc_8215575C;
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82155708
	if (ctx.cr6.lt) goto loc_82155708;
	// beq cr6,0x821556ec
	if (ctx.cr6.eq) goto loc_821556EC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821556c8
	if (ctx.cr6.lt) goto loc_821556C8;
	// bne cr6,0x82155768
	if (!ctx.cr6.eq) goto loc_82155768;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lfs f0,-29560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29564);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-29556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29556);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-30288(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,29760(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29760);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x82155768
	goto loc_82155768;
loc_821556C8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x82155728
	goto loc_82155728;
loc_821556EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82155720
	goto loc_82155720;
loc_82155708:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82155720:
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_82155728:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x82155768
	goto loc_82155768;
loc_8215575C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821551b0
	ctx.lr = 0x82155768;
	sub_821551B0(ctx, base);
loc_82155768:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,16256
	ctx.r10.s64 = 1065353216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155780
	if (ctx.cr6.eq) goto loc_82155780;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82155794
	if (!ctx.cr6.eq) goto loc_82155794;
loc_82155780:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821557c8
	if (ctx.cr6.eq) goto loc_821557C8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821557c8
	if (ctx.cr6.eq) goto loc_821557C8;
loc_82155794:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b822f8
	ctx.lr = 0x821557A0;
	sub_82B822F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82155020
	ctx.lr = 0x821557B4;
	sub_82155020(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82230400
	ctx.lr = 0x821557C4;
	sub_82230400(ctx, base);
	// b 0x82155848
	goto loc_82155848;
loc_821557C8:
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
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f10,16(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f9,20(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stfs f8,24(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f7,28(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stfs f6,32(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f5,36(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stfs f4,40(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stfs f3,44(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// stfs f2,48(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f1,52(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f31,56(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f30,60(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
loc_82155848:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82155868"))) PPC_WEAK_FUNC(sub_82155868);
PPC_FUNC_IMPL(__imp__sub_82155868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82155870;
	__savegprlr_22(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lwz r31,14200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,3160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821558b4
	if (!ctx.cr6.eq) goto loc_821558B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215cdb0
	ctx.lr = 0x821558AC;
	sub_8215CDB0(ctx, base);
	// lwz r31,14200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// stw r3,3160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3160, ctx.r3.u32);
loc_821558B4:
	// lwz r25,3160(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3160);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r27,r25,64
	ctx.r27.s64 = ctx.r25.s64 + 64;
	// beq cr6,0x82156088
	if (ctx.cr6.eq) goto loc_82156088;
	// lwz r11,24(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821559b8
	if (!ctx.cr6.eq) goto loc_821559B8;
	// lwz r8,76(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821559b8
	if (ctx.cr6.eq) goto loc_821559B8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// lfs f12,-30400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30400);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,22560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22560);
	ctx.f11.f64 = double(temp.f32);
loc_821558F0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821559b8
	if (!ctx.cr6.eq) goto loc_821559B8;
	// lwz r11,68(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821559ac
	if (!ctx.cr6.eq) goto loc_821559AC;
	// lwz r9,72(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821559ac
	if (ctx.cr0.eq) goto loc_821559AC;
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,2876(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2876);
	// lwz r11,2864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x82155948
	if (ctx.cr0.eq) goto loc_82155948;
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8215594c
	goto loc_8215594C;
loc_82155948:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_8215594C:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821559ac
	if (!ctx.cr6.lt) goto loc_821559AC;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// rldicr r12,r12,63,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// lis r12,-4076
	ctx.r12.s64 = -267124736;
	// std r11,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r11.u64);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// ori r12,r12,1028
	ctx.r12.u64 = ctx.r12.u64 | 1028;
	// ld r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 72);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// oris r12,r12,2047
	ctx.r12.u64 = ctx.r12.u64 | 134152192;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,7173
	ctx.r12.s64 = 470089728;
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// ori r12,r12,257
	ctx.r12.u64 = ctx.r12.u64 | 257;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,72(r25)
	PPC_STORE_U64(ctx.r25.u32 + 72, ctx.r10.u64);
loc_821559AC:
	// lwz r8,76(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821558f0
	if (!ctx.cr6.eq) goto loc_821558F0;
loc_821559B8:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x82155a24
	if (ctx.cr6.gt) goto loc_82155A24;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// addi r12,r12,13184
	ctx.r12.s64 = ctx.r12.s64 + 13184;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// addi r12,r12,23028
	ctx.r12.s64 = ctx.r12.s64 + 23028;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82155D9C;
	case 1:
		goto loc_821559F4;
	case 2:
		goto loc_82155AA8;
	case 3:
		goto loc_82155B14;
	case 4:
		goto loc_82155B38;
	case 5:
		goto loc_82155B68;
	case 6:
		goto loc_82155B9C;
	case 7:
		goto loc_82155BB0;
	case 8:
		goto loc_82155C2C;
	case 9:
		goto loc_82155C88;
	case 10:
		goto loc_82155BE0;
	case 11:
		goto loc_82155CFC;
	case 12:
		goto loc_82155D10;
	case 13:
		goto loc_82155D24;
	case 14:
		goto loc_82155D88;
	default:
		__builtin_unreachable();
	}
loc_821559F4:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r29,72(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r26,5
	ctx.r26.s64 = 5;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82155A18;
	sub_82161310(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82129e60
	ctx.lr = 0x82155A20;
	sub_82129E60(ctx, base);
loc_82155A20:
	// lwz r31,14200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
loc_82155A24:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,12,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x82155db8
	if (!ctx.cr6.eq) goto loc_82155DB8;
	// lwz r11,12728(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12728);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,2284
	ctx.r4.s64 = ctx.r11.s64 + 2284;
	// bl 0x827472f0
	ctx.lr = 0x82155A44;
	sub_827472F0(ctx, base);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821533d0
	ctx.lr = 0x82155A58;
	sub_821533D0(ctx, base);
	// sth r3,28(r27)
	PPC_STORE_U16(ctx.r27.u32 + 28, ctx.r3.u16);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwimi r11,r24,1,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 1) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// cmplwi cr6,r26,13
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 13, ctx.xer);
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// bne cr6,0x82155f24
	if (!ctx.cr6.eq) goto loc_82155F24;
	// lwz r11,12728(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12728);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,2352
	ctx.r4.s64 = ctx.r11.s64 + 2352;
	// bl 0x827472f0
	ctx.lr = 0x82155A80;
	sub_827472F0(ctx, base);
	// lwz r11,14200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821533d0
	ctx.lr = 0x82155A98;
	sub_821533D0(ctx, base);
	// sth r3,36(r27)
	PPC_STORE_U16(ctx.r27.u32 + 36, ctx.r3.u16);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// rlwimi r11,r24,1,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 1) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x82155f20
	goto loc_82155F20;
loc_82155AA8:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r29,72(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r26,8
	ctx.r26.s64 = 8;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82155ACC;
	sub_82161310(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f0,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// b 0x82155f24
	goto loc_82155F24;
loc_82155B14:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// li r26,10
	ctx.r26.s64 = 10;
	// bl 0x82161c68
	ctx.lr = 0x82155B24;
	sub_82161C68(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lwz r31,14200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// b 0x82155a24
	goto loc_82155A24;
loc_82155B38:
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// li r26,12
	ctx.r26.s64 = 12;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82155b58
	if (ctx.cr0.eq) goto loc_82155B58;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
loc_82155B58:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x82161d48
	ctx.lr = 0x82155B64;
	sub_82161D48(ctx, base);
	// b 0x82155a20
	goto loc_82155A20;
loc_82155B68:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,676
	ctx.r5.s64 = 676;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r29,72(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r26,13
	ctx.r26.s64 = 13;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82155B8C;
	sub_82161310(ctx, base);
	// li r5,676
	ctx.r5.s64 = 676;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x82155B98;
	sub_82219130(ctx, base);
	// b 0x82155a20
	goto loc_82155A20;
loc_82155B9C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// li r26,14
	ctx.r26.s64 = 14;
	// bl 0x82161e48
	ctx.lr = 0x82155BAC;
	sub_82161E48(ctx, base);
	// b 0x82155a20
	goto loc_82155A20;
loc_82155BB0:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r29,72(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r26,16
	ctx.r26.s64 = 16;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82155BD4;
	sub_82161310(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8212a208
	ctx.lr = 0x82155BDC;
	sub_8212A208(ctx, base);
	// b 0x82155a20
	goto loc_82155A20;
loc_82155BE0:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r29,72(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r26,17
	ctx.r26.s64 = 17;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82155C04;
	sub_82161310(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,14200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82155a24
	goto loc_82155A24;
loc_82155C2C:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r29,72(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r26,18
	ctx.r26.s64 = 18;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82155C50;
	sub_82161310(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,14200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// b 0x82155a24
	goto loc_82155A24;
loc_82155C88:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r29,72(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r26,19
	ctx.r26.s64 = 19;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82155CAC;
	sub_82161310(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// subf r9,r3,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r3.s64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
loc_82155CC8:
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82155cc8
	if (!ctx.cr0.eq) goto loc_82155CC8;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,14200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x82155a24
	goto loc_82155A24;
loc_82155CFC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// li r26,21
	ctx.r26.s64 = 21;
	// bl 0x82161f40
	ctx.lr = 0x82155D0C;
	sub_82161F40(ctx, base);
	// b 0x82155a20
	goto loc_82155A20;
loc_82155D10:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// li r26,22
	ctx.r26.s64 = 22;
	// bl 0x82162030
	ctx.lr = 0x82155D20;
	sub_82162030(ctx, base);
	// b 0x82155a20
	goto loc_82155A20;
loc_82155D24:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r29,72(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r26,23
	ctx.r26.s64 = 23;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82155D48;
	sub_82161310(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,14200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lbz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// b 0x82155a24
	goto loc_82155A24;
loc_82155D88:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// li r26,24
	ctx.r26.s64 = 24;
	// bl 0x821620e0
	ctx.lr = 0x82155D98;
	sub_821620E0(ctx, base);
	// b 0x82155a20
	goto loc_82155A20;
loc_82155D9C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82155db0
	if (ctx.cr6.eq) goto loc_82155DB0;
	// li r26,3
	ctx.r26.s64 = 3;
	// b 0x82155a24
	goto loc_82155A24;
loc_82155DB0:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// b 0x82155f28
	goto loc_82155F28;
loc_82155DB8:
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82155df8
	if (!ctx.cr6.eq) goto loc_82155DF8;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,12728(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12728);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// addi r4,r11,2284
	ctx.r4.s64 = ctx.r11.s64 + 2284;
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82155DE0:
	// bl 0x821533d0
	ctx.lr = 0x82155DE4;
	sub_821533D0(ctx, base);
	// sth r3,28(r27)
	PPC_STORE_U16(ctx.r27.u32 + 28, ctx.r3.u16);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwimi r11,r24,1,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 1) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
loc_82155DF0:
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// b 0x82155f24
	goto loc_82155F24;
loc_82155DF8:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82155e30
	if (!ctx.cr6.eq) goto loc_82155E30;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82155100
	ctx.lr = 0x82155E08;
	sub_82155100(ctx, base);
	// lwz r11,14200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821533d0
	ctx.lr = 0x82155E20;
	sub_821533D0(ctx, base);
	// sth r3,28(r27)
	PPC_STORE_U16(ctx.r27.u32 + 28, ctx.r3.u16);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwimi r11,r24,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x82155df0
	goto loc_82155DF0;
loc_82155E30:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82155e5c
	if (!ctx.cr6.eq) goto loc_82155E5C;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82155608
	ctx.lr = 0x82155E44;
	sub_82155608(ctx, base);
	// lwz r11,14200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82155de0
	goto loc_82155DE0;
loc_82155E5C:
	// lwz r11,12728(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12728);
	// lwz r11,3756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3756);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82155e98
	if (!ctx.cr0.eq) goto loc_82155E98;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lis r10,16256
	ctx.r10.s64 = 1065353216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155e84
	if (ctx.cr6.eq) goto loc_82155E84;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82155e98
	if (!ctx.cr6.eq) goto loc_82155E98;
loc_82155E84:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155f28
	if (ctx.cr6.eq) goto loc_82155F28;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82155f28
	if (ctx.cr6.eq) goto loc_82155F28;
loc_82155E98:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b822f8
	ctx.lr = 0x82155EA4;
	sub_82B822F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82155020
	ctx.lr = 0x82155EB8;
	sub_82155020(ctx, base);
	// lwz r11,14200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821533d0
	ctx.lr = 0x82155ED0;
	sub_821533D0(ctx, base);
	// sth r3,28(r27)
	PPC_STORE_U16(ctx.r27.u32 + 28, ctx.r3.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// bl 0x82155020
	ctx.lr = 0x82155EF4;
	sub_82155020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82155f24
	if (ctx.cr0.eq) goto loc_82155F24;
	// lwz r11,14200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821533d0
	ctx.lr = 0x82155F14;
	sub_821533D0(ctx, base);
	// sth r3,36(r27)
	PPC_STORE_U16(ctx.r27.u32 + 36, ctx.r3.u16);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_82155F20:
	// stw r11,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r11.u32);
loc_82155F24:
	// lwz r31,14200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
loc_82155F28:
	// lwz r10,12728(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12728);
	// lwz r11,3756(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3756);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82155f5c
	if (ctx.cr0.eq) goto loc_82155F5C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lha r11,3752(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 3752));
	// addi r11,r11,1865
	ctx.r11.s64 = ctx.r11.s64 + 1865;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82155f5c
	if (ctx.cr6.eq) goto loc_82155F5C;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
loc_82155F5C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156008
	if (ctx.cr0.eq) goto loc_82156008;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lwz r11,3756(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3756);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82155fb8
	if (ctx.cr0.eq) goto loc_82155FB8;
	// lwz r11,12728(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12728);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lha r11,3752(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 3752));
	// addi r11,r11,1855
	ctx.r11.s64 = ctx.r11.s64 + 1855;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82155fb8
	if (ctx.cr6.eq) goto loc_82155FB8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,-3548(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3548);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82155fd0
	goto loc_82155FD0;
loc_82155FB8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// rlwinm r11,r11,24,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,-28904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28904);
	ctx.f0.f64 = double(temp.f32);
loc_82155FD0:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,56(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 56, temp.u32);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
loc_82156008:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82156020
	if (ctx.cr6.eq) goto loc_82156020;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82156054
	if (!ctx.cr6.eq) goto loc_82156054;
loc_82156020:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// oris r30,r11,65280
	ctx.r30.u64 = ctx.r11.u64 | 4278190080;
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82156050;
	sub_82161310(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82156054:
	// lis r12,-2042
	ctx.r12.s64 = -133824512;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// ld r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rotldi r11,r11,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 27);
	// oris r12,r12,2047
	ctx.r12.u64 = ctx.r12.u64 | 134152192;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,-4
	ctx.r12.s64 = -4;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
loc_82156088:
	// stb r26,45(r25)
	PPC_STORE_U8(ctx.r25.u32 + 45, ctx.r26.u8);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156094"))) PPC_WEAK_FUNC(sub_82156094);
PPC_FUNC_IMPL(__imp__sub_82156094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156098"))) PPC_WEAK_FUNC(sub_82156098);
PPC_FUNC_IMPL(__imp__sub_82156098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x821560A0;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r18,-31942
	ctx.r18.s64 = -2093350912;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r10,r11,28812
	ctx.r10.s64 = ctx.r11.s64 + 28812;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lwz r11,14200(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14200);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lwz r20,16(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821560e8
	if (!ctx.cr6.eq) goto loc_821560E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215cdb0
	ctx.lr = 0x821560E4;
	sub_8215CDB0(ctx, base);
	// stw r3,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r3.u32);
loc_821560E8:
	// lwz r29,3160(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821580d0
	ctx.lr = 0x821560F4;
	sub_821580D0(ctx, base);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,-27872
	ctx.r11.s64 = ctx.r8.s64 + -27872;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r9,r11,-32692
	ctx.r9.s64 = ctx.r11.s64 + -32692;
	// lwz r11,-27872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27872);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// lwz r23,8(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r9,r8,28
	ctx.r9.s64 = ctx.r8.s64 * 28;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r21,r9,r23
	ctx.r21.u64 = ctx.r9.u64 + ctx.r23.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82156150
	if (!ctx.cr6.eq) goto loc_82156150;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,13088
	ctx.r5.s64 = ctx.r11.s64 + 13088;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82156148;
	sub_82BCAC98(ctx, base);
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// b 0x82156164
	goto loc_82156164;
loc_82156150:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r22,r7,r8
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82156164:
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r22,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r22.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r30,28(r29)
	PPC_STORE_U16(ctx.r29.u32 + 28, ctx.r30.u16);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r11.u32);
	// stw r9,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r9.u32);
	// stw r10,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r10.u32);
	// stw r10,180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 180, ctx.r10.u32);
	// stw r10,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r10.u32);
	// stw r10,188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 188, ctx.r10.u32);
	// lwz r11,12728(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12728);
	// lwz r4,232(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x82177ad8
	ctx.lr = 0x821561A4;
	sub_82177AD8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821561b8
	if (ctx.cr6.eq) goto loc_821561B8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r30,257
	ctx.r30.s64 = 257;
loc_821561B8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x821561c8
	if (ctx.cr6.eq) goto loc_821561C8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// oris r30,r30,16
	ctx.r30.u64 = ctx.r30.u64 | 1048576;
loc_821561C8:
	// lwz r10,12728(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12728);
	// lwz r11,208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// rlwinm. r9,r9,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82156254
	if (ctx.cr0.eq) goto loc_82156254;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82156214
	if (!ctx.cr0.eq) goto loc_82156214;
	// lwz r11,232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156214
	if (ctx.cr6.eq) goto loc_82156214;
	// lwz r11,232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82156214
	if (!ctx.cr6.eq) goto loc_82156214;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// ori r30,r30,512
	ctx.r30.u64 = ctx.r30.u64 | 512;
loc_82156214:
	// lwz r11,232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215622c
	if (ctx.cr6.eq) goto loc_8215622C;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// oris r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 65536;
loc_8215622C:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82156240
	if (ctx.cr6.eq) goto loc_82156240;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// oris r30,r30,256
	ctx.r30.u64 = ctx.r30.u64 | 16777216;
loc_82156240:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156254
	if (ctx.cr6.eq) goto loc_82156254;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// ori r30,r30,4096
	ctx.r30.u64 = ctx.r30.u64 | 4096;
loc_82156254:
	// lwz r11,232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82156284
	if (ctx.cr0.eq) goto loc_82156284;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156284
	if (ctx.cr6.eq) goto loc_82156284;
	// lhz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82156284
	if (ctx.cr0.eq) goto loc_82156284;
	// addi r5,r5,20
	ctx.r5.s64 = ctx.r5.s64 + 20;
	// ori r30,r30,48
	ctx.r30.u64 = ctx.r30.u64 | 48;
loc_82156284:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mulli r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 * 3;
	// bl 0x82177d60
	ctx.lr = 0x82156298;
	sub_82177D60(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82178120
	ctx.lr = 0x821562B0;
	sub_82178120(ctx, base);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x821564c8
	if (!ctx.cr6.lt) goto loc_821564C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r7,12728(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12728);
	// rlwinm r6,r30,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// rlwinm r4,r30,0,26,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// rlwinm r3,r30,0,22,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	// rlwinm r29,r30,0,19,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000;
	// rlwinm r25,r30,0,15,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r24,r30,0,11,11
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100000;
	// rlwinm r30,r30,0,7,7
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000000;
loc_821562E8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// li r5,3
	ctx.r5.s64 = 3;
loc_821562F0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// beq cr6,0x82156350
	if (ctx.cr6.eq) goto loc_82156350;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82156350:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82156388
	if (ctx.cr6.eq) goto loc_82156388;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
loc_82156388:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821563a4
	if (ctx.cr6.eq) goto loc_821563A4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r10,r10,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_821563A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821563cc
	if (ctx.cr6.eq) goto loc_821563CC;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,232(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 232);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_821563CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82156404
	if (ctx.cr6.eq) goto loc_82156404;
	// lwz r9,232(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 232);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
loc_82156404:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82156444
	if (ctx.cr6.eq) goto loc_82156444;
	// lwz r9,232(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 232);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
loc_82156444:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82156480
	if (ctx.cr6.eq) goto loc_82156480;
	// lwz r10,208(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 208);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82156460
	if (ctx.cr0.eq) goto loc_82156460;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// b 0x82156464
	goto loc_82156464;
loc_82156460:
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
loc_82156464:
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_82156480:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821564b0
	if (ctx.cr6.eq) goto loc_821564B0;
	// lwz r9,232(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 232);
	// lhz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_821564B0:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x821562f0
	if (!ctx.cr0.eq) goto loc_821562F0;
	// addi r23,r23,28
	ctx.r23.s64 = ctx.r23.s64 + 28;
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x821562e8
	if (ctx.cr6.lt) goto loc_821562E8;
loc_821564C8:
	// ld r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x821564e8
	if (ctx.cr6.eq) goto loc_821564E8;
	// lwz r3,36(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x821a0818
	ctx.lr = 0x821564E8;
	sub_821A0818(ctx, base);
loc_821564E8:
	// lwz r11,14200(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82177930
	ctx.lr = 0x821564FC;
	sub_82177930(ctx, base);
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// lwz r11,14200(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82153498
	ctx.lr = 0x82156514;
	sub_82153498(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82120a70
	ctx.lr = 0x82156520;
	sub_82120A70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215652C"))) PPC_WEAK_FUNC(sub_8215652C);
PPC_FUNC_IMPL(__imp__sub_8215652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156530"))) PPC_WEAK_FUNC(sub_82156530);
PPC_FUNC_IMPL(__imp__sub_82156530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82156538;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8221acf0
	ctx.lr = 0x82156540;
	__savefpr_18(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,28812
	ctx.r10.s64 = ctx.r11.s64 + 28812;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,12728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12728);
	// li r3,18
	ctx.r3.s64 = 18;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,8(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r26,16(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,2192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2192);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f30,f8,f0
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f29,f9,f0
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fneg f28,f0
	ctx.f28.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f27,f12
	ctx.f27.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f26,f13
	ctx.f26.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821565CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821566fc
	if (!ctx.cr6.lt) goto loc_821566FC;
	// fneg f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// fneg f13,f26
	ctx.f13.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// fneg f12,f28
	ctx.f12.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fsubs f25,f28,f31
	ctx.f25.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fadds f22,f31,f28
	ctx.f22.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// fsubs f24,f27,f30
	ctx.f24.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// fsubs f23,f26,f29
	ctx.f23.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// fadds f21,f30,f27
	ctx.f21.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// fadds f20,f29,f26
	ctx.f20.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// fsubs f28,f31,f28
	ctx.f28.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// fsubs f19,f0,f30
	ctx.f19.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fsubs f18,f13,f29
	ctx.f18.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// fsubs f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fsubs f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// fsubs f29,f29,f26
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f26.f64));
loc_82156620:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82156634
	if (ctx.cr6.eq) goto loc_82156634;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r28,r11,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
loc_82156634:
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,12728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12728);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,33
	ctx.r3.s64 = 33;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f31,f0,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f19,f0,f13
	ctx.f13.f64 = double(float(ctx.f19.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f18,f0,f13
	ctx.f13.f64 = double(float(ctx.f18.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f25,f0,f13
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f24,f0,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f23,f0,f13
	ctx.f13.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f22,f0,f13
	ctx.f13.f64 = double(float(ctx.f22.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f21,f0,f13
	ctx.f13.f64 = double(float(ctx.f21.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f20,f0,f13
	ctx.f13.f64 = double(float(ctx.f20.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f28,f0,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f30,f0,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f29,f0,f13
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821566F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82156620
	if (ctx.cr6.lt) goto loc_82156620;
loc_821566FC:
	// lwz r11,12728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12728);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82156714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8221ad3c
	ctx.lr = 0x82156724;
	__restfpr_18(ctx, base);
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156728"))) PPC_WEAK_FUNC(sub_82156728);
PPC_FUNC_IMPL(__imp__sub_82156728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82156730;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// cmplwi cr6,r11,72
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 72, ctx.xer);
	// bgt cr6,0x82157114
	if (ctx.cr6.gt) goto loc_82157114;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// addi r12,r12,13288
	ctx.r12.s64 = ctx.r12.s64 + 13288;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// addi r12,r12,26480
	ctx.r12.s64 = ctx.r12.s64 + 26480;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82156BFC;
	case 1:
		goto loc_82157114;
	case 2:
		goto loc_82157114;
	case 3:
		goto loc_82157114;
	case 4:
		goto loc_82157114;
	case 5:
		goto loc_82157114;
	case 6:
		goto loc_82157114;
	case 7:
		goto loc_82157114;
	case 8:
		goto loc_82157114;
	case 9:
		goto loc_82157114;
	case 10:
		goto loc_82157114;
	case 11:
		goto loc_82157114;
	case 12:
		goto loc_82157114;
	case 13:
		goto loc_82157114;
	case 14:
		goto loc_82157114;
	case 15:
		goto loc_82157114;
	case 16:
		goto loc_82157114;
	case 17:
		goto loc_82156C1C;
	case 18:
		goto loc_82156C58;
	case 19:
		goto loc_82156C64;
	case 20:
		goto loc_82157114;
	case 21:
		goto loc_82157114;
	case 22:
		goto loc_82157114;
	case 23:
		goto loc_82157114;
	case 24:
		goto loc_82157114;
	case 25:
		goto loc_82157114;
	case 26:
		goto loc_82157114;
	case 27:
		goto loc_82157114;
	case 28:
		goto loc_82157114;
	case 29:
		goto loc_82156C6C;
	case 30:
		goto loc_82157138;
	case 31:
		goto loc_82157138;
	case 32:
		goto loc_82156C58;
	case 33:
		goto loc_82157114;
	case 34:
		goto loc_82156C94;
	case 35:
		goto loc_82157114;
	case 36:
		goto loc_82157114;
	case 37:
		goto loc_82157114;
	case 38:
		goto loc_821570AC;
	case 39:
		goto loc_82157138;
	case 40:
		goto loc_82156CEC;
	case 41:
		goto loc_82156CC8;
	case 42:
		goto loc_82156CA0;
	case 43:
		goto loc_82156A00;
	case 44:
		goto loc_82156D44;
	case 45:
		goto loc_82156DD8;
	case 46:
		goto loc_82156DFC;
	case 47:
		goto loc_82156E30;
	case 48:
		goto loc_82156770;
	case 49:
		goto loc_8215681C;
	case 50:
		goto loc_82156864;
	case 51:
		goto loc_821568BC;
	case 52:
		goto loc_82156960;
	case 53:
		goto loc_821569A0;
	case 54:
		goto loc_821569C0;
	case 55:
		goto loc_82156E50;
	case 56:
		goto loc_82156E6C;
	case 57:
		goto loc_82156EE4;
	case 58:
		goto loc_82156F70;
	case 59:
		goto loc_82156F90;
	case 60:
		goto loc_82156FE4;
	case 61:
		goto loc_82156FF4;
	case 62:
		goto loc_82157004;
	case 63:
		goto loc_8215701C;
	case 64:
		goto loc_82157040;
	case 65:
		goto loc_82157084;
	case 66:
		goto loc_821570A4;
	case 67:
		goto loc_82156DA4;
	case 68:
		goto loc_821570B4;
	case 69:
		goto loc_82156EAC;
	case 70:
		goto loc_82156EC8;
	case 71:
		goto loc_821569E0;
	case 72:
		goto loc_821570D8;
	default:
		__builtin_unreachable();
	}
loc_82156770:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,16684
	ctx.r8.s64 = ctx.r11.s64 + 16684;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8215679c
	if (!ctx.cr6.gt) goto loc_8215679C;
	// twi 31,r0,22
	// twi 31,r0,22
loc_82156798:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
loc_8215679C:
	// beq cr6,0x82156814
	if (ctx.cr6.eq) goto loc_82156814;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821567ac
	if (ctx.cr6.lt) goto loc_821567AC;
	// twi 31,r0,22
loc_821567AC:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821567d0
	if (ctx.cr6.eq) goto loc_821567D0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821567c4
	if (ctx.cr6.lt) goto loc_821567C4;
	// twi 31,r0,22
loc_821567C4:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x82156798
	goto loc_82156798;
loc_821567D0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821567dc
	if (ctx.cr6.lt) goto loc_821567DC;
	// twi 31,r0,22
loc_821567DC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821567f4
	if (ctx.cr6.lt) goto loc_821567F4;
	// twi 31,r0,22
loc_821567F4:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82156808
	if (ctx.cr6.lt) goto loc_82156808;
	// twi 31,r0,22
loc_82156808:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82156814:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8215713c
	goto loc_8215713C;
loc_8215681C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82157138
	if (ctx.cr6.eq) goto loc_82157138;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// addi r10,r11,16684
	ctx.r10.s64 = ctx.r11.s64 + 16684;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156850
	if (ctx.cr6.eq) goto loc_82156850;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82156854
	if (ctx.cr6.lt) goto loc_82156854;
loc_82156850:
	// twi 31,r0,22
loc_82156854:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156864:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82157138
	if (ctx.cr6.lt) goto loc_82157138;
	// cmplwi cr6,r31,40
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 40, ctx.xer);
	// bgt cr6,0x82157138
	if (ctx.cr6.gt) goto loc_82157138;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// addi r10,r11,16684
	ctx.r10.s64 = ctx.r11.s64 + 16684;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821568a0
	if (ctx.cr6.eq) goto loc_821568A0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821568a4
	if (ctx.cr6.lt) goto loc_821568A4;
loc_821568A0:
	// twi 31,r0,22
loc_821568A4:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x8215713c
	goto loc_8215713C;
loc_821568BC:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// addi r11,r11,16684
	ctx.r11.s64 = ctx.r11.s64 + 16684;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blt cr6,0x82156914
	if (ctx.cr6.lt) goto loc_82156914;
	// cmplwi cr6,r31,40
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 40, ctx.xer);
	// bgt cr6,0x82156914
	if (ctx.cr6.gt) goto loc_82156914;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821568f8
	if (ctx.cr6.eq) goto loc_821568F8;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821568fc
	if (ctx.cr6.lt) goto loc_821568FC;
loc_821568F8:
	// twi 31,r0,22
loc_821568FC:
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// b 0x82156918
	goto loc_82156918;
loc_82156914:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82156918:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82156958
	if (ctx.cr6.eq) goto loc_82156958;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215693c
	if (ctx.cr6.eq) goto loc_8215693C;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82156940
	if (ctx.cr6.lt) goto loc_82156940;
loc_8215693C:
	// twi 31,r0,22
loc_82156940:
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8215713c
	goto loc_8215713C;
loc_82156958:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8215713c
	goto loc_8215713C;
loc_82156960:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// addi r10,r11,16684
	ctx.r10.s64 = ctx.r11.s64 + 16684;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215698c
	if (ctx.cr6.eq) goto loc_8215698C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82156990
	if (ctx.cr6.lt) goto loc_82156990;
loc_8215698C:
	// twi 31,r0,22
loc_82156990:
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8215713c
	goto loc_8215713C;
loc_821569A0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215f300
	ctx.lr = 0x821569BC;
	sub_8215F300(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_821569C0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2256, ctx.r9.u32);
	// b 0x82157138
	goto loc_82157138;
loc_821569E0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215f068
	ctx.lr = 0x821569FC;
	sub_8215F068(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_82156A00:
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,14200(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14200);
	// lwz r9,12728(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r11,7104(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r10,3096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3096, ctx.r10.u32);
	// stw r8,3100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3100, ctx.r8.u32);
	// lwz r11,7104(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r10,3104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3104, ctx.r10.u32);
	// lwz r5,224(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82157138
	if (ctx.cr0.eq) goto loc_82157138;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x827db950
	ctx.lr = 0x82156A64;
	sub_827DB950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82156a80
	if (ctx.cr0.eq) goto loc_82156A80;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29736);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82156b24
	goto loc_82156B24;
loc_82156A80:
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82156a98
	if (!ctx.cr6.eq) goto loc_82156A98;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82156aa8
	goto loc_82156AA8;
loc_82156A98:
	// li r10,-2
	ctx.r10.s64 = -2;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,28,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
loc_82156AA8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82156afc
	if (ctx.cr6.lt) goto loc_82156AFC;
	// beq cr6,0x82156ac8
	if (ctx.cr6.eq) goto loc_82156AC8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82156b2c
	if (!ctx.cr6.lt) goto loc_82156B2C;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lfs f12,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82156ad0
	goto loc_82156AD0;
loc_82156AC8:
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
loc_82156AD0:
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f13,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-30820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30820);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// b 0x82156b2c
	goto loc_82156B2C;
loc_82156AFC:
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-29376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29376);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_82156B24:
	// stfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
loc_82156B2C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156b7c
	if (ctx.cr6.eq) goto loc_82156B7C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stfs f11,196(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f10,200(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
loc_82156B7C:
	// lwz r11,7104(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r30,r11,r6
	ctx.r30.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r3,r30,3052
	ctx.r3.s64 = ctx.r30.s64 + 3052;
	// bl 0x82158cf0
	ctx.lr = 0x82156B90;
	sub_82158CF0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x82219130
	ctx.lr = 0x82156B9C;
	sub_82219130(ctx, base);
	// lwz r11,3064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,3104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3104, ctx.r11.u32);
	// beq cr6,0x82157138
	if (ctx.cr6.eq) goto loc_82157138;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82157138
	if (ctx.cr0.eq) goto loc_82157138;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82157138
	if (!ctx.cr6.eq) goto loc_82157138;
	// lwz r11,14200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14200);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r31,3096(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3096, ctx.r31.u32);
	// bl 0x8215f170
	ctx.lr = 0x82156BF4;
	sub_8215F170(ctx, base);
	// stw r3,3100(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3100, ctx.r3.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156BFC:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215f3e0
	ctx.lr = 0x82156C18;
	sub_8215F3E0(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_82156C1C:
	// lis r8,-32051
	ctx.r8.s64 = -2100494336;
	// lhz r11,25532(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 25532);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82157138
	if (!ctx.cr6.eq) goto loc_82157138;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// lis r6,-31944
	ctx.r6.s64 = -2093481984;
	// addi r11,r11,3848
	ctx.r11.s64 = ctx.r11.s64 + 3848;
	// addi r10,r10,-160
	ctx.r10.s64 = ctx.r10.s64 + -160;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,3840(r7)
	PPC_STORE_U32(ctx.r7.u32 + 3840, ctx.r11.u32);
	// stw r10,32604(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32604, ctx.r10.u32);
	// sth r9,25532(r8)
	PPC_STORE_U16(ctx.r8.u32 + 25532, ctx.r9.u16);
	// b 0x82157138
	goto loc_82157138;
loc_82156C58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82164a18
	ctx.lr = 0x82156C60;
	sub_82164A18(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_82156C64:
	// bl 0x82164b98
	ctx.lr = 0x82156C68;
	sub_82164B98(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_82156C6C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f13,3144(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3144, temp.u32);
	// stfs f0,3148(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3148, temp.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156C94:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r11,12480
	ctx.r9.s64 = ctx.r11.s64 + 12480;
	// b 0x8215711c
	goto loc_8215711C;
loc_82156CA0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r9,7104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r9,r9,3552
	ctx.r9.s64 = ctx.r9.s64 * 3552;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r11,3012
	ctx.r9.s64 = ctx.r11.s64 + 3012;
	// stw r10,3012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3012, ctx.r10.u32);
	// stw r10,3016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3016, ctx.r10.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156CC8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215f238
	ctx.lr = 0x82156CE8;
	sub_8215F238(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_82156CEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82157138
	if (!ctx.cr6.lt) goto loc_82157138;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
loc_82156D08:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156d34
	if (ctx.cr0.eq) goto loc_82156D34;
	// lwz r11,14200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215eb48
	ctx.lr = 0x82156D34;
	sub_8215EB48(ctx, base);
loc_82156D34:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82156d08
	if (ctx.cr6.lt) goto loc_82156D08;
	// b 0x82157138
	goto loc_82157138;
loc_82156D44:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r10,r11,14176
	ctx.r10.s64 = ctx.r11.s64 + 14176;
	// lwz r11,14176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14176);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82157138
	if (!ctx.cr6.eq) goto loc_82157138;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
loc_82156D60:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// stw r10,14196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14196, ctx.r10.u32);
	// bne cr6,0x82156d78
	if (!ctx.cr6.eq) goto loc_82156D78;
loc_82156D70:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// b 0x82156d94
	goto loc_82156D94;
loc_82156D78:
	// cmplwi cr6,r31,60
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 60, ctx.xer);
loc_82156D7C:
	// bne cr6,0x82156d90
	if (!ctx.cr6.eq) goto loc_82156D90;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,14196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14196, ctx.r9.u32);
	// b 0x82156d94
	goto loc_82156D94;
loc_82156D90:
	// li r10,2
	ctx.r10.s64 = 2;
loc_82156D94:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14188);
	// stw r10,448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 448, ctx.r10.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156DA4:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r10,r11,14176
	ctx.r10.s64 = ctx.r11.s64 + 14176;
	// stw r31,14176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14176, ctx.r31.u32);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// bne cr6,0x82156d60
	if (!ctx.cr6.eq) goto loc_82156D60;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r9,14196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14196, ctx.r9.u32);
	// beq cr6,0x82156d70
	if (ctx.cr6.eq) goto loc_82156D70;
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// b 0x82156d7c
	goto loc_82156D7C;
loc_82156DD8:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x82157138
	if (!ctx.cr6.lt) goto loc_82157138;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r31.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156DFC:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82157138
	if (!ctx.cr6.eq) goto loc_82157138;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,268(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3156(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3156, temp.u32);
	// stw r10,3152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3152, ctx.r10.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156E30:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,3152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3152, ctx.r9.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156E50:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,3036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3036, ctx.r31.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156E6C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r9,7104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r9,r9,3552
	ctx.r9.s64 = ctx.r9.s64 * 3552;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,3160(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3160);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82156e94
	if (ctx.cr6.eq) goto loc_82156E94;
	// stw r10,344(r9)
	PPC_STORE_U32(ctx.r9.u32 + 344, ctx.r10.u32);
loc_82156E94:
	// stw r10,3160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3160, ctx.r10.u32);
	// lwz r9,7104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r9,r9,3552
	ctx.r9.s64 = ctx.r9.s64 * 3552;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156EAC:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,2048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2048, ctx.r31.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156EC8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 764, ctx.r31.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156EE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82153c28
	ctx.lr = 0x82156EEC;
	sub_82153C28(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,14200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14200);
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r9,7104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7104);
	// lfs f0,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,348(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// mulli r9,r9,3552
	ctx.r9.s64 = ctx.r9.s64 * 3552;
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r6,344(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// lfs f0,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r10,r11,2324
	ctx.r10.s64 = ctx.r11.s64 + 2324;
	// stw r8,2300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2300, ctx.r8.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,2324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2324, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,2328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2328, ctx.r10.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r10,2332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2332, ctx.r10.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,2336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2336, ctx.r10.u32);
	// stw r6,2308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2308, ctx.r6.u32);
	// stw r7,2312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2312, ctx.r7.u32);
	// stw r5,2316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2316, ctx.r5.u32);
	// stw r9,2320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2320, ctx.r9.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156F70:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,2300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2300, ctx.r9.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82156F90:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r3,14188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14188);
	// stw r10,7128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7128, ctx.r10.u32);
	// bl 0x8215aee8
	ctx.lr = 0x82156FAC;
	sub_8215AEE8(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r3,r11,29152
	ctx.r3.s64 = ctx.r11.s64 + 29152;
	// bl 0x821672e0
	ctx.lr = 0x82156FB8;
	sub_821672E0(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16704
	ctx.r3.s64 = ctx.r11.s64 + 16704;
	// bl 0x82166278
	ctx.lr = 0x82156FC8;
	sub_82166278(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-27872
	ctx.r3.s64 = ctx.r11.s64 + -27872;
	// bl 0x82168d78
	ctx.lr = 0x82156FD8;
	sub_82168D78(ctx, base);
loc_82156FD8:
	// lwz r3,14188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14188);
	// bl 0x8215af68
	ctx.lr = 0x82156FE0;
	sub_8215AF68(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_82156FE4:
	// bl 0x821538a8
	ctx.lr = 0x82156FE8;
	sub_821538A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821594f8
	ctx.lr = 0x82156FF0;
	sub_821594F8(ctx, base);
	// b 0x8215713c
	goto loc_8215713C;
loc_82156FF4:
	// bl 0x821538a8
	ctx.lr = 0x82156FF8;
	sub_821538A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82159c98
	ctx.lr = 0x82157000;
	sub_82159C98(ctx, base);
	// b 0x8215713c
	goto loc_8215713C;
loc_82157004:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,14200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// stw r10,7128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7128, ctx.r10.u32);
	// bl 0x82160e28
	ctx.lr = 0x82157018;
	sub_82160E28(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_8215701C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,14200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r11,7112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7112);
	// stw r10,7128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7128, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157138
	if (ctx.cr6.eq) goto loc_82157138;
	// bl 0x82161070
	ctx.lr = 0x8215703C;
	sub_82161070(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_82157040:
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r30,r11,29280
	ctx.r30.s64 = ctx.r11.s64 + 29280;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
loc_8215704C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157070
	if (ctx.cr6.eq) goto loc_82157070;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82157070:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,196
	ctx.r11.s64 = ctx.r30.s64 + 196;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8215704c
	if (ctx.cr6.lt) goto loc_8215704C;
	// b 0x82157138
	goto loc_82157138;
loc_82157084:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f0,268(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,14188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14188);
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82157138
	goto loc_82157138;
loc_821570A4:
	// bl 0x82153f30
	ctx.lr = 0x821570A8;
	sub_82153F30(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_821570AC:
	// bl 0x82164f50
	ctx.lr = 0x821570B0;
	sub_82164F50(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_821570B4:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,14188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14188);
	// bl 0x8215aee8
	ctx.lr = 0x821570C0;
	sub_8215AEE8(ctx, base);
	// lwz r11,14188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14188);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,504(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x821a15b0
	ctx.lr = 0x821570D4;
	sub_821A15B0(ctx, base);
	// b 0x82156fd8
	goto loc_82156FD8;
loc_821570D8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82157108
	if (ctx.cr6.eq) goto loc_82157108;
	// addi r3,r11,3440
	ctx.r3.s64 = ctx.r11.s64 + 3440;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82157104;
	sub_82219130(ctx, base);
	// b 0x82157138
	goto loc_82157138;
loc_82157108:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,3440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3440, ctx.r10.u32);
	// b 0x82157138
	goto loc_82157138;
loc_82157114:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r11,12540
	ctx.r9.s64 = ctx.r11.s64 + 12540;
loc_8215711C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82157138;
	sub_82BCACB0(ctx, base);
loc_82157138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215713C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157144"))) PPC_WEAK_FUNC(sub_82157144);
PPC_FUNC_IMPL(__imp__sub_82157144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157148"))) PPC_WEAK_FUNC(sub_82157148);
PPC_FUNC_IMPL(__imp__sub_82157148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82157150;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,16704
	ctx.r31.s64 = ctx.r11.s64 + 16704;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821571c8
	if (!ctx.cr6.eq) goto loc_821571C8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821571c8
	if (ctx.cr6.eq) goto loc_821571C8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821571a4
	if (ctx.cr6.eq) goto loc_821571A4;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x82157188;
	sub_82121828(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x821571bc
	goto loc_821571BC;
loc_821571A4:
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120040
	ctx.lr = 0x821571B4;
	sub_82120040(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_821571BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82218a80
	ctx.lr = 0x821571C4;
	sub_82218A80(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_821571C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821571D4"))) PPC_WEAK_FUNC(sub_821571D4);
PPC_FUNC_IMPL(__imp__sub_821571D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821571D8"))) PPC_WEAK_FUNC(sub_821571D8);
PPC_FUNC_IMPL(__imp__sub_821571D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x821571E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,16704
	ctx.r30.s64 = ctx.r11.s64 + 16704;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82157220
	if (ctx.cr6.eq) goto loc_82157220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x821661c8
	ctx.lr = 0x82157214;
	sub_821661C8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82157220:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82120040
	ctx.lr = 0x8215722C;
	sub_82120040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215723c
	if (ctx.cr0.eq) goto loc_8215723C;
	// bl 0x82165270
	ctx.lr = 0x82157238;
	sub_82165270(ctx, base);
	// b 0x82157240
	goto loc_82157240;
loc_8215723C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82157240:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82165d10
	ctx.lr = 0x8215725C;
	sub_82165D10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157264"))) PPC_WEAK_FUNC(sub_82157264);
PPC_FUNC_IMPL(__imp__sub_82157264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157268"))) PPC_WEAK_FUNC(sub_82157268);
PPC_FUNC_IMPL(__imp__sub_82157268) {
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
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,16704
	ctx.r30.s64 = ctx.r11.s64 + 16704;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821572b0
	if (ctx.cr6.eq) goto loc_821572B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x821661c8
	ctx.lr = 0x821572A4;
	sub_821661C8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_821572B0:
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

__attribute__((alias("__imp__sub_821572C8"))) PPC_WEAK_FUNC(sub_821572C8);
PPC_FUNC_IMPL(__imp__sub_821572C8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fadds f13,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// fadds f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,14200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14200);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,3176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3176);
	// bl 0x8215b3b8
	ctx.lr = 0x82157364;
	sub_8215B3B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157374"))) PPC_WEAK_FUNC(sub_82157374);
PPC_FUNC_IMPL(__imp__sub_82157374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157378"))) PPC_WEAK_FUNC(sub_82157378);
PPC_FUNC_IMPL(__imp__sub_82157378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,3176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3176);
	// b 0x8215b3b8
	sub_8215B3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157398"))) PPC_WEAK_FUNC(sub_82157398);
PPC_FUNC_IMPL(__imp__sub_82157398) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821573c4
	if (ctx.cr6.lt) goto loc_821573C4;
	// beq cr6,0x82157410
	if (ctx.cr6.eq) goto loc_82157410;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82157458
	if (!ctx.cr6.lt) goto loc_82157458;
loc_821573C4:
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// rldicl r5,r11,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// rlwinm r6,r11,28,20,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFF0;
	// rlwinm r9,r5,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xF;
	// rlwinm r10,r5,28,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFF0;
	// rlwinm r7,r11,16,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// clrlwi r9,r11,20
	ctx.r9.u64 = ctx.r11.u32 & 0xFFF;
	// clrlwi r6,r5,20
	ctx.r6.u64 = ctx.r5.u32 & 0xFFF;
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// addi r3,r8,-27872
	ctx.r3.s64 = ctx.r8.s64 + -27872;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82157434
	goto loc_82157434;
loc_82157410:
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r3,r10,-27872
	ctx.r3.s64 = ctx.r10.s64 + -27872;
	// bl 0x821537b8
	ctx.lr = 0x82157420;
	sub_821537B8(ctx, base);
	// b 0x82157458
	goto loc_82157458;
loc_82157424:
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8215743c
	if (ctx.cr6.eq) goto loc_8215743C;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_82157434:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82157424
	if (!ctx.cr6.eq) goto loc_82157424;
loc_8215743C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8215744c
	if (!ctx.cr6.eq) goto loc_8215744C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82157458
	goto loc_82157458;
loc_8215744C:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82168aa8
	ctx.lr = 0x82157454;
	sub_82168AA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82157458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157468"))) PPC_WEAK_FUNC(sub_82157468);
PPC_FUNC_IMPL(__imp__sub_82157468) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lhz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821574e4
	if (ctx.cr6.lt) goto loc_821574E4;
	// bne cr6,0x82157544
	if (!ctx.cr6.eq) goto loc_82157544;
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r10,r11,-27872
	ctx.r10.s64 = ctx.r11.s64 + -27872;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r11,-27872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27872);
	// addi r10,r10,-32680
	ctx.r10.s64 = ctx.r10.s64 + -32680;
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82157510
	if (ctx.cr6.eq) goto loc_82157510;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157544
	if (ctx.cr6.eq) goto loc_82157544;
	// stw r3,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r3.u32);
	// lwz r5,52(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x821788d0
	ctx.lr = 0x821574E0;
	sub_821788D0(ctx, base);
	// b 0x8215755c
	goto loc_8215755C;
loc_821574E4:
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// addi r10,r11,-27872
	ctx.r10.s64 = ctx.r11.s64 + -27872;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r11,-27872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27872);
	// addi r10,r10,-32692
	ctx.r10.s64 = ctx.r10.s64 + -32692;
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82157528
	if (!ctx.cr6.eq) goto loc_82157528;
loc_82157510:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,13088
	ctx.r5.s64 = ctx.r11.s64 + 13088;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82157524;
	sub_82BCAC98(ctx, base);
	// b 0x82157544
	goto loc_82157544;
loc_82157528:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215754c
	if (!ctx.cr6.eq) goto loc_8215754C;
loc_82157544:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215755c
	goto loc_8215755C;
loc_8215754C:
	// stw r3,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r3.u32);
	// lwz r5,52(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x82177d60
	ctx.lr = 0x8215755C;
	sub_82177D60(ctx, base);
loc_8215755C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215756C"))) PPC_WEAK_FUNC(sub_8215756C);
PPC_FUNC_IMPL(__imp__sub_8215756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157570"))) PPC_WEAK_FUNC(sub_82157570);
PPC_FUNC_IMPL(__imp__sub_82157570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82157578;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,14200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,2944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// beq cr6,0x82157670
	if (ctx.cr6.eq) goto loc_82157670;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821575c0
	if (!ctx.cr6.eq) goto loc_821575C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215cdb0
	ctx.lr = 0x821575BC;
	sub_8215CDB0(ctx, base);
	// stw r3,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r3.u32);
loc_821575C0:
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// lwz r28,3160(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,-27872
	ctx.r31.s64 = ctx.r11.s64 + -27872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82168708
	ctx.lr = 0x821575D8;
	sub_82168708(ctx, base);
	// lwz r11,14200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14200);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,7104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// lwz r29,56(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mulli r10,r9,3552
	ctx.r10.s64 = ctx.r9.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,2944(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2944);
	// bl 0x821688b8
	ctx.lr = 0x82157600;
	sub_821688B8(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82157634
	if (ctx.cr6.eq) goto loc_82157634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821687e0
	ctx.lr = 0x82157624;
	sub_821687E0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r30,3
	ctx.r30.s64 = 3;
	// lis r5,12288
	ctx.r5.s64 = 805306368;
	// b 0x82157638
	goto loc_82157638;
loc_82157634:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
loc_82157638:
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// bl 0x82178120
	ctx.lr = 0x82157648;
	sub_82178120(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82157664
	if (ctx.cr6.eq) goto loc_82157664;
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822195b8
	ctx.lr = 0x82157664;
	sub_822195B8(ctx, base);
loc_82157664:
	// stw r23,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r23.u32);
	// sth r30,28(r28)
	PPC_STORE_U16(ctx.r28.u32 + 28, ctx.r30.u16);
	// b 0x821577dc
	goto loc_821577DC;
loc_82157670:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82157684
	if (!ctx.cr6.eq) goto loc_82157684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215cdb0
	ctx.lr = 0x82157680;
	sub_8215CDB0(ctx, base);
	// stw r3,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r3.u32);
loc_82157684:
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r24,3160(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r25,r11,-27872
	ctx.r25.s64 = ctx.r11.s64 + -27872;
	// beq cr6,0x821576f0
	if (ctx.cr6.eq) goto loc_821576F0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// subf r27,r30,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r30,r30,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_821576BC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82168708
	ctx.lr = 0x821576C8;
	sub_82168708(ctx, base);
	// stwx r3,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r3.u32);
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bge cr6,0x821576e0
	if (!ctx.cr6.lt) goto loc_821576E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
loc_821576E0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821576bc
	if (ctx.cr6.lt) goto loc_821576BC;
loc_821576F0:
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// bl 0x82178120
	ctx.lr = 0x82157704;
	sub_82178120(ctx, base);
	// stw r3,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82157720
	if (ctx.cr6.eq) goto loc_82157720;
	// addi r3,r24,12
	ctx.r3.s64 = ctx.r24.s64 + 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822195b8
	ctx.lr = 0x82157720;
	sub_822195B8(ctx, base);
loc_82157720:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// sth r28,28(r24)
	PPC_STORE_U16(ctx.r24.u32 + 28, ctx.r28.u16);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821577d8
	if (ctx.cr6.eq) goto loc_821577D8;
	// lhz r11,10(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821577d4
	if (!ctx.cr0.eq) goto loc_821577D4;
	// ld r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// addi r7,r25,16396
	ctx.r7.s64 = ctx.r25.s64 + 16396;
	// rldicl r6,r4,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// rlwinm r8,r4,16,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xF;
	// rlwinm r10,r6,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// rlwinm r9,r4,28,20,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFF0;
	// rlwinm r11,r6,28,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r4,20
	ctx.r10.u64 = ctx.r4.u32 & 0xFFF;
	// clrlwi r8,r6,20
	ctx.r8.u64 = ctx.r6.u32 & 0xFFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x82157790
	goto loc_82157790;
loc_82157780:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x8215779c
	if (ctx.cr6.eq) goto loc_8215779C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82157790:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82157780
	if (!ctx.cr6.eq) goto loc_82157780;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8215779C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821577b4
	if (!ctx.cr6.eq) goto loc_821577B4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82168990
	ctx.lr = 0x821577B0;
	sub_82168990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821577B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821577d8
	if (ctx.cr6.eq) goto loc_821577D8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82178a08
	ctx.lr = 0x821577D0;
	sub_82178A08(ctx, base);
	// b 0x821577d8
	goto loc_821577D8;
loc_821577D4:
	// lwz r31,40(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
loc_821577D8:
	// stw r31,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r31.u32);
loc_821577DC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821577E4"))) PPC_WEAK_FUNC(sub_821577E4);
PPC_FUNC_IMPL(__imp__sub_821577E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821577E8"))) PPC_WEAK_FUNC(sub_821577E8);
PPC_FUNC_IMPL(__imp__sub_821577E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,2944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2944, ctx.r3.u32);
	// stw r4,2948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2948, ctx.r4.u32);
	// stw r5,2952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2952, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215780C"))) PPC_WEAK_FUNC(sub_8215780C);
PPC_FUNC_IMPL(__imp__sub_8215780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157810"))) PPC_WEAK_FUNC(sub_82157810);
PPC_FUNC_IMPL(__imp__sub_82157810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82157818;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,14200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82157860
	if (!ctx.cr6.eq) goto loc_82157860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215cdb0
	ctx.lr = 0x8215785C;
	sub_8215CDB0(ctx, base);
	// stw r3,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r3.u32);
loc_82157860:
	// lwz r31,3160(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821580d0
	ctx.lr = 0x82157870;
	sub_821580D0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157880
	if (ctx.cr6.eq) goto loc_82157880;
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82157880:
	// li r11,4
	ctx.r11.s64 = 4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8215789c
	if (ctx.cr6.eq) goto loc_8215789C;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x821578a0
	if (!ctx.cr6.eq) goto loc_821578A0;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x821578a0
	goto loc_821578A0;
loc_8215789C:
	// li r11,4
	ctx.r11.s64 = 4;
loc_821578A0:
	// add r10,r29,r27
	ctx.r10.u64 = ctx.r29.u64 + ctx.r27.u64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r26,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r26.u32);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// stw r25,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r25.u32);
	// stw r24,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r24.u32);
	// stw r28,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
	// lwz r11,14200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82177930
	ctx.lr = 0x821578D0;
	sub_82177930(ctx, base);
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
	// lwz r11,14200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82153498
	ctx.lr = 0x821578E8;
	sub_82153498(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821578F0"))) PPC_WEAK_FUNC(sub_821578F0);
PPC_FUNC_IMPL(__imp__sub_821578F0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,3408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3408);
	// beq cr6,0x8215794c
	if (ctx.cr6.eq) goto loc_8215794C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8215795c
	if (!ctx.cr6.lt) goto loc_8215795C;
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r3,r11,3180
	ctx.r3.s64 = ctx.r11.s64 + 3180;
	// bl 0x82219130
	ctx.lr = 0x82157940;
	sub_82219130(ctx, base);
	// lwz r11,3408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82157958
	goto loc_82157958;
loc_8215794C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215795c
	if (ctx.cr6.eq) goto loc_8215795C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82157958:
	// stw r11,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r11.u32);
loc_8215795C:
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

__attribute__((alias("__imp__sub_82157970"))) PPC_WEAK_FUNC(sub_82157970);
PPC_FUNC_IMPL(__imp__sub_82157970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x821579a4
	if (ctx.cr6.eq) goto loc_821579A4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,3412
	ctx.r3.s64 = ctx.r11.s64 + 3412;
	// stw r10,3436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3436, ctx.r10.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// b 0x82219130
	sub_82219130(ctx, base);
	return;
loc_821579A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,3436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3436, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821579B0"))) PPC_WEAK_FUNC(sub_821579B0);
PPC_FUNC_IMPL(__imp__sub_821579B0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82157a04
	if (ctx.cr6.eq) goto loc_82157A04;
	// addi r3,r31,3128
	ctx.r3.s64 = ctx.r31.s64 + 3128;
	// bl 0x821607b8
	ctx.lr = 0x821579EC;
	sub_821607B8(ctx, base);
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x821579F8;
	sub_82219130(ctx, base);
	// lwz r11,3140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3140);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82157a08
	goto loc_82157A08;
loc_82157A04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82157A08:
	// stw r11,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82157A24"))) PPC_WEAK_FUNC(sub_82157A24);
PPC_FUNC_IMPL(__imp__sub_82157A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157A28"))) PPC_WEAK_FUNC(sub_82157A28);
PPC_FUNC_IMPL(__imp__sub_82157A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82157A30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82157a84
	if (ctx.cr6.eq) goto loc_82157A84;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,14200(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14200);
	// addi r10,r8,7136
	ctx.r10.s64 = ctx.r8.s64 + 7136;
loc_82157A50:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82157a68
	if (ctx.cr6.eq) goto loc_82157A68;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82157a8c
	if (ctx.cr6.eq) goto loc_82157A8C;
loc_82157A68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82157a50
	if (ctx.cr6.lt) goto loc_82157A50;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82157A7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82157a9c
	if (!ctx.cr6.eq) goto loc_82157A9C;
loc_82157A84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82157b3c
	goto loc_82157B3C;
loc_82157A8C:
	// addi r11,r11,1784
	ctx.r11.s64 = ctx.r11.s64 + 1784;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x82157a7c
	goto loc_82157A7C;
loc_82157A9C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82157ac4
	if (!ctx.cr6.lt) goto loc_82157AC4;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82157ac8
	if (!ctx.cr6.eq) goto loc_82157AC8;
loc_82157AC4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82157AC8:
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r3,14188(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14188);
	// bl 0x8215aee8
	ctx.lr = 0x82157AD4;
	sub_8215AEE8(ctx, base);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157b28
	if (ctx.cr6.eq) goto loc_82157B28;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82c0a13c
	ctx.lr = 0x82157AF0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82157b04
	if (!ctx.cr6.eq) goto loc_82157B04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2476);
	// b 0x82157b0c
	goto loc_82157B0C;
loc_82157B04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2500);
loc_82157B0C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82157b28
	if (ctx.cr6.eq) goto loc_82157B28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x8219f990
	ctx.lr = 0x82157B28;
	sub_8219F990(ctx, base);
loc_82157B28:
	// lwz r3,14188(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14188);
	// bl 0x8215af68
	ctx.lr = 0x82157B30;
	sub_8215AF68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c0d678
	ctx.lr = 0x82157B38;
	sub_82C0D678(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82157B3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157B44"))) PPC_WEAK_FUNC(sub_82157B44);
PPC_FUNC_IMPL(__imp__sub_82157B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157B48"))) PPC_WEAK_FUNC(sub_82157B48);
PPC_FUNC_IMPL(__imp__sub_82157B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82157B50;
	__savegprlr_20(ctx, base);
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f29.u64);
	// stfd f30,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,14200(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
	// addi r28,r10,20
	ctx.r28.s64 = ctx.r10.s64 + 20;
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82157ba4
	if (!ctx.cr6.eq) goto loc_82157BA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215cdb0
	ctx.lr = 0x82157BA0;
	sub_8215CDB0(ctx, base);
	// stw r3,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r3.u32);
loc_82157BA4:
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// lwz r31,3160(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r26,r11,-27872
	ctx.r26.s64 = ctx.r11.s64 + -27872;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// addis r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 65536;
	// addi r10,r11,-32692
	ctx.r10.s64 = ctx.r11.s64 + -32692;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82157bf8
	if (!ctx.cr6.eq) goto loc_82157BF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,13088
	ctx.r5.s64 = ctx.r11.s64 + 13088;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82157BF0;
	sub_82BCAC98(ctx, base);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x82157c0c
	goto loc_82157C0C;
loc_82157BF8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r27,r8,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82157C0C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r22,0(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwa r21,4(r30)
	ctx.r21.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 4));
	// lwz r11,14188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14188);
	// lfs f31,29760(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// li r10,9
	ctx.r10.s64 = 9;
	// lwa r20,8(r30)
	ctx.r20.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r10.u8);
	// sth r25,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r25.u16);
	// sth r25,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r25.u16);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// sth r25,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r25.u16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f30,f31,f13
	ctx.f30.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fdivs f29,f31,f0
	ctx.f29.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// bl 0x82177d60
	ctx.lr = 0x82157C80;
	sub_82177D60(ctx, base);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,-4368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4368);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fsubs f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f8,f31,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lfs f7,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// fsubs f9,f31,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fsubs f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f31,32(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmadds f9,f8,f7,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmsubs f9,f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f31.f64));
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmadds f10,f9,f10,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fnmsubs f10,f10,f13,f31
	ctx.f10.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f31.f64)));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f12,f10,f9,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmsubs f12,f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f31.f64));
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fmadds f0,f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fnmsubs f0,f0,f13,f31
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f31.f64)));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// ld r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x82157de0
	if (ctx.cr6.eq) goto loc_82157DE0;
	// lwz r3,36(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x821a0818
	ctx.lr = 0x82157DE0;
	sub_821A0818(ctx, base);
loc_82157DE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r10,5344
	ctx.r3.s64 = ctx.r10.s64 + 5344;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82178120
	ctx.lr = 0x82157E04;
	sub_82178120(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r12,-169
	ctx.r12.s64 = -11075584;
	// ori r11,r11,32804
	ctx.r11.u64 = ctx.r11.u64 | 32804;
	// ori r12,r12,65528
	ctx.r12.u64 = ctx.r12.u64 | 65528;
	// addi r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 + 28;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// oris r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 4294901760;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ori r12,r12,12799
	ctx.r12.u64 = ctx.r12.u64 | 12799;
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// rldimi r11,r8,51,12
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u64, 51) & 0x8000000000000) | (ctx.r11.u64 & 0xFFF7FFFFFFFFFFFF);
	// ori r11,r11,12736
	ctx.r11.u64 = ctx.r11.u64 | 12736;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_82157E78:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,1161
	ctx.r8.s64 = 1161;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r11,r8,4,16,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0xFFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFF000F);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82157e78
	if (!ctx.cr0.eq) goto loc_82157E78;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,14200(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r25,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r25.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// addi r9,r24,9
	ctx.r9.s64 = ctx.r24.s64 + 9;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// stw r25,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r25.u32);
	// stw r25,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r25.u32);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 348, ctx.r9.u32);
	// bge cr6,0x82157ee8
	if (!ctx.cr6.lt) goto loc_82157EE8;
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r24.u32);
loc_82157EE8:
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82153498
	ctx.lr = 0x82157EF8;
	sub_82153498(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82157F0C"))) PPC_WEAK_FUNC(sub_82157F0C);
PPC_FUNC_IMPL(__imp__sub_82157F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157F10"))) PPC_WEAK_FUNC(sub_82157F10);
PPC_FUNC_IMPL(__imp__sub_82157F10) {
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
	// beq cr6,0x82157f68
	if (ctx.cr6.eq) goto loc_82157F68;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,14200(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14200);
	// addi r10,r6,7136
	ctx.r10.s64 = ctx.r6.s64 + 7136;
loc_82157F34:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82157f4c
	if (ctx.cr6.eq) goto loc_82157F4C;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82157f70
	if (ctx.cr6.eq) goto loc_82157F70;
loc_82157F4C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82157f34
	if (ctx.cr6.lt) goto loc_82157F34;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82157F60:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82157f80
	if (!ctx.cr6.eq) goto loc_82157F80;
loc_82157F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821580c0
	goto loc_821580C0;
loc_82157F70:
	// addi r11,r11,1784
	ctx.r11.s64 = ctx.r11.s64 + 1784;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// b 0x82157f60
	goto loc_82157F60;
loc_82157F80:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82158058
	if (!ctx.cr6.gt) goto loc_82158058;
	// addi r9,r3,124
	ctx.r9.s64 = ctx.r3.s64 + 124;
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82157F98:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r8,-12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157fc4
	if (ctx.cr6.eq) goto loc_82157FC4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82157FB4:
	// dcbst r0,r8
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bne 0x82157fb4
	if (!ctx.cr0.eq) goto loc_82157FB4;
loc_82157FC4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157ff0
	if (ctx.cr6.eq) goto loc_82157FF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82157FE0:
	// dcbst r0,r8
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bne 0x82157fe0
	if (!ctx.cr0.eq) goto loc_82157FE0;
loc_82157FF0:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215801c
	if (ctx.cr6.eq) goto loc_8215801C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8215800C:
	// dcbst r0,r8
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bne 0x8215800c
	if (!ctx.cr0.eq) goto loc_8215800C;
loc_8215801C:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82158048
	if (ctx.cr6.eq) goto loc_82158048;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82158038:
	// dcbst r0,r8
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bne 0x82158038
	if (!ctx.cr0.eq) goto loc_82158038;
loc_82158048:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// bne 0x82157f98
	if (!ctx.cr0.eq) goto loc_82157F98;
loc_82158058:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x821580b4
	if (ctx.cr6.eq) goto loc_821580B4;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// lwz r10,7104(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7104);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bge cr6,0x821580bc
	if (!ctx.cr6.lt) goto loc_821580BC;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r5,218
	ctx.r4.s64 = ctx.r5.s64 + 218;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,3492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3492, ctx.r7.u32);
	// stwx r6,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r6.u32);
	// stw r8,3496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3496, ctx.r8.u32);
	// stw r9,3500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3500, ctx.r9.u32);
	// b 0x821580bc
	goto loc_821580BC;
loc_821580B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82157b48
	ctx.lr = 0x821580BC;
	sub_82157B48(ctx, base);
loc_821580BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821580C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821580D0"))) PPC_WEAK_FUNC(sub_821580D0);
PPC_FUNC_IMPL(__imp__sub_821580D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x821580D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,12728(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12728);
	// lwz r31,14200(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
	// lwz r11,224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82158190
	if (ctx.cr6.eq) goto loc_82158190;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82158114
	if (!ctx.cr0.eq) goto loc_82158114;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82158120
	if (ctx.cr0.eq) goto loc_82158120;
loc_82158114:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82158120:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82158190
	if (ctx.cr0.eq) goto loc_82158190;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r11,19(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8215814c
	if (ctx.cr0.eq) goto loc_8215814C;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_8215814C:
	// stb r11,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r11.u8);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// sth r11,46(r30)
	PPC_STORE_U16(ctx.r30.u32 + 46, ctx.r11.u16);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,3100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82158190
	if (ctx.cr6.eq) goto loc_82158190;
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,3100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	// sth r11,48(r30)
	PPC_STORE_U16(ctx.r30.u32 + 48, ctx.r11.u16);
loc_82158190:
	// lha r8,3750(r29)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 3750));
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// rlwimi r9,r8,8,19,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x1F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE0FF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r9,3784(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3784);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r7,r9,5,24,26
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0xE0) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFF1F);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,2892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2892);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,30(r30)
	PPC_STORE_U16(ctx.r30.u32 + 30, ctx.r11.u16);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,2876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2876);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sth r11,36(r30)
	PPC_STORE_U16(ctx.r30.u32 + 36, ctx.r11.u16);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,2908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2908);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// sth r11,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r11.u16);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,2924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2924);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r11,34(r30)
	PPC_STORE_U16(ctx.r30.u32 + 34, ctx.r11.u16);
	// lwz r11,232(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215824c
	if (ctx.cr6.eq) goto loc_8215824C;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215824c
	if (ctx.cr6.eq) goto loc_8215824C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82161918
	ctx.lr = 0x8215824C;
	sub_82161918(ctx, base);
loc_8215824C:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158264
	if (ctx.cr0.eq) goto loc_82158264;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82158264:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// lis r12,-505
	ctx.r12.s64 = -33095680;
	// ld r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 64);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r11,r11,37
	ctx.r11.s64 = ctx.r11.s64 + 37;
	// rldimi r10,r11,19,39
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u64, 19) & 0x1F80000) | (ctx.r10.u64 & 0xFFFFFFFFFE07FFFF);
	// std r10,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r10.u64);
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821582ac
	if (ctx.cr0.eq) goto loc_821582AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821582b4
	goto loc_821582B4;
loc_821582AC:
	// rlwinm r11,r11,21,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_821582B4:
	// li r12,-8
	ctx.r12.s64 = -8;
	// ld r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,-2
	ctx.r12.s64 = -2;
	// rldimi r10,r11,32,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0x700000000) | (ctx.r10.u64 & 0xFFFFFFF8FFFFFFFF);
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// std r10,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r10.u64);
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lbz r10,204(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 204);
	// rldimi r11,r10,55,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 55) & 0x80000000000000) | (ctx.r11.u64 & 0xFF7FFFFFFFFFFFFF);
	// std r11,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r11.u64);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,3012
	ctx.r10.s64 = ctx.r11.s64 + 3012;
	// lwz r10,3012(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3012);
	// stw r10,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r10.u32);
	// lwz r11,3016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3016);
	// stw r11,164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 164, ctx.r11.u32);
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215831c
	if (ctx.cr0.eq) goto loc_8215831C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82161880
	ctx.lr = 0x8215831C;
	sub_82161880(ctx, base);
loc_8215831C:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,3148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,3144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r26,3408(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3408);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82158420
	if (ctx.cr6.eq) goto loc_82158420;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82158374:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,3408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3408);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82158410
	if (!ctx.cr6.lt) goto loc_82158410;
	// add r11,r25,r10
	ctx.r11.u64 = ctx.r25.u64 + ctx.r10.u64;
	// addic. r28,r11,3180
	ctx.xer.ca = ctx.r11.u32 > 4294964115;
	ctx.r28.s64 = ctx.r11.s64 + 3180;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82158410
	if (ctx.cr0.eq) goto loc_82158410;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821583b0
	if (ctx.cr6.eq) goto loc_821583B0;
	// lha r9,3750(r29)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 3750));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82158410
	if (!ctx.cr6.eq) goto loc_82158410;
loc_821583B0:
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821583c8
	if (ctx.cr6.eq) goto loc_821583C8;
	// lwz r9,3784(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3784);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82158410
	if (!ctx.cr6.eq) goto loc_82158410;
loc_821583C8:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82158410
	if (!ctx.cr6.lt) goto loc_82158410;
	// addi r4,r11,21
	ctx.r4.s64 = ctx.r11.s64 + 21;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x821583E8;
	sub_82161310(ctx, base);
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82219130
	ctx.lr = 0x821583F4;
	sub_82219130(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,12728(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12728);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lwz r31,14200(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwimi r10,r11,0,16,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFCFFFF) | (ctx.r10.u64 & 0x30000);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82158410:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,76
	ctx.r25.s64 = ctx.r25.s64 + 76;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82158374
	if (ctx.cr6.lt) goto loc_82158374;
loc_82158420:
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r27,r11,28812
	ctx.r27.s64 = ctx.r11.s64 + 28812;
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8215845c
	if (ctx.cr6.eq) goto loc_8215845C;
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82158450;
	sub_82161310(ctx, base);
	// lwz r29,12728(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12728);
	// lwz r31,14200(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_8215845C:
	// lwz r11,204(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215849c
	if (ctx.cr0.eq) goto loc_8215849C;
	// lwz r28,12(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8215849c
	if (ctx.cr6.eq) goto loc_8215849C;
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82158490;
	sub_82161310(ctx, base);
	// lwz r29,12728(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12728);
	// lwz r31,14200(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
loc_8215849C:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,3152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821584d0
	if (ctx.cr6.eq) goto loc_821584D0;
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,2300(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2300);
	// lfs f1,3156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3156);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82152f10
	ctx.lr = 0x821584D0;
	sub_82152F10(ctx, base);
loc_821584D0:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r28,2944(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2944);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82158520
	if (ctx.cr6.eq) goto loc_82158520;
	// lwz r10,7104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r27,2948(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2948);
	// li r4,24
	ctx.r4.s64 = 24;
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// lwz r26,2952(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2952);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x8215850C;
	sub_82161310(ctx, base);
	// lwz r29,12728(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12728);
	// lwz r31,14200(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
loc_82158520:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r28,3036(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3036);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8215855c
	if (ctx.cr6.eq) goto loc_8215855C;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x82158548;
	sub_82161310(ctx, base);
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82219130
	ctx.lr = 0x82158554;
	sub_82219130(ctx, base);
	// lwz r29,12728(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12728);
	// lwz r31,14200(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
loc_8215855C:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,3436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3436);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,3412
	ctx.r10.s64 = ctx.r11.s64 + 3412;
	// bne cr6,0x8215857c
	if (!ctx.cr6.eq) goto loc_8215857C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8215857C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821585bc
	if (ctx.cr6.eq) goto loc_821585BC;
	// lwz r10,3436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3436);
	// addi r31,r11,3412
	ctx.r31.s64 = ctx.r11.s64 + 3412;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82158598
	if (!ctx.cr6.eq) goto loc_82158598;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82158598:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82161310
	ctx.lr = 0x821585A8;
	sub_82161310(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x821585B4;
	sub_82219130(ctx, base);
	// lwz r29,12728(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12728);
	// lwz r31,14200(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
loc_821585BC:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,3124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3124);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215860c
	if (ctx.cr6.eq) goto loc_8215860C;
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,3124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3124);
	// lwz r10,3128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3128);
	// mulli r11,r8,76
	ctx.r11.s64 = ctx.r8.s64 * 76;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82158608
	if (ctx.cr6.eq) goto loc_82158608;
	// lha r10,3750(r29)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 3750));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8215860c
	if (!ctx.cr6.eq) goto loc_8215860C;
loc_82158608:
	// sth r9,52(r30)
	PPC_STORE_U16(ctx.r30.u32 + 52, ctx.r9.u16);
loc_8215860C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158614"))) PPC_WEAK_FUNC(sub_82158614);
PPC_FUNC_IMPL(__imp__sub_82158614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158618"))) PPC_WEAK_FUNC(sub_82158618);
PPC_FUNC_IMPL(__imp__sub_82158618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82158630
	if (!ctx.cr6.eq) goto loc_82158630;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14236, ctx.r11.u32);
	// blr 
	return;
loc_82158630:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82158650
	if (ctx.cr6.gt) goto loc_82158650;
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
loc_82158650:
	// stfs f1,-28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x82158670
	if (ctx.cr6.gt) goto loc_82158670;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x82158674
	if (!ctx.cr6.lt) goto loc_82158674;
loc_82158670:
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
loc_82158674:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stfs f2,-20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// mulli r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 * 20;
	// stfs f3,-16(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lwz r8,7104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// mulli r8,r8,3552
	ctx.r8.s64 = ctx.r8.s64 * 3552;
	// stw r10,14236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 14236, ctx.r10.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1848
	ctx.r11.s64 = ctx.r11.s64 + 1848;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821586B4:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821586b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821586B4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821586CC"))) PPC_WEAK_FUNC(sub_821586CC);
PPC_FUNC_IMPL(__imp__sub_821586CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821586D0"))) PPC_WEAK_FUNC(sub_821586D0);
PPC_FUNC_IMPL(__imp__sub_821586D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x821586D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// addi r3,r11,492
	ctx.r3.s64 = ctx.r11.s64 + 492;
	// bl 0x82153c28
	ctx.lr = 0x821586FC;
	sub_82153C28(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r10,7104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82153640
	ctx.lr = 0x82158724;
	sub_82153640(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215872C"))) PPC_WEAK_FUNC(sub_8215872C);
PPC_FUNC_IMPL(__imp__sub_8215872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158730"))) PPC_WEAK_FUNC(sub_82158730);
PPC_FUNC_IMPL(__imp__sub_82158730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,14200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14200);
	// lwz r9,7104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7104);
	// mulli r9,r9,3552
	ctx.r9.s64 = ctx.r9.s64 * 3552;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r11,2648
	ctx.r9.s64 = ctx.r11.s64 + 2648;
	// stw r10,2648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2648, ctx.r10.u32);
	// stw r10,2652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2652, ctx.r10.u32);
	// stw r10,2656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2656, ctx.r10.u32);
	// stw r10,2660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2660, ctx.r10.u32);
	// stw r10,2644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2644, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82158764"))) PPC_WEAK_FUNC(sub_82158764);
PPC_FUNC_IMPL(__imp__sub_82158764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158768"))) PPC_WEAK_FUNC(sub_82158768);
PPC_FUNC_IMPL(__imp__sub_82158768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,14188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14188);
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821587a0
	if (ctx.cr6.eq) goto loc_821587A0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_821587A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821587A8"))) PPC_WEAK_FUNC(sub_821587A8);
PPC_FUNC_IMPL(__imp__sub_821587A8) {
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
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,29280
	ctx.r31.s64 = ctx.r11.s64 + 29280;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82158814
	if (ctx.cr6.eq) goto loc_82158814;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821587F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82158814
	if (ctx.cr6.eq) goto loc_82158814;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82158814:
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

__attribute__((alias("__imp__sub_82158828"))) PPC_WEAK_FUNC(sub_82158828);
PPC_FUNC_IMPL(__imp__sub_82158828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82158830;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82158860
	if (ctx.cr6.eq) goto loc_82158860;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82158868
	if (!ctx.cr0.eq) goto loc_82158868;
loc_82158860:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82158898
	goto loc_82158898;
loc_82158868:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82158874
	if (!ctx.cr6.gt) goto loc_82158874;
	// twi 31,r0,22
loc_82158874:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82158888
	if (ctx.cr6.eq) goto loc_82158888;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8215888c
	if (ctx.cr6.eq) goto loc_8215888C;
loc_82158888:
	// twi 31,r0,22
loc_8215888C:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
loc_82158898:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158908
	ctx.lr = 0x821588A4;
	sub_82158908(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821588b8
	if (!ctx.cr6.gt) goto loc_821588B8;
	// twi 31,r0,22
loc_821588B8:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bgt cr6,0x821588e8
	if (ctx.cr6.gt) goto loc_821588E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821588ec
	if (!ctx.cr6.lt) goto loc_821588EC;
loc_821588E8:
	// twi 31,r0,22
loc_821588EC:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158904"))) PPC_WEAK_FUNC(sub_82158904);
PPC_FUNC_IMPL(__imp__sub_82158904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158908"))) PPC_WEAK_FUNC(sub_82158908);
PPC_FUNC_IMPL(__imp__sub_82158908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82158910;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r4,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r4.u64);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82158938
	if (!ctx.cr6.eq) goto loc_82158938;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82158944
	goto loc_82158944;
loc_82158938:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
loc_82158944:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82158c38
	if (ctx.cr6.eq) goto loc_82158C38;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8215895c
	if (!ctx.cr6.eq) goto loc_8215895C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82158968
	goto loc_82158968;
loc_8215895C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82158968:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x821589c4
	if (!ctx.cr6.lt) goto loc_821589C4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14956
	ctx.r4.s64 = ctx.r11.s64 + 14956;
	// bl 0x82120d90
	ctx.lr = 0x8215898C;
	sub_82120D90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82121360
	ctx.lr = 0x82158998;
	sub_82121360(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,15020
	ctx.r31.s64 = ctx.r11.s64 + 15020;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x82121418
	ctx.lr = 0x821589AC;
	sub_82121418(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120c00
	ctx.lr = 0x821589B8;
	sub_82120C00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120cc8
	ctx.lr = 0x821589C0;
	sub_82120CC8(ctx, base);
	// b 0x82158c38
	goto loc_82158C38;
loc_821589C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821589d4
	if (!ctx.cr6.eq) goto loc_821589D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821589e0
	goto loc_821589E0;
loc_821589D4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_821589E0:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82158b2c
	if (!ctx.cr6.lt) goto loc_82158B2C;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82158a04
	if (ctx.cr6.lt) goto loc_82158A04;
	// add r26,r11,r8
	ctx.r26.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_82158A04:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82158a14
	if (!ctx.cr6.eq) goto loc_82158A14;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82158a20
	goto loc_82158A20;
loc_82158A14:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82158A20:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82158a4c
	if (!ctx.cr6.lt) goto loc_82158A4C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82158a3c
	if (!ctx.cr6.eq) goto loc_82158A3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82158a48
	goto loc_82158A48;
loc_82158A3C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82158A48:
	// add r26,r11,r27
	ctx.r26.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82158A4C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82158a64
	if (ctx.cr6.eq) goto loc_82158A64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8215fbd0
	ctx.lr = 0x82158A5C;
	sub_8215FBD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82158a68
	goto loc_82158A68;
loc_82158A64:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82158A68:
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r31,252(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r6,r29
	ctx.r30.u64 = ctx.r6.u64 + ctx.r29.u64;
	// beq 0x82158a90
	if (ctx.cr0.eq) goto loc_82158A90;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221b920
	ctx.lr = 0x82158A90;
	sub_8221B920(ctx, base);
loc_82158A90:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82158ab4
	if (ctx.cr6.eq) goto loc_82158AB4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x82158ab4
	if (ctx.cr0.eq) goto loc_82158AB4;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82158AA8:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82158aa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82158AA8;
loc_82158AB4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158adc
	if (ctx.cr0.eq) goto loc_82158ADC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8221b920
	ctx.lr = 0x82158ADC;
	sub_8221B920(ctx, base);
loc_82158ADC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82158af0
	if (!ctx.cr6.eq) goto loc_82158AF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82158afc
	goto loc_82158AFC;
loc_82158AF0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
loc_82158AFC:
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82158b0c
	if (ctx.cr6.eq) goto loc_82158B0C;
	// bl 0x82168ff0
	ctx.lr = 0x82158B0C;
	sub_82168FF0(ctx, base);
loc_82158B0C:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// b 0x82158c38
	goto loc_82158C38;
loc_82158B2C:
	// lwz r31,252(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82158bc4
	if (!ctx.cr6.lt) goto loc_82158BC4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82158b64
	if (ctx.cr0.eq) goto loc_82158B64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8221b920
	ctx.lr = 0x82158B64;
	sub_8221B920(ctx, base);
loc_82158B64:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf. r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158b90
	if (ctx.cr0.eq) goto loc_82158B90;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82158b90
	if (ctx.cr0.eq) goto loc_82158B90;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82158B84:
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82158b84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82158B84;
loc_82158B90:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82158c38
	if (ctx.cr6.eq) goto loc_82158C38;
loc_82158BB0:
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82158bb0
	if (!ctx.cr6.eq) goto loc_82158BB0;
	// b 0x82158c38
	goto loc_82158C38;
loc_82158BC4:
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r30,r27,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r27.s64;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r6,r3
	ctx.r26.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq 0x82158bf0
	if (ctx.cr0.eq) goto loc_82158BF0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8221b920
	ctx.lr = 0x82158BF0;
	sub_8221B920(ctx, base);
loc_82158BF0:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stw r26,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r26.u32);
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82158c18
	if (!ctx.cr0.gt) goto loc_82158C18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x8221b920
	ctx.lr = 0x82158C18;
	sub_8221B920(ctx, base);
loc_82158C18:
	// add r10,r27,r31
	ctx.r10.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82158c38
	if (ctx.cr6.eq) goto loc_82158C38;
loc_82158C28:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82158c28
	if (!ctx.cr6.eq) goto loc_82158C28;
loc_82158C38:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158C40"))) PPC_WEAK_FUNC(sub_82158C40);
PPC_FUNC_IMPL(__imp__sub_82158C40) {
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
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82158cc0
	if (!ctx.cr6.eq) goto loc_82158CC0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,1023
	ctx.r9.s64 = 67043328;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82158c88
	if (!ctx.cr6.gt) goto loc_82158C88;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82158C88:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82158C90;
	sub_82120040(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82219130
	ctx.lr = 0x82158CA4;
	sub_82219130(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82120a70
	ctx.lr = 0x82158CAC;
	sub_82120A70(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82158CC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82158CF0"))) PPC_WEAK_FUNC(sub_82158CF0);
PPC_FUNC_IMPL(__imp__sub_82158CF0) {
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
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82158d70
	if (!ctx.cr6.eq) goto loc_82158D70;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,1489
	ctx.r9.s64 = 97583104;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r9,r9,29789
	ctx.r9.u64 = ctx.r9.u64 | 29789;
	// mulli r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 * 44;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82158d38
	if (!ctx.cr6.gt) goto loc_82158D38;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82158D38:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x82158D40;
	sub_82120040(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mulli r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 * 44;
	// bl 0x82219130
	ctx.lr = 0x82158D54;
	sub_82219130(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82120a70
	ctx.lr = 0x82158D5C;
	sub_82120A70(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82158D70:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 * 44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82158DA0"))) PPC_WEAK_FUNC(sub_82158DA0);
PPC_FUNC_IMPL(__imp__sub_82158DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82158DA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158e5c
	if (ctx.cr0.eq) goto loc_82158E5C;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82158DC8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x821538a8
	ctx.lr = 0x82158DD4;
	sub_821538A8(ctx, base);
	// stw r29,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bge cr6,0x82158e3c
	if (!ctx.cr6.lt) goto loc_82158E3C;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// addi r31,r11,196
	ctx.r31.s64 = ctx.r11.s64 + 196;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82158e1c
	if (ctx.cr6.eq) goto loc_82158E1C;
	// bl 0x82120a70
	ctx.lr = 0x82158E18;
	sub_82120A70(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82158E1C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sth r29,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r29.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82158e34
	if (ctx.cr6.eq) goto loc_82158E34;
	// bl 0x82120a70
	ctx.lr = 0x82158E30;
	sub_82120A70(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82158E34:
	// sth r29,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r29.u16);
	// b 0x82158e44
	goto loc_82158E44;
loc_82158E3C:
	// stw r29,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r29.u32);
	// stw r29,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r29.u32);
loc_82158E44:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82158dc8
	if (ctx.cr6.lt) goto loc_82158DC8;
loc_82158E5C:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82158e70
	if (ctx.cr6.eq) goto loc_82158E70;
	// bl 0x82120a70
	ctx.lr = 0x82158E6C;
	sub_82120A70(ctx, base);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
loc_82158E70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158E78"))) PPC_WEAK_FUNC(sub_82158E78);
PPC_FUNC_IMPL(__imp__sub_82158E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82158E80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,12584
	ctx.r9.s64 = ctx.r11.s64 + 12584;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82158EA8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x82158ea8
	if (!ctx.cr0.lt) goto loc_82158EA8;
	// li r29,900
	ctx.r29.s64 = 900;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,50400
	ctx.r3.u64 = ctx.r3.u64 | 50400;
	// bl 0x82120040
	ctx.lr = 0x82158ED8;
	sub_82120040(ctx, base);
	// li r11,899
	ctx.r11.s64 = 899;
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82158EE4:
	// addi r9,r10,56
	ctx.r9.s64 = ctx.r10.s64 + 56;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne 0x82158ee4
	if (!ctx.cr0.eq) goto loc_82158EE4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,50344
	ctx.r11.u64 = ctx.r11.u64 | 50344;
	// stwx r30,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r30.u32);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// ori r3,r3,39600
	ctx.r3.u64 = ctx.r3.u64 | 39600;
	// bl 0x82120040
	ctx.lr = 0x82158F20;
	sub_82120040(ctx, base);
	// li r11,899
	ctx.r11.s64 = 899;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82158F2C:
	// addi r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 + 44;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne 0x82158f2c
	if (!ctx.cr0.eq) goto loc_82158F2C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,39556
	ctx.r11.u64 = ctx.r11.u64 | 39556;
	// stwx r30,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r30.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// ori r3,r3,24072
	ctx.r3.u64 = ctx.r3.u64 | 24072;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x82120040
	ctx.lr = 0x82158F94;
	sub_82120040(ctx, base);
	// li r29,8000
	ctx.r29.s64 = 8000;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82158fc4
	if (ctx.cr0.eq) goto loc_82158FC4;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// li r5,7999
	ctx.r5.s64 = 7999;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82158FB0:
	// bl 0x82161560
	ctx.lr = 0x82158FB4;
	sub_82161560(ctx, base);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// bge 0x82158fb0
	if (!ctx.cr0.lt) goto loc_82158FB0;
	// b 0x82158fc8
	goto loc_82158FC8;
loc_82158FC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82158FC8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
loc_82158FD0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r9,r9,23848
	ctx.r9.u64 = ctx.r9.u64 | 23848;
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// addi r8,r10,216
	ctx.r8.s64 = ctx.r10.s64 + 216;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 212, ctx.r8.u32);
	// blt cr6,0x82158fd0
	if (ctx.cr6.lt) goto loc_82158FD0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159014"))) PPC_WEAK_FUNC(sub_82159014);
PPC_FUNC_IMPL(__imp__sub_82159014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159018"))) PPC_WEAK_FUNC(sub_82159018);
PPC_FUNC_IMPL(__imp__sub_82159018) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82159084
	if (ctx.cr6.eq) goto loc_82159084;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// beq 0x82159084
	if (ctx.cr0.eq) goto loc_82159084;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// b 0x82159088
	goto loc_82159088;
loc_82159084:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82159088:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821590e8
	if (ctx.cr6.eq) goto loc_821590E8;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r10,14200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14200);
	// lwz r10,7116(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7116);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821590d4
	if (ctx.cr6.eq) goto loc_821590D4;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821590d8
	if (ctx.cr6.eq) goto loc_821590D8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x821590dc
	goto loc_821590DC;
loc_821590D4:
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_821590D8:
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_821590DC:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_821590E8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821590F0"))) PPC_WEAK_FUNC(sub_821590F0);
PPC_FUNC_IMPL(__imp__sub_821590F0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a0d8
	ctx.lr = 0x82159114;
	sub_8215A0D8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159130
	if (ctx.cr6.eq) goto loc_82159130;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82159144
	goto loc_82159144;
loc_82159130:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82159144
	if (!ctx.cr6.eq) goto loc_82159144;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82159144:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215915c
	if (ctx.cr6.eq) goto loc_8215915C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82159170
	goto loc_82159170;
loc_8215915C:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82159170
	if (!ctx.cr6.eq) goto loc_82159170;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82159170:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821591c8
	if (ctx.cr6.eq) goto loc_821591C8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821591cc
	if (ctx.cr6.eq) goto loc_821591CC;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// b 0x821591d0
	goto loc_821591D0;
loc_821591C8:
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_821591CC:
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
loc_821591D0:
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

__attribute__((alias("__imp__sub_821591E8"))) PPC_WEAK_FUNC(sub_821591E8);
PPC_FUNC_IMPL(__imp__sub_821591E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x821591F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// b 0x82159268
	goto loc_82159268;
loc_82159208:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x8215a0d8
	ctx.lr = 0x8215921C;
	sub_8215A0D8(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215925c
	if (ctx.cr6.eq) goto loc_8215925C;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159260
	if (ctx.cr6.eq) goto loc_82159260;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// b 0x82159264
	goto loc_82159264;
loc_8215925C:
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_82159260:
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
loc_82159264:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82159268:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215929c
	if (ctx.cr6.eq) goto loc_8215929C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82159288
	if (ctx.cr6.eq) goto loc_82159288;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x8215928c
	goto loc_8215928C;
loc_82159288:
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_8215928C:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bne cr6,0x82159208
	if (!ctx.cr6.eq) goto loc_82159208;
loc_8215929C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821592A4"))) PPC_WEAK_FUNC(sub_821592A4);
PPC_FUNC_IMPL(__imp__sub_821592A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821592A8"))) PPC_WEAK_FUNC(sub_821592A8);
PPC_FUNC_IMPL(__imp__sub_821592A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x821592B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82219130
	ctx.lr = 0x821592C8;
	sub_82219130(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r10,14200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14200);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lwz r26,7116(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7116);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215933c
	if (ctx.cr6.eq) goto loc_8215933C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82159330
	if (ctx.cr6.eq) goto loc_82159330;
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// b 0x82159334
	goto loc_82159334;
loc_82159330:
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
loc_82159334:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_8215933C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821593d8
	if (ctx.cr6.eq) goto loc_821593D8;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
loc_8215934C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159370
	if (ctx.cr6.eq) goto loc_82159370;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_82159370:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158da0
	ctx.lr = 0x82159378;
	sub_82158DA0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821593d8
	if (ctx.cr6.eq) goto loc_821593D8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x821593c4
	if (ctx.cr6.eq) goto loc_821593C4;
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// b 0x821593c8
	goto loc_821593C8;
loc_821593C4:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_821593C8:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// bne cr6,0x8215934c
	if (!ctx.cr6.eq) goto loc_8215934C;
loc_821593D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x821593f0
	if (ctx.cr6.lt) goto loc_821593F0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821594f0
	if (!ctx.cr6.lt) goto loc_821594F0;
loc_821593F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x82159400
	if (ctx.cr6.lt) goto loc_82159400;
	// li r11,100
	ctx.r11.s64 = 100;
loc_82159400:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821594f0
	if (ctx.cr6.eq) goto loc_821594F0;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82159410:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82159440
	if (ctx.cr6.eq) goto loc_82159440;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82159434
	if (ctx.cr6.eq) goto loc_82159434;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82159438
	goto loc_82159438;
loc_82159434:
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_82159438:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_82159440:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x821594b0
	if (!ctx.cr6.lt) goto loc_821594B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215a0d8
	ctx.lr = 0x82159458;
	sub_8215A0D8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215947c
	if (ctx.cr6.eq) goto loc_8215947C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8215947C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158da0
	ctx.lr = 0x82159484;
	sub_82158DA0(ctx, base);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x821594e8
	goto loc_821594E8;
loc_821594B0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821594e0
	if (ctx.cr6.eq) goto loc_821594E0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821594e4
	if (ctx.cr6.eq) goto loc_821594E4;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// b 0x821594e8
	goto loc_821594E8;
loc_821594E0:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_821594E4:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
loc_821594E8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82159410
	if (!ctx.cr0.eq) goto loc_82159410;
loc_821594F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821594F8"))) PPC_WEAK_FUNC(sub_821594F8);
PPC_FUNC_IMPL(__imp__sub_821594F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82159500;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82159524
	if (ctx.cr6.eq) goto loc_82159524;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// b 0x82159528
	goto loc_82159528;
loc_82159524:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82159528:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159c88
	if (ctx.cr6.eq) goto loc_82159C88;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82159554
	if (ctx.cr0.eq) goto loc_82159554;
	// lbz r10,18(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 18);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stb r10,18(r24)
	PPC_STORE_U8(ctx.r24.u32 + 18, ctx.r10.u8);
	// b 0x82159560
	goto loc_82159560;
loc_82159554:
	// lbz r10,18(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 18);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82159c7c
	if (ctx.cr0.eq) goto loc_82159C7C;
loc_82159560:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82159c68
	if (!ctx.cr0.eq) goto loc_82159C68;
	// lis r19,-31942
	ctx.r19.s64 = -2093350912;
	// lis r18,-31942
	ctx.r18.s64 = -2093350912;
	// lis r12,32
	ctx.r12.s64 = 2097152;
	// li r14,1
	ctx.r14.s64 = 1;
	// ori r12,r12,1026
	ctx.r12.u64 = ctx.r12.u64 | 1026;
	// lwz r25,12728(r19)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12728);
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// lwz r30,14200(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14200);
	// lwz r11,208(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// and. r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821595e4
	if (!ctx.cr0.eq) goto loc_821595E4;
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,3436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3436);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,3412
	ctx.r10.s64 = ctx.r11.s64 + 3412;
	// bne cr6,0x821595b4
	if (!ctx.cr6.eq) goto loc_821595B4;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_821595B4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821595e4
	if (!ctx.cr6.eq) goto loc_821595E4;
	// lwz r10,3408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3408);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821595d0
	if (!ctx.cr6.gt) goto loc_821595D0;
	// addic. r11,r11,3180
	ctx.xer.ca = ctx.r11.u32 > 4294964115;
	ctx.r11.s64 = ctx.r11.s64 + 3180;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821595e4
	if (!ctx.cr0.eq) goto loc_821595E4;
loc_821595D0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821595e4
	if (!ctx.cr0.eq) goto loc_821595E4;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// b 0x821595f4
	goto loc_821595F4;
loc_821595E4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_821595F4:
	// lwz r11,208(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82159650
	if (ctx.cr0.eq) goto loc_82159650;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,3760(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 3760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4400(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4400);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8215963c
	if (ctx.cr6.gt) goto loc_8215963C;
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,3160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82159630
	if (ctx.cr6.eq) goto loc_82159630;
	// stw r17,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r17.u32);
loc_82159630:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r17,3160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3160, ctx.r17.u32);
	// b 0x82159c8c
	goto loc_82159C8C;
loc_8215963C:
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// lfs f13,28848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28848);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82159650
	if (!ctx.cr6.lt) goto loc_82159650;
	// mr r15,r14
	ctx.r15.u64 = ctx.r14.u64;
loc_82159650:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82159668
	if (ctx.cr6.eq) goto loc_82159668;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x82159c88
	goto loc_82159C88;
loc_82159668:
	// lwz r27,40(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82159c0c
	if (ctx.cr6.eq) goto loc_82159C0C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r29,7116(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7116);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821596b8
	if (!ctx.cr6.eq) goto loc_821596B8;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_821596B0:
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// b 0x821596e0
	goto loc_821596E0;
loc_821596B8:
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,2300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821596b0
	if (!ctx.cr6.eq) goto loc_821596B0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x821596b0
	if (!ctx.cr6.eq) goto loc_821596B0;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// stw r29,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r29.u32);
loc_821596E0:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// rlwinm. r5,r11,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
	// beq 0x82159744
	if (ctx.cr0.eq) goto loc_82159744;
	// addi r7,r27,40
	ctx.r7.s64 = ctx.r27.s64 + 40;
loc_821596FC:
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8215ea80
	ctx.lr = 0x82159710;
	sub_8215EA80(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821597ac
	if (ctx.cr6.eq) goto loc_821597AC;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// rlwinm r11,r11,7,4,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFF80;
	// addis r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 268435456;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
	// blt cr6,0x821596fc
	if (ctx.cr6.lt) goto loc_821596FC;
loc_82159744:
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mullw r20,r9,r10
	ctx.r20.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r28,r20,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// dcbt r0,r11
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215981c
	if (ctx.cr0.eq) goto loc_8215981C;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821597b8
	if (ctx.cr6.eq) goto loc_821597B8;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r8,7104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// addi r10,r11,8032
	ctx.r10.s64 = ctx.r11.s64 + 8032;
	// mulli r11,r8,3552
	ctx.r11.s64 = ctx.r8.s64 * 3552;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lbz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 60);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 * 36;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821597e4
	goto loc_821597E4;
loc_821597AC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82159fb8
	ctx.lr = 0x821597B4;
	sub_82159FB8(ctx, base);
	// b 0x82159c88
	goto loc_82159C88;
loc_821597B8:
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lwz r11,5580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5580);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821597f4
	if (ctx.cr6.eq) goto loc_821597F4;
	// lwz r8,7104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// mulli r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 * 36;
	// addi r9,r9,8032
	ctx.r9.s64 = ctx.r9.s64 + 8032;
	// mulli r11,r8,3552
	ctx.r11.s64 = ctx.r8.s64 * 3552;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_821597E4:
	// bl 0x8215f3e0
	ctx.lr = 0x821597E8;
	sub_8215F3E0(ctx, base);
	// lwz r25,12728(r19)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12728);
	// lwz r30,14200(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14200);
	// b 0x8215981c
	goto loc_8215981C;
loc_821597F4:
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,3032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3032);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215981c
	if (ctx.cr6.eq) goto loc_8215981C;
	// stw r17,3032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3032, ctx.r17.u32);
	// stw r17,3040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3040, ctx.r17.u32);
	// stw r17,3044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3044, ctx.r17.u32);
	// stw r17,3048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3048, ctx.r17.u32);
loc_8215981C:
	// lwz r29,24(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82159864
	if (ctx.cr6.eq) goto loc_82159864;
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r31,3052
	ctx.r3.s64 = ctx.r31.s64 + 3052;
	// bl 0x82158cf0
	ctx.lr = 0x82159840;
	sub_82158CF0(ctx, base);
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x8215984C;
	sub_82219130(ctx, base);
	// lwz r11,3064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3064);
	// lwz r25,12728(r19)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12728);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r30,14200(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14200);
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82159864:
	// lwz r4,28(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8215988c
	if (ctx.cr6.eq) goto loc_8215988C;
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8215f170
	ctx.lr = 0x82159884;
	sub_8215F170(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821597ac
	if (ctx.cr6.eq) goto loc_821597AC;
loc_8215988C:
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r21,2300(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2300);
	// beq cr6,0x821598d8
	if (ctx.cr6.eq) goto loc_821598D8;
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
loc_821598B4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// dcbt r0,r8
	// li r6,128
	ctx.r6.s64 = 128;
	// dcbt r6,r8
	// li r6,215
	ctx.r6.s64 = 215;
	// dcbt r6,r8
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x821598b4
	if (!ctx.cr0.eq) goto loc_821598B4;
loc_821598D8:
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82159c04
	if (ctx.cr6.eq) goto loc_82159C04;
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r23,r7,16
	ctx.r23.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r22,r3,16
	ctx.r22.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// b 0x82159904
	goto loc_82159904;
loc_821598FC:
	// lwz r25,12728(r19)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12728);
	// lwz r30,14200(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14200);
loc_82159904:
	// add r11,r26,r20
	ctx.r11.u64 = ctx.r26.u64 + ctx.r20.u64;
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x821599f4
	if (ctx.cr6.eq) goto loc_821599F4;
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,3160(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82159948
	if (!ctx.cr6.eq) goto loc_82159948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8215cdb0
	ctx.lr = 0x8215993C;
	sub_8215CDB0(ctx, base);
	// lwz r25,12728(r19)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12728);
	// lwz r30,14200(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14200);
	// stw r3,3160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3160, ctx.r3.u32);
loc_82159948:
	// lwz r29,3160(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3160);
	// li r5,216
	ctx.r5.s64 = 216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x8215995C;
	sub_82219130(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// beq cr6,0x821599bc
	if (ctx.cr6.eq) goto loc_821599BC;
	// li r12,-32
	ctx.r12.s64 = -32;
	// ld r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 64);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,-32
	ctx.r12.s64 = -32;
	// std r11,64(r29)
	PPC_STORE_U64(ctx.r29.u32 + 64, ctx.r11.u64);
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,64(r29)
	PPC_STORE_U64(ctx.r29.u32 + 64, ctx.r11.u64);
	// bne cr6,0x821599c4
	if (!ctx.cr6.eq) goto loc_821599C4;
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821599b4
	if (!ctx.cr6.eq) goto loc_821599B4;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x821599f0
	goto loc_821599F0;
loc_821599B4:
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r11,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r11.u32);
loc_821599BC:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x821599f4
	if (ctx.cr6.eq) goto loc_821599F4;
loc_821599C4:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lfs f1,3760(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 3760);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82152f10
	ctx.lr = 0x821599D4;
	sub_82152F10(ctx, base);
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821599f4
	if (!ctx.cr6.eq) goto loc_821599F4;
	// subfic r11,r21,0
	ctx.xer.ca = ctx.r21.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r21.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_821599F0:
	// stw r11,192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 192, ctx.r11.u32);
loc_821599F4:
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,3124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3124);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82159a4c
	if (ctx.cr6.eq) goto loc_82159A4C;
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,3124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3124);
	// lwz r10,3128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3128);
	// mulli r11,r8,76
	ctx.r11.s64 = ctx.r8.s64 * 76;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82159a44
	if (ctx.cr6.eq) goto loc_82159A44;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,24,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82159a50
	if (!ctx.cr6.eq) goto loc_82159A50;
loc_82159A44:
	// sth r9,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r9.u16);
	// b 0x82159a50
	goto loc_82159A50;
loc_82159A4C:
	// sth r17,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r17.u16);
loc_82159A50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r17,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r17.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,7104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,2892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2892);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// sth r10,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r10.u16);
	// lwz r10,7104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,2876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2876);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// sth r10,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// lwz r10,7104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,2908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2908);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// sth r10,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r10.u16);
	// lwz r10,7104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r10,r10,3552
	ctx.r10.s64 = ctx.r10.s64 * 3552;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,2924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2924);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// sth r10,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r10.u16);
	// lwz r10,232(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 232);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82159b18
	if (ctx.cr6.eq) goto loc_82159B18;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82159b18
	if (ctx.cr6.eq) goto loc_82159B18;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82159af4
	if (!ctx.cr6.eq) goto loc_82159AF4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161918
	ctx.lr = 0x82159AEC;
	sub_82161918(ctx, base);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x82159b18
	goto loc_82159B18;
loc_82159AF4:
	// lhz r9,38(r24)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + 38);
	// lhz r10,40(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 40);
	// sth r9,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r9.u16);
	// sth r10,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r10.u16);
	// lhz r10,42(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 42);
	// sth r10,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r10.u16);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwimi r10,r11,0,28,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r10.u64 & 0x10);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82159B18:
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82159b30
	if (ctx.cr0.eq) goto loc_82159B30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161880
	ctx.lr = 0x82159B2C;
	sub_82161880(ctx, base);
	// b 0x82159b40
	goto loc_82159B40;
loc_82159B30:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sth r17,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r17.u16);
	// rlwinm r11,r11,0,6,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE3FFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82159B40:
	// sth r23,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r23.u16);
	// sth r22,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r22.u16);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r31,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r31.u32);
	// stw r10,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r10.u32);
	// stw r17,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r17.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,3160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3160);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82159bac
	if (ctx.cr0.eq) goto loc_82159BAC;
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// addi r11,r11,513
	ctx.r11.s64 = ctx.r11.s64 + 513;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r14,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r14.u32);
loc_82159BAC:
	// lwz r11,3160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3160);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// addi r11,r11,673
	ctx.r11.s64 = ctx.r11.s64 + 673;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,3160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3160);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159bf0
	if (ctx.cr6.eq) goto loc_82159BF0;
	// stw r17,344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 344, ctx.r17.u32);
loc_82159BF0:
	// stw r17,3160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3160, ctx.r17.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821598fc
	if (ctx.cr6.lt) goto loc_821598FC;
loc_82159C04:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82159c8c
	goto loc_82159C8C;
loc_82159C0C:
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,2300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82159c88
	if (!ctx.cr6.eq) goto loc_82159C88;
	// lbz r11,18(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 18);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82159c88
	if (ctx.cr0.eq) goto loc_82159C88;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// blt cr6,0x82159c88
	if (ctx.cr6.lt) goto loc_82159C88;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82159c88
	if (!ctx.cr6.gt) goto loc_82159C88;
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r14,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r14.u32);
	// b 0x82159c88
	goto loc_82159C88;
loc_82159C68:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159c7c
	if (ctx.cr6.eq) goto loc_82159C7C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82159fb8
	ctx.lr = 0x82159C7C;
	sub_82159FB8(ctx, base);
loc_82159C7C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82159C88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82159C8C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159C94"))) PPC_WEAK_FUNC(sub_82159C94);
PPC_FUNC_IMPL(__imp__sub_82159C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159C98"))) PPC_WEAK_FUNC(sub_82159C98);
PPC_FUNC_IMPL(__imp__sub_82159C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82159CA0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// lwz r7,14200(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,7104(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82159fac
	if (ctx.cr6.eq) goto loc_82159FAC;
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r28,r31,364
	ctx.r28.s64 = ctx.r31.s64 + 364;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82159d20
	if (!ctx.cr6.gt) goto loc_82159D20;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82159CF8:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r4,196
	ctx.r5.s64 = ctx.r4.s64 + 196;
	// bl 0x82178c70
	ctx.lr = 0x82159D08;
	sub_82178C70(ctx, base);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82159cf8
	if (ctx.cr6.lt) goto loc_82159CF8;
	// lwz r7,14200(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
loc_82159D20:
	// lwz r29,360(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r24,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r24.u32);
	// stw r24,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r24.u32);
	// bl 0x82159018
	ctx.lr = 0x82159D34;
	sub_82159018(ctx, base);
	// lwz r11,7116(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 7116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// bl 0x82120040
	ctx.lr = 0x82159D54;
	sub_82120040(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82159D68;
	sub_82219130(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82219130
	ctx.lr = 0x82159D7C;
	sub_82219130(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// mullw r27,r11,r9
	ctx.r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// beq cr6,0x82159e44
	if (ctx.cr6.eq) goto loc_82159E44;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82159DAC:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82159dd4
	if (ctx.cr6.eq) goto loc_82159DD4;
	// lwz r9,212(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
loc_82159DD4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,216
	ctx.r5.s64 = 216;
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82219130
	ctx.lr = 0x82159DF0;
	sub_82219130(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_82159E04:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82159e1c
	if (ctx.cr6.eq) goto loc_82159E1C;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82159e30
	if (!ctx.cr0.eq) goto loc_82159E30;
loc_82159E1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// blt cr6,0x82159e04
	if (ctx.cr6.lt) goto loc_82159E04;
	// b 0x82159e34
	goto loc_82159E34;
loc_82159E30:
	// li r21,1
	ctx.r21.s64 = 1;
loc_82159E34:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82159dac
	if (!ctx.cr0.eq) goto loc_82159DAC;
loc_82159E44:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82159e98
	if (ctx.cr0.eq) goto loc_82159E98;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// lfs f13,3760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28848);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82159e98
	if (!ctx.cr6.lt) goto loc_82159E98;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82159e98
	if (ctx.cr6.eq) goto loc_82159E98;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82159E78:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bne 0x82159e78
	if (!ctx.cr0.eq) goto loc_82159E78;
loc_82159E98:
	// lwz r30,14200(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14200);
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,3104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159f08
	if (ctx.cr6.eq) goto loc_82159F08;
	// lwz r10,84(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// addi r11,r25,80
	ctx.r11.s64 = ctx.r25.s64 + 80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82159edc
	if (ctx.cr6.eq) goto loc_82159EDC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82159ee0
	goto loc_82159EE0;
loc_82159EDC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82159EE0:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,3104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3104);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwz r11,3052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3052);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82219130
	ctx.lr = 0x82159F08;
	sub_82219130(ctx, base);
loc_82159F08:
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,3096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3096);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,7104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r11,r11,3552
	ctx.r11.s64 = ctx.r11.s64 * 3552;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addic. r10,r11,3012
	ctx.xer.ca = ctx.r11.u32 > 4294964283;
	ctx.r10.s64 = ctx.r11.s64 + 3012;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82159f88
	if (ctx.cr0.eq) goto loc_82159F88;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82159f88
	if (ctx.cr0.eq) goto loc_82159F88;
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
loc_82159F54:
	// lwz r8,7104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// mulli r8,r8,888
	ctx.r8.s64 = ctx.r8.s64 * 888;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,755
	ctx.r8.s64 = ctx.r8.s64 + 755;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82159f54
	if (ctx.cr6.lt) goto loc_82159F54;
loc_82159F88:
	// stw r22,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r22.u32);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r31,40(r20)
	PPC_STORE_U32(ctx.r20.u32 + 40, ctx.r31.u32);
	// beq cr6,0x82159fac
	if (ctx.cr6.eq) goto loc_82159FAC;
	// lbz r11,18(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 18);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,18(r20)
	PPC_STORE_U8(ctx.r20.u32 + 18, ctx.r11.u8);
	// bl 0x82159fb8
	ctx.lr = 0x82159FAC;
	sub_82159FB8(ctx, base);
loc_82159FAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159FB8"))) PPC_WEAK_FUNC(sub_82159FB8);
PPC_FUNC_IMPL(__imp__sub_82159FB8) {
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
	// lwz r31,40(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82159fe8
	if (ctx.cr6.eq) goto loc_82159FE8;
	// bl 0x821538a8
	ctx.lr = 0x82159FE0;
	sub_821538A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821590f0
	ctx.lr = 0x82159FE8;
	sub_821590F0(ctx, base);
loc_82159FE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215A008"))) PPC_WEAK_FUNC(sub_8215A008);
PPC_FUNC_IMPL(__imp__sub_8215A008) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215a0bc
	if (ctx.cr6.eq) goto loc_8215A0BC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215a04c
	if (ctx.cr0.eq) goto loc_8215A04C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215a04c
	if (ctx.cr6.eq) goto loc_8215A04C;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x82159fb8
	ctx.lr = 0x8215A048;
	sub_82159FB8(ctx, base);
	// b 0x8215a0bc
	goto loc_8215A0BC;
loc_8215A04C:
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215a0bc
	if (ctx.cr0.eq) goto loc_8215A0BC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a0bc
	if (ctx.cr6.eq) goto loc_8215A0BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215a0bc
	if (ctx.cr6.eq) goto loc_8215A0BC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215a0bc
	if (ctx.cr6.eq) goto loc_8215A0BC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// b 0x8215a0b4
	goto loc_8215A0B4;
loc_8215A094:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215a0b0
	if (ctx.cr6.eq) goto loc_8215A0B0;
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215a0b0
	if (ctx.cr6.eq) goto loc_8215A0B0;
	// bl 0x8215a008
	ctx.lr = 0x8215A0B0;
	sub_8215A008(ctx, base);
loc_8215A0B0:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_8215A0B4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8215a094
	if (!ctx.cr6.gt) goto loc_8215A094;
loc_8215A0BC:
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

__attribute__((alias("__imp__sub_8215A0D4"))) PPC_WEAK_FUNC(sub_8215A0D4);
PPC_FUNC_IMPL(__imp__sub_8215A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A0D8"))) PPC_WEAK_FUNC(sub_8215A0D8);
PPC_FUNC_IMPL(__imp__sub_8215A0D8) {
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
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// bl 0x82c09bec
	ctx.lr = 0x8215A100;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215a128
	if (ctx.cr6.eq) goto loc_8215A128;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a124
	if (ctx.cr6.eq) goto loc_8215A124;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_8215A124:
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
loc_8215A128:
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// bl 0x82c09bdc
	ctx.lr = 0x8215A130;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8215A148"))) PPC_WEAK_FUNC(sub_8215A148);
PPC_FUNC_IMPL(__imp__sub_8215A148) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,12584
	ctx.r11.s64 = ctx.r11.s64 + 12584;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8215a174
	if (ctx.cr0.eq) goto loc_8215A174;
	// bl 0x82120a70
	ctx.lr = 0x8215A174;
	sub_82120A70(ctx, base);
loc_8215A174:
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

__attribute__((alias("__imp__sub_8215A18C"))) PPC_WEAK_FUNC(sub_8215A18C);
PPC_FUNC_IMPL(__imp__sub_8215A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A190"))) PPC_WEAK_FUNC(sub_8215A190);
PPC_FUNC_IMPL(__imp__sub_8215A190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8215A198;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r31,14232(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14232);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8215a22c
	if (ctx.cr6.eq) goto loc_8215A22C;
	// lwz r11,21556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21556);
	// addi r30,r31,10804
	ctx.r30.s64 = ctx.r31.s64 + 10804;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8215a1e4
	if (!ctx.cr6.gt) goto loc_8215A1E4;
	// addi r28,r30,68
	ctx.r28.s64 = ctx.r30.s64 + 68;
loc_8215A1C8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82120a70
	ctx.lr = 0x8215A1D0;
	sub_82120A70(ctx, base);
	// lwz r11,10752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10752);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8215a1c8
	if (ctx.cr6.lt) goto loc_8215A1C8;
loc_8215A1E4:
	// stw r27,10752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10752, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217dcc8
	ctx.lr = 0x8215A1F0;
	sub_8217DCC8(ctx, base);
	// lwz r11,10752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10752);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8215a220
	if (!ctx.cr6.gt) goto loc_8215A220;
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
loc_8215A204:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82120a70
	ctx.lr = 0x8215A20C;
	sub_82120A70(ctx, base);
	// lwz r11,10752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10752);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8215a204
	if (ctx.cr6.lt) goto loc_8215A204;
loc_8215A220:
	// stw r27,10752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10752, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x8215A22C;
	sub_82120A70(ctx, base);
loc_8215A22C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,14232(r26)
	PPC_STORE_U32(ctx.r26.u32 + 14232, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215A23C"))) PPC_WEAK_FUNC(sub_8215A23C);
PPC_FUNC_IMPL(__imp__sub_8215A23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A240"))) PPC_WEAK_FUNC(sub_8215A240);
PPC_FUNC_IMPL(__imp__sub_8215A240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8215A248;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r29,14184(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14184);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8215a2e0
	if (ctx.cr6.eq) goto loc_8215A2E0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a29c
	if (ctx.cr6.eq) goto loc_8215A29C;
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r28,r11,-8
	ctx.r28.s64 = ctx.r11.s64 + -8;
	// mulli r10,r9,216
	ctx.r10.s64 = ctx.r9.s64 * 216;
	// addic. r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x8215a294
	if (ctx.cr0.lt) goto loc_8215A294;
loc_8215A280:
	// addi r30,r30,-216
	ctx.r30.s64 = ctx.r30.s64 + -216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821615e0
	ctx.lr = 0x8215A28C;
	sub_821615E0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8215a280
	if (!ctx.cr0.lt) goto loc_8215A280;
loc_8215A294:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82120a70
	ctx.lr = 0x8215A29C;
	sub_82120A70(ctx, base);
loc_8215A29C:
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// bl 0x82120a70
	ctx.lr = 0x8215A2A4;
	sub_82120A70(ctx, base);
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// bl 0x82120a70
	ctx.lr = 0x8215A2AC;
	sub_82120A70(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 + 60;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,12584
	ctx.r9.s64 = ctx.r9.s64 + 12584;
loc_8215A2BC:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bge 0x8215a2bc
	if (!ctx.cr0.lt) goto loc_8215A2BC;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x8215A2D8;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 14184, ctx.r11.u32);
loc_8215A2E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215A2E8"))) PPC_WEAK_FUNC(sub_8215A2E8);
PPC_FUNC_IMPL(__imp__sub_8215A2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8215A2F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// addi r30,r31,540
	ctx.r30.s64 = ctx.r31.s64 + 540;
	// stb r11,542(r31)
	PPC_STORE_U8(ctx.r31.u32 + 542, ctx.r11.u8);
	// lwz r28,-17448(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17448);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r27,-17440(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17440);
	// bl 0x821fd9d8
	ctx.lr = 0x8215A31C;
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
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
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
	ctx.lr = 0x8215A35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8215a370
	if (ctx.cr6.eq) goto loc_8215A370;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8215A370;
	sub_821FD9E0(ctx, base);
loc_8215A370:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8215a37c
	if (ctx.cr6.eq) goto loc_8215A37C;
	// stw r27,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r27.u32);
loc_8215A37C:
	// addic. r11,r27,4
	ctx.xer.ca = ctx.r27.u32 > 4294967291;
	ctx.r11.s64 = ctx.r27.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215a388
	if (ctx.cr0.eq) goto loc_8215A388;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_8215A388:
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r29.u32);
	// stw r29,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8215a3e8
	if (!ctx.cr6.gt) goto loc_8215A3E8;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
loc_8215A3B4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne cr6,0x8215a3cc
	if (!ctx.cr6.eq) goto loc_8215A3CC;
	// twi 31,r0,22
loc_8215A3CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215afd0
	ctx.lr = 0x8215A3DC;
	sub_8215AFD0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8215a3b4
	if (ctx.cr6.gt) goto loc_8215A3B4;
loc_8215A3E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215A3F4"))) PPC_WEAK_FUNC(sub_8215A3F4);
PPC_FUNC_IMPL(__imp__sub_8215A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A3F8"))) PPC_WEAK_FUNC(sub_8215A3F8);
PPC_FUNC_IMPL(__imp__sub_8215A3F8) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215a498
	if (!ctx.cr6.eq) goto loc_8215A498;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215a498
	if (!ctx.cr6.eq) goto loc_8215A498;
	// bl 0x8222dc78
	ctx.lr = 0x8215A42C;
	sub_8222DC78(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,12588
	ctx.r6.s64 = ctx.r11.s64 + 12588;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f8108
	ctx.lr = 0x8215A450;
	sub_821F8108(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215a46c
	if (ctx.cr6.eq) goto loc_8215A46C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215a470
	if (!ctx.cr6.eq) goto loc_8215A470;
loc_8215A46C:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8215A470:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a8d8
	ctx.lr = 0x8215A47C;
	sub_8215A8D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a660
	ctx.lr = 0x8215A484;
	sub_8215A660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215aa00
	ctx.lr = 0x8215A48C;
	sub_8215AA00(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r3,r11,29152
	ctx.r3.s64 = ctx.r11.s64 + 29152;
	// bl 0x82166b80
	ctx.lr = 0x8215A498;
	sub_82166B80(ctx, base);
loc_8215A498:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8215A4B4"))) PPC_WEAK_FUNC(sub_8215A4B4);
PPC_FUNC_IMPL(__imp__sub_8215A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A4B8"))) PPC_WEAK_FUNC(sub_8215A4B8);
PPC_FUNC_IMPL(__imp__sub_8215A4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8215A4C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r28,34
	ctx.r28.s64 = 34;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,16704
	ctx.r30.s64 = ctx.r11.s64 + 16704;
	// lwz r31,32(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
loc_8215A4DC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8215a4f4
	if (ctx.cr6.eq) goto loc_8215A4F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821661c8
	ctx.lr = 0x8215A4F0;
	sub_821661C8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8215A4F4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8215a4dc
	if (!ctx.cr0.eq) goto loc_8215A4DC;
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215a514
	if (ctx.cr6.eq) goto loc_8215A514;
	// bl 0x82120a70
	ctx.lr = 0x8215A510;
	sub_82120A70(ctx, base);
	// stw r29,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r29.u32);
loc_8215A514:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,14188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14188);
	// addi r31,r11,540
	ctx.r31.s64 = ctx.r11.s64 + 540;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r30,544(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8215A530:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8215A534:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8215a544
	if (ctx.cr6.eq) goto loc_8215A544;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8215a548
	if (ctx.cr6.eq) goto loc_8215A548;
loc_8215A544:
	// twi 31,r0,22
loc_8215A548:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8215a5b0
	if (ctx.cr6.eq) goto loc_8215A5B0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8215a55c
	if (!ctx.cr6.eq) goto loc_8215A55C;
	// twi 31,r0,22
loc_8215A55C:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8215a56c
	if (!ctx.cr6.eq) goto loc_8215A56C;
	// twi 31,r0,22
loc_8215A56C:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8215a59c
	if (!ctx.cr6.eq) goto loc_8215A59C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8215afd0
	ctx.lr = 0x8215A588;
	sub_8215AFD0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8215a534
	goto loc_8215A534;
loc_8215A59C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8215a5a8
	if (!ctx.cr6.eq) goto loc_8215A5A8;
	// twi 31,r0,22
loc_8215A5A8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8215a530
	goto loc_8215A530;
loc_8215A5B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82120a70
	ctx.lr = 0x8215A5B8;
	sub_82120A70(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215A5C4"))) PPC_WEAK_FUNC(sub_8215A5C4);
PPC_FUNC_IMPL(__imp__sub_8215A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A5C8"))) PPC_WEAK_FUNC(sub_8215A5C8);
PPC_FUNC_IMPL(__imp__sub_8215A5C8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215a604
	if (ctx.cr6.eq) goto loc_8215A604;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a49e8
	ctx.lr = 0x8215A5F8;
	sub_821A49E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x821a4d30
	ctx.lr = 0x8215A604;
	sub_821A4D30(ctx, base);
loc_8215A604:
	// lwz r3,516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215a61c
	if (ctx.cr6.eq) goto loc_8215A61C;
	// bl 0x821a0a78
	ctx.lr = 0x8215A618;
	sub_821A0A78(ctx, base);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
loc_8215A61C:
	// lwz r3,520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215a630
	if (ctx.cr6.eq) goto loc_8215A630;
	// bl 0x821a0a78
	ctx.lr = 0x8215A62C;
	sub_821A0A78(ctx, base);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
loc_8215A630:
	// lwz r3,524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215a644
	if (ctx.cr6.eq) goto loc_8215A644;
	// bl 0x821a0a78
	ctx.lr = 0x8215A640;
	sub_821A0A78(ctx, base);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
loc_8215A644:
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

__attribute__((alias("__imp__sub_8215A65C"))) PPC_WEAK_FUNC(sub_8215A65C);
PPC_FUNC_IMPL(__imp__sub_8215A65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A660"))) PPC_WEAK_FUNC(sub_8215A660);
PPC_FUNC_IMPL(__imp__sub_8215A660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8215A668;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,24192
	ctx.r3.s64 = 24192;
	// addi r28,r31,324
	ctx.r28.s64 = ctx.r31.s64 + 324;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x821f61f8
	ctx.lr = 0x8215A688;
	sub_821F61F8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215a734
	if (ctx.cr0.eq) goto loc_8215A734;
	// addi r10,r11,131
	ctx.r10.s64 = ctx.r11.s64 + 131;
	// li r5,24064
	ctx.r5.s64 = 24064;
	// rlwinm r29,r10,0,0,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// bl 0x82218a80
	ctx.lr = 0x8215A6AC;
	sub_82218A80(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r10.u32);
	// ld r11,-19664(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -19664);
	// std r11,10880(r29)
	PPC_STORE_U64(ctx.r29.u32 + 10880, ctx.r11.u64);
	// bl 0x8222dc78
	ctx.lr = 0x8215A6C4;
	sub_8222DC78(ctx, base);
	// stw r3,10888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10888, ctx.r3.u32);
	// bl 0x82c0a13c
	ctx.lr = 0x8215A6CC;
	__imp__KeGetCurrentProcessType(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r3,4800
	ctx.r3.s64 = 4800;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,10892(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10892, ctx.r11.u32);
	// bl 0x821f61f8
	ctx.lr = 0x8215A6E8;
	sub_821F61F8(ctx, base);
	// stw r3,16728(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16728, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8215a704
	if (!ctx.cr0.eq) goto loc_8215A704;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,-4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x821f6290
	ctx.lr = 0x8215A700;
	sub_821F6290(ctx, base);
	// b 0x8215a734
	goto loc_8215A734;
loc_8215A704:
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,23980(r29)
	PPC_STORE_U32(ctx.r29.u32 + 23980, ctx.r11.u32);
	// bl 0x821b4060
	ctx.lr = 0x8215A71C;
	sub_821B4060(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215a730
	if (!ctx.cr0.eq) goto loc_8215A730;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a1ae8
	ctx.lr = 0x8215A72C;
	sub_821A1AE8(ctx, base);
	// b 0x8215a734
	goto loc_8215A734;
loc_8215A730:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_8215A734:
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a898
	if (ctx.cr6.eq) goto loc_8215A898;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// li r4,720
	ctx.r4.s64 = 720;
	// li r3,1280
	ctx.r3.s64 = 1280;
	// bl 0x8219e168
	ctx.lr = 0x8215A778;
	sub_8219E168(ctx, base);
	// stw r3,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r3.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// ori r29,r11,390
	ctx.r29.u64 = ctx.r11.u64 | 390;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// li r3,1280
	ctx.r3.s64 = 1280;
	// bl 0x8219e288
	ctx.lr = 0x8215A7A8;
	sub_8219E288(ctx, base);
	// stw r3,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,256
	ctx.r4.s64 = 256;
	// li r3,1280
	ctx.r3.s64 = 1280;
	// bl 0x8215b080
	ctx.lr = 0x8215A7C0;
	sub_8215B080(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ori r28,r11,407
	ctx.r28.u64 = ctx.r11.u64 | 407;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// li r3,1280
	ctx.r3.s64 = 1280;
	// bl 0x8219e288
	ctx.lr = 0x8215A7E4;
	sub_8219E288(ctx, base);
	// stw r3,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,360
	ctx.r4.s64 = 360;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x8215b080
	ctx.lr = 0x8215A7FC;
	sub_8215B080(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,360
	ctx.r4.s64 = 360;
	// li r3,640
	ctx.r3.s64 = 640;
	// bl 0x8219e288
	ctx.lr = 0x8215A820;
	sub_8219E288(ctx, base);
	// stw r3,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r3.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,720
	ctx.r4.s64 = 720;
	// li r3,1280
	ctx.r3.s64 = 1280;
	// addi r11,r31,516
	ctx.r11.s64 = ctx.r31.s64 + 516;
	// bl 0x8219e288
	ctx.lr = 0x8215A84C;
	sub_8219E288(ctx, base);
	// li r10,720
	ctx.r10.s64 = 720;
	// stw r3,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r3.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,720
	ctx.r4.s64 = 720;
	// li r3,1280
	ctx.r3.s64 = 1280;
	// addi r11,r31,520
	ctx.r11.s64 = ctx.r31.s64 + 520;
	// bl 0x8219e288
	ctx.lr = 0x8215A874;
	sub_8219E288(ctx, base);
	// stw r3,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r3.u32);
	// lwz r5,516(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x821a49e8
	ctx.lr = 0x8215A888;
	sub_821A49E8(ctx, base);
	// lwz r4,520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x821a4d30
	ctx.lr = 0x8215A894;
	sub_821A4D30(ctx, base);
	// b 0x8215a8d0
	goto loc_8215A8D0;
loc_8215A898:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,12440(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12440);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8215a8b0
	if (ctx.cr6.eq) goto loc_8215A8B0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x821a0a00
	ctx.lr = 0x8215A8B0;
	sub_821A0A00(ctx, base);
loc_8215A8B0:
	// stw r8,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r8.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,12456(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12456);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8215a8cc
	if (ctx.cr6.eq) goto loc_8215A8CC;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x821a0a00
	ctx.lr = 0x8215A8CC;
	sub_821A0A00(ctx, base);
loc_8215A8CC:
	// stw r8,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r8.u32);
loc_8215A8D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215A8D8"))) PPC_WEAK_FUNC(sub_8215A8D8);
PPC_FUNC_IMPL(__imp__sub_8215A8D8) {
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
	// li r5,124
	ctx.r5.s64 = 124;
	// addi r30,r31,324
	ctx.r30.s64 = ctx.r31.s64 + 324;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82218a80
	ctx.lr = 0x8215A904;
	sub_82218A80(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r31,452
	ctx.r3.s64 = ctx.r31.s64 + 452;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// bl 0x82c0a81c
	ctx.lr = 0x8215A918;
	__imp__XGetVideoMode(ctx, base);
	// li r10,720
	ctx.r10.s64 = 720;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// li r9,1280
	ctx.r9.s64 = 1280;
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r9.u32);
	// ori r5,r10,407
	ctx.r5.u64 = ctx.r10.u64 | 407;
	// stw r9,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r9.u32);
	// stw r8,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r8.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,12728(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12728);
	// stw r9,240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 240, ctx.r9.u32);
	// lwz r7,328(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stw r7,244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 244, ctx.r7.u32);
	// stw r6,276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 276, ctx.r6.u32);
	// lwz r10,452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmplwi cr6,r10,1280
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1280, ctx.xer);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r8,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r8.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r5,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r5.u32);
	// bne cr6,0x8215a9c4
	if (!ctx.cr6.eq) goto loc_8215A9C4;
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bne cr6,0x8215a9c4
	if (!ctx.cr6.eq) goto loc_8215A9C4;
	// lwz r10,464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8215a9c4
	if (!ctx.cr6.eq) goto loc_8215A9C4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,768
	ctx.r7.s64 = 768;
	// lwz r6,328(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r9,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r9.u32);
	// stw r10,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
	// stw r6,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r6.u32);
	// stw r7,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r7.u32);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
loc_8215A9C4:
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// lis r9,96
	ctx.r9.s64 = 6291456;
	// ori r11,r10,390
	ctx.r11.u64 = ctx.r10.u64 | 390;
	// stw r8,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r8.u32);
	// stw r8,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r8.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r9,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r9.u32);
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

