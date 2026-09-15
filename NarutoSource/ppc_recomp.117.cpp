#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82795CB8"))) PPC_WEAK_FUNC(sub_82795CB8);
PPC_FUNC_IMPL(__imp__sub_82795CB8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82795d24
	if (ctx.cr6.eq) goto loc_82795D24;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82795450
	ctx.lr = 0x82795CDC;
	sub_82795450(ctx, base);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82795d24
	if (ctx.cr6.eq) goto loc_82795D24;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82795d04
	if (!ctx.cr6.lt) goto loc_82795D04;
loc_82795CF8:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82795d08
	goto loc_82795D08;
loc_82795D04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82795D08:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82795d3c
	if (ctx.cr6.eq) goto loc_82795D3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82795cf8
	if (ctx.cr6.lt) goto loc_82795CF8;
loc_82795D24:
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82795D3C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82795D54"))) PPC_WEAK_FUNC(sub_82795D54);
PPC_FUNC_IMPL(__imp__sub_82795D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82795D58"))) PPC_WEAK_FUNC(sub_82795D58);
PPC_FUNC_IMPL(__imp__sub_82795D58) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// ble cr6,0x82795e28
	if (!ctx.cr6.gt) goto loc_82795E28;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82795D90:
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// bge cr6,0x82795dc0
	if (!ctx.cr6.lt) goto loc_82795DC0;
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// clrlwi r31,r9,27
	ctx.r31.u64 = ctx.r9.u32 & 0x1F;
	// slw r31,r4,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r31.u8 & 0x3F));
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 | ctx.r30.u64;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_82795DC0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82795DC4:
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// addi r31,r1,24
	ctx.r31.s64 = ctx.r1.s64 + 24;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 & ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82795e38
	if (!ctx.cr6.eq) goto loc_82795E38;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82795dc4
	if (ctx.cr6.lt) goto loc_82795DC4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82795DF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82795e14
	if (ctx.cr6.eq) goto loc_82795E14;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82795e40
	if (ctx.cr6.eq) goto loc_82795E40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
loc_82795E14:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82795d90
	if (ctx.cr6.lt) goto loc_82795D90;
loc_82795E28:
	// li r3,-1
	ctx.r3.s64 = -1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82795E38:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82795df0
	goto loc_82795DF0;
loc_82795E40:
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82795E50"))) PPC_WEAK_FUNC(sub_82795E50);
PPC_FUNC_IMPL(__imp__sub_82795E50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 304);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82795e9c
	if (!ctx.cr6.lt) goto loc_82795E9C;
	// lwz r11,300(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 300);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82795e9c
	if (!ctx.cr6.lt) goto loc_82795E9C;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82795E9C:
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82795EB8"))) PPC_WEAK_FUNC(sub_82795EB8);
PPC_FUNC_IMPL(__imp__sub_82795EB8) {
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
	// beq cr6,0x82795edc
	if (ctx.cr6.eq) goto loc_82795EDC;
	// bl 0x82120a70
	ctx.lr = 0x82795EDC;
	sub_82120A70(ctx, base);
loc_82795EDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82795F00"))) PPC_WEAK_FUNC(sub_82795F00);
PPC_FUNC_IMPL(__imp__sub_82795F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82795F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82795f60
	if (!ctx.cr6.gt) goto loc_82795F60;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82795F28:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82795f40
	if (ctx.cr6.eq) goto loc_82795F40;
	// bl 0x82120a70
	ctx.lr = 0x82795F40;
	sub_82120A70(ctx, base);
loc_82795F40:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82795f28
	if (ctx.cr6.lt) goto loc_82795F28;
loc_82795F60:
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82795f70
	if (ctx.cr6.eq) goto loc_82795F70;
	// bl 0x82120a70
	ctx.lr = 0x82795F70;
	sub_82120A70(ctx, base);
loc_82795F70:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82218a80
	ctx.lr = 0x82795F94;
	sub_82218A80(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82795fa4
	if (ctx.cr6.eq) goto loc_82795FA4;
	// bl 0x82120a70
	ctx.lr = 0x82795FA4;
	sub_82120A70(ctx, base);
loc_82795FA4:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82795fbc
	if (ctx.cr6.eq) goto loc_82795FBC;
	// bl 0x82120a70
	ctx.lr = 0x82795FBC;
	sub_82120A70(ctx, base);
loc_82795FBC:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82795fd4
	if (ctx.cr6.eq) goto loc_82795FD4;
	// bl 0x82120a70
	ctx.lr = 0x82795FD4;
	sub_82120A70(ctx, base);
loc_82795FD4:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82795fec
	if (ctx.cr6.eq) goto loc_82795FEC;
	// bl 0x82120a70
	ctx.lr = 0x82795FEC;
	sub_82120A70(ctx, base);
loc_82795FEC:
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82795FFC"))) PPC_WEAK_FUNC(sub_82795FFC);
PPC_FUNC_IMPL(__imp__sub_82795FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82796000"))) PPC_WEAK_FUNC(sub_82796000);
PPC_FUNC_IMPL(__imp__sub_82796000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-4060
	ctx.r10.s64 = ctx.r11.s64 + -4060;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82795f00
	sub_82795F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82796010"))) PPC_WEAK_FUNC(sub_82796010);
PPC_FUNC_IMPL(__imp__sub_82796010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82796018;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r11,12456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// beq cr6,0x82796080
	if (ctx.cr6.eq) goto loc_82796080;
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
loc_82796080:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x827960e0
	if (ctx.cr6.eq) goto loc_827960E0;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827960E0:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827960F8;
	sub_82120040(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82218a80
	ctx.lr = 0x82796114;
	sub_82218A80(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82796268
	if (!ctx.cr6.gt) goto loc_82796268;
	// lwz r7,12456(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12456);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8279612C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stb r4,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r4.u8);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// stb r3,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r3.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82796180
	if (ctx.cr6.eq) goto loc_82796180;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
loc_82796180:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r3.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r4,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r4.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x827961e0
	if (ctx.cr6.eq) goto loc_827961E0;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
loc_827961E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r4,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r4.u8);
	// stb r9,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// stb r3,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r3.u8);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x82796244
	if (ctx.cr6.eq) goto loc_82796244;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
loc_82796244:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8279612c
	if (ctx.cr6.lt) goto loc_8279612C;
loc_82796268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82796270"))) PPC_WEAK_FUNC(sub_82796270);
PPC_FUNC_IMPL(__imp__sub_82796270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82796278;
	__savegprlr_27(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82795f00
	ctx.lr = 0x8279628C;
	sub_82795F00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82796a98
	if (ctx.cr6.eq) goto loc_82796A98;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82796ab4
	if (ctx.cr6.eq) goto loc_82796AB4;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,12456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// beq cr6,0x827962f4
	if (ctx.cr6.eq) goto loc_827962F4;
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_827962F4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82796344
	if (!ctx.cr6.gt) goto loc_82796344;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-4228
	ctx.r4.s64 = ctx.r11.s64 + -4228;
	// bl 0x82219e28
	ctx.lr = 0x8279630C;
	sub_82219E28(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r10,-4172
	ctx.r5.s64 = ctx.r10.s64 + -4172;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82796324;
	sub_82BCAC98(ctx, base);
	// addi r5,r29,-4
	ctx.r5.s64 = ctx.r29.s64 + -4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82796ac8
	if (ctx.cr6.eq) goto loc_82796AC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x8279633C;
	sub_82219130(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82796344:
	// lbz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stw r7,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r7.u32);
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82796398
	if (ctx.cr6.eq) goto loc_82796398;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82796398:
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82120040
	ctx.lr = 0x827963A8;
	sub_82120040(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r3.u32);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82218a80
	ctx.lr = 0x827963BC;
	sub_82218A80(ctx, base);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827963f8
	if (!ctx.cr6.gt) goto loc_827963F8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_827963D0:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,732
	ctx.r4.s64 = ctx.r1.s64 + 732;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82796010
	ctx.lr = 0x827963E4;
	sub_82796010(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827963d0
	if (ctx.cr6.lt) goto loc_827963D0;
loc_827963F8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x82796ac8
	if (ctx.cr6.lt) goto loc_82796AC8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,732
	ctx.r4.s64 = ctx.r1.s64 + 732;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82795690
	ctx.lr = 0x82796410;
	sub_82795690(ctx, base);
	// lwz r10,732(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// lwz r11,12456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// beq cr6,0x82796468
	if (ctx.cr6.eq) goto loc_82796468;
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r10,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r10.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82796468:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// beq cr6,0x827965c8
	if (ctx.cr6.eq) goto loc_827965C8;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x82796488;
	sub_82120040(ctx, base);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r11,12456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827965c8
	if (!ctx.cr6.gt) goto loc_827965C8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_827964A4:
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// stb r7,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r7.u8);
	// stb r5,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r5.u8);
	// stb r4,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r4.u8);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// beq cr6,0x827964f0
	if (ctx.cr6.eq) goto loc_827964F0;
	// lbz r5,113(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r4,114(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// stb r4,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r4.u8);
loc_827964F0:
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r5,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r5.u8);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r4,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r4.u8);
	// stb r7,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r7.u8);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// beq cr6,0x82796548
	if (ctx.cr6.eq) goto loc_82796548;
	// lbz r5,113(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r4,114(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// stb r4,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r4.u8);
loc_82796548:
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r9,3(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r4,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r4.u8);
	// stb r9,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r9.u8);
	// stb r7,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r7.u8);
	// stb r3,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r3.u8);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// beq cr6,0x827965a4
	if (ctx.cr6.eq) goto loc_827965A4;
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r5,114(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r7,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r7.u8);
	// stb r10,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r10.u8);
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
loc_827965A4:
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r5,268(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x827964a4
	if (ctx.cr6.lt) goto loc_827964A4;
loc_827965C8:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r8,3(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r10,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r10.u8);
	// stb r7,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r7.u8);
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// stb r8,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r8.u8);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// beq cr6,0x82796618
	if (ctx.cr6.eq) goto loc_82796618;
	// lbz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r7,113(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82796618:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// beq cr6,0x82796714
	if (ctx.cr6.eq) goto loc_82796714;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x82796630;
	sub_82120040(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,12456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// ble cr6,0x82796714
	if (!ctx.cr6.gt) goto loc_82796714;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8279664C:
	// lbz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r4,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r4.u8);
	// stb r8,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r8.u8);
	// stb r7,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r7.u8);
	// stb r5,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r5.u8);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// beq cr6,0x82796698
	if (ctx.cr6.eq) goto loc_82796698;
	// lbz r5,113(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r4,114(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// stb r4,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r4.u8);
loc_82796698:
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r8.u8);
	// lbz r7,3(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r7.u8);
	// stb r4,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r4.u8);
	// stb r5,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r5.u8);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// beq cr6,0x827966f0
	if (ctx.cr6.eq) goto loc_827966F0;
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r5,114(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// stb r10,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r10.u8);
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
loc_827966F0:
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r5,276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8279664c
	if (ctx.cr6.lt) goto loc_8279664C;
loc_82796714:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r8,3(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r10,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r10.u8);
	// stb r7,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r7.u8);
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// stb r8,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r8.u8);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// beq cr6,0x82796764
	if (ctx.cr6.eq) goto loc_82796764;
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r10,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r10.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82796764:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r10.u32);
	// beq cr6,0x82796944
	if (ctx.cr6.eq) goto loc_82796944;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r10,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82120040
	ctx.lr = 0x8279677C;
	sub_82120040(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,12456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// ble cr6,0x82796944
	if (!ctx.cr6.gt) goto loc_82796944;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82796798:
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r5,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r5.u8);
	// stb r4,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r4.u8);
	// stb r8,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r8.u8);
	// stb r7,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r7.u8);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// beq cr6,0x827967e4
	if (ctx.cr6.eq) goto loc_827967E4;
	// lbz r5,117(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r4,118(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// stb r8,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r8.u8);
	// stb r5,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r5.u8);
	// stb r4,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r4.u8);
loc_827967E4:
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r8,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r8.u8);
	// stb r7,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r7.u8);
	// lhz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// sth r5,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r5.u16);
	// beq cr6,0x8279681c
	if (ctx.cr6.eq) goto loc_8279681C;
	// stb r8,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r8.u8);
	// stb r7,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r7.u8);
loc_8279681C:
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r7,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r7.u16);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// lhz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r4,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r4.u16);
	// beq cr6,0x82796858
	if (ctx.cr6.eq) goto loc_82796858;
	// stb r8,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r8.u8);
	// stb r7,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r7.u8);
loc_82796858:
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r7,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, ctx.r7.u16);
	// lbz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r3,2(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stb r4,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r4.u8);
	// stb r3,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r3.u8);
	// stb r8,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r8.u8);
	// stb r7,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r7.u8);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x827968bc
	if (ctx.cr6.eq) goto loc_827968BC;
	// lbz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r7,117(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r5,119(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r4,118(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r8,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r8.u8);
	// stb r7,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stb r5,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r5.u8);
	// stb r4,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r4.u8);
loc_827968BC:
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r3,3(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r7,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r7.u8);
	// stb r5,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r5.u8);
	// stb r4,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r4.u8);
	// stb r3,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r3.u8);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82796920
	if (ctx.cr6.eq) goto loc_82796920;
	// lbz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r8,117(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lbz r5,118(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// stb r10,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r8,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// stb r5,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r5.u8);
loc_82796920:
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r8,284(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82796798
	if (ctx.cr6.lt) goto loc_82796798;
loc_82796944:
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stb r8,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r8.u8);
	// stb r7,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r7.u8);
	// stb r10,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r10.u8);
	// stb r9,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r9.u8);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82796994
	if (ctx.cr6.eq) goto loc_82796994;
	// lbz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82796994:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// beq cr6,0x82796ac8
	if (ctx.cr6.eq) goto loc_82796AC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x827969AC;
	sub_82120040(ctx, base);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82796ac8
	if (!ctx.cr6.gt) goto loc_82796AC8;
	// lwz r7,12456(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12456);
	// li r10,0
	ctx.r10.s64 = 0;
loc_827969C8:
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r8,3(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r5,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r5.u8);
	// stb r4,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r4.u8);
	// stb r9,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r9.u8);
	// stb r8,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r8.u8);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// beq cr6,0x82796a14
	if (ctx.cr6.eq) goto loc_82796A14;
	// lbz r5,113(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r4,114(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// stb r4,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r4.u8);
loc_82796A14:
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r4.u8);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r5,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r5.u8);
	// stb r9,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r9.u8);
	// stb r8,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r8.u8);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// beq cr6,0x82796a6c
	if (ctx.cr6.eq) goto loc_82796A6C;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r5,114(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
loc_82796A6C:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x827969c8
	if (ctx.cr6.lt) goto loc_827969C8;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82796A98:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-4336
	ctx.r5.s64 = ctx.r11.s64 + -4336;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82796AAC;
	sub_82BCAC98(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82796AB4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-4284
	ctx.r5.s64 = ctx.r11.s64 + -4284;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82796AC8;
	sub_82BCAC98(ctx, base);
loc_82796AC8:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82796AD0"))) PPC_WEAK_FUNC(sub_82796AD0);
PPC_FUNC_IMPL(__imp__sub_82796AD0) {
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
	// lwz r3,13916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82796b50
	if (!ctx.cr6.eq) goto loc_82796B50;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x82120040
	ctx.lr = 0x82796AFC;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82796b48
	if (ctx.cr6.eq) goto loc_82796B48;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4060
	ctx.r9.s64 = ctx.r10.s64 + -4060;
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r11.u32);
	// b 0x82796b4c
	goto loc_82796B4C;
loc_82796B48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82796B4C:
	// stw r3,13916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13916, ctx.r3.u32);
loc_82796B50:
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

__attribute__((alias("__imp__sub_82796B64"))) PPC_WEAK_FUNC(sub_82796B64);
PPC_FUNC_IMPL(__imp__sub_82796B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82796B68"))) PPC_WEAK_FUNC(sub_82796B68);
PPC_FUNC_IMPL(__imp__sub_82796B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82796B70;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82796ad0
	ctx.lr = 0x82796B88;
	sub_82796AD0(ctx, base);
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82796c80
	if (!ctx.cr6.lt) goto loc_82796C80;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82796c80
	if (ctx.cr6.eq) goto loc_82796C80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82796BB0:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stwx r10,r7,r29
	PPC_STORE_U32(ctx.r7.u32 + ctx.r29.u32, ctx.r10.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82796bb0
	if (ctx.cr6.lt) goto loc_82796BB0;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82796c98
	if (ctx.cr6.eq) goto loc_82796C98;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82796BE0:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82796c14
	if (ctx.cr6.eq) goto loc_82796C14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82796be0
	if (ctx.cr6.lt) goto loc_82796BE0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82796C14:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// bl 0x82796ad0
	ctx.lr = 0x82796C38;
	sub_82796AD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82795c08
	ctx.lr = 0x82796C44;
	sub_82795C08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ld r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_82796C50:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82795d58
	ctx.lr = 0x82796C5C;
	sub_82795D58(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x82796c50
	if (ctx.cr6.lt) goto loc_82796C50;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82796C80:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-4128
	ctx.r5.s64 = ctx.r11.s64 + -4128;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82796C98;
	sub_82BCAC98(ctx, base);
loc_82796C98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82796CA0"))) PPC_WEAK_FUNC(sub_82796CA0);
PPC_FUNC_IMPL(__imp__sub_82796CA0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82796cd0
	if (!ctx.cr6.eq) goto loc_82796CD0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82796CD0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x82796CE4;
	sub_82BFD450(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82796d10
	if (ctx.cr6.eq) goto loc_82796D10;
	// bl 0x82796ad0
	ctx.lr = 0x82796CF8;
	sub_82796AD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82796270
	ctx.lr = 0x82796D08;
	sub_82796270(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82796d14
	goto loc_82796D14;
loc_82796D10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82796D14:
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

__attribute__((alias("__imp__sub_82796D2C"))) PPC_WEAK_FUNC(sub_82796D2C);
PPC_FUNC_IMPL(__imp__sub_82796D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82796D30"))) PPC_WEAK_FUNC(sub_82796D30);
PPC_FUNC_IMPL(__imp__sub_82796D30) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82796D3C"))) PPC_WEAK_FUNC(sub_82796D3C);
PPC_FUNC_IMPL(__imp__sub_82796D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82796D40"))) PPC_WEAK_FUNC(sub_82796D40);
PPC_FUNC_IMPL(__imp__sub_82796D40) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 & ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82796D54"))) PPC_WEAK_FUNC(sub_82796D54);
PPC_FUNC_IMPL(__imp__sub_82796D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82796D58"))) PPC_WEAK_FUNC(sub_82796D58);
PPC_FUNC_IMPL(__imp__sub_82796D58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82796D70"))) PPC_WEAK_FUNC(sub_82796D70);
PPC_FUNC_IMPL(__imp__sub_82796D70) {
	PPC_FUNC_PROLOGUE();
	// b 0x8213ab30
	sub_8213AB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82796D74"))) PPC_WEAK_FUNC(sub_82796D74);
PPC_FUNC_IMPL(__imp__sub_82796D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82796D78"))) PPC_WEAK_FUNC(sub_82796D78);
PPC_FUNC_IMPL(__imp__sub_82796D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82796da8
	if (ctx.cr6.eq) goto loc_82796DA8;
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// bge cr6,0x82796da8
	if (!ctx.cr6.lt) goto loc_82796DA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// sld r9,r3,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r3.u64 << (ctx.r10.u8 & 0x7F));
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82796DA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82796DB0"))) PPC_WEAK_FUNC(sub_82796DB0);
PPC_FUNC_IMPL(__imp__sub_82796DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82796e00
	if (ctx.cr6.eq) goto loc_82796E00;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82796e00
	if (!ctx.cr6.lt) goto loc_82796E00;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82796df0
	if (ctx.cr6.eq) goto loc_82796DF0;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,15,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// lhzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
loc_82796DF0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
loc_82796E00:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82796E08"))) PPC_WEAK_FUNC(sub_82796E08);
PPC_FUNC_IMPL(__imp__sub_82796E08) {
	PPC_FUNC_PROLOGUE();
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r5,r4,16
	ctx.r5.u64 = ctx.r4.u32 & 0xFFFF;
	// ori r4,r11,65535
	ctx.r4.u64 = ctx.r11.u64 | 65535;
loc_82796E28:
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82796e70
	if (ctx.cr6.eq) goto loc_82796E70;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82796e70
	if (!ctx.cr6.lt) goto loc_82796E70;
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82796e64
	if (ctx.cr6.eq) goto loc_82796E64;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,15,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// lhzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82796e74
	goto loc_82796E74;
loc_82796E64:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82796e74
	goto loc_82796E74;
loc_82796E70:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82796E74:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82796e94
	if (ctx.cr6.eq) goto loc_82796E94;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82796e28
	if (ctx.cr6.lt) goto loc_82796E28;
	// blr 
	return;
loc_82796E94:
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq cr6,0x82796ee0
	if (ctx.cr6.eq) goto loc_82796EE0;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82796ee0
	if (!ctx.cr6.lt) goto loc_82796EE0;
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82796ed4
	if (ctx.cr6.eq) goto loc_82796ED4;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,15,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// lhzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82796ee4
	goto loc_82796EE4;
loc_82796ED4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82796ee4
	goto loc_82796EE4;
loc_82796EE0:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82796EE4:
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x82796f14
	if (ctx.cr6.eq) goto loc_82796F14;
	// lhz r8,52(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 52);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82796f14
	if (!ctx.cr6.lt) goto loc_82796F14;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
loc_82796F14:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82796F24"))) PPC_WEAK_FUNC(sub_82796F24);
PPC_FUNC_IMPL(__imp__sub_82796F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82796F28"))) PPC_WEAK_FUNC(sub_82796F28);
PPC_FUNC_IMPL(__imp__sub_82796F28) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82797008
	if (ctx.cr6.eq) goto loc_82797008;
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_82796F68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82796f78
	if (ctx.cr6.eq) goto loc_82796F78;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82796f7c
	if (ctx.cr6.eq) goto loc_82796F7C;
loc_82796F78:
	// twi 31,r0,22
loc_82796F7C:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82796fc4
	if (ctx.cr6.eq) goto loc_82796FC4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82796f90
	if (!ctx.cr6.eq) goto loc_82796F90;
	// twi 31,r0,22
loc_82796F90:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82796fa0
	if (!ctx.cr6.eq) goto loc_82796FA0;
	// twi 31,r0,22
loc_82796FA0:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82796fc4
	if (ctx.cr6.eq) goto loc_82796FC4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82796fbc
	if (!ctx.cr6.eq) goto loc_82796FBC;
	// twi 31,r0,22
loc_82796FBC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82796f68
	goto loc_82796F68;
loc_82796FC4:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82796fd8
	if (ctx.cr6.eq) goto loc_82796FD8;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82796fdc
	if (ctx.cr6.eq) goto loc_82796FDC;
loc_82796FD8:
	// twi 31,r0,22
loc_82796FDC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82797008
	if (ctx.cr6.eq) goto loc_82797008;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82796ff0
	if (!ctx.cr6.eq) goto loc_82796FF0;
	// twi 31,r0,22
loc_82796FF0:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82797000
	if (!ctx.cr6.eq) goto loc_82797000;
	// twi 31,r0,22
loc_82797000:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
loc_82797008:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82797010"))) PPC_WEAK_FUNC(sub_82797010);
PPC_FUNC_IMPL(__imp__sub_82797010) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827970d8
	if (ctx.cr6.eq) goto loc_827970D8;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// ld r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// beq cr6,0x82797094
	if (ctx.cr6.eq) goto loc_82797094;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_8279704C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279705c
	if (ctx.cr6.eq) goto loc_8279705C;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82797060
	if (ctx.cr6.eq) goto loc_82797060;
loc_8279705C:
	// twi 31,r0,22
loc_82797060:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82797094
	if (ctx.cr6.eq) goto loc_82797094;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82797074
	if (!ctx.cr6.eq) goto loc_82797074;
	// twi 31,r0,22
loc_82797074:
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82797084
	if (!ctx.cr6.eq) goto loc_82797084;
	// twi 31,r0,22
loc_82797084:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8279704c
	if (!ctx.cr6.eq) goto loc_8279704C;
loc_82797094:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827970a8
	if (ctx.cr6.eq) goto loc_827970A8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x827970ac
	if (ctx.cr6.eq) goto loc_827970AC;
loc_827970A8:
	// twi 31,r0,22
loc_827970AC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827970d8
	if (ctx.cr6.eq) goto loc_827970D8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827970c0
	if (!ctx.cr6.eq) goto loc_827970C0;
	// twi 31,r0,22
loc_827970C0:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827970d0
	if (!ctx.cr6.eq) goto loc_827970D0;
	// twi 31,r0,22
loc_827970D0:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
loc_827970D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827970E0"))) PPC_WEAK_FUNC(sub_827970E0);
PPC_FUNC_IMPL(__imp__sub_827970E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827970E8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,27476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// ori r29,r8,65535
	ctx.r29.u64 = ctx.r8.u64 | 65535;
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// sth r29,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r29.u16);
	// stb r7,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r7.u8);
	// stb r6,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r6.u8);
	// bl 0x82218a80
	ctx.lr = 0x82797158;
	sub_82218A80(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// stfs f31,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// sth r5,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r5.u16);
	// sth r29,104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 104, ctx.r29.u16);
	// sth r29,106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 106, ctx.r29.u16);
	// sth r30,110(r31)
	PPC_STORE_U16(ctx.r31.u32 + 110, ctx.r30.u16);
	// sth r30,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r30.u16);
	// sth r30,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r30.u16);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// sth r30,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r30.u16);
	// sth r30,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r30.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82797198"))) PPC_WEAK_FUNC(sub_82797198);
PPC_FUNC_IMPL(__imp__sub_82797198) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// sth r11,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r11.u16);
	// sth r11,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827971C0"))) PPC_WEAK_FUNC(sub_827971C0);
PPC_FUNC_IMPL(__imp__sub_827971C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827971d0
	if (ctx.cr6.eq) goto loc_827971D0;
	// b 0x8213a9d0
	sub_8213A9D0(ctx, base);
	return;
loc_827971D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827971D8"))) PPC_WEAK_FUNC(sub_827971D8);
PPC_FUNC_IMPL(__imp__sub_827971D8) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82797210
	if (ctx.cr6.eq) goto loc_82797210;
	// bl 0x8213a9d0
	ctx.lr = 0x827971F4;
	sub_8213A9D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82797210
	if (ctx.cr6.eq) goto loc_82797210;
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82797210:
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
}

__attribute__((alias("__imp__sub_82797228"))) PPC_WEAK_FUNC(sub_82797228);
PPC_FUNC_IMPL(__imp__sub_82797228) {
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
	// bl 0x82796f28
	ctx.lr = 0x82797238;
	sub_82796F28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82797254
	if (ctx.cr6.eq) goto loc_82797254;
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82797254:
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

__attribute__((alias("__imp__sub_82797268"))) PPC_WEAK_FUNC(sub_82797268);
PPC_FUNC_IMPL(__imp__sub_82797268) {
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
	// bl 0x82796f28
	ctx.lr = 0x82797280;
	sub_82796F28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827972b0
	if (ctx.cr6.eq) goto loc_827972B0;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// bge cr6,0x827972b0
	if (!ctx.cr6.lt) goto loc_827972B0;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// sld r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r11.u8 & 0x7F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x827972b4
	if (!ctx.cr6.eq) goto loc_827972B4;
loc_827972B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827972B4:
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

__attribute__((alias("__imp__sub_827972C8"))) PPC_WEAK_FUNC(sub_827972C8);
PPC_FUNC_IMPL(__imp__sub_827972C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827973b0
	if (ctx.cr6.eq) goto loc_827973B0;
loc_827972D8:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bge cr6,0x82797308
	if (!ctx.cr6.lt) goto loc_82797308;
loc_827972EC:
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// clrlwi r7,r3,27
	ctx.r7.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// srw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// b 0x8279730c
	goto loc_8279730C;
loc_82797308:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8279730C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82797324
	if (ctx.cr6.eq) goto loc_82797324;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82797324:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// blt cr6,0x827972ec
	if (ctx.cr6.lt) goto loc_827972EC;
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bge cr6,0x82797360
	if (!ctx.cr6.lt) goto loc_82797360;
loc_82797344:
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// clrlwi r7,r3,27
	ctx.r7.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// srw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// b 0x82797364
	goto loc_82797364;
loc_82797360:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82797364:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279737c
	if (ctx.cr6.eq) goto loc_8279737C;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8279737C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// blt cr6,0x82797344
	if (ctx.cr6.lt) goto loc_82797344;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827973b0
	if (ctx.cr6.eq) goto loc_827973B0;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x827973b0
	if (!ctx.cr6.eq) goto loc_827973B0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827972d8
	if (!ctx.cr6.eq) goto loc_827972D8;
loc_827973B0:
	// li r3,44
	ctx.r3.s64 = 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827973B8"))) PPC_WEAK_FUNC(sub_827973B8);
PPC_FUNC_IMPL(__imp__sub_827973B8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82796f28
	ctx.lr = 0x827973D0;
	sub_82796F28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82797400
	if (ctx.cr6.eq) goto loc_82797400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8213a9d0
	ctx.lr = 0x827973E0;
	sub_8213A9D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82797400
	if (ctx.cr6.eq) goto loc_82797400;
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
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
loc_82797400:
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279741C"))) PPC_WEAK_FUNC(sub_8279741C);
PPC_FUNC_IMPL(__imp__sub_8279741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82797420"))) PPC_WEAK_FUNC(sub_82797420);
PPC_FUNC_IMPL(__imp__sub_82797420) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// sth r8,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r8.u16);
	// blt cr6,0x82797454
	if (ctx.cr6.lt) goto loc_82797454;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// sth r8,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r8.u16);
loc_82797454:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r6,12456(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12456);
loc_82797464:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r31,1(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stb r10,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r10.u8);
	// stb r9,-9(r1)
	PPC_STORE_U8(ctx.r1.u32 + -9, ctx.r9.u8);
	// stb r31,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r31.u8);
	// stb r11,-10(r1)
	PPC_STORE_U8(ctx.r1.u32 + -10, ctx.r11.u8);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// beq cr6,0x827974b8
	if (ctx.cr6.eq) goto loc_827974B8;
	// lbz r11,-15(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
loc_827974B8:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x82797464
	if (!ctx.cr0.eq) goto loc_82797464;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// li r9,2
	ctx.r9.s64 = 2;
loc_827974D4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stb r5,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r5.u8);
	// stb r3,-10(r1)
	PPC_STORE_U8(ctx.r1.u32 + -10, ctx.r3.u8);
	// stb r10,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r10.u8);
	// stb r11,-9(r1)
	PPC_STORE_U8(ctx.r1.u32 + -9, ctx.r11.u8);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// beq cr6,0x82797528
	if (ctx.cr6.eq) goto loc_82797528;
	// lbz r7,-15(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// stb r7,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r7.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
loc_82797528:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x827974d4
	if (!ctx.cr0.eq) goto loc_827974D4;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82797544"))) PPC_WEAK_FUNC(sub_82797544);
PPC_FUNC_IMPL(__imp__sub_82797544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82797548"))) PPC_WEAK_FUNC(sub_82797548);
PPC_FUNC_IMPL(__imp__sub_82797548) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82797010
	ctx.lr = 0x82797564;
	sub_82797010(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827975ac
	if (ctx.cr6.eq) goto loc_827975AC;
loc_82797570:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8213ab98
	ctx.lr = 0x8279757C;
	sub_8213AB98(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82797594
	if (ctx.cr6.eq) goto loc_82797594;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4060
	ctx.r3.s64 = ctx.r11.s64 + 4060;
	// bl 0x82139dd8
	ctx.lr = 0x82797594;
	sub_82139DD8(ctx, base);
loc_82797594:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82797010
	ctx.lr = 0x827975A0;
	sub_82797010(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82797570
	if (!ctx.cr6.eq) goto loc_82797570;
loc_827975AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_827975C8"))) PPC_WEAK_FUNC(sub_827975C8);
PPC_FUNC_IMPL(__imp__sub_827975C8) {
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
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82797608
	if (ctx.cr6.eq) goto loc_82797608;
loc_827975EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,4152
	ctx.r3.s64 = ctx.r11.s64 + 4152;
	// bl 0x82139dd8
	ctx.lr = 0x82797600;
	sub_82139DD8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827975ec
	if (!ctx.cr6.eq) goto loc_827975EC;
loc_82797608:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82797628"))) PPC_WEAK_FUNC(sub_82797628);
PPC_FUNC_IMPL(__imp__sub_82797628) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827976bc
	if (ctx.cr6.eq) goto loc_827976BC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827976ac
	if (ctx.cr6.eq) goto loc_827976AC;
loc_8279765C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82797678
	if (!ctx.cr6.eq) goto loc_82797678;
	// twi 31,r0,22
loc_82797678:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8213ab98
	ctx.lr = 0x82797688;
	sub_8213AB98(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8279769c
	if (ctx.cr6.eq) goto loc_8279769C;
	// addi r3,r30,4428
	ctx.r3.s64 = ctx.r30.s64 + 4428;
	// bl 0x82139dd8
	ctx.lr = 0x8279769C;
	sub_82139DD8(ctx, base);
loc_8279769C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8279765c
	if (!ctx.cr6.eq) goto loc_8279765C;
loc_827976AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82120568
	ctx.lr = 0x827976B4;
	sub_82120568(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82120a70
	ctx.lr = 0x827976BC;
	sub_82120A70(ctx, base);
loc_827976BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_827976E0"))) PPC_WEAK_FUNC(sub_827976E0);
PPC_FUNC_IMPL(__imp__sub_827976E0) {
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
	// bl 0x82751550
	ctx.lr = 0x827976FC;
	sub_82751550(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// beq cr6,0x82797730
	if (ctx.cr6.eq) goto loc_82797730;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82799d00
	ctx.lr = 0x82797730;
	sub_82799D00(ctx, base);
loc_82797730:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8279774C"))) PPC_WEAK_FUNC(sub_8279774C);
PPC_FUNC_IMPL(__imp__sub_8279774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82797750"))) PPC_WEAK_FUNC(sub_82797750);
PPC_FUNC_IMPL(__imp__sub_82797750) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// b 0x827976e0
	sub_827976E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82797768"))) PPC_WEAK_FUNC(sub_82797768);
PPC_FUNC_IMPL(__imp__sub_82797768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82797770;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82797804
	if (ctx.cr6.eq) goto loc_82797804;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827977f4
	if (ctx.cr6.eq) goto loc_827977F4;
loc_82797790:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827977ac
	if (!ctx.cr6.eq) goto loc_827977AC;
	// twi 31,r0,22
loc_827977AC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8213ab98
	ctx.lr = 0x827977BC;
	sub_8213AB98(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827977e4
	if (ctx.cr6.eq) goto loc_827977E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82797628
	ctx.lr = 0x827977D8;
	sub_82797628(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,4336
	ctx.r3.s64 = ctx.r29.s64 + 4336;
	// bl 0x82139dd8
	ctx.lr = 0x827977E4;
	sub_82139DD8(ctx, base);
loc_827977E4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82797790
	if (!ctx.cr6.eq) goto loc_82797790;
loc_827977F4:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120568
	ctx.lr = 0x827977FC;
	sub_82120568(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82120a70
	ctx.lr = 0x82797804;
	sub_82120A70(ctx, base);
loc_82797804:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82797818"))) PPC_WEAK_FUNC(sub_82797818);
PPC_FUNC_IMPL(__imp__sub_82797818) {
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
	// bl 0x82797548
	ctx.lr = 0x82797834;
	sub_82797548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827975c8
	ctx.lr = 0x8279783C;
	sub_827975C8(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82797854
	if (ctx.cr6.eq) goto loc_82797854;
	// bl 0x82120568
	ctx.lr = 0x8279784C;
	sub_82120568(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82120a70
	ctx.lr = 0x82797854;
	sub_82120A70(ctx, base);
loc_82797854:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// sth r30,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r30.u16);
	// bl 0x82797768
	ctx.lr = 0x82797868;
	sub_82797768(ctx, base);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82797880
	if (ctx.cr6.eq) goto loc_82797880;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,4244
	ctx.r3.s64 = ctx.r11.s64 + 4244;
	// bl 0x82139dd8
	ctx.lr = 0x82797880;
	sub_82139DD8(ctx, base);
loc_82797880:
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8279789C"))) PPC_WEAK_FUNC(sub_8279789C);
PPC_FUNC_IMPL(__imp__sub_8279789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827978A0"))) PPC_WEAK_FUNC(sub_827978A0);
PPC_FUNC_IMPL(__imp__sub_827978A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x827978A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r10,12456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12456);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// beq cr6,0x82797918
	if (ctx.cr6.eq) goto loc_82797918;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
loc_82797918:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r4,5(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r5,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r5.u8);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r8,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r8.u8);
	// stb r3,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r3.u8);
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// stb r4,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r4.u8);
	// stb r30,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r30.u8);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x827979b4
	if (ctx.cr6.eq) goto loc_827979B4;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r6,115(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r5,118(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lbz r4,117(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r9,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r9.u8);
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
	// stb r4,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r4.u8);
	// stb r3,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r3.u8);
	// stb r11,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r7,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r7.u8);
	// stb r6,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r6.u8);
loc_827979B4:
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r11,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// beq cr6,0x82797a14
	if (ctx.cr6.eq) goto loc_82797A14;
	// lbz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82797A14:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82797ae0
	if (ctx.cr6.eq) goto loc_82797AE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82120040
	ctx.lr = 0x82797A28;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82797a38
	if (ctx.cr6.eq) goto loc_82797A38;
	// bl 0x8213aad0
	ctx.lr = 0x82797A34;
	sub_8213AAD0(ctx, base);
	// b 0x82797a3c
	goto loc_82797A3C;
loc_82797A38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82797A3C:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82797a4c
	if (!ctx.cr6.eq) goto loc_82797A4C;
	// twi 31,r0,22
loc_82797A4C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82797ae0
	if (!ctx.cr6.gt) goto loc_82797AE0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r26,r28,4428
	ctx.r26.s64 = ctx.r28.s64 + 4428;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r28,r11,-5228
	ctx.r28.s64 = ctx.r11.s64 + -5228;
loc_82797A68:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8213a0a8
	ctx.lr = 0x82797A70;
	sub_8213A0A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82797a8c
	if (!ctx.cr6.eq) goto loc_82797A8C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bcac98
	ctx.lr = 0x82797A8C;
	sub_82BCAC98(ctx, base);
loc_82797A8C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82795808
	ctx.lr = 0x82797AA0;
	sub_82795808(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// bl 0x821439b0
	ctx.lr = 0x82797AC0;
	sub_821439B0(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82797ad8
	if (!ctx.cr6.eq) goto loc_82797AD8;
	// twi 31,r0,22
loc_82797AD8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82797a68
	if (!ctx.cr0.eq) goto loc_82797A68;
loc_82797AE0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82797AE8"))) PPC_WEAK_FUNC(sub_82797AE8);
PPC_FUNC_IMPL(__imp__sub_82797AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82797AF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r10,12456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12456);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82797b6c
	if (ctx.cr6.lt) goto loc_82797B6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82797b68
	if (ctx.cr6.eq) goto loc_82797B68;
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
loc_82797B68:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82797B6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// beq cr6,0x82797ba0
	if (ctx.cr6.eq) goto loc_82797BA0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82797BA0:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// beq cr6,0x82797bdc
	if (ctx.cr6.eq) goto loc_82797BDC;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82797BDC:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// beq cr6,0x82797c18
	if (ctx.cr6.eq) goto loc_82797C18;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_82797C18:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,12476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12476);
	// sth r8,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r8.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82797c44
	if (ctx.cr6.eq) goto loc_82797C44;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82797c44
	if (!ctx.cr6.eq) goto loc_82797C44;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82797C44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r8.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x82797cb4
	if (ctx.cr6.eq) goto loc_82797CB4;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
loc_82797CB4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// beq cr6,0x82797d10
	if (ctx.cr6.eq) goto loc_82797D10;
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
loc_82797D10:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82797d38
	if (ctx.cr6.eq) goto loc_82797D38;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x827997e0
	ctx.lr = 0x82797D24;
	sub_827997E0(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x827978a0
	ctx.lr = 0x82797D38;
	sub_827978A0(ctx, base);
loc_82797D38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82797D40"))) PPC_WEAK_FUNC(sub_82797D40);
PPC_FUNC_IMPL(__imp__sub_82797D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82797D48;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// lwz r30,12456(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12456);
	// blt cr6,0x82797e70
	if (ctx.cr6.lt) goto loc_82797E70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// beq cr6,0x82797dbc
	if (ctx.cr6.eq) goto loc_82797DBC;
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r10,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r10.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
loc_82797DBC:
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// beq cr6,0x82797e10
	if (ctx.cr6.eq) goto loc_82797E10;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r6,114(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
loc_82797E10:
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r6,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r6.u8);
	// stb r8,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r8.u8);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stb r5,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r5.u8);
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// beq cr6,0x82797e68
	if (ctx.cr6.eq) goto loc_82797E68;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r10,114(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
loc_82797E68:
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82797e7c
	goto loc_82797E7C;
loc_82797E70:
	// li r7,64
	ctx.r7.s64 = 64;
	// li r28,8
	ctx.r28.s64 = 8;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82797E7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r8.u8);
	// stb r6,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r6.u8);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// stb r11,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r11.u8);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// beq cr6,0x82797ed0
	if (ctx.cr6.eq) goto loc_82797ED0;
	// lbz r9,113(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r9,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r9.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
loc_82797ED0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,12476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12476);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82797f00
	if (ctx.cr6.eq) goto loc_82797F00;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r11,12496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82797f04
	if (ctx.cr6.eq) goto loc_82797F04;
loc_82797F00:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82797F04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r3,r26,12
	ctx.xer.ca = ctx.r26.u32 > 4294967283;
	ctx.r3.s64 = ctx.r26.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// beq 0x82797f20
	if (ctx.cr0.eq) goto loc_82797F20;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82219130
	ctx.lr = 0x82797F20;
	sub_82219130(ctx, base);
loc_82797F20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// beq cr6,0x82797f5c
	if (ctx.cr6.eq) goto loc_82797F5C;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
loc_82797F5C:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// sth r11,20(r26)
	PPC_STORE_U16(ctx.r26.u32 + 20, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// beq cr6,0x82797f98
	if (ctx.cr6.eq) goto loc_82797F98;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
loc_82797F98:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,22(r26)
	PPC_STORE_U8(ctx.r26.u32 + 22, ctx.r11.u8);
	// bl 0x821204c0
	ctx.lr = 0x82797FAC;
	sub_821204C0(ctx, base);
	// stfs f1,24(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 24, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82797FBC;
	sub_821204C0(ctx, base);
	// stfs f1,28(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 28, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821204c0
	ctx.lr = 0x82797FCC;
	sub_821204C0(ctx, base);
	// stfs f1,32(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 32, temp.u32);
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bge cr6,0x82797fe4
	if (!ctx.cr6.lt) goto loc_82797FE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82797FE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r7,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r7.u8);
	// stb r9,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r9.u8);
	// stb r6,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r6.u8);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// beq cr6,0x82798038
	if (ctx.cr6.eq) goto loc_82798038;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
loc_82798038:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stb r11,23(r26)
	PPC_STORE_U8(ctx.r26.u32 + 23, ctx.r11.u8);
	// ble cr6,0x82798064
	if (!ctx.cr6.gt) goto loc_82798064;
	// addi r3,r26,36
	ctx.r3.s64 = ctx.r26.s64 + 36;
loc_8279804C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82795548
	ctx.lr = 0x82798058;
	sub_82795548(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bne 0x8279804c
	if (!ctx.cr0.eq) goto loc_8279804C;
loc_82798064:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r9,84(r26)
	PPC_STORE_U8(ctx.r26.u32 + 84, ctx.r9.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// lhz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r7,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r7.u16);
	// beq cr6,0x827980ac
	if (ctx.cr6.eq) goto loc_827980AC;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
loc_827980AC:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// sth r11,104(r26)
	PPC_STORE_U16(ctx.r26.u32 + 104, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// beq cr6,0x827980e8
	if (ctx.cr6.eq) goto loc_827980E8;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
loc_827980E8:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// sth r11,106(r26)
	PPC_STORE_U16(ctx.r26.u32 + 106, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// beq cr6,0x82798124
	if (ctx.cr6.eq) goto loc_82798124;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
loc_82798124:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// sth r11,108(r26)
	PPC_STORE_U16(ctx.r26.u32 + 108, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// beq cr6,0x82798160
	if (ctx.cr6.eq) goto loc_82798160;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
loc_82798160:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// sth r11,110(r26)
	PPC_STORE_U16(ctx.r26.u32 + 110, ctx.r11.u16);
	// bgt cr6,0x8279817c
	if (ctx.cr6.gt) goto loc_8279817C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8279817C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r9,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r9.u8);
	// stb r8,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r8.u8);
	// stb r7,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r7.u8);
	// stb r6,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r6.u8);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x827981d8
	if (ctx.cr6.eq) goto loc_827981D8;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r9,115(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// stb r10,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r10.u8);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
loc_827981D8:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// stfs f0,112(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 112, temp.u32);
	// bgt cr6,0x827981f8
	if (ctx.cr6.gt) goto loc_827981F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x827982d4
	goto loc_827982D4;
loc_827981F8:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// blt cr6,0x827982d4
	if (ctx.cr6.lt) goto loc_827982D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r7,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r7.u8);
	// stb r9,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r9.u8);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// stb r6,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r6.u8);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// beq cr6,0x82798254
	if (ctx.cr6.eq) goto loc_82798254;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
loc_82798254:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,88(r26)
	PPC_STORE_U32(ctx.r26.u32 + 88, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// beq cr6,0x82798290
	if (ctx.cr6.eq) goto loc_82798290;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
loc_82798290:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// sth r11,92(r26)
	PPC_STORE_U16(ctx.r26.u32 + 92, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// beq cr6,0x827982cc
	if (ctx.cr6.eq) goto loc_827982CC;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
loc_827982CC:
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r11,94(r26)
	PPC_STORE_U16(ctx.r26.u32 + 94, ctx.r11.u16);
loc_827982D4:
	// cmpwi cr6,r24,6
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 6, ctx.xer);
	// bge cr6,0x827982e8
	if (!ctx.cr6.lt) goto loc_827982E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827982E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r7,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r7.u8);
	// stb r6,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r6.u8);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// stb r9,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r9.u8);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82798344
	if (ctx.cr6.eq) goto loc_82798344;
	// lbz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82798344:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82798398
	if (!ctx.cr6.gt) goto loc_82798398;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82798350:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x827998c8
	ctx.lr = 0x82798358;
	sub_827998C8(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8279836c
	if (!ctx.cr6.eq) goto loc_8279836C;
	// stw r30,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r30.u32);
loc_8279836C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82797420
	ctx.lr = 0x8279837C;
	sub_82797420(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82798388
	if (ctx.cr6.eq) goto loc_82798388;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
loc_82798388:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bne 0x82798350
	if (!ctx.cr0.eq) goto loc_82798350;
	// lwz r30,12456(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12456);
loc_82798398:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r8.u8);
	// stb r7,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r7.u8);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// stb r11,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r11.u8);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// beq cr6,0x827983ec
	if (ctx.cr6.eq) goto loc_827983EC;
	// lbz r9,113(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r9,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r9.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
loc_827983EC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r8.u8);
	// stb r7,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r7.u8);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// stb r11,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r11.u8);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// beq cr6,0x8279844c
	if (ctx.cr6.eq) goto loc_8279844C;
	// lbz r9,113(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r9,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r9.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8279844C:
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82798554
	if (ctx.cr6.eq) goto loc_82798554;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82120040
	ctx.lr = 0x82798464;
	sub_82120040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827984a8
	if (ctx.cr6.eq) goto loc_827984A8;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// bl 0x82120ae0
	ctx.lr = 0x82798480;
	sub_82120AE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279848c
	if (ctx.cr6.eq) goto loc_8279848C;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_8279848C:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82798498
	if (ctx.cr0.eq) goto loc_82798498;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82798498:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// b 0x827984ac
	goto loc_827984AC;
loc_827984A8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_827984AC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r11.u32);
	// ble cr6,0x82798550
	if (!ctx.cr6.gt) goto loc_82798550;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,-5304
	ctx.r28.s64 = ctx.r11.s64 + -5304;
loc_827984C0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r11,4336
	ctx.r3.s64 = ctx.r11.s64 + 4336;
	// bl 0x8213a0a8
	ctx.lr = 0x827984CC;
	sub_8213A0A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827984e8
	if (ctx.cr6.eq) goto loc_827984E8;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// std r25,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r25.u64);
	// stw r27,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r27.u32);
	// b 0x827984f8
	goto loc_827984F8;
loc_827984E8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bcac98
	ctx.lr = 0x827984F8;
	sub_82BCAC98(ctx, base);
loc_827984F8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x827978a0
	ctx.lr = 0x82798510;
	sub_827978A0(ctx, base);
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// bl 0x821439b0
	ctx.lr = 0x82798530;
	sub_821439B0(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82798548
	if (!ctx.cr6.eq) goto loc_82798548;
	// twi 31,r0,22
loc_82798548:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x827984c0
	if (!ctx.cr0.eq) goto loc_827984C0;
loc_82798550:
	// lwz r30,12456(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12456);
loc_82798554:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827985b0
	if (ctx.cr6.eq) goto loc_827985B0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r11,4244
	ctx.r3.s64 = ctx.r11.s64 + 4244;
	// bl 0x8213a0a8
	ctx.lr = 0x82798578;
	sub_8213A0A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82798598
	if (!ctx.cr6.eq) goto loc_82798598;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-5376
	ctx.r5.s64 = ctx.r11.s64 + -5376;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bcac98
	ctx.lr = 0x82798598;
	sub_82BCAC98(ctx, base);
loc_82798598:
	// stw r10,124(r26)
	PPC_STORE_U32(ctx.r26.u32 + 124, ctx.r10.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82795768
	ctx.lr = 0x827985AC;
	sub_82795768(ctx, base);
	// lwz r30,12456(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12456);
loc_827985B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r8,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r8.u8);
	// stb r7,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r7.u8);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// stb r11,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r11.u8);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x82798614
	if (ctx.cr6.eq) goto loc_82798614;
	// lbz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// sth r7,128(r26)
	PPC_STORE_U16(ctx.r26.u32 + 128, ctx.r7.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
loc_82798614:
	// sth r9,128(r26)
	PPC_STORE_U16(ctx.r26.u32 + 128, ctx.r9.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82798620"))) PPC_WEAK_FUNC(sub_82798620);
PPC_FUNC_IMPL(__imp__sub_82798620) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,5396(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5396);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798628"))) PPC_WEAK_FUNC(sub_82798628);
PPC_FUNC_IMPL(__imp__sub_82798628) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 26, ctx.xer);
	// bge cr6,0x82798640
	if (!ctx.cr6.lt) goto loc_82798640;
	// addi r11,r4,2666
	ctx.r11.s64 = ctx.r4.s64 + 2666;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82798640:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798648"))) PPC_WEAK_FUNC(sub_82798648);
PPC_FUNC_IMPL(__imp__sub_82798648) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798670
	if (!ctx.cr6.lt) goto loc_82798670;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82798670:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798678"))) PPC_WEAK_FUNC(sub_82798678);
PPC_FUNC_IMPL(__imp__sub_82798678) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798698
	if (!ctx.cr6.lt) goto loc_82798698;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82798698:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827986A0"))) PPC_WEAK_FUNC(sub_827986A0);
PPC_FUNC_IMPL(__imp__sub_827986A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4520(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4520);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827986A8"))) PPC_WEAK_FUNC(sub_827986A8);
PPC_FUNC_IMPL(__imp__sub_827986A8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// bge cr6,0x827986c4
	if (!ctx.cr6.lt) goto loc_827986C4;
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_827986C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827986CC"))) PPC_WEAK_FUNC(sub_827986CC);
PPC_FUNC_IMPL(__imp__sub_827986CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827986D0"))) PPC_WEAK_FUNC(sub_827986D0);
PPC_FUNC_IMPL(__imp__sub_827986D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827986D4"))) PPC_WEAK_FUNC(sub_827986D4);
PPC_FUNC_IMPL(__imp__sub_827986D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827986D8"))) PPC_WEAK_FUNC(sub_827986D8);
PPC_FUNC_IMPL(__imp__sub_827986D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_827986E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827986f4
	if (ctx.cr6.eq) goto loc_827986F4;
	// twi 31,r0,22
loc_827986F4:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82798734
	if (ctx.cr6.eq) goto loc_82798734;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8279870c
	if (!ctx.cr6.eq) goto loc_8279870C;
	// twi 31,r0,22
loc_8279870C:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82798724
	if (ctx.cr6.eq) goto loc_82798724;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82798724:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827986e4
	if (!ctx.cr6.eq) goto loc_827986E4;
	// twi 31,r0,22
	// b 0x827986e4
	goto loc_827986E4;
loc_82798734:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279873C"))) PPC_WEAK_FUNC(sub_8279873C);
PPC_FUNC_IMPL(__imp__sub_8279873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798740"))) PPC_WEAK_FUNC(sub_82798740);
PPC_FUNC_IMPL(__imp__sub_82798740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82798748;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8279875C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82798770
	if (ctx.cr6.eq) goto loc_82798770;
	// twi 31,r0,22
loc_82798770:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827987cc
	if (ctx.cr6.eq) goto loc_827987CC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82798788
	if (!ctx.cr6.eq) goto loc_82798788;
	// twi 31,r0,22
loc_82798788:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827987a8
	if (ctx.cr6.eq) goto loc_827987A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8221b9e0
	ctx.lr = 0x827987A0;
	sub_8221B9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827987c0
	if (ctx.cr6.eq) goto loc_827987C0;
loc_827987A8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827987b8
	if (!ctx.cr6.eq) goto loc_827987B8;
	// twi 31,r0,22
loc_827987B8:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8279875c
	goto loc_8279875C;
loc_827987C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827987CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827987D8"))) PPC_WEAK_FUNC(sub_827987D8);
PPC_FUNC_IMPL(__imp__sub_827987D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827987E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x82798858
	if (!ctx.cr6.lt) goto loc_82798858;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82795450
	ctx.lr = 0x82798804;
	sub_82795450(ctx, base);
	// mulli r11,r31,260
	ctx.r11.s64 = ctx.r31.s64 * 260;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,5404(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5404);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8279886c
	if (!ctx.cr6.gt) goto loc_8279886C;
	// addi r10,r9,5408
	ctx.r10.s64 = ctx.r9.s64 + 5408;
loc_82798820:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8279884c
	if (ctx.cr6.eq) goto loc_8279884C;
	// lwz r8,5404(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5404);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82798820
	if (ctx.cr6.lt) goto loc_82798820;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8279884C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82798858:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-5152
	ctx.r5.s64 = ctx.r11.s64 + -5152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bcac98
	ctx.lr = 0x8279886C;
	sub_82BCAC98(ctx, base);
loc_8279886C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82798878"))) PPC_WEAK_FUNC(sub_82798878);
PPC_FUNC_IMPL(__imp__sub_82798878) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mulli r10,r4,260
	ctx.r10.s64 = ctx.r4.s64 * 260;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r10,4552
	ctx.r3.s64 = ctx.r10.s64 + 4552;
	// b 0x827954c8
	sub_827954C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827988A4"))) PPC_WEAK_FUNC(sub_827988A4);
PPC_FUNC_IMPL(__imp__sub_827988A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827988A8"))) PPC_WEAK_FUNC(sub_827988A8);
PPC_FUNC_IMPL(__imp__sub_827988A8) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827988fc
	if (!ctx.cr6.lt) goto loc_827988FC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827988fc
	if (ctx.cr6.eq) goto loc_827988FC;
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// bge cr6,0x827988fc
	if (!ctx.cr6.lt) goto loc_827988FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// sld r9,r3,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r3.u64 << (ctx.r10.u8 & 0x7F));
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_827988FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798904"))) PPC_WEAK_FUNC(sub_82798904);
PPC_FUNC_IMPL(__imp__sub_82798904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798908"))) PPC_WEAK_FUNC(sub_82798908);
PPC_FUNC_IMPL(__imp__sub_82798908) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279893c
	if (!ctx.cr6.lt) goto loc_8279893C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279893c
	if (ctx.cr6.eq) goto loc_8279893C;
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// blr 
	return;
loc_8279893C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798944"))) PPC_WEAK_FUNC(sub_82798944);
PPC_FUNC_IMPL(__imp__sub_82798944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798948"))) PPC_WEAK_FUNC(sub_82798948);
PPC_FUNC_IMPL(__imp__sub_82798948) {
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
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82798978
	if (ctx.cr6.lt) goto loc_82798978;
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
loc_82798978:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827989b0
	if (ctx.cr0.eq) goto loc_827989B0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82796db0
	ctx.lr = 0x82798998;
	sub_82796DB0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827989B0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827989CC"))) PPC_WEAK_FUNC(sub_827989CC);
PPC_FUNC_IMPL(__imp__sub_827989CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827989D0"))) PPC_WEAK_FUNC(sub_827989D0);
PPC_FUNC_IMPL(__imp__sub_827989D0) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x827987d8
	sub_827987D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827989D8"))) PPC_WEAK_FUNC(sub_827989D8);
PPC_FUNC_IMPL(__imp__sub_827989D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,5072
	ctx.r3.s64 = ctx.r11.s64 + 5072;
	// b 0x827954c8
	sub_827954C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827989F4"))) PPC_WEAK_FUNC(sub_827989F4);
PPC_FUNC_IMPL(__imp__sub_827989F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827989F8"))) PPC_WEAK_FUNC(sub_827989F8);
PPC_FUNC_IMPL(__imp__sub_827989F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,4812
	ctx.r3.s64 = ctx.r11.s64 + 4812;
	// b 0x827954c8
	sub_827954C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82798A14"))) PPC_WEAK_FUNC(sub_82798A14);
PPC_FUNC_IMPL(__imp__sub_82798A14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798A18"))) PPC_WEAK_FUNC(sub_82798A18);
PPC_FUNC_IMPL(__imp__sub_82798A18) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82798a40
	if (ctx.cr6.eq) goto loc_82798A40;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,4552
	ctx.r3.s64 = ctx.r3.s64 + 4552;
	// bl 0x827954c8
	ctx.lr = 0x82798A3C;
	sub_827954C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82798A40:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82798a68
	if (!ctx.cr6.lt) goto loc_82798A68;
	// clrldi r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// sld r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82798A68:
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

__attribute__((alias("__imp__sub_82798A7C"))) PPC_WEAK_FUNC(sub_82798A7C);
PPC_FUNC_IMPL(__imp__sub_82798A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798A80"))) PPC_WEAK_FUNC(sub_82798A80);
PPC_FUNC_IMPL(__imp__sub_82798A80) {
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
	// lhz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82798ae4
	if (!ctx.cr6.lt) goto loc_82798AE4;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r10,r11,132
	ctx.r10.s64 = ctx.r11.s64 * 132;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82798ac4
	if (ctx.cr6.eq) goto loc_82798AC4;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82798AC4:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82798ae4
	if (!ctx.cr6.lt) goto loc_82798AE4;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82798ae4
	if (ctx.cr6.eq) goto loc_82798AE4;
	// bl 0x82798a80
	ctx.lr = 0x82798AE4;
	sub_82798A80(ctx, base);
loc_82798AE4:
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

__attribute__((alias("__imp__sub_82798AF8"))) PPC_WEAK_FUNC(sub_82798AF8);
PPC_FUNC_IMPL(__imp__sub_82798AF8) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798b24
	if (!ctx.cr6.lt) goto loc_82798B24;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82798b24
	if (ctx.cr6.eq) goto loc_82798B24;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
loc_82798B24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798B2C"))) PPC_WEAK_FUNC(sub_82798B2C);
PPC_FUNC_IMPL(__imp__sub_82798B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798B30"))) PPC_WEAK_FUNC(sub_82798B30);
PPC_FUNC_IMPL(__imp__sub_82798B30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82798ba0
	if (!ctx.cr6.lt) goto loc_82798BA0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x827970e0
	ctx.lr = 0x82798B64;
	sub_827970E0(ctx, base);
	// lhz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mulli r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 * 132;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// mulli r10,r11,132
	ctx.r10.s64 = ctx.r11.s64 * 132;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r8,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r8.u16);
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
loc_82798BA0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-5512
	ctx.r5.s64 = ctx.r11.s64 + -5512;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82798BB4;
	sub_82BCAC98(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
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

__attribute__((alias("__imp__sub_82798BCC"))) PPC_WEAK_FUNC(sub_82798BCC);
PPC_FUNC_IMPL(__imp__sub_82798BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798BD0"))) PPC_WEAK_FUNC(sub_82798BD0);
PPC_FUNC_IMPL(__imp__sub_82798BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82798c68
	if (!ctx.cr6.lt) goto loc_82798C68;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 * 132;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82798c50
	if (ctx.cr6.eq) goto loc_82798C50;
	// lhz r11,104(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 104);
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798c40
	if (!ctx.cr6.lt) goto loc_82798C40;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82798c40
	if (ctx.cr6.eq) goto loc_82798C40;
	// bl 0x82796e08
	ctx.lr = 0x82798C30;
	sub_82796E08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82798C40:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r8,12
	ctx.r6.s64 = ctx.r8.s64 + 12;
	// addi r5,r11,-5640
	ctx.r5.s64 = ctx.r11.s64 + -5640;
	// b 0x82798c78
	goto loc_82798C78;
loc_82798C50:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82798c68
	if (!ctx.cr6.lt) goto loc_82798C68;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82798c6c
	goto loc_82798C6C;
loc_82798C68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82798C6C:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// addi r5,r10,-5576
	ctx.r5.s64 = ctx.r10.s64 + -5576;
loc_82798C78:
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82798C84;
	sub_82BCAC98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798C94"))) PPC_WEAK_FUNC(sub_82798C94);
PPC_FUNC_IMPL(__imp__sub_82798C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798C98"))) PPC_WEAK_FUNC(sub_82798C98);
PPC_FUNC_IMPL(__imp__sub_82798C98) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798cc4
	if (!ctx.cr6.lt) goto loc_82798CC4;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82798cc4
	if (ctx.cr6.eq) goto loc_82798CC4;
	// lhz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// blr 
	return;
loc_82798CC4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798CCC"))) PPC_WEAK_FUNC(sub_82798CCC);
PPC_FUNC_IMPL(__imp__sub_82798CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798CD0"))) PPC_WEAK_FUNC(sub_82798CD0);
PPC_FUNC_IMPL(__imp__sub_82798CD0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// stw r8,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r8.u32);
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798D2C"))) PPC_WEAK_FUNC(sub_82798D2C);
PPC_FUNC_IMPL(__imp__sub_82798D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798D30"))) PPC_WEAK_FUNC(sub_82798D30);
PPC_FUNC_IMPL(__imp__sub_82798D30) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82798D4C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82798d5c
	if (ctx.cr6.eq) goto loc_82798D5C;
	// twi 31,r0,22
loc_82798D5C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82798dac
	if (ctx.cr6.eq) goto loc_82798DAC;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82798d74
	if (!ctx.cr6.eq) goto loc_82798D74;
	// twi 31,r0,22
loc_82798D74:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82798d90
	if (ctx.cr6.eq) goto loc_82798D90;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82798d4c
	if (!ctx.cr6.eq) goto loc_82798D4C;
	// twi 31,r0,22
	// b 0x82798d4c
	goto loc_82798D4C;
loc_82798D90:
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x8213ab98
	ctx.lr = 0x82798D98;
	sub_8213AB98(ctx, base);
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
loc_82798DAC:
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

__attribute__((alias("__imp__sub_82798DC0"))) PPC_WEAK_FUNC(sub_82798DC0);
PPC_FUNC_IMPL(__imp__sub_82798DC0) {
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
	// addi r3,r31,5072
	ctx.r3.s64 = ctx.r31.s64 + 5072;
	// addi r4,r11,-5164
	ctx.r4.s64 = ctx.r11.s64 + -5164;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x827954c8
	ctx.lr = 0x82798DF0;
	sub_827954C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827987d8
	ctx.lr = 0x82798E04;
	sub_827987D8(ctx, base);
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

__attribute__((alias("__imp__sub_82798E1C"))) PPC_WEAK_FUNC(sub_82798E1C);
PPC_FUNC_IMPL(__imp__sub_82798E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798E20"))) PPC_WEAK_FUNC(sub_82798E20);
PPC_FUNC_IMPL(__imp__sub_82798E20) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798e60
	if (!ctx.cr6.lt) goto loc_82798E60;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82798e60
	if (ctx.cr6.eq) goto loc_82798E60;
	// lhz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 128);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 ^ 1;
	// blr 
	return;
loc_82798E60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798E68"))) PPC_WEAK_FUNC(sub_82798E68);
PPC_FUNC_IMPL(__imp__sub_82798E68) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798ec4
	if (!ctx.cr6.lt) goto loc_82798EC4;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82798ec4
	if (ctx.cr6.eq) goto loc_82798EC4;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82798eb4
	if (ctx.cr6.eq) goto loc_82798EB4;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x82798eb4
	if (!ctx.cr6.lt) goto loc_82798EB4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
loc_82798EB4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
loc_82798EC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798ECC"))) PPC_WEAK_FUNC(sub_82798ECC);
PPC_FUNC_IMPL(__imp__sub_82798ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798ED0"))) PPC_WEAK_FUNC(sub_82798ED0);
PPC_FUNC_IMPL(__imp__sub_82798ED0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798efc
	if (!ctx.cr6.lt) goto loc_82798EFC;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82798efc
	if (ctx.cr6.eq) goto loc_82798EFC;
	// lhz r3,94(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 94);
	// blr 
	return;
loc_82798EFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798F04"))) PPC_WEAK_FUNC(sub_82798F04);
PPC_FUNC_IMPL(__imp__sub_82798F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798F08"))) PPC_WEAK_FUNC(sub_82798F08);
PPC_FUNC_IMPL(__imp__sub_82798F08) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798f34
	if (!ctx.cr6.lt) goto loc_82798F34;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82798f34
	if (ctx.cr6.eq) goto loc_82798F34;
	// lhz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 92);
	// blr 
	return;
loc_82798F34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798F3C"))) PPC_WEAK_FUNC(sub_82798F3C);
PPC_FUNC_IMPL(__imp__sub_82798F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798F40"))) PPC_WEAK_FUNC(sub_82798F40);
PPC_FUNC_IMPL(__imp__sub_82798F40) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798f6c
	if (!ctx.cr6.lt) goto loc_82798F6C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82798f6c
	if (ctx.cr6.eq) goto loc_82798F6C;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// blr 
	return;
loc_82798F6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798F74"))) PPC_WEAK_FUNC(sub_82798F74);
PPC_FUNC_IMPL(__imp__sub_82798F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798F78"))) PPC_WEAK_FUNC(sub_82798F78);
PPC_FUNC_IMPL(__imp__sub_82798F78) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82798fb4
	if (!ctx.cr6.lt) goto loc_82798FB4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82798fb4
	if (ctx.cr6.eq) goto loc_82798FB4;
	// lhz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// lhz r9,106(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 106);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82798FB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798FBC"))) PPC_WEAK_FUNC(sub_82798FBC);
PPC_FUNC_IMPL(__imp__sub_82798FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798FC0"))) PPC_WEAK_FUNC(sub_82798FC0);
PPC_FUNC_IMPL(__imp__sub_82798FC0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82798fec
	if (!ctx.cr6.lt) goto loc_82798FEC;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82798fec
	if (ctx.cr6.eq) goto loc_82798FEC;
	// lhz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 120);
	// blr 
	return;
loc_82798FEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82798FF4"))) PPC_WEAK_FUNC(sub_82798FF4);
PPC_FUNC_IMPL(__imp__sub_82798FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82798FF8"))) PPC_WEAK_FUNC(sub_82798FF8);
PPC_FUNC_IMPL(__imp__sub_82798FF8) {
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
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799064
	if (!ctx.cr6.lt) goto loc_82799064;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82799064
	if (ctx.cr6.eq) goto loc_82799064;
	// lhz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 120);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82799050
	if (!ctx.cr6.lt) goto loc_82799050;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82797010
	ctx.lr = 0x8279903C;
	sub_82797010(ctx, base);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82799050:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-6184
	ctx.r5.s64 = ctx.r11.s64 + -6184;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82799064;
	sub_82BCAC98(ctx, base);
loc_82799064:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799078"))) PPC_WEAK_FUNC(sub_82799078);
PPC_FUNC_IMPL(__imp__sub_82799078) {
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
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827990fc
	if (!ctx.cr6.lt) goto loc_827990FC;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827990fc
	if (ctx.cr6.eq) goto loc_827990FC;
	// lhz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 120);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827990d0
	if (!ctx.cr6.lt) goto loc_827990D0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82797010
	ctx.lr = 0x827990BC;
	sub_82797010(ctx, base);
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827990D0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-6140
	ctx.r5.s64 = ctx.r11.s64 + -6140;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x827990E4;
	sub_82BCAC98(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f1,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827990FC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799114"))) PPC_WEAK_FUNC(sub_82799114);
PPC_FUNC_IMPL(__imp__sub_82799114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799118"))) PPC_WEAK_FUNC(sub_82799118);
PPC_FUNC_IMPL(__imp__sub_82799118) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279917c
	if (!ctx.cr6.lt) goto loc_8279917C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279917c
	if (ctx.cr6.eq) goto loc_8279917C;
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279917c
	if (!ctx.cr6.lt) goto loc_8279917C;
	// addi r10,r6,3
	ctx.r10.s64 = ctx.r6.s64 + 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// blr 
	return;
loc_8279917C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799184"))) PPC_WEAK_FUNC(sub_82799184);
PPC_FUNC_IMPL(__imp__sub_82799184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799188"))) PPC_WEAK_FUNC(sub_82799188);
PPC_FUNC_IMPL(__imp__sub_82799188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827991a4
	if (ctx.cr6.lt) goto loc_827991A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_827991A4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x827971d8
	sub_827971D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827991C0"))) PPC_WEAK_FUNC(sub_827991C0);
PPC_FUNC_IMPL(__imp__sub_827991C0) {
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
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799214
	if (!ctx.cr6.lt) goto loc_82799214;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82799214
	if (ctx.cr6.eq) goto loc_82799214;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82796f28
	ctx.lr = 0x827991F8;
	sub_82796F28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82799214
	if (ctx.cr6.eq) goto loc_82799214;
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82799214:
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

__attribute__((alias("__imp__sub_82799228"))) PPC_WEAK_FUNC(sub_82799228);
PPC_FUNC_IMPL(__imp__sub_82799228) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279925c
	if (!ctx.cr6.lt) goto loc_8279925C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279925c
	if (ctx.cr6.eq) goto loc_8279925C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82797268
	sub_82797268(ctx, base);
	return;
loc_8279925C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799264"))) PPC_WEAK_FUNC(sub_82799264);
PPC_FUNC_IMPL(__imp__sub_82799264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799268"))) PPC_WEAK_FUNC(sub_82799268);
PPC_FUNC_IMPL(__imp__sub_82799268) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799294
	if (!ctx.cr6.lt) goto loc_82799294;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82799294
	if (ctx.cr6.eq) goto loc_82799294;
	// lhz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 108);
	// blr 
	return;
loc_82799294:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279929C"))) PPC_WEAK_FUNC(sub_8279929C);
PPC_FUNC_IMPL(__imp__sub_8279929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827992A0"))) PPC_WEAK_FUNC(sub_827992A0);
PPC_FUNC_IMPL(__imp__sub_827992A0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827992e8
	if (!ctx.cr6.lt) goto loc_827992E8;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827992e8
	if (ctx.cr6.eq) goto loc_827992E8;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827992e8
	if (ctx.cr6.eq) goto loc_827992E8;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x827992e8
	if (!ctx.cr6.lt) goto loc_827992E8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// blr 
	return;
loc_827992E8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827992F0"))) PPC_WEAK_FUNC(sub_827992F0);
PPC_FUNC_IMPL(__imp__sub_827992F0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279931c
	if (!ctx.cr6.lt) goto loc_8279931C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279931c
	if (ctx.cr6.eq) goto loc_8279931C;
	// lhz r3,106(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 106);
	// blr 
	return;
loc_8279931C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799324"))) PPC_WEAK_FUNC(sub_82799324);
PPC_FUNC_IMPL(__imp__sub_82799324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799328"))) PPC_WEAK_FUNC(sub_82799328);
PPC_FUNC_IMPL(__imp__sub_82799328) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799354
	if (!ctx.cr6.lt) goto loc_82799354;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82799354
	if (ctx.cr6.eq) goto loc_82799354;
	// lhz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// blr 
	return;
loc_82799354:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279935C"))) PPC_WEAK_FUNC(sub_8279935C);
PPC_FUNC_IMPL(__imp__sub_8279935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799360"))) PPC_WEAK_FUNC(sub_82799360);
PPC_FUNC_IMPL(__imp__sub_82799360) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bge cr6,0x82799380
	if (!ctx.cr6.lt) goto loc_82799380;
	// addi r10,r11,1716
	ctx.r10.s64 = ctx.r11.s64 + 1716;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r8,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// b 0x82799384
	goto loc_82799384;
loc_82799380:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82799384:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bge cr6,0x82799398
	if (!ctx.cr6.lt) goto loc_82799398;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,13724(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13724);
loc_82799398:
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827993c4
	if (!ctx.cr6.lt) goto loc_827993C4;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827993c4
	if (ctx.cr6.eq) goto loc_827993C4;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82797268
	sub_82797268(ctx, base);
	return;
loc_827993C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827993CC"))) PPC_WEAK_FUNC(sub_827993CC);
PPC_FUNC_IMPL(__imp__sub_827993CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827993D0"))) PPC_WEAK_FUNC(sub_827993D0);
PPC_FUNC_IMPL(__imp__sub_827993D0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827993fc
	if (!ctx.cr6.lt) goto loc_827993FC;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827993fc
	if (ctx.cr6.eq) goto loc_827993FC;
	// lbz r3,23(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// blr 
	return;
loc_827993FC:
	// lhz r3,5334(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5334);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799404"))) PPC_WEAK_FUNC(sub_82799404);
PPC_FUNC_IMPL(__imp__sub_82799404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799408"))) PPC_WEAK_FUNC(sub_82799408);
PPC_FUNC_IMPL(__imp__sub_82799408) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799434
	if (!ctx.cr6.lt) goto loc_82799434;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82799434
	if (ctx.cr6.eq) goto loc_82799434;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x827972c8
	sub_827972C8(ctx, base);
	return;
loc_82799434:
	// li r3,44
	ctx.r3.s64 = 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279943C"))) PPC_WEAK_FUNC(sub_8279943C);
PPC_FUNC_IMPL(__imp__sub_8279943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799440"))) PPC_WEAK_FUNC(sub_82799440);
PPC_FUNC_IMPL(__imp__sub_82799440) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799468
	if (!ctx.cr6.lt) goto loc_82799468;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82799468
	if (ctx.cr6.eq) goto loc_82799468;
	// b 0x82139940
	sub_82139940(ctx, base);
	return;
loc_82799468:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799470"))) PPC_WEAK_FUNC(sub_82799470);
PPC_FUNC_IMPL(__imp__sub_82799470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279949c
	if (!ctx.cr6.lt) goto loc_8279949C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279949c
	if (ctx.cr6.eq) goto loc_8279949C;
	// lfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8279949C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827994A8"))) PPC_WEAK_FUNC(sub_827994A8);
PPC_FUNC_IMPL(__imp__sub_827994A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827994d4
	if (!ctx.cr6.lt) goto loc_827994D4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827994d4
	if (ctx.cr6.eq) goto loc_827994D4;
	// lfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_827994D4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827994E0"))) PPC_WEAK_FUNC(sub_827994E0);
PPC_FUNC_IMPL(__imp__sub_827994E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799518
	if (!ctx.cr6.lt) goto loc_82799518;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82799518
	if (ctx.cr6.eq) goto loc_82799518;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r3,-10(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// blr 
	return;
loc_82799518:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799520"))) PPC_WEAK_FUNC(sub_82799520);
PPC_FUNC_IMPL(__imp__sub_82799520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82799554
	if (!ctx.cr6.lt) goto loc_82799554;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82799554
	if (ctx.cr6.eq) goto loc_82799554;
	// lfs f0,4520(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4520);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
loc_82799554:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799560"))) PPC_WEAK_FUNC(sub_82799560);
PPC_FUNC_IMPL(__imp__sub_82799560) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82799614
	if (ctx.cr6.eq) goto loc_82799614;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82799598
	if (!ctx.cr6.gt) goto loc_82799598;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82799598:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82799614
	if (!ctx.cr6.eq) goto loc_82799614;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82798d30
	ctx.lr = 0x827995B0;
	sub_82798D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827995e0
	if (ctx.cr6.eq) goto loc_827995E0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcd448
	ctx.lr = 0x827995C8;
	sub_82BCD448(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827995E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827995E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82799614
	if (!ctx.cr6.eq) goto loc_82799614;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,13912(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13912, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82799614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82799614:
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

__attribute__((alias("__imp__sub_8279962C"))) PPC_WEAK_FUNC(sub_8279962C);
PPC_FUNC_IMPL(__imp__sub_8279962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799630"))) PPC_WEAK_FUNC(sub_82799630);
PPC_FUNC_IMPL(__imp__sub_82799630) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-5040
	ctx.r10.s64 = ctx.r11.s64 + -5040;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82120040
	ctx.lr = 0x82799660;
	sub_82120040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827996a8
	if (ctx.cr6.eq) goto loc_827996A8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// bl 0x82120ae0
	ctx.lr = 0x8279967C;
	sub_82120AE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82799688
	if (ctx.cr6.eq) goto loc_82799688;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82799688:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82799694
	if (ctx.cr0.eq) goto loc_82799694;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82799694:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x827996b0
	goto loc_827996B0;
loc_827996A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_827996B0:
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

__attribute__((alias("__imp__sub_827996CC"))) PPC_WEAK_FUNC(sub_827996CC);
PPC_FUNC_IMPL(__imp__sub_827996CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827996D0"))) PPC_WEAK_FUNC(sub_827996D0);
PPC_FUNC_IMPL(__imp__sub_827996D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799704
	if (!ctx.cr6.lt) goto loc_82799704;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82799704
	if (ctx.cr6.eq) goto loc_82799704;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x827973b8
	sub_827973B8(ctx, base);
	return;
loc_82799704:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799710"))) PPC_WEAK_FUNC(sub_82799710);
PPC_FUNC_IMPL(__imp__sub_82799710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bge cr6,0x82799730
	if (!ctx.cr6.lt) goto loc_82799730;
	// addi r10,r11,1716
	ctx.r10.s64 = ctx.r11.s64 + 1716;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r8,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// b 0x82799734
	goto loc_82799734;
loc_82799730:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82799734:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bge cr6,0x82799748
	if (!ctx.cr6.lt) goto loc_82799748;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,13724(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13724);
loc_82799748:
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799774
	if (!ctx.cr6.lt) goto loc_82799774;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82799774
	if (ctx.cr6.eq) goto loc_82799774;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x827973b8
	sub_827973B8(ctx, base);
	return;
loc_82799774:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799780"))) PPC_WEAK_FUNC(sub_82799780);
PPC_FUNC_IMPL(__imp__sub_82799780) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,4428
	ctx.r3.s64 = ctx.r3.s64 + 4428;
	// b 0x82139dd8
	sub_82139DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82799790"))) PPC_WEAK_FUNC(sub_82799790);
PPC_FUNC_IMPL(__imp__sub_82799790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799794"))) PPC_WEAK_FUNC(sub_82799794);
PPC_FUNC_IMPL(__imp__sub_82799794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799798"))) PPC_WEAK_FUNC(sub_82799798);
PPC_FUNC_IMPL(__imp__sub_82799798) {
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
	// addi r3,r3,4428
	ctx.r3.s64 = ctx.r3.s64 + 4428;
	// bl 0x8213a0a8
	ctx.lr = 0x827997AC;
	sub_8213A0A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827997cc
	if (!ctx.cr6.eq) goto loc_827997CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-5228
	ctx.r5.s64 = ctx.r11.s64 + -5228;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x827997CC;
	sub_82BCAC98(ctx, base);
loc_827997CC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827997E0"))) PPC_WEAK_FUNC(sub_827997E0);
PPC_FUNC_IMPL(__imp__sub_827997E0) {
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
	// addi r3,r3,4336
	ctx.r3.s64 = ctx.r3.s64 + 4336;
	// bl 0x8213a0a8
	ctx.lr = 0x827997F4;
	sub_8213A0A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82799824
	if (ctx.cr6.eq) goto loc_82799824;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82799824:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-5304
	ctx.r5.s64 = ctx.r11.s64 + -5304;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82799838;
	sub_82BCAC98(ctx, base);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279984C"))) PPC_WEAK_FUNC(sub_8279984C);
PPC_FUNC_IMPL(__imp__sub_8279984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799850"))) PPC_WEAK_FUNC(sub_82799850);
PPC_FUNC_IMPL(__imp__sub_82799850) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,4244
	ctx.r3.s64 = ctx.r3.s64 + 4244;
	// b 0x82139dd8
	sub_82139DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82799860"))) PPC_WEAK_FUNC(sub_82799860);
PPC_FUNC_IMPL(__imp__sub_82799860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799864"))) PPC_WEAK_FUNC(sub_82799864);
PPC_FUNC_IMPL(__imp__sub_82799864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799868"))) PPC_WEAK_FUNC(sub_82799868);
PPC_FUNC_IMPL(__imp__sub_82799868) {
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
	// addi r3,r3,4244
	ctx.r3.s64 = ctx.r3.s64 + 4244;
	// bl 0x8213a0a8
	ctx.lr = 0x8279987C;
	sub_8213A0A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8279989c
	if (!ctx.cr6.eq) goto loc_8279989C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-5376
	ctx.r5.s64 = ctx.r11.s64 + -5376;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279989C;
	sub_82BCAC98(ctx, base);
loc_8279989C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827998B0"))) PPC_WEAK_FUNC(sub_827998B0);
PPC_FUNC_IMPL(__imp__sub_827998B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,4152
	ctx.r3.s64 = ctx.r3.s64 + 4152;
	// b 0x82139dd8
	sub_82139DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827998C0"))) PPC_WEAK_FUNC(sub_827998C0);
PPC_FUNC_IMPL(__imp__sub_827998C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827998C4"))) PPC_WEAK_FUNC(sub_827998C4);
PPC_FUNC_IMPL(__imp__sub_827998C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827998C8"))) PPC_WEAK_FUNC(sub_827998C8);
PPC_FUNC_IMPL(__imp__sub_827998C8) {
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
	// addi r3,r3,4152
	ctx.r3.s64 = ctx.r3.s64 + 4152;
	// bl 0x8213a0a8
	ctx.lr = 0x827998DC;
	sub_8213A0A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279991c
	if (ctx.cr6.eq) goto loc_8279991C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// sth r11,24(r10)
	PPC_STORE_U16(ctx.r10.u32 + 24, ctx.r11.u16);
	// sth r11,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8279991C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-5448
	ctx.r5.s64 = ctx.r11.s64 + -5448;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x82799930;
	sub_82BCAC98(ctx, base);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799944"))) PPC_WEAK_FUNC(sub_82799944);
PPC_FUNC_IMPL(__imp__sub_82799944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799948"))) PPC_WEAK_FUNC(sub_82799948);
PPC_FUNC_IMPL(__imp__sub_82799948) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,4060
	ctx.r3.s64 = ctx.r3.s64 + 4060;
	// b 0x82139dd8
	sub_82139DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82799958"))) PPC_WEAK_FUNC(sub_82799958);
PPC_FUNC_IMPL(__imp__sub_82799958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279995C"))) PPC_WEAK_FUNC(sub_8279995C);
PPC_FUNC_IMPL(__imp__sub_8279995C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799960"))) PPC_WEAK_FUNC(sub_82799960);
PPC_FUNC_IMPL(__imp__sub_82799960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82799964"))) PPC_WEAK_FUNC(sub_82799964);
PPC_FUNC_IMPL(__imp__sub_82799964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799968"))) PPC_WEAK_FUNC(sub_82799968);
PPC_FUNC_IMPL(__imp__sub_82799968) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r11,12456(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12456);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x827999dc
	if (ctx.cr6.eq) goto loc_827999DC;
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
loc_827999DC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r3,r10,4
	ctx.xer.ca = ctx.r10.u32 > 4294967291;
	ctx.r3.s64 = ctx.r10.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq 0x827999f8
	if (ctx.cr0.eq) goto loc_827999F8;
	// li r5,160
	ctx.r5.s64 = 160;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82219130
	ctx.lr = 0x827999F8;
	sub_82219130(ctx, base);
loc_827999F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
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

__attribute__((alias("__imp__sub_82799A18"))) PPC_WEAK_FUNC(sub_82799A18);
PPC_FUNC_IMPL(__imp__sub_82799A18) {
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
	// lwz r3,13912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13912);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82799a5c
	if (!ctx.cr6.eq) goto loc_82799A5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82120040
	ctx.lr = 0x82799A44;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82799a54
	if (ctx.cr6.eq) goto loc_82799A54;
	// bl 0x82799630
	ctx.lr = 0x82799A50;
	sub_82799630(ctx, base);
	// b 0x82799a58
	goto loc_82799A58;
loc_82799A54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82799A58:
	// stw r3,13912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13912, ctx.r3.u32);
loc_82799A5C:
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

__attribute__((alias("__imp__sub_82799A70"))) PPC_WEAK_FUNC(sub_82799A70);
PPC_FUNC_IMPL(__imp__sub_82799A70) {
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
	// addi r10,r11,-5040
	ctx.r10.s64 = ctx.r11.s64 + -5040;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82120568
	ctx.lr = 0x82799A98;
	sub_82120568(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82120a70
	ctx.lr = 0x82799AA0;
	sub_82120A70(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
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

__attribute__((alias("__imp__sub_82799ABC"))) PPC_WEAK_FUNC(sub_82799ABC);
PPC_FUNC_IMPL(__imp__sub_82799ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799AC0"))) PPC_WEAK_FUNC(sub_82799AC0);
PPC_FUNC_IMPL(__imp__sub_82799AC0) {
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
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799b04
	if (!ctx.cr6.lt) goto loc_82799B04;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82799b04
	if (ctx.cr6.eq) goto loc_82799B04;
	// lhz r11,106(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 106);
	// b 0x82799b08
	goto loc_82799B08;
loc_82799B04:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82799B08:
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799b3c
	if (!ctx.cr6.lt) goto loc_82799B3C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82799b3c
	if (ctx.cr6.eq) goto loc_82799B3C;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// b 0x82799b40
	goto loc_82799B40;
loc_82799B3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82799B40:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82751550
	ctx.lr = 0x82799B48;
	sub_82751550(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82799b6c
	if (!ctx.cr6.lt) goto loc_82799B6C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 * 88;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82799B6C;
	sub_82219130(ctx, base);
loc_82799B6C:
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

__attribute__((alias("__imp__sub_82799B84"))) PPC_WEAK_FUNC(sub_82799B84);
PPC_FUNC_IMPL(__imp__sub_82799B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799B88"))) PPC_WEAK_FUNC(sub_82799B88);
PPC_FUNC_IMPL(__imp__sub_82799B88) {
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
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799bcc
	if (!ctx.cr6.lt) goto loc_82799BCC;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82799bcc
	if (ctx.cr6.eq) goto loc_82799BCC;
	// lhz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// b 0x82799bd0
	goto loc_82799BD0;
loc_82799BCC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82799BD0:
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799c04
	if (!ctx.cr6.lt) goto loc_82799C04;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82799c04
	if (ctx.cr6.eq) goto loc_82799C04;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// b 0x82799c08
	goto loc_82799C08;
loc_82799C04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82799C08:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82751550
	ctx.lr = 0x82799C10;
	sub_82751550(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82799c34
	if (!ctx.cr6.lt) goto loc_82799C34;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 * 88;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x82799C34;
	sub_82219130(ctx, base);
loc_82799C34:
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

__attribute__((alias("__imp__sub_82799C4C"))) PPC_WEAK_FUNC(sub_82799C4C);
PPC_FUNC_IMPL(__imp__sub_82799C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799C50"))) PPC_WEAK_FUNC(sub_82799C50);
PPC_FUNC_IMPL(__imp__sub_82799C50) {
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
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799ce0
	if (!ctx.cr6.lt) goto loc_82799CE0;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82799ce0
	if (ctx.cr6.eq) goto loc_82799CE0;
	// lhz r11,106(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 106);
	// lhz r10,42(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 42);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82799cc0
	if (!ctx.cr6.lt) goto loc_82799CC0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82799cc0
	if (ctx.cr6.eq) goto loc_82799CC0;
	// lbz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// b 0x82799cc4
	goto loc_82799CC4;
loc_82799CC0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82799CC4:
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82751550
	ctx.lr = 0x82799CCC;
	sub_82751550(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x827511e0
	ctx.lr = 0x82799CD8;
	sub_827511E0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82799ce4
	goto loc_82799CE4;
loc_82799CE0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82799CE4:
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

__attribute__((alias("__imp__sub_82799CFC"))) PPC_WEAK_FUNC(sub_82799CFC);
PPC_FUNC_IMPL(__imp__sub_82799CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799D00"))) PPC_WEAK_FUNC(sub_82799D00);
PPC_FUNC_IMPL(__imp__sub_82799D00) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82799d3c
	if (ctx.cr6.eq) goto loc_82799D3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82797628
	ctx.lr = 0x82799D30;
	sub_82797628(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,4336
	ctx.r3.s64 = ctx.r30.s64 + 4336;
	// bl 0x82139dd8
	ctx.lr = 0x82799D3C;
	sub_82139DD8(ctx, base);
loc_82799D3C:
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

__attribute__((alias("__imp__sub_82799D54"))) PPC_WEAK_FUNC(sub_82799D54);
PPC_FUNC_IMPL(__imp__sub_82799D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82799D58"))) PPC_WEAK_FUNC(sub_82799D58);
PPC_FUNC_IMPL(__imp__sub_82799D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82799D60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-5044
	ctx.r10.s64 = ctx.r11.s64 + -5044;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r6,r8,-5036
	ctx.r6.s64 = ctx.r8.s64 + -5036;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r5,r7,-5032
	ctx.r5.s64 = ctx.r7.s64 + -5032;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// sth r30,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r30.u16);
	// sth r30,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r30.u16);
	// sth r30,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r30.u16);
	// sth r30,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r30.u16);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// sth r30,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r30.u16);
	// stw r30,4056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4056, ctx.r30.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r11,4064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4064, ctx.r11.u32);
	// addi r11,r31,4060
	ctx.r11.s64 = ctx.r31.s64 + 4060;
	// stw r6,4060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4060, ctx.r6.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r30,4072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4072, ctx.r30.u32);
	// stw r30,4076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4076, ctx.r30.u32);
	// stw r5,4068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4068, ctx.r5.u32);
	// stw r30,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r30.u32);
	// bl 0x821fd9e8
	ctx.lr = 0x82799DF0;
	sub_821FD9E8(ctx, base);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r11,r31,4152
	ctx.r11.s64 = ctx.r31.s64 + 4152;
	// stw r30,4116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4116, ctx.r30.u32);
	// addi r3,r4,-5036
	ctx.r3.s64 = ctx.r4.s64 + -5036;
	// stw r30,4120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4120, ctx.r30.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,4124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4124, ctx.r30.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r3,4060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4060, ctx.r3.u32);
	// stw r30,4128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4128, ctx.r30.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r30,4132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4132, ctx.r30.u32);
	// addi r8,r10,-5036
	ctx.r8.s64 = ctx.r10.s64 + -5036;
	// stw r30,4136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4136, ctx.r30.u32);
	// addi r7,r9,-5032
	ctx.r7.s64 = ctx.r9.s64 + -5032;
	// stw r30,4140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4140, ctx.r30.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r11,4156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4156, ctx.r11.u32);
	// stw r8,4152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4152, ctx.r8.u32);
	// stw r30,4164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4164, ctx.r30.u32);
	// stw r30,4168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4168, ctx.r30.u32);
	// stw r7,4160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4160, ctx.r7.u32);
	// stw r30,4172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4172, ctx.r30.u32);
	// bl 0x821fd9e8
	ctx.lr = 0x82799E50;
	sub_821FD9E8(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r11,r31,4244
	ctx.r11.s64 = ctx.r31.s64 + 4244;
	// stw r30,4208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4208, ctx.r30.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r30,4212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4212, ctx.r30.u32);
	// addi r4,r6,-5036
	ctx.r4.s64 = ctx.r6.s64 + -5036;
	// stw r30,4216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4216, ctx.r30.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,4220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4220, ctx.r30.u32);
	// stw r30,4224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4224, ctx.r30.u32);
	// addi r9,r5,-5036
	ctx.r9.s64 = ctx.r5.s64 + -5036;
	// stw r30,4228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4228, ctx.r30.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r30,4232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4232, ctx.r30.u32);
	// addi r8,r10,-5032
	ctx.r8.s64 = ctx.r10.s64 + -5032;
	// stw r4,4152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4152, ctx.r4.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r11,4248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4248, ctx.r11.u32);
	// stw r9,4244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4244, ctx.r9.u32);
	// stw r30,4256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4256, ctx.r30.u32);
	// stw r30,4260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4260, ctx.r30.u32);
	// stw r8,4252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4252, ctx.r8.u32);
	// stw r30,4264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4264, ctx.r30.u32);
	// bl 0x821fd9e8
	ctx.lr = 0x82799EB0;
	sub_821FD9E8(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r11,r31,4336
	ctx.r11.s64 = ctx.r31.s64 + 4336;
	// stw r30,4300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4300, ctx.r30.u32);
	// addi r6,r7,-5036
	ctx.r6.s64 = ctx.r7.s64 + -5036;
	// stw r30,4304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4304, ctx.r30.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r30,4308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4308, ctx.r30.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r6,4244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4244, ctx.r6.u32);
	// stw r30,4312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4312, ctx.r30.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r30,4316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4316, ctx.r30.u32);
	// addi r10,r5,-5036
	ctx.r10.s64 = ctx.r5.s64 + -5036;
	// stw r30,4320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4320, ctx.r30.u32);
	// addi r9,r4,-5032
	ctx.r9.s64 = ctx.r4.s64 + -5032;
	// stw r30,4324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4324, ctx.r30.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r11,4340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4340, ctx.r11.u32);
	// stw r10,4336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4336, ctx.r10.u32);
	// stw r30,4348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4348, ctx.r30.u32);
	// stw r30,4352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4352, ctx.r30.u32);
	// stw r9,4344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4344, ctx.r9.u32);
	// stw r30,4356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4356, ctx.r30.u32);
	// bl 0x821fd9e8
	ctx.lr = 0x82799F10;
	sub_821FD9E8(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r30,4392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4392, ctx.r30.u32);
	// addi r6,r8,-5036
	ctx.r6.s64 = ctx.r8.s64 + -5036;
	// stw r30,4396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4396, ctx.r30.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r30,4400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4400, ctx.r30.u32);
	// stw r30,4404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4404, ctx.r30.u32);
	// addi r4,r7,-5028
	ctx.r4.s64 = ctx.r7.s64 + -5028;
	// stw r30,4408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4408, ctx.r30.u32);
	// addi r10,r5,-5032
	ctx.r10.s64 = ctx.r5.s64 + -5032;
	// stw r30,4412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4412, ctx.r30.u32);
	// stw r30,4416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4416, ctx.r30.u32);
	// stw r6,4336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4336, ctx.r6.u32);
	// lwz r11,-17440(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17440);
	// stw r11,4432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4432, ctx.r11.u32);
	// addi r11,r31,4428
	ctx.r11.s64 = ctx.r31.s64 + 4428;
	// stw r4,4428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4428, ctx.r4.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r30,4440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4440, ctx.r30.u32);
	// stw r30,4444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4444, ctx.r30.u32);
	// stw r10,4436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4436, ctx.r10.u32);
	// stw r30,4448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4448, ctx.r30.u32);
	// bl 0x821fd9e8
	ctx.lr = 0x82799F70;
	sub_821FD9E8(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r30,4484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4484, ctx.r30.u32);
	// addi r8,r9,-5028
	ctx.r8.s64 = ctx.r9.s64 + -5028;
	// stw r30,4488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4488, ctx.r30.u32);
	// stw r30,4492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4492, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r8,4428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4428, ctx.r8.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r30,4496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4496, ctx.r30.u32);
	// stw r30,4500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4500, ctx.r30.u32);
	// stw r30,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r30.u32);
	// stw r30,4508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4508, ctx.r30.u32);
	// stw r30,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r30.u32);
	// stw r30,4532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4532, ctx.r30.u32);
	// stw r30,4536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4536, ctx.r30.u32);
	// stw r30,4540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4540, ctx.r30.u32);
	// stw r30,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r30.u32);
	// stw r30,4548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4548, ctx.r30.u32);
loc_82799FBC:
	// addi r9,r11,27
	ctx.r9.s64 = ctx.r11.s64 + 27;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// sthx r10,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u16);
	// blt cr6,0x82799fbc
	if (ctx.cr6.lt) goto loc_82799FBC;
	// li r5,8320
	ctx.r5.s64 = 8320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,5404
	ctx.r3.s64 = ctx.r31.s64 + 5404;
	// bl 0x82218a80
	ctx.lr = 0x82799FE8;
	sub_82218A80(ctx, base);
	// li r5,780
	ctx.r5.s64 = 780;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4552
	ctx.r3.s64 = ctx.r31.s64 + 4552;
	// bl 0x82218a80
	ctx.lr = 0x82799FF8;
	sub_82218A80(ctx, base);
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,13724
	ctx.r3.s64 = ctx.r31.s64 + 13724;
	// bl 0x82218a80
	ctx.lr = 0x8279A008;
	sub_82218A80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82120040
	ctx.lr = 0x8279A014;
	sub_82120040(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-10892
	ctx.r4.s64 = ctx.r11.s64 + -10892;
	// bl 0x82219e28
	ctx.lr = 0x8279A028;
	sub_82219E28(ctx, base);
	// bl 0x82751550
	ctx.lr = 0x8279A02C;
	sub_82751550(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x82796ad0
	ctx.lr = 0x8279A03C;
	sub_82796AD0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,296(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279A058"))) PPC_WEAK_FUNC(sub_8279A058);
PPC_FUNC_IMPL(__imp__sub_8279A058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r11,12456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12456);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r9.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// beq cr6,0x8279a0b4
	if (ctx.cr6.eq) goto loc_8279A0B4;
	// lbz r8,-15(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r7,-14(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
loc_8279A0B4:
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// beq cr6,0x8279a11c
	if (ctx.cr6.eq) goto loc_8279A11C;
	// lbz r9,-14(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// lbz r8,-15(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
loc_8279A11C:
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A124"))) PPC_WEAK_FUNC(sub_8279A124);
PPC_FUNC_IMPL(__imp__sub_8279A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A128"))) PPC_WEAK_FUNC(sub_8279A128);
PPC_FUNC_IMPL(__imp__sub_8279A128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r8,12456(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12456);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r9.u8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r6,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r6.u8);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// beq cr6,0x8279a184
	if (ctx.cr6.eq) goto loc_8279A184;
	// lbz r11,-15(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r7,-14(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r7,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r7.u8);
loc_8279A184:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8279A194:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stb r10,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r10.u8);
	// stb r9,-9(r1)
	PPC_STORE_U8(ctx.r1.u32 + -9, ctx.r9.u8);
	// stb r3,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r3.u8);
	// stb r11,-10(r1)
	PPC_STORE_U8(ctx.r1.u32 + -10, ctx.r11.u8);
	// lwz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// beq cr6,0x8279a1e8
	if (ctx.cr6.eq) goto loc_8279A1E8;
	// lbz r11,-15(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
loc_8279A1E8:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x8279a194
	if (!ctx.cr0.eq) goto loc_8279A194;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A200"))) PPC_WEAK_FUNC(sub_8279A200);
PPC_FUNC_IMPL(__imp__sub_8279A200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279a2dc
	if (!ctx.cr6.lt) goto loc_8279A2DC;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8279a2dc
	if (ctx.cr0.eq) goto loc_8279A2DC;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// ori r11,r8,65535
	ctx.r11.u64 = ctx.r8.u64 | 65535;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r10,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r10.u32);
	// beq cr6,0x8279a288
	if (ctx.cr6.eq) goto loc_8279A288;
	// bl 0x82799ac0
	ctx.lr = 0x8279A284;
	sub_82799AC0(ctx, base);
	// b 0x8279a28c
	goto loc_8279A28C;
loc_8279A288:
	// bl 0x82799b88
	ctx.lr = 0x8279A28C;
	sub_82799B88(ctx, base);
loc_8279A28C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8279a2dc
	if (ctx.cr6.lt) goto loc_8279A2DC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x8279a2dc
	if (!ctx.cr6.lt) goto loc_8279A2DC;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8279a2dc
	if (ctx.cr6.lt) goto loc_8279A2DC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bge cr6,0x8279a2dc
	if (!ctx.cr6.lt) goto loc_8279A2DC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8279A2DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A2F0"))) PPC_WEAK_FUNC(sub_8279A2F0);
PPC_FUNC_IMPL(__imp__sub_8279A2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8279A2F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r10,46(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 46);
	// lhz r11,42(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 42);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279a35c
	if (!ctx.cr6.lt) goto loc_8279A35C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r8,42(r29)
	PPC_STORE_U16(ctx.r29.u32 + 42, ctx.r8.u16);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r30,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u16);
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// bl 0x827976e0
	ctx.lr = 0x8279A348;
	sub_827976E0(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8279A35C:
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279A368"))) PPC_WEAK_FUNC(sub_8279A368);
PPC_FUNC_IMPL(__imp__sub_8279A368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x8279A370;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279a3b0
	if (ctx.cr6.eq) goto loc_8279A3B0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8279A38C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mulli r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 * 132;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82797818
	ctx.lr = 0x8279A39C;
	sub_82797818(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lhz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 40);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8279a38c
	if (ctx.cr6.lt) goto loc_8279A38C;
loc_8279A3B0:
	// lhz r11,42(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 42);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279a434
	if (ctx.cr6.eq) goto loc_8279A434;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r25,3
	ctx.r25.s64 = 3;
loc_8279A3C4:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82751550
	ctx.lr = 0x8279A3DC;
	sub_82751550(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// sth r27,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r27.u16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// sth r27,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r27.u16);
	// stb r10,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r10.u8);
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// beq cr6,0x8279a41c
	if (ctx.cr6.eq) goto loc_8279A41C;
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82797628
	ctx.lr = 0x8279A410;
	sub_82797628(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r26,4336
	ctx.r3.s64 = ctx.r26.s64 + 4336;
	// bl 0x82139dd8
	ctx.lr = 0x8279A41C;
	sub_82139DD8(ctx, base);
loc_8279A41C:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// lhz r10,42(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 42);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8279a3c4
	if (ctx.cr6.lt) goto loc_8279A3C4;
loc_8279A434:
	// lwz r31,32(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
	// lis r24,-32029
	ctx.r24.s64 = -2099052544;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279a498
	if (ctx.cr6.eq) goto loc_8279A498;
	// lwz r29,-17448(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17448);
	// lwz r28,-17440(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17440);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8279A45C;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
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
	ctx.lr = 0x8279A488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8279a498
	if (ctx.cr6.eq) goto loc_8279A498;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8279A498;
	sub_821FD9E0(ctx, base);
loc_8279A498:
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r27,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r27.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8279a4f4
	if (ctx.cr6.eq) goto loc_8279A4F4;
	// lwz r31,-17448(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17448);
	// lwz r28,-17440(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8279A4B8;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
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
	ctx.lr = 0x8279A4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279a4f4
	if (ctx.cr6.eq) goto loc_8279A4F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8279A4F4;
	sub_821FD9E0(ctx, base);
loc_8279A4F4:
	// lwz r31,4056(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4056);
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// sth r27,40(r30)
	PPC_STORE_U16(ctx.r30.u32 + 40, ctx.r27.u16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// sth r27,42(r30)
	PPC_STORE_U16(ctx.r30.u32 + 42, ctx.r27.u16);
	// sth r27,44(r30)
	PPC_STORE_U16(ctx.r30.u32 + 44, ctx.r27.u16);
	// sth r27,46(r30)
	PPC_STORE_U16(ctx.r30.u32 + 46, ctx.r27.u16);
	// beq cr6,0x8279a59c
	if (ctx.cr6.eq) goto loc_8279A59C;
	// addi r28,r31,116
	ctx.r28.s64 = ctx.r31.s64 + 116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8279A520;
	sub_821FD9D8(ctx, base);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213a770
	ctx.lr = 0x8279A530;
	sub_8213A770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a8e0
	ctx.lr = 0x8279A538;
	sub_8213A8E0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8279a548
	if (ctx.cr6.eq) goto loc_8279A548;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8279A548;
	sub_821FD9E0(ctx, base);
loc_8279A548:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82492d68
	ctx.lr = 0x8279A550;
	sub_82492D68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-5024
	ctx.r10.s64 = ctx.r11.s64 + -5024;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8213a770
	ctx.lr = 0x8279A568;
	sub_8213A770(ctx, base);
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x82492d68
	ctx.lr = 0x8279A570;
	sub_82492D68(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-5032
	ctx.r8.s64 = ctx.r9.s64 + -5032;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// bl 0x8213a8e0
	ctx.lr = 0x8279A584;
	sub_8213A8E0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279a594
	if (ctx.cr6.eq) goto loc_8279A594;
	// bl 0x82120a70
	ctx.lr = 0x8279A594;
	sub_82120A70(ctx, base);
loc_8279A594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x8279A59C;
	sub_82120A70(ctx, base);
loc_8279A59C:
	// lwz r29,4528(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4528);
	// stw r27,4056(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4056, ctx.r27.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8279a5f8
	if (ctx.cr6.eq) goto loc_8279A5F8;
	// lwz r31,-17448(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17448);
	// lwz r28,-17440(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8279A5BC;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
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
	ctx.lr = 0x8279A5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279a5f8
	if (ctx.cr6.eq) goto loc_8279A5F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8279A5F8;
	sub_821FD9E0(ctx, base);
loc_8279A5F8:
	// lwz r29,48(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r27,4528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4528, ctx.r27.u32);
	// stw r27,4532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4532, ctx.r27.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r27,4536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4536, ctx.r27.u32);
	// beq cr6,0x8279a65c
	if (ctx.cr6.eq) goto loc_8279A65C;
	// lwz r31,-17448(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17448);
	// lwz r28,-17440(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x8279A620;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
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
	ctx.lr = 0x8279A64C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279a65c
	if (ctx.cr6.eq) goto loc_8279A65C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x8279A65C;
	sub_821FD9E0(ctx, base);
loc_8279A65C:
	// li r5,8320
	ctx.r5.s64 = 8320;
	// stw r27,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r27,52(r30)
	PPC_STORE_U16(ctx.r30.u32 + 52, ctx.r27.u16);
	// addi r3,r30,5404
	ctx.r3.s64 = ctx.r30.s64 + 5404;
	// bl 0x82218a80
	ctx.lr = 0x8279A674;
	sub_82218A80(ctx, base);
	// li r5,780
	ctx.r5.s64 = 780;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,4552
	ctx.r3.s64 = ctx.r30.s64 + 4552;
	// bl 0x82218a80
	ctx.lr = 0x8279A684;
	sub_82218A80(ctx, base);
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r30,13724
	ctx.r3.s64 = ctx.r30.s64 + 13724;
	// bl 0x82218a80
	ctx.lr = 0x8279A694;
	sub_82218A80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,4060
	ctx.r3.s64 = ctx.r30.s64 + 4060;
	// bl 0x8213a210
	ctx.lr = 0x8279A6A0;
	sub_8213A210(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,4152
	ctx.r3.s64 = ctx.r30.s64 + 4152;
	// bl 0x8213a210
	ctx.lr = 0x8279A6AC;
	sub_8213A210(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,4244
	ctx.r3.s64 = ctx.r30.s64 + 4244;
	// bl 0x8213a210
	ctx.lr = 0x8279A6B8;
	sub_8213A210(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,4336
	ctx.r3.s64 = ctx.r30.s64 + 4336;
	// bl 0x8213a210
	ctx.lr = 0x8279A6C4;
	sub_8213A210(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,4428
	ctx.r3.s64 = ctx.r30.s64 + 4428;
	// bl 0x8213a210
	ctx.lr = 0x8279A6D0;
	sub_8213A210(ctx, base);
	// stw r27,4540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4540, ctx.r27.u32);
	// stw r27,4544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4544, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279A6E0"))) PPC_WEAK_FUNC(sub_8279A6E0);
PPC_FUNC_IMPL(__imp__sub_8279A6E0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-5044
	ctx.r10.s64 = ctx.r11.s64 + -5044;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82799a18
	ctx.lr = 0x8279A70C;
	sub_82799A18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827986d8
	ctx.lr = 0x8279A714;
	sub_827986D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279a744
	if (ctx.cr6.eq) goto loc_8279A744;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r11,-6028
	ctx.r9.s64 = ctx.r11.s64 + -6028;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcacb0
	ctx.lr = 0x8279A740;
	sub_82BCACB0(ctx, base);
	// b 0x8279a74c
	goto loc_8279A74C;
loc_8279A744:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279a368
	ctx.lr = 0x8279A74C;
	sub_8279A368(ctx, base);
loc_8279A74C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279a75c
	if (ctx.cr6.eq) goto loc_8279A75C;
	// bl 0x82120a70
	ctx.lr = 0x8279A75C;
	sub_82120A70(ctx, base);
loc_8279A75C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82751550
	ctx.lr = 0x8279A768;
	sub_82751550(ctx, base);
	// bl 0x827514c8
	ctx.lr = 0x8279A76C;
	sub_827514C8(ctx, base);
	// bl 0x82796ad0
	ctx.lr = 0x8279A770;
	sub_82796AD0(ctx, base);
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// bne 0x8279a784
	if (!ctx.cr0.eq) goto loc_8279A784;
	// bl 0x82795990
	ctx.lr = 0x8279A784;
	sub_82795990(ctx, base);
loc_8279A784:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r31,4428
	ctx.r30.s64 = ctx.r31.s64 + 4428;
	// addi r10,r11,-5028
	ctx.r10.s64 = ctx.r11.s64 + -5028;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,4428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4428, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a210
	ctx.lr = 0x8279A7A0;
	sub_8213A210(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82492d68
	ctx.lr = 0x8279A7A8;
	sub_82492D68(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r7,r9,-5032
	ctx.r7.s64 = ctx.r9.s64 + -5032;
	// addi r6,r8,-5036
	ctx.r6.s64 = ctx.r8.s64 + -5036;
	// stw r7,4436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4436, ctx.r7.u32);
	// addi r30,r31,4336
	ctx.r30.s64 = ctx.r31.s64 + 4336;
	// stw r6,4336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4336, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a210
	ctx.lr = 0x8279A7D0;
	sub_8213A210(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82492d68
	ctx.lr = 0x8279A7D8;
	sub_82492D68(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r3,r5,-5032
	ctx.r3.s64 = ctx.r5.s64 + -5032;
	// addi r11,r4,-5036
	ctx.r11.s64 = ctx.r4.s64 + -5036;
	// stw r3,4344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4344, ctx.r3.u32);
	// addi r30,r31,4244
	ctx.r30.s64 = ctx.r31.s64 + 4244;
	// stw r11,4244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4244, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a210
	ctx.lr = 0x8279A800;
	sub_8213A210(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82492d68
	ctx.lr = 0x8279A808;
	sub_82492D68(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r10,-5032
	ctx.r8.s64 = ctx.r10.s64 + -5032;
	// addi r7,r9,-5036
	ctx.r7.s64 = ctx.r9.s64 + -5036;
	// stw r8,4252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4252, ctx.r8.u32);
	// addi r30,r31,4152
	ctx.r30.s64 = ctx.r31.s64 + 4152;
	// stw r7,4152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4152, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a210
	ctx.lr = 0x8279A830;
	sub_8213A210(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82492d68
	ctx.lr = 0x8279A838;
	sub_82492D68(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r4,r6,-5032
	ctx.r4.s64 = ctx.r6.s64 + -5032;
	// addi r3,r5,-5036
	ctx.r3.s64 = ctx.r5.s64 + -5036;
	// stw r4,4160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4160, ctx.r4.u32);
	// addi r30,r31,4060
	ctx.r30.s64 = ctx.r31.s64 + 4060;
	// stw r3,4060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4060, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213a210
	ctx.lr = 0x8279A860;
	sub_8213A210(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82492d68
	ctx.lr = 0x8279A868;
	sub_82492D68(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-5032
	ctx.r10.s64 = ctx.r11.s64 + -5032;
	// stw r10,4068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4068, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8279A88C"))) PPC_WEAK_FUNC(sub_8279A88C);
PPC_FUNC_IMPL(__imp__sub_8279A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A890"))) PPC_WEAK_FUNC(sub_8279A890);
PPC_FUNC_IMPL(__imp__sub_8279A890) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,13868
	ctx.r3.s64 = 13868;
	// bl 0x82120040
	ctx.lr = 0x8279A8B8;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279a90c
	if (ctx.cr6.eq) goto loc_8279A90C;
	// bl 0x82799d58
	ctx.lr = 0x8279A8C4;
	sub_82799D58(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279a8f4
	if (ctx.cr6.eq) goto loc_8279A8F4;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x821439b0
	ctx.lr = 0x8279A8F0;
	sub_821439B0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8279A8F4:
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
loc_8279A90C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8279a8f4
	goto loc_8279A8F4;
}

__attribute__((alias("__imp__sub_8279A914"))) PPC_WEAK_FUNC(sub_8279A914);
PPC_FUNC_IMPL(__imp__sub_8279A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279A918"))) PPC_WEAK_FUNC(sub_8279A918);
PPC_FUNC_IMPL(__imp__sub_8279A918) {
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
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8279a93c
	if (ctx.cr6.eq) goto loc_8279A93C;
	// bl 0x827986d8
	ctx.lr = 0x8279A934;
	sub_827986D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8279a948
	if (!ctx.cr6.eq) goto loc_8279A948;
loc_8279A93C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8279a890
	ctx.lr = 0x8279A948;
	sub_8279A890(ctx, base);
loc_8279A948:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279A958"))) PPC_WEAK_FUNC(sub_8279A958);
PPC_FUNC_IMPL(__imp__sub_8279A958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8279A960;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8279b50c
	if (!ctx.cr6.eq) goto loc_8279B50C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8279b504
	if (ctx.cr6.eq) goto loc_8279B504;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8279b504
	if (ctx.cr6.eq) goto loc_8279B504;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r27,12456(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12456);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// beq cr6,0x8279a9e4
	if (ctx.cr6.eq) goto loc_8279A9E4;
	// lbz r9,113(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// stb r9,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r9.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8279A9E4:
	// cmpwi cr6,r21,9
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 9, ctx.xer);
	// ble cr6,0x8279aa3c
	if (!ctx.cr6.gt) goto loc_8279AA3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-5832
	ctx.r4.s64 = ctx.r11.s64 + -5832;
	// bl 0x82219e28
	ctx.lr = 0x8279AA00;
	sub_82219E28(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r10,-5780
	ctx.r5.s64 = ctx.r10.s64 + -5780;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279AA18;
	sub_82BCAC98(ctx, base);
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279b548
	if (ctx.cr6.eq) goto loc_8279B548;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x8279AA30;
	sub_82219130(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
loc_8279AA3C:
	// bge cr6,0x8279aa74
	if (!ctx.cr6.lt) goto loc_8279AA74;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,12476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279aa68
	if (ctx.cr6.eq) goto loc_8279AA68;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x8279aa6c
	if (ctx.cr6.eq) goto loc_8279AA6C;
loc_8279AA68:
	// li r11,12
	ctx.r11.s64 = 12;
loc_8279AA6C:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x8279aaf0
	goto loc_8279AAF0;
loc_8279AA74:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// beq cr6,0x8279aac0
	if (ctx.cr6.eq) goto loc_8279AAC0;
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
loc_8279AAC0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,12476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279aae8
	if (ctx.cr6.eq) goto loc_8279AAE8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x8279aaec
	if (ctx.cr6.eq) goto loc_8279AAEC;
loc_8279AAE8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8279AAEC:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8279AAF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stw r11,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r11.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// beq cr6,0x8279ab40
	if (ctx.cr6.eq) goto loc_8279AB40;
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
loc_8279AB40:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r21,8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 8, ctx.xer);
	// stw r10,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r10.u32);
	// blt cr6,0x8279aba8
	if (ctx.cr6.lt) goto loc_8279ABA8;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stw r7,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r7.u32);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// beq cr6,0x8279aba0
	if (ctx.cr6.eq) goto loc_8279ABA0;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r8,114(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
loc_8279ABA0:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r11.u32);
loc_8279ABA8:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,780
	ctx.r3.s64 = ctx.r1.s64 + 780;
	// bl 0x821204c0
	ctx.lr = 0x8279ABB4;
	sub_821204C0(ctx, base);
	// stfs f1,4520(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4520, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,780
	ctx.r3.s64 = ctx.r1.s64 + 780;
	// bl 0x821204c0
	ctx.lr = 0x8279ABC4;
	sub_821204C0(ctx, base);
	// lwz r11,780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// stfs f1,4524(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4524, temp.u32);
	// cmpwi cr6,r21,5
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 5, ctx.xer);
	// blt cr6,0x8279abdc
	if (ctx.cr6.lt) goto loc_8279ABDC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r11.u32);
loc_8279ABDC:
	// li r23,3
	ctx.r23.s64 = 3;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// blt cr6,0x8279ad30
	if (ctx.cr6.lt) goto loc_8279AD30;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// beq cr6,0x8279ac34
	if (ctx.cr6.eq) goto loc_8279AC34;
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
loc_8279AC34:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// beq cr6,0x8279ac84
	if (ctx.cr6.eq) goto loc_8279AC84;
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
loc_8279AC84:
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// beq cr6,0x8279acd4
	if (ctx.cr6.eq) goto loc_8279ACD4;
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
loc_8279ACD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stw r11,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r11.u32);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// beq cr6,0x8279ad28
	if (ctx.cr6.eq) goto loc_8279AD28;
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r8,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r8.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
loc_8279AD28:
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8279ad40
	goto loc_8279AD40;
loc_8279AD30:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r28,26
	ctx.r28.s64 = 26;
	// li r26,9
	ctx.r26.s64 = 9;
	// li r31,16
	ctx.r31.s64 = 16;
loc_8279AD40:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8279ad6c
	if (ctx.cr6.eq) goto loc_8279AD6C;
	// addi r29,r25,4552
	ctx.r29.s64 = ctx.r25.s64 + 4552;
loc_8279AD4C:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82795690
	ctx.lr = 0x8279AD5C;
	sub_82795690(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,260
	ctx.r29.s64 = ctx.r29.s64 + 260;
	// bne 0x8279ad4c
	if (!ctx.cr0.eq) goto loc_8279AD4C;
	// lwz r11,780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
loc_8279AD6C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8279adc0
	if (ctx.cr6.eq) goto loc_8279ADC0;
	// addi r7,r25,5332
	ctx.r7.s64 = ctx.r25.s64 + 5332;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_8279AD7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// lhz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r6,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r6.u16);
	// beq cr6,0x8279ada8
	if (ctx.cr6.eq) goto loc_8279ADA8;
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r10.u8);
loc_8279ADA8:
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bne 0x8279ad7c
	if (!ctx.cr0.eq) goto loc_8279AD7C;
	// stw r11,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r11.u32);
loc_8279ADC0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8279ae14
	if (ctx.cr6.eq) goto loc_8279AE14;
	// addi r7,r25,5384
	ctx.r7.s64 = ctx.r25.s64 + 5384;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_8279ADD0:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lhz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r6,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r6.u16);
	// beq cr6,0x8279adfc
	if (ctx.cr6.eq) goto loc_8279ADFC;
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r10.u8);
loc_8279ADFC:
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bne 0x8279add0
	if (!ctx.cr0.eq) goto loc_8279ADD0;
	// stw r11,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r11.u32);
loc_8279AE14:
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// bge cr6,0x8279ae44
	if (!ctx.cr6.lt) goto loc_8279AE44;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8279AE24:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82799968
	ctx.lr = 0x8279AE34;
	sub_82799968(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,164
	ctx.r29.s64 = ctx.r29.s64 + 164;
	// bne 0x8279ae24
	if (!ctx.cr0.eq) goto loc_8279AE24;
	// lwz r11,780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
loc_8279AE44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279ae70
	if (ctx.cr6.eq) goto loc_8279AE70;
	// addi r30,r25,5404
	ctx.r30.s64 = ctx.r25.s64 + 5404;
loc_8279AE50:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279a128
	ctx.lr = 0x8279AE60;
	sub_8279A128(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,260
	ctx.r30.s64 = ctx.r30.s64 + 260;
	// bne 0x8279ae50
	if (!ctx.cr0.eq) goto loc_8279AE50;
	// lwz r11,780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
loc_8279AE70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r8,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r8.u16);
	// beq cr6,0x8279aea0
	if (ctx.cr6.eq) goto loc_8279AEA0;
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r10.u8);
	// lhz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
loc_8279AEA0:
	// sth r8,44(r25)
	PPC_STORE_U16(ctx.r25.u32 + 44, ctx.r8.u16);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lhz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r7,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r7.u16);
	// beq cr6,0x8279aed0
	if (ctx.cr6.eq) goto loc_8279AED0;
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r10.u8);
loc_8279AED0:
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// sth r10,46(r25)
	PPC_STORE_U16(ctx.r25.u32 + 46, ctx.r10.u16);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r9.u8);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// beq cr6,0x8279af24
	if (ctx.cr6.eq) goto loc_8279AF24;
	// lbz r7,113(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r6,114(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
loc_8279AF24:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r10,4536(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4536, ctx.r10.u32);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lhz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r7,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r7.u16);
	// beq cr6,0x8279af58
	if (ctx.cr6.eq) goto loc_8279AF58;
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r10,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r10.u8);
loc_8279AF58:
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// sth r10,52(r25)
	PPC_STORE_U16(ctx.r25.u32 + 52, ctx.r10.u16);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// beq cr6,0x8279afb4
	if (ctx.cr6.eq) goto loc_8279AFB4;
	// lbz r7,113(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r6,114(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8279AFB4:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// beq cr6,0x8279b004
	if (ctx.cr6.eq) goto loc_8279B004;
	// lbz r7,113(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r6,114(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8279B004:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// stb r6,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r6.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// beq cr6,0x8279b054
	if (ctx.cr6.eq) goto loc_8279B054;
	// lbz r7,113(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r6,114(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8279B054:
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stw r30,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r30.u32);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// beq cr6,0x8279b0a8
	if (ctx.cr6.eq) goto loc_8279B0A8;
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r7,114(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r7,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8279B0A8:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 * 132;
	// bl 0x82120040
	ctx.lr = 0x8279B0B8;
	sub_82120040(ctx, base);
	// stw r3,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r3.u32);
	// lhz r11,46(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 46);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x8279B0D4;
	sub_82120040(ctx, base);
	// stw r3,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r3.u32);
	// lwz r9,4536(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4536);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82120040
	ctx.lr = 0x8279B0E8;
	sub_82120040(ctx, base);
	// stw r3,4528(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4528, ctx.r3.u32);
	// lhz r8,52(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r8,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// bl 0x82120040
	ctx.lr = 0x8279B0FC;
	sub_82120040(ctx, base);
	// lhz r7,44(r25)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r25.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r3.u32);
	// mulli r5,r7,132
	ctx.r5.s64 = ctx.r7.s64 * 132;
	// lwz r3,32(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// bl 0x82218a80
	ctx.lr = 0x8279B114;
	sub_82218A80(ctx, base);
	// lhz r11,46(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 46);
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82218a80
	ctx.lr = 0x8279B130;
	sub_82218A80(ctx, base);
	// lwz r5,4536(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4536);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4528(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4528);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82218a80
	ctx.lr = 0x8279B144;
	sub_82218A80(ctx, base);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bgt cr6,0x8279b158
	if (ctx.cr6.gt) goto loc_8279B158;
	// li r5,2
	ctx.r5.s64 = 2;
	// ble cr6,0x8279b160
	if (!ctx.cr6.gt) goto loc_8279B160;
loc_8279B158:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8279b164
	goto loc_8279B164;
loc_8279B160:
	// li r4,2
	ctx.r4.s64 = 2;
loc_8279B164:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r25,4152
	ctx.r3.s64 = ctx.r25.s64 + 4152;
	// lfs f31,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82139b68
	ctx.lr = 0x8279B178;
	sub_82139B68(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bgt cr6,0x8279b18c
	if (ctx.cr6.gt) goto loc_8279B18C;
	// li r5,2
	ctx.r5.s64 = 2;
	// ble cr6,0x8279b194
	if (!ctx.cr6.gt) goto loc_8279B194;
loc_8279B18C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8279b198
	goto loc_8279B198;
loc_8279B194:
	// li r4,2
	ctx.r4.s64 = 2;
loc_8279B198:
	// addi r3,r25,4244
	ctx.r3.s64 = ctx.r25.s64 + 4244;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82139ca0
	ctx.lr = 0x8279B1A4;
	sub_82139CA0(ctx, base);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bgt cr6,0x8279b1b8
	if (ctx.cr6.gt) goto loc_8279B1B8;
	// li r5,2
	ctx.r5.s64 = 2;
	// ble cr6,0x8279b1c0
	if (!ctx.cr6.gt) goto loc_8279B1C0;
loc_8279B1B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8279b1c4
	goto loc_8279B1C4;
loc_8279B1C0:
	// li r4,2
	ctx.r4.s64 = 2;
loc_8279B1C4:
	// addi r3,r25,4336
	ctx.r3.s64 = ctx.r25.s64 + 4336;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82139f70
	ctx.lr = 0x8279B1D0;
	sub_82139F70(ctx, base);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bgt cr6,0x8279b1e4
	if (ctx.cr6.gt) goto loc_8279B1E4;
	// li r5,2
	ctx.r5.s64 = 2;
	// ble cr6,0x8279b1ec
	if (!ctx.cr6.gt) goto loc_8279B1EC;
loc_8279B1E4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x8279b1f0
	goto loc_8279B1F0;
loc_8279B1EC:
	// li r4,2
	ctx.r4.s64 = 2;
loc_8279B1F0:
	// addi r3,r25,4428
	ctx.r3.s64 = ctx.r25.s64 + 4428;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8213a348
	ctx.lr = 0x8279B1FC;
	sub_8213A348(ctx, base);
	// lhz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 44);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279b23c
	if (ctx.cr6.eq) goto loc_8279B23C;
loc_8279B20C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82798b30
	ctx.lr = 0x8279B21C;
	sub_82798B30(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// bl 0x82797d40
	ctx.lr = 0x8279B228;
	sub_82797D40(ctx, base);
	// lhz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 44);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8279b20c
	if (ctx.cr6.lt) goto loc_8279B20C;
	// lwz r30,780(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
loc_8279B23C:
	// lhz r11,46(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 46);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279b304
	if (ctx.cr6.eq) goto loc_8279B304;
loc_8279B24C:
	// lhz r11,42(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 42);
	// lhz r10,46(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 46);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279b2e0
	if (!ctx.cr6.lt) goto loc_8279B2E0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,36(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,42(r25)
	PPC_STORE_U16(ctx.r25.u32 + 42, ctx.r8.u16);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sthx r24,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r24.u16);
	// sth r24,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r24.u16);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// sth r24,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r24.u16);
	// bl 0x82751550
	ctx.lr = 0x8279B28C;
	sub_82751550(ctx, base);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// sth r24,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r24.u16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r24,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r24.u16);
	// stb r5,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r5.u8);
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// beq cr6,0x8279b2cc
	if (ctx.cr6.eq) goto loc_8279B2CC;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82797628
	ctx.lr = 0x8279B2C0;
	sub_82797628(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,4336
	ctx.r3.s64 = ctx.r29.s64 + 4336;
	// bl 0x82139dd8
	ctx.lr = 0x8279B2CC;
	sub_82139DD8(ctx, base);
loc_8279B2CC:
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// sth r24,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// b 0x8279b2e4
	goto loc_8279B2E4;
loc_8279B2E0:
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
loc_8279B2E4:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// bl 0x82797ae8
	ctx.lr = 0x8279B2F0;
	sub_82797AE8(ctx, base);
	// lhz r11,46(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 46);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8279b24c
	if (ctx.cr6.lt) goto loc_8279B24C;
	// lwz r30,780(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
loc_8279B304:
	// lwz r11,4536(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4536);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r7,12456(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4532(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4532, ctx.r11.u32);
	// beq cr6,0x8279b36c
	if (ctx.cr6.eq) goto loc_8279B36C;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_8279B320:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// lhz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r6,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r6.u16);
	// beq cr6,0x8279b34c
	if (ctx.cr6.eq) goto loc_8279B34C;
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
loc_8279B34C:
	// lwz r11,4528(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4528);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// sthx r10,r11,r8
	PPC_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r6,4536(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4536);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8279b320
	if (ctx.cr6.lt) goto loc_8279B320;
loc_8279B36C:
	// lhz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 52);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279b3cc
	if (ctx.cr6.eq) goto loc_8279B3CC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_8279B380:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// lhz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r6,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r6.u16);
	// beq cr6,0x8279b3ac
	if (ctx.cr6.eq) goto loc_8279B3AC;
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
loc_8279B3AC:
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// sthx r10,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r6,52(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 52);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8279b380
	if (ctx.cr6.lt) goto loc_8279B380;
loc_8279B3CC:
	// addi r8,r25,54
	ctx.r8.s64 = ctx.r25.s64 + 54;
	// li r9,2000
	ctx.r9.s64 = 2000;
loc_8279B3D4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// lhz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r6,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r6.u16);
	// beq cr6,0x8279b400
	if (ctx.cr6.eq) goto loc_8279B400;
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
loc_8279B400:
	// lhz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bne 0x8279b3d4
	if (!ctx.cr0.eq) goto loc_8279B3D4;
	// stw r30,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r30.u32);
	// cmpwi cr6,r21,7
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 7, ctx.xer);
	// blt cr6,0x8279b4c8
	if (ctx.cr6.lt) goto loc_8279B4C8;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 2;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r9.u32);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// sth r8,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r8.u16);
	// beq cr6,0x8279b450
	if (ctx.cr6.eq) goto loc_8279B450;
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r11,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
loc_8279B450:
	// lhz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// beq cr6,0x8279b474
	if (ctx.cr6.eq) goto loc_8279B474;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r6,4(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-5744
	ctx.r5.s64 = ctx.r11.s64 + -5744;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279B474;
	sub_82BCAC98(ctx, base);
loc_8279B474:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8279b4f0
	if (ctx.cr6.eq) goto loc_8279B4F0;
loc_8279B480:
	// cmplwi cr6,r31,18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 18, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// blt cr6,0x8279b490
	if (ctx.cr6.lt) goto loc_8279B490;
	// li r11,17
	ctx.r11.s64 = 17;
loc_8279B490:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// addi r3,r11,13724
	ctx.r3.s64 = ctx.r11.s64 + 13724;
	// bl 0x8279a058
	ctx.lr = 0x8279B4A8;
	sub_8279A058(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8279b480
	if (ctx.cr6.lt) goto loc_8279B480;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4544(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4544, ctx.r11.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
loc_8279B4C8:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// blt cr6,0x8279b4f0
	if (ctx.cr6.lt) goto loc_8279B4F0;
	// addi r3,r25,13724
	ctx.r3.s64 = ctx.r25.s64 + 13724;
	// li r31,13
	ctx.r31.s64 = 13;
loc_8279B4D8:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,780
	ctx.r4.s64 = ctx.r1.s64 + 780;
	// bl 0x8279a058
	ctx.lr = 0x8279B4E4;
	sub_8279A058(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne 0x8279b4d8
	if (!ctx.cr0.eq) goto loc_8279B4D8;
loc_8279B4F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4544(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4544, ctx.r11.u32);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
loc_8279B504:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279b518
	if (ctx.cr6.eq) goto loc_8279B518;
loc_8279B50C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-5968
	ctx.r5.s64 = ctx.r11.s64 + -5968;
	// b 0x8279b53c
	goto loc_8279B53C;
loc_8279B518:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8279b52c
	if (!ctx.cr6.eq) goto loc_8279B52C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-5924
	ctx.r5.s64 = ctx.r11.s64 + -5924;
	// b 0x8279b53c
	goto loc_8279B53C;
loc_8279B52C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8279b548
	if (!ctx.cr6.eq) goto loc_8279B548;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-5880
	ctx.r5.s64 = ctx.r11.s64 + -5880;
loc_8279B53C:
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279B548;
	sub_82BCAC98(ctx, base);
loc_8279B548:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279B554"))) PPC_WEAK_FUNC(sub_8279B554);
PPC_FUNC_IMPL(__imp__sub_8279B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B558"))) PPC_WEAK_FUNC(sub_8279B558);
PPC_FUNC_IMPL(__imp__sub_8279B558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8279B560;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8279b580
	if (!ctx.cr6.eq) goto loc_8279B580;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8279B580:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x8279B598;
	sub_82BFD450(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279b668
	if (ctx.cr6.eq) goto loc_8279B668;
	// bl 0x82799a18
	ctx.lr = 0x8279B5AC;
	sub_82799A18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8279b5cc
	if (ctx.cr6.eq) goto loc_8279B5CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827986d8
	ctx.lr = 0x8279B5C0;
	sub_827986D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8279b5e8
	if (!ctx.cr6.eq) goto loc_8279B5E8;
loc_8279B5CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8279a890
	ctx.lr = 0x8279B5DC;
	sub_8279A890(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8279b668
	if (ctx.cr6.eq) goto loc_8279B668;
loc_8279B5E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279a958
	ctx.lr = 0x8279B5F8;
	sub_8279A958(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279b62c
	if (ctx.cr6.eq) goto loc_8279B62C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8279b62c
	if (ctx.cr6.eq) goto loc_8279B62C;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,7008
	ctx.r5.s64 = ctx.r11.s64 + 7008;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82bce5d8
	ctx.lr = 0x8279B62C;
	sub_82BCE5D8(ctx, base);
loc_8279B62C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279b65c
	if (ctx.cr6.eq) goto loc_8279B65C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8279b65c
	if (ctx.cr6.eq) goto loc_8279B65C;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,27808
	ctx.r5.s64 = ctx.r11.s64 + 27808;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82bce5d8
	ctx.lr = 0x8279B65C;
	sub_82BCE5D8(ctx, base);
loc_8279B65C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8279B668:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279B674"))) PPC_WEAK_FUNC(sub_8279B674);
PPC_FUNC_IMPL(__imp__sub_8279B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B678"))) PPC_WEAK_FUNC(sub_8279B678);
PPC_FUNC_IMPL(__imp__sub_8279B678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8279B680;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8279b7ac
	if (ctx.cr6.eq) goto loc_8279B7AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b7ac
	if (ctx.cr6.eq) goto loc_8279B7AC;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b7ac
	if (ctx.cr6.eq) goto loc_8279B7AC;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279b7ac
	if (ctx.cr6.eq) goto loc_8279B7AC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279b7c0
	if (ctx.cr6.eq) goto loc_8279B7C0;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279b71c
	if (ctx.cr6.eq) goto loc_8279B71C;
	// bl 0x8279da98
	ctx.lr = 0x8279B6DC;
	sub_8279DA98(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b708
	if (ctx.cr6.eq) goto loc_8279B708;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b708
	if (ctx.cr6.eq) goto loc_8279B708;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x8279b70c
	goto loc_8279B70C;
loc_8279B708:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8279B70C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279B71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8279B71C:
	// lwz r29,168(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82799a18
	ctx.lr = 0x8279B724;
	sub_82799A18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82799560
	ctx.lr = 0x8279B72C;
	sub_82799560(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82be5600
	ctx.lr = 0x8279B73C;
	sub_82BE5600(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// beq cr6,0x8279b75c
	if (ctx.cr6.eq) goto loc_8279B75C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x8279b764
	goto loc_8279B764;
loc_8279B75C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bde908
	ctx.lr = 0x8279B764;
	sub_82BDE908(ctx, base);
loc_8279B764:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b7c0
	if (ctx.cr6.eq) goto loc_8279B7C0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b7c0
	if (ctx.cr6.eq) goto loc_8279B7C0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279b7c0
	if (ctx.cr6.eq) goto loc_8279B7C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279B7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_8279B7AC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-6096
	ctx.r5.s64 = ctx.r11.s64 + -6096;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279B7C0;
	sub_82BCAC98(ctx, base);
loc_8279B7C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279B7C8"))) PPC_WEAK_FUNC(sub_8279B7C8);
PPC_FUNC_IMPL(__imp__sub_8279B7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8279B7D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8279b934
	if (ctx.cr6.eq) goto loc_8279B934;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b934
	if (ctx.cr6.eq) goto loc_8279B934;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279b934
	if (ctx.cr6.eq) goto loc_8279B934;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b934
	if (ctx.cr6.eq) goto loc_8279B934;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b934
	if (ctx.cr6.eq) goto loc_8279B934;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279b934
	if (ctx.cr6.eq) goto loc_8279B934;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8279b8a4
	if (ctx.cr6.eq) goto loc_8279B8A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b8a4
	if (ctx.cr6.eq) goto loc_8279B8A4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b8a4
	if (ctx.cr6.eq) goto loc_8279B8A4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279b8a4
	if (ctx.cr6.eq) goto loc_8279B8A4;
	// bl 0x8279da98
	ctx.lr = 0x8279B864;
	sub_8279DA98(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b890
	if (ctx.cr6.eq) goto loc_8279B890;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b890
	if (ctx.cr6.eq) goto loc_8279B890;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x8279b894
	goto loc_8279B894;
loc_8279B890:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8279B894:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279B8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8279B8A4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r29,168(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8279b8cc
	if (ctx.cr6.eq) goto loc_8279B8CC;
	// bl 0x82799a18
	ctx.lr = 0x8279B8C4;
	sub_82799A18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82799560
	ctx.lr = 0x8279B8CC;
	sub_82799560(ctx, base);
loc_8279B8CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be5698
	ctx.lr = 0x8279B8E0;
	sub_82BE5698(ctx, base);
	// lwz r10,168(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8279b934
	if (ctx.cr6.eq) goto loc_8279B934;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279b934
	if (ctx.cr6.eq) goto loc_8279B934;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279b934
	if (ctx.cr6.eq) goto loc_8279B934;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279B934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8279B934:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279B93C"))) PPC_WEAK_FUNC(sub_8279B93C);
PPC_FUNC_IMPL(__imp__sub_8279B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B940"))) PPC_WEAK_FUNC(sub_8279B940);
PPC_FUNC_IMPL(__imp__sub_8279B940) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B950"))) PPC_WEAK_FUNC(sub_8279B950);
PPC_FUNC_IMPL(__imp__sub_8279B950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8279b984
	if (!ctx.cr6.eq) goto loc_8279B984;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279b984
	if (ctx.cr6.eq) goto loc_8279B984;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,168(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 168);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
loc_8279B984:
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// addi r9,r3,30
	ctx.r9.s64 = ctx.r3.s64 + 30;
	// lfs f0,29744(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r3,24
	ctx.r7.s64 = ctx.r3.s64 + 24;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r4,65535
	ctx.r11.u64 = ctx.r4.u64 | 65535;
loc_8279B9B0:
	// stfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// sth r11,-2(r9)
	PPC_STORE_U16(ctx.r9.u32 + -2, ctx.r11.u16);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// bne 0x8279b9b0
	if (!ctx.cr0.eq) goto loc_8279B9B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B9DC"))) PPC_WEAK_FUNC(sub_8279B9DC);
PPC_FUNC_IMPL(__imp__sub_8279B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279B9E0"))) PPC_WEAK_FUNC(sub_8279B9E0);
PPC_FUNC_IMPL(__imp__sub_8279B9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-6208
	ctx.r10.s64 = ctx.r11.s64 + -6208;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279B9F0"))) PPC_WEAK_FUNC(sub_8279B9F0);
PPC_FUNC_IMPL(__imp__sub_8279B9F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// lhz r10,42(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 42);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279ba28
	if (!ctx.cr6.lt) goto loc_8279BA28;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279ba28
	if (ctx.cr6.eq) goto loc_8279BA28;
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// blr 
	return;
loc_8279BA28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279BA30"))) PPC_WEAK_FUNC(sub_8279BA30);
PPC_FUNC_IMPL(__imp__sub_8279BA30) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8279ba7c
	if (!ctx.cr6.eq) goto loc_8279BA7C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lhz r10,30(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
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
loc_8279BA7C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8279bacc
	if (!ctx.cr6.eq) goto loc_8279BACC;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8279bacc
	if (ctx.cr6.eq) goto loc_8279BACC;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279bacc
	if (ctx.cr6.eq) goto loc_8279BACC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8279BAA4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82783ca8
	ctx.lr = 0x8279BAAC;
	sub_82783CA8(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82783bc0
	ctx.lr = 0x8279BAB8;
	sub_82783BC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279bae4
	if (ctx.cr6.eq) goto loc_8279BAE4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x8279baa4
	if (ctx.cr6.lt) goto loc_8279BAA4;
loc_8279BACC:
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
loc_8279BAE4:
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

__attribute__((alias("__imp__sub_8279BAFC"))) PPC_WEAK_FUNC(sub_8279BAFC);
PPC_FUNC_IMPL(__imp__sub_8279BAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279BB00"))) PPC_WEAK_FUNC(sub_8279BB00);
PPC_FUNC_IMPL(__imp__sub_8279BB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8279bb48
	if (ctx.cr6.eq) goto loc_8279BB48;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-30376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30376);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8279bb48
	if (!ctx.cr6.lt) goto loc_8279BB48;
	// addi r11,r4,33
	ctx.r11.s64 = ctx.r4.s64 + 33;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8279BB48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279BB50"))) PPC_WEAK_FUNC(sub_8279BB50);
PPC_FUNC_IMPL(__imp__sub_8279BB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r31,r11,-6208
	ctx.r31.s64 = ctx.r11.s64 + -6208;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r7,65535
	ctx.r11.u64 = ctx.r7.u64 | 65535;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// sth r11,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r6,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r6.u8);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// sth r11,76(r3)
	PPC_STORE_U16(ctx.r3.u32 + 76, ctx.r11.u16);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// sth r11,78(r3)
	PPC_STORE_U16(ctx.r3.u32 + 78, ctx.r11.u16);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stb r6,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r6.u8);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// addi r9,r3,132
	ctx.r9.s64 = ctx.r3.s64 + 132;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// addi r7,r3,24
	ctx.r7.s64 = ctx.r3.s64 + 24;
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// lfs f13,-30372(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -30372);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// stfs f13,148(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stw r31,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r31.u32);
	// stb r10,160(r3)
	PPC_STORE_U8(ctx.r3.u32 + 160, ctx.r10.u8);
loc_8279BC0C:
	// stfs f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8279bc0c
	if (!ctx.cr0.eq) goto loc_8279BC0C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8279bc64
	if (ctx.cr6.eq) goto loc_8279BC64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279bc64
	if (ctx.cr6.eq) goto loc_8279BC64;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279bc64
	if (ctx.cr6.eq) goto loc_8279BC64;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_8279BC64:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279BC6C"))) PPC_WEAK_FUNC(sub_8279BC6C);
PPC_FUNC_IMPL(__imp__sub_8279BC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279BC70"))) PPC_WEAK_FUNC(sub_8279BC70);
PPC_FUNC_IMPL(__imp__sub_8279BC70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279bc80
	if (ctx.cr6.eq) goto loc_8279BC80;
	// b 0x82799118
	sub_82799118(ctx, base);
	return;
loc_8279BC80:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279BC88"))) PPC_WEAK_FUNC(sub_8279BC88);
PPC_FUNC_IMPL(__imp__sub_8279BC88) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r4,140(r5)
	PPC_STORE_U32(ctx.r5.u32 + 140, ctx.r4.u32);
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// bl 0x82bdb6c8
	ctx.lr = 0x8279BCA4;
	sub_82BDB6C8(ctx, base);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8279BCB8;
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

__attribute__((alias("__imp__sub_8279BCC8"))) PPC_WEAK_FUNC(sub_8279BCC8);
PPC_FUNC_IMPL(__imp__sub_8279BCC8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8212d360
	ctx.lr = 0x8279BCDC;
	sub_8212D360(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279BCF8"))) PPC_WEAK_FUNC(sub_8279BCF8);
PPC_FUNC_IMPL(__imp__sub_8279BCF8) {
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
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8279bd5c
	if (!ctx.cr6.eq) goto loc_8279BD5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279bd54
	if (ctx.cr6.eq) goto loc_8279BD54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279bd54
	if (ctx.cr6.eq) goto loc_8279BD54;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279bd54
	if (ctx.cr6.eq) goto loc_8279BD54;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lhz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// b 0x8279bda0
	goto loc_8279BDA0;
loc_8279BD54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8279bda0
	goto loc_8279BDA0;
loc_8279BD5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279ba30
	ctx.lr = 0x8279BD68;
	sub_8279BA30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279bd9c
	if (ctx.cr6.eq) goto loc_8279BD9C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// bl 0x82783ca8
	ctx.lr = 0x8279BD8C;
	sub_82783CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82783d08
	ctx.lr = 0x8279BD94;
	sub_82783D08(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x8279bda0
	goto loc_8279BDA0;
loc_8279BD9C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8279BDA0:
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

__attribute__((alias("__imp__sub_8279BDB8"))) PPC_WEAK_FUNC(sub_8279BDB8);
PPC_FUNC_IMPL(__imp__sub_8279BDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8279BDC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,30(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 30);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8279bf2c
	if (ctx.cr6.eq) goto loc_8279BF2C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279be20
	if (!ctx.cr6.lt) goto loc_8279BE20;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279be20
	if (ctx.cr6.eq) goto loc_8279BE20;
	// lhz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x8279be24
	goto loc_8279BE24;
loc_8279BE20:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8279BE24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279bcf8
	ctx.lr = 0x8279BE30;
	sub_8279BCF8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8279bf2c
	if (!ctx.cr6.eq) goto loc_8279BF2C;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8279bf14
	if (ctx.cr6.eq) goto loc_8279BF14;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279bf14
	if (ctx.cr6.eq) goto loc_8279BF14;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8279bec8
	if (!ctx.cr6.eq) goto loc_8279BEC8;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8279bea0
	if (!ctx.cr6.eq) goto loc_8279BEA0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,52(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,60(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_8279BEA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdebd0
	ctx.lr = 0x8279BEAC;
	sub_82BDEBD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bdeb38
	ctx.lr = 0x8279BEB8;
	sub_82BDEB38(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x8279bf08
	goto loc_8279BF08;
loc_8279BEC8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279ba30
	ctx.lr = 0x8279BED4;
	sub_8279BA30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279bf14
	if (ctx.cr6.eq) goto loc_8279BF14;
	// lbz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 36);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82783ca8
	ctx.lr = 0x8279BEE8;
	sub_82783CA8(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82783f38
	ctx.lr = 0x8279BEF4;
	sub_82783F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82783e98
	ctx.lr = 0x8279BEFC;
	sub_82783E98(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8279BF08:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f12.f64));
loc_8279BF14:
	// lfs f13,52(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,60(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_8279BF2C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279BF3C"))) PPC_WEAK_FUNC(sub_8279BF3C);
PPC_FUNC_IMPL(__imp__sub_8279BF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279BF40"))) PPC_WEAK_FUNC(sub_8279BF40);
PPC_FUNC_IMPL(__imp__sub_8279BF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8279BF48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8279bf90
	if (!ctx.cr6.gt) goto loc_8279BF90;
	// addi r31,r29,64
	ctx.r31.s64 = ctx.r29.s64 + 64;
loc_8279BF64:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279bdb8
	ctx.lr = 0x8279BF78;
	sub_8279BDB8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8279bf64
	if (ctx.cr6.lt) goto loc_8279BF64;
loc_8279BF90:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279c054
	if (ctx.cr6.eq) goto loc_8279C054;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x8279c054
	if (!ctx.cr6.gt) goto loc_8279C054;
	// addi r27,r29,132
	ctx.r27.s64 = ctx.r29.s64 + 132;
	// addi r28,r29,30
	ctx.r28.s64 = ctx.r29.s64 + 30;
loc_8279BFBC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8279c034
	if (ctx.cr6.eq) goto loc_8279C034;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8279c034
	if (ctx.cr6.eq) goto loc_8279C034;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c000
	if (!ctx.cr6.lt) goto loc_8279C000;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r11,r10,132
	ctx.r11.s64 = ctx.r10.s64 * 132;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c000
	if (ctx.cr6.eq) goto loc_8279C000;
	// lhz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x8279c004
	goto loc_8279C004;
loc_8279C000:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8279C004:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279bcf8
	ctx.lr = 0x8279C010;
	sub_8279BCF8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8279c034
	if (!ctx.cr6.eq) goto loc_8279C034;
	// lfs f0,38(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 38);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,34(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 34);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8279c038
	if (ctx.cr6.gt) goto loc_8279C038;
loc_8279C034:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8279C038:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8279bfbc
	if (ctx.cr6.lt) goto loc_8279BFBC;
loc_8279C054:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279C05C"))) PPC_WEAK_FUNC(sub_8279C05C);
PPC_FUNC_IMPL(__imp__sub_8279C05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279C060"))) PPC_WEAK_FUNC(sub_8279C060);
PPC_FUNC_IMPL(__imp__sub_8279C060) {
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
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// lhz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279c0a0
	if (!ctx.cr6.lt) goto loc_8279C0A0;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mulli r9,r10,132
	ctx.r9.s64 = ctx.r10.s64 * 132;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8279c0b8
	if (!ctx.cr6.eq) goto loc_8279C0B8;
loc_8279C0A0:
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_8279C0B8:
	// lhz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279c0dc
	if (!ctx.cr6.lt) goto loc_8279C0DC;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c0dc
	if (ctx.cr6.eq) goto loc_8279C0DC;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x8279c0e0
	goto loc_8279C0E0;
loc_8279C0DC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279C0E0:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8279c128
	if (ctx.cr6.eq) goto loc_8279C128;
	// lhz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279c110
	if (!ctx.cr6.lt) goto loc_8279C110;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c110
	if (ctx.cr6.eq) goto loc_8279C110;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x8279c114
	goto loc_8279C114;
loc_8279C110:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279C114:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82be4f40
	ctx.lr = 0x8279C120;
	sub_82BE4F40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8279c150
	if (!ctx.cr6.eq) goto loc_8279C150;
loc_8279C128:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x82798bd0
	ctx.lr = 0x8279C138;
	sub_82798BD0(ctx, base);
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
loc_8279C150:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
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

__attribute__((alias("__imp__sub_8279C168"))) PPC_WEAK_FUNC(sub_8279C168);
PPC_FUNC_IMPL(__imp__sub_8279C168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r8,30(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 30);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x8279c204
	if (ctx.cr6.eq) goto loc_8279C204;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c1b4
	if (!ctx.cr6.lt) goto loc_8279C1B4;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279c1b4
	if (ctx.cr6.eq) goto loc_8279C1B4;
	// lhz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// b 0x8279c1b8
	goto loc_8279C1B8;
loc_8279C1B4:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8279C1B8:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8279c204
	if (ctx.cr6.eq) goto loc_8279C204;
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c1f0
	if (!ctx.cr6.lt) goto loc_8279C1F0;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r11,r10,132
	ctx.r11.s64 = ctx.r10.s64 * 132;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c1f0
	if (ctx.cr6.eq) goto loc_8279C1F0;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x8279c1f4
	goto loc_8279C1F4;
loc_8279C1F0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279C1F4:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82be5008
	sub_82BE5008(ctx, base);
	return;
loc_8279C204:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279C210"))) PPC_WEAK_FUNC(sub_8279C210);
PPC_FUNC_IMPL(__imp__sub_8279C210) {
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
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r10,30(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c264
	if (!ctx.cr6.lt) goto loc_8279C264;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c264
	if (ctx.cr6.eq) goto loc_8279C264;
	// lhz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x8279c268
	goto loc_8279C268;
loc_8279C264:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8279C268:
	// bl 0x8279bcf8
	ctx.lr = 0x8279C26C;
	sub_8279BCF8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8279c284
	if (!ctx.cr6.eq) goto loc_8279C284;
	// lfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8279c28c
	goto loc_8279C28C;
loc_8279C284:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
loc_8279C28C:
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

__attribute__((alias("__imp__sub_8279C2A4"))) PPC_WEAK_FUNC(sub_8279C2A4);
PPC_FUNC_IMPL(__imp__sub_8279C2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279C2A8"))) PPC_WEAK_FUNC(sub_8279C2A8);
PPC_FUNC_IMPL(__imp__sub_8279C2A8) {
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
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r10,30(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c2fc
	if (!ctx.cr6.lt) goto loc_8279C2FC;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c2fc
	if (ctx.cr6.eq) goto loc_8279C2FC;
	// lhz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x8279c300
	goto loc_8279C300;
loc_8279C2FC:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8279C300:
	// bl 0x8279bcf8
	ctx.lr = 0x8279C304;
	sub_8279BCF8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8279c34c
	if (!ctx.cr6.eq) goto loc_8279C34C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f13,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-30728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f1,f10,f0,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// b 0x8279c354
	goto loc_8279C354;
loc_8279C34C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
loc_8279C354:
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

__attribute__((alias("__imp__sub_8279C36C"))) PPC_WEAK_FUNC(sub_8279C36C);
PPC_FUNC_IMPL(__imp__sub_8279C36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279C370"))) PPC_WEAK_FUNC(sub_8279C370);
PPC_FUNC_IMPL(__imp__sub_8279C370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8279C378;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8221ad18
	ctx.lr = 0x8279C380;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// beq cr6,0x8279c46c
	if (ctx.cr6.eq) goto loc_8279C46C;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279c46c
	if (ctx.cr6.eq) goto loc_8279C46C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8279c210
	ctx.lr = 0x8279C3AC;
	sub_8279C210(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x8279c3c0
	if (!ctx.cr6.lt) goto loc_8279C3C0;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// b 0x8279c3c4
	goto loc_8279C3C4;
loc_8279C3C0:
	// fmr f29,f2
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f2.f64;
loc_8279C3C4:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x8279c3d4
	if (!ctx.cr6.gt) goto loc_8279C3D4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x8279c3d8
	goto loc_8279C3D8;
loc_8279C3D4:
	// fmr f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f2.f64;
loc_8279C3D8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r29,30(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 30);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821398b8
	ctx.lr = 0x8279C3FC;
	sub_821398B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279c46c
	if (ctx.cr6.eq) goto loc_8279C46C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f30,27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f30.f64 = double(temp.f32);
loc_8279C40C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82799078
	ctx.lr = 0x8279C41C;
	sub_82799078(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x8279c454
	if (ctx.cr6.eq) goto loc_8279C454;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// blt cr6,0x8279c454
	if (ctx.cr6.lt) goto loc_8279C454;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x8279c444
	if (ctx.cr6.lt) goto loc_8279C444;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8279c454
	if (!ctx.cr6.eq) goto loc_8279C454;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bne cr6,0x8279c454
	if (!ctx.cr6.eq) goto loc_8279C454;
loc_8279C444:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82798ff8
	ctx.lr = 0x8279C454;
	sub_82798FF8(ctx, base);
loc_8279C454:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x821398b8
	ctx.lr = 0x8279C464;
	sub_821398B8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8279c40c
	if (ctx.cr6.lt) goto loc_8279C40C;
loc_8279C46C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8221ad64
	ctx.lr = 0x8279C478;
	__restfpr_28(ctx, base);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279C47C"))) PPC_WEAK_FUNC(sub_8279C47C);
PPC_FUNC_IMPL(__imp__sub_8279C47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279C480"))) PPC_WEAK_FUNC(sub_8279C480);
PPC_FUNC_IMPL(__imp__sub_8279C480) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r10,30(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 30);
	// lhz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// lwz r5,13808(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13808);
	// lwz r4,13804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13804);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8279c4e8
	if (!ctx.cr6.lt) goto loc_8279C4E8;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r11,r10,132
	ctx.r11.s64 = ctx.r10.s64 * 132;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279c4e8
	if (ctx.cr6.eq) goto loc_8279C4E8;
	// bl 0x827973b8
	ctx.lr = 0x8279C4E0;
	sub_827973B8(ctx, base);
	// fmr f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64;
	// b 0x8279c4f0
	goto loc_8279C4F0;
loc_8279C4E8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f9,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f9.f64 = double(temp.f32);
loc_8279C4F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,4520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4520);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8279c2a8
	ctx.lr = 0x8279C50C;
	sub_8279C2A8(ctx, base);
	// fmuls f7,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f1,f7
	ctx.cr6.compare(ctx.f1.f64, ctx.f7.f64);
	// bge cr6,0x8279c520
	if (!ctx.cr6.lt) goto loc_8279C520;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8279C520:
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

__attribute__((alias("__imp__sub_8279C538"))) PPC_WEAK_FUNC(sub_8279C538);
PPC_FUNC_IMPL(__imp__sub_8279C538) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c580
	if (!ctx.cr6.lt) goto loc_8279C580;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c580
	if (ctx.cr6.eq) goto loc_8279C580;
	// lhz r11,106(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 106);
	// b 0x8279c584
	goto loc_8279C584;
loc_8279C580:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279C584:
	// lhz r9,42(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 42);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c5b8
	if (!ctx.cr6.lt) goto loc_8279C5B8;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c5b8
	if (ctx.cr6.eq) goto loc_8279C5B8;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// b 0x8279c5bc
	goto loc_8279C5BC;
loc_8279C5B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8279C5BC:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82751550
	ctx.lr = 0x8279C5C4;
	sub_82751550(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279c5e8
	if (!ctx.cr6.lt) goto loc_8279C5E8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 * 88;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x8279C5E8;
	sub_82219130(ctx, base);
loc_8279C5E8:
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

__attribute__((alias("__imp__sub_8279C600"))) PPC_WEAK_FUNC(sub_8279C600);
PPC_FUNC_IMPL(__imp__sub_8279C600) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 40);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c648
	if (!ctx.cr6.lt) goto loc_8279C648;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c648
	if (ctx.cr6.eq) goto loc_8279C648;
	// lhz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// b 0x8279c64c
	goto loc_8279C64C;
loc_8279C648:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279C64C:
	// lhz r9,42(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 42);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c680
	if (!ctx.cr6.lt) goto loc_8279C680;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c680
	if (ctx.cr6.eq) goto loc_8279C680;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// b 0x8279c684
	goto loc_8279C684;
loc_8279C680:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8279C684:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82751550
	ctx.lr = 0x8279C68C;
	sub_82751550(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279c6b0
	if (!ctx.cr6.lt) goto loc_8279C6B0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 * 88;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x8279C6B0;
	sub_82219130(ctx, base);
loc_8279C6B0:
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

__attribute__((alias("__imp__sub_8279C6C8"))) PPC_WEAK_FUNC(sub_8279C6C8);
PPC_FUNC_IMPL(__imp__sub_8279C6C8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r10,30(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// lwz r5,13808(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13808);
	// lwz r4,13804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13804);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c780
	if (!ctx.cr6.lt) goto loc_8279C780;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279c780
	if (ctx.cr6.eq) goto loc_8279C780;
	// bl 0x82797268
	ctx.lr = 0x8279C728;
	sub_82797268(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279c780
	if (ctx.cr6.eq) goto loc_8279C780;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f31,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f31.f64 = double(temp.f32);
	// lhz r10,30(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// lwz r5,13808(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13808);
	// lwz r4,13804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13804);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c76c
	if (!ctx.cr6.lt) goto loc_8279C76C;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r11,r10,132
	ctx.r11.s64 = ctx.r10.s64 * 132;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279c76c
	if (ctx.cr6.eq) goto loc_8279C76C;
	// bl 0x827973b8
	ctx.lr = 0x8279C768;
	sub_827973B8(ctx, base);
	// b 0x8279c774
	goto loc_8279C774;
loc_8279C76C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
loc_8279C774:
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x8279c784
	if (ctx.cr6.gt) goto loc_8279C784;
loc_8279C780:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8279C784:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8279C7A0"))) PPC_WEAK_FUNC(sub_8279C7A0);
PPC_FUNC_IMPL(__imp__sub_8279C7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8279C7A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279c7f8
	if (ctx.cr6.eq) goto loc_8279C7F8;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8279c7f8
	if (!ctx.cr6.gt) goto loc_8279C7F8;
	// addi r31,r29,68
	ctx.r31.s64 = ctx.r29.s64 + 68;
loc_8279C7D0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f2,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8279c370
	ctx.lr = 0x8279C7E4;
	sub_8279C370(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8279c7d0
	if (ctx.cr6.lt) goto loc_8279C7D0;
loc_8279C7F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279C800"))) PPC_WEAK_FUNC(sub_8279C800);
PPC_FUNC_IMPL(__imp__sub_8279C800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8279C808;
	__savegprlr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r22,r11,r25
	ctx.r22.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lhz r24,30(r22)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r22.u32 + 30);
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279c858
	if (!ctx.cr6.lt) goto loc_8279C858;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r8,r10,132
	ctx.r8.s64 = ctx.r10.s64 * 132;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279c858
	if (ctx.cr6.eq) goto loc_8279C858;
	// lhz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 120);
	// b 0x8279c85c
	goto loc_8279C85C;
loc_8279C858:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8279C85C:
	// lhz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r26,r9,16
	ctx.r26.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r5,13808(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13808);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r4,13804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13804);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8279c8b8
	if (!ctx.cr6.lt) goto loc_8279C8B8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279c8b8
	if (ctx.cr6.eq) goto loc_8279C8B8;
	// bl 0x82797268
	ctx.lr = 0x8279C890;
	sub_82797268(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279c8b8
	if (ctx.cr6.eq) goto loc_8279C8B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8279c480
	ctx.lr = 0x8279C8AC;
	sub_8279C480(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r23,1
	ctx.r23.s64 = 1;
	// bne cr6,0x8279c8bc
	if (!ctx.cr6.eq) goto loc_8279C8BC;
loc_8279C8B8:
	// li r23,0
	ctx.r23.s64 = 0;
loc_8279C8BC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8279c944
	if (ctx.cr6.eq) goto loc_8279C944;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r29,r11,-6324
	ctx.r29.s64 = ctx.r11.s64 + -6324;
loc_8279C8D8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8279c930
	if (ctx.cr6.eq) goto loc_8279C930;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82799078
	ctx.lr = 0x8279C8F0;
	sub_82799078(ctx, base);
	// lfs f0,68(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8279c930
	if (!ctx.cr6.gt) goto loc_8279C930;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8279c920
	if (!ctx.cr6.lt) goto loc_8279C920;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r8,16
	ctx.r28.u64 = ctx.r8.u32 & 0xFFFF;
	// sthx r31,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u16);
	// b 0x8279c930
	goto loc_8279C930;
loc_8279C920:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bcac98
	ctx.lr = 0x8279C930;
	sub_82BCAC98(ctx, base);
loc_8279C930:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8279c8d8
	if (ctx.cr6.lt) goto loc_8279C8D8;
loc_8279C944:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279c9d8
	if (ctx.cr6.eq) goto loc_8279C9D8;
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8279c9d8
	if (!ctx.cr6.gt) goto loc_8279C9D8;
	// li r22,0
	ctx.r22.s64 = 0;
loc_8279C960:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8279c9c4
	if (!ctx.cr6.gt) goto loc_8279C9C4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8279C96C:
	// rlwinm r31,r26,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lhzx r30,r31,r27
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82799078
	ctx.lr = 0x8279C988;
	sub_82799078(ctx, base);
	// addi r28,r1,114
	ctx.r28.s64 = ctx.r1.s64 + 114;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lhzx r29,r31,r28
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82799078
	ctx.lr = 0x8279C9A4;
	sub_82799078(ctx, base);
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8279c9b4
	if (!ctx.cr6.gt) goto loc_8279C9B4;
	// sthx r29,r31,r27
	PPC_STORE_U16(ctx.r31.u32 + ctx.r27.u32, ctx.r29.u16);
	// sthx r30,r31,r28
	PPC_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r30.u16);
loc_8279C9B4:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x8279c96c
	if (ctx.cr6.lt) goto loc_8279C96C;
loc_8279C9C4:
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x8279c960
	if (ctx.cr6.lt) goto loc_8279C960;
loc_8279C9D8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279C9E0"))) PPC_WEAK_FUNC(sub_8279C9E0);
PPC_FUNC_IMPL(__imp__sub_8279C9E0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8279ba30
	ctx.lr = 0x8279CA00;
	sub_8279BA30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279ca30
	if (ctx.cr6.eq) goto loc_8279CA30;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8279CA0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82783ca8
	ctx.lr = 0x8279CA18;
	sub_82783CA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82784db0
	ctx.lr = 0x8279CA24;
	sub_82784DB0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x8279ca0c
	if (ctx.cr6.lt) goto loc_8279CA0C;
loc_8279CA30:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82139708
	ctx.lr = 0x8279CA48;
	sub_82139708(ctx, base);
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

__attribute__((alias("__imp__sub_8279CA60"))) PPC_WEAK_FUNC(sub_8279CA60);
PPC_FUNC_IMPL(__imp__sub_8279CA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x8279CA68;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x8221ad14
	ctx.lr = 0x8279CA70;
	__savefpr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lfs f0,156(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lhz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 40);
	// lfs f13,4520(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4520);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279cac4
	if (!ctx.cr6.lt) goto loc_8279CAC4;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mulli r10,r7,132
	ctx.r10.s64 = ctx.r7.s64 * 132;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279cac4
	if (ctx.cr6.eq) goto loc_8279CAC4;
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4520(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4520);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// b 0x8279cac8
	goto loc_8279CAC8;
loc_8279CAC4:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_8279CAC8:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// sth r28,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r28.u16);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stb r8,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r8.u8);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// sth r28,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r28.u16);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f28,f13,f2
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// sth r28,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, ctx.r28.u16);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// stb r8,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r8.u8);
	// stw r20,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
loc_8279CB48:
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bne 0x8279cb48
	if (!ctx.cr0.eq) goto loc_8279CB48;
	// lwz r18,452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r29,r1,98
	ctx.r29.s64 = ctx.r1.s64 + 98;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r18,1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 1, ctx.xer);
	// add r11,r18,r11
	ctx.r11.u64 = ctx.r18.u64 + ctx.r11.u64;
	// rlwinm r23,r11,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r17,r23,r27
	ctx.r17.u64 = ctx.r23.u64 + ctx.r27.u64;
	// add r30,r23,r10
	ctx.r30.u64 = ctx.r23.u64 + ctx.r10.u64;
	// sthx r4,r23,r29
	PPC_STORE_U16(ctx.r23.u32 + ctx.r29.u32, ctx.r4.u16);
	// lhz r8,30(r17)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r17.u32 + 30);
	// sthx r8,r23,r10
	PPC_STORE_U16(ctx.r23.u32 + ctx.r10.u32, ctx.r8.u16);
	// bne cr6,0x8279cbec
	if (!ctx.cr6.eq) goto loc_8279CBEC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279cbe4
	if (ctx.cr6.eq) goto loc_8279CBE4;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279cbe4
	if (ctx.cr6.eq) goto loc_8279CBE4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8279cbe4
	if (ctx.cr6.eq) goto loc_8279CBE4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279cbe4
	if (ctx.cr6.eq) goto loc_8279CBE4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279cbe4
	if (ctx.cr6.eq) goto loc_8279CBE4;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279cbe4
	if (ctx.cr6.eq) goto loc_8279CBE4;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// b 0x8279cbe8
	goto loc_8279CBE8;
loc_8279CBE4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279CBE8:
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
loc_8279CBEC:
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lhz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 40);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lwz r31,13800(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13800);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// lwz r4,13796(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13796);
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// lwz r25,12492(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12492);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f29,-30728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stfsx f3,r23,r8
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r8.u32, temp.u32);
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
	// li r21,1
	ctx.r21.s64 = 1;
	// stfsx f4,r23,r6
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r6.u32, temp.u32);
	// ld r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 40);
	// stfsx f2,r23,r5
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r5.u32, temp.u32);
	// ld r10,112(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 112);
	// stfsx f0,r23,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r3.u32, temp.u32);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfsx f10,r23,r26
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r26.u32, temp.u32);
	// bge cr6,0x8279cca4
	if (!ctx.cr6.lt) goto loc_8279CCA4;
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mulli r11,r7,132
	ctx.r11.s64 = ctx.r7.s64 * 132;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279cca4
	if (ctx.cr6.eq) goto loc_8279CCA4;
	// bl 0x82796f28
	ctx.lr = 0x8279CC78;
	sub_82796F28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279cca4
	if (ctx.cr6.eq) goto loc_8279CCA4;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// bge cr6,0x8279cca4
	if (!ctx.cr6.lt) goto loc_8279CCA4;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// sld r9,r21,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r21.u64 << (ctx.r11.u8 & 0x7F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x8279cca8
	if (!ctx.cr6.eq) goto loc_8279CCA8;
loc_8279CCA4:
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
loc_8279CCA8:
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lhz r10,30(r17)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r17.u32 + 30);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r18,12
	ctx.r7.s64 = ctx.r18.s64 + 12;
	// addi r3,r17,28
	ctx.r3.s64 = ctx.r17.s64 + 28;
	// stwx r19,r23,r11
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, ctx.r19.u32);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stfsx f3,r23,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r9.u32, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stfsx f3,r23,r8
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r8.u32, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sthx r10,r6,r27
	PPC_STORE_U16(ctx.r6.u32 + ctx.r27.u32, ctx.r10.u16);
	// bl 0x82219130
	ctx.lr = 0x8279CCE0;
	sub_82219130(ctx, base);
	// addi r5,r18,33
	ctx.r5.s64 = ctx.r18.s64 + 33;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r4,r27
	PPC_STORE_U32(ctx.r4.u32 + ctx.r27.u32, ctx.r20.u32);
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r4,140(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x82bdb6c8
	ctx.lr = 0x8279CCF8;
	sub_82BDB6C8(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lhzx r30,r23,r29
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r29.u32);
	// lhz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8279cd28
	if (!ctx.cr6.lt) goto loc_8279CD28;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279cd28
	if (ctx.cr6.eq) goto loc_8279CD28;
	// lhz r28,20(r10)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
loc_8279CD28:
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279cd54
	if (!ctx.cr6.lt) goto loc_8279CD54;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279cd54
	if (ctx.cr6.eq) goto loc_8279CD54;
	// lwz r24,88(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// b 0x8279cd58
	goto loc_8279CD58;
loc_8279CD54:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_8279CD58:
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279cd84
	if (!ctx.cr6.lt) goto loc_8279CD84;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279cd84
	if (ctx.cr6.eq) goto loc_8279CD84;
	// lhz r29,92(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 92);
	// b 0x8279cd88
	goto loc_8279CD88;
loc_8279CD84:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_8279CD88:
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r31,13848(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13848);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// lwz r4,13844(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13844);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279cde8
	if (!ctx.cr6.lt) goto loc_8279CDE8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279cde8
	if (ctx.cr6.eq) goto loc_8279CDE8;
	// bl 0x82796f28
	ctx.lr = 0x8279CDBC;
	sub_82796F28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279cde8
	if (ctx.cr6.eq) goto loc_8279CDE8;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// bge cr6,0x8279cde8
	if (!ctx.cr6.lt) goto loc_8279CDE8;
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// sld r9,r21,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r21.u64 << (ctx.r11.u8 & 0x7F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x8279cde8
	if (ctx.cr6.eq) goto loc_8279CDE8;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_8279CDE8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8279cfac
	if (ctx.cr6.eq) goto loc_8279CFAC;
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8279cfac
	if (ctx.cr6.eq) goto loc_8279CFAC;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x8279d054
	if (!ctx.cr6.eq) goto loc_8279D054;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lhz r29,98(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// lhz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8279ce40
	if (!ctx.cr6.lt) goto loc_8279CE40;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r29,132
	ctx.r10.s64 = ctx.r29.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279ce40
	if (ctx.cr6.eq) goto loc_8279CE40;
	// lhz r11,94(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 94);
	// b 0x8279ce44
	goto loc_8279CE44;
loc_8279CE40:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8279CE44:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8279ce58
	if (!ctx.cr6.eq) goto loc_8279CE58;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// b 0x8279ce64
	goto loc_8279CE64;
loc_8279CE58:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8279ce68
	if (!ctx.cr6.eq) goto loc_8279CE68;
	// li r9,2
	ctx.r9.s64 = 2;
loc_8279CE64:
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
loc_8279CE68:
	// rlwinm r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279ce80
	if (ctx.cr6.eq) goto loc_8279CE80;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// ori r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 | 4;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
loc_8279CE80:
	// rlwinm r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279ce98
	if (ctx.cr6.eq) goto loc_8279CE98;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
loc_8279CE98:
	// rlwinm r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279ceb0
	if (ctx.cr6.eq) goto loc_8279CEB0;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// ori r9,r11,128
	ctx.r9.u64 = ctx.r11.u64 | 128;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
loc_8279CEB0:
	// rlwinm r11,r24,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279cec8
	if (ctx.cr6.eq) goto loc_8279CEC8;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
loc_8279CEC8:
	// rlwinm r10,r24,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x40;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279cedc
	if (ctx.cr6.eq) goto loc_8279CEDC;
	// li r11,64
	ctx.r11.s64 = 64;
loc_8279CEDC:
	// rlwinm r10,r24,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279cef0
	if (ctx.cr6.eq) goto loc_8279CEF0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_8279CEF0:
	// cmplwi cr6,r8,63
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 63, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ble cr6,0x8279cf08
	if (!ctx.cr6.gt) goto loc_8279CF08;
	// ori r10,r11,63
	ctx.r10.u64 = ctx.r11.u64 | 63;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// b 0x8279cf10
	goto loc_8279CF10;
loc_8279CF08:
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
loc_8279CF10:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// clrlwi r31,r26,16
	ctx.r31.u64 = ctx.r26.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r30,r28,16
	ctx.r30.u64 = ctx.r28.u32 & 0xFFFF;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// sth r31,78(r9)
	PPC_STORE_U16(ctx.r9.u32 + 78, ctx.r31.u16);
	// bl 0x8279bcf8
	ctx.lr = 0x8279CF34;
	sub_8279BCF8(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8279cf84
	if (!ctx.cr6.eq) goto loc_8279CF84;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279cf84
	if (!ctx.cr6.lt) goto loc_8279CF84;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r29,132
	ctx.r10.s64 = ctx.r29.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279cf84
	if (ctx.cr6.eq) goto loc_8279CF84;
	// lhz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// lhz r9,106(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 106);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bne cr6,0x8279cf88
	if (!ctx.cr6.eq) goto loc_8279CF88;
loc_8279CF84:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_8279CF88:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// oris r4,r30,16384
	ctx.r4.u64 = ctx.r30.u64 | 1073741824;
	// bl 0x82bdb790
	ctx.lr = 0x8279CF98;
	sub_82BDB790(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// sth r31,78(r9)
	PPC_STORE_U16(ctx.r9.u32 + 78, ctx.r31.u16);
	// b 0x8279d1ec
	goto loc_8279D1EC;
loc_8279CFAC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x8279d054
	if (!ctx.cr6.eq) goto loc_8279D054;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// clrlwi r31,r26,16
	ctx.r31.u64 = ctx.r26.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r30,r28,16
	ctx.r30.u64 = ctx.r28.u32 & 0xFFFF;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// sth r31,78(r9)
	PPC_STORE_U16(ctx.r9.u32 + 78, ctx.r31.u16);
	// bl 0x8279bcf8
	ctx.lr = 0x8279CFD8;
	sub_8279BCF8(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8279d02c
	if (!ctx.cr6.eq) goto loc_8279D02C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279d02c
	if (!ctx.cr6.lt) goto loc_8279D02C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d02c
	if (ctx.cr6.eq) goto loc_8279D02C;
	// lhz r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// lhz r9,106(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 106);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bne cr6,0x8279d030
	if (!ctx.cr6.eq) goto loc_8279D030;
loc_8279D02C:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_8279D030:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bdb790
	ctx.lr = 0x8279D040;
	sub_82BDB790(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// sth r31,78(r9)
	PPC_STORE_U16(ctx.r9.u32 + 78, ctx.r31.u16);
	// b 0x8279d1ec
	goto loc_8279D1EC;
loc_8279D054:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d1f0
	if (ctx.cr6.eq) goto loc_8279D1F0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279d1f0
	if (ctx.cr6.eq) goto loc_8279D1F0;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// lhz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// lfs f30,-28372(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28372);
	ctx.f30.f64 = double(temp.f32);
	// lwz r5,13856(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13856);
	// lwz r4,13852(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13852);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8279d128
	if (!ctx.cr6.lt) goto loc_8279D128;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279d128
	if (ctx.cr6.eq) goto loc_8279D128;
	// bl 0x82797268
	ctx.lr = 0x8279D0B4;
	sub_82797268(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279d128
	if (ctx.cr6.eq) goto loc_8279D128;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// lwz r5,13856(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13856);
	// lwz r4,13852(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13852);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279d0f4
	if (!ctx.cr6.lt) goto loc_8279D0F4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279d0f4
	if (ctx.cr6.eq) goto loc_8279D0F4;
	// bl 0x827973b8
	ctx.lr = 0x8279D0F0;
	sub_827973B8(ctx, base);
	// b 0x8279d0f8
	goto loc_8279D0F8;
loc_8279D0F4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8279D0F8:
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fsel f9,f10,f30,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f30.f64 : ctx.f11.f64;
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lbz r29,87(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
loc_8279D128:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// lwz r5,13864(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13864);
	// lwz r4,13860(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13860);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279d1d0
	if (!ctx.cr6.lt) goto loc_8279D1D0;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r11,r10,132
	ctx.r11.s64 = ctx.r10.s64 * 132;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279d1d0
	if (ctx.cr6.eq) goto loc_8279D1D0;
	// bl 0x82797268
	ctx.lr = 0x8279D15C;
	sub_82797268(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279d1d0
	if (ctx.cr6.eq) goto loc_8279D1D0;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// lwz r5,13864(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13864);
	// lwz r4,13860(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13860);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279d19c
	if (!ctx.cr6.lt) goto loc_8279D19C;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r11,r10,132
	ctx.r11.s64 = ctx.r10.s64 * 132;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8279d19c
	if (ctx.cr6.eq) goto loc_8279D19C;
	// bl 0x827973b8
	ctx.lr = 0x8279D198;
	sub_827973B8(ctx, base);
	// b 0x8279d1a0
	goto loc_8279D1A0;
loc_8279D19C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8279D1A0:
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fsel f9,f10,f30,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f30.f64 : ctx.f11.f64;
	// fctidz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lbz r31,87(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
loc_8279D1D0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r11,64
	ctx.r5.u64 = ctx.r11.u64 | 64;
	// rlwimi r6,r21,7,0,24
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r21.u32, 7) & 0xFFFFFF80) | (ctx.r6.u64 & 0xFFFFFFFF0000007F);
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x827846c8
	ctx.lr = 0x8279D1EC;
	sub_827846C8(ctx, base);
loc_8279D1EC:
	// lwz r25,12492(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12492);
loc_8279D1F0:
	// lwz r11,144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// fmr f7,f28
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f28.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279d2b8
	if (ctx.cr6.eq) goto loc_8279D2B8;
	// ld r11,112(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 112);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// ld r9,40(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 40);
	// lfs f13,148(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f0,f27
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fmadds f8,f10,f29,f28
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f28.f64));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lhz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fnmsubs f0,f3,f27,f8
	ctx.f0.f64 = double(float(-(ctx.f3.f64 * ctx.f27.f64 - ctx.f8.f64)));
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x8279d270
	if (!ctx.cr6.gt) goto loc_8279D270;
	// fsubs f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fadds f7,f0,f28
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// b 0x8279d274
	goto loc_8279D274;
loc_8279D270:
	// fsubs f7,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
loc_8279D274:
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x8279d28c
	if (!ctx.cr6.eq) goto loc_8279D28C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bde8a0
	ctx.lr = 0x8279D288;
	sub_82BDE8A0(ctx, base);
	// b 0x8279d290
	goto loc_8279D290;
loc_8279D28C:
	// bl 0x82783e18
	ctx.lr = 0x8279D290;
	sub_82783E18(ctx, base);
loc_8279D290:
	// fcmpu cr6,f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// ble cr6,0x8279d2a0
	if (!ctx.cr6.gt) goto loc_8279D2A0;
	// fdivs f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f7.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
loc_8279D2A0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x8279d2b4
	if (!ctx.cr6.eq) goto loc_8279D2B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bdec90
	ctx.lr = 0x8279D2B0;
	sub_82BDEC90(ctx, base);
	// b 0x8279d2b8
	goto loc_8279D2B8;
loc_8279D2B4:
	// bl 0x827840f0
	ctx.lr = 0x8279D2B8;
	sub_827840F0(ctx, base);
loc_8279D2B8:
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stfs f7,40(r17)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r17.u32 + 40, temp.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// stfsx f7,r23,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x8279d2ec
	if (ctx.cr6.eq) goto loc_8279D2EC;
	// lwz r11,140(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// stw r9,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r9.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8279D2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8279D2EC:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// stwx r20,r23,r11
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, ctx.r20.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x8221ad60
	ctx.lr = 0x8279D300;
	__restfpr_27(ctx, base);
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279D304"))) PPC_WEAK_FUNC(sub_8279D304);
PPC_FUNC_IMPL(__imp__sub_8279D304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279D308"))) PPC_WEAK_FUNC(sub_8279D308);
PPC_FUNC_IMPL(__imp__sub_8279D308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x8279D310;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad0c
	ctx.lr = 0x8279D318;
	__savefpr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f25,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f25.f64 = double(temp.f32);
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8279d360
	if (!ctx.cr6.lt) goto loc_8279D360;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r9,r31,132
	ctx.r9.s64 = ctx.r31.s64 * 132;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279d360
	if (ctx.cr6.eq) goto loc_8279D360;
	// lfs f29,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f29.f64 = double(temp.f32);
	// b 0x8279d364
	goto loc_8279D364;
loc_8279D360:
	// fmr f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f25.f64;
loc_8279D364:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lhz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// lfs f31,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// bge cr6,0x8279d394
	if (!ctx.cr6.lt) goto loc_8279D394;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 * 132;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d394
	if (ctx.cr6.eq) goto loc_8279D394;
	// lfs f28,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f28.f64 = double(temp.f32);
	// b 0x8279d398
	goto loc_8279D398;
loc_8279D394:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
loc_8279D398:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,30(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// lfs f26,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f26.f64 = double(temp.f32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8279d3d4
	if (ctx.cr6.eq) goto loc_8279D3D4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279bb00
	ctx.lr = 0x8279D3C4;
	sub_8279BB00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8279d3d4
	if (!ctx.cr6.eq) goto loc_8279D3D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279c800
	ctx.lr = 0x8279D3D4;
	sub_8279C800(ctx, base);
loc_8279D3D4:
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lhz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279d400
	if (!ctx.cr6.lt) goto loc_8279D400;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mulli r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d400
	if (ctx.cr6.eq) goto loc_8279D400;
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8279d404
	goto loc_8279D404;
loc_8279D400:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_8279D404:
	// lhz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279d42c
	if (!ctx.cr6.lt) goto loc_8279D42C;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mulli r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d42c
	if (ctx.cr6.eq) goto loc_8279D42C;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8279d430
	goto loc_8279D430;
loc_8279D42C:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_8279D430:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8279d440
	if (!ctx.cr6.lt) goto loc_8279D440;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// b 0x8279d444
	goto loc_8279D444;
loc_8279D440:
	// fmr f27,f13
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f13.f64;
loc_8279D444:
	// lhz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279d46c
	if (!ctx.cr6.lt) goto loc_8279D46C;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mulli r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d46c
	if (ctx.cr6.eq) goto loc_8279D46C;
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8279d470
	goto loc_8279D470;
loc_8279D46C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_8279D470:
	// lhz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279d498
	if (!ctx.cr6.lt) goto loc_8279D498;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mulli r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d498
	if (ctx.cr6.eq) goto loc_8279D498;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8279d49c
	goto loc_8279D49C;
loc_8279D498:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_8279D49C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8279d4ac
	if (!ctx.cr6.gt) goto loc_8279D4AC;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x8279d4b0
	goto loc_8279D4B0;
loc_8279D4AC:
	// fmr f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f13.f64;
loc_8279D4B0:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// bgt cr6,0x8279d4bc
	if (ctx.cr6.gt) goto loc_8279D4BC;
	// fmr f29,f27
	ctx.f29.f64 = ctx.f27.f64;
loc_8279D4BC:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// blt cr6,0x8279d4c8
	if (ctx.cr6.lt) goto loc_8279D4C8;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
loc_8279D4C8:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bgt cr6,0x8279d4d4
	if (ctx.cr6.gt) goto loc_8279D4D4;
	// fmr f28,f27
	ctx.f28.f64 = ctx.f27.f64;
loc_8279D4D4:
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// blt cr6,0x8279d4e0
	if (ctx.cr6.lt) goto loc_8279D4E0;
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
loc_8279D4E0:
	// lhz r11,30(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8279d5ec
	if (!ctx.cr6.eq) goto loc_8279D5EC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279bb00
	ctx.lr = 0x8279D4F8;
	sub_8279BB00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8279d5ec
	if (ctx.cr6.eq) goto loc_8279D5EC;
	// lhz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279d528
	if (!ctx.cr6.lt) goto loc_8279D528;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mulli r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d528
	if (ctx.cr6.eq) goto loc_8279D528;
	// lbz r11,23(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// b 0x8279d52c
	goto loc_8279D52C;
loc_8279D528:
	// lhz r11,5334(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 5334);
loc_8279D52C:
	// lhz r10,5334(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 5334);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8279d5ec
	if (ctx.cr6.eq) goto loc_8279D5EC;
	// lhz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279d564
	if (!ctx.cr6.lt) goto loc_8279D564;
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mulli r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d564
	if (ctx.cr6.eq) goto loc_8279D564;
	// lbz r11,23(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// b 0x8279d568
	goto loc_8279D568;
loc_8279D564:
	// lhz r11,5334(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 5334);
loc_8279D568:
	// lhz r10,5378(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 5378);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8279d5ec
	if (ctx.cr6.eq) goto loc_8279D5EC;
	// lhz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279d5a0
	if (!ctx.cr6.lt) goto loc_8279D5A0;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mulli r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d5a0
	if (ctx.cr6.eq) goto loc_8279D5A0;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8279d5a4
	goto loc_8279D5A4;
loc_8279D5A0:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_8279D5A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279c210
	ctx.lr = 0x8279D5B0;
	sub_8279C210(ctx, base);
	// fsubs f13,f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f1.f64));
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fadds f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8279c370
	ctx.lr = 0x8279D5CC;
	sub_8279C370(ctx, base);
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x8279d5e0
	if (!ctx.cr6.gt) goto loc_8279D5E0;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// blt cr6,0x8279d5ec
	if (ctx.cr6.lt) goto loc_8279D5EC;
	// b 0x8279d5e8
	goto loc_8279D5E8;
loc_8279D5E0:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bgt cr6,0x8279d5ec
	if (ctx.cr6.gt) goto loc_8279D5EC;
loc_8279D5E8:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
loc_8279D5EC:
	// fcmpu cr6,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f28.f64);
	// ble cr6,0x8279d5fc
	if (!ctx.cr6.gt) goto loc_8279D5FC;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x8279d600
	goto loc_8279D600;
loc_8279D5FC:
	// fmr f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f28.f64;
loc_8279D600:
	// fcmpu cr6,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f28.f64);
	// bge cr6,0x8279d610
	if (!ctx.cr6.lt) goto loc_8279D610;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x8279d614
	goto loc_8279D614;
loc_8279D610:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_8279D614:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// fsubs f13,f30,f27
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bne cr6,0x8279d718
	if (!ctx.cr6.eq) goto loc_8279D718;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8279D62C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d68c
	if (ctx.cr6.eq) goto loc_8279D68C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279d68c
	if (ctx.cr6.eq) goto loc_8279D68C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279d68c
	if (ctx.cr6.eq) goto loc_8279D68C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d68c
	if (ctx.cr6.eq) goto loc_8279D68C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279d68c
	if (ctx.cr6.eq) goto loc_8279D68C;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279d68c
	if (ctx.cr6.eq) goto loc_8279D68C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8279d68c
	if (!ctx.cr6.lt) goto loc_8279D68C;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
loc_8279D68C:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82783bc0
	ctx.lr = 0x8279D694;
	sub_82783BC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8279d6ac
	if (!ctx.cr6.eq) goto loc_8279D6AC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x8279d62c
	if (ctx.cr6.lt) goto loc_8279D62C;
	// b 0x8279d6b8
	goto loc_8279D6B8;
loc_8279D6AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82784db0
	ctx.lr = 0x8279D6B8;
	sub_82784DB0(ctx, base);
loc_8279D6B8:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x8279d718
	if (!ctx.cr6.eq) goto loc_8279D718;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8279d6ec
	if (!ctx.cr6.lt) goto loc_8279D6EC;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mulli r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 * 132;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d6ec
	if (ctx.cr6.eq) goto loc_8279D6EC;
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// b 0x8279d6f0
	goto loc_8279D6F0;
loc_8279D6EC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8279D6F0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r5,r10,-6268
	ctx.r5.s64 = ctx.r10.s64 + -6268;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279D708;
	sub_82BCAC98(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad58
	ctx.lr = 0x8279D714;
	__restfpr_25(ctx, base);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_8279D718:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f5,f25
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f25.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f6,27476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f6.f64 = double(temp.f32);
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x8279ca60
	ctx.lr = 0x8279D744;
	sub_8279CA60(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad58
	ctx.lr = 0x8279D750;
	__restfpr_25(ctx, base);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279D754"))) PPC_WEAK_FUNC(sub_8279D754);
PPC_FUNC_IMPL(__imp__sub_8279D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279D758"))) PPC_WEAK_FUNC(sub_8279D758);
PPC_FUNC_IMPL(__imp__sub_8279D758) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279D760"))) PPC_WEAK_FUNC(sub_8279D760);
PPC_FUNC_IMPL(__imp__sub_8279D760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8279d8f8
	if (!ctx.cr6.lt) goto loc_8279D8F8;
	// lhz r10,2532(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2532);
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// addi r7,r4,112
	ctx.r7.s64 = ctx.r4.s64 + 112;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r4,96
	ctx.r10.s64 = ctx.r4.s64 + 96;
	// beq cr6,0x8279d87c
	if (ctx.cr6.eq) goto loc_8279D87C;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r4,120
	ctx.r6.s64 = ctx.r4.s64 + 120;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r5,r8,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addi r4,r4,496
	ctx.r4.s64 = ctx.r4.s64 + 496;
	// sthx r5,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u16);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r7,2496(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r10,r7,95
	ctx.r10.s64 = ctx.r7.s64 + 95;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,964
	ctx.r10.s64 = ctx.r11.s64 + 964;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r6,r7,r3
	PPC_STORE_U16(ctx.r7.u32 + ctx.r3.u32, ctx.r6.u16);
	// lwzx r6,r9,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lhz r7,2496(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r5,r7,111
	ctx.r5.s64 = ctx.r7.s64 + 111;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r4,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// stwx r7,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u32);
	// lhz r9,2496(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r5,r9,111
	ctx.r5.s64 = ctx.r9.s64 + 111;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r6.u32);
	// lfsx f0,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lhz r9,2496(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r9,r9,119
	ctx.r9.s64 = ctx.r9.s64 + 119;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f13,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r8,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// lhz r9,2496(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r6,r9,119
	ctx.r6.s64 = ctx.r9.s64 + 119;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f0,r5,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// lhz r4,2496(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// rotlwi r9,r4,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// lfs f12,964(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 964);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lfs f11,956(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 956);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,964(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 964, temp.u32);
	// lhz r8,2496(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// rotlwi r11,r8,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f12,956(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 956, temp.u32);
	// lwzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r5,r11,495
	ctx.r5.s64 = ctx.r11.s64 + 495;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r10,r11,495
	ctx.r10.s64 = ctx.r11.s64 + 495;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u32);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,2496(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2496, ctx.r10.u16);
	// blr 
	return;
loc_8279D87C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhzx r5,r9,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// addi r9,r4,120
	ctx.r9.s64 = ctx.r4.s64 + 120;
	// addi r7,r4,496
	ctx.r7.s64 = ctx.r4.s64 + 496;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r5,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u16);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r8,r11,111
	ctx.r8.s64 = ctx.r11.s64 + 111;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r11,r11,119
	ctx.r11.s64 = ctx.r11.s64 + 119;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r4,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// lhz r8,2496(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// rotlwi r11,r8,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f13,956(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 956);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,964(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 964, temp.u32);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r6,r11,495
	ctx.r6.s64 = ctx.r11.s64 + 495;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stwx r4,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u32);
loc_8279D8F8:
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,2496(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2496, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279D90C"))) PPC_WEAK_FUNC(sub_8279D90C);
PPC_FUNC_IMPL(__imp__sub_8279D90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279D910"))) PPC_WEAK_FUNC(sub_8279D910);
PPC_FUNC_IMPL(__imp__sub_8279D910) {
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
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279d968
	if (ctx.cr6.eq) goto loc_8279D968;
	// addi r30,r3,448
	ctx.r30.s64 = ctx.r3.s64 + 448;
loc_8279D938:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8279d954
	if (ctx.cr6.eq) goto loc_8279D954;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8279d760
	ctx.lr = 0x8279D94C;
	sub_8279D760(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8279D954:
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8279d938
	if (ctx.cr6.lt) goto loc_8279D938;
loc_8279D968:
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

__attribute__((alias("__imp__sub_8279D980"))) PPC_WEAK_FUNC(sub_8279D980);
PPC_FUNC_IMPL(__imp__sub_8279D980) {
	PPC_FUNC_PROLOGUE();
	// b 0x8279d910
	sub_8279D910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279D984"))) PPC_WEAK_FUNC(sub_8279D984);
PPC_FUNC_IMPL(__imp__sub_8279D984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279D988"))) PPC_WEAK_FUNC(sub_8279D988);
PPC_FUNC_IMPL(__imp__sub_8279D988) {
	PPC_FUNC_PROLOGUE();
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,448
	ctx.r3.s64 = ctx.r3.s64 + 448;
	// b 0x82218a80
	sub_82218A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279D998"))) PPC_WEAK_FUNC(sub_8279D998);
PPC_FUNC_IMPL(__imp__sub_8279D998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f1,964(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 964, temp.u32);
	// stfsx f2,r8,r3
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279D9C0"))) PPC_WEAK_FUNC(sub_8279D9C0);
PPC_FUNC_IMPL(__imp__sub_8279D9C0) {
	PPC_FUNC_PROLOGUE();
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,960
	ctx.r3.s64 = ctx.r3.s64 + 960;
	// b 0x82218a80
	sub_82218A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279D9D0"))) PPC_WEAK_FUNC(sub_8279D9D0);
PPC_FUNC_IMPL(__imp__sub_8279D9D0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8279da14
	if (ctx.cr6.lt) goto loc_8279DA14;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bge cr6,0x8279da14
	if (!ctx.cr6.lt) goto loc_8279DA14;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,2536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2536);
	// lwz r9,2540(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2540);
	// lwz r8,2544(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2544);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// blr 
	return;
loc_8279DA14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DA1C"))) PPC_WEAK_FUNC(sub_8279DA1C);
PPC_FUNC_IMPL(__imp__sub_8279DA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279DA20"))) PPC_WEAK_FUNC(sub_8279DA20);
PPC_FUNC_IMPL(__imp__sub_8279DA20) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2572, ctx.r4.u32);
	// addi r10,r3,2544
	ctx.r10.s64 = ctx.r3.s64 + 2544;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8279DA2C:
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x8279da2c
	if (!ctx.cr0.eq) goto loc_8279DA2C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DA40"))) PPC_WEAK_FUNC(sub_8279DA40);
PPC_FUNC_IMPL(__imp__sub_8279DA40) {
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
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// sth r11,2496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2496, ctx.r11.u16);
	// sth r11,2532(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2532, ctx.r11.u16);
	// bl 0x82218a80
	ctx.lr = 0x8279DA70;
	sub_82218A80(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,960
	ctx.r3.s64 = ctx.r31.s64 + 960;
	// bl 0x82218a80
	ctx.lr = 0x8279DA80;
	sub_82218A80(ctx, base);
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

__attribute__((alias("__imp__sub_8279DA94"))) PPC_WEAK_FUNC(sub_8279DA94);
PPC_FUNC_IMPL(__imp__sub_8279DA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279DA98"))) PPC_WEAK_FUNC(sub_8279DA98);
PPC_FUNC_IMPL(__imp__sub_8279DA98) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r3,2600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2600);
	// sth r11,2496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2496, ctx.r11.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r10,2498(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2498, ctx.r10.u16);
	// sth r11,2532(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2532, ctx.r11.u16);
	// sth r11,2604(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2604, ctx.r11.u16);
	// stw r11,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// beq cr6,0x8279db00
	if (ctx.cr6.eq) goto loc_8279DB00;
	// lwz r11,2596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2596);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82218a80
	ctx.lr = 0x8279DAE4;
	sub_82218A80(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r10.u32);
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
loc_8279DB00:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8279DB1C"))) PPC_WEAK_FUNC(sub_8279DB1C);
PPC_FUNC_IMPL(__imp__sub_8279DB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279DB20"))) PPC_WEAK_FUNC(sub_8279DB20);
PPC_FUNC_IMPL(__imp__sub_8279DB20) {
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
	// li r30,12
	ctx.r30.s64 = 12;
	// lwz r31,13908(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13908);
loc_8279DB40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279db60
	if (ctx.cr6.eq) goto loc_8279DB60;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8279DB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8279DB60:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8279db40
	if (!ctx.cr0.eq) goto loc_8279DB40;
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

__attribute__((alias("__imp__sub_8279DB84"))) PPC_WEAK_FUNC(sub_8279DB84);
PPC_FUNC_IMPL(__imp__sub_8279DB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279DB88"))) PPC_WEAK_FUNC(sub_8279DB88);
PPC_FUNC_IMPL(__imp__sub_8279DB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8279db20
	sub_8279DB20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8279DB9C"))) PPC_WEAK_FUNC(sub_8279DB9C);
PPC_FUNC_IMPL(__imp__sub_8279DB9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DBA0"))) PPC_WEAK_FUNC(sub_8279DBA0);
PPC_FUNC_IMPL(__imp__sub_8279DBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13908, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DBB0"))) PPC_WEAK_FUNC(sub_8279DBB0);
PPC_FUNC_IMPL(__imp__sub_8279DBB0) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82218a80
	ctx.lr = 0x8279DBD8;
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

__attribute__((alias("__imp__sub_8279DBF0"))) PPC_WEAK_FUNC(sub_8279DBF0);
PPC_FUNC_IMPL(__imp__sub_8279DBF0) {
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
	// lhz r11,2604(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2604);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8279dc40
	if (!ctx.cr6.lt) goto loc_8279DC40;
	// addi r11,r11,326
	ctx.r11.s64 = ctx.r11.s64 + 326;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lhz r9,2604(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2604);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r4,2612(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2612, ctx.r4.u16);
	// lhz r11,2604(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2604);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,2604(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2604, ctx.r7.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8279DC40:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-6416
	ctx.r5.s64 = ctx.r11.s64 + -6416;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279DC54;
	sub_82BCAC98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DC64"))) PPC_WEAK_FUNC(sub_8279DC64);
PPC_FUNC_IMPL(__imp__sub_8279DC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8279DC68"))) PPC_WEAK_FUNC(sub_8279DC68);
PPC_FUNC_IMPL(__imp__sub_8279DC68) {
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
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x8279dca4
	if (ctx.cr6.lt) goto loc_8279DCA4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-6488
	ctx.r5.s64 = ctx.r11.s64 + -6488;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279DC94;
	sub_82BCAC98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8279DCA4:
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// sthx r4,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u16);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r7,r11,112
	ctx.r7.s64 = ctx.r11.s64 + 112;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stwx r10,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r10.u32);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r5,r11,120
	ctx.r5.s64 = ctx.r11.s64 + 120;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f0,r4,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stfs f0,964(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 964, temp.u32);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r8,r11,496
	ctx.r8.s64 = ctx.r11.s64 + 496;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u32);
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,2496(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2496, ctx.r6.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DD18"))) PPC_WEAK_FUNC(sub_8279DD18);
PPC_FUNC_IMPL(__imp__sub_8279DD18) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-6612
	ctx.r5.s64 = ctx.r11.s64 + -6612;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279DD38;
	sub_82BCAC98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DD48"))) PPC_WEAK_FUNC(sub_8279DD48);
PPC_FUNC_IMPL(__imp__sub_8279DD48) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,2532(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2532);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8279dda4
	if (ctx.cr6.eq) goto loc_8279DDA4;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r3,r11,448
	ctx.r3.s64 = ctx.r11.s64 + 448;
	// addi r9,r10,1250
	ctx.r9.s64 = ctx.r10.s64 + 1250;
	// sth r10,2532(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2532, ctx.r10.u16);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// sth r7,2496(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2496, ctx.r7.u16);
	// bl 0x82218a80
	ctx.lr = 0x8279DD94;
	sub_82218A80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8279DDA4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-6664
	ctx.r5.s64 = ctx.r11.s64 + -6664;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279DDB8;
	sub_82BCAC98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DDC8"))) PPC_WEAK_FUNC(sub_8279DDC8);
PPC_FUNC_IMPL(__imp__sub_8279DDC8) {
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
	// lhz r11,2532(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2532);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8279de0c
	if (!ctx.cr6.lt) goto loc_8279DE0C;
	// addi r11,r11,1250
	ctx.r11.s64 = ctx.r11.s64 + 1250;
	// lhz r10,2496(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u16);
	// lhz r11,2532(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2532);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,2532(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2532, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8279DE0C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-6716
	ctx.r5.s64 = ctx.r11.s64 + -6716;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x8279DE20;
	sub_82BCAC98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8279DE30"))) PPC_WEAK_FUNC(sub_8279DE30);
PPC_FUNC_IMPL(__imp__sub_8279DE30) {
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
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279de88
	if (ctx.cr6.eq) goto loc_8279DE88;
	// addi r30,r3,448
	ctx.r30.s64 = ctx.r3.s64 + 448;
loc_8279DE58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8279de74
	if (!ctx.cr6.eq) goto loc_8279DE74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8279d760
	ctx.lr = 0x8279DE6C;
	sub_8279D760(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8279DE74:
	// lhz r11,2496(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2496);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8279de58
	if (ctx.cr6.lt) goto loc_8279DE58;
loc_8279DE88:
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,448
	ctx.r3.s64 = ctx.r3.s64 + 448;
	// bl 0x82218a80
	ctx.lr = 0x8279DE98;
	sub_82218A80(ctx, base);
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

