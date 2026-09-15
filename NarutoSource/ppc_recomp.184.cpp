#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BC10B0"))) PPC_WEAK_FUNC(sub_82BC10B0);
PPC_FUNC_IMPL(__imp__sub_82BC10B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// blt cr6,0x82bc10d4
	if (ctx.cr6.lt) goto loc_82BC10D4;
	// lwz r11,3184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bc10d8
	if (ctx.cr6.eq) goto loc_82BC10D8;
loc_82BC10D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BC10D8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC10E0"))) PPC_WEAK_FUNC(sub_82BC10E0);
PPC_FUNC_IMPL(__imp__sub_82BC10E0) {
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
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC10FC;
	sub_82BC0E30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82bc110c
	if (ctx.cr6.eq) goto loc_82BC110C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BC110C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC111C"))) PPC_WEAK_FUNC(sub_82BC111C);
PPC_FUNC_IMPL(__imp__sub_82BC111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1120"))) PPC_WEAK_FUNC(sub_82BC1120);
PPC_FUNC_IMPL(__imp__sub_82BC1120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC1128;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc118c
	if (ctx.cr6.eq) goto loc_82BC118C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc118c
	if (ctx.cr6.eq) goto loc_82BC118C;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC118C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC118C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc11e0
	if (ctx.cr6.eq) goto loc_82BC11E0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC11AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc11e0
	if (ctx.cr6.eq) goto loc_82BC11E0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,87
	ctx.r10.u64 = ctx.r11.u64 | 87;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC11E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC11E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC11E8"))) PPC_WEAK_FUNC(sub_82BC11E8);
PPC_FUNC_IMPL(__imp__sub_82BC11E8) {
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
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC1204;
	sub_82BC0E30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82bc1214
	if (ctx.cr6.eq) goto loc_82BC1214;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BC1214:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC1224"))) PPC_WEAK_FUNC(sub_82BC1224);
PPC_FUNC_IMPL(__imp__sub_82BC1224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1228"))) PPC_WEAK_FUNC(sub_82BC1228);
PPC_FUNC_IMPL(__imp__sub_82BC1228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC1230;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc1294
	if (ctx.cr6.eq) goto loc_82BC1294;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc1294
	if (ctx.cr6.eq) goto loc_82BC1294;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC1294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC1294:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc12e8
	if (ctx.cr6.eq) goto loc_82BC12E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC12B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc12e8
	if (ctx.cr6.eq) goto loc_82BC12E8;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r11,88
	ctx.r10.u64 = ctx.r11.u64 | 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC12E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC12E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC12F0"))) PPC_WEAK_FUNC(sub_82BC12F0);
PPC_FUNC_IMPL(__imp__sub_82BC12F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,84
	ctx.r4.u64 = ctx.r4.u64 | 84;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC1314;
	sub_82BC0E30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82bc1334
	if (ctx.cr6.eq) goto loc_82BC1334;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82BC1334:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// sraw r9,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r9.s64 = ctx.r11.s32 >> temp.u32;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82BC1358"))) PPC_WEAK_FUNC(sub_82BC1358);
PPC_FUNC_IMPL(__imp__sub_82BC1358) {
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
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,82
	ctx.r4.u64 = ctx.r4.u64 | 82;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC1374;
	sub_82BC0E30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82bc1384
	if (ctx.cr6.eq) goto loc_82BC1384;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BC1384:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC1394"))) PPC_WEAK_FUNC(sub_82BC1394);
PPC_FUNC_IMPL(__imp__sub_82BC1394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1398"))) PPC_WEAK_FUNC(sub_82BC1398);
PPC_FUNC_IMPL(__imp__sub_82BC1398) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc140c
	if (ctx.cr6.eq) goto loc_82BC140C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC13D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc140c
	if (ctx.cr6.eq) goto loc_82BC140C;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// ori r9,r11,82
	ctx.r9.u64 = ctx.r11.u64 | 82;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC140C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC140C:
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

__attribute__((alias("__imp__sub_82BC1424"))) PPC_WEAK_FUNC(sub_82BC1424);
PPC_FUNC_IMPL(__imp__sub_82BC1424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1428"))) PPC_WEAK_FUNC(sub_82BC1428);
PPC_FUNC_IMPL(__imp__sub_82BC1428) {
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
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc1468
	if (ctx.cr6.eq) goto loc_82BC1468;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82bc146c
	goto loc_82BC146C;
loc_82BC1468:
	// ld r31,136(r4)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 136);
loc_82BC146C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc14c4
	if (ctx.cr6.eq) goto loc_82BC14C4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC148C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc14c4
	if (ctx.cr6.eq) goto loc_82BC14C4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// ori r9,r11,83
	ctx.r9.u64 = ctx.r11.u64 | 83;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC14C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC14C4:
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

__attribute__((alias("__imp__sub_82BC14DC"))) PPC_WEAK_FUNC(sub_82BC14DC);
PPC_FUNC_IMPL(__imp__sub_82BC14DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC14E0"))) PPC_WEAK_FUNC(sub_82BC14E0);
PPC_FUNC_IMPL(__imp__sub_82BC14E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-20992
	ctx.r9.s64 = ctx.r11.s64 + -20992;
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
	// bl 0x82bcacb0
	ctx.lr = 0x82BC151C;
	sub_82BCACB0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bc15a4
	if (ctx.cr6.eq) goto loc_82BC15A4;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc1558
	if (ctx.cr6.eq) goto loc_82BC1558;
loc_82BC153C:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bc1558
	if (ctx.cr6.eq) goto loc_82BC1558;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc153c
	if (!ctx.cr6.eq) goto loc_82BC153C;
loc_82BC1558:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-23124
	ctx.r6.s64 = ctx.r9.s64 + -23124;
	// addi r5,r8,-20916
	ctx.r5.s64 = ctx.r8.s64 + -20916;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,1345
	ctx.r4.s64 = 1345;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC15A4;
	sub_82BCACB0(ctx, base);
loc_82BC15A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC15B8"))) PPC_WEAK_FUNC(sub_82BC15B8);
PPC_FUNC_IMPL(__imp__sub_82BC15B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-21156
	ctx.r9.s64 = ctx.r11.s64 + -21156;
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
	ctx.lr = 0x82BC15E8;
	sub_82BCACB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC15F8"))) PPC_WEAK_FUNC(sub_82BC15F8);
PPC_FUNC_IMPL(__imp__sub_82BC15F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r5,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82bc1640
	if (!ctx.cr6.eq) goto loc_82BC1640;
	// li r11,0
	ctx.r11.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x82bc16ec
	goto loc_82BC16EC;
loc_82BC1640:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bc16e8
	if (ctx.cr6.eq) goto loc_82BC16E8;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc167c
	if (ctx.cr6.eq) goto loc_82BC167C;
loc_82BC1660:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bc167c
	if (ctx.cr6.eq) goto loc_82BC167C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc1660
	if (!ctx.cr6.eq) goto loc_82BC1660;
loc_82BC167C:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-23124
	ctx.r6.s64 = ctx.r9.s64 + -23124;
	// addi r5,r8,-23084
	ctx.r5.s64 = ctx.r8.s64 + -23084;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,1143
	ctx.r4.s64 = 1143;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC16CC;
	sub_82BCACB0(ctx, base);
	// cntlzw r3,r31
	ctx.r3.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BC16E8:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
loc_82BC16EC:
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC1704"))) PPC_WEAK_FUNC(sub_82BC1704);
PPC_FUNC_IMPL(__imp__sub_82BC1704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1708"))) PPC_WEAK_FUNC(sub_82BC1708);
PPC_FUNC_IMPL(__imp__sub_82BC1708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc1740
	if (!ctx.cr6.eq) goto loc_82BC1740;
loc_82BC1728:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BC1740:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc1728
	if (ctx.cr6.eq) goto loc_82BC1728;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bc1800
	if (ctx.cr6.eq) goto loc_82BC1800;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc17b0
	if (ctx.cr6.eq) goto loc_82BC17B0;
loc_82BC1794:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bc17b0
	if (ctx.cr6.eq) goto loc_82BC17B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc1794
	if (!ctx.cr6.eq) goto loc_82BC1794;
loc_82BC17B0:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-23124
	ctx.r6.s64 = ctx.r9.s64 + -23124;
	// addi r5,r8,-21304
	ctx.r5.s64 = ctx.r8.s64 + -21304;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,1132
	ctx.r4.s64 = 1132;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC1800;
	sub_82BCACB0(ctx, base);
loc_82BC1800:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC181C"))) PPC_WEAK_FUNC(sub_82BC181C);
PPC_FUNC_IMPL(__imp__sub_82BC181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1820"))) PPC_WEAK_FUNC(sub_82BC1820);
PPC_FUNC_IMPL(__imp__sub_82BC1820) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc184c
	if (!ctx.cr6.eq) goto loc_82BC184C;
loc_82BC1844:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bc1944
	goto loc_82BC1944;
loc_82BC184C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc1844
	if (ctx.cr6.eq) goto loc_82BC1844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc1708
	ctx.lr = 0x82BC1870;
	sub_82BC1708(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-21416
	ctx.r9.s64 = ctx.r11.s64 + -21416;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC1898;
	sub_82BCACB0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC18AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bc193c
	if (ctx.cr6.eq) goto loc_82BC193C;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc18ec
	if (ctx.cr6.eq) goto loc_82BC18EC;
loc_82BC18D0:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bc18ec
	if (ctx.cr6.eq) goto loc_82BC18EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc18d0
	if (!ctx.cr6.eq) goto loc_82BC18D0;
loc_82BC18EC:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-23124
	ctx.r6.s64 = ctx.r9.s64 + -23124;
	// addi r5,r8,-21376
	ctx.r5.s64 = ctx.r8.s64 + -21376;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,1101
	ctx.r4.s64 = 1101;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC193C;
	sub_82BCACB0(ctx, base);
loc_82BC193C:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82BC1944:
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

__attribute__((alias("__imp__sub_82BC195C"))) PPC_WEAK_FUNC(sub_82BC195C);
PPC_FUNC_IMPL(__imp__sub_82BC195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1960"))) PPC_WEAK_FUNC(sub_82BC1960);
PPC_FUNC_IMPL(__imp__sub_82BC1960) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc1a94
	if (ctx.cr6.eq) goto loc_82BC1A94;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc1a94
	if (ctx.cr6.eq) goto loc_82BC1A94;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r9,r10,-21632
	ctx.r9.s64 = ctx.r10.s64 + -21632;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x82bcacb0
	ctx.lr = 0x82BC19D4;
	sub_82BCACB0(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r11,12492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// stw r8,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r8.u32);
	// stw r7,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BC19F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bc1a88
	if (ctx.cr6.eq) goto loc_82BC1A88;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc1a38
	if (ctx.cr6.eq) goto loc_82BC1A38;
loc_82BC1A1C:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bc1a38
	if (ctx.cr6.eq) goto loc_82BC1A38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc1a1c
	if (!ctx.cr6.eq) goto loc_82BC1A1C;
loc_82BC1A38:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-21592
	ctx.r6.s64 = ctx.r9.s64 + -21592;
	// addi r5,r8,-23124
	ctx.r5.s64 = ctx.r8.s64 + -23124;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r4,983
	ctx.r4.s64 = 983;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC1A88;
	sub_82BCACB0(ctx, base);
loc_82BC1A88:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82bc1a98
	goto loc_82BC1A98;
loc_82BC1A94:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BC1A98:
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

__attribute__((alias("__imp__sub_82BC1AB0"))) PPC_WEAK_FUNC(sub_82BC1AB0);
PPC_FUNC_IMPL(__imp__sub_82BC1AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC1AB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82bc1b24
	if (!ctx.cr6.gt) goto loc_82BC1B24;
loc_82BC1AE4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc0c70
	ctx.lr = 0x82BC1AF0;
	sub_82BC0C70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bc1b18
	if (ctx.cr6.eq) goto loc_82BC1B18;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc1b30
	if (!ctx.cr6.eq) goto loc_82BC1B30;
loc_82BC1B18:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82bc1ae4
	if (ctx.cr6.lt) goto loc_82BC1AE4;
loc_82BC1B24:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BC1B30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1B3C"))) PPC_WEAK_FUNC(sub_82BC1B3C);
PPC_FUNC_IMPL(__imp__sub_82BC1B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1B40"))) PPC_WEAK_FUNC(sub_82BC1B40);
PPC_FUNC_IMPL(__imp__sub_82BC1B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BC1B48;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc1b80
	if (ctx.cr6.eq) goto loc_82BC1B80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc1bb0
	if (ctx.cr6.eq) goto loc_82BC1BB0;
loc_82BC1B80:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-22256
	ctx.r9.s64 = ctx.r11.s64 + -22256;
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
	ctx.lr = 0x82BC1BA4;
	sub_82BCACB0(ctx, base);
loc_82BC1BA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BC1BB0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc1ba4
	if (ctx.cr6.eq) goto loc_82BC1BA4;
	// bl 0x82bbf510
	ctx.lr = 0x82BC1BC0;
	sub_82BBF510(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82bc1ba4
	if (!ctx.cr6.eq) goto loc_82BC1BA4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bbef40
	ctx.lr = 0x82BC1BD0;
	sub_82BBEF40(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82bc1ba4
	if (!ctx.cr6.lt) goto loc_82BC1BA4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r9,r11,-22180
	ctx.r9.s64 = ctx.r11.s64 + -22180;
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
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC1C08;
	sub_82BCACB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r6,14(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 14);
	// stw r6,3188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3188, ctx.r6.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC1C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bc1ce0
	if (ctx.cr6.eq) goto loc_82BC1CE0;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc1c90
	if (ctx.cr6.eq) goto loc_82BC1C90;
loc_82BC1C74:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bc1c90
	if (ctx.cr6.eq) goto loc_82BC1C90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc1c74
	if (!ctx.cr6.eq) goto loc_82BC1C74;
loc_82BC1C90:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-23124
	ctx.r6.s64 = ctx.r9.s64 + -23124;
	// addi r5,r8,-22124
	ctx.r5.s64 = ctx.r8.s64 + -22124;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,793
	ctx.r4.s64 = 793;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC1CE0;
	sub_82BCACB0(ctx, base);
loc_82BC1CE0:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1CF0"))) PPC_WEAK_FUNC(sub_82BC1CF0);
PPC_FUNC_IMPL(__imp__sub_82BC1CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC1CF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc1d5c
	if (ctx.cr6.eq) goto loc_82BC1D5C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,-22420
	ctx.r9.s64 = ctx.r9.s64 + -22420;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,12704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12704);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r30.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// bl 0x82bcacb0
	ctx.lr = 0x82BC1D54;
	sub_82BCACB0(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_82BC1D5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1D64"))) PPC_WEAK_FUNC(sub_82BC1D64);
PPC_FUNC_IMPL(__imp__sub_82BC1D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1D68"))) PPC_WEAK_FUNC(sub_82BC1D68);
PPC_FUNC_IMPL(__imp__sub_82BC1D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BC1D70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822048c0
	ctx.lr = 0x82BC1D7C;
	sub_822048C0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// lwz r10,21760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21760);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc1d98
	if (ctx.cr6.eq) goto loc_82BC1D98;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc1e4c
	if (ctx.cr6.lt) goto loc_82BC1E4C;
loc_82BC1D98:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,21760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21760, ctx.r3.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC1DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82bc1e4c
	if (!ctx.cr6.gt) goto loc_82BC1E4C;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r30,r11,26676
	ctx.r30.s64 = ctx.r11.s64 + 26676;
loc_82BC1DCC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc0c70
	ctx.lr = 0x82BC1DD8;
	sub_82BC0C70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bc1e40
	if (ctx.cr6.eq) goto loc_82BC1E40;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc1e40
	if (ctx.cr6.eq) goto loc_82BC1E40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC1E14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// bl 0x82bbff80
	ctx.lr = 0x82BC1E40;
	sub_82BBFF80(ctx, base);
loc_82BC1E40:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82bc1dcc
	if (ctx.cr6.lt) goto loc_82BC1DCC;
loc_82BC1E4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1E58"))) PPC_WEAK_FUNC(sub_82BC1E58);
PPC_FUNC_IMPL(__imp__sub_82BC1E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC1E60;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82bc1ab0
	ctx.lr = 0x82BC1E74;
	sub_82BC1AB0(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// blt cr6,0x82bc1e9c
	if (ctx.cr6.lt) goto loc_82BC1E9C;
	// lwz r11,3184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bc1ea0
	if (ctx.cr6.eq) goto loc_82BC1EA0;
loc_82BC1E9C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BC1EA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc1ee0
	if (ctx.cr6.eq) goto loc_82BC1EE0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r11,-23048
	ctx.r8.s64 = ctx.r11.s64 + -23048;
	// addi r9,r9,-23044
	ctx.r9.s64 = ctx.r9.s64 + -23044;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
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
	ctx.lr = 0x82BC1EE0;
	sub_82BCACB0(ctx, base);
loc_82BC1EE0:
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1F10"))) PPC_WEAK_FUNC(sub_82BC1F10);
PPC_FUNC_IMPL(__imp__sub_82BC1F10) {
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
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82215538
	ctx.lr = 0x82BC1F34;
	sub_82215538(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,-20360
	ctx.r9.s64 = ctx.r11.s64 + -20360;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BC1F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc1e58
	ctx.lr = 0x82BC1F84;
	sub_82BC1E58(ctx, base);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
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

__attribute__((alias("__imp__sub_82BC1F9C"))) PPC_WEAK_FUNC(sub_82BC1F9C);
PPC_FUNC_IMPL(__imp__sub_82BC1F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1FA0"))) PPC_WEAK_FUNC(sub_82BC1FA0);
PPC_FUNC_IMPL(__imp__sub_82BC1FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82bc1fdc
	if (!ctx.cr6.eq) goto loc_82BC1FDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x82bc2088
	goto loc_82BC2088;
loc_82BC1FDC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bc2084
	if (ctx.cr6.eq) goto loc_82BC2084;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc2018
	if (ctx.cr6.eq) goto loc_82BC2018;
loc_82BC1FFC:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bc2018
	if (ctx.cr6.eq) goto loc_82BC2018;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc1ffc
	if (!ctx.cr6.eq) goto loc_82BC1FFC;
loc_82BC2018:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-23124
	ctx.r6.s64 = ctx.r9.s64 + -23124;
	// addi r5,r8,-23084
	ctx.r5.s64 = ctx.r8.s64 + -23084;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,278
	ctx.r4.s64 = 278;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC2068;
	sub_82BCACB0(ctx, base);
	// cntlzw r3,r31
	ctx.r3.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BC2084:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
loc_82BC2088:
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC20A0"))) PPC_WEAK_FUNC(sub_82BC20A0);
PPC_FUNC_IMPL(__imp__sub_82BC20A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC20A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC20CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82bc2118
	if (!ctx.cr6.gt) goto loc_82BC2118;
loc_82BC20D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc0c70
	ctx.lr = 0x82BC20E0;
	sub_82BC0C70(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82bc20f0
	if (!ctx.cr6.gt) goto loc_82BC20F0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82BC20F0:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82bc20d4
	if (ctx.cr6.lt) goto loc_82BC20D4;
	// cmpwi cr6,r29,110
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 110, ctx.xer);
	// bge cr6,0x82bc2120
	if (!ctx.cr6.lt) goto loc_82BC2120;
loc_82BC2118:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82bc2150
	goto loc_82BC2150;
loc_82BC2120:
	// cmpwi cr6,r29,170
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 170, ctx.xer);
	// bge cr6,0x82bc2130
	if (!ctx.cr6.lt) goto loc_82BC2130;
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x82bc2150
	goto loc_82BC2150;
loc_82BC2130:
	// cmpwi cr6,r29,235
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 235, ctx.xer);
	// bge cr6,0x82bc2140
	if (!ctx.cr6.lt) goto loc_82BC2140;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82bc2150
	goto loc_82BC2150;
loc_82BC2140:
	// cmpwi cr6,r29,300
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 300, ctx.xer);
	// li r31,10
	ctx.r31.s64 = 10;
	// blt cr6,0x82bc2150
	if (ctx.cr6.lt) goto loc_82BC2150;
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82BC2150:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r9,r11,-23168
	ctx.r9.s64 = ctx.r11.s64 + -23168;
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
	ctx.lr = 0x82BC217C;
	sub_82BCACB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2188"))) PPC_WEAK_FUNC(sub_82BC2188);
PPC_FUNC_IMPL(__imp__sub_82BC2188) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc22ac
	if (ctx.cr6.eq) goto loc_82BC22AC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,82
	ctx.r4.u64 = ctx.r4.u64 | 82;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC21BC;
	sub_82BC0E30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bc21d0
	if (!ctx.cr6.eq) goto loc_82BC21D0;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bc22b0
	if (!ctx.cr6.eq) goto loc_82BC22B0;
loc_82BC21D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc22ac
	if (ctx.cr6.eq) goto loc_82BC22AC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC21F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc22ac
	if (ctx.cr6.eq) goto loc_82BC22AC;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc1fa0
	ctx.lr = 0x82BC2214;
	sub_82BC1FA0(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc1fa0
	ctx.lr = 0x82BC2228;
	sub_82BC1FA0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC223C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc22ac
	if (ctx.cr6.eq) goto loc_82BC22AC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bc22ac
	if (!ctx.cr6.eq) goto loc_82BC22AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc20a0
	ctx.lr = 0x82BC2274;
	sub_82BC20A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc1398
	ctx.lr = 0x82BC2284;
	sub_82BC1398(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r9,r11,-23184
	ctx.r9.s64 = ctx.r11.s64 + -23184;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC22AC;
	sub_82BCACB0(ctx, base);
loc_82BC22AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC22B0:
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

__attribute__((alias("__imp__sub_82BC22C8"))) PPC_WEAK_FUNC(sub_82BC22C8);
PPC_FUNC_IMPL(__imp__sub_82BC22C8) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r10,-20296
	ctx.r9.s64 = ctx.r10.s64 + -20296;
	// lwz r11,3388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3388);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc232c
	if (ctx.cr6.eq) goto loc_82BC232C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
	// bl 0x82208cd0
	ctx.lr = 0x82BC2304;
	sub_82208CD0(ctx, base);
	// lwz r3,3388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc2324
	if (ctx.cr6.eq) goto loc_82BC2324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC2324:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3388, ctx.r11.u32);
loc_82BC232C:
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

__attribute__((alias("__imp__sub_82BC2340"))) PPC_WEAK_FUNC(sub_82BC2340);
PPC_FUNC_IMPL(__imp__sub_82BC2340) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc1fa0
	ctx.lr = 0x82BC2370;
	sub_82BC1FA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc23b4
	if (ctx.cr6.eq) goto loc_82BC23B4;
	// addi r31,r30,3192
	ctx.r31.s64 = ctx.r30.s64 + 3192;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82218a80
	ctx.lr = 0x82BC238C;
	sub_82218A80(ctx, base);
	// li r11,192
	ctx.r11.s64 = 192;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82239198
	ctx.lr = 0x82BC23A8;
	sub_82239198(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc23b4
	if (!ctx.cr6.eq) goto loc_82BC23B4;
	// stw r31,3384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3384, ctx.r31.u32);
loc_82BC23B4:
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

__attribute__((alias("__imp__sub_82BC23CC"))) PPC_WEAK_FUNC(sub_82BC23CC);
PPC_FUNC_IMPL(__imp__sub_82BC23CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC23D0"))) PPC_WEAK_FUNC(sub_82BC23D0);
PPC_FUNC_IMPL(__imp__sub_82BC23D0) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82bc23f0
	if (ctx.cr6.eq) goto loc_82BC23F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
loc_82BC23F0:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// bl 0x82bc1d68
	ctx.lr = 0x82BC23FC;
	sub_82BC1D68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC2410"))) PPC_WEAK_FUNC(sub_82BC2410);
PPC_FUNC_IMPL(__imp__sub_82BC2410) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// bl 0x82bc15f8
	ctx.lr = 0x82BC2444;
	sub_82BC15F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc2458
	if (ctx.cr6.eq) goto loc_82BC2458;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bc245c
	goto loc_82BC245C;
loc_82BC2458:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC245C:
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

__attribute__((alias("__imp__sub_82BC2474"))) PPC_WEAK_FUNC(sub_82BC2474);
PPC_FUNC_IMPL(__imp__sub_82BC2474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2478"))) PPC_WEAK_FUNC(sub_82BC2478);
PPC_FUNC_IMPL(__imp__sub_82BC2478) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc1fa0
	ctx.lr = 0x82BC24B8;
	sub_82BC1FA0(ctx, base);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc1fa0
	ctx.lr = 0x82BC24CC;
	sub_82BC1FA0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82bc15f8
	ctx.lr = 0x82BC24DC;
	sub_82BC15F8(ctx, base);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r9,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r9.s64;
	// bl 0x82bc15f8
	ctx.lr = 0x82BC24F0;
	sub_82BC15F8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bc2548
	if (ctx.cr6.eq) goto loc_82BC2548;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc2548
	if (ctx.cr6.eq) goto loc_82BC2548;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stb r10,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r10.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,92(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC2548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC2548:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r9,r9,-21352
	ctx.r9.s64 = ctx.r9.s64 + -21352;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC2580;
	sub_82BCACB0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_82BC2598"))) PPC_WEAK_FUNC(sub_82BC2598);
PPC_FUNC_IMPL(__imp__sub_82BC2598) {
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
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,-23264
	ctx.r4.s64 = ctx.r11.s64 + -23264;
	// bl 0x821202d8
	ctx.lr = 0x82BC25BC;
	sub_821202D8(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bc25dc
	if (ctx.cr6.eq) goto loc_82BC25DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC25DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC25DC:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x82208ce0
	ctx.lr = 0x82BC25E4;
	sub_82208CE0(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bc2630
	if (!ctx.cr6.eq) goto loc_82BC2630;
loc_82BC25F0:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc2614
	if (ctx.cr6.eq) goto loc_82BC2614;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r3.u32);
loc_82BC2614:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82208cd0
	ctx.lr = 0x82BC261C;
	sub_82208CD0(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x82208ce0
	ctx.lr = 0x82BC2624;
	sub_82208CE0(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc25f0
	if (ctx.cr6.eq) goto loc_82BC25F0;
loc_82BC2630:
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

__attribute__((alias("__imp__sub_82BC2644"))) PPC_WEAK_FUNC(sub_82BC2644);
PPC_FUNC_IMPL(__imp__sub_82BC2644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2648"))) PPC_WEAK_FUNC(sub_82BC2648);
PPC_FUNC_IMPL(__imp__sub_82BC2648) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r9,r11,-22576
	ctx.r9.s64 = ctx.r11.s64 + -22576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// bl 0x82bcacb0
	ctx.lr = 0x82BC2684;
	sub_82BCACB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bbcba0
	ctx.lr = 0x82BC2690;
	sub_82BBCBA0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r10,-18948
	ctx.r8.s64 = ctx.r10.s64 + -18948;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r9,-18932
	ctx.r9.s64 = ctx.r9.s64 + -18932;
	// li r10,0
	ctx.r10.s64 = 0;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC26C8;
	sub_82BCACB0(ctx, base);
	// lis r31,-32029
	ctx.r31.s64 = -2099052544;
	// lwz r3,-4556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4556);
	// bl 0x821242e0
	ctx.lr = 0x82BC26D4;
	sub_821242E0(ctx, base);
	// lwz r11,-4556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4556);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,268
	ctx.r3.s64 = ctx.r11.s64 + 268;
	// bl 0x8220d598
	ctx.lr = 0x82BC26E4;
	sub_8220D598(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,12492(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12492);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82BC2710"))) PPC_WEAK_FUNC(sub_82BC2710);
PPC_FUNC_IMPL(__imp__sub_82BC2710) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x82120040
	ctx.lr = 0x82BC2734;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc274c
	if (ctx.cr6.eq) goto loc_82BC274C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bbf840
	ctx.lr = 0x82BC2744;
	sub_82BBF840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82bc2750
	goto loc_82BC2750;
loc_82BC274C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BC2750:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bbf958
	ctx.lr = 0x82BC2758;
	sub_82BBF958(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC275C;
	sub_821201B0(ctx, base);
	// addi r31,r3,1348
	ctx.r31.s64 = ctx.r3.s64 + 1348;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// bl 0x8213f160
	ctx.lr = 0x82BC2774;
	sub_8213F160(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bc278c
	if (ctx.cr0.eq) goto loc_82BC278C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82BC278C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r30,25
	ctx.r10.s64 = ctx.r30.s64 + 25;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,-20864
	ctx.r9.s64 = ctx.r9.s64 + -20864;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
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
	ctx.lr = 0x82BC27C0;
	sub_82BCACB0(ctx, base);
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

__attribute__((alias("__imp__sub_82BC27D8"))) PPC_WEAK_FUNC(sub_82BC27D8);
PPC_FUNC_IMPL(__imp__sub_82BC27D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82BC27E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc2818
	if (ctx.cr6.eq) goto loc_82BC2818;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc2828
	if (ctx.cr6.eq) goto loc_82BC2828;
loc_82BC2818:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-22080
	ctx.r9.s64 = ctx.r11.s64 + -22080;
	// b 0x82bc2964
	goto loc_82BC2964;
loc_82BC2828:
	// bl 0x821201b0
	ctx.lr = 0x82BC282C;
	sub_821201B0(ctx, base);
	// addi r27,r3,112
	ctx.r27.s64 = ctx.r3.s64 + 112;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32778
	ctx.r9.u64 = ctx.r11.u64 | 32778;
	// std r31,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r31.u64);
	// ori r8,r10,32779
	ctx.r8.u64 = ctx.r10.u64 | 32779;
	// std r31,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r31.u64);
	// std r31,16(r27)
	PPC_STORE_U64(ctx.r27.u32 + 16, ctx.r31.u64);
	// std r31,24(r27)
	PPC_STORE_U64(ctx.r27.u32 + 24, ctx.r31.u64);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwz r7,228(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r5,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r5.u32);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// lwz r4,236(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	// stw r4,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r4.u32);
	// bl 0x821201b0
	ctx.lr = 0x82BC2878;
	sub_821201B0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// bl 0x82bc09c0
	ctx.lr = 0x82BC2884;
	sub_82BC09C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x821201b0
	ctx.lr = 0x82BC288C;
	sub_821201B0(ctx, base);
	// lwz r25,360(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// bl 0x821201b0
	ctx.lr = 0x82BC2894;
	sub_821201B0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,356(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC28CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc2988
	if (ctx.cr6.eq) goto loc_82BC2988;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc2908
	if (ctx.cr6.eq) goto loc_82BC2908;
loc_82BC28EC:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bc2908
	if (ctx.cr6.eq) goto loc_82BC2908;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc28ec
	if (!ctx.cr6.eq) goto loc_82BC28EC;
loc_82BC2908:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-23124
	ctx.r6.s64 = ctx.r9.s64 + -23124;
	// addi r5,r8,-22008
	ctx.r5.s64 = ctx.r8.s64 + -22008;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,893
	ctx.r4.s64 = 893;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC295C;
	sub_82BCACB0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r9,r11,-21696
	ctx.r9.s64 = ctx.r11.s64 + -21696;
loc_82BC2964:
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
	// bl 0x82bcacb0
	ctx.lr = 0x82BC297C;
	sub_82BCACB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82BC2988:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC29B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82bc29c8
	if (!ctx.cr6.eq) goto loc_82BC29C8;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x82bc2a54
	goto loc_82BC2A54;
loc_82BC29C8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82bc2a54
	if (ctx.cr6.eq) goto loc_82BC2A54;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc2a04
	if (ctx.cr6.eq) goto loc_82BC2A04;
loc_82BC29E8:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bc2a04
	if (ctx.cr6.eq) goto loc_82BC2A04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc29e8
	if (!ctx.cr6.eq) goto loc_82BC29E8;
loc_82BC2A04:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-23124
	ctx.r6.s64 = ctx.r9.s64 + -23124;
	// addi r5,r8,-21968
	ctx.r5.s64 = ctx.r8.s64 + -21968;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,900
	ctx.r4.s64 = 900;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC2A54;
	sub_82BCACB0(ctx, base);
loc_82BC2A54:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r9,r11,-21900
	ctx.r9.s64 = ctx.r11.s64 + -21900;
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC2A7C;
	sub_82BCACB0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC2A80;
	sub_821201B0(ctx, base);
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bc2a98
	if (ctx.cr6.eq) goto loc_82BC2A98;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r11,14392
	ctx.r10.s64 = ctx.r11.s64 + 14392;
	// b 0x82bc2aa0
	goto loc_82BC2AA0;
loc_82BC2A98:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r11,14400
	ctx.r10.s64 = ctx.r11.s64 + 14400;
loc_82BC2AA0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-21864
	ctx.r9.s64 = ctx.r11.s64 + -21864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC2AC4;
	sub_82BCACB0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC2AC8;
	sub_821201B0(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r10,356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,-21836
	ctx.r9.s64 = ctx.r9.s64 + -21836;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC2AF0;
	sub_82BCACB0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC2AF4;
	sub_821201B0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r7,-21800
	ctx.r9.s64 = ctx.r7.s64 + -21800;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC2B1C;
	sub_82BCACB0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC2B20;
	sub_821201B0(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r6,-21764
	ctx.r9.s64 = ctx.r6.s64 + -21764;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC2B48;
	sub_82BCACB0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC2B4C;
	sub_821201B0(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r5,-21728
	ctx.r9.s64 = ctx.r5.s64 + -21728;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC2B74;
	sub_82BCACB0(ctx, base);
	// cntlzw r4,r29
	ctx.r4.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2B84"))) PPC_WEAK_FUNC(sub_82BC2B84);
PPC_FUNC_IMPL(__imp__sub_82BC2B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2B88"))) PPC_WEAK_FUNC(sub_82BC2B88);
PPC_FUNC_IMPL(__imp__sub_82BC2B88) {
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
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc2bd4
	if (ctx.cr6.eq) goto loc_82BC2BD4;
	// bl 0x82bbeeb8
	ctx.lr = 0x82BC2BB0;
	sub_82BBEEB8(ctx, base);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc2bcc
	if (ctx.cr6.eq) goto loc_82BC2BCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbf048
	ctx.lr = 0x82BC2BC4;
	sub_82BBF048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BC2BCC;
	sub_82120A70(ctx, base);
loc_82BC2BCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82BC2BD4:
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

__attribute__((alias("__imp__sub_82BC2BEC"))) PPC_WEAK_FUNC(sub_82BC2BEC);
PPC_FUNC_IMPL(__imp__sub_82BC2BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2BF0"))) PPC_WEAK_FUNC(sub_82BC2BF0);
PPC_FUNC_IMPL(__imp__sub_82BC2BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BC2BF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc2d60
	if (ctx.cr6.eq) goto loc_82BC2D60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc2d60
	if (!ctx.cr6.eq) goto loc_82BC2D60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc2b88
	ctx.lr = 0x82BC2C34;
	sub_82BC2B88(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC2C38;
	sub_821201B0(ctx, base);
	// addi r27,r3,112
	ctx.r27.s64 = ctx.r3.s64 + 112;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,32778
	ctx.r9.u64 = ctx.r11.u64 | 32778;
	// std r31,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r31.u64);
	// ori r8,r10,32779
	ctx.r8.u64 = ctx.r10.u64 | 32779;
	// std r31,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r31.u64);
	// std r31,16(r27)
	PPC_STORE_U64(ctx.r27.u32 + 16, ctx.r31.u64);
	// std r31,24(r27)
	PPC_STORE_U64(ctx.r27.u32 + 24, ctx.r31.u64);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwz r7,228(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r5,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r5.u32);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// lwz r4,236(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	// stw r4,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r4.u32);
	// bl 0x821201b0
	ctx.lr = 0x82BC2C84;
	sub_821201B0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// bl 0x82bc09c0
	ctx.lr = 0x82BC2C90;
	sub_82BC09C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x821201b0
	ctx.lr = 0x82BC2C98;
	sub_821201B0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// lwz r6,364(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,25
	ctx.r7.s64 = 25;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC2CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc2d6c
	if (ctx.cr6.eq) goto loc_82BC2D6C;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r10,r11,29768
	ctx.r10.s64 = ctx.r11.s64 + 29768;
	// lwz r11,29768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29768);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bc2d10
	if (ctx.cr6.eq) goto loc_82BC2D10;
loc_82BC2CF4:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bc2d10
	if (ctx.cr6.eq) goto loc_82BC2D10;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bc2cf4
	if (!ctx.cr6.eq) goto loc_82BC2CF4;
loc_82BC2D10:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// addi r5,r11,-23124
	ctx.r5.s64 = ctx.r11.s64 + -23124;
	// addi r4,r9,-22656
	ctx.r4.s64 = ctx.r9.s64 + -22656;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r3,685
	ctx.r3.s64 = 685;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r9,r6,14148
	ctx.r9.s64 = ctx.r6.s64 + 14148;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
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
	ctx.lr = 0x82BC2D60;
	sub_82BCACB0(ctx, base);
loc_82BC2D60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82BC2D6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82120040
	ctx.lr = 0x82BC2D78;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc2d8c
	if (ctx.cr6.eq) goto loc_82BC2D8C;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82bbf0b8
	ctx.lr = 0x82BC2D88;
	sub_82BBF0B8(ctx, base);
	// b 0x82bc2d90
	goto loc_82BC2D90;
loc_82BC2D8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC2D90:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-22624
	ctx.r9.s64 = ctx.r11.s64 + -22624;
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
	ctx.lr = 0x82BC2DB8;
	sub_82BCACB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2DC4"))) PPC_WEAK_FUNC(sub_82BC2DC4);
PPC_FUNC_IMPL(__imp__sub_82BC2DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2DC8"))) PPC_WEAK_FUNC(sub_82BC2DC8);
PPC_FUNC_IMPL(__imp__sub_82BC2DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82BC2DD0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x822048c0
	ctx.lr = 0x82BC2DDC;
	sub_822048C0(ctx, base);
	// lis r11,-31941
	ctx.r11.s64 = -2093285376;
	// lwz r10,21764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21764);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc2df4
	if (ctx.cr6.eq) goto loc_82BC2DF4;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc3044
	if (ctx.cr6.lt) goto loc_82BC3044;
loc_82BC2DF4:
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// stw r3,21764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21764, ctx.r3.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC2E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82bc3044
	if (!ctx.cr6.gt) goto loc_82BC3044;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r27,r11,28788
	ctx.r27.s64 = ctx.r11.s64 + 28788;
loc_82BC2E28:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82bc0c70
	ctx.lr = 0x82BC2E34;
	sub_82BC0C70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bc3038
	if (ctx.cr6.eq) goto loc_82BC3038;
	// lwz r3,48(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc3038
	if (ctx.cr6.eq) goto loc_82BC3038;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC2E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x821201b0
	ctx.lr = 0x82BC2E78;
	sub_821201B0(ctx, base);
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bc2eac
	if (ctx.cr6.eq) goto loc_82BC2EAC;
	// bl 0x821201b0
	ctx.lr = 0x82BC2E88;
	sub_821201B0(ctx, base);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bc2eac
	if (ctx.cr6.eq) goto loc_82BC2EAC;
	// bl 0x821201b0
	ctx.lr = 0x82BC2E98;
	sub_821201B0(ctx, base);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82bc2eac
	if (ctx.cr6.eq) goto loc_82BC2EAC;
	// lwz r10,3188(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3188);
	// b 0x82bc2fec
	goto loc_82BC2FEC;
loc_82BC2EAC:
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x821201b0
	ctx.lr = 0x82BC2EB4;
	sub_821201B0(ctx, base);
	// lwz r11,1356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bc2fe8
	if (!ctx.cr6.gt) goto loc_82BC2FE8;
loc_82BC2EC0:
	// bl 0x821201b0
	ctx.lr = 0x82BC2EC4;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc2f30
	if (ctx.cr6.eq) goto loc_82BC2F30;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC2EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82bc2f98
	if (!ctx.cr6.lt) goto loc_82BC2F98;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC2F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc2f98
	if (ctx.cr6.eq) goto loc_82BC2F98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82bc2f9c
	goto loc_82BC2F9C;
loc_82BC2F30:
	// lwz r28,1356(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82bc2f98
	if (!ctx.cr6.gt) goto loc_82BC2F98;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BC2F44:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc2f74
	if (ctx.cr6.eq) goto loc_82BC2F74;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82bc2f7c
	goto loc_82BC2F7C;
loc_82BC2F74:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82BC2F7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82bc3050
	if (ctx.cr6.eq) goto loc_82BC3050;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82bc2f44
	if (ctx.cr6.lt) goto loc_82BC2F44;
loc_82BC2F98:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BC2F9C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x82bc2fd4
	if (!ctx.cr6.gt) goto loc_82BC2FD4;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r24,r3,16
	ctx.r24.u64 = ctx.r3.u32 & 0xFFFF;
loc_82BC2FD4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// bl 0x821201b0
	ctx.lr = 0x82BC2FDC;
	sub_821201B0(ctx, base);
	// lwz r11,1356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bc2ec0
	if (ctx.cr6.lt) goto loc_82BC2EC0;
loc_82BC2FE8:
	// addi r10,r24,-30
	ctx.r10.s64 = ctx.r24.s64 + -30;
loc_82BC2FEC:
	// lbz r11,93(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 93);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r11.u8);
	// lbz r11,94(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 94);
	// stb r11,9(r27)
	PPC_STORE_U8(ctx.r27.u32 + 9, ctx.r11.u8);
	// lbz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 100);
	// stb r11,11(r27)
	PPC_STORE_U8(ctx.r27.u32 + 11, ctx.r11.u8);
	// lwz r11,128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lbz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 92);
	// stb r11,10(r27)
	PPC_STORE_U8(ctx.r27.u32 + 10, ctx.r11.u8);
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// stw r10,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// bl 0x82bbff80
	ctx.lr = 0x82BC3038;
	sub_82BBFF80(ctx, base);
loc_82BC3038:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r21
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x82bc2e28
	if (ctx.cr6.lt) goto loc_82BC2E28;
loc_82BC3044:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
loc_82BC3050:
	// lwz r11,1360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82bc2f9c
	goto loc_82BC2F9C;
}

__attribute__((alias("__imp__sub_82BC3060"))) PPC_WEAK_FUNC(sub_82BC3060);
PPC_FUNC_IMPL(__imp__sub_82BC3060) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82bc15f8
	ctx.lr = 0x82BC3084;
	sub_82BC15F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82bc15f8
	ctx.lr = 0x82BC3094;
	sub_82BC15F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82bc15f8
	ctx.lr = 0x82BC30A4;
	sub_82BC15F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82bc15f8
	ctx.lr = 0x82BC30B4;
	sub_82BC15F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82bc15f8
	ctx.lr = 0x82BC30C4;
	sub_82BC15F8(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC30C8;
	sub_821201B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,344(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x82bc15f8
	ctx.lr = 0x82BC30DC;
	sub_82BC15F8(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC30E0;
	sub_821201B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,340(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// bl 0x82bc2410
	ctx.lr = 0x82BC30F0;
	sub_82BC2410(ctx, base);
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

__attribute__((alias("__imp__sub_82BC3104"))) PPC_WEAK_FUNC(sub_82BC3104);
PPC_FUNC_IMPL(__imp__sub_82BC3104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3108"))) PPC_WEAK_FUNC(sub_82BC3108);
PPC_FUNC_IMPL(__imp__sub_82BC3108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC3110;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-20348
	ctx.r10.s64 = ctx.r11.s64 + -20348;
	// lwz r30,236(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bc3148
	if (ctx.cr6.eq) goto loc_82BC3148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82208cc8
	ctx.lr = 0x82BC313C;
	sub_82208CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BC3144;
	sub_82120A70(ctx, base);
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
loc_82BC3148:
	// lwz r30,240(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bc3168
	if (ctx.cr6.eq) goto loc_82BC3168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82208cc8
	ctx.lr = 0x82BC315C;
	sub_82208CC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BC3164;
	sub_82120A70(ctx, base);
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
loc_82BC3168:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208970
	ctx.lr = 0x82BC3170;
	sub_82208970(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC3178"))) PPC_WEAK_FUNC(sub_82BC3178);
PPC_FUNC_IMPL(__imp__sub_82BC3178) {
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
	// bl 0x82208c28
	ctx.lr = 0x82BC3194;
	sub_82208C28(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-20348
	ctx.r10.s64 = ctx.r11.s64 + -20348;
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82120040
	ctx.lr = 0x82BC31B4;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc31cc
	if (ctx.cr6.eq) goto loc_82BC31CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208c78
	ctx.lr = 0x82BC31C8;
	sub_82208C78(ctx, base);
	// b 0x82bc31d0
	goto loc_82BC31D0;
loc_82BC31CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BC31D0:
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82120040
	ctx.lr = 0x82BC31E0;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc31f8
	if (ctx.cr6.eq) goto loc_82BC31F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82208c78
	ctx.lr = 0x82BC31F4;
	sub_82208C78(ctx, base);
	// b 0x82bc31fc
	goto loc_82BC31FC;
loc_82BC31F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BC31FC:
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r3,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r3.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bc3224
	if (ctx.cr6.eq) goto loc_82BC3224;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82BC3224:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC323C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82BC3258"))) PPC_WEAK_FUNC(sub_82BC3258);
PPC_FUNC_IMPL(__imp__sub_82BC3258) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82bc01a0
	ctx.lr = 0x82BC327C;
	sub_82BC01A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC328C"))) PPC_WEAK_FUNC(sub_82BC328C);
PPC_FUNC_IMPL(__imp__sub_82BC328C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3290"))) PPC_WEAK_FUNC(sub_82BC3290);
PPC_FUNC_IMPL(__imp__sub_82BC3290) {
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
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82bc32d4
	if (ctx.cr6.eq) goto loc_82BC32D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82bc1398
	ctx.lr = 0x82BC32CC;
	sub_82BC1398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc2340
	ctx.lr = 0x82BC32D4;
	sub_82BC2340(ctx, base);
loc_82BC32D4:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x82bc2dc8
	ctx.lr = 0x82BC32E4;
	sub_82BC2DC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82BC32FC"))) PPC_WEAK_FUNC(sub_82BC32FC);
PPC_FUNC_IMPL(__imp__sub_82BC32FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3300"))) PPC_WEAK_FUNC(sub_82BC3300);
PPC_FUNC_IMPL(__imp__sub_82BC3300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC3308;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc3340
	if (ctx.cr6.eq) goto loc_82BC3340;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc3370
	if (ctx.cr6.eq) goto loc_82BC3370;
loc_82BC3340:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-22360
	ctx.r9.s64 = ctx.r11.s64 + -22360;
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
	ctx.lr = 0x82BC3364;
	sub_82BCACB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BC3370:
	// bl 0x821200d8
	ctx.lr = 0x82BC3374;
	sub_821200D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82bc3394
	if (ctx.cr6.lt) goto loc_82BC3394;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82bc3394
	if (!ctx.cr6.lt) goto loc_82BC3394;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82bc3398
	goto loc_82BC3398;
loc_82BC3394:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC3398:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r6,r11,1432
	ctx.r6.s64 = ctx.r11.s64 + 1432;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC33B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82bc3448
	if (ctx.cr6.eq) goto loc_82BC3448;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc33f8
	if (ctx.cr6.eq) goto loc_82BC33F8;
loc_82BC33DC:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bc33f8
	if (ctx.cr6.eq) goto loc_82BC33F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc33dc
	if (!ctx.cr6.eq) goto loc_82BC33DC;
loc_82BC33F8:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-23124
	ctx.r6.s64 = ctx.r9.s64 + -23124;
	// addi r5,r8,-22284
	ctx.r5.s64 = ctx.r8.s64 + -22284;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,773
	ctx.r4.s64 = 773;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC3448;
	sub_82BCACB0(ctx, base);
loc_82BC3448:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC3458"))) PPC_WEAK_FUNC(sub_82BC3458);
PPC_FUNC_IMPL(__imp__sub_82BC3458) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-20296
	ctx.r10.s64 = ctx.r11.s64 + -20296;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822106c8
	ctx.lr = 0x82BC3488;
	sub_822106C8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// li r5,3072
	ctx.r5.s64 = 3072;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,3184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3184, ctx.r30.u32);
	// stw r30,3188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3188, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r30.u32);
	// stw r11,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r11.u32);
	// bl 0x82218a80
	ctx.lr = 0x82BC34F0;
	sub_82218A80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82120040
	ctx.lr = 0x82BC34FC;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc3514
	if (ctx.cr6.eq) goto loc_82BC3514;
	// bl 0x82bc3178
	ctx.lr = 0x82BC3508;
	sub_82BC3178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,3388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3388, ctx.r11.u32);
	// b 0x82bc3518
	goto loc_82BC3518;
loc_82BC3514:
	// stw r30,3388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3388, ctx.r30.u32);
loc_82BC3518:
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

__attribute__((alias("__imp__sub_82BC3534"))) PPC_WEAK_FUNC(sub_82BC3534);
PPC_FUNC_IMPL(__imp__sub_82BC3534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3538"))) PPC_WEAK_FUNC(sub_82BC3538);
PPC_FUNC_IMPL(__imp__sub_82BC3538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC3540;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82bc35c4
	if (ctx.cr6.eq) goto loc_82BC35C4;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r11,12704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12704);
	// lwz r31,56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x821200d8
	ctx.lr = 0x82BC3564;
	sub_821200D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82bc35c4
	if (ctx.cr6.lt) goto loc_82BC35C4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82bc35c4
	if (!ctx.cr6.lt) goto loc_82BC35C4;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc35c4
	if (ctx.cr6.eq) goto loc_82BC35C4;
	// lwz r11,12704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12704);
	// lwz r31,56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x821200d8
	ctx.lr = 0x82BC3594;
	sub_821200D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82bc35b4
	if (ctx.cr6.lt) goto loc_82BC35B4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82bc35b4
	if (!ctx.cr6.lt) goto loc_82BC35B4;
	// addi r11,r31,22
	ctx.r11.s64 = ctx.r31.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82bc35b8
	goto loc_82BC35B8;
loc_82BC35B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC35B8:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// ld r4,1392(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1392);
	// bl 0x82bcb528
	ctx.lr = 0x82BC35C4;
	sub_82BCB528(ctx, base);
loc_82BC35C4:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC35D8"))) PPC_WEAK_FUNC(sub_82BC35D8);
PPC_FUNC_IMPL(__imp__sub_82BC35D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82BC35E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82bf5b40
	ctx.lr = 0x82BC35F4;
	sub_82BF5B40(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lbz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// bl 0x821201b0
	ctx.lr = 0x82BC3604;
	sub_821201B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bcc538
	ctx.lr = 0x82BC360C;
	sub_82BCC538(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc3718
	if (ctx.cr6.eq) goto loc_82BC3718;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82bbd170
	ctx.lr = 0x82BC3628;
	sub_82BBD170(ctx, base);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc36b4
	if (ctx.cr6.eq) goto loc_82BC36B4;
loc_82BC3634:
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc36a0
	if (!ctx.cr6.eq) goto loc_82BC36A0;
	// bl 0x822048c0
	ctx.lr = 0x82BC3654;
	sub_822048C0(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stw r3,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// clrlwi r31,r11,26
	ctx.r31.u64 = ctx.r11.u32 & 0x3F;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82bc366c
	if (!ctx.cr6.gt) goto loc_82BC366C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82BC366C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,12704(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lbz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// bl 0x82bbe3e8
	ctx.lr = 0x82BC3680;
	sub_82BBE3E8(ctx, base);
	// clrlwi r10,r31,28
	ctx.r10.u64 = ctx.r31.u32 & 0xF;
	// mulli r11,r10,84
	ctx.r11.s64 = ctx.r10.s64 * 84;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r30,188
	ctx.r3.s64 = ctx.r30.s64 + 188;
	// bl 0x82124188
	ctx.lr = 0x82BC3698;
	sub_82124188(ctx, base);
	// clrlwi r9,r31,26
	ctx.r9.u64 = ctx.r31.u32 & 0x3F;
	// stw r9,268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 268, ctx.r9.u32);
loc_82BC36A0:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bbd170
	ctx.lr = 0x82BC36AC;
	sub_82BBD170(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc3634
	if (!ctx.cr6.eq) goto loc_82BC3634;
loc_82BC36B4:
	// lwz r10,12704(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x82bc36d4
	if (ctx.cr6.lt) goto loc_82BC36D4;
	// lwz r11,3184(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bc36d8
	if (ctx.cr6.eq) goto loc_82BC36D8;
loc_82BC36D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BC36D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc3718
	if (ctx.cr6.eq) goto loc_82BC3718;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r7,r10,0,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r9,r11,-20612
	ctx.r9.s64 = ctx.r11.s64 + -20612;
	// or r6,r7,r26
	ctx.r6.u64 = ctx.r7.u64 | ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC3718;
	sub_82BCACB0(ctx, base);
loc_82BC3718:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC3720"))) PPC_WEAK_FUNC(sub_82BC3720);
PPC_FUNC_IMPL(__imp__sub_82BC3720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BC3728;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,82
	ctx.r4.u64 = ctx.r4.u64 | 82;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC3740;
	sub_82BC0E30(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82bc3750
	if (ctx.cr6.eq) goto loc_82BC3750;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82BC3750:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc377c
	if (ctx.cr6.eq) goto loc_82BC377C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r11,13434
	ctx.r10.s64 = ctx.r11.s64 + 13434;
	// b 0x82bc3784
	goto loc_82BC3784;
loc_82BC377C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
loc_82BC3784:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r9,r9,-22536
	ctx.r9.s64 = ctx.r9.s64 + -22536;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC37B4;
	sub_82BCACB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bbcba0
	ctx.lr = 0x82BC37C0;
	sub_82BBCBA0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82bc3800
	if (ctx.cr6.eq) goto loc_82BC3800;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bbcba0
	ctx.lr = 0x82BC37D8;
	sub_82BBCBA0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-22484
	ctx.r9.s64 = ctx.r11.s64 + -22484;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC3800;
	sub_82BCACB0(ctx, base);
loc_82BC3800:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82bc3864
	if (!ctx.cr6.gt) goto loc_82BC3864;
loc_82BC382C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc0c70
	ctx.lr = 0x82BC3838;
	sub_82BC0C70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x822048c0
	ctx.lr = 0x82BC3840;
	sub_822048C0(ctx, base);
	// stw r3,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r3.u32);
	// lwz r3,12704(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// lbz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 24);
	// bl 0x82bbe3e8
	ctx.lr = 0x82BC3850;
	sub_82BBE3E8(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// blt cr6,0x82bc382c
	if (ctx.cr6.lt) goto loc_82BC382C;
loc_82BC3864:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,12492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,26664(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26664);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// bl 0x82bc8e38
	ctx.lr = 0x82BC3884;
	sub_82BC8E38(ctx, base);
	// lwz r3,12704(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// bl 0x82bbdfa0
	ctx.lr = 0x82BC388C;
	sub_82BBDFA0(ctx, base);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC389C"))) PPC_WEAK_FUNC(sub_82BC389C);
PPC_FUNC_IMPL(__imp__sub_82BC389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC38A0"))) PPC_WEAK_FUNC(sub_82BC38A0);
PPC_FUNC_IMPL(__imp__sub_82BC38A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82BC38A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-2336(r1)
	ea = -2336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// bl 0x82215538
	ctx.lr = 0x82BC38C4;
	sub_82215538(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r11,-20360
	ctx.r9.s64 = ctx.r11.s64 + -20360;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BC38F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82bc3a70
	if (!ctx.cr6.gt) goto loc_82BC3A70;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r23,-1
	ctx.r23.s64 = -1;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// addi r31,r11,26688
	ctx.r31.s64 = ctx.r11.s64 + 26688;
	// addi r24,r10,-23008
	ctx.r24.s64 = ctx.r10.s64 + -23008;
loc_82BC391C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc0c70
	ctx.lr = 0x82BC3928;
	sub_82BC0C70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bc3a64
	if (ctx.cr6.eq) goto loc_82BC3A64;
	// lwz r3,12704(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// lbz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// bl 0x82bbe3e8
	ctx.lr = 0x82BC3940;
	sub_82BBE3E8(ctx, base);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc3a64
	if (ctx.cr6.eq) goto loc_82BC3A64;
	// lwz r11,12704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc397c
	if (ctx.cr6.eq) goto loc_82BC397C;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
loc_82BC397C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC3990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// stb r4,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r4.u8);
	// lwz r10,88(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82bc3a08
	if (!ctx.cr6.gt) goto loc_82BC3A08;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x82bc39b8
	goto loc_82BC39B8;
loc_82BC39B4:
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
loc_82BC39B8:
	// lwz r3,12704(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// bl 0x82bbe3e8
	ctx.lr = 0x82BC39C0;
	sub_82BBE3E8(ctx, base);
	// clrlwi r10,r29,28
	ctx.r10.u64 = ctx.r29.u32 & 0xF;
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r9,r31,18
	ctx.r9.s64 = ctx.r31.s64 + 18;
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subfic r5,r11,2048
	ctx.xer.ca = ctx.r11.u32 <= 2048;
	ctx.r5.s64 = 2048 - ctx.r11.s64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r10,188
	ctx.r3.s64 = ctx.r10.s64 + 188;
	// bl 0x82bf55c8
	ctx.lr = 0x82BC39E8;
	sub_82BF55C8(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r29,r29,-2
	ctx.r29.s64 = ctx.r29.s64 + -2;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// lwz r8,88(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82bc39b4
	if (ctx.cr6.lt) goto loc_82BC39B4;
loc_82BC3A08:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc10b0
	ctx.lr = 0x82BC3A10;
	sub_82BC10B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc3a48
	if (ctx.cr6.eq) goto loc_82BC3A48;
	// lwz r11,12704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC3A48;
	sub_82BCACB0(ctx, base);
loc_82BC3A48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC3A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r20,r3,r20
	ctx.r20.u64 = ctx.r3.u64 + ctx.r20.u64;
loc_82BC3A64:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82bc391c
	if (ctx.cr6.lt) goto loc_82BC391C;
loc_82BC3A70:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82bc3b28
	if (!ctx.cr6.gt) goto loc_82BC3B28;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
loc_82BC3A98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc0c70
	ctx.lr = 0x82BC3AA4;
	sub_82BC0C70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc3b1c
	if (!ctx.cr6.eq) goto loc_82BC3B1C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82bc3ad4
	if (ctx.cr6.eq) goto loc_82BC3AD4;
	// cmplw cr6,r19,r31
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82bc3b1c
	if (!ctx.cr6.eq) goto loc_82BC3B1C;
loc_82BC3AD4:
	// lwz r3,12700(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12700);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc3b0c
	if (!ctx.cr6.eq) goto loc_82BC3B0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82120040
	ctx.lr = 0x82BC3AEC;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc3b04
	if (ctx.cr6.eq) goto loc_82BC3B04;
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// stw r21,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r21.u32);
	// b 0x82bc3b08
	goto loc_82BC3B08;
loc_82BC3B04:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82BC3B08:
	// stw r3,12700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12700, ctx.r3.u32);
loc_82BC3B0C:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x82bbeb90
	ctx.lr = 0x82BC3B1C;
	sub_82BBEB90(ctx, base);
loc_82BC3B1C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82bc3a98
	if (ctx.cr6.lt) goto loc_82BC3A98;
loc_82BC3B28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2336
	ctx.r1.s64 = ctx.r1.s64 + 2336;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC3B34"))) PPC_WEAK_FUNC(sub_82BC3B34);
PPC_FUNC_IMPL(__imp__sub_82BC3B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3B38"))) PPC_WEAK_FUNC(sub_82BC3B38);
PPC_FUNC_IMPL(__imp__sub_82BC3B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x82BC3B40;
	__savegprlr_17(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// stw r11,52(r17)
	PPC_STORE_U32(ctx.r17.u32 + 52, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC3B64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// ble cr6,0x82bc3d9c
	if (!ctx.cr6.gt) goto loc_82BC3D9C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r29,9
	ctx.r29.s64 = 9;
	// li r26,-1
	ctx.r26.s64 = -1;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// addi r20,r11,-23292
	ctx.r20.s64 = ctx.r11.s64 + -23292;
	// addi r21,r10,-21208
	ctx.r21.s64 = ctx.r10.s64 + -21208;
	// addi r22,r9,-21280
	ctx.r22.s64 = ctx.r9.s64 + -21280;
loc_82BC3BA0:
	// bl 0x821201b0
	ctx.lr = 0x82BC3BA4;
	sub_821201B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc3c10
	if (ctx.cr6.eq) goto loc_82BC3C10;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC3BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r24,r3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82bc3c78
	if (!ctx.cr6.lt) goto loc_82BC3C78;
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC3BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc3c78
	if (ctx.cr6.eq) goto loc_82BC3C78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3C08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82bc3c7c
	goto loc_82BC3C7C;
loc_82BC3C10:
	// lwz r27,1356(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1356);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82bc3c78
	if (!ctx.cr6.gt) goto loc_82BC3C78;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_82BC3C24:
	// lwz r11,1360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1360);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc3c54
	if (ctx.cr6.eq) goto loc_82BC3C54;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82bc3c5c
	goto loc_82BC3C5C;
loc_82BC3C54:
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82BC3C5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x82bc3cf8
	if (ctx.cr6.eq) goto loc_82BC3CF8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82bc3c24
	if (ctx.cr6.lt) goto loc_82BC3C24;
loc_82BC3C78:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_82BC3C7C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r31,25
	ctx.r30.s64 = ctx.r31.s64 + 25;
	// clrlwi r28,r29,24
	ctx.r28.u64 = ctx.r29.u32 & 0xFF;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
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
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC3CB0;
	sub_82BCACB0(ctx, base);
	// stb r28,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r28.u8);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc3d5c
	if (ctx.cr6.eq) goto loc_82BC3D5C;
	// lwz r3,12448(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc3d10
	if (!ctx.cr6.eq) goto loc_82BC3D10;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82120040
	ctx.lr = 0x82BC3CE8;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc3d08
	if (ctx.cr6.eq) goto loc_82BC3D08;
	// stw r19,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r19.u32);
	// b 0x82bc3d0c
	goto loc_82BC3D0C;
loc_82BC3CF8:
	// lwz r11,1360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1360);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82bc3c7c
	goto loc_82BC3C7C;
loc_82BC3D08:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82BC3D0C:
	// stw r3,12448(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12448, ctx.r3.u32);
loc_82BC3D10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bcf460
	ctx.lr = 0x82BC3D18;
	sub_82BCF460(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
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
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC3D48;
	sub_82BCACB0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,12704(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12704);
	// lbz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// bl 0x82bbe718
	ctx.lr = 0x82BC3D58;
	sub_82BBE718(ctx, base);
	// b 0x82bc3d90
	goto loc_82BC3D90;
loc_82BC3D5C:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
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
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC3D84;
	sub_82BCACB0(ctx, base);
	// lwz r3,12704(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12704);
	// lbz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// bl 0x82bbe070
	ctx.lr = 0x82BC3D90;
	sub_82BBE070(ctx, base);
loc_82BC3D90:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r24,r18
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x82bc3ba0
	if (ctx.cr6.lt) goto loc_82BC3BA0;
loc_82BC3D9C:
	// bl 0x821201b0
	ctx.lr = 0x82BC3DA0;
	sub_821201B0(ctx, base);
	// bl 0x82bcc3e8
	ctx.lr = 0x82BC3DA4;
	sub_82BCC3E8(ctx, base);
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82bc3e60
	if (!ctx.cr6.gt) goto loc_82BC3E60;
loc_82BC3DC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82bc0c70
	ctx.lr = 0x82BC3DD0;
	sub_82BC0C70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc3df4
	if (ctx.cr6.eq) goto loc_82BC3DF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bc3df8
	goto loc_82BC3DF8;
loc_82BC3DF4:
	// ld r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 136);
loc_82BC3DF8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// std r3,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r3.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc3e24
	if (ctx.cr6.eq) goto loc_82BC3E24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC3E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82bc3e2c
	goto loc_82BC3E2C;
loc_82BC3E24:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82BC3E2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82bbfee8
	ctx.lr = 0x82BC3E3C;
	sub_82BBFEE8(ctx, base);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC3E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82bc3dc4
	if (ctx.cr6.lt) goto loc_82BC3DC4;
loc_82BC3E60:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82bc2648
	ctx.lr = 0x82BC3E68;
	sub_82BC2648(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC3E74"))) PPC_WEAK_FUNC(sub_82BC3E74);
PPC_FUNC_IMPL(__imp__sub_82BC3E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3E78"))) PPC_WEAK_FUNC(sub_82BC3E78);
PPC_FUNC_IMPL(__imp__sub_82BC3E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82BC3E80;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bc404c
	if (ctx.cr6.eq) goto loc_82BC404C;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r29,r11,28756
	ctx.r29.s64 = ctx.r11.s64 + 28756;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,28756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28756);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC3EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r11,1,26,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3E;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r31,r10,108
	ctx.r31.s64 = ctx.r10.s64 + 108;
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// bl 0x82bbcba0
	ctx.lr = 0x82BC3EF4;
	sub_82BBCBA0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC3F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82bc4004
	if (!ctx.cr6.gt) goto loc_82BC4004;
	// addi r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 4;
	// addi r24,r29,16
	ctx.r24.s64 = ctx.r29.s64 + 16;
	// li r22,2
	ctx.r22.s64 = 2;
loc_82BC3F30:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc0c70
	ctx.lr = 0x82BC3F3C;
	sub_82BC0C70(ctx, base);
	// lwz r11,12704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bc3f84
	if (ctx.cr6.eq) goto loc_82BC3F84;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc3f84
	if (ctx.cr6.eq) goto loc_82BC3F84;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r7.u64;
loc_82BC3F84:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82bc3ff0
	if (ctx.cr6.eq) goto loc_82BC3FF0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC3FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc3ff0
	if (ctx.cr6.eq) goto loc_82BC3FF0;
	// lwz r3,12704(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// lbz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// bl 0x82bbe3e8
	ctx.lr = 0x82BC3FBC;
	sub_82BBE3E8(ctx, base);
	// clrlwi r11,r26,28
	ctx.r11.u64 = ctx.r26.u32 & 0xF;
	// li r5,64
	ctx.r5.s64 = 64;
	// mulli r10,r11,84
	ctx.r10.s64 = ctx.r11.s64 * 84;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,188
	ctx.r31.s64 = ctx.r11.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf55c8
	ctx.lr = 0x82BC3FDC;
	sub_82BF55C8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf5860
	ctx.lr = 0x82BC3FEC;
	sub_82BF5860(ctx, base);
	// stw r22,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_82BC3FF0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82bc3f30
	if (ctx.cr6.lt) goto loc_82BC3F30;
loc_82BC4004:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc38a0
	ctx.lr = 0x82BC4010;
	sub_82BC38A0(ctx, base);
	// lwz r11,12704(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12704);
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// ori r9,r10,34079
	ctx.r9.u64 = ctx.r10.u64 | 34079;
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mulhwu r7,r8,r9
	ctx.r7.u64 = (uint64_t(ctx.r8.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r6,r7,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r5,r6,100
	ctx.r5.s64 = ctx.r6.s64 * 100;
	// subf. r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82bc404c
	if (!ctx.cr0.eq) goto loc_82BC404C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc1f10
	ctx.lr = 0x82BC404C;
	sub_82BC1F10(ctx, base);
loc_82BC404C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC4054"))) PPC_WEAK_FUNC(sub_82BC4054);
PPC_FUNC_IMPL(__imp__sub_82BC4054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4058"))) PPC_WEAK_FUNC(sub_82BC4058);
PPC_FUNC_IMPL(__imp__sub_82BC4058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC4060;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC407C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r29,r30,25
	ctx.r29.s64 = ctx.r30.s64 + 25;
	// addi r9,r9,-20820
	ctx.r9.s64 = ctx.r9.s64 + -20820;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
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
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC40B0;
	sub_82BCACB0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC40B4;
	sub_821201B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bcc768
	ctx.lr = 0x82BC40BC;
	sub_82BCC768(ctx, base);
	// lwz r8,132(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bc4130
	if (!ctx.cr6.eq) goto loc_82BC4130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821215a0
	ctx.lr = 0x82BC40D0;
	sub_821215A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc4130
	if (!ctx.cr6.eq) goto loc_82BC4130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82121530
	ctx.lr = 0x82BC40E0;
	sub_82121530(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc4130
	if (!ctx.cr6.eq) goto loc_82BC4130;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc410c
	if (ctx.cr6.eq) goto loc_82BC410C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82bc4130
	if (ctx.cr6.eq) goto loc_82BC4130;
loc_82BC410C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc41d8
	if (ctx.cr6.eq) goto loc_82BC41D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82bc41d8
	if (!ctx.cr6.eq) goto loc_82BC41D8;
loc_82BC4130:
	// bl 0x821201b0
	ctx.lr = 0x82BC4134;
	sub_821201B0(ctx, base);
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc415c
	if (ctx.cr6.eq) goto loc_82BC415C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc41d8
	if (ctx.cr6.eq) goto loc_82BC41D8;
	// bl 0x821201b0
	ctx.lr = 0x82BC4150;
	sub_821201B0(ctx, base);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82bc41d8
	if (!ctx.cr6.eq) goto loc_82BC41D8;
loc_82BC415C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r10,-20772
	ctx.r9.s64 = ctx.r10.s64 + -20772;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4190;
	sub_82BCACB0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bc41d8
	if (!ctx.cr6.eq) goto loc_82BC41D8;
	// bl 0x821201b0
	ctx.lr = 0x82BC41A8;
	sub_821201B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,1344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1344);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bc41cc
	if (!ctx.cr6.eq) goto loc_82BC41CC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,13396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// bl 0x827f4278
	ctx.lr = 0x82BC41CC;
	sub_827F4278(ctx, base);
loc_82BC41CC:
	// lwz r11,1344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1344);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,1344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1344, ctx.r10.u32);
loc_82BC41D8:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// ori r29,r11,83
	ctx.r29.u64 = ctx.r11.u64 | 83;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC41F0;
	sub_82BC0E30(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc4210
	if (ctx.cr6.eq) goto loc_82BC4210;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC420C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bc4214
	goto loc_82BC4214;
loc_82BC4210:
	// ld r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 136);
loc_82BC4214:
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82bc427c
	if (!ctx.cr6.eq) goto loc_82BC427C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc427c
	if (ctx.cr6.eq) goto loc_82BC427C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC423C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc427c
	if (ctx.cr6.eq) goto loc_82BC427C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// std r31,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r31.u64);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r11,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC4270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BC427C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC428C"))) PPC_WEAK_FUNC(sub_82BC428C);
PPC_FUNC_IMPL(__imp__sub_82BC428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4290"))) PPC_WEAK_FUNC(sub_82BC4290);
PPC_FUNC_IMPL(__imp__sub_82BC4290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC4298;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// bl 0x821201b0
	ctx.lr = 0x82BC42B4;
	sub_821201B0(ctx, base);
	// bl 0x82bccbd8
	ctx.lr = 0x82BC42B8;
	sub_82BCCBD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821201b0
	ctx.lr = 0x82BC42C0;
	sub_821201B0(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82bc42d4
	if (!ctx.cr6.eq) goto loc_82BC42D4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r11,15288
	ctx.r10.s64 = ctx.r11.s64 + 15288;
	// b 0x82bc42e0
	goto loc_82BC42E0;
loc_82BC42D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcc088
	ctx.lr = 0x82BC42DC;
	sub_82BCC088(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BC42E0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,-21136
	ctx.r9.s64 = ctx.r11.s64 + -21136;
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
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4308;
	sub_82BCACB0(ctx, base);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// ori r9,r10,10049
	ctx.r9.u64 = ctx.r10.u64 | 10049;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bc4368
	if (!ctx.cr6.eq) goto loc_82BC4368;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82bc434c
	if (!ctx.cr6.eq) goto loc_82BC434C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r9,r11,-21100
	ctx.r9.s64 = ctx.r11.s64 + -21100;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC432C;
	sub_82BCACB0(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r4,21
	ctx.r4.s64 = 21;
	// lwz r3,13396(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// bl 0x827f4278
	ctx.lr = 0x82BC433C;
	sub_827F4278(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC4340;
	sub_821201B0(ctx, base);
	// lwz r11,1344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1344);
	// oris r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 1048576;
	// b 0x82bc4384
	goto loc_82BC4384;
loc_82BC434C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r9,r11,-21048
	ctx.r9.s64 = ctx.r11.s64 + -21048;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4358;
	sub_82BCACB0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC435C;
	sub_821201B0(ctx, base);
	// lwz r11,1344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1344);
	// oris r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 1048576;
	// b 0x82bc4384
	goto loc_82BC4384;
loc_82BC4368:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,1232
	ctx.r10.u64 = ctx.r11.u64 | 1232;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bc4388
	if (!ctx.cr6.eq) goto loc_82BC4388;
	// bl 0x821201b0
	ctx.lr = 0x82BC437C;
	sub_821201B0(ctx, base);
	// lwz r11,1344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1344);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
loc_82BC4384:
	// stw r10,1344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1344, ctx.r10.u32);
loc_82BC4388:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// bl 0x82204940
	ctx.lr = 0x82BC43A4;
	sub_82204940(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r3.u64);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC43B8"))) PPC_WEAK_FUNC(sub_82BC43B8);
PPC_FUNC_IMPL(__imp__sub_82BC43B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x82BC43C0;
	__savegprlr_16(ctx, base);
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f29.u64);
	// stfd f30,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x821201b0
	ctx.lr = 0x82BC43D8;
	sub_821201B0(ctx, base);
	// bl 0x82bca8e0
	ctx.lr = 0x82BC43DC;
	sub_82BCA8E0(ctx, base);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r18,1
	ctx.r18.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc4404
	if (ctx.cr6.eq) goto loc_82BC4404;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC4404:
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc4734
	if (ctx.cr6.eq) goto loc_82BC4734;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82bc4734
	if (ctx.cr6.eq) goto loc_82BC4734;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC443C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x82bc4734
	if (ctx.cr6.eq) goto loc_82BC4734;
	// stw r18,32(r22)
	PPC_STORE_U32(ctx.r22.u32 + 32, ctx.r18.u32);
	// lis r19,-31942
	ctx.r19.s64 = -2093350912;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r17,-1
	ctx.r17.s64 = -1;
	// addi r9,r11,-21560
	ctx.r9.s64 = ctx.r11.s64 + -21560;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,12704(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12704);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x82bcacb0
	ctx.lr = 0x82BC447C;
	sub_82BCACB0(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13316);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8222dc78
	ctx.lr = 0x82BC448C;
	sub_8222DC78(ctx, base);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r3,12492(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12492);
	// rlwinm r20,r8,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82121770
	ctx.lr = 0x82BC44A8;
	sub_82121770(ctx, base);
	// lwz r7,3388(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3388);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bc465c
	if (ctx.cr6.eq) goto loc_82BC465C;
	// lwz r11,13316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13316);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc44d0
	if (ctx.cr6.eq) goto loc_82BC44D0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82bc465c
	if (ctx.cr6.eq) goto loc_82BC465C;
loc_82BC44D0:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x822048c8
	ctx.lr = 0x82BC44DC;
	sub_822048C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,3388(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3388);
	// bl 0x82bc0f18
	ctx.lr = 0x82BC44F0;
	sub_82BC0F18(ctx, base);
	// lwz r11,3388(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3388);
	// lwz r3,240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// bl 0x82208d20
	ctx.lr = 0x82BC44FC;
	sub_82208D20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bc4650
	if (!ctx.cr6.eq) goto loc_82BC4650;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,61
	ctx.r6.s64 = 3997696;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f29,-29864(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29864);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,-30812(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30812);
	ctx.f30.f64 = double(temp.f32);
	// ori r26,r6,2304
	ctx.r26.u64 = ctx.r6.u64 | 2304;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// addi r25,r11,-19740
	ctx.r25.s64 = ctx.r11.s64 + -19740;
	// addi r27,r10,-21500
	ctx.r27.s64 = ctx.r10.s64 + -21500;
	// addi r23,r9,-21516
	ctx.r23.s64 = ctx.r9.s64 + -21516;
loc_82BC453C:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821ef640
	ctx.lr = 0x82BC4544;
	sub_821EF640(ctx, base);
	// bl 0x822048c8
	ctx.lr = 0x82BC4548;
	sub_822048C8(ctx, base);
	// subf r11,r24,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r24.s64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpld cr6,r28,r26
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r26.u64, ctx.xer);
	// ble cr6,0x82bc45b0
	if (!ctx.cr6.gt) goto loc_82BC45B0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82bc45b0
	if (!ctx.cr6.eq) goto loc_82BC45B0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82bc45b8
	if (!ctx.cr6.eq) goto loc_82BC45B8;
	// lwz r11,13316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13316);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc458c
	if (ctx.cr6.eq) goto loc_82BC458C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x827f7df0
	ctx.lr = 0x82BC4588;
	sub_827F7DF0(ctx, base);
	// lwz r11,13316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13316);
loc_82BC458C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,2139
	ctx.r5.s64 = 2139;
	// bl 0x827f7d08
	ctx.lr = 0x82BC459C;
	sub_827F7D08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,13316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13316);
	// bl 0x827f8a50
	ctx.lr = 0x82BC45A8;
	sub_827F8A50(ctx, base);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82bc4608
	goto loc_82BC4608;
loc_82BC45B0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82bc4608
	if (ctx.cr6.eq) goto loc_82BC4608;
loc_82BC45B8:
	// lwz r3,12492(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12492);
	// bl 0x82121770
	ctx.lr = 0x82BC45C0;
	sub_82121770(ctx, base);
	// fsubs f2,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f2,f30
	ctx.cr6.compare(ctx.f2.f64, ctx.f30.f64);
	// bgt cr6,0x82bc45d4
	if (ctx.cr6.gt) goto loc_82BC45D4;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
loc_82BC45D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,13416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13416);
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82bed1c8
	ctx.lr = 0x82BC45E4;
	sub_82BED1C8(ctx, base);
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// bl 0x82bb9b28
	ctx.lr = 0x82BC45F0;
	sub_82BB9B28(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r3,13416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13416);
	// bl 0x82becf98
	ctx.lr = 0x82BC45FC;
	sub_82BECF98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82bbade0
	ctx.lr = 0x82BC4608;
	sub_82BBADE0(ctx, base);
loc_82BC4608:
	// lwz r11,3388(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3388);
	// lwz r3,240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// bl 0x82208d20
	ctx.lr = 0x82BC4614;
	sub_82208D20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc453c
	if (ctx.cr6.eq) goto loc_82BC453C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82bc4650
	if (ctx.cr6.eq) goto loc_82BC4650;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82bc4650
	if (!ctx.cr6.eq) goto loc_82BC4650;
	// lwz r31,13316(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13316);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc4650
	if (ctx.cr6.eq) goto loc_82BC4650;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827f7f50
	ctx.lr = 0x82BC4648;
	sub_827F7F50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82BC4650:
	// lwz r11,3388(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 3388);
	// lwz r3,256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// b 0x82bc4674
	goto loc_82BC4674;
loc_82BC465C:
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC4674:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc471c
	if (ctx.cr6.eq) goto loc_82BC471C;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,29768
	ctx.r9.s64 = ctx.r10.s64 + 29768;
	// lwz r10,29768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc46b0
	if (ctx.cr6.eq) goto loc_82BC46B0;
loc_82BC4694:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bc46b0
	if (ctx.cr6.eq) goto loc_82BC46B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82bc4694
	if (!ctx.cr6.eq) goto loc_82BC4694;
loc_82BC46B0:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r6,r9,-23124
	ctx.r6.s64 = ctx.r9.s64 + -23124;
	// addi r5,r8,-21492
	ctx.r5.s64 = ctx.r8.s64 + -21492;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r4,1077
	ctx.r4.s64 = 1077;
	// addi r9,r7,14148
	ctx.r9.s64 = ctx.r7.s64 + 14148;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4700;
	sub_82BCACB0(ctx, base);
	// lwz r11,12704(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12704);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r9,r3,-21456
	ctx.r9.s64 = ctx.r3.s64 + -21456;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4718;
	sub_82BCACB0(ctx, base);
	// stw r18,24(r22)
	PPC_STORE_U32(ctx.r22.u32 + 24, ctx.r18.u32);
loc_82BC471C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
loc_82BC4734:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC474C"))) PPC_WEAK_FUNC(sub_82BC474C);
PPC_FUNC_IMPL(__imp__sub_82BC474C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4750"))) PPC_WEAK_FUNC(sub_82BC4750);
PPC_FUNC_IMPL(__imp__sub_82BC4750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82BC4758;
	__savegprlr_14(ctx, base);
	// stwu r1,-1920(r1)
	ea = -1920 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821215a0
	ctx.lr = 0x82BC4764;
	sub_821215A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc478c
	if (!ctx.cr6.eq) goto loc_82BC478C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1920
	ctx.r1.s64 = ctx.r1.s64 + 1920;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
loc_82BC478C:
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r11,12704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x82bc47b4
	if (ctx.cr6.lt) goto loc_82BC47B4;
	// lwz r11,3184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x82bc47b8
	if (ctx.cr6.eq) goto loc_82BC47B8;
loc_82BC47B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BC47B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc4824
	if (ctx.cr6.eq) goto loc_82BC4824;
	// bl 0x821201b0
	ctx.lr = 0x82BC47CC;
	sub_821201B0(ctx, base);
	// bl 0x82bccbd8
	ctx.lr = 0x82BC47D0;
	sub_82BCCBD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821201b0
	ctx.lr = 0x82BC47D8;
	sub_821201B0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82bc47ec
	if (!ctx.cr6.eq) goto loc_82BC47EC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15288
	ctx.r3.s64 = ctx.r11.s64 + 15288;
	// b 0x82bc47f4
	goto loc_82BC47F4;
loc_82BC47EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcc088
	ctx.lr = 0x82BC47F4;
	sub_82BCC088(ctx, base);
loc_82BC47F4:
	// lwz r11,12704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r10,-22960
	ctx.r9.s64 = ctx.r10.s64 + -22960;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4824;
	sub_82BCACB0(ctx, base);
loc_82BC4824:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC4838;
	sub_82BC0E30(ctx, base);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// bne cr6,0x82bc487c
	if (!ctx.cr6.eq) goto loc_82BC487C;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bc487c
	if (ctx.cr6.eq) goto loc_82BC487C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC4868;
	sub_82BC0E30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bc487c
	if (!ctx.cr6.eq) goto loc_82BC487C;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bc48b4
	if (!ctx.cr6.eq) goto loc_82BC48B4;
loc_82BC487C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc43b8
	ctx.lr = 0x82BC4884;
	sub_82BC43B8(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC4888;
	sub_821201B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bc48a8
	if (!ctx.cr6.eq) goto loc_82BC48A8;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,13396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13396);
	// bl 0x827f4278
	ctx.lr = 0x82BC48A8;
	sub_827F4278(ctx, base);
loc_82BC48A8:
	// lwz r11,1344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r10.u32);
loc_82BC48B4:
	// bl 0x822048c0
	ctx.lr = 0x82BC48B8;
	sub_822048C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stb r11,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r11.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r6,r6,-22780
	ctx.r6.s64 = ctx.r6.s64 + -22780;
	// addi r5,r5,-22880
	ctx.r5.s64 = ctx.r5.s64 + -22880;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// li r17,1500
	ctx.r17.s64 = 1500;
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// addi r16,r11,-20236
	ctx.r16.s64 = ctx.r11.s64 + -20236;
	// addi r15,r10,-20360
	ctx.r15.s64 = ctx.r10.s64 + -20360;
	// addi r20,r9,-22696
	ctx.r20.s64 = ctx.r9.s64 + -22696;
	// addi r19,r8,-22724
	ctx.r19.s64 = ctx.r8.s64 + -22724;
	// addi r14,r7,-22752
	ctx.r14.s64 = ctx.r7.s64 + -22752;
	// addi r18,r4,-22916
	ctx.r18.s64 = ctx.r4.s64 + -22916;
loc_82BC4914:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82BC492C:
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r17,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r17.u32);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82bc49d8
	if (!ctx.cr6.gt) goto loc_82BC49D8;
loc_82BC4940:
	// lwz r11,12704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x82bc0c70
	ctx.lr = 0x82BC4954;
	sub_82BC0C70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12704(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// bl 0x82bbe3e8
	ctx.lr = 0x82BC4968;
	sub_82BBE3E8(ctx, base);
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// mulli r11,r9,84
	ctx.r11.s64 = ctx.r9.s64 * 84;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,264(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 264);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bge cr6,0x82bc49cc
	if (!ctx.cr6.lt) goto loc_82BC49CC;
	// clrlwi r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	// clrlwi r10,r31,26
	ctx.r10.u64 = ctx.r31.u32 & 0x3F;
	// mulli r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 * 84;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,268(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bc49cc
	if (ctx.cr6.eq) goto loc_82BC49CC;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc4d40
	if (ctx.cr6.eq) goto loc_82BC4D40;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC49C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc4d40
	if (ctx.cr6.eq) goto loc_82BC4D40;
loc_82BC49CC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82bc4940
	if (ctx.cr6.lt) goto loc_82BC4940;
loc_82BC49D8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bgt cr6,0x82bc4a8c
	if (ctx.cr6.gt) goto loc_82BC4A8C;
	// lwz r11,12704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4A08;
	sub_82BCACB0(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc4a84
	if (ctx.cr6.eq) goto loc_82BC4A84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82bc4a84
	if (!ctx.cr6.eq) goto loc_82BC4A84;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bc4a84
	if (!ctx.cr6.eq) goto loc_82BC4A84;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bc4a84
	if (!ctx.cr6.eq) goto loc_82BC4A84;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bc4a84
	if (!ctx.cr6.eq) goto loc_82BC4A84;
	// bl 0x821201b0
	ctx.lr = 0x82BC4A54;
	sub_821201B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bc4a78
	if (!ctx.cr6.eq) goto loc_82BC4A78;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,13396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// bl 0x827f4278
	ctx.lr = 0x82BC4A78;
	sub_827F4278(ctx, base);
loc_82BC4A78:
	// lwz r11,1344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r10.u32);
loc_82BC4A84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc43b8
	ctx.lr = 0x82BC4A8C;
	sub_82BC43B8(ctx, base);
loc_82BC4A8C:
	// bl 0x822048c0
	ctx.lr = 0x82BC4A90;
	sub_822048C0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc4ed0
	if (ctx.cr6.eq) goto loc_82BC4ED0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82bc4ed0
	if (!ctx.cr6.eq) goto loc_82BC4ED0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bc4ed0
	if (!ctx.cr6.eq) goto loc_82BC4ED0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bc4ed0
	if (!ctx.cr6.eq) goto loc_82BC4ED0;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// beq cr6,0x82bc4e7c
	if (ctx.cr6.eq) goto loc_82BC4E7C;
	// lbz r10,161(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 161);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc4b08
	if (ctx.cr6.eq) goto loc_82BC4B08;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stb r21,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r21.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
loc_82BC4B08:
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// cmpwi cr6,r11,85
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 85, ctx.xer);
	// blt cr6,0x82bc4914
	if (ctx.cr6.lt) goto loc_82BC4914;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc10b0
	ctx.lr = 0x82BC4B1C;
	sub_82BC10B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc4b50
	if (ctx.cr6.eq) goto loc_82BC4B50;
	// lwz r11,12704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4B50;
	sub_82BCACB0(ctx, base);
loc_82BC4B50:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4B64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// blt cr6,0x82bc4e38
	if (ctx.cr6.lt) goto loc_82BC4E38;
loc_82BC4B74:
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82bc4e38
	if (!ctx.cr6.lt) goto loc_82BC4E38;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc0c70
	ctx.lr = 0x82BC4B88;
	sub_82BC0C70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bc4d38
	if (ctx.cr6.eq) goto loc_82BC4D38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc10b0
	ctx.lr = 0x82BC4B9C;
	sub_82BC10B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r31,12704(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc4bd0
	if (ctx.cr6.eq) goto loc_82BC4BD0;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
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
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4BD0;
	sub_82BCACB0(ctx, base);
loc_82BC4BD0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x82bbe3e8
	ctx.lr = 0x82BC4BE4;
	sub_82BBE3E8(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// mulli r11,r10,84
	ctx.r11.s64 = ctx.r10.s64 * 84;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,264(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bge cr6,0x82bc4c9c
	if (!ctx.cr6.lt) goto loc_82BC4C9C;
	// clrlwi r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	// clrlwi r10,r31,26
	ctx.r10.u64 = ctx.r31.u32 & 0x3F;
	// mulli r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 * 84;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,268(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bc4c9c
	if (ctx.cr6.eq) goto loc_82BC4C9C;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc4c48
	if (ctx.cr6.eq) goto loc_82BC4C48;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc4c9c
	if (!ctx.cr6.eq) goto loc_82BC4C9C;
loc_82BC4C48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc10b0
	ctx.lr = 0x82BC4C50;
	sub_82BC10B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc4c84
	if (ctx.cr6.eq) goto loc_82BC4C84;
	// lwz r11,12704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
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
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4C84;
	sub_82BCACB0(ctx, base);
loc_82BC4C84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc38a0
	ctx.lr = 0x82BC4C90;
	sub_82BC38A0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82BC4C9C:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc4d38
	if (!ctx.cr6.eq) goto loc_82BC4D38;
	// bl 0x822048c0
	ctx.lr = 0x82BC4CBC;
	sub_822048C0(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,4500
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4500, ctx.xer);
	// ble cr6,0x82bc4d38
	if (!ctx.cr6.gt) goto loc_82BC4D38;
	// lwz r11,12704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// addi r10,r30,25
	ctx.r10.s64 = ctx.r30.s64 + 25;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4CFC;
	sub_82BCACB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc43b8
	ctx.lr = 0x82BC4D04;
	sub_82BC43B8(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC4D08;
	sub_821201B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,1344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bc4d2c
	if (!ctx.cr6.eq) goto loc_82BC4D2C;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,13396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// bl 0x827f4278
	ctx.lr = 0x82BC4D2C;
	sub_827F4278(ctx, base);
loc_82BC4D2C:
	// lwz r11,1344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r10.u32);
loc_82BC4D38:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82bc4b74
	goto loc_82BC4B74;
loc_82BC4D40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc10b0
	ctx.lr = 0x82BC4D48;
	sub_82BC10B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc4d7c
	if (ctx.cr6.eq) goto loc_82BC4D7C;
	// lwz r11,12704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
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
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4D7C;
	sub_82BCACB0(ctx, base);
loc_82BC4D7C:
	// lwz r3,12700(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12700);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc4db8
	if (!ctx.cr6.eq) goto loc_82BC4DB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82120040
	ctx.lr = 0x82BC4D98;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc4db0
	if (ctx.cr6.eq) goto loc_82BC4DB0;
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// stw r21,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r21.u32);
	// stw r21,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r21.u32);
	// b 0x82bc4db4
	goto loc_82BC4DB4;
loc_82BC4DB0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82BC4DB4:
	// stw r3,12700(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12700, ctx.r3.u32);
loc_82BC4DB8:
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x82bbed48
	ctx.lr = 0x82BC4DC8;
	sub_82BBED48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc49d8
	if (ctx.cr6.eq) goto loc_82BC49D8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82215538
	ctx.lr = 0x82BC4DD8;
	sub_82215538(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x82215648
	ctx.lr = 0x82BC4DF8;
	sub_82215648(ctx, base);
	// lbz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// rlwinm r3,r9,27,5,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// bl 0x82bbd078
	ctx.lr = 0x82BC4E04;
	sub_82BBD078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BC4E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc35d8
	ctx.lr = 0x82BC4E30;
	sub_82BC35D8(ctx, base);
	// stw r16,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r16.u32);
	// b 0x82bc492c
	goto loc_82BC492C;
loc_82BC4E38:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc4ed0
	if (ctx.cr6.eq) goto loc_82BC4ED0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82bc4ed0
	if (!ctx.cr6.eq) goto loc_82BC4ED0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bc4ed0
	if (!ctx.cr6.eq) goto loc_82BC4ED0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bc4ed0
	if (!ctx.cr6.eq) goto loc_82BC4ED0;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82bc4914
	goto loc_82BC4914;
loc_82BC4E7C:
	// lwz r11,12704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// blt cr6,0x82bc4e9c
	if (ctx.cr6.lt) goto loc_82BC4E9C;
	// lwz r11,3184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x82bc4ea0
	if (ctx.cr6.eq) goto loc_82BC4EA0;
loc_82BC4E9C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BC4EA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc4ed0
	if (ctx.cr6.eq) goto loc_82BC4ED0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-22832
	ctx.r9.s64 = ctx.r11.s64 + -22832;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC4ED0;
	sub_82BCACB0(ctx, base);
loc_82BC4ED0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,1920
	ctx.r1.s64 = ctx.r1.s64 + 1920;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC4EDC"))) PPC_WEAK_FUNC(sub_82BC4EDC);
PPC_FUNC_IMPL(__imp__sub_82BC4EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC4EE0"))) PPC_WEAK_FUNC(sub_82BC4EE0);
PPC_FUNC_IMPL(__imp__sub_82BC4EE0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc2b88
	ctx.lr = 0x82BC4EFC;
	sub_82BC2B88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc43b8
	ctx.lr = 0x82BC4F04;
	sub_82BC43B8(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC4F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r9,r7,-23240
	ctx.r9.s64 = ctx.r7.s64 + -23240;
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
	ctx.lr = 0x82BC4F58;
	sub_82BCACB0(ctx, base);
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

__attribute__((alias("__imp__sub_82BC4F70"))) PPC_WEAK_FUNC(sub_82BC4F70);
PPC_FUNC_IMPL(__imp__sub_82BC4F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC4F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc4f94
	if (ctx.cr6.eq) goto loc_82BC4F94;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,3184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3184, ctx.r11.u32);
loc_82BC4F94:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc4fe4
	if (ctx.cr6.eq) goto loc_82BC4FE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC4FB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc4fe4
	if (!ctx.cr6.eq) goto loc_82BC4FE4;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bc4fdc
	if (ctx.cr6.eq) goto loc_82BC4FDC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82bc4fdc
	if (ctx.cr6.eq) goto loc_82BC4FDC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82bc4fe0
	if (!ctx.cr6.eq) goto loc_82BC4FE0;
loc_82BC4FDC:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_82BC4FE0:
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_82BC4FE4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc500c
	if (ctx.cr6.eq) goto loc_82BC500C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC5000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bc500c
	if (!ctx.cr6.eq) goto loc_82BC500C;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82BC500C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc5038
	if (ctx.cr6.eq) goto loc_82BC5038;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC5028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82bc5038
	if (!ctx.cr6.eq) goto loc_82BC5038;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82BC5038:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc5064
	if (ctx.cr6.eq) goto loc_82BC5064;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC5054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82bc5064
	if (!ctx.cr6.eq) goto loc_82BC5064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc3290
	ctx.lr = 0x82BC5064;
	sub_82BC3290(ctx, base);
loc_82BC5064:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc5090
	if (ctx.cr6.eq) goto loc_82BC5090;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC5080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82bc5090
	if (!ctx.cr6.eq) goto loc_82BC5090;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82BC5090:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc50bc
	if (ctx.cr6.eq) goto loc_82BC50BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC50AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x82bc50bc
	if (!ctx.cr6.eq) goto loc_82BC50BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc3b38
	ctx.lr = 0x82BC50BC;
	sub_82BC3B38(ctx, base);
loc_82BC50BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82121530
	ctx.lr = 0x82BC50C4;
	sub_82121530(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc50ec
	if (ctx.cr6.eq) goto loc_82BC50EC;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82bc50dc
	if (ctx.cr6.eq) goto loc_82BC50DC;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
loc_82BC50DC:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x82bc1d68
	ctx.lr = 0x82BC50EC;
	sub_82BC1D68(ctx, base);
loc_82BC50EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821215a0
	ctx.lr = 0x82BC50F4;
	sub_821215A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc5104
	if (ctx.cr6.eq) goto loc_82BC5104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc3538
	ctx.lr = 0x82BC5104;
	sub_82BC3538(ctx, base);
loc_82BC5104:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82121610
	ctx.lr = 0x82BC510C;
	sub_82121610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc511c
	if (ctx.cr6.eq) goto loc_82BC511C;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82BC511C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc5148
	if (ctx.cr6.eq) goto loc_82BC5148;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC5138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82bc5148
	if (!ctx.cr6.eq) goto loc_82BC5148;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82BC5148:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc5174
	if (ctx.cr6.eq) goto loc_82BC5174;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC5164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82bc5174
	if (!ctx.cr6.eq) goto loc_82BC5174;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82BC5174:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc51a0
	if (ctx.cr6.eq) goto loc_82BC51A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC5190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// bne cr6,0x82bc51a0
	if (!ctx.cr6.eq) goto loc_82BC51A0;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82BC51A0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc51b4
	if (ctx.cr6.eq) goto loc_82BC51B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc43b8
	ctx.lr = 0x82BC51B4;
	sub_82BC43B8(ctx, base);
loc_82BC51B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc51dc
	if (ctx.cr6.eq) goto loc_82BC51DC;
	// bl 0x822048c0
	ctx.lr = 0x82BC51C4;
	sub_822048C0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC51D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x822048c0
	ctx.lr = 0x82BC51DC;
	sub_822048C0(ctx, base);
loc_82BC51DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC51E4"))) PPC_WEAK_FUNC(sub_82BC51E4);
PPC_FUNC_IMPL(__imp__sub_82BC51E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC51E8"))) PPC_WEAK_FUNC(sub_82BC51E8);
PPC_FUNC_IMPL(__imp__sub_82BC51E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BC51F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,48(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r29,r11,108
	ctx.r29.s64 = ctx.r11.s64 + 108;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC522C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc545c
	if (!ctx.cr6.eq) goto loc_82BC545C;
	// lwz r11,3180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3180);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bc545c
	if (!ctx.cr6.eq) goto loc_82BC545C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bc5368
	if (!ctx.cr6.eq) goto loc_82BC5368;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bc52c0
	if (ctx.cr6.eq) goto loc_82BC52C0;
	// bl 0x821201b0
	ctx.lr = 0x82BC5268;
	sub_821201B0(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lwz r30,20(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r3,-20576
	ctx.r9.s64 = ctx.r3.s64 + -20576;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC52A8;
	sub_82BCACB0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC52AC;
	sub_821201B0(ctx, base);
	// lwz r11,1344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1344);
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// stw r10,1344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1344, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,3180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3180, ctx.r9.u32);
loc_82BC52C0:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
loc_82BC52CC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82bc52f4
	if (!ctx.cr6.eq) goto loc_82BC52F4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82bc52cc
	if (ctx.cr6.lt) goto loc_82BC52CC;
	// b 0x82bc5368
	goto loc_82BC5368;
loc_82BC52F4:
	// bl 0x821201b0
	ctx.lr = 0x82BC52F8;
	sub_821201B0(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// lwz r8,336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r11,r7,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// addi r9,r3,-20496
	ctx.r9.s64 = ctx.r3.s64 + -20496;
	// lwzx r30,r4,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82bcacb0
	ctx.lr = 0x82BC5350;
	sub_82BCACB0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC5354;
	sub_821201B0(ctx, base);
	// lwz r10,1344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1344);
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// stw r9,1344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1344, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,3180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3180, ctx.r8.u32);
loc_82BC5368:
	// lwz r11,3180(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3180);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bc545c
	if (ctx.cr6.eq) goto loc_82BC545C;
	// bl 0x821201b0
	ctx.lr = 0x82BC5378;
	sub_821201B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bc539c
	if (!ctx.cr6.eq) goto loc_82BC539C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,13396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// bl 0x827f4278
	ctx.lr = 0x82BC539C;
	sub_827F4278(ctx, base);
loc_82BC539C:
	// lwz r11,1344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1344);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r10.u32);
	// bl 0x82bc43b8
	ctx.lr = 0x82BC53B0;
	sub_82BC43B8(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,3180(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3180);
	// addi r4,r9,-20412
	ctx.r4.s64 = ctx.r9.s64 + -20412;
	// bl 0x82123240
	ctx.lr = 0x82BC53C4;
	sub_82123240(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x82BC53C8;
	sub_821201B0(ctx, base);
	// lwz r8,1344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1344);
	// rlwinm r7,r8,0,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82bc5410
	if (ctx.cr6.eq) goto loc_82BC5410;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r10,-20384
	ctx.r10.s64 = ctx.r10.s64 + -20384;
loc_82BC53E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bc53e4
	if (!ctx.cr6.eq) goto loc_82BC53E4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82BC53F8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82bc53f8
	if (!ctx.cr6.eq) goto loc_82BC53F8;
loc_82BC5410:
	// bl 0x821201b0
	ctx.lr = 0x82BC5414;
	sub_821201B0(ctx, base);
	// lwz r11,1344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1344);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bc545c
	if (ctx.cr6.eq) goto loc_82BC545C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r10,-20372
	ctx.r10.s64 = ctx.r10.s64 + -20372;
loc_82BC5430:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bc5430
	if (!ctx.cr6.eq) goto loc_82BC5430;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82BC5444:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82bc5444
	if (!ctx.cr6.eq) goto loc_82BC5444;
loc_82BC545C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5464"))) PPC_WEAK_FUNC(sub_82BC5464);
PPC_FUNC_IMPL(__imp__sub_82BC5464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5468"))) PPC_WEAK_FUNC(sub_82BC5468);
PPC_FUNC_IMPL(__imp__sub_82BC5468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BC5470;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82215538
	ctx.lr = 0x82BC548C;
	sub_82215538(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-20360
	ctx.r10.s64 = ctx.r11.s64 + -20360;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC54B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822048c0
	ctx.lr = 0x82BC54BC;
	sub_822048C0(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bc55e8
	if (ctx.cr6.eq) goto loc_82BC55E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r28,r11,-20644
	ctx.r28.s64 = ctx.r11.s64 + -20644;
loc_82BC54DC:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82215648
	ctx.lr = 0x82BC54E8;
	sub_82215648(ctx, base);
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// rlwinm r3,r11,27,5,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// bl 0x82bbd078
	ctx.lr = 0x82BC54F4;
	sub_82BBD078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC5514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r11,r7,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc5534
	if (!ctx.cr6.eq) goto loc_82BC5534;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc35d8
	ctx.lr = 0x82BC5530;
	sub_82BC35D8(ctx, base);
	// b 0x82bc55dc
	goto loc_82BC55DC;
loc_82BC5534:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82bc5550
	if (!ctx.cr6.eq) goto loc_82BC5550;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc51e8
	ctx.lr = 0x82BC554C;
	sub_82BC51E8(ctx, base);
	// b 0x82bc55dc
	goto loc_82BC55DC;
loc_82BC5550:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82bc5594
	if (!ctx.cr6.eq) goto loc_82BC5594;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc5594
	if (ctx.cr6.eq) goto loc_82BC5594;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC5578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82bc5594
	if (!ctx.cr6.eq) goto loc_82BC5594;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc0f90
	ctx.lr = 0x82BC5590;
	sub_82BC0F90(ctx, base);
	// b 0x82bc55dc
	goto loc_82BC55DC;
loc_82BC5594:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// bne cr6,0x82bc55dc
	if (!ctx.cr6.eq) goto loc_82BC55DC;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r30,25
	ctx.r10.s64 = ctx.r30.s64 + 25;
	// lwz r11,12704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12704);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bcacb0
	ctx.lr = 0x82BC55DC;
	sub_82BCACB0(ctx, base);
loc_82BC55DC:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc54dc
	if (!ctx.cr6.eq) goto loc_82BC54DC;
loc_82BC55E8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC55F0"))) PPC_WEAK_FUNC(sub_82BC55F0);
PPC_FUNC_IMPL(__imp__sub_82BC55F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC55F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r10,r10,82
	ctx.r10.u64 = ctx.r10.u64 | 82;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bc5650
	if (!ctx.cr6.eq) goto loc_82BC5650;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC5620;
	sub_82BC0E30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r9,r11,-20736
	ctx.r9.s64 = ctx.r11.s64 + -20736;
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
	ctx.lr = 0x82BC5648;
	sub_82BCACB0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BC5650:
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// ori r4,r10,83
	ctx.r4.u64 = ctx.r10.u64 | 83;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82bc5720
	if (!ctx.cr6.eq) goto loc_82BC5720;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc0e30
	ctx.lr = 0x82BC566C;
	sub_82BC0E30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bc5720
	if (!ctx.cr6.eq) goto loc_82BC5720;
	// bl 0x821201b0
	ctx.lr = 0x82BC5678;
	sub_821201B0(ctx, base);
	// ld r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bcc200
	ctx.lr = 0x82BC5684;
	sub_82BCC200(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x82bc5720
	if (ctx.cr6.eq) goto loc_82BC5720;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc5720
	if (ctx.cr6.eq) goto loc_82BC5720;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC56AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc5720
	if (ctx.cr6.eq) goto loc_82BC5720;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r31,25
	ctx.r10.s64 = ctx.r31.s64 + 25;
	// addi r9,r11,-20684
	ctx.r9.s64 = ctx.r11.s64 + -20684;
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
	ctx.lr = 0x82BC56DC;
	sub_82BCACB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bbfee8
	ctx.lr = 0x82BC56EC;
	sub_82BBFEE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC5700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc5710
	if (ctx.cr6.eq) goto loc_82BC5710;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc43b8
	ctx.lr = 0x82BC5710;
	sub_82BC43B8(ctx, base);
loc_82BC5710:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,13396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// bl 0x827f4278
	ctx.lr = 0x82BC5720;
	sub_827F4278(ctx, base);
loc_82BC5720:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5728"))) PPC_WEAK_FUNC(sub_82BC5728);
PPC_FUNC_IMPL(__imp__sub_82BC5728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,-15760
	ctx.r11.s64 = ctx.r11.s64 + -15760;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82c09bdc
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC573C"))) PPC_WEAK_FUNC(sub_82BC573C);
PPC_FUNC_IMPL(__imp__sub_82BC573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5740"))) PPC_WEAK_FUNC(sub_82BC5740);
PPC_FUNC_IMPL(__imp__sub_82BC5740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,-15760
	ctx.r11.s64 = ctx.r11.s64 + -15760;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82c09bec
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5754"))) PPC_WEAK_FUNC(sub_82BC5754);
PPC_FUNC_IMPL(__imp__sub_82BC5754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5758"))) PPC_WEAK_FUNC(sub_82BC5758);
PPC_FUNC_IMPL(__imp__sub_82BC5758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC575C"))) PPC_WEAK_FUNC(sub_82BC575C);
PPC_FUNC_IMPL(__imp__sub_82BC575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5760"))) PPC_WEAK_FUNC(sub_82BC5760);
PPC_FUNC_IMPL(__imp__sub_82BC5760) {
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
	// li r31,36
	ctx.r31.s64 = 36;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
loc_82BC5780:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09bcc
	ctx.lr = 0x82BC5788;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x82bc5780
	if (!ctx.cr0.eq) goto loc_82BC5780;
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

__attribute__((alias("__imp__sub_82BC57AC"))) PPC_WEAK_FUNC(sub_82BC57AC);
PPC_FUNC_IMPL(__imp__sub_82BC57AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC57B0"))) PPC_WEAK_FUNC(sub_82BC57B0);
PPC_FUNC_IMPL(__imp__sub_82BC57B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bc57c8
	if (!ctx.cr6.lt) goto loc_82BC57C8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82BC57C8:
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC57D8"))) PPC_WEAK_FUNC(sub_82BC57D8);
PPC_FUNC_IMPL(__imp__sub_82BC57D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r9,-8
	ctx.r6.s64 = ctx.r9.s64 + -8;
	// beq cr6,0x82bc5800
	if (ctx.cr6.eq) goto loc_82BC5800;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_82BC5800:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82bc5870
	if (ctx.cr6.gt) goto loc_82BC5870;
loc_82BC5808:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze. r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bc5890
	if (ctx.cr0.eq) goto loc_82BC5890;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82bc5828
	if (!ctx.cr6.eq) goto loc_82BC5828;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_82BC5828:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bc5850
	if (!ctx.cr6.lt) goto loc_82BC5850;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82bc5864
	if (!ctx.cr6.eq) goto loc_82BC5864;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// b 0x82bc5868
	goto loc_82BC5868;
loc_82BC5850:
	// ble cr6,0x82bc5878
	if (!ctx.cr6.gt) goto loc_82BC5878;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bc5860
	if (ctx.cr6.eq) goto loc_82BC5860;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82BC5860:
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82BC5864:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82BC5868:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82bc5808
	if (!ctx.cr6.gt) goto loc_82BC5808;
loc_82BC5870:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BC5874:
	// blr 
	return;
loc_82BC5878:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bc5888
	if (ctx.cr6.eq) goto loc_82BC5888;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82BC5888:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82BC5890:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc5870
	if (ctx.cr6.eq) goto loc_82BC5870;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bc58b8
	if (!ctx.cr6.gt) goto loc_82BC58B8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bc5870
	if (ctx.cr6.eq) goto loc_82BC5870;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82BC58B8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82bc5874
	if (!ctx.cr6.eq) goto loc_82BC5874;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC58C8"))) PPC_WEAK_FUNC(sub_82BC58C8);
PPC_FUNC_IMPL(__imp__sub_82BC58C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,22448
	ctx.r6.s64 = ctx.r11.s64 + 22448;
	// b 0x8221b460
	sub_8221B460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC58E0"))) PPC_WEAK_FUNC(sub_82BC58E0);
PPC_FUNC_IMPL(__imp__sub_82BC58E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC58E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82bc5988
	if (ctx.cr6.eq) goto loc_82BC5988;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82bc57d8
	ctx.lr = 0x82BC5918;
	sub_82BC57D8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82bc5988
	if (ctx.cr6.eq) goto loc_82BC5988;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc5968
	if (ctx.cr6.eq) goto loc_82BC5968;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bc597c
	if (ctx.cr6.eq) goto loc_82BC597C;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82bc5978
	goto loc_82BC5978;
loc_82BC5968:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC5978:
	// bl 0x82218c20
	ctx.lr = 0x82BC597C;
	sub_82218C20(ctx, base);
loc_82BC597C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82BC5988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5990"))) PPC_WEAK_FUNC(sub_82BC5990);
PPC_FUNC_IMPL(__imp__sub_82BC5990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r9,-8
	ctx.r6.s64 = ctx.r9.s64 + -8;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82bc5a0c
	if (ctx.cr6.gt) goto loc_82BC5A0C;
loc_82BC59B0:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze. r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82bc5a1c
	if (ctx.cr0.eq) goto loc_82BC5A1C;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82bc59d0
	if (!ctx.cr6.eq) goto loc_82BC59D0;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_82BC59D0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bc59f8
	if (!ctx.cr6.lt) goto loc_82BC59F8;
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82bc5a00
	if (!ctx.cr6.eq) goto loc_82BC5A00;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// b 0x82bc5a04
	goto loc_82BC5A04;
loc_82BC59F8:
	// ble cr6,0x82bc5a14
	if (!ctx.cr6.gt) goto loc_82BC5A14;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82BC5A00:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82BC5A04:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82bc59b0
	if (!ctx.cr6.gt) goto loc_82BC59B0;
loc_82BC5A0C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82BC5A14:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_82BC5A1C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc5a0c
	if (ctx.cr6.eq) goto loc_82BC5A0C;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82bc5a0c
	if (ctx.cr6.gt) goto loc_82BC5A0C;
	// bne cr6,0x82bc5a0c
	if (!ctx.cr6.eq) goto loc_82BC5A0C;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5A3C"))) PPC_WEAK_FUNC(sub_82BC5A3C);
PPC_FUNC_IMPL(__imp__sub_82BC5A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5A40"))) PPC_WEAK_FUNC(sub_82BC5A40);
PPC_FUNC_IMPL(__imp__sub_82BC5A40) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc5a64
	if (ctx.cr6.eq) goto loc_82BC5A64;
	// bl 0x82120a70
	ctx.lr = 0x82BC5A64;
	sub_82120A70(ctx, base);
loc_82BC5A64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BC5A88"))) PPC_WEAK_FUNC(sub_82BC5A88);
PPC_FUNC_IMPL(__imp__sub_82BC5A88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x82BC5AAC;
	sub_82120040(ctx, base);
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

__attribute__((alias("__imp__sub_82BC5AC4"))) PPC_WEAK_FUNC(sub_82BC5AC4);
PPC_FUNC_IMPL(__imp__sub_82BC5AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5AC8"))) PPC_WEAK_FUNC(sub_82BC5AC8);
PPC_FUNC_IMPL(__imp__sub_82BC5AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BC5AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82bc5b30
	if (!ctx.cr6.eq) goto loc_82BC5B30;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82bc5b20
	if (!ctx.cr6.eq) goto loc_82BC5B20;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x82BC5B1C;
	sub_82120040(ctx, base);
	// b 0x82bc5b2c
	goto loc_82BC5B2C;
loc_82BC5B20:
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82121828
	ctx.lr = 0x82BC5B2C;
	sub_82121828(ctx, base);
loc_82BC5B2C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82BC5B30:
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,26648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc5bfc
	if (ctx.cr6.eq) goto loc_82BC5BFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bc57d8
	ctx.lr = 0x82BC5B54;
	sub_82BC57D8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bc5b9c
	if (ctx.cr6.eq) goto loc_82BC5B9C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82bc5b74
	if (ctx.cr6.eq) goto loc_82BC5B74;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_82BC5B74:
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bc5b9c
	if (ctx.cr6.eq) goto loc_82BC5B9C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82bc5b9c
	if (!ctx.cr6.eq) goto loc_82BC5B9C;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BC5B9C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc5be4
	if (ctx.cr6.eq) goto loc_82BC5BE4;
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82bc5c08
	if (ctx.cr6.eq) goto loc_82BC5C08;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82218c20
	ctx.lr = 0x82BC5BDC;
	sub_82218C20(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82bc5c08
	goto loc_82BC5C08;
loc_82BC5BE4:
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82218c20
	ctx.lr = 0x82BC5BF4;
	sub_82218C20(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82bc5c08
	goto loc_82BC5C08;
loc_82BC5BFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82BC5C08:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5C24"))) PPC_WEAK_FUNC(sub_82BC5C24);
PPC_FUNC_IMPL(__imp__sub_82BC5C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5C28"))) PPC_WEAK_FUNC(sub_82BC5C28);
PPC_FUNC_IMPL(__imp__sub_82BC5C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,12496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12496);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82bc5c5c
	if (!ctx.cr6.eq) goto loc_82BC5C5C;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,12500(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12500, ctx.r10.u32);
	// stw r9,12688(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12688, ctx.r9.u32);
	// stw r8,12496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12496, ctx.r8.u32);
	// blr 
	return;
loc_82BC5C5C:
	// stw r10,12496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12496, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5C64"))) PPC_WEAK_FUNC(sub_82BC5C64);
PPC_FUNC_IMPL(__imp__sub_82BC5C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5C68"))) PPC_WEAK_FUNC(sub_82BC5C68);
PPC_FUNC_IMPL(__imp__sub_82BC5C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82BC5C70;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc5d60
	if (ctx.cr6.eq) goto loc_82BC5D60;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bc5d54
	if (ctx.cr6.eq) goto loc_82BC5D54;
	// addi r29,r30,968
	ctx.r29.s64 = ctx.r30.s64 + 968;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_82BC5CA8:
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r11,976(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 976);
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82bc5cc8
	if (ctx.cr6.lt) goto loc_82BC5CC8;
	// lwz r9,984(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x82bc5cd0
	if (ctx.cr6.lt) goto loc_82BC5CD0;
loc_82BC5CC8:
	// std r24,976(r30)
	PPC_STORE_U64(ctx.r30.u32 + 976, ctx.r24.u64);
	// b 0x82bc5cd8
	goto loc_82BC5CD8;
loc_82BC5CD0:
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x82bc5d00
	if (!ctx.cr6.eq) goto loc_82BC5D00;
loc_82BC5CD8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,360(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// bl 0x8220f780
	ctx.lr = 0x82BC5CE4;
	sub_8220F780(ctx, base);
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,984(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
	// lwz r4,988(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	// lwz r3,360(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// std r11,976(r30)
	PPC_STORE_U64(ctx.r30.u32 + 976, ctx.r11.u64);
	// bl 0x8220f630
	ctx.lr = 0x82BC5D00;
	sub_8220F630(ctx, base);
loc_82BC5D00:
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r7,976(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 976);
	// lwz r8,984(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 984);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r31,r10,r8
	ctx.r31.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82bc5d20
	if (ctx.cr6.lt) goto loc_82BC5D20;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82BC5D20:
	// lwz r11,988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r28,r25
	ctx.r3.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82219130
	ctx.lr = 0x82BC5D34;
	sub_82219130(ctx, base);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r27,r31,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// blt cr6,0x82bc5ca8
	if (ctx.cr6.lt) goto loc_82BC5CA8;
loc_82BC5D54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_82BC5D60:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bc5d80
	if (ctx.cr6.eq) goto loc_82BC5D80;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,360(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8220f630
	ctx.lr = 0x82BC5D7C;
	sub_8220F630(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
loc_82BC5D80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5D88"))) PPC_WEAK_FUNC(sub_82BC5D88);
PPC_FUNC_IMPL(__imp__sub_82BC5D88) {
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
	// lwz r11,988(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc5db4
	if (ctx.cr6.eq) goto loc_82BC5DB4;
	// ld r3,968(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 968);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BC5DB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x8220f7f0
	ctx.lr = 0x82BC5DC8;
	sub_8220F7F0(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5DDC"))) PPC_WEAK_FUNC(sub_82BC5DDC);
PPC_FUNC_IMPL(__imp__sub_82BC5DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5DE0"))) PPC_WEAK_FUNC(sub_82BC5DE0);
PPC_FUNC_IMPL(__imp__sub_82BC5DE0) {
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
	// lwz r10,988(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 988);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc5e14
	if (ctx.cr6.eq) goto loc_82BC5E14;
	// std r11,968(r3)
	PPC_STORE_U64(ctx.r3.u32 + 968, ctx.r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BC5E14:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,360(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r10,9432(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9432);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x8220f780
	ctx.lr = 0x82BC5E30;
	sub_8220F780(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bc5e44
	if (ctx.cr6.eq) goto loc_82BC5E44;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BC5E44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5E54"))) PPC_WEAK_FUNC(sub_82BC5E54);
PPC_FUNC_IMPL(__imp__sub_82BC5E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5E58"))) PPC_WEAK_FUNC(sub_82BC5E58);
PPC_FUNC_IMPL(__imp__sub_82BC5E58) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5E70"))) PPC_WEAK_FUNC(sub_82BC5E70);
PPC_FUNC_IMPL(__imp__sub_82BC5E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc5e84
	if (!ctx.cr6.eq) goto loc_82BC5E84;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BC5E84:
	// lwz r10,436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5E94"))) PPC_WEAK_FUNC(sub_82BC5E94);
PPC_FUNC_IMPL(__imp__sub_82BC5E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5E98"))) PPC_WEAK_FUNC(sub_82BC5E98);
PPC_FUNC_IMPL(__imp__sub_82BC5E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5EA0"))) PPC_WEAK_FUNC(sub_82BC5EA0);
PPC_FUNC_IMPL(__imp__sub_82BC5EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,404(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5EA8"))) PPC_WEAK_FUNC(sub_82BC5EA8);
PPC_FUNC_IMPL(__imp__sub_82BC5EA8) {
	PPC_FUNC_PROLOGUE();
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82bc5c68
	sub_82BC5C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC5EB0"))) PPC_WEAK_FUNC(sub_82BC5EB0);
PPC_FUNC_IMPL(__imp__sub_82BC5EB0) {
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
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc5ef0
	if (ctx.cr6.eq) goto loc_82BC5EF0;
	// ld r10,968(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 968);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,968(r31)
	PPC_STORE_U64(ctx.r31.u32 + 968, ctx.r11.u64);
	// b 0x82bc5f0c
	goto loc_82BC5F0C;
loc_82BC5EF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d88
	ctx.lr = 0x82BC5EF8;
	sub_82BC5D88(ctx, base);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5de0
	ctx.lr = 0x82BC5F0C;
	sub_82BC5DE0(ctx, base);
loc_82BC5F0C:
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

__attribute__((alias("__imp__sub_82BC5F24"))) PPC_WEAK_FUNC(sub_82BC5F24);
PPC_FUNC_IMPL(__imp__sub_82BC5F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5F28"))) PPC_WEAK_FUNC(sub_82BC5F28);
PPC_FUNC_IMPL(__imp__sub_82BC5F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc5f48
	if (ctx.cr6.eq) goto loc_82BC5F48;
	// lwz r10,436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc5f4c
	if (ctx.cr6.lt) goto loc_82BC5F4C;
loc_82BC5F48:
	// twi 31,r0,22
loc_82BC5F4C:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5F58"))) PPC_WEAK_FUNC(sub_82BC5F58);
PPC_FUNC_IMPL(__imp__sub_82BC5F58) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,412
	ctx.r4.s64 = ctx.r11.s64 + 412;
	// bl 0x82bc5990
	ctx.lr = 0x82BC5F74;
	sub_82BC5990(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82bc5f80
	if (!ctx.cr6.eq) goto loc_82BC5F80;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC5F80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5F90"))) PPC_WEAK_FUNC(sub_82BC5F90);
PPC_FUNC_IMPL(__imp__sub_82BC5F90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,12456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12456);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// stb r6,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r4,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC5FEC"))) PPC_WEAK_FUNC(sub_82BC5FEC);
PPC_FUNC_IMPL(__imp__sub_82BC5FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC5FF0"))) PPC_WEAK_FUNC(sub_82BC5FF0);
PPC_FUNC_IMPL(__imp__sub_82BC5FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,12456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12456);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// stb r8,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC602C"))) PPC_WEAK_FUNC(sub_82BC602C);
PPC_FUNC_IMPL(__imp__sub_82BC602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6030"))) PPC_WEAK_FUNC(sub_82BC6030);
PPC_FUNC_IMPL(__imp__sub_82BC6030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC6038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r28.u32);
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6058;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc6328
	if (ctx.cr6.eq) goto loc_82BC6328;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6090
	if (ctx.cr6.eq) goto loc_82BC6090;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r8,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r8.u8);
	// stb r9,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r9.u8);
loc_82BC6090:
	// addi r30,r31,272
	ctx.r30.s64 = ctx.r31.s64 + 272;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC60A4;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc6328
	if (ctx.cr6.eq) goto loc_82BC6328;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc60d8
	if (ctx.cr6.eq) goto loc_82BC60D8;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC60D8:
	// addi r30,r31,276
	ctx.r30.s64 = ctx.r31.s64 + 276;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC60EC;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc6328
	if (ctx.cr6.eq) goto loc_82BC6328;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6120
	if (ctx.cr6.eq) goto loc_82BC6120;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC6120:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6130;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc6328
	if (ctx.cr6.eq) goto loc_82BC6328;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6164
	if (ctx.cr6.eq) goto loc_82BC6164;
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
loc_82BC6164:
	// addi r30,r31,280
	ctx.r30.s64 = ctx.r31.s64 + 280;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6178;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc6328
	if (ctx.cr6.eq) goto loc_82BC6328;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc61ac
	if (ctx.cr6.eq) goto loc_82BC61AC;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC61AC:
	// addi r30,r31,284
	ctx.r30.s64 = ctx.r31.s64 + 284;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC61C0;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc6328
	if (ctx.cr6.eq) goto loc_82BC6328;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc61f4
	if (ctx.cr6.eq) goto loc_82BC61F4;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC61F4:
	// addi r30,r31,288
	ctx.r30.s64 = ctx.r31.s64 + 288;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6208;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc6328
	if (ctx.cr6.eq) goto loc_82BC6328;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc623c
	if (ctx.cr6.eq) goto loc_82BC623C;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC623C:
	// addi r30,r31,328
	ctx.r30.s64 = ctx.r31.s64 + 328;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6250;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc6328
	if (ctx.cr6.eq) goto loc_82BC6328;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6284
	if (ctx.cr6.eq) goto loc_82BC6284;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC6284:
	// addi r30,r31,332
	ctx.r30.s64 = ctx.r31.s64 + 332;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6298;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc6328
	if (ctx.cr6.eq) goto loc_82BC6328;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc62cc
	if (ctx.cr6.eq) goto loc_82BC62CC;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC62CC:
	// addi r30,r31,292
	ctx.r30.s64 = ctx.r31.s64 + 292;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC62E0;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc6328
	if (ctx.cr6.eq) goto loc_82BC6328;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6314
	if (ctx.cr6.eq) goto loc_82BC6314;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC6314:
	// std r28,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r28.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r28,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r28.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BC6328:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC6334"))) PPC_WEAK_FUNC(sub_82BC6334);
PPC_FUNC_IMPL(__imp__sub_82BC6334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6338"))) PPC_WEAK_FUNC(sub_82BC6338);
PPC_FUNC_IMPL(__imp__sub_82BC6338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC6340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc5de0
	ctx.lr = 0x82BC6354;
	sub_82BC5DE0(ctx, base);
	// addi r30,r31,260
	ctx.r30.s64 = ctx.r31.s64 + 260;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6368;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,4676
	ctx.r4.s64 = ctx.r11.s64 + 4676;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221bed0
	ctx.lr = 0x82BC6384;
	sub_8221BED0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// beq cr6,0x82bc63c4
	if (ctx.cr6.eq) goto loc_82BC63C4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4672
	ctx.r4.s64 = ctx.r11.s64 + 4672;
	// bl 0x8221bed0
	ctx.lr = 0x82BC63A0;
	sub_8221BED0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc63b8
	if (!ctx.cr6.eq) goto loc_82BC63B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6030
	ctx.lr = 0x82BC63B0;
	sub_82BC6030(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BC63B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BC63C4:
	// addi r30,r31,264
	ctx.r30.s64 = ctx.r31.s64 + 264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC63D4;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc640c
	if (ctx.cr6.eq) goto loc_82BC640C;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r8,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r8.u8);
	// stb r9,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r9.u8);
loc_82BC640C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bc6788
	if (ctx.cr6.lt) goto loc_82BC6788;
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC642C;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6460
	if (ctx.cr6.eq) goto loc_82BC6460;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC6460:
	// addi r30,r31,272
	ctx.r30.s64 = ctx.r31.s64 + 272;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6474;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc64a8
	if (ctx.cr6.eq) goto loc_82BC64A8;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC64A8:
	// addi r30,r31,276
	ctx.r30.s64 = ctx.r31.s64 + 276;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC64BC;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc64f0
	if (ctx.cr6.eq) goto loc_82BC64F0;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC64F0:
	// addi r30,r31,280
	ctx.r30.s64 = ctx.r31.s64 + 280;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6504;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6538
	if (ctx.cr6.eq) goto loc_82BC6538;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC6538:
	// addi r30,r31,284
	ctx.r30.s64 = ctx.r31.s64 + 284;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC654C;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6580
	if (ctx.cr6.eq) goto loc_82BC6580;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC6580:
	// addi r30,r31,288
	ctx.r30.s64 = ctx.r31.s64 + 288;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6594;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc65c8
	if (ctx.cr6.eq) goto loc_82BC65C8;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC65C8:
	// addi r30,r31,292
	ctx.r30.s64 = ctx.r31.s64 + 292;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC65DC;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6610
	if (ctx.cr6.eq) goto loc_82BC6610;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC6610:
	// addi r30,r31,296
	ctx.r30.s64 = ctx.r31.s64 + 296;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6624;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6658
	if (ctx.cr6.eq) goto loc_82BC6658;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC6658:
	// addi r30,r31,300
	ctx.r30.s64 = ctx.r31.s64 + 300;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC666C;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc66a0
	if (ctx.cr6.eq) goto loc_82BC66A0;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC66A0:
	// addi r30,r31,304
	ctx.r30.s64 = ctx.r31.s64 + 304;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC66B4;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc66e8
	if (ctx.cr6.eq) goto loc_82BC66E8;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC66E8:
	// addi r30,r31,308
	ctx.r30.s64 = ctx.r31.s64 + 308;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC66FC;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc6730
	if (ctx.cr6.eq) goto loc_82BC6730;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r10,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// stb r8,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r8.u8);
loc_82BC6730:
	// addi r30,r31,312
	ctx.r30.s64 = ctx.r31.s64 + 312;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6744;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5f90
	ctx.lr = 0x82BC6754;
	sub_82BC5F90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// addi r30,r31,320
	ctx.r30.s64 = ctx.r31.s64 + 320;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC6770;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc5f90
	ctx.lr = 0x82BC6780;
	sub_82BC5F90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc63b8
	if (ctx.cr6.eq) goto loc_82BC63B8;
loc_82BC6788:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC6794"))) PPC_WEAK_FUNC(sub_82BC6794);
PPC_FUNC_IMPL(__imp__sub_82BC6794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6798"))) PPC_WEAK_FUNC(sub_82BC6798);
PPC_FUNC_IMPL(__imp__sub_82BC6798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BC67A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r30,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r30.u32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// stw r10,12500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12500, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,12664(r29)
	PPC_STORE_U64(ctx.r29.u32 + 12664, ctx.r11.u64);
	// stw r11,12660(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12660, ctx.r11.u32);
	// stw r9,12688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12688, ctx.r9.u32);
	// stw r10,12496(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12496, ctx.r10.u32);
	// bl 0x82bfcca0
	ctx.lr = 0x82BC67E8;
	sub_82BFCCA0(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82bc685c
	if (ctx.cr6.eq) goto loc_82BC685C;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// stw r11,12496(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12496, ctx.r11.u32);
	// lis r10,48
	ctx.r10.s64 = 3145728;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r3,12680(r26)
	PPC_STORE_U64(ctx.r26.u32 + 12680, ctx.r3.u64);
	// addi r4,r31,388
	ctx.r4.s64 = ctx.r31.s64 + 388;
	// stw r10,12660(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12660, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,12664(r29)
	PPC_STORE_U64(ctx.r29.u32 + 12664, ctx.r9.u64);
	// std r11,12672(r8)
	PPC_STORE_U64(ctx.r8.u32 + 12672, ctx.r11.u64);
	// bl 0x82bc5990
	ctx.lr = 0x82BC6828;
	sub_82BC5990(ctx, base);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r7,380(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r3,12696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12696, ctx.r3.u32);
	// beq cr6,0x82bc685c
	if (ctx.cr6.eq) goto loc_82BC685C;
	// bl 0x827f7b20
	ctx.lr = 0x82BC6840;
	sub_827F7B20(ctx, base);
	// lis r4,4
	ctx.r4.s64 = 262144;
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x82268960
	ctx.lr = 0x82BC684C;
	sub_82268960(ctx, base);
	// lwz r5,12696(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12696);
	// ld r4,12680(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 12680);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// bl 0x82269048
	ctx.lr = 0x82BC685C;
	sub_82269048(ctx, base);
loc_82BC685C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC6864"))) PPC_WEAK_FUNC(sub_82BC6864);
PPC_FUNC_IMPL(__imp__sub_82BC6864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6868"))) PPC_WEAK_FUNC(sub_82BC6868);
PPC_FUNC_IMPL(__imp__sub_82BC6868) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r11,968(r30)
	PPC_STORE_U64(ctx.r30.u32 + 968, ctx.r11.u64);
	// std r11,976(r30)
	PPC_STORE_U64(ctx.r30.u32 + 976, ctx.r11.u64);
	// stw r31,984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 984, ctx.r31.u32);
	// lwz r3,988(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	// bl 0x82120a70
	ctx.lr = 0x82BC689C;
	sub_82120A70(ctx, base);
	// stw r31,988(r30)
	PPC_STORE_U32(ctx.r30.u32 + 988, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82BC68B8"))) PPC_WEAK_FUNC(sub_82BC68B8);
PPC_FUNC_IMPL(__imp__sub_82BC68B8) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r11,968(r30)
	PPC_STORE_U64(ctx.r30.u32 + 968, ctx.r11.u64);
	// std r11,976(r30)
	PPC_STORE_U64(ctx.r30.u32 + 976, ctx.r11.u64);
	// stw r31,984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 984, ctx.r31.u32);
	// lwz r3,988(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	// bl 0x82120a70
	ctx.lr = 0x82BC68EC;
	sub_82120A70(ctx, base);
	// stw r31,988(r30)
	PPC_STORE_U32(ctx.r30.u32 + 988, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// bl 0x82120040
	ctx.lr = 0x82BC68FC;
	sub_82120040(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r3,988(r30)
	PPC_STORE_U32(ctx.r30.u32 + 988, ctx.r3.u32);
	// stw r11,984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 984, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BC6920"))) PPC_WEAK_FUNC(sub_82BC6920);
PPC_FUNC_IMPL(__imp__sub_82BC6920) {
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
	// bl 0x82bfcca0
	ctx.lr = 0x82BC6930;
	sub_82BFCCA0(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82bc6940
	if (!ctx.cr6.eq) goto loc_82BC6940;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC6940:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC6950"))) PPC_WEAK_FUNC(sub_82BC6950);
PPC_FUNC_IMPL(__imp__sub_82BC6950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82BC6958;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r29,412(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bc69f0
	if (ctx.cr6.eq) goto loc_82BC69F0;
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
	// lis r27,-32029
	ctx.r27.s64 = -2099052544;
loc_82BC6984:
	// lwz r30,-17448(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17448);
	// lwz r24,4(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,-17440(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17440);
	// bl 0x821fd9d8
	ctx.lr = 0x82BC6998;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC69C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bc69d4
	if (ctx.cr6.eq) goto loc_82BC69D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BC69D4;
	sub_821FD9E0(ctx, base);
loc_82BC69D4:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bc6984
	if (!ctx.cr6.eq) goto loc_82BC6984;
loc_82BC69F0:
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc6a00
	if (ctx.cr6.eq) goto loc_82BC6A00;
	// bl 0x82120a70
	ctx.lr = 0x82BC6A00;
	sub_82120A70(ctx, base);
loc_82BC6A00:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,428
	ctx.r30.s64 = ctx.r31.s64 + 428;
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// lwz r5,436(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// lwz r3,432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82bc6a40
	if (!ctx.cr6.gt) goto loc_82BC6A40;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
loc_82BC6A40:
	// beq cr6,0x82bc6a64
	if (ctx.cr6.eq) goto loc_82BC6A64;
	// subf r11,r5,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r5.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r6,r3
	ctx.r31.u64 = ctx.r6.u64 + ctx.r3.u64;
	// ble 0x82bc6a60
	if (!ctx.cr0.gt) goto loc_82BC6A60;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8221b920
	ctx.lr = 0x82BC6A60;
	sub_8221B920(ctx, base);
loc_82BC6A60:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_82BC6A64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC6A6C"))) PPC_WEAK_FUNC(sub_82BC6A6C);
PPC_FUNC_IMPL(__imp__sub_82BC6A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6A70"))) PPC_WEAK_FUNC(sub_82BC6A70);
PPC_FUNC_IMPL(__imp__sub_82BC6A70) {
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
	// bl 0x82bc6950
	ctx.lr = 0x82BC6A90;
	sub_82BC6950(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// beq cr6,0x82bc6abc
	if (ctx.cr6.eq) goto loc_82BC6ABC;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x82BC6AB8;
	sub_82120040(ctx, base);
	// stw r3,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r3.u32);
loc_82BC6ABC:
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// bl 0x82138898
	ctx.lr = 0x82BC6AC4;
	sub_82138898(ctx, base);
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

__attribute__((alias("__imp__sub_82BC6ADC"))) PPC_WEAK_FUNC(sub_82BC6ADC);
PPC_FUNC_IMPL(__imp__sub_82BC6ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6AE0"))) PPC_WEAK_FUNC(sub_82BC6AE0);
PPC_FUNC_IMPL(__imp__sub_82BC6AE0) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r10,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r10.u32);
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// beq cr6,0x82bc6b24
	if (ctx.cr6.eq) goto loc_82BC6B24;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x82BC6B20;
	sub_82120040(ctx, base);
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
loc_82BC6B24:
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

__attribute__((alias("__imp__sub_82BC6B38"))) PPC_WEAK_FUNC(sub_82BC6B38);
PPC_FUNC_IMPL(__imp__sub_82BC6B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC6B40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r28,356(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bc6bec
	if (ctx.cr6.eq) goto loc_82BC6BEC;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bc6b80
	if (!ctx.cr6.eq) goto loc_82BC6B80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc6b78
	if (ctx.cr6.eq) goto loc_82BC6B78;
	// bl 0x82120a70
	ctx.lr = 0x82BC6B74;
	sub_82120A70(ctx, base);
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
loc_82BC6B78:
	// stw r29,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
	// b 0x82bc6ba8
	goto loc_82BC6BA8;
loc_82BC6B80:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc6b98
	if (!ctx.cr6.eq) goto loc_82BC6B98;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82120040
	ctx.lr = 0x82BC6B94;
	sub_82120040(ctx, base);
	// b 0x82bc6ba0
	goto loc_82BC6BA0;
loc_82BC6B98:
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82121828
	ctx.lr = 0x82BC6BA0;
	sub_82121828(ctx, base);
loc_82BC6BA0:
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
loc_82BC6BA8:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bc6bec
	if (!ctx.cr6.lt) goto loc_82BC6BEC;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82BC6BC4:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// std r7,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r7.u64);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc6bc4
	if (ctx.cr6.lt) goto loc_82BC6BC4;
loc_82BC6BEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC6BF4"))) PPC_WEAK_FUNC(sub_82BC6BF4);
PPC_FUNC_IMPL(__imp__sub_82BC6BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6BF8"))) PPC_WEAK_FUNC(sub_82BC6BF8);
PPC_FUNC_IMPL(__imp__sub_82BC6BF8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,12512
	ctx.r30.s64 = ctx.r11.s64 + 12512;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82bfcca0
	ctx.lr = 0x82BC6C34;
	sub_82BFCCA0(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82bc6c84
	if (ctx.cr6.eq) goto loc_82BC6C84;
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bfcd40
	ctx.lr = 0x82BC6C58;
	sub_82BFCD40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x82bc6c80
	if (ctx.cr6.lt) goto loc_82BC6C80;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82BC6C6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82bc6c6c
	if (!ctx.cr6.eq) goto loc_82BC6C6C;
loc_82BC6C80:
	// bl 0x82120a70
	ctx.lr = 0x82BC6C84;
	sub_82120A70(ctx, base);
loc_82BC6C84:
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

__attribute__((alias("__imp__sub_82BC6C9C"))) PPC_WEAK_FUNC(sub_82BC6C9C);
PPC_FUNC_IMPL(__imp__sub_82BC6C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6CA0"))) PPC_WEAK_FUNC(sub_82BC6CA0);
PPC_FUNC_IMPL(__imp__sub_82BC6CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BC6CA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82bfcca0
	ctx.lr = 0x82BC6CBC;
	sub_82BFCCA0(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// bne cr6,0x82bc6ce0
	if (!ctx.cr6.eq) goto loc_82BC6CE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 388, ctx.r11.u32);
	// stw r11,392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 392, ctx.r11.u32);
	// stw r11,396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 396, ctx.r11.u32);
	// stw r11,400(r29)
	PPC_STORE_U32(ctx.r29.u32 + 400, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82BC6CE0:
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bfcd40
	ctx.lr = 0x82BC6CFC;
	sub_82BFCD40(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r4,r11,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x82bc6ae0
	ctx.lr = 0x82BC6D14;
	sub_82BC6AE0(ctx, base);
	// lis r26,-32030
	ctx.r26.s64 = -2099118080;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,26648(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26648, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bc6df4
	if (!ctx.cr6.lt) goto loc_82BC6DF4;
	// addi r27,r29,388
	ctx.r27.s64 = ctx.r29.s64 + 388;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
loc_82BC6D38:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r10,12456(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12456);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// beq cr6,0x82bc6d88
	if (ctx.cr6.eq) goto loc_82BC6D88;
	// lbz r7,85(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
loc_82BC6D88:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r8,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r8.u8);
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// stb r7,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r7.u8);
	// stb r9,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82bc6dd4
	if (ctx.cr6.eq) goto loc_82BC6DD4;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82BC6DD4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82bc5ac8
	ctx.lr = 0x82BC6DE4;
	sub_82BC5AC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc6d38
	if (ctx.cr6.lt) goto loc_82BC6D38;
loc_82BC6DF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,392(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// lwz r3,388(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	// stw r11,26648(r26)
	PPC_STORE_U32(ctx.r26.u32 + 26648, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r10,22448
	ctx.r6.s64 = ctx.r10.s64 + 22448;
	// bl 0x8221b460
	ctx.lr = 0x82BC6E14;
	sub_8221B460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BC6E1C;
	sub_82120A70(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC6E24"))) PPC_WEAK_FUNC(sub_82BC6E24);
PPC_FUNC_IMPL(__imp__sub_82BC6E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6E28"))) PPC_WEAK_FUNC(sub_82BC6E28);
PPC_FUNC_IMPL(__imp__sub_82BC6E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC6E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212cb70
	ctx.lr = 0x82BC6E48;
	sub_8212CB70(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,42
	ctx.r6.s64 = 42;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,16
	ctx.r3.s64 = 16;
	// li r30,125
	ctx.r30.s64 = 125;
	// li r29,84
	ctx.r29.s64 = 84;
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// lwz r28,372(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r28,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r28.u32);
	// stw r10,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r10.u32);
	// lwz r28,372(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r28,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r28.u32);
	// lwz r28,372(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r28,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r28.u32);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// stw r7,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r7.u32);
	// stw r6,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r6.u32);
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// std r9,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r9.u64);
	// std r9,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r9.u64);
	// stw r5,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r5.u32);
	// stw r3,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r3.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r29,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r29.u32);
	// lwz r11,4676(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4676);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bc6eec
	if (!ctx.cr6.gt) goto loc_82BC6EEC;
	// twi 31,r0,22
loc_82BC6EEC:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ble cr6,0x82bc6f00
	if (!ctx.cr6.gt) goto loc_82BC6F00;
	// twi 31,r0,22
loc_82BC6F00:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82121d28
	ctx.lr = 0x82BC6F18;
	sub_82121D28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6b38
	ctx.lr = 0x82BC6F24;
	sub_82BC6B38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC6F2C"))) PPC_WEAK_FUNC(sub_82BC6F2C);
PPC_FUNC_IMPL(__imp__sub_82BC6F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC6F30"))) PPC_WEAK_FUNC(sub_82BC6F30);
PPC_FUNC_IMPL(__imp__sub_82BC6F30) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// std r11,968(r31)
	PPC_STORE_U64(ctx.r31.u32 + 968, ctx.r11.u64);
	// std r11,976(r31)
	PPC_STORE_U64(ctx.r31.u32 + 976, ctx.r11.u64);
	// stw r30,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r30.u32);
	// lwz r3,988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// bl 0x82120a70
	ctx.lr = 0x82BC6F64;
	sub_82120A70(ctx, base);
	// stw r30,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6e28
	ctx.lr = 0x82BC6F70;
	sub_82BC6E28(ctx, base);
	// lwz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bc6f8c
	if (ctx.cr6.eq) goto loc_82BC6F8C;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lwz r3,-4612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4612);
	// bl 0x82202218
	ctx.lr = 0x82BC6F88;
	sub_82202218(ctx, base);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
loc_82BC6F8C:
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc6fb8
	if (ctx.cr6.eq) goto loc_82BC6FB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC6FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
loc_82BC6FB8:
	// lwz r3,388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc6fc8
	if (ctx.cr6.eq) goto loc_82BC6FC8;
	// bl 0x82120a70
	ctx.lr = 0x82BC6FC8;
	sub_82120A70(ctx, base);
loc_82BC6FC8:
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc6fe8
	if (ctx.cr6.eq) goto loc_82BC6FE8;
	// bl 0x82120a70
	ctx.lr = 0x82BC6FE4;
	sub_82120A70(ctx, base);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
loc_82BC6FE8:
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r30.u32);
	// stw r30,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r30.u32);
	// bl 0x82bc6950
	ctx.lr = 0x82BC6FFC;
	sub_82BC6950(ctx, base);
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

__attribute__((alias("__imp__sub_82BC7014"))) PPC_WEAK_FUNC(sub_82BC7014);
PPC_FUNC_IMPL(__imp__sub_82BC7014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7018"))) PPC_WEAK_FUNC(sub_82BC7018);
PPC_FUNC_IMPL(__imp__sub_82BC7018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC7020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// lwz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bc7048
	if (ctx.cr6.eq) goto loc_82BC7048;
	// lwz r3,-4612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4612);
	// bl 0x82202218
	ctx.lr = 0x82BC7044;
	sub_82202218(ctx, base);
	// stw r28,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r28.u32);
loc_82BC7048:
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc706c
	if (ctx.cr6.eq) goto loc_82BC706C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC7068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
loc_82BC706C:
	// lwz r3,-4612(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4612);
	// addi r30,r31,444
	ctx.r30.s64 = ctx.r31.s64 + 444;
	// li r5,41
	ctx.r5.s64 = 41;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822025c0
	ctx.lr = 0x82BC7080;
	sub_822025C0(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc7148
	if (!ctx.cr6.eq) goto loc_82BC7148;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// lwz r30,12452(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc70d4
	if (ctx.cr6.eq) goto loc_82BC70D4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BC70B4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82bc70f4
	if (ctx.cr6.eq) goto loc_82BC70F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc70b4
	if (ctx.cr6.lt) goto loc_82BC70B4;
loc_82BC70D4:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,22303
	ctx.r5.s64 = 22303;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bc94e8
	ctx.lr = 0x82BC70E4;
	sub_82BC94E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bf6560
	ctx.lr = 0x82BC70F0;
	sub_82BF6560(ctx, base);
	// lwz r30,12452(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
loc_82BC70F4:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc7134
	if (ctx.cr6.eq) goto loc_82BC7134;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc7134
	if (ctx.cr6.eq) goto loc_82BC7134;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bc7138
	if (!ctx.cr6.eq) goto loc_82BC7138;
loc_82BC7134:
	// b 0x82bc7134
	goto loc_82BC7134;
loc_82BC7138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f30
	ctx.lr = 0x82BC7140;
	sub_82BC6F30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BC7148:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82120040
	ctx.lr = 0x82BC7154;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc7178
	if (ctx.cr6.eq) goto loc_82BC7178;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ld r5,9432(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9432);
	// bl 0x82268968
	ctx.lr = 0x82BC7174;
	sub_82268968(ctx, base);
	// b 0x82bc717c
	goto loc_82BC717C;
loc_82BC7178:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82BC717C:
	// stw r3,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82268d50
	ctx.lr = 0x82BC7188;
	sub_82268D50(ctx, base);
	// stw r28,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC7194"))) PPC_WEAK_FUNC(sub_82BC7194);
PPC_FUNC_IMPL(__imp__sub_82BC7194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7198"))) PPC_WEAK_FUNC(sub_82BC7198);
PPC_FUNC_IMPL(__imp__sub_82BC7198) {
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
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82bfcca0
	ctx.lr = 0x82BC71C0;
	sub_82BFCCA0(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82bc7218
	if (ctx.cr6.eq) goto loc_82BC7218;
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bfcd40
	ctx.lr = 0x82BC71E4;
	sub_82BFCD40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc7210
	if (ctx.cr6.eq) goto loc_82BC7210;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bc7210
	if (ctx.cr6.eq) goto loc_82BC7210;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13408);
	// bl 0x827f1a00
	ctx.lr = 0x82BC7210;
	sub_827F1A00(ctx, base);
loc_82BC7210:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BC7218;
	sub_82120A70(ctx, base);
loc_82BC7218:
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

__attribute__((alias("__imp__sub_82BC7230"))) PPC_WEAK_FUNC(sub_82BC7230);
PPC_FUNC_IMPL(__imp__sub_82BC7230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82BC7238;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82bfcca0
	ctx.lr = 0x82BC724C;
	sub_82BFCCA0(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x82bc7298
	if (!ctx.cr6.eq) goto loc_82BC7298;
	// bl 0x82bc6950
	ctx.lr = 0x82BC725C;
	sub_82BC6950(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r11,420(r26)
	PPC_STORE_U32(ctx.r26.u32 + 420, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,412(r26)
	PPC_STORE_U32(ctx.r26.u32 + 412, ctx.r23.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r23,416(r26)
	PPC_STORE_U32(ctx.r26.u32 + 416, ctx.r23.u32);
	// stw r11,424(r26)
	PPC_STORE_U32(ctx.r26.u32 + 424, ctx.r11.u32);
	// bl 0x82120040
	ctx.lr = 0x82BC7280;
	sub_82120040(ctx, base);
	// stw r3,412(r26)
	PPC_STORE_U32(ctx.r26.u32 + 412, ctx.r3.u32);
	// addi r3,r26,428
	ctx.r3.s64 = ctx.r26.s64 + 428;
	// bl 0x82138898
	ctx.lr = 0x82BC728C;
	sub_82138898(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82BC7298:
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82bfcd40
	ctx.lr = 0x82BC72B0;
	sub_82BFCD40(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// addi r31,r25,4
	ctx.r31.s64 = ctx.r25.s64 + 4;
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// lbz r9,3(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 3);
	// lbz r8,1(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// lbz r7,2(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2);
	// lwz r11,12456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
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
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82bc730c
	if (ctx.cr6.eq) goto loc_82BC730C;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BC730C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// bl 0x82bc6a70
	ctx.lr = 0x82BC731C;
	sub_82BC6A70(ctx, base);
	// lis r20,-32030
	ctx.r20.s64 = -2099118080;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r11,26648(r20)
	PPC_STORE_U32(ctx.r20.u32 + 26648, ctx.r11.u32);
	// beq cr6,0x82bc74d8
	if (ctx.cr6.eq) goto loc_82BC74D8;
	// addi r22,r26,412
	ctx.r22.s64 = ctx.r26.s64 + 412;
	// addi r21,r26,428
	ctx.r21.s64 = ctx.r26.s64 + 428;
loc_82BC733C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,12456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x82bc7390
	if (ctx.cr6.eq) goto loc_82BC7390;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BC7390:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82120040
	ctx.lr = 0x82BC73A0;
	sub_82120040(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,12456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82bc73f8
	if (ctx.cr6.eq) goto loc_82BC73F8;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BC73F8:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82BC7408;
	sub_82120040(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bc7490
	if (!ctx.cr6.gt) goto loc_82BC7490;
	// lwz r7,12456(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_82BC7424:
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r6,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r6.u8);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// stb r5,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r5.u8);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82bc7470
	if (ctx.cr6.eq) goto loc_82BC7470;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
loc_82BC7470:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82bc7424
	if (ctx.cr6.lt) goto loc_82BC7424;
loc_82BC7490:
	// addic. r30,r29,8
	ctx.xer.ca = ctx.r29.u32 > 4294967287;
	ctx.r30.s64 = ctx.r29.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82bc74b0
	if (ctx.cr0.eq) goto loc_82BC74B0;
	// stb r23,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r23.u8);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82BC74AC;
	sub_82219130(ctx, base);
	// stb r23,31(r30)
	PPC_STORE_U8(ctx.r30.u32 + 31, ctx.r23.u8);
loc_82BC74B0:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bl 0x82bc5ac8
	ctx.lr = 0x82BC74C4;
	sub_82BC5AC8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82121b48
	ctx.lr = 0x82BC74D0;
	sub_82121B48(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82bc733c
	if (!ctx.cr0.eq) goto loc_82BC733C;
loc_82BC74D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,416(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 416);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// lwz r3,412(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 412);
	// stw r11,26648(r20)
	PPC_STORE_U32(ctx.r20.u32 + 26648, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r10,22448
	ctx.r6.s64 = ctx.r10.s64 + 22448;
	// bl 0x8221b460
	ctx.lr = 0x82BC74F8;
	sub_8221B460(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BC7500;
	sub_82120A70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC750C"))) PPC_WEAK_FUNC(sub_82BC750C);
PPC_FUNC_IMPL(__imp__sub_82BC750C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7510"))) PPC_WEAK_FUNC(sub_82BC7510);
PPC_FUNC_IMPL(__imp__sub_82BC7510) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82bc7540
	if (ctx.cr6.eq) goto loc_82BC7540;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,368
	ctx.r3.s64 = ctx.r3.s64 + 368;
	// bl 0x821218a8
	ctx.lr = 0x82BC753C;
	sub_821218A8(ctx, base);
	// std r31,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r31.u64);
loc_82BC7540:
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

__attribute__((alias("__imp__sub_82BC7554"))) PPC_WEAK_FUNC(sub_82BC7554);
PPC_FUNC_IMPL(__imp__sub_82BC7554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7558"))) PPC_WEAK_FUNC(sub_82BC7558);
PPC_FUNC_IMPL(__imp__sub_82BC7558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BC7560;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc7694
	if (ctx.cr6.eq) goto loc_82BC7694;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x82bc5de0
	ctx.lr = 0x82BC7584;
	sub_82BC5DE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc7598
	if (!ctx.cr6.eq) goto loc_82BC7598;
loc_82BC758C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82BC7598:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82bc7694
	if (!ctx.cr6.gt) goto loc_82BC7694;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
loc_82BC75AC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC75C4;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc758c
	if (ctx.cr6.eq) goto loc_82BC758C;
	// lwz r11,12456(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc75f8
	if (ctx.cr6.eq) goto loc_82BC75F8;
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
loc_82BC75F8:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// rlwinm r30,r30,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC7614;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc758c
	if (ctx.cr6.eq) goto loc_82BC758C;
	// lwz r11,12456(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc7648
	if (ctx.cr6.eq) goto loc_82BC7648;
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// stb r10,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r10.u8);
	// lbz r9,1(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// lbz r8,2(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// stb r8,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r8.u8);
	// stb r9,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r9.u8);
loc_82BC7648:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r8,4(r9)
	PPC_STORE_U64(ctx.r9.u32 + 4, ctx.r8.u64);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ld r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82bc7684
	if (ctx.cr6.eq) goto loc_82BC7684;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x821218a8
	ctx.lr = 0x82BC7680;
	sub_821218A8(ctx, base);
	// std r30,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r30.u64);
loc_82BC7684:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc75ac
	if (ctx.cr6.lt) goto loc_82BC75AC;
loc_82BC7694:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC76A0"))) PPC_WEAK_FUNC(sub_82BC76A0);
PPC_FUNC_IMPL(__imp__sub_82BC76A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BC76A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// std r26,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r26.u64);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lwz r4,332(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x82122068
	ctx.lr = 0x82BC76F0;
	sub_82122068(ctx, base);
	// lwz r9,332(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r29,24
	ctx.r29.s64 = 24;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82bc7ad4
	if (!ctx.cr6.gt) goto loc_82BC7AD4;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
loc_82BC7714:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc772c
	if (ctx.cr6.eq) goto loc_82BC772C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r9,r10,r29
	ctx.r9.s32 = ctx.r10.s32 / ctx.r29.s32;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc7730
	if (ctx.cr6.lt) goto loc_82BC7730;
loc_82BC772C:
	// twi 31,r0,22
loc_82BC7730:
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC7740;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7c0c
	if (ctx.cr6.eq) goto loc_82BC7C0C;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bc7768
	if (ctx.cr6.eq) goto loc_82BC7768;
	// subf r11,r8,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r8.s64;
	// divw r10,r11,r29
	ctx.r10.s32 = ctx.r11.s32 / ctx.r29.s32;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc776c
	if (ctx.cr6.lt) goto loc_82BC776C;
loc_82BC7768:
	// twi 31,r0,22
loc_82BC776C:
	// add r11,r31,r8
	ctx.r11.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lbzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lwz r9,12456(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// stb r4,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r4.u8);
	// stb r6,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r6.u8);
	// stb r3,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r3.u8);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82bc77c0
	if (ctx.cr6.eq) goto loc_82BC77C0;
	// lbz r4,85(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r6,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// stb r4,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r4.u8);
	// stb r3,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r3.u8);
loc_82BC77C0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bc77d8
	if (ctx.cr6.eq) goto loc_82BC77D8;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = ctx.r8.s32 / ctx.r29.s32;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bc77dc
	if (ctx.cr6.lt) goto loc_82BC77DC;
loc_82BC77D8:
	// twi 31,r0,22
loc_82BC77DC:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r6,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r6.u8);
	// stb r8,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r8.u8);
	// stb r7,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r7.u8);
	// stb r5,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r5.u8);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82bc7830
	if (ctx.cr6.eq) goto loc_82BC7830;
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
loc_82BC7830:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc7850
	if (ctx.cr6.eq) goto loc_82BC7850;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = ctx.r7.s32 / ctx.r29.s32;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82bc7854
	if (ctx.cr6.lt) goto loc_82BC7854;
loc_82BC7850:
	// twi 31,r0,22
loc_82BC7854:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r5,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r5.u8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// stb r6,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r6.u8);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82bc78ac
	if (ctx.cr6.eq) goto loc_82BC78AC;
	// lbz r7,85(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
loc_82BC78AC:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc78cc
	if (ctx.cr6.eq) goto loc_82BC78CC;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = ctx.r7.s32 / ctx.r29.s32;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82bc78d0
	if (ctx.cr6.lt) goto loc_82BC78D0;
loc_82BC78CC:
	// twi 31,r0,22
loc_82BC78D0:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r6,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r6.u8);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r10,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r10.u8);
	// stb r5,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r5.u8);
	// stb r8,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82bc7928
	if (ctx.cr6.eq) goto loc_82BC7928;
	// lbz r7,85(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
loc_82BC7928:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc7948
	if (ctx.cr6.eq) goto loc_82BC7948;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = ctx.r7.s32 / ctx.r29.s32;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82bc794c
	if (ctx.cr6.lt) goto loc_82BC794C;
loc_82BC7948:
	// twi 31,r0,22
loc_82BC794C:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r10,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r10.u8);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r5,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r5.u8);
	// stb r8,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r8.u8);
	// stb r6,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r6.u8);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82bc79a0
	if (ctx.cr6.eq) goto loc_82BC79A0;
	// lbz r7,85(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
loc_82BC79A0:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc79c0
	if (ctx.cr6.eq) goto loc_82BC79C0;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = ctx.r7.s32 / ctx.r29.s32;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82bc79c4
	if (ctx.cr6.lt) goto loc_82BC79C4;
loc_82BC79C0:
	// twi 31,r0,22
loc_82BC79C4:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r8.u32);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r6,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r6.u8);
	// stb r5,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r5.u8);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82bc7a18
	if (ctx.cr6.eq) goto loc_82BC7A18;
	// lbz r9,85(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r9,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
loc_82BC7A18:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc7a38
	if (ctx.cr6.eq) goto loc_82BC7A38;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = ctx.r9.s32 / ctx.r29.s32;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bc7a3c
	if (ctx.cr6.lt) goto loc_82BC7A3C;
loc_82BC7A38:
	// twi 31,r0,22
loc_82BC7A3C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc7a68
	if (ctx.cr6.eq) goto loc_82BC7A68;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = ctx.r9.s32 / ctx.r29.s32;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bc7a6c
	if (ctx.cr6.lt) goto loc_82BC7A6C;
loc_82BC7A68:
	// twi 31,r0,22
loc_82BC7A6C:
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82bc7ac0
	if (ctx.cr6.eq) goto loc_82BC7AC0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc7a94
	if (ctx.cr6.eq) goto loc_82BC7A94;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r11,r29
	ctx.r10.s32 = ctx.r11.s32 / ctx.r29.s32;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc7a98
	if (ctx.cr6.lt) goto loc_82BC7A98;
loc_82BC7A94:
	// twi 31,r0,22
loc_82BC7A98:
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x82bc5de0
	ctx.lr = 0x82BC7AB0;
	sub_82BC5DE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7c0c
	if (ctx.cr6.eq) goto loc_82BC7C0C;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82BC7AC0:
	// lwz r9,332(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc7714
	if (ctx.cr6.lt) goto loc_82BC7714;
loc_82BC7AD4:
	// lwz r11,328(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,332(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82bc6b38
	ctx.lr = 0x82BC7AE8;
	sub_82BC6B38(ctx, base);
	// lwz r9,372(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r28,368
	ctx.r3.s64 = ctx.r28.s64 + 368;
	// bl 0x8212cb70
	ctx.lr = 0x82BC7AF8;
	sub_8212CB70(ctx, base);
	// lwz r8,372(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r26,376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 376, ctx.r26.u32);
	// lwz r7,372(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// lwz r6,372(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// stw r6,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r6.u32);
	// lwz r5,332(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x82bc7b74
	if (!ctx.cr6.gt) goto loc_82BC7B74;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82BC7B28:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc7b48
	if (ctx.cr6.eq) goto loc_82BC7B48;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = ctx.r9.s32 / ctx.r29.s32;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bc7b4c
	if (ctx.cr6.lt) goto loc_82BC7B4C;
loc_82BC7B48:
	// twi 31,r0,22
loc_82BC7B4C:
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bc7558
	ctx.lr = 0x82BC7B58;
	sub_82BC7558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7c28
	if (ctx.cr6.eq) goto loc_82BC7C28;
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc7b28
	if (ctx.cr6.lt) goto loc_82BC7B28;
loc_82BC7B74:
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc7b98
	if (ctx.cr6.eq) goto loc_82BC7B98;
	// lwz r3,352(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc7b94
	if (ctx.cr6.eq) goto loc_82BC7B94;
	// bl 0x82120a70
	ctx.lr = 0x82BC7B90;
	sub_82120A70(ctx, base);
	// stw r26,352(r28)
	PPC_STORE_U32(ctx.r28.u32 + 352, ctx.r26.u32);
loc_82BC7B94:
	// stw r26,356(r28)
	PPC_STORE_U32(ctx.r28.u32 + 356, ctx.r26.u32);
loc_82BC7B98:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc7c00
	if (ctx.cr6.eq) goto loc_82BC7C00;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r31,-17448(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17448);
	// lwz r30,-17440(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82BC7BC0;
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
	ctx.lr = 0x82BC7BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc7c00
	if (ctx.cr6.eq) goto loc_82BC7C00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BC7C00;
	sub_821FD9E0(ctx, base);
loc_82BC7C00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82BC7C0C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc7c1c
	if (ctx.cr6.eq) goto loc_82BC7C1C;
	// bl 0x82120a70
	ctx.lr = 0x82BC7C1C;
	sub_82120A70(ctx, base);
loc_82BC7C1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_82BC7C28:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc7c90
	if (ctx.cr6.eq) goto loc_82BC7C90;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r31,-17448(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17448);
	// lwz r30,-17440(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x82BC7C50;
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
	ctx.lr = 0x82BC7C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc7c90
	if (ctx.cr6.eq) goto loc_82BC7C90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x82BC7C90;
	sub_821FD9E0(ctx, base);
loc_82BC7C90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC7C9C"))) PPC_WEAK_FUNC(sub_82BC7C9C);
PPC_FUNC_IMPL(__imp__sub_82BC7C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC7CA0"))) PPC_WEAK_FUNC(sub_82BC7CA0);
PPC_FUNC_IMPL(__imp__sub_82BC7CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82BC7CA8;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc7cc8
	if (!ctx.cr6.eq) goto loc_82BC7CC8;
	// bl 0x82bc76a0
	ctx.lr = 0x82BC7CC0;
	sub_82BC76A0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82BC7CC8:
	// ld r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 312);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpdi cr6,r4,-1
	ctx.cr6.compare<int64_t>(ctx.r4.s64, -1, ctx.xer);
	// beq cr6,0x82bc7f7c
	if (ctx.cr6.eq) goto loc_82BC7F7C;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// li r20,12
	ctx.r20.s64 = 12;
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r22,16384
	ctx.r22.s64 = 16384;
loc_82BC7CEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5de0
	ctx.lr = 0x82BC7CF8;
	sub_82BC5DE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7f94
	if (ctx.cr6.eq) goto loc_82BC7F94;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r30,r31,336
	ctx.r30.s64 = ctx.r31.s64 + 336;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc7d1c
	if (ctx.cr6.eq) goto loc_82BC7D1C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r9,r20
	ctx.r11.s32 = ctx.r9.s32 / ctx.r20.s32;
loc_82BC7D1C:
	// std r21,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r21.u64);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82121bf0
	ctx.lr = 0x82BC7D3C;
	sub_82121BF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bc7d50
	if (!ctx.cr6.gt) goto loc_82BC7D50;
	// twi 31,r0,22
loc_82BC7D50:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x82bc7d7c
	if (ctx.cr6.gt) goto loc_82BC7D7C;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bc7d80
	if (!ctx.cr6.lt) goto loc_82BC7D80;
loc_82BC7D7C:
	// twi 31,r0,22
loc_82BC7D80:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r11,-12
	ctx.r28.s64 = ctx.r11.s64 + -12;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc7d98
	if (ctx.cr6.lt) goto loc_82BC7D98;
	// twi 31,r0,22
loc_82BC7D98:
	// stw r22,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r22.u32);
	// addi r26,r28,4
	ctx.r26.s64 = ctx.r28.s64 + 4;
	// std r21,4(r28)
	PPC_STORE_U64(ctx.r28.u32 + 4, ctx.r21.u64);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bc7e1c
	if (ctx.cr6.lt) goto loc_82BC7E1C;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC7DC0;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7f94
	if (ctx.cr6.eq) goto loc_82BC7F94;
	// lwz r11,12456(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc7df4
	if (ctx.cr6.eq) goto loc_82BC7DF4;
	// lbz r11,3(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// stb r10,3(r28)
	PPC_STORE_U8(ctx.r28.u32 + 3, ctx.r10.u8);
	// lbz r8,2(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// lbz r9,1(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// stb r8,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r8.u8);
	// stb r9,2(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2, ctx.r9.u8);
loc_82BC7DF4:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC7E04;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7f94
	if (ctx.cr6.eq) goto loc_82BC7F94;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bc5f90
	ctx.lr = 0x82BC7E14;
	sub_82BC5F90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7f94
	if (ctx.cr6.eq) goto loc_82BC7F94;
loc_82BC7E1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82bc6b38
	ctx.lr = 0x82BC7E30;
	sub_82BC6B38(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82bc7f70
	if (!ctx.cr6.gt) goto loc_82BC7F70;
	// rlwinm r30,r25,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
loc_82BC7E44:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82bc7f20
	if (ctx.cr6.lt) goto loc_82BC7F20;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC7E68;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7f94
	if (ctx.cr6.eq) goto loc_82BC7F94;
	// lwz r11,12456(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc7e9c
	if (ctx.cr6.eq) goto loc_82BC7E9C;
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// stb r10,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// lbz r8,1(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r9,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// stb r8,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r8.u8);
loc_82BC7E9C:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC7EB8;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7f94
	if (ctx.cr6.eq) goto loc_82BC7F94;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc5f90
	ctx.lr = 0x82BC7EC8;
	sub_82BC5F90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7f94
	if (ctx.cr6.eq) goto loc_82BC7F94;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82bc5c68
	ctx.lr = 0x82BC7EEC;
	sub_82BC5C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc7f94
	if (ctx.cr6.eq) goto loc_82BC7F94;
	// lwz r11,12456(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc7f20
	if (ctx.cr6.eq) goto loc_82BC7F20;
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// stb r10,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r10.u8);
	// lbz r9,2(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// lbz r8,1(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r9,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
	// stb r8,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r8.u8);
loc_82BC7F20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BC7F2C;
	sub_82BC5EB0(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// beq cr6,0x82bc7f58
	if (ctx.cr6.eq) goto loc_82BC7F58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x821218a8
	ctx.lr = 0x82BC7F54;
	sub_821218A8(ctx, base);
	// std r29,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r29.u64);
loc_82BC7F58:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc7e44
	if (ctx.cr6.lt) goto loc_82BC7E44;
loc_82BC7F70:
	// ld r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// cmpdi cr6,r4,-1
	ctx.cr6.compare<int64_t>(ctx.r4.s64, -1, ctx.xer);
	// bne cr6,0x82bc7cec
	if (!ctx.cr6.eq) goto loc_82BC7CEC;
loc_82BC7F7C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6b38
	ctx.lr = 0x82BC7F88;
	sub_82BC6B38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82BC7F94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC7FA0"))) PPC_WEAK_FUNC(sub_82BC7FA0);
PPC_FUNC_IMPL(__imp__sub_82BC7FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82BC7FA8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82bc6f30
	ctx.lr = 0x82BC7FBC;
	sub_82BC6F30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r30,r11,-16988
	ctx.r30.s64 = ctx.r11.s64 + -16988;
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82218b20
	ctx.lr = 0x82BC7FD4;
	sub_82218B20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218b20
	ctx.lr = 0x82BC7FE4;
	sub_82218B20(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r27,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r27.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// li r5,125
	ctx.r5.s64 = 125;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// li r29,84
	ctx.r29.s64 = 84;
	// stw r8,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r8.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// std r10,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r10.u64);
	// std r10,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r10.u64);
	// stw r7,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r7.u32);
	// stw r6,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r6.u32);
	// stw r5,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r5.u32);
	// stw r29,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r29.u32);
	// lwz r11,4676(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4676);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r27,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r27.u32);
	// bl 0x82bc6b38
	ctx.lr = 0x82BC8064;
	sub_82BC6B38(ctx, base);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lis r3,-1024
	ctx.r3.s64 = -67108864;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r29,r3,7
	ctx.r29.u64 = ctx.r3.u64 | 7;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// std r30,4(r10)
	PPC_STORE_U64(ctx.r10.u32 + 4, ctx.r30.u64);
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r28.u32);
	// bl 0x821218a8
	ctx.lr = 0x82BC8094;
	sub_821218A8(ctx, base);
	// std r30,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r30.u64);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r27,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r27.u32);
	// addi r26,r31,388
	ctx.r26.s64 = ctx.r31.s64 + 388;
	// stw r27,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r27.u32);
	// bl 0x82120040
	ctx.lr = 0x82BC80B8;
	sub_82120040(ctx, base);
	// lis r24,-32030
	ctx.r24.s64 = -2099118080;
	// stw r3,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,26648(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26648, ctx.r30.u32);
	// bl 0x82bc5ac8
	ctx.lr = 0x82BC80D4;
	sub_82BC5AC8(ctx, base);
	// stw r27,26648(r24)
	PPC_STORE_U32(ctx.r24.u32 + 26648, ctx.r27.u32);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// lwz r4,392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r6,r8,22448
	ctx.r6.s64 = ctx.r8.s64 + 22448;
	// bl 0x8221b460
	ctx.lr = 0x82BC80F0;
	sub_8221B460(ctx, base);
	// stw r25,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8104"))) PPC_WEAK_FUNC(sub_82BC8104);
PPC_FUNC_IMPL(__imp__sub_82BC8104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8108"))) PPC_WEAK_FUNC(sub_82BC8108);
PPC_FUNC_IMPL(__imp__sub_82BC8108) {
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
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// bl 0x82bfcca0
	ctx.lr = 0x82BC8128;
	sub_82BFCCA0(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82bc8180
	if (ctx.cr6.eq) goto loc_82BC8180;
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bfcd40
	ctx.lr = 0x82BC814C;
	sub_82BFCD40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc8178
	if (ctx.cr6.eq) goto loc_82BC8178;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bc8178
	if (ctx.cr6.eq) goto loc_82BC8178;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x827c0f80
	ctx.lr = 0x82BC8178;
	sub_827C0F80(ctx, base);
loc_82BC8178:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BC8180;
	sub_82120A70(ctx, base);
loc_82BC8180:
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

__attribute__((alias("__imp__sub_82BC8194"))) PPC_WEAK_FUNC(sub_82BC8194);
PPC_FUNC_IMPL(__imp__sub_82BC8194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8198"))) PPC_WEAK_FUNC(sub_82BC8198);
PPC_FUNC_IMPL(__imp__sub_82BC8198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BC81A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82bc6f30
	ctx.lr = 0x82BC81B4;
	sub_82BC6F30(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc831c
	if (ctx.cr6.eq) goto loc_82BC831C;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82218e50
	ctx.lr = 0x82BC81C8;
	sub_82218E50(ctx, base);
	// addi r29,r30,444
	ctx.r29.s64 = ctx.r30.s64 + 444;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82bc81e8
	if (ctx.cr6.eq) goto loc_82BC81E8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82218b20
	ctx.lr = 0x82BC81E4;
	sub_82218B20(ctx, base);
	// b 0x82bc8204
	goto loc_82BC8204;
loc_82BC81E8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,-23304
	ctx.r5.s64 = ctx.r11.s64 + -23304;
	// bl 0x82218b20
	ctx.lr = 0x82BC81F4;
	sub_82218B20(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82218e90
	ctx.lr = 0x82BC8204;
	sub_82218E90(ctx, base);
loc_82BC8204:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc8238
	if (ctx.cr6.eq) goto loc_82BC8238;
	// li r10,92
	ctx.r10.s64 = 92;
loc_82BC8218:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// bne cr6,0x82bc8228
	if (!ctx.cr6.eq) goto loc_82BC8228;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82BC8228:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bc8218
	if (!ctx.cr6.eq) goto loc_82BC8218;
loc_82BC8238:
	// lwz r11,360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc8264
	if (!ctx.cr6.eq) goto loc_82BC8264;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r5,105
	ctx.r5.s64 = 105;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4612);
	// bl 0x822025c0
	ctx.lr = 0x82BC825C;
	sub_822025C0(ctx, base);
	// stw r3,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r3.u32);
	// stw r31,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r31.u32);
loc_82BC8264:
	// lwz r11,360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc8328
	if (!ctx.cr6.eq) goto loc_82BC8328;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
	// lwz r31,12452(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc82b0
	if (ctx.cr6.eq) goto loc_82BC82B0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BC8290:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82bc82d0
	if (ctx.cr6.eq) goto loc_82BC82D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc8290
	if (ctx.cr6.lt) goto loc_82BC8290;
loc_82BC82B0:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,22303
	ctx.r5.s64 = 22303;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bc94e8
	ctx.lr = 0x82BC82C0;
	sub_82BC94E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf6560
	ctx.lr = 0x82BC82CC;
	sub_82BF6560(ctx, base);
	// lwz r31,12452(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
loc_82BC82D0:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc8310
	if (ctx.cr6.eq) goto loc_82BC8310;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc8310
	if (ctx.cr6.eq) goto loc_82BC8310;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bc8314
	if (!ctx.cr6.eq) goto loc_82BC8314;
loc_82BC8310:
	// b 0x82bc8310
	goto loc_82BC8310;
loc_82BC8314:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6f30
	ctx.lr = 0x82BC831C;
	sub_82BC6F30(ctx, base);
loc_82BC831C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BC8328:
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc68b8
	ctx.lr = 0x82BC8334;
	sub_82BC68B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6338
	ctx.lr = 0x82BC833C;
	sub_82BC6338(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc83ec
	if (!ctx.cr6.eq) goto loc_82BC83EC;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,12452(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc8388
	if (ctx.cr6.eq) goto loc_82BC8388;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BC8368:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82bc83a8
	if (ctx.cr6.eq) goto loc_82BC83A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc8368
	if (ctx.cr6.lt) goto loc_82BC8368;
loc_82BC8388:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,22303
	ctx.r5.s64 = 22303;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bc94e8
	ctx.lr = 0x82BC8398;
	sub_82BC94E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf6560
	ctx.lr = 0x82BC83A4;
	sub_82BF6560(ctx, base);
	// lwz r31,12452(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
loc_82BC83A8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc83e8
	if (ctx.cr6.eq) goto loc_82BC83E8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc83e8
	if (ctx.cr6.eq) goto loc_82BC83E8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bc8314
	if (!ctx.cr6.eq) goto loc_82BC8314;
loc_82BC83E8:
	// b 0x82bc83e8
	goto loc_82BC83E8;
loc_82BC83EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc7ca0
	ctx.lr = 0x82BC83F4;
	sub_82BC7CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc84a4
	if (!ctx.cr6.eq) goto loc_82BC84A4;
	// stw r31,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r31.u32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,12452(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc8440
	if (ctx.cr6.eq) goto loc_82BC8440;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BC8420:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82bc8460
	if (ctx.cr6.eq) goto loc_82BC8460;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc8420
	if (ctx.cr6.lt) goto loc_82BC8420;
loc_82BC8440:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,22303
	ctx.r5.s64 = 22303;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bc94e8
	ctx.lr = 0x82BC8450;
	sub_82BC94E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bf6560
	ctx.lr = 0x82BC845C;
	sub_82BF6560(ctx, base);
	// lwz r31,12452(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12452);
loc_82BC8460:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc84a0
	if (ctx.cr6.eq) goto loc_82BC84A0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc84a0
	if (ctx.cr6.eq) goto loc_82BC84A0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bc8314
	if (!ctx.cr6.eq) goto loc_82BC8314;
loc_82BC84A0:
	// b 0x82bc84a0
	goto loc_82BC84A0;
loc_82BC84A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6868
	ctx.lr = 0x82BC84AC;
	sub_82BC6868(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6ca0
	ctx.lr = 0x82BC84B4;
	sub_82BC6CA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc7230
	ctx.lr = 0x82BC84C0;
	sub_82BC7230(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc7198
	ctx.lr = 0x82BC84CC;
	sub_82BC7198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc8108
	ctx.lr = 0x82BC84D4;
	sub_82BC8108(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6bf8
	ctx.lr = 0x82BC84DC;
	sub_82BC6BF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82120040
	ctx.lr = 0x82BC84E8;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc850c
	if (ctx.cr6.eq) goto loc_82BC850C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ld r5,9432(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9432);
	// bl 0x82268968
	ctx.lr = 0x82BC8508;
	sub_82268968(ctx, base);
	// b 0x82bc8510
	goto loc_82BC8510;
loc_82BC850C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BC8510:
	// stw r3,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82268d50
	ctx.lr = 0x82BC851C;
	sub_82268D50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r11.u32);
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82218b20
	ctx.lr = 0x82BC8534;
	sub_82218B20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8540"))) PPC_WEAK_FUNC(sub_82BC8540);
PPC_FUNC_IMPL(__imp__sub_82BC8540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC8548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82bc6f30
	ctx.lr = 0x82BC8554;
	sub_82BC6F30(ctx, base);
	// lwz r3,432(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// addi r31,r29,428
	ctx.r31.s64 = ctx.r29.s64 + 428;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc8568
	if (ctx.cr6.eq) goto loc_82BC8568;
	// bl 0x82120a70
	ctx.lr = 0x82BC8568;
	sub_82120A70(ctx, base);
loc_82BC8568:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r29,368
	ctx.r3.s64 = ctx.r29.s64 + 368;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82121988
	ctx.lr = 0x82BC8580;
	sub_82121988(ctx, base);
	// lwz r3,340(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	// addi r31,r29,336
	ctx.r31.s64 = ctx.r29.s64 + 336;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc8594
	if (ctx.cr6.eq) goto loc_82BC8594;
	// bl 0x82120a70
	ctx.lr = 0x82BC8594;
	sub_82120A70(ctx, base);
loc_82BC8594:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC85A8"))) PPC_WEAK_FUNC(sub_82BC85A8);
PPC_FUNC_IMPL(__imp__sub_82BC85A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82BC85B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lbz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r6,42
	ctx.r6.s64 = 42;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// li r9,125
	ctx.r9.s64 = 125;
	// stw r6,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r6.u32);
	// li r10,84
	ctx.r10.s64 = 84;
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// addi r11,r31,260
	ctx.r11.s64 = ctx.r31.s64 + 260;
	// std r28,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r28.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r27,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r27.u32);
	// std r28,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r28.u64);
	// stw r7,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r7.u32);
	// stw r8,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r8.u32);
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// lwz r11,4676(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4676);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r27,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r27.u32);
	// stw r6,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r6.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// std r28,312(r31)
	PPC_STORE_U64(ctx.r31.u32 + 312, ctx.r28.u64);
	// std r28,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r28.u64);
	// stw r7,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r7.u32);
	// stw r8,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r8.u32);
	// stw r9,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r9.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// lwz r11,4676(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4676);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stb r4,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r4.u8);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stb r26,371(r31)
	PPC_STORE_U8(ctx.r31.u32 + 371, ctx.r26.u8);
	// bl 0x82123020
	ctx.lr = 0x82BC8694;
	sub_82123020(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc86a0
	if (ctx.cr6.eq) goto loc_82BC86A0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82BC86A0:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bc86ac
	if (ctx.cr0.eq) goto loc_82BC86AC;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82BC86AC:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82bc86b8
	if (ctx.cr0.eq) goto loc_82BC86B8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82BC86B8:
	// stb r27,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r27.u8);
	// rotlwi r9,r30,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stb r30,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r30.u8);
	// rotlwi r8,r30,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// rotlwi r6,r30,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stb r27,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r27.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r5,372(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r5,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,372(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stw r4,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r4.u32);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stw r30,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r30.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r9,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r9.u32);
	// rotlwi r9,r27,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r27.u32, 0);
	// stb r7,428(r11)
	PPC_STORE_U8(ctx.r11.u32 + 428, ctx.r7.u8);
	// stw r8,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r8.u32);
	// stw r10,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r10.u32);
	// stw r9,956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 956, ctx.r9.u32);
	// stw r6,960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 960, ctx.r6.u32);
	// stw r29,964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 964, ctx.r29.u32);
	// stw r30,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r30.u32);
	// stw r27,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r27.u32);
	// stw r30,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r30.u32);
	// stw r30,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r30.u32);
	// stw r30,380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 380, ctx.r30.u32);
	// stw r30,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r30.u32);
	// stb r30,444(r11)
	PPC_STORE_U8(ctx.r11.u32 + 444, ctx.r30.u8);
	// stw r30,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r30.u32);
	// stw r30,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r30.u32);
	// std r28,968(r11)
	PPC_STORE_U64(ctx.r11.u32 + 968, ctx.r28.u64);
	// std r28,976(r11)
	PPC_STORE_U64(ctx.r11.u32 + 976, ctx.r28.u64);
	// stw r30,984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 984, ctx.r30.u32);
	// stw r30,988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 988, ctx.r30.u32);
	// stw r30,992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 992, ctx.r30.u32);
	// stw r30,996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 996, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r30.u32);
	// stw r30,392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 392, ctx.r30.u32);
	// stw r30,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r30.u32);
	// stw r30,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r30.u32);
	// stw r30,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r30.u32);
	// stw r30,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r30.u32);
	// stw r30,424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 424, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC87A0"))) PPC_WEAK_FUNC(sub_82BC87A0);
PPC_FUNC_IMPL(__imp__sub_82BC87A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC87B4"))) PPC_WEAK_FUNC(sub_82BC87B4);
PPC_FUNC_IMPL(__imp__sub_82BC87B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC87B8"))) PPC_WEAK_FUNC(sub_82BC87B8);
PPC_FUNC_IMPL(__imp__sub_82BC87B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bc87c8
	if (ctx.cr6.eq) goto loc_82BC87C8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_82BC87C8:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC87D0"))) PPC_WEAK_FUNC(sub_82BC87D0);
PPC_FUNC_IMPL(__imp__sub_82BC87D0) {
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
	// lis r9,-32030
	ctx.r9.s64 = -2099118080;
	// lis r8,-31950
	ctx.r8.s64 = -2093875200;
	// addi r31,r9,26668
	ctx.r31.s64 = ctx.r9.s64 + 26668;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r8,-28048
	ctx.r3.s64 = ctx.r8.s64 + -28048;
	// stw r11,26668(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26668, ctx.r11.u32);
	// li r5,12288
	ctx.r5.s64 = 12288;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82218a80
	ctx.lr = 0x82BC880C;
	sub_82218A80(ctx, base);
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

__attribute__((alias("__imp__sub_82BC8824"))) PPC_WEAK_FUNC(sub_82BC8824);
PPC_FUNC_IMPL(__imp__sub_82BC8824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8828"))) PPC_WEAK_FUNC(sub_82BC8828);
PPC_FUNC_IMPL(__imp__sub_82BC8828) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82c09bec
	ctx.lr = 0x82BC8850;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r10,r11,26668
	ctx.r10.s64 = ctx.r11.s64 + 26668;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82bc8894
	if (ctx.cr6.lt) goto loc_82BC8894;
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-28048
	ctx.r11.s64 = ctx.r9.s64 + -28048;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82BC8878:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82bc8888
	if (!ctx.cr6.eq) goto loc_82BC8888;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82BC8888:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82bc8878
	if (!ctx.cr0.eq) goto loc_82BC8878;
loc_82BC8894:
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82c09bdc
	ctx.lr = 0x82BC889C;
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

__attribute__((alias("__imp__sub_82BC88B4"))) PPC_WEAK_FUNC(sub_82BC88B4);
PPC_FUNC_IMPL(__imp__sub_82BC88B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC88B8"))) PPC_WEAK_FUNC(sub_82BC88B8);
PPC_FUNC_IMPL(__imp__sub_82BC88B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82c09bec
	ctx.lr = 0x82BC88E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc8954
	if (ctx.cr6.eq) goto loc_82BC8954;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82bc8954
	if (!ctx.cr6.eq) goto loc_82BC8954;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r11,r11,26668
	ctx.r11.s64 = ctx.r11.s64 + 26668;
	// addi r9,r10,-28048
	ctx.r9.s64 = ctx.r10.s64 + -28048;
	// li r8,12
	ctx.r8.s64 = 12;
	// subf r7,r9,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r9.s64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// divw r6,r7,r8
	ctx.r6.s32 = ctx.r7.s32 / ctx.r8.s32;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x82bc8944
	if (!ctx.cr6.eq) goto loc_82BC8944;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82BC8944:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82BC8954:
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82c09bdc
	ctx.lr = 0x82BC895C;
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

__attribute__((alias("__imp__sub_82BC8974"))) PPC_WEAK_FUNC(sub_82BC8974);
PPC_FUNC_IMPL(__imp__sub_82BC8974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8978"))) PPC_WEAK_FUNC(sub_82BC8978);
PPC_FUNC_IMPL(__imp__sub_82BC8978) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82c09bec
	ctx.lr = 0x82BC89A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r8,r11,26668
	ctx.r8.s64 = ctx.r11.s64 + 26668;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-28048
	ctx.r10.s64 = ctx.r10.s64 + -28048;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82bc8a00
	if (ctx.cr6.lt) goto loc_82BC8A00;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82BC89C8:
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bc8a78
	if (ctx.cr6.eq) goto loc_82BC8A78;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r4,r5,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82bc89e8
	if (!ctx.cr6.eq) goto loc_82BC89E8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82BC89E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82bc89c8
	if (!ctx.cr6.gt) goto loc_82BC89C8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82bc8a10
	if (!ctx.cr6.lt) goto loc_82BC8A10;
loc_82BC8A00:
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r9,1024
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1024, ctx.xer);
	// bge cr6,0x82bc8aac
	if (!ctx.cr6.lt) goto loc_82BC8AAC;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
loc_82BC8A10:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// stwx r7,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r31,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r31.u32);
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// lhz r4,14(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// ori r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 | 32;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// bl 0x82c09bdc
	ctx.lr = 0x82BC8A5C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BC8A60:
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
loc_82BC8A78:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x82BC8AA4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82bc8a60
	goto loc_82BC8A60;
loc_82BC8AAC:
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82c09bdc
	ctx.lr = 0x82BC8AB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bc8a60
	goto loc_82BC8A60;
}

__attribute__((alias("__imp__sub_82BC8ABC"))) PPC_WEAK_FUNC(sub_82BC8ABC);
PPC_FUNC_IMPL(__imp__sub_82BC8ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8AC0"))) PPC_WEAK_FUNC(sub_82BC8AC0);
PPC_FUNC_IMPL(__imp__sub_82BC8AC0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-15760
	ctx.r31.s64 = ctx.r11.s64 + -15760;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82c09bec
	ctx.lr = 0x82BC8AE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82bc8b04
	if (!ctx.cr6.eq) goto loc_82BC8B04;
loc_82BC8AF4:
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82c09bdc
	ctx.lr = 0x82BC8AFC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bc8bb4
	goto loc_82BC8BB4;
loc_82BC8B04:
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// addi r8,r11,26668
	ctx.r8.s64 = ctx.r11.s64 + 26668;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-28048
	ctx.r10.s64 = ctx.r10.s64 + -28048;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82bc8b60
	if (ctx.cr6.lt) goto loc_82BC8B60;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82BC8B28:
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bc8bcc
	if (ctx.cr6.eq) goto loc_82BC8BCC;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r4,r5,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82bc8b48
	if (!ctx.cr6.eq) goto loc_82BC8B48;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82BC8B48:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82bc8b28
	if (!ctx.cr6.gt) goto loc_82BC8B28;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82bc8b70
	if (!ctx.cr6.lt) goto loc_82BC8B70;
loc_82BC8B60:
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r7,1024
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1024, ctx.xer);
	// bge cr6,0x82bc8af4
	if (!ctx.cr6.lt) goto loc_82BC8AF4;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
loc_82BC8B70:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// stwx r30,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r30.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r5,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_82BC8BAC:
	// bl 0x82c09bdc
	ctx.lr = 0x82BC8BB0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC8BB4:
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
loc_82BC8BCC:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x82bc8bac
	goto loc_82BC8BAC;
}

__attribute__((alias("__imp__sub_82BC8BF8"))) PPC_WEAK_FUNC(sub_82BC8BF8);
PPC_FUNC_IMPL(__imp__sub_82BC8BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82BC8C00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r29,r11,-15760
	ctx.r29.s64 = ctx.r11.s64 + -15760;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x82c09bec
	ctx.lr = 0x82BC8C14;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r11,26668
	ctx.r25.s64 = ctx.r11.s64 + 26668;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82bc8ccc
	if (ctx.cr6.lt) goto loc_82BC8CCC;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// addi r11,r11,-28048
	ctx.r11.s64 = ctx.r11.s64 + -28048;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
loc_82BC8C3C:
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82bc8cb8
	if (ctx.cr6.eq) goto loc_82BC8CB8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc8cb8
	if (!ctx.cr6.eq) goto loc_82BC8CB8;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// lwz r30,12480(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x82BC8C60;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r31,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc5990
	ctx.lr = 0x82BC8C7C;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82BC8C88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc8cb8
	if (ctx.cr6.eq) goto loc_82BC8CB8;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82bc8cb8
	if (ctx.cr6.eq) goto loc_82BC8CB8;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bc8cb8
	if (ctx.cr6.eq) goto loc_82BC8CB8;
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
loc_82BC8CB8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82bc8c3c
	if (!ctx.cr6.gt) goto loc_82BC8C3C;
loc_82BC8CCC:
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x82c09bdc
	ctx.lr = 0x82BC8CD4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8CDC"))) PPC_WEAK_FUNC(sub_82BC8CDC);
PPC_FUNC_IMPL(__imp__sub_82BC8CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8CE0"))) PPC_WEAK_FUNC(sub_82BC8CE0);
PPC_FUNC_IMPL(__imp__sub_82BC8CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC8CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r31,12480(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x82BC8D08;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r31,4132
	ctx.r4.s64 = ctx.r31.s64 + 4132;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82BC8D14;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82BC8D20;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82bc8dac
	if (ctx.cr6.eq) goto loc_82BC8DAC;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82c09bec
	ctx.lr = 0x82BC8D30;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,26668
	ctx.r9.s64 = ctx.r11.s64 + 26668;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82bc8da4
	if (ctx.cr6.lt) goto loc_82BC8DA4;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r8,r11,-28048
	ctx.r8.s64 = ctx.r11.s64 + -28048;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82BC8D54:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82bc8d70
	if (!ctx.cr6.eq) goto loc_82BC8D70;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82bc8d90
	if (!ctx.cr6.eq) goto loc_82BC8D90;
loc_82BC8D70:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82bc8d54
	if (!ctx.cr6.gt) goto loc_82BC8D54;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82c09bdc
	ctx.lr = 0x82BC8D88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BC8D90:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r29.u32);
loc_82BC8DA4:
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x82c09bdc
	ctx.lr = 0x82BC8DAC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BC8DAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8DB4"))) PPC_WEAK_FUNC(sub_82BC8DB4);
PPC_FUNC_IMPL(__imp__sub_82BC8DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8DB8"))) PPC_WEAK_FUNC(sub_82BC8DB8);
PPC_FUNC_IMPL(__imp__sub_82BC8DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC8DBC"))) PPC_WEAK_FUNC(sub_82BC8DBC);
PPC_FUNC_IMPL(__imp__sub_82BC8DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8DC0"))) PPC_WEAK_FUNC(sub_82BC8DC0);
PPC_FUNC_IMPL(__imp__sub_82BC8DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC8DC4"))) PPC_WEAK_FUNC(sub_82BC8DC4);
PPC_FUNC_IMPL(__imp__sub_82BC8DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8DC8"))) PPC_WEAK_FUNC(sub_82BC8DC8);
PPC_FUNC_IMPL(__imp__sub_82BC8DC8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222db60
	ctx.lr = 0x82BC8DE4;
	sub_8222DB60(ctx, base);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r6,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r6.u32);
	// stw r4,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r4.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// stw r5,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82BC8E34"))) PPC_WEAK_FUNC(sub_82BC8E34);
PPC_FUNC_IMPL(__imp__sub_82BC8E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8E38"))) PPC_WEAK_FUNC(sub_82BC8E38);
PPC_FUNC_IMPL(__imp__sub_82BC8E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC8E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82210688
	ctx.lr = 0x82BC8E4C;
	sub_82210688(ctx, base);
	// ld r11,128(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 128);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r31,24(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24, ctx.r31.u8);
	// std r31,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r31.u64);
	// std r10,128(r29)
	PPC_STORE_U64(ctx.r29.u32 + 128, ctx.r10.u64);
	// std r31,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r31.u64);
	// bl 0x82204940
	ctx.lr = 0x82BC8E6C;
	sub_82204940(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// std r3,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r3.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,24(r29)
	PPC_STORE_U8(ctx.r29.u32 + 24, ctx.r30.u8);
	// bl 0x82210688
	ctx.lr = 0x82BC8E80;
	sub_82210688(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r31,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r31.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// std r31,112(r29)
	PPC_STORE_U64(ctx.r29.u32 + 112, ctx.r31.u64);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r31,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r31.u32);
	// std r31,104(r29)
	PPC_STORE_U64(ctx.r29.u32 + 104, ctx.r31.u64);
	// lfs f12,-29632(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29632);
	ctx.f12.f64 = double(temp.f32);
	// std r31,48(r29)
	PPC_STORE_U64(ctx.r29.u32 + 48, ctx.r31.u64);
	// lfs f11,29744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// lfs f0,-29636(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29636);
	ctx.f0.f64 = double(temp.f32);
	// std r3,136(r29)
	PPC_STORE_U64(ctx.r29.u32 + 136, ctx.r3.u64);
	// lfs f13,29760(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// std r3,40(r29)
	PPC_STORE_U64(ctx.r29.u32 + 40, ctx.r3.u64);
	// stfs f11,68(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// stw r31,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r31.u32);
	// stfs f0,80(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 80, temp.u32);
	// stw r30,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r30.u32);
	// stfs f0,64(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// stw r31,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r31.u32);
	// stfs f13,92(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
	// stfs f13,96(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 96, temp.u32);
	// stfd f12,56(r29)
	PPC_STORE_U64(ctx.r29.u32 + 56, ctx.f12.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC8EEC"))) PPC_WEAK_FUNC(sub_82BC8EEC);
PPC_FUNC_IMPL(__imp__sub_82BC8EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC8EF0"))) PPC_WEAK_FUNC(sub_82BC8EF0);
PPC_FUNC_IMPL(__imp__sub_82BC8EF0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822106c8
	ctx.lr = 0x82BC8F10;
	sub_822106C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82210688
	ctx.lr = 0x82BC8F18;
	sub_82210688(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// std r3,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r30.u64);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lfs f0,-29236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29236);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// bl 0x82bc8e38
	ctx.lr = 0x82BC8F58;
	sub_82BC8E38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82120040
	ctx.lr = 0x82BC8F64;
	sub_82120040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc8f8c
	if (ctx.cr6.eq) goto loc_82BC8F8C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82bc8f90
	goto loc_82BC8F90;
loc_82BC8F8C:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_82BC8F90:
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

__attribute__((alias("__imp__sub_82BC8FA8"))) PPC_WEAK_FUNC(sub_82BC8FA8);
PPC_FUNC_IMPL(__imp__sub_82BC8FA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lfs f31,-30732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30732);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bc90e0
	if (!ctx.cr6.eq) goto loc_82BC90E0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc9030
	if (ctx.cr6.eq) goto loc_82BC9030;
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// ld r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 136);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f9,64(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fctidz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// std r9,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r9.u64);
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.f6.u64);
	// b 0x82bc90e8
	goto loc_82BC90E8;
loc_82BC9030:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc9054
	if (ctx.cr6.eq) goto loc_82BC9054;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82210688
	ctx.lr = 0x82BC904C;
	sub_82210688(ctx, base);
	// std r3,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r3.u64);
	// b 0x82bc90e8
	goto loc_82BC90E8;
loc_82BC9054:
	// bl 0x82210688
	ctx.lr = 0x82BC9058;
	sub_82210688(ctx, base);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// std r3,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r3.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,-30728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x82bc90ac
	if (!ctx.cr6.gt) goto loc_82BC90AC;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.f12.u64);
loc_82BC90AC:
	// lfd f0,56(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f7,64(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.f5.u64);
	// b 0x82bc90e8
	goto loc_82BC90E8;
loc_82BC90E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82BC90E8:
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 136);
	// ld r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// std r9,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r9.u64);
	// std r7,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r7.u64);
	// ble cr6,0x82bc9138
	if (!ctx.cr6.gt) goto loc_82BC9138;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// ld r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r10,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r10.u64);
loc_82BC9138:
	// lfs f2,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f1,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bbde00
	ctx.lr = 0x82BC9148;
	sub_82BBDE00(ctx, base);
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

__attribute__((alias("__imp__sub_82BC9160"))) PPC_WEAK_FUNC(sub_82BC9160);
PPC_FUNC_IMPL(__imp__sub_82BC9160) {
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
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc918c
	if (ctx.cr6.eq) goto loc_82BC918C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbdce0
	ctx.lr = 0x82BC9184;
	sub_82BBDCE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BC918C;
	sub_82120A70(ctx, base);
loc_82BC918C:
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

__attribute__((alias("__imp__sub_82BC91A0"))) PPC_WEAK_FUNC(sub_82BC91A0);
PPC_FUNC_IMPL(__imp__sub_82BC91A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r10,r10,14560
	ctx.r10.s64 = ctx.r10.s64 + 14560;
loc_82BC91B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r6,r3,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r3,r4,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// xor r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// bne 0x82bc91b8
	if (!ctx.cr0.eq) goto loc_82BC91B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC91E4"))) PPC_WEAK_FUNC(sub_82BC91E4);
PPC_FUNC_IMPL(__imp__sub_82BC91E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC91E8"))) PPC_WEAK_FUNC(sub_82BC91E8);
PPC_FUNC_IMPL(__imp__sub_82BC91E8) {
	PPC_FUNC_PROLOGUE();
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82BC9208:
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bc921c
	if (ctx.cr6.eq) goto loc_82BC921C;
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
loc_82BC921C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne 0x82bc9208
	if (!ctx.cr0.eq) goto loc_82BC9208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9230"))) PPC_WEAK_FUNC(sub_82BC9230);
PPC_FUNC_IMPL(__imp__sub_82BC9230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r11,14560
	ctx.r8.s64 = ctx.r11.s64 + 14560;
	// lis r11,1217
	ctx.r11.s64 = 79757312;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r7,r11,7607
	ctx.r7.u64 = ctx.r11.u64 | 7607;
loc_82BC9248:
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc925c
	if (ctx.cr6.eq) goto loc_82BC925C;
	// li r11,128
	ctx.r11.s64 = 128;
loc_82BC925C:
	// rlwinm r9,r6,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x1;
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc9270
	if (ctx.cr6.eq) goto loc_82BC9270;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82BC9270:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc9284
	if (ctx.cr6.eq) goto loc_82BC9284;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_82BC9284:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc9298
	if (ctx.cr6.eq) goto loc_82BC9298;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82BC9298:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc92ac
	if (ctx.cr6.eq) goto loc_82BC92AC;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82BC92AC:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc92c0
	if (ctx.cr6.eq) goto loc_82BC92C0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82BC92C0:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc92d4
	if (ctx.cr6.eq) goto loc_82BC92D4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82BC92D4:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc92e4
	if (ctx.cr6.eq) goto loc_82BC92E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82BC92E4:
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,24,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x80000000;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bne cr6,0x82bc9300
	if (!ctx.cr6.eq) goto loc_82BC9300;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC9300:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r4,r9,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bc9320
	if (!ctx.cr6.eq) goto loc_82BC9320;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC9320:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r3,r4,0,0,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc9344
	if (!ctx.cr6.eq) goto loc_82BC9344;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC9344:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r3,r4,0,0,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc9368
	if (!ctx.cr6.eq) goto loc_82BC9368;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC9368:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r3,r4,0,0,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc938c
	if (!ctx.cr6.eq) goto loc_82BC938C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC938C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r3,r4,0,0,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc93b0
	if (!ctx.cr6.eq) goto loc_82BC93B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC93B0:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r3,r4,0,0,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc93d4
	if (!ctx.cr6.eq) goto loc_82BC93D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC93D4:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// xor r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r3,r4,0,0,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc93f8
	if (!ctx.cr6.eq) goto loc_82BC93F8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BC93F8:
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_82BC9410:
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bc9424
	if (ctx.cr6.eq) goto loc_82BC9424;
	// slw r4,r5,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
loc_82BC9424:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bgt cr6,0x82bc9410
	if (ctx.cr6.gt) goto loc_82BC9410;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// ble cr6,0x82bc9248
	if (!ctx.cr6.gt) goto loc_82BC9248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC944C"))) PPC_WEAK_FUNC(sub_82BC944C);
PPC_FUNC_IMPL(__imp__sub_82BC944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9450"))) PPC_WEAK_FUNC(sub_82BC9450);
PPC_FUNC_IMPL(__imp__sub_82BC9450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9454"))) PPC_WEAK_FUNC(sub_82BC9454);
PPC_FUNC_IMPL(__imp__sub_82BC9454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9458"))) PPC_WEAK_FUNC(sub_82BC9458);
PPC_FUNC_IMPL(__imp__sub_82BC9458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC945C"))) PPC_WEAK_FUNC(sub_82BC945C);
PPC_FUNC_IMPL(__imp__sub_82BC945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9460"))) PPC_WEAK_FUNC(sub_82BC9460);
PPC_FUNC_IMPL(__imp__sub_82BC9460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc9474
	if (!ctx.cr6.eq) goto loc_82BC9474;
loc_82BC946C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BC9474:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc946c
	if (ctx.cr6.eq) goto loc_82BC946C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC94A4"))) PPC_WEAK_FUNC(sub_82BC94A4);
PPC_FUNC_IMPL(__imp__sub_82BC94A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC94A8"))) PPC_WEAK_FUNC(sub_82BC94A8);
PPC_FUNC_IMPL(__imp__sub_82BC94A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc94dc
	if (ctx.cr6.eq) goto loc_82BC94DC;
loc_82BC94BC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc94bc
	if (ctx.cr6.lt) goto loc_82BC94BC;
loc_82BC94DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC94E4"))) PPC_WEAK_FUNC(sub_82BC94E4);
PPC_FUNC_IMPL(__imp__sub_82BC94E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC94E8"))) PPC_WEAK_FUNC(sub_82BC94E8);
PPC_FUNC_IMPL(__imp__sub_82BC94E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC94F0;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82bc951c
	if (ctx.cr6.lt) goto loc_82BC951C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BC951C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82120040
	ctx.lr = 0x82BC9528;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc9558
	if (ctx.cr6.eq) goto loc_82BC9558;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82bc955c
	goto loc_82BC955C;
loc_82BC9558:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BC955C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9580"))) PPC_WEAK_FUNC(sub_82BC9580);
PPC_FUNC_IMPL(__imp__sub_82BC9580) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r31,13396(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f2b38
	ctx.lr = 0x82BC95AC;
	sub_827F2B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc95c0
	if (!ctx.cr6.eq) goto loc_82BC95C0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f4278
	ctx.lr = 0x82BC95C0;
	sub_827F4278(ctx, base);
loc_82BC95C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82BC95E0"))) PPC_WEAK_FUNC(sub_82BC95E0);
PPC_FUNC_IMPL(__imp__sub_82BC95E0) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bc96c8
	if (ctx.cr6.eq) goto loc_82BC96C8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bne cr6,0x82bc9650
	if (!ctx.cr6.eq) goto loc_82BC9650;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc9634
	if (ctx.cr6.eq) goto loc_82BC9634;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82bc96c0
	if (ctx.cr6.eq) goto loc_82BC96C0;
loc_82BC9634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc9580
	ctx.lr = 0x82BC963C;
	sub_82BC9580(ctx, base);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-19780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x82bc96cc
	goto loc_82BC96CC;
loc_82BC9650:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc96c0
	if (ctx.cr6.eq) goto loc_82BC96C0;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r3,12704(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12704);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82bc9690
	if (ctx.cr6.eq) goto loc_82BC9690;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bgt cr6,0x82bc96c0
	if (ctx.cr6.gt) goto loc_82BC96C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82bbe4a0
	ctx.lr = 0x82BC9688;
	sub_82BBE4A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bc96cc
	goto loc_82BC96CC;
loc_82BC9690:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BC9694:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82bc96b4
	if (ctx.cr6.gt) goto loc_82BC96B4;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82bbe4a0
	ctx.lr = 0x82BC96B0;
	sub_82BBE4A0(ctx, base);
	// lwz r3,12704(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12704);
loc_82BC96B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82bc9694
	if (ctx.cr6.lt) goto loc_82BC9694;
loc_82BC96C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bc96cc
	goto loc_82BC96CC;
loc_82BC96C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BC96CC:
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

__attribute__((alias("__imp__sub_82BC96E4"))) PPC_WEAK_FUNC(sub_82BC96E4);
PPC_FUNC_IMPL(__imp__sub_82BC96E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC96E8"))) PPC_WEAK_FUNC(sub_82BC96E8);
PPC_FUNC_IMPL(__imp__sub_82BC96E8) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc9784
	if (ctx.cr6.eq) goto loc_82BC9784;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82bc9730
	if (!ctx.cr6.gt) goto loc_82BC9730;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// b 0x82bc9784
	goto loc_82BC9784;
loc_82BC9730:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc95e0
	ctx.lr = 0x82BC9738;
	sub_82BC95E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bc9784
	if (ctx.cr6.eq) goto loc_82BC9784;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BC9748;
	sub_82120A70(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82bc9778
	if (!ctx.cr6.gt) goto loc_82BC9778;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82BC975C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bc975c
	if (ctx.cr6.lt) goto loc_82BC975C;
loc_82BC9778:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82BC9784:
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

__attribute__((alias("__imp__sub_82BC979C"))) PPC_WEAK_FUNC(sub_82BC979C);
PPC_FUNC_IMPL(__imp__sub_82BC979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC97A0"))) PPC_WEAK_FUNC(sub_82BC97A0);
PPC_FUNC_IMPL(__imp__sub_82BC97A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC97C0"))) PPC_WEAK_FUNC(sub_82BC97C0);
PPC_FUNC_IMPL(__imp__sub_82BC97C0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc97d4
	if (ctx.cr6.eq) goto loc_82BC97D4;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82BC97D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r3,r11,1,0,30
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFFFFFFFE) | (ctx.r3.u64 & 0xFFFFFFFF00000001);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC97E0"))) PPC_WEAK_FUNC(sub_82BC97E0);
PPC_FUNC_IMPL(__imp__sub_82BC97E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC97FC"))) PPC_WEAK_FUNC(sub_82BC97FC);
PPC_FUNC_IMPL(__imp__sub_82BC97FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9800"))) PPC_WEAK_FUNC(sub_82BC9800);
PPC_FUNC_IMPL(__imp__sub_82BC9800) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9820"))) PPC_WEAK_FUNC(sub_82BC9820);
PPC_FUNC_IMPL(__imp__sub_82BC9820) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC983C"))) PPC_WEAK_FUNC(sub_82BC983C);
PPC_FUNC_IMPL(__imp__sub_82BC983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9840"))) PPC_WEAK_FUNC(sub_82BC9840);
PPC_FUNC_IMPL(__imp__sub_82BC9840) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9860"))) PPC_WEAK_FUNC(sub_82BC9860);
PPC_FUNC_IMPL(__imp__sub_82BC9860) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc9894
	if (ctx.cr6.eq) goto loc_82BC9894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82BC9874:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc9874
	if (ctx.cr6.lt) goto loc_82BC9874;
loc_82BC9894:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC989C"))) PPC_WEAK_FUNC(sub_82BC989C);
PPC_FUNC_IMPL(__imp__sub_82BC989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC98A0"))) PPC_WEAK_FUNC(sub_82BC98A0);
PPC_FUNC_IMPL(__imp__sub_82BC98A0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,13312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r3,448(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82bc9960
	if (ctx.cr6.eq) goto loc_82BC9960;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82bc9960
	if (ctx.cr6.lt) goto loc_82BC9960;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x82bc9960
	if (!ctx.cr6.lt) goto loc_82BC9960;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc9960
	if (ctx.cr6.eq) goto loc_82BC9960;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc9960
	if (ctx.cr6.eq) goto loc_82BC9960;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82BC9908:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82bc9908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82BC9908;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8222eb58
	ctx.lr = 0x82BC9920;
	sub_8222EB58(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BC9928:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bc9928
	if (!ctx.cr6.eq) goto loc_82BC9928;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BC9960:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9974"))) PPC_WEAK_FUNC(sub_82BC9974);
PPC_FUNC_IMPL(__imp__sub_82BC9974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9978"))) PPC_WEAK_FUNC(sub_82BC9978);
PPC_FUNC_IMPL(__imp__sub_82BC9978) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bc99ac
	if (!ctx.cr6.eq) goto loc_82BC99AC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bc99ac
	if (!ctx.cr6.lt) goto loc_82BC99AC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// blr 
	return;
loc_82BC99AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC99B4"))) PPC_WEAK_FUNC(sub_82BC99B4);
PPC_FUNC_IMPL(__imp__sub_82BC99B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC99B8"))) PPC_WEAK_FUNC(sub_82BC99B8);
PPC_FUNC_IMPL(__imp__sub_82BC99B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc99f4
	if (ctx.cr6.eq) goto loc_82BC99F4;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc99e8
	if (ctx.cr6.eq) goto loc_82BC99E8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc99e8
	if (ctx.cr6.eq) goto loc_82BC99E8;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BC99E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82BC99F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC99FC"))) PPC_WEAK_FUNC(sub_82BC99FC);
PPC_FUNC_IMPL(__imp__sub_82BC99FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9A00"))) PPC_WEAK_FUNC(sub_82BC9A00);
PPC_FUNC_IMPL(__imp__sub_82BC9A00) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc9a6c
	if (ctx.cr6.eq) goto loc_82BC9A6C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc9a6c
	if (ctx.cr6.eq) goto loc_82BC9A6C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc9a40
	if (ctx.cr6.eq) goto loc_82BC9A40;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82bc9a44
	goto loc_82BC9A44;
loc_82BC9A40:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BC9A44:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82bc9a6c
	if (!ctx.cr6.eq) goto loc_82BC9A6C;
	// bl 0x82bc98a0
	ctx.lr = 0x82BC9A50;
	sub_82BC98A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc9a60
	if (!ctx.cr6.eq) goto loc_82BC9A60;
loc_82BC9A58:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82bc9a80
	goto loc_82BC9A80;
loc_82BC9A60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82bc9a58
	if (!ctx.cr6.lt) goto loc_82BC9A58;
loc_82BC9A6C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82bc9a80
	if (ctx.cr6.eq) goto loc_82BC9A80;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BC9A80:
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

__attribute__((alias("__imp__sub_82BC9A98"))) PPC_WEAK_FUNC(sub_82BC9A98);
PPC_FUNC_IMPL(__imp__sub_82BC9A98) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bc9b20
	if (ctx.cr6.eq) goto loc_82BC9B20;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82bc9b08
	if (!ctx.cr6.gt) goto loc_82BC9B08;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc9af0
	if (!ctx.cr6.eq) goto loc_82BC9AF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82120040
	ctx.lr = 0x82BC9AEC;
	sub_82120040(ctx, base);
	// b 0x82bc9af8
	goto loc_82BC9AF8;
loc_82BC9AF0:
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// bl 0x82121828
	ctx.lr = 0x82BC9AF8;
	sub_82121828(ctx, base);
loc_82BC9AF8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82BC9B08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82BC9B20:
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

__attribute__((alias("__imp__sub_82BC9B38"))) PPC_WEAK_FUNC(sub_82BC9B38);
PPC_FUNC_IMPL(__imp__sub_82BC9B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82120a70
	sub_82120A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9B54"))) PPC_WEAK_FUNC(sub_82BC9B54);
PPC_FUNC_IMPL(__imp__sub_82BC9B54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9B58"))) PPC_WEAK_FUNC(sub_82BC9B58);
PPC_FUNC_IMPL(__imp__sub_82BC9B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC9B60;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r4,29829
	ctx.r4.s64 = 1954873344;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// ori r4,r4,38437
	ctx.r4.u64 = ctx.r4.u64 | 38437;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82bc9a98
	ctx.lr = 0x82BC9B98;
	sub_82BC9A98(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bc9a98
	ctx.lr = 0x82BC9BA4;
	sub_82BC9A98(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82bc9bf4
	if (!ctx.cr6.gt) goto loc_82BC9BF4;
loc_82BC9BB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r28,r31,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82bc9a98
	ctx.lr = 0x82BC9BC8;
	sub_82BC9A98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82bc9a98
	ctx.lr = 0x82BC9BD4;
	sub_82BC9A98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82bc9a98
	ctx.lr = 0x82BC9BE0;
	sub_82BC9A98(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc9bb4
	if (ctx.cr6.lt) goto loc_82BC9BB4;
loc_82BC9BF4:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// bl 0x827f92f0
	ctx.lr = 0x82BC9C0C;
	sub_827F92F0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bc9c28
	if (ctx.cr6.eq) goto loc_82BC9C28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc9c28
	if (ctx.cr6.eq) goto loc_82BC9C28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BC9C28;
	sub_82120A70(ctx, base);
loc_82BC9C28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9C30"))) PPC_WEAK_FUNC(sub_82BC9C30);
PPC_FUNC_IMPL(__imp__sub_82BC9C30) {
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
	// bne cr6,0x82bc9c5c
	if (!ctx.cr6.eq) goto loc_82BC9C5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bc9ccc
	goto loc_82BC9CCC;
loc_82BC9C5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc9ca4
	if (ctx.cr6.lt) goto loc_82BC9CA4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bc9c88
	if (!ctx.cr6.eq) goto loc_82BC9C88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82120040
	ctx.lr = 0x82BC9C84;
	sub_82120040(ctx, base);
	// b 0x82bc9c94
	goto loc_82BC9C94;
loc_82BC9C88:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x82BC9C94;
	sub_82121828(ctx, base);
loc_82BC9C94:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82BC9CA4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x82bc9a00
	ctx.lr = 0x82BC9CC8;
	sub_82BC9A00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BC9CCC:
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

__attribute__((alias("__imp__sub_82BC9CE4"))) PPC_WEAK_FUNC(sub_82BC9CE4);
PPC_FUNC_IMPL(__imp__sub_82BC9CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9CE8"))) PPC_WEAK_FUNC(sub_82BC9CE8);
PPC_FUNC_IMPL(__imp__sub_82BC9CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BC9CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82bc9d2c
	if (!ctx.cr6.gt) goto loc_82BC9D2C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82BC9D0C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82120a70
	ctx.lr = 0x82BC9D18;
	sub_82120A70(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc9d0c
	if (ctx.cr6.lt) goto loc_82BC9D0C;
loc_82BC9D2C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc9d3c
	if (ctx.cr6.eq) goto loc_82BC9D3C;
	// bl 0x82120a70
	ctx.lr = 0x82BC9D3C;
	sub_82120A70(ctx, base);
loc_82BC9D3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9D44"))) PPC_WEAK_FUNC(sub_82BC9D44);
PPC_FUNC_IMPL(__imp__sub_82BC9D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9D48"))) PPC_WEAK_FUNC(sub_82BC9D48);
PPC_FUNC_IMPL(__imp__sub_82BC9D48) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82bc9d7c
	if (ctx.cr6.eq) goto loc_82BC9D7C;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// bl 0x82bc9a00
	ctx.lr = 0x82BC9D68;
	sub_82BC9A00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BC9D7C:
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

__attribute__((alias("__imp__sub_82BC9D90"))) PPC_WEAK_FUNC(sub_82BC9D90);
PPC_FUNC_IMPL(__imp__sub_82BC9D90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82bc9a00
	sub_82BC9A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9DA8"))) PPC_WEAK_FUNC(sub_82BC9DA8);
PPC_FUNC_IMPL(__imp__sub_82BC9DA8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82bc9ddc
	if (ctx.cr6.eq) goto loc_82BC9DDC;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// bl 0x82bc9a00
	ctx.lr = 0x82BC9DC8;
	sub_82BC9A00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BC9DDC:
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

__attribute__((alias("__imp__sub_82BC9DF0"))) PPC_WEAK_FUNC(sub_82BC9DF0);
PPC_FUNC_IMPL(__imp__sub_82BC9DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82bc9b58
	sub_82BC9B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9E00"))) PPC_WEAK_FUNC(sub_82BC9E00);
PPC_FUNC_IMPL(__imp__sub_82BC9E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC9E04"))) PPC_WEAK_FUNC(sub_82BC9E04);
PPC_FUNC_IMPL(__imp__sub_82BC9E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9E08"))) PPC_WEAK_FUNC(sub_82BC9E08);
PPC_FUNC_IMPL(__imp__sub_82BC9E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BC9E10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82bc9e6c
	if (!ctx.cr6.gt) goto loc_82BC9E6C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82BC9E34:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// bl 0x82bc9a00
	ctx.lr = 0x82BC9E4C;
	sub_82BC9A00(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc9e34
	if (ctx.cr6.lt) goto loc_82BC9E34;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BC9E6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9E7C"))) PPC_WEAK_FUNC(sub_82BC9E7C);
PPC_FUNC_IMPL(__imp__sub_82BC9E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9E80"))) PPC_WEAK_FUNC(sub_82BC9E80);
PPC_FUNC_IMPL(__imp__sub_82BC9E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BC9E88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc9ed0
	if (ctx.cr6.eq) goto loc_82BC9ED0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82BC9EB0:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bc9f10
	if (ctx.cr6.eq) goto loc_82BC9F10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc9eb0
	if (ctx.cr6.lt) goto loc_82BC9EB0;
loc_82BC9ED0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82120040
	ctx.lr = 0x82BC9EDC;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc9f48
	if (ctx.cr6.eq) goto loc_82BC9F48;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bc9c30
	ctx.lr = 0x82BC9F08;
	sub_82BC9C30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BC9F10:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bc9f28
	if (ctx.cr6.eq) goto loc_82BC9F28;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc9a00
	ctx.lr = 0x82BC9F28;
	sub_82BC9A00(ctx, base);
loc_82BC9F28:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82bc9f54
	if (ctx.cr6.eq) goto loc_82BC9F54;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc9a00
	ctx.lr = 0x82BC9F40;
	sub_82BC9A00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82BC9F48:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bc9c30
	ctx.lr = 0x82BC9F54;
	sub_82BC9C30(ctx, base);
loc_82BC9F54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC9F5C"))) PPC_WEAK_FUNC(sub_82BC9F5C);
PPC_FUNC_IMPL(__imp__sub_82BC9F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC9F60"))) PPC_WEAK_FUNC(sub_82BC9F60);
PPC_FUNC_IMPL(__imp__sub_82BC9F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BC9F68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc9fb0
	if (ctx.cr6.eq) goto loc_82BC9FB0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82BC9F90:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bc9ff0
	if (ctx.cr6.eq) goto loc_82BC9FF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc9f90
	if (ctx.cr6.lt) goto loc_82BC9F90;
loc_82BC9FB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82120040
	ctx.lr = 0x82BC9FBC;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bca00c
	if (ctx.cr6.eq) goto loc_82BCA00C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc9c30
	ctx.lr = 0x82BC9FE8;
	sub_82BC9C30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BC9FF0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bca018
	if (ctx.cr6.eq) goto loc_82BCA018;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// bl 0x82bc9a00
	ctx.lr = 0x82BCA004;
	sub_82BC9A00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82BCA00C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc9c30
	ctx.lr = 0x82BCA018;
	sub_82BC9C30(ctx, base);
loc_82BCA018:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCA020"))) PPC_WEAK_FUNC(sub_82BCA020);
PPC_FUNC_IMPL(__imp__sub_82BCA020) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bca090
	if (ctx.cr6.eq) goto loc_82BCA090;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bca090
	if (ctx.cr6.eq) goto loc_82BCA090;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bca058
	if (ctx.cr6.eq) goto loc_82BCA058;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82bca05c
	goto loc_82BCA05C;
loc_82BCA058:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82BCA05C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82bca090
	if (!ctx.cr6.eq) goto loc_82BCA090;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bca090
	if (ctx.cr6.eq) goto loc_82BCA090;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x82bc9a00
	ctx.lr = 0x82BCA07C;
	sub_82BC9A00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BCA090:
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

__attribute__((alias("__imp__sub_82BCA0A4"))) PPC_WEAK_FUNC(sub_82BCA0A4);
PPC_FUNC_IMPL(__imp__sub_82BCA0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BCA0A8"))) PPC_WEAK_FUNC(sub_82BCA0A8);
PPC_FUNC_IMPL(__imp__sub_82BCA0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82BCA0B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r27.u32);
	// lwz r3,13312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// bl 0x827f98e0
	ctx.lr = 0x82BCA0D4;
	sub_827F98E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bca184
	if (ctx.cr6.eq) goto loc_82BCA184;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bca17c
	if (ctx.cr6.eq) goto loc_82BCA17C;
	// lis r11,29829
	ctx.r11.s64 = 1954873344;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r9,r11,38437
	ctx.r9.u64 = ctx.r11.u64 | 38437;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bca17c
	if (!ctx.cr6.eq) goto loc_82BCA17C;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// ble cr6,0x82bca17c
	if (!ctx.cr6.gt) goto loc_82BCA17C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,8
	ctx.r31.s64 = 8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82bca17c
	if (ctx.cr6.gt) goto loc_82BCA17C;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// ble cr6,0x82bca17c
	if (!ctx.cr6.gt) goto loc_82BCA17C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82bca134
	if (!ctx.cr6.lt) goto loc_82BCA134;
loc_82BCA128:
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82bca138
	goto loc_82BCA138;
loc_82BCA134:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BCA138:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82bca14c
	if (!ctx.cr6.lt) goto loc_82BCA14C;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82bca150
	goto loc_82BCA150;
loc_82BCA14C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82BCA150:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82bca164
	if (!ctx.cr6.lt) goto loc_82BCA164;
	// lwzx r6,r31,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82bca168
	goto loc_82BCA168;
loc_82BCA164:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_82BCA168:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bc9e80
	ctx.lr = 0x82BCA174;
	sub_82BC9E80(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82bca128
	if (ctx.cr6.lt) goto loc_82BCA128;
loc_82BCA17C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120a70
	ctx.lr = 0x82BCA184;
	sub_82120A70(ctx, base);
loc_82BCA184:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BCA18C"))) PPC_WEAK_FUNC(sub_82BCA18C);
PPC_FUNC_IMPL(__imp__sub_82BCA18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

