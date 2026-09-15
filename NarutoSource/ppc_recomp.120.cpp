#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827B1D90"))) PPC_WEAK_FUNC(sub_827B1D90);
PPC_FUNC_IMPL(__imp__sub_827B1D90) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r8,r3,212
	ctx.r8.s64 = ctx.r3.s64 + 212;
	// li r3,64
	ctx.r3.s64 = 64;
	// addi r6,r11,-11080
	ctx.r6.s64 = ctx.r11.s64 + -11080;
	// lwz r7,13604(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13604);
loc_827B1DAC:
	// lwz r11,-72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b1e3c
	if (ctx.cr6.eq) goto loc_827B1E3C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827b1e3c
	if (ctx.cr6.eq) goto loc_827B1E3C;
	// lwz r10,-60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -60);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x827b1de4
	if (ctx.cr6.lt) goto loc_827B1DE4;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bge cr6,0x827b1de4
	if (!ctx.cr6.lt) goto loc_827B1DE4;
	// addi r11,r4,3919
	ctx.r11.s64 = ctx.r4.s64 + 3919;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// b 0x827b1de8
	goto loc_827B1DE8;
loc_827B1DE4:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_827B1DE8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827b1e2c
	if (!ctx.cr6.gt) goto loc_827B1E2C;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bge cr6,0x827b1e2c
	if (!ctx.cr6.lt) goto loc_827B1E2C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827b1e2c
	if (ctx.cr6.lt) goto loc_827B1E2C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x827b1e2c
	if (!ctx.cr6.lt) goto loc_827B1E2C;
	// addi r11,r11,3919
	ctx.r11.s64 = ctx.r11.s64 + 3919;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// b 0x827b1e30
	goto loc_827B1E30;
loc_827B1E2C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_827B1E30:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827b1e3c
	if (!ctx.cr6.eq) goto loc_827B1E3C;
	// stw r5,-72(r8)
	PPC_STORE_U32(ctx.r8.u32 + -72, ctx.r5.u32);
loc_827B1E3C:
	// lwz r11,-12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b1ecc
	if (ctx.cr6.eq) goto loc_827B1ECC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827b1ecc
	if (ctx.cr6.eq) goto loc_827B1ECC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x827b1e74
	if (ctx.cr6.lt) goto loc_827B1E74;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bge cr6,0x827b1e74
	if (!ctx.cr6.lt) goto loc_827B1E74;
	// addi r11,r4,3919
	ctx.r11.s64 = ctx.r4.s64 + 3919;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// b 0x827b1e78
	goto loc_827B1E78;
loc_827B1E74:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_827B1E78:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827b1ebc
	if (!ctx.cr6.gt) goto loc_827B1EBC;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bge cr6,0x827b1ebc
	if (!ctx.cr6.lt) goto loc_827B1EBC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827b1ebc
	if (ctx.cr6.lt) goto loc_827B1EBC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x827b1ebc
	if (!ctx.cr6.lt) goto loc_827B1EBC;
	// addi r11,r11,3919
	ctx.r11.s64 = ctx.r11.s64 + 3919;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// b 0x827b1ec0
	goto loc_827B1EC0;
loc_827B1EBC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_827B1EC0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827b1ecc
	if (!ctx.cr6.eq) goto loc_827B1ECC;
	// stw r5,-12(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12, ctx.r5.u32);
loc_827B1ECC:
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b1f5c
	if (ctx.cr6.eq) goto loc_827B1F5C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827b1f5c
	if (ctx.cr6.eq) goto loc_827B1F5C;
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x827b1f04
	if (ctx.cr6.lt) goto loc_827B1F04;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bge cr6,0x827b1f04
	if (!ctx.cr6.lt) goto loc_827B1F04;
	// addi r11,r4,3919
	ctx.r11.s64 = ctx.r4.s64 + 3919;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// b 0x827b1f08
	goto loc_827B1F08;
loc_827B1F04:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_827B1F08:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827b1f4c
	if (!ctx.cr6.gt) goto loc_827B1F4C;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bge cr6,0x827b1f4c
	if (!ctx.cr6.lt) goto loc_827B1F4C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827b1f4c
	if (ctx.cr6.lt) goto loc_827B1F4C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x827b1f4c
	if (!ctx.cr6.lt) goto loc_827B1F4C;
	// addi r11,r11,3919
	ctx.r11.s64 = ctx.r11.s64 + 3919;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// b 0x827b1f50
	goto loc_827B1F50;
loc_827B1F4C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_827B1F50:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827b1f5c
	if (!ctx.cr6.eq) goto loc_827B1F5C;
	// stw r5,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r5.u32);
loc_827B1F5C:
	// lwz r11,108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b1fec
	if (ctx.cr6.eq) goto loc_827B1FEC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827b1fec
	if (ctx.cr6.eq) goto loc_827B1FEC;
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x827b1f94
	if (ctx.cr6.lt) goto loc_827B1F94;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bge cr6,0x827b1f94
	if (!ctx.cr6.lt) goto loc_827B1F94;
	// addi r11,r4,3919
	ctx.r11.s64 = ctx.r4.s64 + 3919;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// b 0x827b1f98
	goto loc_827B1F98;
loc_827B1F94:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_827B1F98:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827b1fdc
	if (!ctx.cr6.gt) goto loc_827B1FDC;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bge cr6,0x827b1fdc
	if (!ctx.cr6.lt) goto loc_827B1FDC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827b1fdc
	if (ctx.cr6.lt) goto loc_827B1FDC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x827b1fdc
	if (!ctx.cr6.lt) goto loc_827B1FDC;
	// addi r11,r11,3919
	ctx.r11.s64 = ctx.r11.s64 + 3919;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// b 0x827b1fe0
	goto loc_827B1FE0;
loc_827B1FDC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_827B1FE0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827b1fec
	if (!ctx.cr6.eq) goto loc_827B1FEC;
	// stw r5,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r5.u32);
loc_827B1FEC:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r8,240
	ctx.r8.s64 = ctx.r8.s64 + 240;
	// bne 0x827b1dac
	if (!ctx.cr0.eq) goto loc_827B1DAC;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2000"))) PPC_WEAK_FUNC(sub_827B2000);
PPC_FUNC_IMPL(__imp__sub_827B2000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82286490
	sub_82286490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B201C"))) PPC_WEAK_FUNC(sub_827B201C);
PPC_FUNC_IMPL(__imp__sub_827B201C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2020"))) PPC_WEAK_FUNC(sub_827B2020);
PPC_FUNC_IMPL(__imp__sub_827B2020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B2028;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x827b204c
	if (ctx.cr6.eq) goto loc_827B204C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x827b20c8
	if (!ctx.cr6.eq) goto loc_827B20C8;
loc_827B204C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,13604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13604);
	// addi r3,r11,15564
	ctx.r3.s64 = ctx.r11.s64 + 15564;
	// bl 0x827afef0
	ctx.lr = 0x827B2064;
	sub_827AFEF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b20d4
	if (ctx.cr6.eq) goto loc_827B20D4;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,16416
	ctx.r11.s64 = ctx.r11.s64 + 16416;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827b20a8
	if (!ctx.cr6.eq) goto loc_827B20A8;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,13764
	ctx.r9.s64 = ctx.r9.s64 + 13764;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
loc_827B20A8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827b20bc
	if (ctx.cr6.eq) goto loc_827B20BC;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_827B20BC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
loc_827B20C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827B20D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B20E0"))) PPC_WEAK_FUNC(sub_827B20E0);
PPC_FUNC_IMPL(__imp__sub_827B20E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B20E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827b211c
	if (ctx.cr6.eq) goto loc_827B211C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x827b2114
	if (!ctx.cr6.gt) goto loc_827B2114;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x827b2120
	goto loc_827B2120;
loc_827B2114:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x827b2120
	goto loc_827B2120;
loc_827B211C:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_827B2120:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x827b2150
	if (!ctx.cr6.gt) goto loc_827B2150;
loc_827B212C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827b19d8
	ctx.lr = 0x827B2138;
	sub_827B19D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827b2144
	if (!ctx.cr6.eq) goto loc_827B2144;
	// li r28,0
	ctx.r28.s64 = 0;
loc_827B2144:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x827b212c
	if (ctx.cr6.lt) goto loc_827B212C;
loc_827B2150:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B215C"))) PPC_WEAK_FUNC(sub_827B215C);
PPC_FUNC_IMPL(__imp__sub_827B215C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2160"))) PPC_WEAK_FUNC(sub_827B2160);
PPC_FUNC_IMPL(__imp__sub_827B2160) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827b21bc
	if (!ctx.cr6.eq) goto loc_827B21BC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827b21bc
	if (ctx.cr6.eq) goto loc_827B21BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82286490
	ctx.lr = 0x827B21A0;
	sub_82286490(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
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
loc_827B21BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B21D8"))) PPC_WEAK_FUNC(sub_827B21D8);
PPC_FUNC_IMPL(__imp__sub_827B21D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827b20e0
	ctx.lr = 0x827B21F0;
	sub_827B20E0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827b220c
	if (ctx.cr6.eq) goto loc_827B220C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822863e8
	ctx.lr = 0x827B220C;
	sub_822863E8(ctx, base);
loc_827B220C:
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

__attribute__((alias("__imp__sub_827B2220"))) PPC_WEAK_FUNC(sub_827B2220);
PPC_FUNC_IMPL(__imp__sub_827B2220) {
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
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827b2374
	if (ctx.cr6.eq) goto loc_827B2374;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827b2374
	if (!ctx.cr6.eq) goto loc_827B2374;
	// lwz r30,20(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// bl 0x82120040
	ctx.lr = 0x827B2284;
	sub_82120040(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// beq cr6,0x827b22d0
	if (ctx.cr6.eq) goto loc_827B22D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827b22e0
	if (!ctx.cr6.gt) goto loc_827B22E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B22A8:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x827b22a8
	if (ctx.cr6.lt) goto loc_827B22A8;
	// b 0x827b22e0
	goto loc_827B22E0;
loc_827B22D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827b22e0
	if (!ctx.cr6.gt) goto loc_827B22E0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_827B22E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827B22F0;
	sub_82120040(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827b2328
	if (!ctx.cr6.gt) goto loc_827B2328;
	// li r10,0
	ctx.r10.s64 = 0;
loc_827B230C:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x827b230c
	if (ctx.cr6.lt) goto loc_827B230C;
loc_827B2328:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827B2338;
	sub_82120040(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b236c
	if (!ctx.cr6.gt) goto loc_827B236C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B2350:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x827b2350
	if (ctx.cr6.lt) goto loc_827B2350;
loc_827B236C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827B2374:
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

__attribute__((alias("__imp__sub_827B238C"))) PPC_WEAK_FUNC(sub_827B238C);
PPC_FUNC_IMPL(__imp__sub_827B238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2390"))) PPC_WEAK_FUNC(sub_827B2390);
PPC_FUNC_IMPL(__imp__sub_827B2390) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b23c0
	if (ctx.cr6.eq) goto loc_827B23C0;
	// bl 0x82120a70
	ctx.lr = 0x827B23BC;
	sub_82120A70(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_827B23C0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b23d4
	if (ctx.cr6.eq) goto loc_827B23D4;
	// bl 0x82120a70
	ctx.lr = 0x827B23D0;
	sub_82120A70(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_827B23D4:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b23e8
	if (ctx.cr6.eq) goto loc_827B23E8;
	// bl 0x82120a70
	ctx.lr = 0x827B23E4;
	sub_82120A70(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_827B23E8:
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

__attribute__((alias("__imp__sub_827B2400"))) PPC_WEAK_FUNC(sub_827B2400);
PPC_FUNC_IMPL(__imp__sub_827B2400) {
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827b2458
	if (!ctx.cr6.eq) goto loc_827B2458;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b20e0
	ctx.lr = 0x827B2430;
	sub_827B20E0(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827b2458
	if (ctx.cr6.eq) goto loc_827B2458;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822863e8
	ctx.lr = 0x827B244C;
	sub_822863E8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// b 0x827b2460
	goto loc_827B2460;
loc_827B2458:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_827B2460:
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

__attribute__((alias("__imp__sub_827B2478"))) PPC_WEAK_FUNC(sub_827B2478);
PPC_FUNC_IMPL(__imp__sub_827B2478) {
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
	// bl 0x827b20e0
	ctx.lr = 0x827B2490;
	sub_827B20E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b2390
	ctx.lr = 0x827B2498;
	sub_827B2390(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827B24CC"))) PPC_WEAK_FUNC(sub_827B24CC);
PPC_FUNC_IMPL(__imp__sub_827B24CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B24D0"))) PPC_WEAK_FUNC(sub_827B24D0);
PPC_FUNC_IMPL(__imp__sub_827B24D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B24D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// stw r30,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r30.u32);
	// stw r30,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// stw r30,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r30.u32);
	// bl 0x827b20e0
	ctx.lr = 0x827B2514;
	sub_827B20E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b2390
	ctx.lr = 0x827B251C;
	sub_827B2390(ctx, base);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B253C"))) PPC_WEAK_FUNC(sub_827B253C);
PPC_FUNC_IMPL(__imp__sub_827B253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2540"))) PPC_WEAK_FUNC(sub_827B2540);
PPC_FUNC_IMPL(__imp__sub_827B2540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B2548;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b25c0
	if (!ctx.cr6.eq) goto loc_827B25C0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// bl 0x82120040
	ctx.lr = 0x827B2594;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b25a4
	if (ctx.cr6.eq) goto loc_827B25A4;
	// bl 0x827b24d0
	ctx.lr = 0x827B25A0;
	sub_827B24D0(ctx, base);
	// b 0x827b25a8
	goto loc_827B25A8;
loc_827B25A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827B25A8:
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b2220
	ctx.lr = 0x827B25BC;
	sub_827B2220(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_827B25C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B25C8"))) PPC_WEAK_FUNC(sub_827B25C8);
PPC_FUNC_IMPL(__imp__sub_827B25C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827B25D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// beq cr6,0x827b2668
	if (ctx.cr6.eq) goto loc_827B2668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b20e0
	ctx.lr = 0x827B2640;
	sub_827B20E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b2390
	ctx.lr = 0x827B2648;
	sub_827B2390(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// bl 0x82120a70
	ctx.lr = 0x827B2664;
	sub_82120A70(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_827B2668:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2670"))) PPC_WEAK_FUNC(sub_827B2670);
PPC_FUNC_IMPL(__imp__sub_827B2670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B2678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,256
	ctx.r31.s64 = 256;
	// addi r30,r29,140
	ctx.r30.s64 = ctx.r29.s64 + 140;
loc_827B2688:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b25c8
	ctx.lr = 0x827B2690;
	sub_827B25C8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// bne 0x827b2688
	if (!ctx.cr0.eq) goto loc_827B2688;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,33
	ctx.r10.s64 = 33;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827B26AC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x827b26ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B26AC;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B26C4"))) PPC_WEAK_FUNC(sub_827B26C4);
PPC_FUNC_IMPL(__imp__sub_827B26C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B26C8"))) PPC_WEAK_FUNC(sub_827B26C8);
PPC_FUNC_IMPL(__imp__sub_827B26C8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,140
	ctx.r3.s64 = ctx.r10.s64 + 140;
loc_827B26E0:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b26f8
	if (ctx.cr6.eq) goto loc_827B26F8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827b271c
	if (ctx.cr6.eq) goto loc_827B271C;
loc_827B26F8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// blt cr6,0x827b26e0
	if (ctx.cr6.lt) goto loc_827B26E0;
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
loc_827B271C:
	// lwz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r9,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// bl 0x827b25c8
	ctx.lr = 0x827B2738;
	sub_827B25C8(ctx, base);
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

__attribute__((alias("__imp__sub_827B274C"))) PPC_WEAK_FUNC(sub_827B274C);
PPC_FUNC_IMPL(__imp__sub_827B274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2750"))) PPC_WEAK_FUNC(sub_827B2750);
PPC_FUNC_IMPL(__imp__sub_827B2750) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,140
	ctx.r10.s64 = ctx.r31.s64 + 140;
loc_827B2778:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827b27b0
	if (ctx.cr6.eq) goto loc_827B27B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x827b2778
	if (ctx.cr6.lt) goto loc_827B2778;
loc_827B2794:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827B2798:
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
loc_827B27B0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827b2794
	if (ctx.cr6.eq) goto loc_827B2794;
	// mulli r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 * 60;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r3,r10,140
	ctx.r3.s64 = ctx.r10.s64 + 140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b2794
	if (ctx.cr6.eq) goto loc_827B2794;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827b2540
	ctx.lr = 0x827B27D8;
	sub_827B2540(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b2794
	if (ctx.cr6.eq) goto loc_827B2794;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x827b280c
	if (ctx.cr6.eq) goto loc_827B280C;
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// sth r10,14(r30)
	PPC_STORE_U16(ctx.r30.u32 + 14, ctx.r10.u16);
loc_827B280C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827b2798
	goto loc_827B2798;
}

__attribute__((alias("__imp__sub_827B2814"))) PPC_WEAK_FUNC(sub_827B2814);
PPC_FUNC_IMPL(__imp__sub_827B2814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2818"))) PPC_WEAK_FUNC(sub_827B2818);
PPC_FUNC_IMPL(__imp__sub_827B2818) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13604);
	// beq cr6,0x827b2878
	if (ctx.cr6.eq) goto loc_827B2878;
	// lwz r10,15568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15568);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827b2878
	if (!ctx.cr6.eq) goto loc_827B2878;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,15568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15568, ctx.r7.u32);
	// lfs f13,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,15572(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15572, temp.u32);
	// stfs f13,96(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
loc_827B2878:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827b2898
	if (ctx.cr6.eq) goto loc_827B2898;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827b2898
	if (!ctx.cr6.eq) goto loc_827B2898;
	// addi r3,r11,15564
	ctx.r3.s64 = ctx.r11.s64 + 15564;
	// bl 0x827afbd0
	ctx.lr = 0x827B2898;
	sub_827AFBD0(ctx, base);
loc_827B2898:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// bl 0x827b25c8
	ctx.lr = 0x827B28C4;
	sub_827B25C8(ctx, base);
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

__attribute__((alias("__imp__sub_827B28DC"))) PPC_WEAK_FUNC(sub_827B28DC);
PPC_FUNC_IMPL(__imp__sub_827B28DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B28E0"))) PPC_WEAK_FUNC(sub_827B28E0);
PPC_FUNC_IMPL(__imp__sub_827B28E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B28E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,140
	ctx.r31.s64 = ctx.r28.s64 + 140;
	// li r30,255
	ctx.r30.s64 = 255;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
loc_827B2904:
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b25c8
	ctx.lr = 0x827B2910;
	sub_827B25C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// bge 0x827b2904
	if (!ctx.cr0.lt) goto loc_827B2904;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b2670
	ctx.lr = 0x827B2924;
	sub_827B2670(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2930"))) PPC_WEAK_FUNC(sub_827B2930);
PPC_FUNC_IMPL(__imp__sub_827B2930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827B2938;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,256
	ctx.r28.s64 = 256;
	// addi r31,r27,180
	ctx.r31.s64 = ctx.r27.s64 + 180;
loc_827B2948:
	// lwz r30,-40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// addi r29,r31,-40
	ctx.r29.s64 = ctx.r31.s64 + -40;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827b29a4
	if (ctx.cr6.eq) goto loc_827B29A4;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827b2978
	if (!ctx.cr6.eq) goto loc_827B2978;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b29a4
	if (ctx.cr6.eq) goto loc_827B29A4;
	// bl 0x827b1888
	ctx.lr = 0x827B2974;
	sub_827B1888(ctx, base);
	// b 0x827b29a4
	goto loc_827B29A4;
loc_827B2978:
	// lwz r3,-24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// bl 0x8226c008
	ctx.lr = 0x827B2980;
	sub_8226C008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827b29a4
	if (!ctx.cr6.eq) goto loc_827B29A4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x827b29a4
	if (ctx.cr6.eq) goto loc_827B29A4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x827b29a4
	if (ctx.cr6.eq) goto loc_827B29A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827b2818
	ctx.lr = 0x827B29A4;
	sub_827B2818(ctx, base);
loc_827B29A4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// bne 0x827b2948
	if (!ctx.cr0.eq) goto loc_827B2948;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B29B8"))) PPC_WEAK_FUNC(sub_827B29B8);
PPC_FUNC_IMPL(__imp__sub_827B29B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B29C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x827b29e4
	if (!ctx.cr6.eq) goto loc_827B29E4;
loc_827B29D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827B29E4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827b2a0c
	if (ctx.cr6.eq) goto loc_827B2A0C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x827b2a04
	if (!ctx.cr6.gt) goto loc_827B2A04;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x827b2a10
	goto loc_827B2A10;
loc_827B2A04:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x827b2a10
	goto loc_827B2A10;
loc_827B2A0C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_827B2A10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827e07e0
	ctx.lr = 0x827B2A18;
	sub_827E07E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x827b29d8
	if (ctx.cr6.eq) goto loc_827B29D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x827b2a7c
	if (!ctx.cr6.gt) goto loc_827B2A7C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B2A38:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x827b2a54
	if (!ctx.cr6.eq) goto loc_827B2A54;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x827b2a70
	if (ctx.cr6.eq) goto loc_827B2A70;
loc_827B2A54:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x827b2a38
	if (ctx.cr6.lt) goto loc_827B2A38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827B2A70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b2020
	ctx.lr = 0x827B2A78;
	sub_827B2020(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_827B2A7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B2A88"))) PPC_WEAK_FUNC(sub_827B2A88);
PPC_FUNC_IMPL(__imp__sub_827B2A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b2a94
	if (ctx.cr6.eq) goto loc_827B2A94;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
loc_827B2A94:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827b2aa8
	if (ctx.cr6.eq) goto loc_827B2AA8;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
loc_827B2AA8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2ABC"))) PPC_WEAK_FUNC(sub_827B2ABC);
PPC_FUNC_IMPL(__imp__sub_827B2ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B2AC0"))) PPC_WEAK_FUNC(sub_827B2AC0);
PPC_FUNC_IMPL(__imp__sub_827B2AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b2ad8
	if (ctx.cr6.eq) goto loc_827B2AD8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b2ae4
	if (!ctx.cr6.eq) goto loc_827B2AE4;
loc_827B2AD8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_827B2AE4:
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2B20"))) PPC_WEAK_FUNC(sub_827B2B20);
PPC_FUNC_IMPL(__imp__sub_827B2B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b2b68
	if (ctx.cr6.eq) goto loc_827B2B68;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b2b68
	if (ctx.cr6.eq) goto loc_827B2B68;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmuls f13,f2,f2
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
loc_827B2B68:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmuls f13,f2,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2B90"))) PPC_WEAK_FUNC(sub_827B2B90);
PPC_FUNC_IMPL(__imp__sub_827B2B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2be8
	if (ctx.cr6.eq) goto loc_827B2BE8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b2be8
	if (ctx.cr6.eq) goto loc_827B2BE8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2bbc
	if (ctx.cr6.eq) goto loc_827B2BBC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x827b2bc0
	goto loc_827B2BC0;
loc_827B2BBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B2BC0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_827B2BE8:
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
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2C08"))) PPC_WEAK_FUNC(sub_827B2C08);
PPC_FUNC_IMPL(__imp__sub_827B2C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2c60
	if (ctx.cr6.eq) goto loc_827B2C60;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b2c60
	if (ctx.cr6.eq) goto loc_827B2C60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2c34
	if (ctx.cr6.eq) goto loc_827B2C34;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x827b2c38
	goto loc_827B2C38;
loc_827B2C34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B2C38:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,8(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_827B2C60:
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
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2C80"))) PPC_WEAK_FUNC(sub_827B2C80);
PPC_FUNC_IMPL(__imp__sub_827B2C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b2c9c
	if (ctx.cr6.eq) goto loc_827B2C9C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827b2cb4
	if (!ctx.cr6.eq) goto loc_827B2CB4;
loc_827B2C9C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_827B2CB4:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f10,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x827b2e30
	if (ctx.cr6.eq) goto loc_827B2E30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827b2e10
	if (ctx.cr6.eq) goto loc_827B2E10;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827b2ce8
	if (ctx.cr6.eq) goto loc_827B2CE8;
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// b 0x827b2ef4
	goto loc_827B2EF4;
loc_827B2CE8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x827b2e10
	if (ctx.cr6.eq) goto loc_827B2E10;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r8,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827b2e10
	if (ctx.cr6.eq) goto loc_827B2E10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2e10
	if (ctx.cr6.eq) goto loc_827B2E10;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r8,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827b2e10
	if (ctx.cr6.eq) goto loc_827B2E10;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,48(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// lfs f6,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// lfs f5,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,-4012(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f7,f0,f1
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// lfs f12,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f3,f0,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f9,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f2,f0,f9
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,40(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// stfs f4,0(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// lfs f3,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// stfs f1,4(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f9,f1
	ctx.f9.f64 = ctx.f1.f64;
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f0,f6,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,0(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f9,f6,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,4(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f8,f6,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f2.f64));
	// stfs f1,8(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// b 0x827b2ef4
	goto loc_827B2EF4;
loc_827B2E10:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// b 0x827b2ef4
	goto loc_827B2EF4;
loc_827B2E30:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b2ec0
	if (ctx.cr6.eq) goto loc_827B2EC0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r9,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827b2ec0
	if (ctx.cr6.eq) goto loc_827B2EC0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lfs f13,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f9,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// lfs f6,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f4,f0,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f5,f0,f11
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f1,f0,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// b 0x827b2edc
	goto loc_827B2EDC;
loc_827B2EC0:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_827B2EDC:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
loc_827B2EF4:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b2fac
	if (ctx.cr6.eq) goto loc_827B2FAC;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x827b2fac
	if (ctx.cr6.eq) goto loc_827B2FAC;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f11,f0,f0,f6
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x827b2f88
	if (ctx.cr6.eq) goto loc_827B2F88;
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x827b2f74
	if (ctx.cr6.lt) goto loc_827B2F74;
	// lfs f10,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x827b2f88
	if (!ctx.cr6.gt) goto loc_827B2F88;
loc_827B2F74:
	// fdiv f11,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f10.f64 / ctx.f11.f64;
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
loc_827B2F88:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_827B2FAC:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B2FC8"))) PPC_WEAK_FUNC(sub_827B2FC8);
PPC_FUNC_IMPL(__imp__sub_827B2FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b3054
	if (ctx.cr6.eq) goto loc_827B3054;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b3054
	if (ctx.cr6.eq) goto loc_827B3054;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,-8(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lfs f9,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f6,-12(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// clrlwi r10,r5,1
	ctx.r10.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827b3054
	if (!ctx.cr6.eq) goto loc_827B3054;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
loc_827B3054:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// bne cr6,0x827b306c
	if (!ctx.cr6.eq) goto loc_827B306C;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_827B306C:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B3080"))) PPC_WEAK_FUNC(sub_827B3080);
PPC_FUNC_IMPL(__imp__sub_827B3080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f8,-16(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f6,-12(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B30D4"))) PPC_WEAK_FUNC(sub_827B30D4);
PPC_FUNC_IMPL(__imp__sub_827B30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B30D8"))) PPC_WEAK_FUNC(sub_827B30D8);
PPC_FUNC_IMPL(__imp__sub_827B30D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b32c8
	if (ctx.cr6.eq) goto loc_827B32C8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b32c8
	if (ctx.cr6.eq) goto loc_827B32C8;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827b3150
	if (ctx.cr6.eq) goto loc_827B3150;
	// ble cr6,0x827b32c8
	if (!ctx.cr6.gt) goto loc_827B32C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x827b32c8
	if (ctx.cr6.gt) goto loc_827B32C8;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b32c8
	if (ctx.cr6.eq) goto loc_827B32C8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b32c8
	if (ctx.cr6.eq) goto loc_827B32C8;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_827B3150:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b32c8
	if (ctx.cr6.eq) goto loc_827B32C8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827b32c8
	if (ctx.cr6.eq) goto loc_827B32C8;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b3180
	if (ctx.cr6.eq) goto loc_827B3180;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827b3184
	goto loc_827B3184;
loc_827B3180:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827B3184:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b3198
	if (ctx.cr6.eq) goto loc_827B3198;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827b319c
	goto loc_827B319C;
loc_827B3198:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B319C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b3268
	if (ctx.cr6.eq) goto loc_827B3268;
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b3214
	if (ctx.cr6.eq) goto loc_827B3214;
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f0,-4012(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f12,f2,f8
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fadds f11,f1,f6
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_827B3214:
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f8,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfs f0,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f5,0(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_827B3268:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b32c8
	if (ctx.cr6.eq) goto loc_827B32C8;
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// lfs f0,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stfs f4,8(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f3,4(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,8(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_827B32C8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B32E0"))) PPC_WEAK_FUNC(sub_827B32E0);
PPC_FUNC_IMPL(__imp__sub_827B32E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827dfdd0
	ctx.lr = 0x827B32F8;
	sub_827DFDD0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
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
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
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

__attribute__((alias("__imp__sub_827B3360"))) PPC_WEAK_FUNC(sub_827B3360);
PPC_FUNC_IMPL(__imp__sub_827B3360) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b3400
	if (ctx.cr6.eq) goto loc_827B3400;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b3400
	if (ctx.cr6.eq) goto loc_827B3400;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827e0920
	ctx.lr = 0x827B339C;
	sub_827E0920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b3400
	if (ctx.cr6.eq) goto loc_827B3400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b2c80
	ctx.lr = 0x827B33B0;
	sub_827B2C80(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f0,-20168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x827b3404
	if (ctx.cr6.lt) goto loc_827B3404;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827b3404
	goto loc_827B3404;
loc_827B3400:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827B3404:
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

__attribute__((alias("__imp__sub_827B341C"))) PPC_WEAK_FUNC(sub_827B341C);
PPC_FUNC_IMPL(__imp__sub_827B341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3420"))) PPC_WEAK_FUNC(sub_827B3420);
PPC_FUNC_IMPL(__imp__sub_827B3420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B3428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,404(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827b3474
	if (!ctx.cr6.eq) goto loc_827B3474;
loc_827B3444:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bge cr6,0x827b3474
	if (!ctx.cr6.lt) goto loc_827B3474;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ef640
	ctx.lr = 0x827B3454;
	sub_821EF640(ctx, base);
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b3468
	if (ctx.cr6.eq) goto loc_827B3468;
	// lwz r29,404(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_827B3468:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b3444
	if (ctx.cr6.eq) goto loc_827B3444;
loc_827B3474:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B347C"))) PPC_WEAK_FUNC(sub_827B347C);
PPC_FUNC_IMPL(__imp__sub_827B347C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3480"))) PPC_WEAK_FUNC(sub_827B3480);
PPC_FUNC_IMPL(__imp__sub_827B3480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b3494
	if (ctx.cr6.lt) goto loc_827B3494;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_827B3494:
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B34A4"))) PPC_WEAK_FUNC(sub_827B34A4);
PPC_FUNC_IMPL(__imp__sub_827B34A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B34A8"))) PPC_WEAK_FUNC(sub_827B34A8);
PPC_FUNC_IMPL(__imp__sub_827B34A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B34B0"))) PPC_WEAK_FUNC(sub_827B34B0);
PPC_FUNC_IMPL(__imp__sub_827B34B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,428(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_827B34C8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827b34ec
	if (ctx.cr6.eq) goto loc_827B34EC;
	// lwz r7,428(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x827b34c8
	if (ctx.cr6.lt) goto loc_827B34C8;
	// blr 
	return;
loc_827B34EC:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b350c
	if (ctx.cr6.eq) goto loc_827B350C;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
loc_827B350C:
	// lwz r11,428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B351C"))) PPC_WEAK_FUNC(sub_827B351C);
PPC_FUNC_IMPL(__imp__sub_827B351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3520"))) PPC_WEAK_FUNC(sub_827B3520);
PPC_FUNC_IMPL(__imp__sub_827B3520) {
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
	// bl 0x8222dc78
	ctx.lr = 0x827B3538;
	sub_8222DC78(ctx, base);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_827B355C"))) PPC_WEAK_FUNC(sub_827B355C);
PPC_FUNC_IMPL(__imp__sub_827B355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3560"))) PPC_WEAK_FUNC(sub_827B3560);
PPC_FUNC_IMPL(__imp__sub_827B3560) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827b3620
	if (!ctx.cr6.gt) goto loc_827B3620;
	// lwz r8,236(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_827B357C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827b35a0
	if (ctx.cr6.eq) goto loc_827B35A0;
	// lwz r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827b357c
	if (ctx.cr6.lt) goto loc_827B357C;
	// b 0x827b3620
	goto loc_827B3620;
loc_827B35A0:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,236(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827b35dc
	if (!ctx.cr6.gt) goto loc_827B35DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827B35DC:
	// lwz r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x827b3614
	if (!ctx.cr6.lt) goto loc_827B3614;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,-12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_827B3614:
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
loc_827B3620:
	// lwz r11,372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827b3630
	if (!ctx.cr6.eq) goto loc_827B3630;
	// stw r7,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r7.u32);
loc_827B3630:
	// lwz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827b3640
	if (!ctx.cr6.eq) goto loc_827B3640;
	// stw r7,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r7.u32);
loc_827B3640:
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827b3650
	if (!ctx.cr6.eq) goto loc_827B3650;
	// stw r7,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r7.u32);
loc_827B3650:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B3658"))) PPC_WEAK_FUNC(sub_827B3658);
PPC_FUNC_IMPL(__imp__sub_827B3658) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b3690
	if (ctx.cr6.eq) goto loc_827B3690;
	// lwz r8,236(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_827B3670:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,192(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827b3698
	if (ctx.cr6.eq) goto loc_827B3698;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827b3670
	if (ctx.cr6.lt) goto loc_827B3670;
loc_827B3690:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827B3698:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B36AC"))) PPC_WEAK_FUNC(sub_827B36AC);
PPC_FUNC_IMPL(__imp__sub_827B36AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B36B0"))) PPC_WEAK_FUNC(sub_827B36B0);
PPC_FUNC_IMPL(__imp__sub_827B36B0) {
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
	// lwz r3,396(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// bl 0x82208d20
	ctx.lr = 0x827B36C4;
	sub_82208D20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B36E0"))) PPC_WEAK_FUNC(sub_827B36E0);
PPC_FUNC_IMPL(__imp__sub_827B36E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B36E8;
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
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B3704;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b3778
	if (ctx.cr6.eq) goto loc_827B3778;
	// lwz r8,348(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_827B371C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b374c
	if (ctx.cr6.eq) goto loc_827B374C;
	// lwz r7,352(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x827b371c
	if (ctx.cr6.lt) goto loc_827B371C;
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3744;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B374C:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827b376c
	if (!ctx.cr6.lt) goto loc_827B376C;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_827B376C:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
loc_827B3778:
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3780;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3788"))) PPC_WEAK_FUNC(sub_827B3788);
PPC_FUNC_IMPL(__imp__sub_827B3788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B3790;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82c09bec
	ctx.lr = 0x827B37B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b37fc
	if (ctx.cr6.eq) goto loc_827B37FC;
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// beq 0x827b37f8
	if (ctx.cr0.eq) goto loc_827B37F8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82218c20
	ctx.lr = 0x827B37F8;
	sub_82218C20(ctx, base);
loc_827B37F8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_827B37FC:
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3804;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3810"))) PPC_WEAK_FUNC(sub_827B3810);
PPC_FUNC_IMPL(__imp__sub_827B3810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B3818;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82c09bec
	ctx.lr = 0x827B3838;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827b3868
	if (ctx.cr6.eq) goto loc_827B3868;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b3864
	if (!ctx.cr6.eq) goto loc_827B3864;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x827b3878
	goto loc_827B3878;
loc_827B3864:
	// stw r28,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r28.u32);
loc_827B3868:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B3870;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B3878;
	sub_82208CD0(ctx, base);
loc_827B3878:
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3880;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x827b38c0
	if (ctx.cr6.eq) goto loc_827B38C0;
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208ce0
	ctx.lr = 0x827B3890;
	sub_82208CE0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827b38c0
	if (ctx.cr6.eq) goto loc_827B38C0;
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B38A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x82208cd8
	ctx.lr = 0x827B38B0;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B38B8;
	sub_82208CD0(ctx, base);
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B38C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_827B38C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B38C8"))) PPC_WEAK_FUNC(sub_827B38C8);
PPC_FUNC_IMPL(__imp__sub_827B38C8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b3904
	if (ctx.cr6.eq) goto loc_827B3904;
	// li r4,1
	ctx.r4.s64 = 1;
loc_827B3904:
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
	ctx.lr = 0x827B391C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31950
	ctx.r8.s64 = -2093875200;
	// addi r30,r8,-15760
	ctx.r30.s64 = ctx.r8.s64 + -15760;
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B392C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B3934;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B393C;
	sub_82208CD0(ctx, base);
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3944;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208ce0
	ctx.lr = 0x827B394C;
	sub_82208CE0(ctx, base);
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

__attribute__((alias("__imp__sub_827B3964"))) PPC_WEAK_FUNC(sub_827B3964);
PPC_FUNC_IMPL(__imp__sub_827B3964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3968"))) PPC_WEAK_FUNC(sub_827B3968);
PPC_FUNC_IMPL(__imp__sub_827B3968) {
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
	// bl 0x827b3658
	ctx.lr = 0x827B3978;
	sub_827B3658(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827b3990
	if (!ctx.cr6.eq) goto loc_827B3990;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827B3990:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B39A4"))) PPC_WEAK_FUNC(sub_827B39A4);
PPC_FUNC_IMPL(__imp__sub_827B39A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B39A8"))) PPC_WEAK_FUNC(sub_827B39A8);
PPC_FUNC_IMPL(__imp__sub_827B39A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B39B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82c09bec
	ctx.lr = 0x827B39D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b3a78
	if (ctx.cr6.eq) goto loc_827B3A78;
	// lwz r8,336(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_827B39E8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827b3a18
	if (ctx.cr6.eq) goto loc_827B3A18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827b39e8
	if (ctx.cr6.lt) goto loc_827B39E8;
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3A0C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827B3A18:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827b3a78
	if (ctx.cr6.eq) goto loc_827B3A78;
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b3a78
	if (ctx.cr6.eq) goto loc_827B3A78;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
loc_827B3A44:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827b3a74
	if (ctx.cr6.eq) goto loc_827B3A74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827b3a44
	if (ctx.cr6.lt) goto loc_827B3A44;
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3A68;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827B3A74:
	// li r30,1
	ctx.r30.s64 = 1;
loc_827B3A78:
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3A80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3A8C"))) PPC_WEAK_FUNC(sub_827B3A8C);
PPC_FUNC_IMPL(__imp__sub_827B3A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3A90"))) PPC_WEAK_FUNC(sub_827B3A90);
PPC_FUNC_IMPL(__imp__sub_827B3A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B3AA8"))) PPC_WEAK_FUNC(sub_827B3AA8);
PPC_FUNC_IMPL(__imp__sub_827B3AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B3AB0;
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
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B3ACC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b3b04
	if (ctx.cr6.eq) goto loc_827B3B04;
	// lwz r8,336(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_827B3AE4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b3b18
	if (ctx.cr6.eq) goto loc_827B3B18;
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x827b3ae4
	if (ctx.cr6.lt) goto loc_827B3AE4;
loc_827B3B04:
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3B0C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B3B18:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827b3b44
	if (!ctx.cr6.lt) goto loc_827B3B44;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stwx r7,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
loc_827B3B44:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x827B3B58;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3B64"))) PPC_WEAK_FUNC(sub_827B3B64);
PPC_FUNC_IMPL(__imp__sub_827B3B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3B68"))) PPC_WEAK_FUNC(sub_827B3B68);
PPC_FUNC_IMPL(__imp__sub_827B3B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B3B70;
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
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B3B8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b3be0
	if (ctx.cr6.eq) goto loc_827B3BE0;
	// lwz r8,336(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_827B3BA4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b3bd0
	if (ctx.cr6.eq) goto loc_827B3BD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827b3ba4
	if (ctx.cr6.lt) goto loc_827B3BA4;
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3BC8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B3BD0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_827B3BE0:
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3BE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3BF0"))) PPC_WEAK_FUNC(sub_827B3BF0);
PPC_FUNC_IMPL(__imp__sub_827B3BF0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// bl 0x827b3810
	ctx.lr = 0x827B3C10;
	sub_827B3810(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_827B3C2C"))) PPC_WEAK_FUNC(sub_827B3C2C);
PPC_FUNC_IMPL(__imp__sub_827B3C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3C30"))) PPC_WEAK_FUNC(sub_827B3C30);
PPC_FUNC_IMPL(__imp__sub_827B3C30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-15760
	ctx.r31.s64 = ctx.r11.s64 + -15760;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B3C58;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// lwz r31,316(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// bl 0x82c09bdc
	ctx.lr = 0x827B3C64;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_827B3C80"))) PPC_WEAK_FUNC(sub_827B3C80);
PPC_FUNC_IMPL(__imp__sub_827B3C80) {
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
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B3CA8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// bgt cr6,0x827b3cc8
	if (ctx.cr6.gt) goto loc_827B3CC8;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827b3cd8
	if (ctx.cr6.eq) goto loc_827B3CD8;
loc_827B3CC8:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B3CD0;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B3CD8;
	sub_82208CD0(ctx, base);
loc_827B3CD8:
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3CE0;
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

__attribute__((alias("__imp__sub_827B3CF8"))) PPC_WEAK_FUNC(sub_827B3CF8);
PPC_FUNC_IMPL(__imp__sub_827B3CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B3D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r31,r11,-15760
	ctx.r31.s64 = ctx.r11.s64 + -15760;
	// stw r30,400(r29)
	PPC_STORE_U32(ctx.r29.u32 + 400, ctx.r30.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B3D20;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,396(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B3D28;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B3D30;
	sub_82208CD0(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3D38;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,396(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// bl 0x82208ce0
	ctx.lr = 0x827B3D40;
	sub_82208CE0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stw r10,400(r29)
	PPC_STORE_U32(ctx.r29.u32 + 400, ctx.r10.u32);
	// bl 0x82c09bec
	ctx.lr = 0x827B3D50;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r30,316(r29)
	PPC_STORE_U32(ctx.r29.u32 + 316, ctx.r30.u32);
	// lwz r3,392(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// bl 0x82208cd8
	ctx.lr = 0x827B3D5C;
	sub_82208CD8(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3D64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3D6C"))) PPC_WEAK_FUNC(sub_827B3D6C);
PPC_FUNC_IMPL(__imp__sub_827B3D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3D70"))) PPC_WEAK_FUNC(sub_827B3D70);
PPC_FUNC_IMPL(__imp__sub_827B3D70) {
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
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827b3da4
	if (!ctx.cr6.eq) goto loc_827B3DA4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13600);
	// bl 0x827bde78
	ctx.lr = 0x827B3D9C;
	sub_827BDE78(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
loc_827B3DA4:
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

__attribute__((alias("__imp__sub_827B3DB8"))) PPC_WEAK_FUNC(sub_827B3DB8);
PPC_FUNC_IMPL(__imp__sub_827B3DB8) {
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
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B3DE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// lwz r30,316(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x82c09bdc
	ctx.lr = 0x827B3DEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827b3dfc
	if (ctx.cr6.eq) goto loc_827B3DFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b3c80
	ctx.lr = 0x827B3DFC;
	sub_827B3C80(ctx, base);
loc_827B3DFC:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208d20
	ctx.lr = 0x827B3E04;
	sub_82208D20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b3e40
	if (!ctx.cr6.eq) goto loc_827B3E40;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// bne cr6,0x827b3e40
	if (!ctx.cr6.eq) goto loc_827B3E40;
	// stw r10,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b3810
	ctx.lr = 0x827B3E38;
	sub_827B3810(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
loc_827B3E40:
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

__attribute__((alias("__imp__sub_827B3E5C"))) PPC_WEAK_FUNC(sub_827B3E5C);
PPC_FUNC_IMPL(__imp__sub_827B3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3E60"))) PPC_WEAK_FUNC(sub_827B3E60);
PPC_FUNC_IMPL(__imp__sub_827B3E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B3E68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827b3f2c
	if (ctx.cr6.eq) goto loc_827B3F2C;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x827b3f2c
	if (ctx.cr6.eq) goto loc_827B3F2C;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B3E94;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b3ec8
	if (ctx.cr6.eq) goto loc_827B3EC8;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
loc_827B3EA8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827b3f24
	if (ctx.cr6.eq) goto loc_827B3F24;
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b3ea8
	if (ctx.cr6.lt) goto loc_827B3EA8;
loc_827B3EC8:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827b3f08
	if (!ctx.cr6.gt) goto loc_827B3F08;
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b3ef8
	if (ctx.cr6.eq) goto loc_827B3EF8;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x827B3EF4;
	sub_82121828(ctx, base);
	// b 0x827b3f04
	goto loc_827B3F04;
loc_827B3EF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827B3F04;
	sub_82120040(ctx, base);
loc_827B3F04:
	// stw r3,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r3.u32);
loc_827B3F08:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r8.u32);
loc_827B3F24:
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B3F2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_827B3F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B3F34"))) PPC_WEAK_FUNC(sub_827B3F34);
PPC_FUNC_IMPL(__imp__sub_827B3F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B3F38"))) PPC_WEAK_FUNC(sub_827B3F38);
PPC_FUNC_IMPL(__imp__sub_827B3F38) {
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
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b3f6c
	if (ctx.cr6.eq) goto loc_827B3F6C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13600);
	// bl 0x827be240
	ctx.lr = 0x827B3F64;
	sub_827BE240(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r10.u32);
loc_827B3F6C:
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

__attribute__((alias("__imp__sub_827B3F80"))) PPC_WEAK_FUNC(sub_827B3F80);
PPC_FUNC_IMPL(__imp__sub_827B3F80) {
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
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b3fdc
	if (ctx.cr6.lt) goto loc_827B3FDC;
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827b3fd0
	if (!ctx.cr6.eq) goto loc_827B3FD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827B3FCC;
	sub_82120040(ctx, base);
	// b 0x827b3fd8
	goto loc_827B3FD8;
loc_827B3FD0:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x827B3FD8;
	sub_82121828(ctx, base);
loc_827B3FD8:
	// stw r3,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
loc_827B3FDC:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_827B4010"))) PPC_WEAK_FUNC(sub_827B4010);
PPC_FUNC_IMPL(__imp__sub_827B4010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B4018;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8222dc78
	ctx.lr = 0x827B402C;
	sub_8222DC78(ctx, base);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b4044
	if (ctx.cr6.eq) goto loc_827B4044;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827B4044:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// addi r3,r30,588
	ctx.r3.s64 = ctx.r30.s64 + 588;
	// bl 0x82c09bec
	ctx.lr = 0x827B4054;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827b4098
	if (!ctx.cr6.gt) goto loc_827B4098;
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827b408c
	if (!ctx.cr6.eq) goto loc_827B408C;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x827B4088;
	sub_82120040(ctx, base);
	// b 0x827b4094
	goto loc_827B4094;
loc_827B408C:
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82121828
	ctx.lr = 0x827B4094;
	sub_82121828(ctx, base);
loc_827B4094:
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
loc_827B4098:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r3,r30,588
	ctx.r3.s64 = ctx.r30.s64 + 588;
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r8,364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r28.u32);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r6.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x827B40D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B40DC"))) PPC_WEAK_FUNC(sub_827B40DC);
PPC_FUNC_IMPL(__imp__sub_827B40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B40E0"))) PPC_WEAK_FUNC(sub_827B40E0);
PPC_FUNC_IMPL(__imp__sub_827B40E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827B40E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-15760
	ctx.r27.s64 = ctx.r11.s64 + -15760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r27,560
	ctx.r3.s64 = ctx.r27.s64 + 560;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82c09bec
	ctx.lr = 0x827B410C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827b4158
	if (!ctx.cr6.gt) goto loc_827B4158;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x827b414c
	if (!ctx.cr6.eq) goto loc_827B414C;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827B4148;
	sub_82120040(ctx, base);
	// b 0x827b4154
	goto loc_827B4154;
loc_827B414C:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x827B4154;
	sub_82121828(ctx, base);
loc_827B4154:
	// stw r3,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r3.u32);
loc_827B4158:
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r9,412(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// lwz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r9.u32);
	// bne cr6,0x827b41d0
	if (!ctx.cr6.eq) goto loc_827B41D0;
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B41C8;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B41D0;
	sub_82208CD0(ctx, base);
loc_827B41D0:
	// addi r3,r27,560
	ctx.r3.s64 = ctx.r27.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B41D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B41E0"))) PPC_WEAK_FUNC(sub_827B41E0);
PPC_FUNC_IMPL(__imp__sub_827B41E0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-15760
	ctx.r31.s64 = ctx.r11.s64 + -15760;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B4208;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B4210;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B4218;
	sub_82208CD0(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B4220;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// bl 0x82208ce0
	ctx.lr = 0x827B4228;
	sub_82208CE0(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827b40e0
	ctx.lr = 0x827B4240;
	sub_827B40E0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827B4258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_827B4270"))) PPC_WEAK_FUNC(sub_827B4270);
PPC_FUNC_IMPL(__imp__sub_827B4270) {
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
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b429c
	if (ctx.cr6.eq) goto loc_827B429C;
	// bl 0x82783850
	ctx.lr = 0x827B4294;
	sub_82783850(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
loc_827B429C:
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

__attribute__((alias("__imp__sub_827B42B0"))) PPC_WEAK_FUNC(sub_827B42B0);
PPC_FUNC_IMPL(__imp__sub_827B42B0) {
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
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827b4318
	if (!ctx.cr6.gt) goto loc_827B4318;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x827b430c
	if (!ctx.cr6.eq) goto loc_827B430C;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827B4308;
	sub_82120040(ctx, base);
	// b 0x827b4314
	goto loc_827B4314;
loc_827B430C:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x827B4314;
	sub_82121828(ctx, base);
loc_827B4314:
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
loc_827B4318:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r30.u32);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_827B4394"))) PPC_WEAK_FUNC(sub_827B4394);
PPC_FUNC_IMPL(__imp__sub_827B4394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4398"))) PPC_WEAK_FUNC(sub_827B4398);
PPC_FUNC_IMPL(__imp__sub_827B4398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B43A0;
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
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B43BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b43f0
	if (ctx.cr6.eq) goto loc_827B43F0;
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
loc_827B43D0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b4424
	if (ctx.cr6.eq) goto loc_827B4424;
	// lwz r8,340(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b43d0
	if (ctx.cr6.lt) goto loc_827B43D0;
loc_827B43F0:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827b4444
	if (!ctx.cr6.gt) goto loc_827B4444;
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827b4438
	if (!ctx.cr6.eq) goto loc_827B4438;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x827B4420;
	sub_82120040(ctx, base);
	// b 0x827b4440
	goto loc_827B4440;
loc_827B4424:
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B442C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B4438:
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82121828
	ctx.lr = 0x827B4440;
	sub_82121828(ctx, base);
loc_827B4440:
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
loc_827B4444:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,336(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r30,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r30.u32);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r6,340(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r4.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x827B4480;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B448C"))) PPC_WEAK_FUNC(sub_827B448C);
PPC_FUNC_IMPL(__imp__sub_827B448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4490"))) PPC_WEAK_FUNC(sub_827B4490);
PPC_FUNC_IMPL(__imp__sub_827B4490) {
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
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827b44f0
	if (!ctx.cr6.gt) goto loc_827B44F0;
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827b44e4
	if (!ctx.cr6.eq) goto loc_827B44E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82120040
	ctx.lr = 0x827B44E0;
	sub_82120040(ctx, base);
	// b 0x827b44ec
	goto loc_827B44EC;
loc_827B44E4:
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82121828
	ctx.lr = 0x827B44EC;
	sub_82121828(ctx, base);
loc_827B44EC:
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
loc_827B44F0:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,324(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r30,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r30.u32);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r6,328(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_827B453C"))) PPC_WEAK_FUNC(sub_827B453C);
PPC_FUNC_IMPL(__imp__sub_827B453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4540"))) PPC_WEAK_FUNC(sub_827B4540);
PPC_FUNC_IMPL(__imp__sub_827B4540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x827B4548;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stw r10,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b4620
	if (ctx.cr6.eq) goto loc_827B4620;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// beq cr6,0x827b461c
	if (ctx.cr6.eq) goto loc_827B461C;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
loc_827B4588:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b4608
	if (ctx.cr6.eq) goto loc_827B4608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827b4398
	ctx.lr = 0x827B45A8;
	sub_827B4398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b45c4
	if (ctx.cr6.eq) goto loc_827B45C4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b40e0
	ctx.lr = 0x827B45C4;
	sub_827B40E0(ctx, base);
loc_827B45C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827b39a8
	ctx.lr = 0x827B45D0;
	sub_827B39A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827b4608
	if (!ctx.cr6.eq) goto loc_827B4608;
	// stw r26,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r26.u32);
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B45E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B45EC;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B45F4;
	sub_82208CD0(ctx, base);
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B45FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208ce0
	ctx.lr = 0x827B4604;
	sub_82208CE0(ctx, base);
	// stw r25,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r25.u32);
loc_827B4608:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b4588
	if (ctx.cr6.lt) goto loc_827B4588;
loc_827B461C:
	// stw r25,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r25.u32);
loc_827B4620:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4628"))) PPC_WEAK_FUNC(sub_827B4628);
PPC_FUNC_IMPL(__imp__sub_827B4628) {
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
	// beq cr6,0x827b4670
	if (ctx.cr6.eq) goto loc_827B4670;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x827b4670
	if (ctx.cr6.eq) goto loc_827B4670;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x827b40e0
	ctx.lr = 0x827B4664;
	sub_827B40E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b36e0
	ctx.lr = 0x827B4670;
	sub_827B36E0(ctx, base);
loc_827B4670:
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

__attribute__((alias("__imp__sub_827B4688"))) PPC_WEAK_FUNC(sub_827B4688);
PPC_FUNC_IMPL(__imp__sub_827B4688) {
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
	// beq cr6,0x827b46f0
	if (ctx.cr6.eq) goto loc_827B46F0;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x827b46f0
	if (ctx.cr6.eq) goto loc_827B46F0;
	// bl 0x827b4398
	ctx.lr = 0x827B46B8;
	sub_827B4398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b46d4
	if (ctx.cr6.eq) goto loc_827B46D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b40e0
	ctx.lr = 0x827B46D4;
	sub_827B40E0(ctx, base);
loc_827B46D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b4490
	ctx.lr = 0x827B46E4;
	sub_827B4490(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b3e60
	ctx.lr = 0x827B46F0;
	sub_827B3E60(ctx, base);
loc_827B46F0:
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

__attribute__((alias("__imp__sub_827B4708"))) PPC_WEAK_FUNC(sub_827B4708);
PPC_FUNC_IMPL(__imp__sub_827B4708) {
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
	// beq cr6,0x827b4760
	if (ctx.cr6.eq) goto loc_827B4760;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x827b4760
	if (ctx.cr6.eq) goto loc_827B4760;
	// bl 0x827b4398
	ctx.lr = 0x827B4738;
	sub_827B4398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b4754
	if (ctx.cr6.eq) goto loc_827B4754;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b40e0
	ctx.lr = 0x827B4754;
	sub_827B40E0(ctx, base);
loc_827B4754:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b3e60
	ctx.lr = 0x827B4760;
	sub_827B3E60(ctx, base);
loc_827B4760:
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

__attribute__((alias("__imp__sub_827B4778"))) PPC_WEAK_FUNC(sub_827B4778);
PPC_FUNC_IMPL(__imp__sub_827B4778) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827b3db8
	ctx.lr = 0x827B4798;
	sub_827B3DB8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b40e0
	ctx.lr = 0x827B47AC;
	sub_827B40E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// stw r11,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r11.u32);
	// addi r31,r10,-15760
	ctx.r31.s64 = ctx.r10.s64 + -15760;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B47C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B47CC;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B47D4;
	sub_82208CD0(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B47DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// bl 0x82208ce0
	ctx.lr = 0x827B47E4;
	sub_82208CE0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_827B4804"))) PPC_WEAK_FUNC(sub_827B4804);
PPC_FUNC_IMPL(__imp__sub_827B4804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4808"))) PPC_WEAK_FUNC(sub_827B4808);
PPC_FUNC_IMPL(__imp__sub_827B4808) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x827b40e0
	sub_827B40E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4818"))) PPC_WEAK_FUNC(sub_827B4818);
PPC_FUNC_IMPL(__imp__sub_827B4818) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827b3db8
	ctx.lr = 0x827B483C;
	sub_827B3DB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b40e0
	ctx.lr = 0x827B4850;
	sub_827B40E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// stw r11,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r11.u32);
	// addi r31,r10,-15760
	ctx.r31.s64 = ctx.r10.s64 + -15760;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B4868;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B4870;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B4878;
	sub_82208CD0(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B4880;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// bl 0x82208ce0
	ctx.lr = 0x827B4888;
	sub_82208CE0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_827B48A8"))) PPC_WEAK_FUNC(sub_827B48A8);
PPC_FUNC_IMPL(__imp__sub_827B48A8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x827b40e0
	sub_827B40E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B48C8"))) PPC_WEAK_FUNC(sub_827B48C8);
PPC_FUNC_IMPL(__imp__sub_827B48C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B48CC"))) PPC_WEAK_FUNC(sub_827B48CC);
PPC_FUNC_IMPL(__imp__sub_827B48CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B48D0"))) PPC_WEAK_FUNC(sub_827B48D0);
PPC_FUNC_IMPL(__imp__sub_827B48D0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x827b40e0
	sub_827B40E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B48F0"))) PPC_WEAK_FUNC(sub_827B48F0);
PPC_FUNC_IMPL(__imp__sub_827B48F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B48F4"))) PPC_WEAK_FUNC(sub_827B48F4);
PPC_FUNC_IMPL(__imp__sub_827B48F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B48F8"))) PPC_WEAK_FUNC(sub_827B48F8);
PPC_FUNC_IMPL(__imp__sub_827B48F8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x827b40e0
	sub_827B40E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4908"))) PPC_WEAK_FUNC(sub_827B4908);
PPC_FUNC_IMPL(__imp__sub_827B4908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B4910;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82c09bec
	ctx.lr = 0x827B4930;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bne cr6,0x827b4968
	if (!ctx.cr6.eq) goto loc_827B4968;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827b4960
	if (ctx.cr6.eq) goto loc_827B4960;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x827b4968
	if (!ctx.cr6.eq) goto loc_827B4968;
loc_827B4960:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827b496c
	goto loc_827B496C;
loc_827B4968:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B496C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827b4988
	if (!ctx.cr6.eq) goto loc_827B4988;
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b49d0
	if (ctx.cr6.eq) goto loc_827B49D0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827b49d0
	if (!ctx.cr6.eq) goto loc_827B49D0;
loc_827B4988:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b49b8
	if (ctx.cr6.eq) goto loc_827B49B8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b40e0
	ctx.lr = 0x827B49A8;
	sub_827B40E0(ctx, base);
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B49B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827B49B8:
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B49C8;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B49D0;
	sub_82208CD0(ctx, base);
loc_827B49D0:
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B49D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B49E0"))) PPC_WEAK_FUNC(sub_827B49E0);
PPC_FUNC_IMPL(__imp__sub_827B49E0) {
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
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b4a48
	if (ctx.cr6.eq) goto loc_827B4A48;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827b4a38
	if (!ctx.cr6.lt) goto loc_827B4A38;
loc_827B4A18:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b4a34
	if (ctx.cr6.eq) goto loc_827B4A34;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b4a18
	if (ctx.cr6.lt) goto loc_827B4A18;
	// b 0x827b4a38
	goto loc_827B4A38;
loc_827B4A34:
	// bl 0x82746598
	ctx.lr = 0x827B4A38;
	sub_82746598(ctx, base);
loc_827B4A38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82125080
	ctx.lr = 0x827B4A44;
	sub_82125080(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_827B4A48:
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

__attribute__((alias("__imp__sub_827B4A60"))) PPC_WEAK_FUNC(sub_827B4A60);
PPC_FUNC_IMPL(__imp__sub_827B4A60) {
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
	// lwz r11,388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// addi r31,r3,388
	ctx.r31.s64 = ctx.r3.s64 + 388;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b4a90
	if (ctx.cr6.eq) goto loc_827B4A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82753980
	ctx.lr = 0x827B4A88;
	sub_82753980(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827B4A90:
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

__attribute__((alias("__imp__sub_827B4AA4"))) PPC_WEAK_FUNC(sub_827B4AA4);
PPC_FUNC_IMPL(__imp__sub_827B4AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4AA8"))) PPC_WEAK_FUNC(sub_827B4AA8);
PPC_FUNC_IMPL(__imp__sub_827B4AA8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,13412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// bl 0x827ef3d0
	ctx.lr = 0x827B4AD0;
	sub_827EF3D0(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b4ae0
	if (!ctx.cr6.eq) goto loc_827B4AE0;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_827B4AE0:
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

__attribute__((alias("__imp__sub_827B4AF8"))) PPC_WEAK_FUNC(sub_827B4AF8);
PPC_FUNC_IMPL(__imp__sub_827B4AF8) {
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
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b4b4c
	if (!ctx.cr6.eq) goto loc_827B4B4C;
	// bl 0x827f68c8
	ctx.lr = 0x827B4B1C;
	sub_827F68C8(ctx, base);
	// stw r3,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r3.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x827f6ca8
	ctx.lr = 0x827B4B28;
	sub_827F6CA8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// addi r9,r10,-8512
	ctx.r9.s64 = ctx.r10.s64 + -8512;
	// lwz r8,-8512(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8512);
	// stw r8,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r7.u32);
	// lhz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// sth r6,140(r11)
	PPC_STORE_U16(ctx.r11.u32 + 140, ctx.r6.u16);
loc_827B4B4C:
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

__attribute__((alias("__imp__sub_827B4B60"))) PPC_WEAK_FUNC(sub_827B4B60);
PPC_FUNC_IMPL(__imp__sub_827B4B60) {
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
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b4bbc
	if (!ctx.cr6.eq) goto loc_827B4BBC;
	// bl 0x827f68c8
	ctx.lr = 0x827B4B84;
	sub_827F68C8(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r3.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x827f6ca8
	ctx.lr = 0x827B4B90;
	sub_827F6CA8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// addi r9,r10,-8524
	ctx.r9.s64 = ctx.r10.s64 + -8524;
	// lwz r8,-8524(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8524);
	// stw r8,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r7.u32);
	// lhz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// sth r6,140(r11)
	PPC_STORE_U16(ctx.r11.u32 + 140, ctx.r6.u16);
	// lbz r5,10(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10);
	// stb r5,142(r11)
	PPC_STORE_U8(ctx.r11.u32 + 142, ctx.r5.u8);
loc_827B4BBC:
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

__attribute__((alias("__imp__sub_827B4BD0"))) PPC_WEAK_FUNC(sub_827B4BD0);
PPC_FUNC_IMPL(__imp__sub_827B4BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x827B4BD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r29,13408(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13408);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r27,24(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// beq cr6,0x827b4cd4
	if (ctx.cr6.eq) goto loc_827B4CD4;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x827b4cd4
	if (ctx.cr6.eq) goto loc_827B4CD4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcd558
	ctx.lr = 0x827B4C20;
	sub_82BCD558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b4cdc
	if (ctx.cr6.eq) goto loc_827B4CDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827b4cdc
	if (!ctx.cr6.gt) goto loc_827B4CDC;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
loc_827B4C44:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x827b4c68
	if (ctx.cr6.eq) goto loc_827B4C68;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,13412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x827c0bb0
	ctx.lr = 0x827B4C60;
	sub_827C0BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b4c90
	if (ctx.cr6.eq) goto loc_827B4C90;
loc_827B4C68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82133e60
	ctx.lr = 0x827B4C7C;
	sub_82133E60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x827b4c90
	if (!ctx.cr6.eq) goto loc_827B4C90;
	// li r23,1
	ctx.r23.s64 = 1;
loc_827B4C90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827b4c44
	if (ctx.cr6.lt) goto loc_827B4C44;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,13408(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13408);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r28,-4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// beq cr6,0x827b4cd0
	if (ctx.cr6.eq) goto loc_827B4CD0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f1958
	ctx.lr = 0x827B4CD0;
	sub_827F1958(ctx, base);
loc_827B4CD0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_827B4CD4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
loc_827B4CDC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x827b4d00
	if (ctx.cr6.eq) goto loc_827B4D00;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x827c0bb0
	ctx.lr = 0x827B4CF8;
	sub_827C0BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b4cd0
	if (ctx.cr6.eq) goto loc_827B4CD0;
loc_827B4D00:
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82133e60
	ctx.lr = 0x827B4D10;
	sub_82133E60(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4D20"))) PPC_WEAK_FUNC(sub_827B4D20);
PPC_FUNC_IMPL(__imp__sub_827B4D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827B4D28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82120040
	ctx.lr = 0x827B4D44;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b4d64
	if (ctx.cr6.eq) goto loc_827B4D64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82121af0
	ctx.lr = 0x827B4D5C;
	sub_82121AF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x827b4d68
	goto loc_827B4D68;
loc_827B4D64:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827B4D68:
	// li r30,6
	ctx.r30.s64 = 6;
loc_827B4D6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82121b48
	ctx.lr = 0x827B4D80;
	sub_82121B48(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x827b4d6c
	if (!ctx.cr0.eq) goto loc_827B4D6C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b3db8
	ctx.lr = 0x827B4D98;
	sub_827B3DB8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b40e0
	ctx.lr = 0x827B4DAC;
	sub_827B40E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// addi r30,r10,-15760
	ctx.r30.s64 = ctx.r10.s64 + -15760;
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B4DC4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827B4DCC;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B4DD4;
	sub_82208CD0(ctx, base);
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B4DDC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208ce0
	ctx.lr = 0x827B4DE4;
	sub_82208CE0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4DF4"))) PPC_WEAK_FUNC(sub_827B4DF4);
PPC_FUNC_IMPL(__imp__sub_827B4DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4DF8"))) PPC_WEAK_FUNC(sub_827B4DF8);
PPC_FUNC_IMPL(__imp__sub_827B4DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827B4E00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82120040
	ctx.lr = 0x827B4E20;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b4e40
	if (ctx.cr6.eq) goto loc_827B4E40;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82121af0
	ctx.lr = 0x827B4E38;
	sub_82121AF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x827b4e44
	goto loc_827B4E44;
loc_827B4E40:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827B4E44:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x827b4e64
	if (!ctx.cr6.gt) goto loc_827B4E64;
loc_827B4E4C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82121b48
	ctx.lr = 0x827B4E58;
	sub_82121B48(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x827b4e4c
	if (!ctx.cr0.eq) goto loc_827B4E4C;
loc_827B4E64:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b40e0
	ctx.lr = 0x827B4E78;
	sub_827B40E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4E80"))) PPC_WEAK_FUNC(sub_827B4E80);
PPC_FUNC_IMPL(__imp__sub_827B4E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x827B4E88;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827b4f04
	if (!ctx.cr6.gt) goto loc_827B4F04;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// addi r29,r11,-8380
	ctx.r29.s64 = ctx.r11.s64 + -8380;
loc_827B4EB4:
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82219e28
	ctx.lr = 0x827B4EC8;
	sub_82219E28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,13600(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13600);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x827bf438
	ctx.lr = 0x827B4ED8;
	sub_827BF438(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b4ef0
	if (ctx.cr6.eq) goto loc_827B4EF0;
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x827e0670
	ctx.lr = 0x827B4EF0;
	sub_827E0670(ctx, base);
loc_827B4EF0:
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b4eb4
	if (ctx.cr6.lt) goto loc_827B4EB4;
loc_827B4F04:
	// stw r26,428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 428, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4F10"))) PPC_WEAK_FUNC(sub_827B4F10);
PPC_FUNC_IMPL(__imp__sub_827B4F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B4F18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,192(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 192);
	// bl 0x827b3658
	ctx.lr = 0x827B4F28;
	sub_827B3658(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b4fbc
	if (ctx.cr6.eq) goto loc_827B4FBC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x827b4fbc
	if (ctx.cr6.gt) goto loc_827B4FBC;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,16(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,4(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x82120040
	ctx.lr = 0x827B4F60;
	sub_82120040(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x827b4fa0
	if (!ctx.cr6.lt) goto loc_827B4FA0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_827B4F70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b4f94
	if (ctx.cr6.eq) goto loc_827B4F94;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x827b4f94
	if (ctx.cr6.eq) goto loc_827B4F94;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_827B4F94:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x827b4f70
	if (ctx.cr6.lt) goto loc_827B4F70;
loc_827B4FA0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,13412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// bl 0x827ef600
	ctx.lr = 0x827B4FB4;
	sub_827EF600(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82120a70
	ctx.lr = 0x827B4FBC;
	sub_82120A70(ctx, base);
loc_827B4FBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B4FC4"))) PPC_WEAK_FUNC(sub_827B4FC4);
PPC_FUNC_IMPL(__imp__sub_827B4FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B4FC8"))) PPC_WEAK_FUNC(sub_827B4FC8);
PPC_FUNC_IMPL(__imp__sub_827B4FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B4FD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82208c28
	ctx.lr = 0x827B4FDC;
	sub_82208C28(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-8372
	ctx.r10.s64 = ctx.r11.s64 + -8372;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r29,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r29.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x82136b60
	ctx.lr = 0x827B500C;
	sub_82136B60(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x82136b60
	ctx.lr = 0x827B5014;
	sub_82136B60(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r29,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r29.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// stw r29,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r29.u32);
	// stb r9,300(r31)
	PPC_STORE_U8(ctx.r31.u32 + 300, ctx.r9.u8);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// bl 0x82120040
	ctx.lr = 0x827B50BC;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b50d4
	if (ctx.cr6.eq) goto loc_827B50D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208c78
	ctx.lr = 0x827B50D0;
	sub_82208C78(ctx, base);
	// b 0x827b50d8
	goto loc_827B50D8;
loc_827B50D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_827B50D8:
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82120040
	ctx.lr = 0x827B50E8;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b5100
	if (ctx.cr6.eq) goto loc_827B5100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208c78
	ctx.lr = 0x827B50FC;
	sub_82208C78(ctx, base);
	// b 0x827b5104
	goto loc_827B5104;
loc_827B5100:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_827B5104:
	// stw r3,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b4af8
	ctx.lr = 0x827B5110;
	sub_827B4AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b4b60
	ctx.lr = 0x827B5118;
	sub_827B4B60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b38c8
	ctx.lr = 0x827B5120;
	sub_827B38C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B512C"))) PPC_WEAK_FUNC(sub_827B512C);
PPC_FUNC_IMPL(__imp__sub_827B512C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B5130"))) PPC_WEAK_FUNC(sub_827B5130);
PPC_FUNC_IMPL(__imp__sub_827B5130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x827B5138;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b53d4
	if (ctx.cr6.eq) goto loc_827B53D4;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82121af0
	ctx.lr = 0x827B5160;
	sub_82121AF0(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r24,r11,-15760
	ctx.r24.s64 = ctx.r11.s64 + -15760;
	// addi r3,r24,588
	ctx.r3.s64 = ctx.r24.s64 + 588;
	// bl 0x82c09bec
	ctx.lr = 0x827B5170;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b52b0
	if (ctx.cr6.eq) goto loc_827B52B0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_827B5184:
	// lwz r11,360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x827b529c
	if (ctx.cr6.gt) goto loc_827B529C;
	// lis r12,-32133
	ctx.r12.s64 = -2105868288;
	// addi r12,r12,20912
	ctx.r12.s64 = ctx.r12.s64 + 20912;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_827B51D0;
	case 1:
		goto loc_827B51E8;
	case 2:
		goto loc_827B5230;
	case 3:
		goto loc_827B5244;
	case 4:
		goto loc_827B527C;
	case 5:
		goto loc_827B5264;
	case 6:
		goto loc_827B527C;
	case 7:
		goto loc_827B527C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,20944(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20944);
	// lwz r19,20968(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20968);
	// lwz r19,21040(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21040);
	// lwz r19,21060(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21060);
	// lwz r19,21116(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21116);
	// lwz r19,21092(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21092);
	// lwz r19,21116(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21116);
	// lwz r19,21116(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21116);
loc_827B51D0:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B51E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827b529c
	goto loc_827B529C;
loc_827B51E8:
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827b5224
	if (!ctx.cr6.gt) goto loc_827B5224;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
loc_827B5200:
	// lwz r23,0(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827d02b0
	ctx.lr = 0x827B5208;
	sub_827D02B0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x827cfa50
	ctx.lr = 0x827B5210;
	sub_827CFA50(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827b5200
	if (ctx.cr6.lt) goto loc_827B5200;
loc_827B5224:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x827B522C;
	sub_82120A70(ctx, base);
	// b 0x827b529c
	goto loc_827B529C;
loc_827B5230:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x827ce8f8
	ctx.lr = 0x827B5238;
	sub_827CE8F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827cdf90
	ctx.lr = 0x827B5240;
	sub_827CDF90(ctx, base);
	// b 0x827b529c
	goto loc_827B529C;
loc_827B5244:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b529c
	if (ctx.cr6.eq) goto loc_827B529C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b97588
	ctx.lr = 0x827B5258;
	sub_82B97588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x827B5260;
	sub_82120A70(ctx, base);
	// b 0x827b529c
	goto loc_827B529C;
loc_827B5264:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82121b48
	ctx.lr = 0x827B5278;
	sub_82121B48(ctx, base);
	// b 0x827b529c
	goto loc_827B529C;
loc_827B527C:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b529c
	if (ctx.cr6.eq) goto loc_827B529C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B529C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B529C:
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b5184
	if (ctx.cr6.lt) goto loc_827B5184;
loc_827B52B0:
	// stw r25,364(r28)
	PPC_STORE_U32(ctx.r28.u32 + 364, ctx.r25.u32);
	// addi r3,r24,588
	ctx.r3.s64 = ctx.r24.s64 + 588;
	// bl 0x82c09bdc
	ctx.lr = 0x827B52BC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b53d4
	if (ctx.cr6.eq) goto loc_827B53D4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi. r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827b5370
	if (ctx.cr0.eq) goto loc_827B5370;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x82137170
	ctx.lr = 0x827B52E4;
	sub_82137170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b5370
	if (ctx.cr6.eq) goto loc_827B5370;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
loc_827B52F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b5310
	if (ctx.cr6.eq) goto loc_827B5310;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b5314
	if (ctx.cr6.lt) goto loc_827B5314;
loc_827B5310:
	// twi 31,r0,22
loc_827B5314:
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r3,13520(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13520);
	// bl 0x827df7b8
	ctx.lr = 0x827B5320;
	sub_827DF7B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x827b5354
	if (ctx.cr6.eq) goto loc_827B5354;
	// bl 0x82285230
	ctx.lr = 0x827B5330;
	sub_82285230(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r27,r10,1
	ctx.r27.u64 = ctx.r10.u64 ^ 1;
	// bl 0x827dfef0
	ctx.lr = 0x827B5340;
	sub_827DFEF0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827b5354
	if (ctx.cr6.eq) goto loc_827B5354;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13520(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13520);
	// bl 0x827dfa00
	ctx.lr = 0x827B5354;
	sub_827DFA00(ctx, base);
loc_827B5354:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82137170
	ctx.lr = 0x827B5364;
	sub_82137170(ctx, base);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x827b52f4
	if (ctx.cr6.lt) goto loc_827B52F4;
loc_827B5370:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b53d4
	if (ctx.cr6.eq) goto loc_827B53D4;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,-17448(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// lwz r30,-17440(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x827B5394;
	sub_821FD9D8(ctx, base);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,-17444(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17444);
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
	ctx.lr = 0x827B53C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b53d4
	if (ctx.cr6.eq) goto loc_827B53D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827B53D4;
	sub_821FD9E0(ctx, base);
loc_827B53D4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B53DC"))) PPC_WEAK_FUNC(sub_827B53DC);
PPC_FUNC_IMPL(__imp__sub_827B53DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B53E0"))) PPC_WEAK_FUNC(sub_827B53E0);
PPC_FUNC_IMPL(__imp__sub_827B53E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B53E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b5428
	if (ctx.cr6.eq) goto loc_827B5428;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,60
	ctx.r3.s64 = 60;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B5418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b5130
	ctx.lr = 0x827B5420;
	sub_827B5130(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827B5428:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// addi r3,r30,588
	ctx.r3.s64 = ctx.r30.s64 + 588;
	// bl 0x82c09bec
	ctx.lr = 0x827B5438;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r3,r30,588
	ctx.r3.s64 = ctx.r30.s64 + 588;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r29,r9,1
	ctx.r29.u64 = ctx.r9.u64 ^ 1;
	// bl 0x82c09bdc
	ctx.lr = 0x827B5450;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827b54b8
	if (ctx.cr6.eq) goto loc_827B54B8;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
loc_827B545C:
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b5488
	if (ctx.cr6.eq) goto loc_827B5488;
	// lwz r11,12728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12728);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,60
	ctx.r3.s64 = 60;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827B5480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b5130
	ctx.lr = 0x827B5488;
	sub_827B5130(ctx, base);
loc_827B5488:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821ef640
	ctx.lr = 0x827B5490;
	sub_821EF640(ctx, base);
	// addi r3,r30,588
	ctx.r3.s64 = ctx.r30.s64 + 588;
	// bl 0x82c09bec
	ctx.lr = 0x827B5498;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r3,r30,588
	ctx.r3.s64 = ctx.r30.s64 + 588;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r28,r9,1
	ctx.r28.u64 = ctx.r9.u64 ^ 1;
	// bl 0x82c09bdc
	ctx.lr = 0x827B54B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x827b545c
	if (!ctx.cr6.eq) goto loc_827B545C;
loc_827B54B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B54C0"))) PPC_WEAK_FUNC(sub_827B54C0);
PPC_FUNC_IMPL(__imp__sub_827B54C0) {
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
	// lwz r11,13404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13404);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x827cbfc0
	ctx.lr = 0x827B54E0;
	sub_827CBFC0(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,13556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13556, ctx.r11.u32);
	// bl 0x82c02420
	ctx.lr = 0x827B54F8;
	sub_82C02420(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B5508"))) PPC_WEAK_FUNC(sub_827B5508);
PPC_FUNC_IMPL(__imp__sub_827B5508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x827B5510;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82136b60
	ctx.lr = 0x827B5520;
	sub_82136B60(ctx, base);
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827b553c
	if (!ctx.cr6.eq) goto loc_827B553C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82136bf8
	ctx.lr = 0x827B5534;
	sub_82136BF8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
loc_827B553C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,248(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x827b4bd0
	ctx.lr = 0x827B5554;
	sub_827B4BD0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r26,380(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
loc_827B5578:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b5590
	if (ctx.cr6.eq) goto loc_827B5590;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b5594
	if (ctx.cr6.eq) goto loc_827B5594;
loc_827B5590:
	// twi 31,r0,22
loc_827B5594:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b5650
	if (ctx.cr6.eq) goto loc_827B5650;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b55b0
	if (!ctx.cr6.eq) goto loc_827B55B0;
	// twi 31,r0,22
loc_827B55B0:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b55c0
	if (!ctx.cr6.eq) goto loc_827B55C0;
	// twi 31,r0,22
loc_827B55C0:
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82137248
	ctx.lr = 0x827B55D0;
	sub_82137248(ctx, base);
	// addi r31,r28,268
	ctx.r31.s64 = ctx.r28.s64 + 268;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821370d0
	ctx.lr = 0x827B55E4;
	sub_821370D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,272(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b55fc
	if (ctx.cr6.eq) goto loc_827B55FC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827b5600
	if (ctx.cr6.eq) goto loc_827B5600;
loc_827B55FC:
	// twi 31,r0,22
loc_827B5600:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b5578
	if (ctx.cr6.eq) goto loc_827B5578;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b3658
	ctx.lr = 0x827B5618;
	sub_827B3658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b4f10
	ctx.lr = 0x827B5628;
	sub_827B4F10(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r28,256
	ctx.r4.s64 = ctx.r28.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82133e60
	ctx.lr = 0x827B563C;
	sub_82133E60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82136c68
	ctx.lr = 0x827B564C;
	sub_82136C68(ctx, base);
	// b 0x827b5578
	goto loc_827B5578;
loc_827B5650:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b3658
	ctx.lr = 0x827B565C;
	sub_827B3658(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 380, ctx.r11.u32);
	// lwz r3,13604(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13604);
	// lwz r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// bl 0x827ba2d0
	ctx.lr = 0x827B5674;
	sub_827BA2D0(ctx, base);
	// lwz r9,380(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x827b56c0
	if (ctx.cr6.eq) goto loc_827B56C0;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
loc_827B5690:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b56b4
	if (ctx.cr6.eq) goto loc_827B56B4;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x827b56b4
	if (!ctx.cr6.eq) goto loc_827B56B4;
	// lwz r3,13424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13424);
	// lwz r5,380(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// bl 0x827ede80
	ctx.lr = 0x827B56B4;
	sub_827EDE80(ctx, base);
loc_827B56B4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x827b5690
	if (!ctx.cr0.eq) goto loc_827B5690;
loc_827B56C0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827b56e0
	if (ctx.cr6.eq) goto loc_827B56E0;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,13548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13548, ctx.r11.u32);
	// stw r10,13348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13348, ctx.r10.u32);
loc_827B56E0:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r28,300
	ctx.r27.s64 = ctx.r28.s64 + 300;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// addi r29,r11,-15760
	ctx.r29.s64 = ctx.r11.s64 + -15760;
loc_827B56FC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b57ac
	if (ctx.cr6.eq) goto loc_827B57AC;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827b57ac
	if (!ctx.cr6.lt) goto loc_827B57AC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b573c
	if (ctx.cr6.eq) goto loc_827B573C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827b5740
	if (ctx.cr6.lt) goto loc_827B5740;
loc_827B573C:
	// twi 31,r0,22
loc_827B5740:
	// lwzx r31,r24,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x827b57a0
	if (ctx.cr6.eq) goto loc_827B57A0;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// lwz r30,12480(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x827B5758;
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
	ctx.lr = 0x827B5774;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x827B5780;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x827b57a0
	if (ctx.cr6.eq) goto loc_827B57A0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b57a0
	if (ctx.cr6.eq) goto loc_827B57A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,13412(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13412);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827f0ad0
	ctx.lr = 0x827B57A0;
	sub_827F0AD0(ctx, base);
loc_827B57A0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x827b56fc
	goto loc_827B56FC;
loc_827B57AC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 296, ctx.r11.u32);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x827b57d0
	if (!ctx.cr6.gt) goto loc_827B57D0;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
loc_827B57D0:
	// beq cr6,0x827b57f4
	if (ctx.cr6.eq) goto loc_827B57F4;
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
	// ble 0x827b57f0
	if (!ctx.cr0.gt) goto loc_827B57F0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8221b920
	ctx.lr = 0x827B57F0;
	sub_8221B920(ctx, base);
loc_827B57F0:
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
loc_827B57F4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x821372f0
	ctx.lr = 0x827B5828;
	sub_821372F0(ctx, base);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827b588c
	if (ctx.cr6.eq) goto loc_827B588C;
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
	ctx.lr = 0x827B584C;
	sub_821FD9D8(ctx, base);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,-17444(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17444);
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
	ctx.lr = 0x827B587C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b588c
	if (ctx.cr6.eq) goto loc_827B588C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827B588C;
	sub_821FD9E0(ctx, base);
loc_827B588C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B5894"))) PPC_WEAK_FUNC(sub_827B5894);
PPC_FUNC_IMPL(__imp__sub_827B5894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B5898"))) PPC_WEAK_FUNC(sub_827B5898);
PPC_FUNC_IMPL(__imp__sub_827B5898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B58A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,192(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 192);
	// bl 0x827b3658
	ctx.lr = 0x827B58B0;
	sub_827B3658(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b58c8
	if (ctx.cr6.eq) goto loc_827B58C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bgt 0x827b5940
	if (ctx.cr0.gt) goto loc_827B5940;
loc_827B58C8:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,16(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,4(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x82120040
	ctx.lr = 0x827B58E4;
	sub_82120040(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x827b5924
	if (!ctx.cr6.lt) goto loc_827B5924;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_827B58F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b5918
	if (ctx.cr6.eq) goto loc_827B5918;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x827b5918
	if (ctx.cr6.eq) goto loc_827B5918;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_827B5918:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x827b58f4
	if (ctx.cr6.lt) goto loc_827B58F4;
loc_827B5924:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,13412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// bl 0x827f0948
	ctx.lr = 0x827B5938;
	sub_827F0948(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82120a70
	ctx.lr = 0x827B5940;
	sub_82120A70(ctx, base);
loc_827B5940:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B5948"))) PPC_WEAK_FUNC(sub_827B5948);
PPC_FUNC_IMPL(__imp__sub_827B5948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x827B5950;
	__savegprlr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82136b60
	ctx.lr = 0x827B5968;
	sub_82136B60(ctx, base);
	// lwz r7,296(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 296);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplw cr6,r7,r21
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x827b599c
	if (!ctx.cr6.eq) goto loc_827B599C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b598c
	if (ctx.cr6.eq) goto loc_827B598C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82136b08
	ctx.lr = 0x827B598C;
	sub_82136B08(ctx, base);
loc_827B598C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82136bf8
	ctx.lr = 0x827B5994;
	sub_82136BF8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
loc_827B599C:
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x827b59e0
	if (ctx.cr6.eq) goto loc_827B59E0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r11,-8480
	ctx.r5.s64 = ctx.r11.s64 + -8480;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82bcac98
	ctx.lr = 0x827B59BC;
	sub_82BCAC98(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b59d0
	if (ctx.cr6.eq) goto loc_827B59D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82136b08
	ctx.lr = 0x827B59D0;
	sub_82136B08(ctx, base);
loc_827B59D0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82136bf8
	ctx.lr = 0x827B59D8;
	sub_82136BF8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
loc_827B59E0:
	// addi r27,r26,300
	ctx.r27.s64 = ctx.r26.s64 + 300;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82138898
	ctx.lr = 0x827B59EC;
	sub_82138898(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b5a88
	if (ctx.cr6.eq) goto loc_827B5A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82137170
	ctx.lr = 0x827B5A00;
	sub_82137170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b5a7c
	if (ctx.cr6.eq) goto loc_827B5A7C;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
loc_827B5A10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b5a30
	if (ctx.cr6.eq) goto loc_827B5A30;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827b5a34
	if (ctx.cr6.lt) goto loc_827B5A34;
loc_827B5A30:
	// twi 31,r0,22
loc_827B5A34:
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// bl 0x827eee58
	ctx.lr = 0x827B5A44;
	sub_827EEE58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b5a64
	if (ctx.cr6.eq) goto loc_827B5A64;
	// lwz r3,13412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13412);
	// bl 0x827ef750
	ctx.lr = 0x827B5A58;
	sub_827EF750(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82121b48
	ctx.lr = 0x827B5A64;
	sub_82121B48(ctx, base);
loc_827B5A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82137170
	ctx.lr = 0x827B5A74;
	sub_82137170(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x827b5a10
	if (ctx.cr6.lt) goto loc_827B5A10;
loc_827B5A7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82136b08
	ctx.lr = 0x827B5A88;
	sub_82136B08(ctx, base);
loc_827B5A88:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827b4bd0
	ctx.lr = 0x827B5A9C;
	sub_827B4BD0(ctx, base);
	// lwz r11,260(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 260);
	// addi r27,r26,256
	ctx.r27.s64 = ctx.r26.s64 + 256;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
loc_827B5ACC:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b5ae4
	if (ctx.cr6.eq) goto loc_827B5AE4;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x827b5ae8
	if (ctx.cr6.eq) goto loc_827B5AE8;
loc_827B5AE4:
	// twi 31,r0,22
loc_827B5AE8:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b5bf0
	if (ctx.cr6.eq) goto loc_827B5BF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b5b00
	if (!ctx.cr6.eq) goto loc_827B5B00;
	// twi 31,r0,22
loc_827B5B00:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b5b10
	if (!ctx.cr6.eq) goto loc_827B5B10;
	// twi 31,r0,22
loc_827B5B10:
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// bl 0x821370d0
	ctx.lr = 0x827B5B28;
	sub_821370D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b5b40
	if (ctx.cr6.eq) goto loc_827B5B40;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b5b44
	if (ctx.cr6.eq) goto loc_827B5B44;
loc_827B5B40:
	// twi 31,r0,22
loc_827B5B44:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b5be4
	if (!ctx.cr6.eq) goto loc_827B5BE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827b3658
	ctx.lr = 0x827B5B60;
	sub_827B3658(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827B5B6C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b5b9c
	if (ctx.cr6.eq) goto loc_827B5B9C;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b5b9c
	if (!ctx.cr6.eq) goto loc_827B5B9C;
	// lwz r3,13424(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13424);
	// lwz r5,372(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 372);
	// bl 0x827ede80
	ctx.lr = 0x827B5B94;
	sub_827EDE80(ctx, base);
	// slw r11,r24,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r31.u8 & 0x3F));
	// or r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 | ctx.r22.u64;
loc_827B5B9C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x827b5b6c
	if (ctx.cr6.lt) goto loc_827B5B6C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x827b5898
	ctx.lr = 0x827B5BB8;
	sub_827B5898(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r26,268
	ctx.r4.s64 = ctx.r26.s64 + 268;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82133e60
	ctx.lr = 0x827B5BC8;
	sub_82133E60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82136c68
	ctx.lr = 0x827B5BD8;
	sub_82136C68(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// b 0x827b5acc
	goto loc_827B5ACC;
loc_827B5BE4:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82137248
	ctx.lr = 0x827B5BEC;
	sub_82137248(ctx, base);
	// b 0x827b5acc
	goto loc_827B5ACC;
loc_827B5BF0:
	// lwz r10,240(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b5c2c
	if (!ctx.cr6.gt) goto loc_827B5C2C;
	// lwz r9,236(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 236);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_827B5C08:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x827b5c68
	if (ctx.cr6.eq) goto loc_827B5C68;
	// lwz r8,240(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b5c08
	if (ctx.cr6.lt) goto loc_827B5C08;
loc_827B5C2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B5C30:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,13604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13604);
	// stw r9,380(r26)
	PPC_STORE_U32(ctx.r26.u32 + 380, ctx.r9.u32);
	// lwz r9,104(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// lwz r10,16536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16536);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b5c7c
	if (ctx.cr6.eq) goto loc_827B5C7C;
	// lwz r11,16540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16540);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827b5c7c
	if (!ctx.cr6.lt) goto loc_827B5C7C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x827b5c80
	goto loc_827B5C80;
loc_827B5C68:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x827b5c30
	goto loc_827B5C30;
loc_827B5C7C:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_827B5C80:
	// bl 0x8226ba48
	ctx.lr = 0x827B5C84;
	sub_8226BA48(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x827b5c94
	if (ctx.cr6.eq) goto loc_827B5C94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226ba10
	ctx.lr = 0x827B5C94;
	sub_8226BA10(ctx, base);
loc_827B5C94:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x827b5cd8
	if (ctx.cr6.eq) goto loc_827B5CD8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827B5CA0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b5cc8
	if (ctx.cr6.eq) goto loc_827B5CC8;
	// slw r11,r24,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r31.u8 & 0x3F));
	// and r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 & ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b5cc8
	if (ctx.cr6.eq) goto loc_827B5CC8;
	// lwz r3,13424(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13424);
	// lwz r5,380(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 380);
	// bl 0x827ede80
	ctx.lr = 0x827B5CC8;
	sub_827EDE80(ctx, base);
loc_827B5CC8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x827b5ca0
	if (ctx.cr6.lt) goto loc_827B5CA0;
loc_827B5CD8:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r21,296(r26)
	PPC_STORE_U32(ctx.r26.u32 + 296, ctx.r21.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// ld r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x821372f0
	ctx.lr = 0x827B5D10;
	sub_821372F0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x827b5d78
	if (ctx.cr6.eq) goto loc_827B5D78;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lwz r31,-17448(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17448);
	// lwz r29,-17440(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x827B5D38;
	sub_821FD9D8(ctx, base);
	// lis r9,-32029
	ctx.r9.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,-17444(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17444);
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
	ctx.lr = 0x827B5D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b5d78
	if (ctx.cr6.eq) goto loc_827B5D78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827B5D78;
	sub_821FD9E0(ctx, base);
loc_827B5D78:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B5D80"))) PPC_WEAK_FUNC(sub_827B5D80);
PPC_FUNC_IMPL(__imp__sub_827B5D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B5D88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827b5e0c
	if (ctx.cr0.eq) goto loc_827B5E0C;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
loc_827B5DAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r7,r11,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827b5df0
	if (ctx.cr6.eq) goto loc_827B5DF0;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827b5df0
	if (ctx.cr6.eq) goto loc_827B5DF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746598
	ctx.lr = 0x827B5DD4;
	sub_82746598(ctx, base);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b5df0
	if (!ctx.cr6.eq) goto loc_827B5DF0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r3,13412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13412);
	// bl 0x827f0c18
	ctx.lr = 0x827B5DF0;
	sub_827F0C18(ctx, base);
loc_827B5DF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b5dac
	if (ctx.cr6.lt) goto loc_827B5DAC;
loc_827B5E0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B5E14"))) PPC_WEAK_FUNC(sub_827B5E14);
PPC_FUNC_IMPL(__imp__sub_827B5E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B5E18"))) PPC_WEAK_FUNC(sub_827B5E18);
PPC_FUNC_IMPL(__imp__sub_827B5E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x827B5E20;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,26668
	ctx.r3.s64 = ctx.r11.s64 + 26668;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bc8828
	ctx.lr = 0x827B5E38;
	sub_82BC8828(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// bl 0x827b34b0
	ctx.lr = 0x827B5E44;
	sub_827B34B0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,192(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// bl 0x827b4010
	ctx.lr = 0x827B5E50;
	sub_827B4010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827b5e60
	if (!ctx.cr6.eq) goto loc_827B5E60;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// bl 0x827dffd0
	ctx.lr = 0x827B5E60;
	sub_827DFFD0(ctx, base);
loc_827B5E60:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x827b5ec4
	if (ctx.cr6.gt) goto loc_827B5EC4;
loc_827B5E78:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827b5eb8
	if (ctx.cr6.eq) goto loc_827B5EB8;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827b5eb8
	if (ctx.cr6.eq) goto loc_827B5EB8;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b5eb8
	if (ctx.cr6.eq) goto loc_827B5EB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,13412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13412);
	// bl 0x827f0d30
	ctx.lr = 0x827B5EAC;
	sub_827F0D30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82746598
	ctx.lr = 0x827B5EB8;
	sub_82746598(ctx, base);
loc_827B5EB8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x827b5e78
	if (!ctx.cr6.gt) goto loc_827B5E78;
loc_827B5EC4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x827b5f24
	if (ctx.cr6.gt) goto loc_827B5F24;
loc_827B5ED8:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827b5f18
	if (ctx.cr6.eq) goto loc_827B5F18;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827b5f18
	if (ctx.cr6.eq) goto loc_827B5F18;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b5f0c
	if (!ctx.cr6.eq) goto loc_827B5F0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,13412(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13412);
	// bl 0x827f0d30
	ctx.lr = 0x827B5F0C;
	sub_827F0D30(ctx, base);
loc_827B5F0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82746598
	ctx.lr = 0x827B5F18;
	sub_82746598(ctx, base);
loc_827B5F18:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x827b5ed8
	if (!ctx.cr6.gt) goto loc_827B5ED8;
loc_827B5F24:
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// lis r25,-32029
	ctx.r25.s64 = -2099052544;
	// lis r24,-32029
	ctx.r24.s64 = -2099052544;
	// addi r23,r11,-15760
	ctx.r23.s64 = ctx.r11.s64 + -15760;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b607c
	if (ctx.cr6.eq) goto loc_827B607C;
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b607c
	if (ctx.cr6.eq) goto loc_827B607C;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c09bec
	ctx.lr = 0x827B5F5C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b5ffc
	if (!ctx.cr6.gt) goto loc_827B5FFC;
loc_827B5F70:
	// lwz r10,384(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827b5fe8
	if (!ctx.cr6.gt) goto loc_827B5FE8;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827B5F8C:
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r10,r4,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b5fd0
	if (!ctx.cr6.eq) goto loc_827B5FD0;
	// lwz r10,384(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r5,384(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
loc_827B5FD0:
	// lwz r10,384(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827b5f8c
	if (ctx.cr6.lt) goto loc_827B5F8C;
loc_827B5FE8:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827b5f70
	if (ctx.cr6.lt) goto loc_827B5F70;
loc_827B5FFC:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b6074
	if (!ctx.cr6.gt) goto loc_827B6074;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r31,-17448(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17448);
	// lwz r29,-17440(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821fd9d8
	ctx.lr = 0x827B602C;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827B6058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b606c
	if (ctx.cr6.eq) goto loc_827B606C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827B606C;
	sub_821FD9E0(ctx, base);
loc_827B606C:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_827B6074:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x827B607C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_827B607C:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r29,r30,112
	ctx.r29.s64 = ctx.r30.s64 + 112;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b60c4
	if (ctx.cr6.eq) goto loc_827B60C4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r31,r9,31
	ctx.r31.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x827b60ac
	if (ctx.cr6.eq) goto loc_827B60AC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c09bec
	ctx.lr = 0x827B60AC;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_827B60AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82753980
	ctx.lr = 0x827B60B4;
	sub_82753980(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x827b60c4
	if (ctx.cr6.eq) goto loc_827B60C4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x827B60C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_827B60C4:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// lwz r11,13404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13404);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x827cb850
	ctx.lr = 0x827B60D8;
	sub_827CB850(ctx, base);
	// lwz r31,-17448(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17448);
	// lwz r27,16(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,-17440(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17440);
	// bl 0x821fd9d8
	ctx.lr = 0x827B60EC;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827B6118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b6128
	if (ctx.cr6.eq) goto loc_827B6128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827B6128;
	sub_821FD9E0(ctx, base);
loc_827B6128:
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// bl 0x82746d88
	ctx.lr = 0x827B6144;
	sub_82746D88(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6158
	if (ctx.cr6.eq) goto loc_827B6158;
	// bl 0x82783850
	ctx.lr = 0x827B6154;
	sub_82783850(ctx, base);
	// stw r28,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r28.u32);
loc_827B6158:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r11,r11,-19740
	ctx.r11.s64 = ctx.r11.s64 + -19740;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x827b6174
	if (!ctx.cr6.eq) goto loc_827B6174;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_827B6174:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b6268
	if (ctx.cr6.eq) goto loc_827B6268;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,13568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827b6228
	if (!ctx.cr6.eq) goto loc_827B6228;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82120040
	ctx.lr = 0x827B619C;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6220
	if (ctx.cr6.eq) goto loc_827B6220;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// addi r9,r11,-9736
	ctx.r9.s64 = ctx.r11.s64 + -9736;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// stw r28,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// stw r28,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r28.u32);
	// stw r28,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r28.u32);
	// stw r28,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r28.u32);
	// stw r28,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r28.u32);
	// stw r28,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r28.u32);
	// stw r28,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r28.u32);
	// stw r28,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r28.u32);
	// stw r28,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r28.u32);
	// stw r28,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r28.u32);
	// stw r28,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r28.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827B6210:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x827b6210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B6210;
	// b 0x827b6224
	goto loc_827B6224;
loc_827B6220:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_827B6224:
	// stw r3,13568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13568, ctx.r3.u32);
loc_827B6228:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b623c
	if (ctx.cr6.eq) goto loc_827B623C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_827B623C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b6264
	if (!ctx.cr6.eq) goto loc_827B6264;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B625C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13568, ctx.r11.u32);
loc_827B6264:
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
loc_827B6268:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B6270"))) PPC_WEAK_FUNC(sub_827B6270);
PPC_FUNC_IMPL(__imp__sub_827B6270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827B6278;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x827b3560
	ctx.lr = 0x827B6288;
	sub_827B3560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b6364
	if (ctx.cr6.eq) goto loc_827B6364;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// bl 0x827c9bd8
	ctx.lr = 0x827B62A0;
	sub_827C9BD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b5e18
	ctx.lr = 0x827B62AC;
	sub_827B5E18(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12480(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12480);
	// bl 0x82bcd448
	ctx.lr = 0x827B62BC;
	sub_82BCD448(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-19740
	ctx.r11.s64 = ctx.r11.s64 + -19740;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827b62ec
	if (!ctx.cr6.eq) goto loc_827B62EC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b62ec
	if (ctx.cr6.eq) goto loc_827B62EC;
	// stw r27,2268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2268, ctx.r27.u32);
loc_827B62EC:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b6354
	if (ctx.cr6.eq) goto loc_827B6354;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827b6340
	if (!ctx.cr6.gt) goto loc_827B6340;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_827B630C:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827b632c
	if (ctx.cr6.eq) goto loc_827B632C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82120a70
	ctx.lr = 0x827B6324;
	sub_82120A70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x827B632C;
	sub_82120A70(ctx, base);
loc_827B632C:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b630c
	if (ctx.cr6.lt) goto loc_827B630C;
loc_827B6340:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82120a70
	ctx.lr = 0x827B6348;
	sub_82120A70(ctx, base);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
loc_827B6354:
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x827620d0
	ctx.lr = 0x827B635C;
	sub_827620D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x827B6364;
	sub_82120A70(ctx, base);
loc_827B6364:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B636C"))) PPC_WEAK_FUNC(sub_827B636C);
PPC_FUNC_IMPL(__imp__sub_827B636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B6370"))) PPC_WEAK_FUNC(sub_827B6370);
PPC_FUNC_IMPL(__imp__sub_827B6370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827B6378;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,13424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b6398
	if (ctx.cr6.eq) goto loc_827B6398;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_827B6398:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,13604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13604);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x827bd008
	ctx.lr = 0x827B63BC;
	sub_827BD008(ctx, base);
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b63cc
	if (ctx.cr6.eq) goto loc_827B63CC;
	// bl 0x827b5d80
	ctx.lr = 0x827B63CC;
	sub_827B5D80(ctx, base);
loc_827B63CC:
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b63dc
	if (ctx.cr6.eq) goto loc_827B63DC;
	// bl 0x827b5d80
	ctx.lr = 0x827B63DC;
	sub_827B5D80(ctx, base);
loc_827B63DC:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// bl 0x82746620
	ctx.lr = 0x827B63E4;
	sub_82746620(ctx, base);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x82746620
	ctx.lr = 0x827B63EC;
	sub_82746620(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827b6438
	if (!ctx.cr6.gt) goto loc_827B6438;
	// li r29,1
	ctx.r29.s64 = 1;
loc_827B63FC:
	// lwz r30,236(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x827b6414
	if (!ctx.cr6.gt) goto loc_827B6414;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_827B6414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827b5898
	ctx.lr = 0x827B6420;
	sub_827B5898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827b6270
	ctx.lr = 0x827B642C;
	sub_827B6270(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x827b63fc
	if (ctx.cr6.gt) goto loc_827B63FC;
loc_827B6438:
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b644c
	if (ctx.cr6.eq) goto loc_827B644C;
	// bl 0x82783850
	ctx.lr = 0x827B6448;
	sub_82783850(ctx, base);
	// stw r28,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r28.u32);
loc_827B644C:
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r30,r31,388
	ctx.r30.s64 = ctx.r31.s64 + 388;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b6468
	if (ctx.cr6.eq) goto loc_827B6468;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82753980
	ctx.lr = 0x827B6464;
	sub_82753980(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_827B6468:
	// stw r28,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r28.u32);
	// stw r28,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r28.u32);
	// stw r27,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r27.u32);
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B6480"))) PPC_WEAK_FUNC(sub_827B6480);
PPC_FUNC_IMPL(__imp__sub_827B6480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B6488;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82136b60
	ctx.lr = 0x827B64A0;
	sub_82136B60(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827b64bc
	if (ctx.cr6.eq) goto loc_827B64BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b3aa8
	ctx.lr = 0x827B64B4;
	sub_827B3AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b6688
	if (ctx.cr6.eq) goto loc_827B6688;
loc_827B64BC:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b4bd0
	ctx.lr = 0x827B64D0;
	sub_827B4BD0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
loc_827B64EC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b6504
	if (ctx.cr6.eq) goto loc_827B6504;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b6508
	if (ctx.cr6.eq) goto loc_827B6508;
loc_827B6504:
	// twi 31,r0,22
loc_827B6508:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b65a4
	if (ctx.cr6.eq) goto loc_827B65A4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b6524
	if (!ctx.cr6.eq) goto loc_827B6524;
	// twi 31,r0,22
loc_827B6524:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b6534
	if (!ctx.cr6.eq) goto loc_827B6534;
	// twi 31,r0,22
loc_827B6534:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82137248
	ctx.lr = 0x827B6540;
	sub_82137248(ctx, base);
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b64ec
	if (ctx.cr6.eq) goto loc_827B64EC;
	// lwz r8,236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_827B6558:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,192(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827b657c
	if (ctx.cr6.eq) goto loc_827B657C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827b6558
	if (ctx.cr6.lt) goto loc_827B6558;
	// b 0x827b64ec
	goto loc_827B64EC;
loc_827B657C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b64ec
	if (ctx.cr6.eq) goto loc_827B64EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b5898
	ctx.lr = 0x827B65A0;
	sub_827B5898(ctx, base);
	// b 0x827b64ec
	goto loc_827B64EC;
loc_827B65A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b3420
	ctx.lr = 0x827B65AC;
	sub_827B3420(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
loc_827B65C8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b65e0
	if (ctx.cr6.eq) goto loc_827B65E0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b65e4
	if (ctx.cr6.eq) goto loc_827B65E4;
loc_827B65E0:
	// twi 31,r0,22
loc_827B65E4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b6680
	if (ctx.cr6.eq) goto loc_827B6680;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b6600
	if (!ctx.cr6.eq) goto loc_827B6600;
	// twi 31,r0,22
loc_827B6600:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b6610
	if (!ctx.cr6.eq) goto loc_827B6610;
	// twi 31,r0,22
loc_827B6610:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82137248
	ctx.lr = 0x827B661C;
	sub_82137248(ctx, base);
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b65c8
	if (ctx.cr6.eq) goto loc_827B65C8;
	// lwz r8,236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_827B6634:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,192(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827b6658
	if (ctx.cr6.eq) goto loc_827B6658;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827b6634
	if (ctx.cr6.lt) goto loc_827B6634;
	// b 0x827b65c8
	goto loc_827B65C8;
loc_827B6658:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b65c8
	if (ctx.cr6.eq) goto loc_827B65C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b6270
	ctx.lr = 0x827B667C;
	sub_827B6270(ctx, base);
	// b 0x827b65c8
	goto loc_827B65C8;
loc_827B6680:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b53e0
	ctx.lr = 0x827B6688;
	sub_827B53E0(ctx, base);
loc_827B6688:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82136bf8
	ctx.lr = 0x827B6690;
	sub_82136BF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B6698"))) PPC_WEAK_FUNC(sub_827B6698);
PPC_FUNC_IMPL(__imp__sub_827B6698) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,376(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x827b6270
	sub_827B6270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B66A8"))) PPC_WEAK_FUNC(sub_827B66A8);
PPC_FUNC_IMPL(__imp__sub_827B66A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B66AC"))) PPC_WEAK_FUNC(sub_827B66AC);
PPC_FUNC_IMPL(__imp__sub_827B66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B66B0"))) PPC_WEAK_FUNC(sub_827B66B0);
PPC_FUNC_IMPL(__imp__sub_827B66B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,372(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x827b6270
	sub_827B6270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B66C0"))) PPC_WEAK_FUNC(sub_827B66C0);
PPC_FUNC_IMPL(__imp__sub_827B66C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B66C4"))) PPC_WEAK_FUNC(sub_827B66C4);
PPC_FUNC_IMPL(__imp__sub_827B66C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B66C8"))) PPC_WEAK_FUNC(sub_827B66C8);
PPC_FUNC_IMPL(__imp__sub_827B66C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B66D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-8372
	ctx.r10.s64 = ctx.r11.s64 + -8372;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x827b41e0
	ctx.lr = 0x827B66E8;
	sub_827B41E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b6370
	ctx.lr = 0x827B66F0;
	sub_827B6370(ctx, base);
	// lwz r4,372(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b6704
	if (ctx.cr6.eq) goto loc_827B6704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b6270
	ctx.lr = 0x827B6704;
	sub_827B6270(ctx, base);
loc_827B6704:
	// lwz r4,376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b6718
	if (ctx.cr6.eq) goto loc_827B6718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b6270
	ctx.lr = 0x827B6718;
	sub_827B6270(ctx, base);
loc_827B6718:
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6730
	if (ctx.cr6.eq) goto loc_827B6730;
	// bl 0x82783850
	ctx.lr = 0x827B672C;
	sub_82783850(ctx, base);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
loc_827B6730:
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r29,r31,388
	ctx.r29.s64 = ctx.r31.s64 + 388;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b674c
	if (ctx.cr6.eq) goto loc_827B674C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82753980
	ctx.lr = 0x827B6748;
	sub_82753980(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_827B674C:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6760
	if (ctx.cr6.eq) goto loc_827B6760;
	// bl 0x82120a70
	ctx.lr = 0x827B675C;
	sub_82120A70(ctx, base);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
loc_827B6760:
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b677c
	if (ctx.cr6.eq) goto loc_827B677C;
	// bl 0x82120a70
	ctx.lr = 0x827B6778;
	sub_82120A70(ctx, base);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
loc_827B677C:
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6798
	if (ctx.cr6.eq) goto loc_827B6798;
	// bl 0x82120a70
	ctx.lr = 0x827B6794;
	sub_82120A70(ctx, base);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
loc_827B6798:
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b67b4
	if (ctx.cr6.eq) goto loc_827B67B4;
	// bl 0x82120a70
	ctx.lr = 0x827B67B0;
	sub_82120A70(ctx, base);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
loc_827B67B4:
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b67d0
	if (ctx.cr6.eq) goto loc_827B67D0;
	// bl 0x82120a70
	ctx.lr = 0x827B67CC;
	sub_82120A70(ctx, base);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
loc_827B67D0:
	// lwz r3,424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b67ec
	if (ctx.cr6.eq) goto loc_827B67EC;
	// bl 0x82120a70
	ctx.lr = 0x827B67E8;
	sub_82120A70(ctx, base);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
loc_827B67EC:
	// lwz r29,392(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827b6810
	if (ctx.cr6.eq) goto loc_827B6810;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82208cc8
	ctx.lr = 0x827B6808;
	sub_82208CC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x827B6810;
	sub_82120A70(ctx, base);
loc_827B6810:
	// lwz r29,396(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827b6830
	if (ctx.cr6.eq) goto loc_827B6830;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82208cc8
	ctx.lr = 0x827B6828;
	sub_82208CC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x827B6830;
	sub_82120A70(ctx, base);
loc_827B6830:
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6848
	if (ctx.cr6.eq) goto loc_827B6848;
	// bl 0x82120a70
	ctx.lr = 0x827B6844;
	sub_82120A70(ctx, base);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
loc_827B6848:
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r29,r31,300
	ctx.r29.s64 = ctx.r31.s64 + 300;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6864
	if (ctx.cr6.eq) goto loc_827B6864;
	// bl 0x82120a70
	ctx.lr = 0x827B6864;
	sub_82120A70(ctx, base);
loc_827B6864:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// bl 0x82136bf8
	ctx.lr = 0x827B6878;
	sub_82136BF8(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x82136bf8
	ctx.lr = 0x827B6880;
	sub_82136BF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208970
	ctx.lr = 0x827B6888;
	sub_82208970(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B6890"))) PPC_WEAK_FUNC(sub_827B6890);
PPC_FUNC_IMPL(__imp__sub_827B6890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x827B6898;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r10,12480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b68bc
	if (!ctx.cr6.eq) goto loc_827B68BC;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_827B68BC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bfd450
	ctx.lr = 0x827B68D0;
	sub_82BFD450(ctx, base);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r11,12476(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b68f8
	if (ctx.cr6.eq) goto loc_827B68F8;
	// lwz r11,12496(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827b68fc
	if (ctx.cr6.eq) goto loc_827B68FC;
loc_827B68F8:
	// li r30,3
	ctx.r30.s64 = 3;
loc_827B68FC:
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// srw r4,r11,r30
	ctx.r4.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r30.u8 & 0x3F));
	// lwz r3,13608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13608);
	// bl 0x82746b20
	ctx.lr = 0x827B6910;
	sub_82746B20(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x827b6a0c
	if (!ctx.cr6.lt) goto loc_827B6A0C;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// li r28,0
	ctx.r28.s64 = 0;
loc_827B6928:
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
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x827b697c
	if (ctx.cr6.eq) goto loc_827B697C;
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
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827B697C:
	// lwz r11,12476(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b6994
	if (ctx.cr6.eq) goto loc_827B6994;
	// lwz r11,12496(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12496);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827b6998
	if (ctx.cr6.eq) goto loc_827B6998;
loc_827B6994:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_827B6998:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827b69fc
	if (ctx.cr6.eq) goto loc_827B69FC;
	// lwz r4,13608(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13608);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827b69bc
	if (!ctx.cr6.gt) goto loc_827B69BC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82746620
	ctx.lr = 0x827B69BC;
	sub_82746620(ctx, base);
loc_827B69BC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32130
	ctx.r10.s64 = -2105671680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-12184
	ctx.r5.s64 = ctx.r10.s64 + -12184;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// bl 0x82bce5d8
	ctx.lr = 0x827B69FC;
	sub_82BCE5D8(ctx, base);
loc_827B69FC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827b6928
	if (ctx.cr6.lt) goto loc_827B6928;
loc_827B6A0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B6A18"))) PPC_WEAK_FUNC(sub_827B6A18);
PPC_FUNC_IMPL(__imp__sub_827B6A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x827B6A20;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82120040
	ctx.lr = 0x827B6A34;
	sub_82120040(ctx, base);
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x827B6A44;
	sub_82218A80(ctx, base);
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// li r22,22
	ctx.r22.s64 = 22;
	// stw r31,192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 192, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r22,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r22.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,12480(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b6a70
	if (!ctx.cr6.eq) goto loc_827B6A70;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_827B6A70:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82bfd450
	ctx.lr = 0x827B6A88;
	sub_82BFD450(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b6aa0
	if (!ctx.cr6.eq) goto loc_827B6AA0;
loc_827B6A94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_827B6AA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r8,27232
	ctx.r4.s64 = ctx.r8.s64 + 27232;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r6,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r6.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r11.u8);
	// bl 0x8221bed0
	ctx.lr = 0x827B6ADC;
	sub_8221BED0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827b6a94
	if (!ctx.cr6.eq) goto loc_827B6A94;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// lwz r10,12456(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12456);
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// beq cr6,0x827b6b3c
	if (ctx.cr6.eq) goto loc_827B6B3C;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827B6B3C:
	// cmplwi cr6,r23,6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 6, ctx.xer);
	// bgt cr6,0x827b6a94
	if (ctx.cr6.gt) goto loc_827B6A94;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// beq cr6,0x827b6b94
	if (ctx.cr6.eq) goto loc_827B6B94;
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
loc_827B6B94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827f6ca8
	ctx.lr = 0x827B6BA0;
	sub_827F6CA8(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r28,12476(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12476);
	// lwz r27,12496(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12496);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x827b6bc0
	if (ctx.cr6.eq) goto loc_827B6BC0;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x827b6bc8
	if (ctx.cr6.eq) goto loc_827B6BC8;
loc_827B6BC0:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_827B6BC8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r26,132
	ctx.r4.s64 = ctx.r26.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bce958
	ctx.lr = 0x827B6BDC;
	sub_82BCE958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,12456(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12456);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// beq cr6,0x827b6c38
	if (ctx.cr6.eq) goto loc_827B6C38;
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827B6C38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6c6c
	if (ctx.cr6.eq) goto loc_827B6C6C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827b6c6c
	if (ctx.cr6.eq) goto loc_827B6C6C;
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,8528
	ctx.r5.s64 = ctx.r11.s64 + 8528;
	// addi r4,r26,116
	ctx.r4.s64 = ctx.r26.s64 + 116;
	// bl 0x82bce5d8
	ctx.lr = 0x827B6C60;
	sub_82BCE5D8(ctx, base);
	// lwz r28,12476(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12476);
	// lwz r27,12496(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12496);
	// lwz r30,12456(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12456);
loc_827B6C6C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r26,36
	ctx.r4.s64 = ctx.r26.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bcf198
	ctx.lr = 0x827B6C7C;
	sub_82BCF198(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,-17556(r11)
	PPC_STORE_U32(ctx.r11.u32 + -17556, ctx.r26.u32);
	// stw r26,13608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13608, ctx.r26.u32);
	// bl 0x821204c0
	ctx.lr = 0x827B6C98;
	sub_821204C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// beq cr6,0x827b6ce8
	if (ctx.cr6.eq) goto loc_827B6CE8;
	// lbz r8,85(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// stb r7,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r7.u8);
loc_827B6CE8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 3, ctx.xer);
	// stw r10,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r10.u32);
	// ble cr6,0x827b6d0c
	if (!ctx.cr6.gt) goto loc_827B6D0C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x827b6d08
	if (ctx.cr6.eq) goto loc_827B6D08;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x827b6d0c
	if (ctx.cr6.eq) goto loc_827B6D0C;
loc_827B6D08:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_827B6D0C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x827b6d1c
	if (ctx.cr6.eq) goto loc_827B6D1C;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x827b6d20
	if (ctx.cr6.eq) goto loc_827B6D20;
loc_827B6D1C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_827B6D20:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x827b6d38
	if (ctx.cr6.eq) goto loc_827B6D38;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x827b6d3c
	if (ctx.cr6.eq) goto loc_827B6D3C;
loc_827B6D38:
	// li r11,36
	ctx.r11.s64 = 36;
loc_827B6D3C:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x827b6d54
	if (ctx.cr6.eq) goto loc_827B6D54;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x827b6d58
	if (ctx.cr6.eq) goto loc_827B6D58;
loc_827B6D54:
	// li r11,4
	ctx.r11.s64 = 4;
loc_827B6D58:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821203b0
	ctx.lr = 0x827B6D6C;
	sub_821203B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x827b6dbc
	if (ctx.cr6.eq) goto loc_827B6DBC;
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
loc_827B6DBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r7,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r7.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// beq cr6,0x827b6e0c
	if (ctx.cr6.eq) goto loc_827B6E0C;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827B6E0C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6e1c
	if (ctx.cr6.eq) goto loc_827B6E1C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x827b6e20
	if (!ctx.cr6.eq) goto loc_827B6E20;
loc_827B6E1C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827B6E20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6e4c
	if (ctx.cr6.eq) goto loc_827B6E4C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827b6e4c
	if (ctx.cr6.eq) goto loc_827B6E4C;
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,16712
	ctx.r5.s64 = ctx.r11.s64 + 16712;
	// addi r4,r26,112
	ctx.r4.s64 = ctx.r26.s64 + 112;
	// bl 0x82bce5d8
	ctx.lr = 0x827B6E48;
	sub_82BCE5D8(ctx, base);
	// lwz r30,12456(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12456);
loc_827B6E4C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// beq cr6,0x827b6e98
	if (ctx.cr6.eq) goto loc_827B6E98;
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
loc_827B6E98:
	// lis r11,-32133
	ctx.r11.s64 = -2105868288;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r11,26768
	ctx.r5.s64 = ctx.r11.s64 + 26768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bce5d8
	ctx.lr = 0x827B6EB4;
	sub_82BCE5D8(ctx, base);
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
	// lwz r6,12456(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12456);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// beq cr6,0x827b6f08
	if (ctx.cr6.eq) goto loc_827B6F08;
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r8,85(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827B6F08:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b6f34
	if (ctx.cr6.eq) goto loc_827B6F34;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827b6f34
	if (ctx.cr6.eq) goto loc_827B6F34;
	// lis r11,-32064
	ctx.r11.s64 = -2101346304;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,29840
	ctx.r5.s64 = ctx.r11.s64 + 29840;
	// addi r4,r26,108
	ctx.r4.s64 = ctx.r26.s64 + 108;
	// bl 0x82bce5d8
	ctx.lr = 0x827B6F30;
	sub_82BCE5D8(ctx, base);
	// lwz r6,12456(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12456);
loc_827B6F34:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r11,196(r26)
	PPC_STORE_U32(ctx.r26.u32 + 196, ctx.r11.u32);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x827b6f8c
	if (ctx.cr6.eq) goto loc_827B6F8C;
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
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827B6F8C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b6fb0
	if (ctx.cr6.eq) goto loc_827B6FB0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827b6fb0
	if (ctx.cr6.eq) goto loc_827B6FB0;
	// lwz r3,12480(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12480);
	// bl 0x82bcd3b8
	ctx.lr = 0x827B6FA4;
	sub_82BCD3B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b6fb0
	if (ctx.cr6.eq) goto loc_827B6FB0;
	// stw r4,196(r26)
	PPC_STORE_U32(ctx.r26.u32 + 196, ctx.r4.u32);
loc_827B6FB0:
	// cmplwi cr6,r23,5
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 5, ctx.xer);
	// blt cr6,0x827b7088
	if (ctx.cr6.lt) goto loc_827B7088;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x827b7008
	if (ctx.cr6.eq) goto loc_827B7008;
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r11,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r11.u8);
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827B7008:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b7088
	if (ctx.cr6.eq) goto loc_827B7088;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_827B7014:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// beq cr6,0x827b7060
	if (ctx.cr6.eq) goto loc_827B7060;
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
loc_827B7060:
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r11,-19448
	ctx.r5.s64 = ctx.r11.s64 + -19448;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bce5d8
	ctx.lr = 0x827B707C;
	sub_82BCE5D8(ctx, base);
	// lwz r6,12456(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12456);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x827b7014
	if (!ctx.cr0.eq) goto loc_827B7014;
loc_827B7088:
	// cmplwi cr6,r23,6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 6, ctx.xer);
	// blt cr6,0x827b70ec
	if (ctx.cr6.lt) goto loc_827B70EC;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// beq cr6,0x827b70d8
	if (ctx.cr6.eq) goto loc_827B70D8;
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
loc_827B70D8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_827B70EC:
	// stw r22,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r22.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B70FC"))) PPC_WEAK_FUNC(sub_827B70FC);
PPC_FUNC_IMPL(__imp__sub_827B70FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B7100"))) PPC_WEAK_FUNC(sub_827B7100);
PPC_FUNC_IMPL(__imp__sub_827B7100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x827B7108;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x827b7128
	if (!ctx.cr6.eq) goto loc_827B7128;
loc_827B711C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_827B7128:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b3658
	ctx.lr = 0x827B7134;
	sub_827B3658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b7158
	if (ctx.cr6.eq) goto loc_827B7158;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
loc_827B7158:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827b3d70
	ctx.lr = 0x827B7168;
	sub_827B3D70(ctx, base);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,12480(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12480);
	// bl 0x82bcd9f8
	ctx.lr = 0x827B7178;
	sub_82BCD9F8(ctx, base);
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r10,27160
	ctx.r5.s64 = ctx.r10.s64 + 27160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82bce5d8
	ctx.lr = 0x827B7194;
	sub_82BCE5D8(ctx, base);
	// bl 0x82bce6a8
	ctx.lr = 0x827B7198;
	sub_82BCE6A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b711c
	if (ctx.cr6.eq) goto loc_827B711C;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r4,196(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r3,13404(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13404);
	// bl 0x82bfe8f0
	ctx.lr = 0x827B71B4;
	sub_82BFE8F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827b7278
	if (ctx.cr0.eq) goto loc_827B7278;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r26,16
	ctx.r26.s64 = 1048576;
	// addi r27,r11,15828
	ctx.r27.s64 = ctx.r11.s64 + 15828;
loc_827B71DC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b726c
	if (ctx.cr6.eq) goto loc_827B726C;
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827b726c
	if (ctx.cr6.eq) goto loc_827B726C;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827b73c8
	if (!ctx.cr6.eq) goto loc_827B73C8;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c02d78
	ctx.lr = 0x827B721C;
	sub_82C02D78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82c02780
	ctx.lr = 0x827B722C;
	sub_82C02780(ctx, base);
	// lis r12,18
	ctx.r12.s64 = 1179648;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r12,r12,1
	ctx.r12.u64 = ctx.r12.u64 | 1;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x827b7254
	if (!ctx.cr6.eq) goto loc_827B7254;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8280c1b8
	ctx.lr = 0x827B7254;
	sub_8280C1B8(ctx, base);
loc_827B7254:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827B7258:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b4aa8
	ctx.lr = 0x827B7268;
	sub_827B4AA8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827B726C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x827b71dc
	if (!ctx.cr0.eq) goto loc_827B71DC;
loc_827B7278:
	// bl 0x82c04990
	ctx.lr = 0x827B727C;
	sub_82C04990(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// stw r11,13608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13608, ctx.r11.u32);
	// lwz r3,12728(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12728);
	// bl 0x82bba4c0
	ctx.lr = 0x827B7298;
	sub_82BBA4C0(ctx, base);
	// lwz r3,12480(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12480);
	// bl 0x82bcd270
	ctx.lr = 0x827B72A0;
	sub_82BCD270(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r29,r11,-15760
	ctx.r29.s64 = ctx.r11.s64 + -15760;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,108(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827b7484
	if (ctx.cr6.eq) goto loc_827B7484;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b7484
	if (!ctx.cr6.gt) goto loc_827B7484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x827B72D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b73dc
	if (ctx.cr6.eq) goto loc_827B73DC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827b7330
	if (!ctx.cr6.gt) goto loc_827B7330;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B72F0:
	// lwz r10,384(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827b7318
	if (ctx.cr6.eq) goto loc_827B7318;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_827B7318:
	// lwz r10,384(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b72f0
	if (ctx.cr6.lt) goto loc_827B72F0;
loc_827B7330:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b7370
	if (ctx.cr6.eq) goto loc_827B7370;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82121828
	ctx.lr = 0x827B7368;
	sub_82121828(ctx, base);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_827B7370:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b74f0
	if (!ctx.cr6.gt) goto loc_827B74F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_827B7390:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r7,384(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stwx r6,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,108(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x827b7390
	if (ctx.cr6.lt) goto loc_827B7390;
	// b 0x827b74f0
	goto loc_827B74F0;
loc_827B73C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b726c
	if (!ctx.cr6.eq) goto loc_827B726C;
	// b 0x827b7258
	goto loc_827B7258;
loc_827B73DC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x827b74f0
	if (!ctx.cr6.gt) goto loc_827B74F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82120040
	ctx.lr = 0x827B73FC;
	sub_82120040(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827B7418;
	sub_82120040(ctx, base);
	// lwz r8,384(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,108(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 108);
	// lwz r5,384(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827b74f0
	if (!ctx.cr6.gt) goto loc_827B74F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B7450:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,384(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stwx r7,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,108(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 108);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x827b7450
	if (ctx.cr6.lt) goto loc_827B7450;
	// b 0x827b74f0
	goto loc_827B74F0;
loc_827B7484:
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b74fc
	if (ctx.cr6.eq) goto loc_827B74FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x827B7498;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b74f0
	if (!ctx.cr6.gt) goto loc_827B74F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B74B0:
	// lwz r10,384(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827b74d8
	if (ctx.cr6.eq) goto loc_827B74D8;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_827B74D8:
	// lwz r10,384(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b74b0
	if (ctx.cr6.lt) goto loc_827B74B0;
loc_827B74F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x827B74F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827B74FC:
	// lwz r11,112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b7538
	if (ctx.cr6.eq) goto loc_827B7538;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b7538
	if (!ctx.cr6.gt) goto loc_827B7538;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bec
	ctx.lr = 0x827B7520;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bl 0x82753908
	ctx.lr = 0x827B752C;
	sub_82753908(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c09bdc
	ctx.lr = 0x827B7534;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827B7538:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b42b0
	ctx.lr = 0x827B7540;
	sub_827B42B0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b3f80
	ctx.lr = 0x827B754C;
	sub_827B3F80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B7558"))) PPC_WEAK_FUNC(sub_827B7558);
PPC_FUNC_IMPL(__imp__sub_827B7558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x827B7560;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82136b60
	ctx.lr = 0x827B7578;
	sub_82136B60(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827b7590
	if (ctx.cr6.eq) goto loc_827B7590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b5508
	ctx.lr = 0x827B7590;
	sub_827B5508(ctx, base);
loc_827B7590:
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,13412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13412);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r25,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// bl 0x827b4bd0
	ctx.lr = 0x827B75B4;
	sub_827B4BD0(ctx, base);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r30,r10,-15760
	ctx.r30.s64 = ctx.r10.s64 + -15760;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B75CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x827B75E4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r9,260(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r28,r31,256
	ctx.r28.s64 = ctx.r31.s64 + 256;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
loc_827B7600:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b7618
	if (ctx.cr6.eq) goto loc_827B7618;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x827b761c
	if (ctx.cr6.eq) goto loc_827B761C;
loc_827B7618:
	// twi 31,r0,22
loc_827B761C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b7738
	if (ctx.cr6.eq) goto loc_827B7738;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b7634
	if (!ctx.cr6.eq) goto loc_827B7634;
	// twi 31,r0,22
loc_827B7634:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b7644
	if (!ctx.cr6.eq) goto loc_827B7644;
	// twi 31,r0,22
loc_827B7644:
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82137248
	ctx.lr = 0x827B7658;
	sub_82137248(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821370d0
	ctx.lr = 0x827B7668;
	sub_821370D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b7680
	if (ctx.cr6.eq) goto loc_827B7680;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b7684
	if (ctx.cr6.eq) goto loc_827B7684;
loc_827B7680:
	// twi 31,r0,22
loc_827B7684:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827b7724
	if (!ctx.cr6.eq) goto loc_827B7724;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b7700
	if (!ctx.cr6.gt) goto loc_827B7700;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_827B76AC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b76d4
	if (ctx.cr6.eq) goto loc_827B76D4;
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b76ac
	if (ctx.cr6.lt) goto loc_827B76AC;
	// b 0x827b7700
	goto loc_827B7700;
loc_827B76D4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b7700
	if (ctx.cr6.eq) goto loc_827B7700;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b7700
	if (ctx.cr6.eq) goto loc_827B7700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b5898
	ctx.lr = 0x827B7700;
	sub_827B5898(ctx, base);
loc_827B7700:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82136c68
	ctx.lr = 0x827B7710;
	sub_82136C68(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82133e60
	ctx.lr = 0x827B7720;
	sub_82133E60(ctx, base);
	// b 0x827b7600
	goto loc_827B7600;
loc_827B7724:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82136c68
	ctx.lr = 0x827B7734;
	sub_82136C68(ctx, base);
	// b 0x827b7600
	goto loc_827B7600;
loc_827B7738:
	// stw r29,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r29.u32);
	// addi r27,r31,268
	ctx.r27.s64 = ctx.r31.s64 + 268;
	// stw r25,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r25.u32);
	// stw r25,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r25.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
loc_827B7760:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b7778
	if (ctx.cr6.eq) goto loc_827B7778;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x827b777c
	if (ctx.cr6.eq) goto loc_827B777C;
loc_827B7778:
	// twi 31,r0,22
loc_827B777C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b7890
	if (ctx.cr6.eq) goto loc_827B7890;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b7794
	if (!ctx.cr6.eq) goto loc_827B7794;
	// twi 31,r0,22
loc_827B7794:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b77a4
	if (!ctx.cr6.eq) goto loc_827B77A4;
	// twi 31,r0,22
loc_827B77A4:
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82137248
	ctx.lr = 0x827B77B8;
	sub_82137248(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821370d0
	ctx.lr = 0x827B77C8;
	sub_821370D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b77e0
	if (ctx.cr6.eq) goto loc_827B77E0;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b77e4
	if (ctx.cr6.eq) goto loc_827B77E4;
loc_827B77E0:
	// twi 31,r0,22
loc_827B77E4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827b787c
	if (!ctx.cr6.eq) goto loc_827B787C;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b7868
	if (!ctx.cr6.gt) goto loc_827B7868;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_827B780C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b7844
	if (ctx.cr6.eq) goto loc_827B7844;
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b780c
	if (ctx.cr6.lt) goto loc_827B780C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82136c68
	ctx.lr = 0x827B7840;
	sub_82136C68(ctx, base);
	// b 0x827b7760
	goto loc_827B7760;
loc_827B7844:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b7868
	if (ctx.cr6.eq) goto loc_827B7868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b6270
	ctx.lr = 0x827B7868;
	sub_827B6270(ctx, base);
loc_827B7868:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82136c68
	ctx.lr = 0x827B7878;
	sub_82136C68(ctx, base);
	// b 0x827b7760
	goto loc_827B7760;
loc_827B787C:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82136c68
	ctx.lr = 0x827B788C;
	sub_82136C68(ctx, base);
	// b 0x827b7760
	goto loc_827B7760;
loc_827B7890:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x827b79e8
	if (ctx.cr6.eq) goto loc_827B79E8;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827b79d8
	if (!ctx.cr6.gt) goto loc_827B79D8;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_827B78B4:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82136b60
	ctx.lr = 0x827B78BC;
	sub_82136B60(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x827b4bd0
	ctx.lr = 0x827B78D4;
	sub_827B4BD0(ctx, base);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
loc_827B78E8:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b7900
	if (ctx.cr6.eq) goto loc_827B7900;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b7904
	if (ctx.cr6.eq) goto loc_827B7904;
loc_827B7900:
	// twi 31,r0,22
loc_827B7904:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b79bc
	if (ctx.cr6.eq) goto loc_827B79BC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b7920
	if (!ctx.cr6.eq) goto loc_827B7920;
	// twi 31,r0,22
loc_827B7920:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b7930
	if (!ctx.cr6.eq) goto loc_827B7930;
	// twi 31,r0,22
loc_827B7930:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82137248
	ctx.lr = 0x827B793C;
	sub_82137248(ctx, base);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b78e8
	if (!ctx.cr6.gt) goto loc_827B78E8;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_827B7954:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b797c
	if (ctx.cr6.eq) goto loc_827B797C;
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b7954
	if (ctx.cr6.lt) goto loc_827B7954;
	// b 0x827b78e8
	goto loc_827B78E8;
loc_827B797C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b78e8
	if (ctx.cr6.eq) goto loc_827B78E8;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827b78e8
	if (ctx.cr6.eq) goto loc_827B78E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b5898
	ctx.lr = 0x827B79AC;
	sub_827B5898(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b6270
	ctx.lr = 0x827B79B8;
	sub_827B6270(ctx, base);
	// b 0x827b78e8
	goto loc_827B78E8;
loc_827B79BC:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82136bf8
	ctx.lr = 0x827B79C4;
	sub_82136BF8(ctx, base);
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b78b4
	if (ctx.cr6.lt) goto loc_827B78B4;
loc_827B79D8:
	// stw r25,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r25.u32);
	// stw r25,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r25.u32);
	// lwz r3,13412(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13412);
	// bl 0x827f0dc8
	ctx.lr = 0x827B79E8;
	sub_827F0DC8(ctx, base);
loc_827B79E8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,60
	ctx.r3.s64 = 60;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B7A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b5130
	ctx.lr = 0x827B7A0C;
	sub_827B5130(ctx, base);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
loc_827B7A28:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b7a40
	if (ctx.cr6.eq) goto loc_827B7A40;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b7a44
	if (ctx.cr6.eq) goto loc_827B7A44;
loc_827B7A40:
	// twi 31,r0,22
loc_827B7A44:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b7ad0
	if (ctx.cr6.eq) goto loc_827B7AD0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b7a60
	if (!ctx.cr6.eq) goto loc_827B7A60;
	// twi 31,r0,22
loc_827B7A60:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b7a70
	if (!ctx.cr6.eq) goto loc_827B7A70;
	// twi 31,r0,22
loc_827B7A70:
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82137248
	ctx.lr = 0x827B7A80;
	sub_82137248(ctx, base);
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x827b7a90
	if (!ctx.cr6.eq) goto loc_827B7A90;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x827b7a28
	goto loc_827B7A28;
loc_827B7A90:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b7100
	ctx.lr = 0x827B7AA0;
	sub_827B7100(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b7abc
	if (ctx.cr6.eq) goto loc_827B7ABC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82133e60
	ctx.lr = 0x827B7AB8;
	sub_82133E60(ctx, base);
	// b 0x827b7a28
	goto loc_827B7A28;
loc_827B7ABC:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82136bf8
	ctx.lr = 0x827B7AC4;
	sub_82136BF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
loc_827B7AD0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x827b7b00
	if (ctx.cr6.eq) goto loc_827B7B00;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x827b7100
	ctx.lr = 0x827B7AE8;
	sub_827B7100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82133e60
	ctx.lr = 0x827B7AFC;
	sub_82133E60(ctx, base);
	// b 0x827b7b10
	goto loc_827B7B10;
loc_827B7B00:
	// bl 0x827b3658
	ctx.lr = 0x827B7B04;
	sub_827B3658(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b7abc
	if (ctx.cr6.eq) goto loc_827B7ABC;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_827B7B10:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827b7abc
	if (ctx.cr6.eq) goto loc_827B7ABC;
	// stw r22,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r22.u32);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13404);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x827cbfc0
	ctx.lr = 0x827B7B30;
	sub_827CBFC0(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,13556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13556, ctx.r11.u32);
	// bl 0x82c02420
	ctx.lr = 0x827B7B48;
	sub_82C02420(ctx, base);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r8,r9,-19740
	ctx.r8.s64 = ctx.r9.s64 + -19740;
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r30.u32);
	// bl 0x82136bf8
	ctx.lr = 0x827B7B5C;
	sub_82136BF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B7B68"))) PPC_WEAK_FUNC(sub_827B7B68);
PPC_FUNC_IMPL(__imp__sub_827B7B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x827B7B70;
	__savegprlr_14(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82136b60
	ctx.lr = 0x827B7B80;
	sub_82136B60(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r18,r25
	ctx.r18.u64 = ctx.r25.u64;
	// lwz r11,13424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13424);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b7bb8
	if (ctx.cr6.eq) goto loc_827B7BB8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x827b7bb8
	if (ctx.cr6.eq) goto loc_827B7BB8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r17,1
	ctx.r17.s64 = 1;
	// lwz r10,248(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b7bbc
	if (!ctx.cr6.eq) goto loc_827B7BBC;
loc_827B7BB8:
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
loc_827B7BBC:
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827b7be8
	if (ctx.cr6.eq) goto loc_827B7BE8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,284(r28)
	PPC_STORE_U32(ctx.r28.u32 + 284, ctx.r11.u32);
	// bl 0x82136bf8
	ctx.lr = 0x827B7BE0;
	sub_82136BF8(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
loc_827B7BE8:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r15,400(r28)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// addi r24,r11,-15760
	ctx.r24.s64 = ctx.r11.s64 + -15760;
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B7BFC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,284(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827b7c20
	if (!ctx.cr6.eq) goto loc_827B7C20;
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B7C10;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82136bf8
	ctx.lr = 0x827B7C18;
	sub_82136BF8(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
loc_827B7C20:
	// lis r20,-31942
	ctx.r20.s64 = -2093350912;
	// lwz r11,13412(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13412);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r25,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// lwz r11,284(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	// lwz r10,280(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827b7c70
	if (!ctx.cr6.eq) goto loc_827B7C70;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x827b7c70
	if (!ctx.cr6.eq) goto loc_827B7C70;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// stw r21,284(r28)
	PPC_STORE_U32(ctx.r28.u32 + 284, ctx.r21.u32);
	// stw r21,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r21.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x827B7C60;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82136bf8
	ctx.lr = 0x827B7C68;
	sub_82136BF8(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
loc_827B7C70:
	// li r21,-1
	ctx.r21.s64 = -1;
	// stw r11,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r11.u32);
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// stw r21,284(r28)
	PPC_STORE_U32(ctx.r28.u32 + 284, ctx.r21.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x827B7C84;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lbz r14,144(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// addi r26,r28,268
	ctx.r26.s64 = ctx.r28.s64 + 268;
	// lis r16,-31942
	ctx.r16.s64 = -2093350912;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_827B7C98:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82137198
	ctx.lr = 0x827B7CAC;
	sub_82137198(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r4,288(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// bl 0x827b4bd0
	ctx.lr = 0x827B7CDC;
	sub_827B4BD0(ctx, base);
	// lwz r4,292(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827b7cf8
	if (ctx.cr6.eq) goto loc_827B7CF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b4bd0
	ctx.lr = 0x827B7CF8;
	sub_827B4BD0(ctx, base);
loc_827B7CF8:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x827b7e18
	if (ctx.cr6.eq) goto loc_827B7E18;
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// addi r30,r28,256
	ctx.r30.s64 = ctx.r28.s64 + 256;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
loc_827B7D1C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b7d34
	if (ctx.cr6.eq) goto loc_827B7D34;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b7d38
	if (ctx.cr6.eq) goto loc_827B7D38;
loc_827B7D34:
	// twi 31,r0,22
loc_827B7D38:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b7e10
	if (ctx.cr6.eq) goto loc_827B7E10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b7d50
	if (!ctx.cr6.eq) goto loc_827B7D50;
	// twi 31,r0,22
loc_827B7D50:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b7d60
	if (!ctx.cr6.eq) goto loc_827B7D60;
	// twi 31,r0,22
loc_827B7D60:
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x821370d0
	ctx.lr = 0x827B7D78;
	sub_821370D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b7d98
	if (ctx.cr6.eq) goto loc_827B7D98;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b7d9c
	if (ctx.cr6.eq) goto loc_827B7D9C;
loc_827B7D98:
	// twi 31,r0,22
loc_827B7D9C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827b7e04
	if (!ctx.cr6.eq) goto loc_827B7E04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b3658
	ctx.lr = 0x827B7DB8;
	sub_827B3658(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b7dd8
	if (ctx.cr6.eq) goto loc_827B7DD8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b7dd8
	if (ctx.cr6.eq) goto loc_827B7DD8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b5898
	ctx.lr = 0x827B7DD4;
	sub_827B5898(ctx, base);
	// li r19,1
	ctx.r19.s64 = 1;
loc_827B7DD8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82133e60
	ctx.lr = 0x827B7DE8;
	sub_82133E60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82136c68
	ctx.lr = 0x827B7DF8;
	sub_82136C68(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x827b7d1c
	goto loc_827B7D1C;
loc_827B7E04:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82137248
	ctx.lr = 0x827B7E0C;
	sub_82137248(ctx, base);
	// b 0x827b7d1c
	goto loc_827B7D1C;
loc_827B7E10:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x827b8248
	goto loc_827B8248;
loc_827B7E18:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827b8248
	if (ctx.cr6.eq) goto loc_827B8248;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82136b60
	ctx.lr = 0x827B7E28;
	sub_82136B60(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// lwz r4,248(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b4bd0
	ctx.lr = 0x827B7E3C;
	sub_827B4BD0(ctx, base);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// addi r30,r28,256
	ctx.r30.s64 = ctx.r28.s64 + 256;
	// stb r14,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r14.u8);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// ld r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
loc_827B7E68:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b7e80
	if (ctx.cr6.eq) goto loc_827B7E80;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b7e84
	if (ctx.cr6.eq) goto loc_827B7E84;
loc_827B7E80:
	// twi 31,r0,22
loc_827B7E84:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b7f70
	if (ctx.cr6.eq) goto loc_827B7F70;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b7e9c
	if (!ctx.cr6.eq) goto loc_827B7E9C;
	// twi 31,r0,22
loc_827B7E9C:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b7eac
	if (!ctx.cr6.eq) goto loc_827B7EAC;
	// twi 31,r0,22
loc_827B7EAC:
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x821370d0
	ctx.lr = 0x827B7EC4;
	sub_821370D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b7ee4
	if (ctx.cr6.eq) goto loc_827B7EE4;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b7ee8
	if (ctx.cr6.eq) goto loc_827B7EE8;
loc_827B7EE4:
	// twi 31,r0,22
loc_827B7EE8:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827b7f54
	if (!ctx.cr6.eq) goto loc_827B7F54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b3658
	ctx.lr = 0x827B7F04;
	sub_827B3658(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b7f24
	if (ctx.cr6.eq) goto loc_827B7F24;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b7f24
	if (ctx.cr6.eq) goto loc_827B7F24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b5898
	ctx.lr = 0x827B7F20;
	sub_827B5898(ctx, base);
	// li r19,1
	ctx.r19.s64 = 1;
loc_827B7F24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82136c68
	ctx.lr = 0x827B7F34;
	sub_82136C68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x82133e60
	ctx.lr = 0x827B7F50;
	sub_82133E60(ctx, base);
	// b 0x827b7e68
	goto loc_827B7E68;
loc_827B7F54:
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82136c68
	ctx.lr = 0x827B7F64;
	sub_82136C68(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82137248
	ctx.lr = 0x827B7F6C;
	sub_82137248(ctx, base);
	// b 0x827b7e68
	goto loc_827B7E68;
loc_827B7F70:
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// ld r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
loc_827B7F8C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b7fa4
	if (ctx.cr6.eq) goto loc_827B7FA4;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b7fa8
	if (ctx.cr6.eq) goto loc_827B7FA8;
loc_827B7FA4:
	// twi 31,r0,22
loc_827B7FA8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b8134
	if (ctx.cr6.eq) goto loc_827B8134;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b7fc4
	if (!ctx.cr6.eq) goto loc_827B7FC4;
	// twi 31,r0,22
loc_827B7FC4:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b7fd4
	if (!ctx.cr6.eq) goto loc_827B7FD4;
	// twi 31,r0,22
loc_827B7FD4:
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82137248
	ctx.lr = 0x827B7FE4;
	sub_82137248(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821370d0
	ctx.lr = 0x827B7FF4;
	sub_821370D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8014
	if (ctx.cr6.eq) goto loc_827B8014;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b8018
	if (ctx.cr6.eq) goto loc_827B8018;
loc_827B8014:
	// twi 31,r0,22
loc_827B8018:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b7f8c
	if (!ctx.cr6.eq) goto loc_827B7F8C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x821370d0
	ctx.lr = 0x827B8034;
	sub_821370D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8054
	if (ctx.cr6.eq) goto loc_827B8054;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x827b8058
	if (ctx.cr6.eq) goto loc_827B8058;
loc_827B8054:
	// twi 31,r0,22
loc_827B8058:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b8078
	if (ctx.cr6.eq) goto loc_827B8078;
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82136c68
	ctx.lr = 0x827B8074;
	sub_82136C68(ctx, base);
	// b 0x827b8100
	goto loc_827B8100;
loc_827B8078:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b7100
	ctx.lr = 0x827B8088;
	sub_827B7100(ctx, base);
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b8100
	if (ctx.cr6.eq) goto loc_827B8100;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b80e0
	if (ctx.cr6.eq) goto loc_827B80E0;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x827b80d4
	if (!ctx.cr6.lt) goto loc_827B80D4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x827b8100
	goto loc_827B8100;
loc_827B80D4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827b80e0
	if (!ctx.cr6.gt) goto loc_827B80E0;
	// twi 31,r0,22
loc_827B80E0:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// ld r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// bl 0x8212ab58
	ctx.lr = 0x827B8100;
	sub_8212AB58(ctx, base);
loc_827B8100:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b3658
	ctx.lr = 0x827B810C;
	sub_827B3658(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b4f10
	ctx.lr = 0x827B811C;
	sub_827B4F10(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82133e60
	ctx.lr = 0x827B812C;
	sub_82133E60(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x827b7f8c
	goto loc_827B7F8C;
loc_827B8134:
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827b81bc
	if (ctx.cr6.eq) goto loc_827B81BC;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi. r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827b81bc
	if (ctx.cr0.eq) goto loc_827B81BC;
	// lwz r11,13556(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 13556);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13556(r16)
	PPC_STORE_U32(ctx.r16.u32 + 13556, ctx.r11.u32);
	// bl 0x82137170
	ctx.lr = 0x827B8168;
	sub_82137170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b81bc
	if (ctx.cr6.eq) goto loc_827B81BC;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x827b817c
	goto loc_827B817C;
loc_827B8178:
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_827B817C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827b8198
	if (ctx.cr6.eq) goto loc_827B8198;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827b819c
	if (ctx.cr6.lt) goto loc_827B819C;
loc_827B8198:
	// twi 31,r0,22
loc_827B819C:
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82c02420
	ctx.lr = 0x827B81A4;
	sub_82C02420(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82137170
	ctx.lr = 0x827B81B4;
	sub_82137170(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x827b8178
	if (ctx.cr6.lt) goto loc_827B8178;
loc_827B81BC:
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B81C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,13412(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13412);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827b821c
	if (!ctx.cr6.eq) goto loc_827B821C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r11,252(r28)
	PPC_STORE_U32(ctx.r28.u32 + 252, ctx.r11.u32);
	// beq cr6,0x827b8204
	if (ctx.cr6.eq) goto loc_827B8204;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// stw r11,13548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13548, ctx.r11.u32);
	// stw r10,13348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13348, ctx.r10.u32);
loc_827B8204:
	// lwz r11,320(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b821c
	if (ctx.cr6.eq) goto loc_827B821C;
	// lwz r3,396(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 396);
	// bl 0x82208cd0
	ctx.lr = 0x827B8218;
	sub_82208CD0(ctx, base);
	// stw r25,320(r28)
	PPC_STORE_U32(ctx.r28.u32 + 320, ctx.r25.u32);
loc_827B821C:
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B8224;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b8234
	if (ctx.cr6.eq) goto loc_827B8234;
	// bl 0x82120a70
	ctx.lr = 0x827B8234;
	sub_82120A70(ctx, base);
loc_827B8234:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// bl 0x82136bf8
	ctx.lr = 0x827B8248;
	sub_82136BF8(ctx, base);
loc_827B8248:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
loc_827B8260:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8278
	if (ctx.cr6.eq) goto loc_827B8278;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x827b827c
	if (ctx.cr6.eq) goto loc_827B827C;
loc_827B8278:
	// twi 31,r0,22
loc_827B827C:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b83dc
	if (ctx.cr6.eq) goto loc_827B83DC;
	// ld r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b8298
	if (!ctx.cr6.eq) goto loc_827B8298;
	// twi 31,r0,22
loc_827B8298:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827b82a8
	if (!ctx.cr6.eq) goto loc_827B82A8;
	// twi 31,r0,22
loc_827B82A8:
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x82137248
	ctx.lr = 0x827B82B8;
	sub_82137248(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x821370d0
	ctx.lr = 0x827B82C8;
	sub_821370D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b82e8
	if (ctx.cr6.eq) goto loc_827B82E8;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b82ec
	if (ctx.cr6.eq) goto loc_827B82EC;
loc_827B82E8:
	// twi 31,r0,22
loc_827B82EC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b830c
	if (ctx.cr6.eq) goto loc_827B830C;
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// b 0x827b8358
	goto loc_827B8358;
loc_827B830C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b3658
	ctx.lr = 0x827B8318;
	sub_827B3658(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b834c
	if (ctx.cr6.eq) goto loc_827B834C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827b834c
	if (ctx.cr6.eq) goto loc_827B834C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x827b8340
	if (ctx.cr6.eq) goto loc_827B8340;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b3420
	ctx.lr = 0x827B833C;
	sub_827B3420(ctx, base);
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
loc_827B8340:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b6270
	ctx.lr = 0x827B834C;
	sub_827B6270(ctx, base);
loc_827B834C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
loc_827B8358:
	// bl 0x82136c68
	ctx.lr = 0x827B835C;
	sub_82136C68(ctx, base);
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B8364;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,13412(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13412);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r25,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// lwz r11,284(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827b838c
	if (ctx.cr6.eq) goto loc_827B838C;
	// lwz r10,288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b8394
	if (!ctx.cr6.eq) goto loc_827B8394;
loc_827B838C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827b83a0
	if (ctx.cr6.eq) goto loc_827B83A0;
loc_827B8394:
	// stw r11,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r11.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r21,284(r28)
	PPC_STORE_U32(ctx.r28.u32 + 284, ctx.r21.u32);
loc_827B83A0:
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B83A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x827b8260
	if (ctx.cr6.eq) goto loc_827B8260;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13424);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x827b83d8
	if (ctx.cr6.eq) goto loc_827B83D8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r17,1
	ctx.r17.s64 = 1;
	// lwz r10,248(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b83dc
	if (!ctx.cr6.eq) goto loc_827B83DC;
loc_827B83D8:
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
loc_827B83DC:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x827b7c98
	if (!ctx.cr6.eq) goto loc_827B7C98;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b53e0
	ctx.lr = 0x827B83EC;
	sub_827B53E0(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// ld r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
loc_827B8408:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b8420
	if (ctx.cr6.eq) goto loc_827B8420;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b8424
	if (ctx.cr6.eq) goto loc_827B8424;
loc_827B8420:
	// twi 31,r0,22
loc_827B8424:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b8568
	if (ctx.cr6.eq) goto loc_827B8568;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b8440
	if (!ctx.cr6.eq) goto loc_827B8440;
	// twi 31,r0,22
loc_827B8440:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b8450
	if (!ctx.cr6.eq) goto loc_827B8450;
	// twi 31,r0,22
loc_827B8450:
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82137248
	ctx.lr = 0x827B8460;
	sub_82137248(ctx, base);
	// addi r31,r28,256
	ctx.r31.s64 = ctx.r28.s64 + 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x821370d0
	ctx.lr = 0x827B8474;
	sub_821370D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,260(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8494
	if (ctx.cr6.eq) goto loc_827B8494;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827b8498
	if (ctx.cr6.eq) goto loc_827B8498;
loc_827B8494:
	// twi 31,r0,22
loc_827B8498:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b84e8
	if (!ctx.cr6.eq) goto loc_827B84E8;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x827b84c4
	if (!ctx.cr6.eq) goto loc_827B84C4;
	// lwz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b84c4
	if (ctx.cr6.eq) goto loc_827B84C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b53e0
	ctx.lr = 0x827B84C0;
	sub_827B53E0(ctx, base);
	// li r15,1
	ctx.r15.s64 = 1;
loc_827B84C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b7100
	ctx.lr = 0x827B84D4;
	sub_827B7100(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// li r18,1
	ctx.r18.s64 = 1;
	// bl 0x82133e60
	ctx.lr = 0x827B84E8;
	sub_82133E60(ctx, base);
loc_827B84E8:
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B84F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,13412(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13412);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r25,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// lwz r11,284(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827b8518
	if (ctx.cr6.eq) goto loc_827B8518;
	// lwz r10,288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b8520
	if (!ctx.cr6.eq) goto loc_827B8520;
loc_827B8518:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827b852c
	if (ctx.cr6.eq) goto loc_827B852C;
loc_827B8520:
	// stw r11,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r11.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r21,284(r28)
	PPC_STORE_U32(ctx.r28.u32 + 284, ctx.r21.u32);
loc_827B852C:
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B8534;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x827b8408
	if (ctx.cr6.eq) goto loc_827B8408;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13424);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x827b8564
	if (ctx.cr6.eq) goto loc_827B8564;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r17,1
	ctx.r17.s64 = 1;
	// lwz r10,248(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b8568
	if (!ctx.cr6.eq) goto loc_827B8568;
loc_827B8564:
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
loc_827B8568:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x827b7c98
	if (!ctx.cr6.eq) goto loc_827B7C98;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x827b858c
	if (!ctx.cr6.eq) goto loc_827B858C;
	// lwz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b858c
	if (ctx.cr6.eq) goto loc_827B858C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b53e0
	ctx.lr = 0x827B858C;
	sub_827B53E0(ctx, base);
loc_827B858C:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x827b85bc
	if (ctx.cr6.eq) goto loc_827B85BC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13404);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x827cbfc0
	ctx.lr = 0x827B85A8;
	sub_827CBFC0(ctx, base);
	// lwz r11,13556(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 13556);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13556(r16)
	PPC_STORE_U32(ctx.r16.u32 + 13556, ctx.r11.u32);
	// bl 0x82c02420
	ctx.lr = 0x827B85BC;
	sub_82C02420(ctx, base);
loc_827B85BC:
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B85C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// lwz r10,248(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r21,284(r28)
	PPC_STORE_U32(ctx.r28.u32 + 284, ctx.r21.u32);
	// stw r21,292(r28)
	PPC_STORE_U32(ctx.r28.u32 + 292, ctx.r21.u32);
	// stw r21,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r21.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r11,280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 280, ctx.r11.u32);
	// bne cr6,0x827b85ec
	if (!ctx.cr6.eq) goto loc_827B85EC;
	// stw r21,280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 280, ctx.r21.u32);
loc_827B85EC:
	// addi r3,r24,560
	ctx.r3.s64 = ctx.r24.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B85F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r24,588
	ctx.r3.s64 = ctx.r24.s64 + 588;
	// bl 0x82c09bec
	ctx.lr = 0x827B85FC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b8624
	if (!ctx.cr6.eq) goto loc_827B8624;
	// lwz r3,360(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827b861c
	if (ctx.cr6.eq) goto loc_827B861C;
	// bl 0x82120a70
	ctx.lr = 0x827B8618;
	sub_82120A70(ctx, base);
	// stw r25,360(r28)
	PPC_STORE_U32(ctx.r28.u32 + 360, ctx.r25.u32);
loc_827B861C:
	// stw r25,368(r28)
	PPC_STORE_U32(ctx.r28.u32 + 368, ctx.r25.u32);
	// stw r25,364(r28)
	PPC_STORE_U32(ctx.r28.u32 + 364, ctx.r25.u32);
loc_827B8624:
	// addi r3,r24,588
	ctx.r3.s64 = ctx.r24.s64 + 588;
	// bl 0x82c09bdc
	ctx.lr = 0x827B862C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x827b864c
	if (ctx.cr6.eq) goto loc_827B864C;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,13548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13548, ctx.r11.u32);
	// stw r10,13348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13348, ctx.r10.u32);
loc_827B864C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82136bf8
	ctx.lr = 0x827B8654;
	sub_82136BF8(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B865C"))) PPC_WEAK_FUNC(sub_827B865C);
PPC_FUNC_IMPL(__imp__sub_827B865C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8660"))) PPC_WEAK_FUNC(sub_827B8660);
PPC_FUNC_IMPL(__imp__sub_827B8660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827B8668;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82136b60
	ctx.lr = 0x827B867C;
	sub_82136B60(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,240(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// bl 0x827b4bd0
	ctx.lr = 0x827B8694;
	sub_827B4BD0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
loc_827B86B0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b86c8
	if (ctx.cr6.eq) goto loc_827B86C8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b86cc
	if (ctx.cr6.eq) goto loc_827B86CC;
loc_827B86C8:
	// twi 31,r0,22
loc_827B86CC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b8718
	if (ctx.cr6.eq) goto loc_827B8718;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b86e8
	if (!ctx.cr6.eq) goto loc_827B86E8;
	// twi 31,r0,22
loc_827B86E8:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b86f8
	if (!ctx.cr6.eq) goto loc_827B86F8;
	// twi 31,r0,22
loc_827B86F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82137248
	ctx.lr = 0x827B8704;
	sub_82137248(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b7100
	ctx.lr = 0x827B8714;
	sub_827B7100(ctx, base);
	// b 0x827b86b0
	goto loc_827B86B0;
loc_827B8718:
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r29,r8,1
	ctx.r29.u64 = ctx.r8.u64 ^ 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827b8760
	if (ctx.cr6.eq) goto loc_827B8760;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13404);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x827cbfc0
	ctx.lr = 0x827B8748;
	sub_827CBFC0(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,13556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13556, ctx.r11.u32);
	// bl 0x82c02420
	ctx.lr = 0x827B8760;
	sub_82C02420(ctx, base);
loc_827B8760:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
loc_827B877C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b8794
	if (ctx.cr6.eq) goto loc_827B8794;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b8798
	if (ctx.cr6.eq) goto loc_827B8798;
loc_827B8794:
	// twi 31,r0,22
loc_827B8798:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b883c
	if (ctx.cr6.eq) goto loc_827B883C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b87b4
	if (!ctx.cr6.eq) goto loc_827B87B4;
	// twi 31,r0,22
loc_827B87B4:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b87c4
	if (!ctx.cr6.eq) goto loc_827B87C4;
	// twi 31,r0,22
loc_827B87C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82137248
	ctx.lr = 0x827B87D0;
	sub_82137248(ctx, base);
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827b877c
	if (ctx.cr6.eq) goto loc_827B877C;
	// lwz r8,236(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_827B87E8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,192(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 192);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827b880c
	if (ctx.cr6.eq) goto loc_827B880C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827b87e8
	if (ctx.cr6.lt) goto loc_827B87E8;
	// b 0x827b877c
	goto loc_827B877C;
loc_827B880C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b877c
	if (ctx.cr6.eq) goto loc_827B877C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b877c
	if (ctx.cr6.eq) goto loc_827B877C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b4f10
	ctx.lr = 0x827B8838;
	sub_827B4F10(ctx, base);
	// b 0x827b877c
	goto loc_827B877C;
loc_827B883C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827b8850
	if (ctx.cr6.eq) goto loc_827B8850;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,13548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13548, ctx.r11.u32);
loc_827B8850:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b3b68
	ctx.lr = 0x827B885C;
	sub_827B3B68(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82136bf8
	ctx.lr = 0x827B8864;
	sub_82136BF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B886C"))) PPC_WEAK_FUNC(sub_827B886C);
PPC_FUNC_IMPL(__imp__sub_827B886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B8870"))) PPC_WEAK_FUNC(sub_827B8870);
PPC_FUNC_IMPL(__imp__sub_827B8870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x827B8878;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// bl 0x82136b60
	ctx.lr = 0x827B8890;
	sub_82136B60(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827b88a4
	if (ctx.cr6.eq) goto loc_827B88A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b5508
	ctx.lr = 0x827B88A4;
	sub_827B5508(ctx, base);
loc_827B88A4:
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r11,13412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13412);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827b88c8
	if (ctx.cr6.eq) goto loc_827B88C8;
	// stw r26,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b7b68
	ctx.lr = 0x827B88C8;
	sub_827B7B68(ctx, base);
loc_827B88C8:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b4bd0
	ctx.lr = 0x827B88DC;
	sub_827B4BD0(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// addi r27,r31,256
	ctx.r27.s64 = ctx.r31.s64 + 256;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
loc_827B88FC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8914
	if (ctx.cr6.eq) goto loc_827B8914;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x827b8918
	if (ctx.cr6.eq) goto loc_827B8918;
loc_827B8914:
	// twi 31,r0,22
loc_827B8918:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b8a28
	if (ctx.cr6.eq) goto loc_827B8A28;
	// ld r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b8934
	if (!ctx.cr6.eq) goto loc_827B8934;
	// twi 31,r0,22
loc_827B8934:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827b8944
	if (!ctx.cr6.eq) goto loc_827B8944;
	// twi 31,r0,22
loc_827B8944:
	// lwz r30,12(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82137248
	ctx.lr = 0x827B8954;
	sub_82137248(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821370d0
	ctx.lr = 0x827B8964;
	sub_821370D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8984
	if (ctx.cr6.eq) goto loc_827B8984;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827b8988
	if (ctx.cr6.eq) goto loc_827B8988;
loc_827B8984:
	// twi 31,r0,22
loc_827B8988:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b88fc
	if (!ctx.cr6.eq) goto loc_827B88FC;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b8a04
	if (!ctx.cr6.gt) goto loc_827B8A04;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_827B89B0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827b89d8
	if (ctx.cr6.eq) goto loc_827B89D8;
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b89b0
	if (ctx.cr6.lt) goto loc_827B89B0;
	// b 0x827b8a04
	goto loc_827B8A04;
loc_827B89D8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8a04
	if (ctx.cr6.eq) goto loc_827B8A04;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827b8a04
	if (ctx.cr6.eq) goto loc_827B8A04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b5898
	ctx.lr = 0x827B8A04;
	sub_827B5898(ctx, base);
loc_827B8A04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82136c68
	ctx.lr = 0x827B8A14;
	sub_82136C68(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82133e60
	ctx.lr = 0x827B8A24;
	sub_82133E60(ctx, base);
	// b 0x827b88fc
	goto loc_827B88FC;
loc_827B8A28:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
loc_827B8A44:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b8a5c
	if (ctx.cr6.eq) goto loc_827B8A5C;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b8a60
	if (ctx.cr6.eq) goto loc_827B8A60;
loc_827B8A5C:
	// twi 31,r0,22
loc_827B8A60:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b8b78
	if (ctx.cr6.eq) goto loc_827B8B78;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b8a7c
	if (!ctx.cr6.eq) goto loc_827B8A7C;
	// twi 31,r0,22
loc_827B8A7C:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b8a8c
	if (!ctx.cr6.eq) goto loc_827B8A8C;
	// twi 31,r0,22
loc_827B8A8C:
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x82137248
	ctx.lr = 0x827B8A9C;
	sub_82137248(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821370d0
	ctx.lr = 0x827B8AAC;
	sub_821370D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8acc
	if (ctx.cr6.eq) goto loc_827B8ACC;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x827b8ad0
	if (ctx.cr6.eq) goto loc_827B8AD0;
loc_827B8ACC:
	// twi 31,r0,22
loc_827B8AD0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b8a44
	if (!ctx.cr6.eq) goto loc_827B8A44;
	// addi r30,r31,268
	ctx.r30.s64 = ctx.r31.s64 + 268;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821370d0
	ctx.lr = 0x827B8AF0;
	sub_821370D0(ctx, base);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// ld r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b8b30
	if (!ctx.cr6.gt) goto loc_827B8B30;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_827B8B0C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827b8b64
	if (ctx.cr6.eq) goto loc_827B8B64;
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b8b0c
	if (ctx.cr6.lt) goto loc_827B8B0C;
loc_827B8B30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827B8B34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b4f10
	ctx.lr = 0x827B8B40;
	sub_827B4F10(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82136c68
	ctx.lr = 0x827B8B50;
	sub_82136C68(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82133e60
	ctx.lr = 0x827B8B60;
	sub_82133E60(ctx, base);
	// b 0x827b8a44
	goto loc_827B8A44;
loc_827B8B64:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x827b8b34
	goto loc_827B8B34;
loc_827B8B78:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b3658
	ctx.lr = 0x827B8B84;
	sub_827B3658(ctx, base);
	// lwz r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r11,13412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13412);
	// stw r26,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r9.u32);
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// lwz r3,13604(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13604);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// stw r5,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r5.u32);
	// lwz r4,104(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// bl 0x827ba2d0
	ctx.lr = 0x827B8BBC;
	sub_827BA2D0(ctx, base);
	// lis r4,-31945
	ctx.r4.s64 = -2093547520;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r3,r4,-19740
	ctx.r3.s64 = ctx.r4.s64 + -19740;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x827b8be0
	if (ctx.cr6.eq) goto loc_827B8BE0;
	// lwz r11,13412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13412);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 732, ctx.r10.u32);
loc_827B8BE0:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// bl 0x82746620
	ctx.lr = 0x827B8BE8;
	sub_82746620(ctx, base);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x82746620
	ctx.lr = 0x827B8BF0;
	sub_82746620(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,13548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13548, ctx.r11.u32);
	// stw r10,13348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13348, ctx.r10.u32);
	// bl 0x82136bf8
	ctx.lr = 0x827B8C10;
	sub_82136BF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8C18"))) PPC_WEAK_FUNC(sub_827B8C18);
PPC_FUNC_IMPL(__imp__sub_827B8C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B8C20;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x827b8fd4
	if (ctx.cr6.gt) goto loc_827B8FD4;
	// lis r12,-32132
	ctx.r12.s64 = -2105802752;
	// addi r12,r12,-29616
	ctx.r12.s64 = ctx.r12.s64 + -29616;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_827B8FD4;
	case 1:
		goto loc_827B8C7C;
	case 2:
		goto loc_827B8CB8;
	case 3:
		goto loc_827B8D5C;
	case 4:
		goto loc_827B8CE0;
	case 5:
		goto loc_827B8D28;
	case 6:
		goto loc_827B8D28;
	case 7:
		goto loc_827B8D84;
	case 8:
		goto loc_827B8DA0;
	case 9:
		goto loc_827B8DB4;
	case 10:
		goto loc_827B8DCC;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-28716(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28716);
	// lwz r19,-29572(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29572);
	// lwz r19,-29512(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29512);
	// lwz r19,-29348(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29348);
	// lwz r19,-29472(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29472);
	// lwz r19,-29400(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29400);
	// lwz r19,-29400(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29400);
	// lwz r19,-29308(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29308);
	// lwz r19,-29280(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29280);
	// lwz r19,-29260(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29260);
	// lwz r19,-29236(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29236);
loc_827B8C7C:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r29,r11,-15760
	ctx.r29.s64 = ctx.r11.s64 + -15760;
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// bl 0x82c09bec
	ctx.lr = 0x827B8C8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r29,560
	ctx.r3.s64 = ctx.r29.s64 + 560;
	// stw r10,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r10.u32);
	// stw r9,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r9.u32);
	// bl 0x82c09bdc
	ctx.lr = 0x827B8CA4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b7b68
	ctx.lr = 0x827B8CAC;
	sub_827B7B68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B8CB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 ^ 1;
	// bl 0x827b7558
	ctx.lr = 0x827B8CD4;
	sub_827B7558(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B8CE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827b4398
	ctx.lr = 0x827B8CEC;
	sub_827B4398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b8d00
	if (ctx.cr6.eq) goto loc_827B8D00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827b8660
	ctx.lr = 0x827B8D00;
	sub_827B8660(ctx, base);
loc_827B8D00:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b4490
	ctx.lr = 0x827B8D10;
	sub_827B4490(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827b3e60
	ctx.lr = 0x827B8D1C;
	sub_827B3E60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B8D28:
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 ^ 1;
	// bl 0x827b6480
	ctx.lr = 0x827B8D44;
	sub_827B6480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827b36e0
	ctx.lr = 0x827B8D50;
	sub_827B36E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B8D5C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 ^ 1;
	// bl 0x827b8870
	ctx.lr = 0x827B8D78;
	sub_827B8870(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B8D84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827b5948
	ctx.lr = 0x827B8D94;
	sub_827B5948(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B8DA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b5508
	ctx.lr = 0x827B8DA8;
	sub_827B5508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B8DB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827b8660
	ctx.lr = 0x827B8DC0;
	sub_827B8660(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B8DCC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82136b60
	ctx.lr = 0x827B8DD8;
	sub_82136B60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b3aa8
	ctx.lr = 0x827B8DE4;
	sub_827B3AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b8fc0
	if (ctx.cr6.eq) goto loc_827B8FC0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b4bd0
	ctx.lr = 0x827B8E00;
	sub_827B4BD0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
loc_827B8E1C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b8e34
	if (ctx.cr6.eq) goto loc_827B8E34;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b8e38
	if (ctx.cr6.eq) goto loc_827B8E38;
loc_827B8E34:
	// twi 31,r0,22
loc_827B8E38:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b8ed8
	if (ctx.cr6.eq) goto loc_827B8ED8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b8e54
	if (!ctx.cr6.eq) goto loc_827B8E54;
	// twi 31,r0,22
loc_827B8E54:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b8e64
	if (!ctx.cr6.eq) goto loc_827B8E64;
	// twi 31,r0,22
loc_827B8E64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82137248
	ctx.lr = 0x827B8E70;
	sub_82137248(ctx, base);
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b8e1c
	if (!ctx.cr6.gt) goto loc_827B8E1C;
	// lwz r9,236(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_827B8E88:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827b8eb0
	if (ctx.cr6.eq) goto loc_827B8EB0;
	// lwz r8,240(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b8e88
	if (ctx.cr6.lt) goto loc_827B8E88;
	// b 0x827b8e1c
	goto loc_827B8E1C;
loc_827B8EB0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8e1c
	if (ctx.cr6.eq) goto loc_827B8E1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b5898
	ctx.lr = 0x827B8ED4;
	sub_827B5898(ctx, base);
	// b 0x827b8e1c
	goto loc_827B8E1C;
loc_827B8ED8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b3420
	ctx.lr = 0x827B8EE0;
	sub_827B3420(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
loc_827B8EFC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827b8f14
	if (ctx.cr6.eq) goto loc_827B8F14;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827b8f18
	if (ctx.cr6.eq) goto loc_827B8F18;
loc_827B8F14:
	// twi 31,r0,22
loc_827B8F18:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827b8fb8
	if (ctx.cr6.eq) goto loc_827B8FB8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827b8f34
	if (!ctx.cr6.eq) goto loc_827B8F34;
	// twi 31,r0,22
loc_827B8F34:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827b8f44
	if (!ctx.cr6.eq) goto loc_827B8F44;
	// twi 31,r0,22
loc_827B8F44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82137248
	ctx.lr = 0x827B8F50;
	sub_82137248(ctx, base);
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827b8efc
	if (!ctx.cr6.gt) goto loc_827B8EFC;
	// lwz r9,236(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_827B8F68:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827b8f90
	if (ctx.cr6.eq) goto loc_827B8F90;
	// lwz r8,240(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827b8f68
	if (ctx.cr6.lt) goto loc_827B8F68;
	// b 0x827b8efc
	goto loc_827B8EFC;
loc_827B8F90:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827b8efc
	if (ctx.cr6.eq) goto loc_827B8EFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827b6270
	ctx.lr = 0x827B8FB4;
	sub_827B6270(ctx, base);
	// b 0x827b8efc
	goto loc_827B8EFC;
loc_827B8FB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827b53e0
	ctx.lr = 0x827B8FC0;
	sub_827B53E0(ctx, base);
loc_827B8FC0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82136bf8
	ctx.lr = 0x827B8FC8;
	sub_82136BF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827B8FD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B8FE0"))) PPC_WEAK_FUNC(sub_827B8FE0);
PPC_FUNC_IMPL(__imp__sub_827B8FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x827B8FE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,-8500
	ctx.r4.s64 = ctx.r11.s64 + -8500;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x821202d8
	ctx.lr = 0x827B9008;
	sub_821202D8(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827b9028
	if (ctx.cr6.eq) goto loc_827B9028;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B9028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827B9028:
	// bl 0x8222dc78
	ctx.lr = 0x827B902C;
	sub_8222DC78(ctx, base);
	// stw r3,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r3.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208cd0
	ctx.lr = 0x827B9038;
	sub_82208CD0(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// addi r28,r11,-15760
	ctx.r28.s64 = ctx.r11.s64 + -15760;
loc_827B9048:
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x82208ce0
	ctx.lr = 0x827B9050;
	sub_82208CE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x827b3788
	ctx.lr = 0x827B9060;
	sub_827B3788(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b90c0
	if (ctx.cr6.eq) goto loc_827B90C0;
loc_827B9068:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827b908c
	if (ctx.cr6.eq) goto loc_827B908C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827b908c
	if (ctx.cr6.eq) goto loc_827B908C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x827b908c
	if (ctx.cr6.eq) goto loc_827B908C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x827b9090
	if (!ctx.cr6.eq) goto loc_827B9090;
loc_827B908C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_827B9090:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b8c18
	ctx.lr = 0x827B909C;
	sub_827B8C18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827b90bc
	if (ctx.cr6.eq) goto loc_827B90BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b3788
	ctx.lr = 0x827B90B0;
	sub_827B3788(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827b9068
	if (!ctx.cr6.eq) goto loc_827B9068;
	// b 0x827b90c0
	goto loc_827B90C0;
loc_827B90BC:
	// li r30,1
	ctx.r30.s64 = 1;
loc_827B90C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b7b68
	ctx.lr = 0x827B90C8;
	sub_827B7B68(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x827b9160
	if (!ctx.cr6.eq) goto loc_827B9160;
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x82c09bec
	ctx.lr = 0x827B90DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827b9130
	if (!ctx.cr6.eq) goto loc_827B9130;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827b9130
	if (!ctx.cr6.eq) goto loc_827B9130;
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827b9130
	if (!ctx.cr6.eq) goto loc_827B9130;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827b4e80
	ctx.lr = 0x827B9108;
	sub_827B4E80(ctx, base);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827b9120
	if (ctx.cr6.eq) goto loc_827B9120;
	// lwz r3,13600(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13600);
	// bl 0x827be240
	ctx.lr = 0x827B911C;
	sub_827BE240(ctx, base);
	// stw r27,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r27.u32);
loc_827B9120:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82208cd0
	ctx.lr = 0x827B9128;
	sub_82208CD0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x827b9138
	goto loc_827B9138;
loc_827B9130:
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827B9138;
	sub_82208CD0(ctx, base);
loc_827B9138:
	// addi r3,r28,560
	ctx.r3.s64 = ctx.r28.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827B9140;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827b9158
	if (ctx.cr6.eq) goto loc_827B9158;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827b9158
	if (ctx.cr6.eq) goto loc_827B9158;
	// lwz r3,12480(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12480);
	// bl 0x82bcdb38
	ctx.lr = 0x827B9158;
	sub_82BCDB38(ctx, base);
loc_827B9158:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x827b9048
	goto loc_827B9048;
loc_827B9160:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B9168"))) PPC_WEAK_FUNC(sub_827B9168);
PPC_FUNC_IMPL(__imp__sub_827B9168) {
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
	// addi r30,r3,15700
	ctx.r30.s64 = ctx.r3.s64 + 15700;
	// li r31,5
	ctx.r31.s64 = 5;
loc_827B9184:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B9198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x827b9184
	if (!ctx.cr0.eq) goto loc_827B9184;
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

__attribute__((alias("__imp__sub_827B91BC"))) PPC_WEAK_FUNC(sub_827B91BC);
PPC_FUNC_IMPL(__imp__sub_827B91BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B91C0"))) PPC_WEAK_FUNC(sub_827B91C0);
PPC_FUNC_IMPL(__imp__sub_827B91C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827B91C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,15700
	ctx.r30.s64 = ctx.r3.s64 + 15700;
	// li r31,5
	ctx.r31.s64 = 5;
loc_827B91D8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B91F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x827b91d8
	if (!ctx.cr0.eq) goto loc_827B91D8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827B9204"))) PPC_WEAK_FUNC(sub_827B9204);
PPC_FUNC_IMPL(__imp__sub_827B9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B9208"))) PPC_WEAK_FUNC(sub_827B9208);
PPC_FUNC_IMPL(__imp__sub_827B9208) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,4140
	ctx.r11.s64 = ctx.r4.s64 + 4140;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B9218"))) PPC_WEAK_FUNC(sub_827B9218);
PPC_FUNC_IMPL(__imp__sub_827B9218) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,4140
	ctx.r11.s64 = ctx.r4.s64 + 4140;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B9230"))) PPC_WEAK_FUNC(sub_827B9230);
PPC_FUNC_IMPL(__imp__sub_827B9230) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,16544
	ctx.r11.s64 = ctx.r3.s64 + 16544;
loc_827B9238:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827b925c
	if (ctx.cr6.eq) goto loc_827B925C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x827b9238
	if (ctx.cr6.lt) goto loc_827B9238;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_827B925C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B9264"))) PPC_WEAK_FUNC(sub_827B9264);
PPC_FUNC_IMPL(__imp__sub_827B9264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827B9268"))) PPC_WEAK_FUNC(sub_827B9268);
PPC_FUNC_IMPL(__imp__sub_827B9268) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,4136
	ctx.r11.s64 = ctx.r4.s64 + 4136;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B9288"))) PPC_WEAK_FUNC(sub_827B9288);
PPC_FUNC_IMPL(__imp__sub_827B9288) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x827b92a8
	if (ctx.cr6.lt) goto loc_827B92A8;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bge cr6,0x827b92a8
	if (!ctx.cr6.lt) goto loc_827B92A8;
	// addi r11,r4,3919
	ctx.r11.s64 = ctx.r4.s64 + 3919;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_827B92A8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B92B0"))) PPC_WEAK_FUNC(sub_827B92B0);
PPC_FUNC_IMPL(__imp__sub_827B92B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827B92B8"))) PPC_WEAK_FUNC(sub_827B92B8);
PPC_FUNC_IMPL(__imp__sub_827B92B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,285
	ctx.r11.s64 = 18677760;
	// ori r11,r11,33760
	ctx.r11.u64 = ctx.r11.u64 | 33760;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827b9a08
	if (ctx.cr6.gt) {
		// ERROR 827B9A08
		return;
	}
	// beq cr6,0x827ba0bc
	if (ctx.cr6.eq) {
		// ERROR 827BA0BC
		return;
	}
	// lis r11,285
	ctx.r11.s64 = 18677760;
	// ori r11,r11,33557
	ctx.r11.u64 = ctx.r11.u64 | 33557;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827b96cc
	if (ctx.cr6.gt) {
		// ERROR 827B96CC
		return;
	}
	// beq cr6,0x827ba0bc
	if (ctx.cr6.eq) {
		// ERROR 827BA0BC
		return;
	}
	// addis r11,r4,-286
	ctx.r11.s64 = ctx.r4.s64 + -18743296;
	// addi r11,r11,32222
	ctx.r11.s64 = ctx.r11.s64 + 32222;
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bgt cr6,0x827ba0b4
	if (ctx.cr6.gt) {
		// ERROR 827BA0B4
		return;
	}
	// lis r12,-32132
	ctx.r12.s64 = -2105802752;
	// addi r12,r12,-27896
	ctx.r12.s64 = ctx.r12.s64 + -27896;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x827BA0BC
		return;
	case 1:
		// ERROR: 0x827BA0B4
		return;
	case 2:
		// ERROR: 0x827BA0B4
		return;
	case 3:
		// ERROR: 0x827BA0BC
		return;
	case 4:
		// ERROR: 0x827BA0B4
		return;
	case 5:
		// ERROR: 0x827BA0B4
		return;
	case 6:
		// ERROR: 0x827BA0B4
		return;
	case 7:
		// ERROR: 0x827BA0B4
		return;
	case 8:
		// ERROR: 0x827BA0B4
		return;
	case 9:
		// ERROR: 0x827BA0B4
		return;
	case 10:
		// ERROR: 0x827BA0B4
		return;
	case 11:
		// ERROR: 0x827BA0B4
		return;
	case 12:
		// ERROR: 0x827BA0B4
		return;
	case 13:
		// ERROR: 0x827BA0B4
		return;
	case 14:
		// ERROR: 0x827BA0B4
		return;
	case 15:
		// ERROR: 0x827BA0B4
		return;
	case 16:
		// ERROR: 0x827BA0B4
		return;
	case 17:
		// ERROR: 0x827BA0B4
		return;
	case 18:
		// ERROR: 0x827BA0B4
		return;
	case 19:
		// ERROR: 0x827BA0B4
		return;
	case 20:
		// ERROR: 0x827BA0B4
		return;
	case 21:
		// ERROR: 0x827BA0B4
		return;
	case 22:
		// ERROR: 0x827BA0B4
		return;
	case 23:
		// ERROR: 0x827BA0B4
		return;
	case 24:
		// ERROR: 0x827BA0B4
		return;
	case 25:
		// ERROR: 0x827BA0B4
		return;
	case 26:
		// ERROR: 0x827BA0B4
		return;
	case 27:
		// ERROR: 0x827BA0B4
		return;
	case 28:
		// ERROR: 0x827BA0B4
		return;
	case 29:
		// ERROR: 0x827BA0B4
		return;
	case 30:
		// ERROR: 0x827BA0B4
		return;
	case 31:
		// ERROR: 0x827BA0B4
		return;
	case 32:
		// ERROR: 0x827BA0B4
		return;
	case 33:
		// ERROR: 0x827BA0B4
		return;
	case 34:
		// ERROR: 0x827BA0B4
		return;
	case 35:
		// ERROR: 0x827BA0B4
		return;
	case 36:
		// ERROR: 0x827BA0B4
		return;
	case 37:
		// ERROR: 0x827BA0B4
		return;
	case 38:
		// ERROR: 0x827BA0B4
		return;
	case 39:
		// ERROR: 0x827BA0BC
		return;
	case 40:
		// ERROR: 0x827BA0B4
		return;
	case 41:
		// ERROR: 0x827BA0B4
		return;
	case 42:
		// ERROR: 0x827BA0B4
		return;
	case 43:
		// ERROR: 0x827BA0B4
		return;
	case 44:
		// ERROR: 0x827BA0B4
		return;
	case 45:
		// ERROR: 0x827BA0BC
		return;
	case 46:
		// ERROR: 0x827BA0B4
		return;
	case 47:
		// ERROR: 0x827BA0B4
		return;
	case 48:
		// ERROR: 0x827BA0B4
		return;
	case 49:
		// ERROR: 0x827BA0B4
		return;
	case 50:
		// ERROR: 0x827BA0B4
		return;
	case 51:
		// ERROR: 0x827BA0B4
		return;
	case 52:
		// ERROR: 0x827BA0B4
		return;
	case 53:
		// ERROR: 0x827BA0B4
		return;
	case 54:
		// ERROR: 0x827BA0B4
		return;
	case 55:
		// ERROR: 0x827BA0B4
		return;
	case 56:
		// ERROR: 0x827BA0B4
		return;
	case 57:
		// ERROR: 0x827BA0B4
		return;
	case 58:
		// ERROR: 0x827BA0B4
		return;
	case 59:
		// ERROR: 0x827BA0B4
		return;
	case 60:
		// ERROR: 0x827BA0B4
		return;
	case 61:
		// ERROR: 0x827BA0B4
		return;
	case 62:
		// ERROR: 0x827BA0B4
		return;
	case 63:
		// ERROR: 0x827BA0B4
		return;
	case 64:
		// ERROR: 0x827BA0B4
		return;
	case 65:
		// ERROR: 0x827BA0B4
		return;
	case 66:
		// ERROR: 0x827BA0B4
		return;
	case 67:
		// ERROR: 0x827BA0B4
		return;
	case 68:
		// ERROR: 0x827BA0B4
		return;
	case 69:
		// ERROR: 0x827BA0B4
		return;
	case 70:
		// ERROR: 0x827BA0B4
		return;
	case 71:
		// ERROR: 0x827BA0B4
		return;
	case 72:
		// ERROR: 0x827BA0B4
		return;
	case 73:
		// ERROR: 0x827BA0B4
		return;
	case 74:
		// ERROR: 0x827BA0B4
		return;
	case 75:
		// ERROR: 0x827BA0B4
		return;
	case 76:
		// ERROR: 0x827BA0B4
		return;
	case 77:
		// ERROR: 0x827BA0B4
		return;
	case 78:
		// ERROR: 0x827BA0B4
		return;
	case 79:
		// ERROR: 0x827BA0B4
		return;
	case 80:
		// ERROR: 0x827BA0B4
		return;
	case 81:
		// ERROR: 0x827BA0B4
		return;
	case 82:
		// ERROR: 0x827BA0B4
		return;
	case 83:
		// ERROR: 0x827BA0B4
		return;
	case 84:
		// ERROR: 0x827BA0B4
		return;
	case 85:
		// ERROR: 0x827BA0B4
		return;
	case 86:
		// ERROR: 0x827BA0B4
		return;
	case 87:
		// ERROR: 0x827BA0B4
		return;
	case 88:
		// ERROR: 0x827BA0BC
		return;
	case 89:
		// ERROR: 0x827BA0BC
		return;
	case 90:
		// ERROR: 0x827BA0BC
		return;
	case 91:
		// ERROR: 0x827BA0B4
		return;
	case 92:
		// ERROR: 0x827BA0B4
		return;
	case 93:
		// ERROR: 0x827BA0B4
		return;
	case 94:
		// ERROR: 0x827BA0B4
		return;
	case 95:
		// ERROR: 0x827BA0B4
		return;
	case 96:
		// ERROR: 0x827BA0B4
		return;
	case 97:
		// ERROR: 0x827BA0B4
		return;
	case 98:
		// ERROR: 0x827BA0B4
		return;
	case 99:
		// ERROR: 0x827BA0B4
		return;
	case 100:
		// ERROR: 0x827BA0B4
		return;
	case 101:
		// ERROR: 0x827BA0B4
		return;
	case 102:
		// ERROR: 0x827BA0B4
		return;
	case 103:
		// ERROR: 0x827BA0B4
		return;
	case 104:
		// ERROR: 0x827BA0B4
		return;
	case 105:
		// ERROR: 0x827BA0B4
		return;
	case 106:
		// ERROR: 0x827BA0B4
		return;
	case 107:
		// ERROR: 0x827BA0B4
		return;
	case 108:
		// ERROR: 0x827BA0BC
		return;
	case 109:
		// ERROR: 0x827BA0B4
		return;
	case 110:
		// ERROR: 0x827BA0B4
		return;
	case 111:
		// ERROR: 0x827BA0B4
		return;
	case 112:
		// ERROR: 0x827BA0B4
		return;
	case 113:
		// ERROR: 0x827BA0B4
		return;
	case 114:
		// ERROR: 0x827BA0B4
		return;
	case 115:
		// ERROR: 0x827BA0B4
		return;
	case 116:
		// ERROR: 0x827BA0B4
		return;
	case 117:
		// ERROR: 0x827BA0BC
		return;
	case 118:
		// ERROR: 0x827BA0BC
		return;
	case 119:
		// ERROR: 0x827BA0BC
		return;
	case 120:
		// ERROR: 0x827BA0BC
		return;
	case 121:
		// ERROR: 0x827BA0B4
		return;
	case 122:
		// ERROR: 0x827BA0B4
		return;
	case 123:
		// ERROR: 0x827BA0BC
		return;
	case 124:
		// ERROR: 0x827BA0B4
		return;
	case 125:
		// ERROR: 0x827BA0B4
		return;
	case 126:
		// ERROR: 0x827BA0BC
		return;
	case 127:
		// ERROR: 0x827BA0B4
		return;
	case 128:
		// ERROR: 0x827BA0B4
		return;
	case 129:
		// ERROR: 0x827BA0B4
		return;
	case 130:
		// ERROR: 0x827BA0B4
		return;
	case 131:
		// ERROR: 0x827BA0B4
		return;
	case 132:
		// ERROR: 0x827BA0B4
		return;
	case 133:
		// ERROR: 0x827BA0B4
		return;
	case 134:
		// ERROR: 0x827BA0B4
		return;
	case 135:
		// ERROR: 0x827BA0B4
		return;
	case 136:
		// ERROR: 0x827BA0B4
		return;
	case 137:
		// ERROR: 0x827BA0B4
		return;
	case 138:
		// ERROR: 0x827BA0B4
		return;
	case 139:
		// ERROR: 0x827BA0B4
		return;
	case 140:
		// ERROR: 0x827BA0B4
		return;
	case 141:
		// ERROR: 0x827BA0B4
		return;
	case 142:
		// ERROR: 0x827BA0B4
		return;
	case 143:
		// ERROR: 0x827BA0B4
		return;
	case 144:
		// ERROR: 0x827BA0B4
		return;
	case 145:
		// ERROR: 0x827BA0B4
		return;
	case 146:
		// ERROR: 0x827BA0B4
		return;
	case 147:
		// ERROR: 0x827BA0B4
		return;
	case 148:
		// ERROR: 0x827BA0B4
		return;
	case 149:
		// ERROR: 0x827BA0B4
		return;
	case 150:
		// ERROR: 0x827BA0B4
		return;
	case 151:
		// ERROR: 0x827BA0B4
		return;
	case 152:
		// ERROR: 0x827BA0B4
		return;
	case 153:
		// ERROR: 0x827BA0B4
		return;
	case 154:
		// ERROR: 0x827BA0B4
		return;
	case 155:
		// ERROR: 0x827BA0B4
		return;
	case 156:
		// ERROR: 0x827BA0B4
		return;
	case 157:
		// ERROR: 0x827BA0B4
		return;
	case 158:
		// ERROR: 0x827BA0B4
		return;
	case 159:
		// ERROR: 0x827BA0BC
		return;
	case 160:
		// ERROR: 0x827BA0B4
		return;
	case 161:
		// ERROR: 0x827BA0B4
		return;
	case 162:
		// ERROR: 0x827BA0B4
		return;
	case 163:
		// ERROR: 0x827BA0B4
		return;
	case 164:
		// ERROR: 0x827BA0B4
		return;
	case 165:
		// ERROR: 0x827BA0B4
		return;
	case 166:
		// ERROR: 0x827BA0B4
		return;
	case 167:
		// ERROR: 0x827BA0B4
		return;
	case 168:
		// ERROR: 0x827BA0B4
		return;
	case 169:
		// ERROR: 0x827BA0B4
		return;
	case 170:
		// ERROR: 0x827BA0B4
		return;
	case 171:
		// ERROR: 0x827BA0B4
		return;
	case 172:
		// ERROR: 0x827BA0B4
		return;
	case 173:
		// ERROR: 0x827BA0B4
		return;
	case 174:
		// ERROR: 0x827BA0B4
		return;
	case 175:
		// ERROR: 0x827BA0B4
		return;
	case 176:
		// ERROR: 0x827BA0B4
		return;
	case 177:
		// ERROR: 0x827BA0B4
		return;
	case 178:
		// ERROR: 0x827BA0B4
		return;
	case 179:
		// ERROR: 0x827BA0B4
		return;
	case 180:
		// ERROR: 0x827BA0B4
		return;
	case 181:
		// ERROR: 0x827BA0B4
		return;
	case 182:
		// ERROR: 0x827BA0B4
		return;
	case 183:
		// ERROR: 0x827BA0BC
		return;
	case 184:
		// ERROR: 0x827BA0B4
		return;
	case 185:
		// ERROR: 0x827BA0B4
		return;
	case 186:
		// ERROR: 0x827BA0B4
		return;
	case 187:
		// ERROR: 0x827BA0B4
		return;
	case 188:
		// ERROR: 0x827BA0B4
		return;
	case 189:
		// ERROR: 0x827BA0B4
		return;
	case 190:
		// ERROR: 0x827BA0B4
		return;
	case 191:
		// ERROR: 0x827BA0B4
		return;
	case 192:
		// ERROR: 0x827BA0B4
		return;
	case 193:
		// ERROR: 0x827BA0B4
		return;
	case 194:
		// ERROR: 0x827BA0B4
		return;
	case 195:
		// ERROR: 0x827BA0B4
		return;
	case 196:
		// ERROR: 0x827BA0B4
		return;
	case 197:
		// ERROR: 0x827BA0B4
		return;
	case 198:
		// ERROR: 0x827BA0B4
		return;
	case 199:
		// ERROR: 0x827BA0B4
		return;
	case 200:
		// ERROR: 0x827BA0B4
		return;
	case 201:
		// ERROR: 0x827BA0B4
		return;
	case 202:
		// ERROR: 0x827BA0B4
		return;
	case 203:
		// ERROR: 0x827BA0B4
		return;
	case 204:
		// ERROR: 0x827BA0B4
		return;
	case 205:
		// ERROR: 0x827BA0BC
		return;
	case 206:
		// ERROR: 0x827BA0B4
		return;
	case 207:
		// ERROR: 0x827BA0B4
		return;
	case 208:
		// ERROR: 0x827BA0BC
		return;
	case 209:
		// ERROR: 0x827BA0B4
		return;
	case 210:
		// ERROR: 0x827BA0B4
		return;
	case 211:
		// ERROR: 0x827BA0BC
		return;
	case 212:
		// ERROR: 0x827BA0B4
		return;
	case 213:
		// ERROR: 0x827BA0B4
		return;
	case 214:
		// ERROR: 0x827BA0BC
		return;
	case 215:
		// ERROR: 0x827BA0B4
		return;
	case 216:
		// ERROR: 0x827BA0B4
		return;
	case 217:
		// ERROR: 0x827BA0B4
		return;
	case 218:
		// ERROR: 0x827BA0B4
		return;
	case 219:
		// ERROR: 0x827BA0B4
		return;
	case 220:
		// ERROR: 0x827BA0B4
		return;
	case 221:
		// ERROR: 0x827BA0B4
		return;
	case 222:
		// ERROR: 0x827BA0B4
		return;
	case 223:
		// ERROR: 0x827BA0B4
		return;
	case 224:
		// ERROR: 0x827BA0B4
		return;
	case 225:
		// ERROR: 0x827BA0B4
		return;
	case 226:
		// ERROR: 0x827BA0B4
		return;
	case 227:
		// ERROR: 0x827BA0B4
		return;
	case 228:
		// ERROR: 0x827BA0B4
		return;
	case 229:
		// ERROR: 0x827BA0B4
		return;
	case 230:
		// ERROR: 0x827BA0B4
		return;
	case 231:
		// ERROR: 0x827BA0B4
		return;
	case 232:
		// ERROR: 0x827BA0B4
		return;
	case 233:
		// ERROR: 0x827BA0B4
		return;
	case 234:
		// ERROR: 0x827BA0B4
		return;
	case 235:
		// ERROR: 0x827BA0B4
		return;
	case 236:
		// ERROR: 0x827BA0B4
		return;
	case 237:
		// ERROR: 0x827BA0B4
		return;
	case 238:
		// ERROR: 0x827BA0B4
		return;
	case 239:
		// ERROR: 0x827BA0B4
		return;
	case 240:
		// ERROR: 0x827BA0BC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_827B9308"))) PPC_WEAK_FUNC(sub_827B9308);
PPC_FUNC_IMPL(__imp__sub_827B9308) {
	PPC_FUNC_PROLOGUE();
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// addis r11,r4,-286
	ctx.r11.s64 = ctx.r4.s64 + -18743296;
	// addi r11,r11,31976
	ctx.r11.s64 = ctx.r11.s64 + 31976;
	// cmplwi cr6,r11,196
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 196, ctx.xer);
	// bgt cr6,0x827ba0b4
	if (ctx.cr6.gt) {
		// ERROR 827BA0B4
		return;
	}
	// lis r12,-32132
	ctx.r12.s64 = -2105802752;
	// addi r12,r12,-26892
	ctx.r12.s64 = ctx.r12.s64 + -26892;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x827BA0BC
		return;
	case 1:
		// ERROR: 0x827BA0B4
		return;
	case 2:
		// ERROR: 0x827BA0B4
		return;
	case 3:
		// ERROR: 0x827BA0BC
		return;
	case 4:
		// ERROR: 0x827BA0B4
		return;
	case 5:
		// ERROR: 0x827BA0B4
		return;
	case 6:
		// ERROR: 0x827BA0BC
		return;
	case 7:
		// ERROR: 0x827BA0B4
		return;
	case 8:
		// ERROR: 0x827BA0B4
		return;
	case 9:
		// ERROR: 0x827BA0B4
		return;
	case 10:
		// ERROR: 0x827BA0B4
		return;
	case 11:
		// ERROR: 0x827BA0B4
		return;
	case 12:
		// ERROR: 0x827BA0B4
		return;
	case 13:
		// ERROR: 0x827BA0B4
		return;
	case 14:
		// ERROR: 0x827BA0B4
		return;
	case 15:
		// ERROR: 0x827BA0B4
		return;
	case 16:
		// ERROR: 0x827BA0B4
		return;
	case 17:
		// ERROR: 0x827BA0B4
		return;
	case 18:
		// ERROR: 0x827BA0B4
		return;
	case 19:
		// ERROR: 0x827BA0B4
		return;
	case 20:
		// ERROR: 0x827BA0B4
		return;
	case 21:
		// ERROR: 0x827BA0B4
		return;
	case 22:
		// ERROR: 0x827BA0BC
		return;
	case 23:
		// ERROR: 0x827BA0B4
		return;
	case 24:
		// ERROR: 0x827BA0B4
		return;
	case 25:
		// ERROR: 0x827BA0B4
		return;
	case 26:
		// ERROR: 0x827BA0B4
		return;
	case 27:
		// ERROR: 0x827BA0B4
		return;
	case 28:
		// ERROR: 0x827BA0B4
		return;
	case 29:
		// ERROR: 0x827BA0B4
		return;
	case 30:
		// ERROR: 0x827BA0B4
		return;
	case 31:
		// ERROR: 0x827BA0B4
		return;
	case 32:
		// ERROR: 0x827BA0B4
		return;
	case 33:
		// ERROR: 0x827BA0B4
		return;
	case 34:
		// ERROR: 0x827BA0B4
		return;
	case 35:
		// ERROR: 0x827BA0B4
		return;
	case 36:
		// ERROR: 0x827BA0B4
		return;
	case 37:
		// ERROR: 0x827BA0B4
		return;
	case 38:
		// ERROR: 0x827BA0B4
		return;
	case 39:
		// ERROR: 0x827BA0B4
		return;
	case 40:
		// ERROR: 0x827BA0B4
		return;
	case 41:
		// ERROR: 0x827BA0B4
		return;
	case 42:
		// ERROR: 0x827BA0B4
		return;
	case 43:
		// ERROR: 0x827BA0B4
		return;
	case 44:
		// ERROR: 0x827BA0B4
		return;
	case 45:
		// ERROR: 0x827BA0B4
		return;
	case 46:
		// ERROR: 0x827BA0B4
		return;
	case 47:
		// ERROR: 0x827BA0B4
		return;
	case 48:
		// ERROR: 0x827BA0B4
		return;
	case 49:
		// ERROR: 0x827BA0B4
		return;
	case 50:
		// ERROR: 0x827BA0B4
		return;
	case 51:
		// ERROR: 0x827BA0B4
		return;
	case 52:
		// ERROR: 0x827BA0B4
		return;
	case 53:
		// ERROR: 0x827BA0B4
		return;
	case 54:
		// ERROR: 0x827BA0B4
		return;
	case 55:
		// ERROR: 0x827BA0B4
		return;
	case 56:
		// ERROR: 0x827BA0B4
		return;
	case 57:
		// ERROR: 0x827BA0B4
		return;
	case 58:
		// ERROR: 0x827BA0B4
		return;
	case 59:
		// ERROR: 0x827BA0BC
		return;
	case 60:
		// ERROR: 0x827BA0B4
		return;
	case 61:
		// ERROR: 0x827BA0B4
		return;
	case 62:
		// ERROR: 0x827BA0B4
		return;
	case 63:
		// ERROR: 0x827BA0B4
		return;
	case 64:
		// ERROR: 0x827BA0BC
		return;
	case 65:
		// ERROR: 0x827BA0B4
		return;
	case 66:
		// ERROR: 0x827BA0B4
		return;
	case 67:
		// ERROR: 0x827BA0B4
		return;
	case 68:
		// ERROR: 0x827BA0B4
		return;
	case 69:
		// ERROR: 0x827BA0B4
		return;
	case 70:
		// ERROR: 0x827BA0B4
		return;
	case 71:
		// ERROR: 0x827BA0B4
		return;
	case 72:
		// ERROR: 0x827BA0B4
		return;
	case 73:
		// ERROR: 0x827BA0B4
		return;
	case 74:
		// ERROR: 0x827BA0B4
		return;
	case 75:
		// ERROR: 0x827BA0B4
		return;
	case 76:
		// ERROR: 0x827BA0B4
		return;
	case 77:
		// ERROR: 0x827BA0B4
		return;
	case 78:
		// ERROR: 0x827BA0B4
		return;
	case 79:
		// ERROR: 0x827BA0B4
		return;
	case 80:
		// ERROR: 0x827BA0B4
		return;
	case 81:
		// ERROR: 0x827BA0B4
		return;
	case 82:
		// ERROR: 0x827BA0B4
		return;
	case 83:
		// ERROR: 0x827BA0B4
		return;
	case 84:
		// ERROR: 0x827BA0B4
		return;
	case 85:
		// ERROR: 0x827BA0B4
		return;
	case 86:
		// ERROR: 0x827BA0B4
		return;
	case 87:
		// ERROR: 0x827BA0B4
		return;
	case 88:
		// ERROR: 0x827BA0B4
		return;
	case 89:
		// ERROR: 0x827BA0B4
		return;
	case 90:
		// ERROR: 0x827BA0B4
		return;
	case 91:
		// ERROR: 0x827BA0B4
		return;
	case 92:
		// ERROR: 0x827BA0B4
		return;
	case 93:
		// ERROR: 0x827BA0B4
		return;
	case 94:
		// ERROR: 0x827BA0BC
		return;
	case 95:
		// ERROR: 0x827BA0B4
		return;
	case 96:
		// ERROR: 0x827BA0B4
		return;
	case 97:
		// ERROR: 0x827BA0B4
		return;
	case 98:
		// ERROR: 0x827BA0B4
		return;
	case 99:
		// ERROR: 0x827BA0B4
		return;
	case 100:
		// ERROR: 0x827BA0B4
		return;
	case 101:
		// ERROR: 0x827BA0B4
		return;
	case 102:
		// ERROR: 0x827BA0B4
		return;
	case 103:
		// ERROR: 0x827BA0B4
		return;
	case 104:
		// ERROR: 0x827BA0BC
		return;
	case 105:
		// ERROR: 0x827BA0BC
		return;
	case 106:
		// ERROR: 0x827BA0BC
		return;
	case 107:
		// ERROR: 0x827BA0B4
		return;
	case 108:
		// ERROR: 0x827BA0B4
		return;
	case 109:
		// ERROR: 0x827BA0BC
		return;
	case 110:
		// ERROR: 0x827BA0B4
		return;
	case 111:
		// ERROR: 0x827BA0B4
		return;
	case 112:
		// ERROR: 0x827BA0B4
		return;
	case 113:
		// ERROR: 0x827BA0B4
		return;
	case 114:
		// ERROR: 0x827BA0B4
		return;
	case 115:
		// ERROR: 0x827BA0B4
		return;
	case 116:
		// ERROR: 0x827BA0B4
		return;
	case 117:
		// ERROR: 0x827BA0B4
		return;
	case 118:
		// ERROR: 0x827BA0B4
		return;
	case 119:
		// ERROR: 0x827BA0B4
		return;
	case 120:
		// ERROR: 0x827BA0B4
		return;
	case 121:
		// ERROR: 0x827BA0B4
		return;
	case 122:
		// ERROR: 0x827BA0BC
		return;
	case 123:
		// ERROR: 0x827BA0BC
		return;
	case 124:
		// ERROR: 0x827BA0BC
		return;
	case 125:
		// ERROR: 0x827BA0BC
		return;
	case 126:
		// ERROR: 0x827BA0B4
		return;
	case 127:
		// ERROR: 0x827BA0B4
		return;
	case 128:
		// ERROR: 0x827BA0B4
		return;
	case 129:
		// ERROR: 0x827BA0B4
		return;
	case 130:
		// ERROR: 0x827BA0B4
		return;
	case 131:
		// ERROR: 0x827BA0B4
		return;
	case 132:
		// ERROR: 0x827BA0B4
		return;
	case 133:
		// ERROR: 0x827BA0B4
		return;
	case 134:
		// ERROR: 0x827BA0B4
		return;
	case 135:
		// ERROR: 0x827BA0B4
		return;
	case 136:
		// ERROR: 0x827BA0B4
		return;
	case 137:
		// ERROR: 0x827BA0B4
		return;
	case 138:
		// ERROR: 0x827BA0B4
		return;
	case 139:
		// ERROR: 0x827BA0B4
		return;
	case 140:
		// ERROR: 0x827BA0B4
		return;
	case 141:
		// ERROR: 0x827BA0B4
		return;
	case 142:
		// ERROR: 0x827BA0B4
		return;
	case 143:
		// ERROR: 0x827BA0B4
		return;
	case 144:
		// ERROR: 0x827BA0B4
		return;
	case 145:
		// ERROR: 0x827BA0B4
		return;
	case 146:
		// ERROR: 0x827BA0B4
		return;
	case 147:
		// ERROR: 0x827BA0B4
		return;
	case 148:
		// ERROR: 0x827BA0B4
		return;
	case 149:
		// ERROR: 0x827BA0B4
		return;
	case 150:
		// ERROR: 0x827BA0B4
		return;
	case 151:
		// ERROR: 0x827BA0B4
		return;
	case 152:
		// ERROR: 0x827BA0B4
		return;
	case 153:
		// ERROR: 0x827BA0B4
		return;
	case 154:
		// ERROR: 0x827BA0B4
		return;
	case 155:
		// ERROR: 0x827BA0BC
		return;
	case 156:
		// ERROR: 0x827BA0B4
		return;
	case 157:
		// ERROR: 0x827BA0B4
		return;
	case 158:
		// ERROR: 0x827BA0BC
		return;
	case 159:
		// ERROR: 0x827BA0B4
		return;
	case 160:
		// ERROR: 0x827BA0B4
		return;
	case 161:
		// ERROR: 0x827BA0BC
		return;
	case 162:
		// ERROR: 0x827BA0B4
		return;
	case 163:
		// ERROR: 0x827BA0B4
		return;
	case 164:
		// ERROR: 0x827BA0BC
		return;
	case 165:
		// ERROR: 0x827BA0B4
		return;
	case 166:
		// ERROR: 0x827BA0B4
		return;
	case 167:
		// ERROR: 0x827BA0B4
		return;
	case 168:
		// ERROR: 0x827BA0B4
		return;
	case 169:
		// ERROR: 0x827BA0B4
		return;
	case 170:
		// ERROR: 0x827BA0B4
		return;
	case 171:
		// ERROR: 0x827BA0B4
		return;
	case 172:
		// ERROR: 0x827BA0B4
		return;
	case 173:
		// ERROR: 0x827BA0B4
		return;
	case 174:
		// ERROR: 0x827BA0B4
		return;
	case 175:
		// ERROR: 0x827BA0B4
		return;
	case 176:
		// ERROR: 0x827BA0B4
		return;
	case 177:
		// ERROR: 0x827BA0B4
		return;
	case 178:
		// ERROR: 0x827BA0B4
		return;
	case 179:
		// ERROR: 0x827BA0B4
		return;
	case 180:
		// ERROR: 0x827BA0BC
		return;
	case 181:
		// ERROR: 0x827BA0B4
		return;
	case 182:
		// ERROR: 0x827BA0B4
		return;
	case 183:
		// ERROR: 0x827BA0B4
		return;
	case 184:
		// ERROR: 0x827BA0B4
		return;
	case 185:
		// ERROR: 0x827BA0B4
		return;
	case 186:
		// ERROR: 0x827BA0B4
		return;
	case 187:
		// ERROR: 0x827BA0B4
		return;
	case 188:
		// ERROR: 0x827BA0B4
		return;
	case 189:
		// ERROR: 0x827BA0B4
		return;
	case 190:
		// ERROR: 0x827BA0B4
		return;
	case 191:
		// ERROR: 0x827BA0B4
		return;
	case 192:
		// ERROR: 0x827BA0B4
		return;
	case 193:
		// ERROR: 0x827BA0B4
		return;
	case 194:
		// ERROR: 0x827BA0B4
		return;
	case 195:
		// ERROR: 0x827BA0B4
		return;
	case 196:
		// ERROR: 0x827BA0BC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_827B96F4"))) PPC_WEAK_FUNC(sub_827B96F4);
PPC_FUNC_IMPL(__imp__sub_827B96F4) {
	PPC_FUNC_PROLOGUE();
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lis r11,285
	ctx.r11.s64 = 18677760;
	// ori r11,r11,34040
	ctx.r11.u64 = ctx.r11.u64 | 34040;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827b9e38
	if (ctx.cr6.gt) {
		// ERROR 827B9E38
		return;
	}
	// beq cr6,0x827ba0bc
	if (ctx.cr6.eq) {
		// ERROR 827BA0BC
		return;
	}
	// lis r11,285
	ctx.r11.s64 = 18677760;
	// ori r10,r11,33912
	ctx.r10.u64 = ctx.r11.u64 | 33912;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x827b9c20
	if (ctx.cr6.gt) {
		// ERROR 827B9C20
		return;
	}
	// lis r11,285
	ctx.r11.s64 = 18677760;
	// ori r10,r11,33900
	ctx.r10.u64 = ctx.r11.u64 | 33900;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ba0bc
	if (!ctx.cr6.lt) {
		// ERROR 827BA0BC
		return;
	}
	// addis r11,r4,-286
	ctx.r11.s64 = ctx.r4.s64 + -18743296;
	// addi r11,r11,31773
	ctx.r11.s64 = ctx.r11.s64 + 31773;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bgt cr6,0x827ba0b4
	if (ctx.cr6.gt) {
		// ERROR 827BA0B4
		return;
	}
	// lis r12,-32132
	ctx.r12.s64 = -2105802752;
	// addi r12,r12,-26012
	ctx.r12.s64 = ctx.r12.s64 + -26012;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x827BA0BC
		return;
	case 1:
		// ERROR: 0x827BA0B4
		return;
	case 2:
		// ERROR: 0x827BA0B4
		return;
	case 3:
		// ERROR: 0x827BA0B4
		return;
	case 4:
		// ERROR: 0x827BA0B4
		return;
	case 5:
		// ERROR: 0x827BA0B4
		return;
	case 6:
		// ERROR: 0x827BA0B4
		return;
	case 7:
		// ERROR: 0x827BA0B4
		return;
	case 8:
		// ERROR: 0x827BA0B4
		return;
	case 9:
		// ERROR: 0x827BA0B4
		return;
	case 10:
		// ERROR: 0x827BA0B4
		return;
	case 11:
		// ERROR: 0x827BA0B4
		return;
	case 12:
		// ERROR: 0x827BA0B4
		return;
	case 13:
		// ERROR: 0x827BA0B4
		return;
	case 14:
		// ERROR: 0x827BA0B4
		return;
	case 15:
		// ERROR: 0x827BA0B4
		return;
	case 16:
		// ERROR: 0x827BA0B4
		return;
	case 17:
		// ERROR: 0x827BA0BC
		return;
	case 18:
		// ERROR: 0x827BA0B4
		return;
	case 19:
		// ERROR: 0x827BA0B4
		return;
	case 20:
		// ERROR: 0x827BA0B4
		return;
	case 21:
		// ERROR: 0x827BA0B4
		return;
	case 22:
		// ERROR: 0x827BA0B4
		return;
	case 23:
		// ERROR: 0x827BA0B4
		return;
	case 24:
		// ERROR: 0x827BA0B4
		return;
	case 25:
		// ERROR: 0x827BA0B4
		return;
	case 26:
		// ERROR: 0x827BA0BC
		return;
	case 27:
		// ERROR: 0x827BA0B4
		return;
	case 28:
		// ERROR: 0x827BA0B4
		return;
	case 29:
		// ERROR: 0x827BA0B4
		return;
	case 30:
		// ERROR: 0x827BA0B4
		return;
	case 31:
		// ERROR: 0x827BA0B4
		return;
	case 32:
		// ERROR: 0x827BA0B4
		return;
	case 33:
		// ERROR: 0x827BA0B4
		return;
	case 34:
		// ERROR: 0x827BA0B4
		return;
	case 35:
		// ERROR: 0x827BA0B4
		return;
	case 36:
		// ERROR: 0x827BA0B4
		return;
	case 37:
		// ERROR: 0x827BA0B4
		return;
	case 38:
		// ERROR: 0x827BA0B4
		return;
	case 39:
		// ERROR: 0x827BA0B4
		return;
	case 40:
		// ERROR: 0x827BA0B4
		return;
	case 41:
		// ERROR: 0x827BA0B4
		return;
	case 42:
		// ERROR: 0x827BA0B4
		return;
	case 43:
		// ERROR: 0x827BA0B4
		return;
	case 44:
		// ERROR: 0x827BA0B4
		return;
	case 45:
		// ERROR: 0x827BA0B4
		return;
	case 46:
		// ERROR: 0x827BA0B4
		return;
	case 47:
		// ERROR: 0x827BA0B4
		return;
	case 48:
		// ERROR: 0x827BA0B4
		return;
	case 49:
		// ERROR: 0x827BA0B4
		return;
	case 50:
		// ERROR: 0x827BA0B4
		return;
	case 51:
		// ERROR: 0x827BA0B4
		return;
	case 52:
		// ERROR: 0x827BA0B4
		return;
	case 53:
		// ERROR: 0x827BA0B4
		return;
	case 54:
		// ERROR: 0x827BA0B4
		return;
	case 55:
		// ERROR: 0x827BA0B4
		return;
	case 56:
		// ERROR: 0x827BA0B4
		return;
	case 57:
		// ERROR: 0x827BA0B4
		return;
	case 58:
		// ERROR: 0x827BA0B4
		return;
	case 59:
		// ERROR: 0x827BA0B4
		return;
	case 60:
		// ERROR: 0x827BA0B4
		return;
	case 61:
		// ERROR: 0x827BA0B4
		return;
	case 62:
		// ERROR: 0x827BA0B4
		return;
	case 63:
		// ERROR: 0x827BA0B4
		return;
	case 64:
		// ERROR: 0x827BA0B4
		return;
	case 65:
		// ERROR: 0x827BA0B4
		return;
	case 66:
		// ERROR: 0x827BA0BC
		return;
	case 67:
		// ERROR: 0x827BA0BC
		return;
	case 68:
		// ERROR: 0x827BA0BC
		return;
	case 69:
		// ERROR: 0x827BA0BC
		return;
	case 70:
		// ERROR: 0x827BA0BC
		return;
	case 71:
		// ERROR: 0x827BA0BC
		return;
	case 72:
		// ERROR: 0x827BA0BC
		return;
	case 73:
		// ERROR: 0x827BA0B4
		return;
	case 74:
		// ERROR: 0x827BA0B4
		return;
	case 75:
		// ERROR: 0x827BA0B4
		return;
	case 76:
		// ERROR: 0x827BA0B4
		return;
	case 77:
		// ERROR: 0x827BA0B4
		return;
	case 78:
		// ERROR: 0x827BA0B4
		return;
	case 79:
		// ERROR: 0x827BA0B4
		return;
	case 80:
		// ERROR: 0x827BA0B4
		return;
	case 81:
		// ERROR: 0x827BA0B4
		return;
	case 82:
		// ERROR: 0x827BA0B4
		return;
	case 83:
		// ERROR: 0x827BA0B4
		return;
	case 84:
		// ERROR: 0x827BA0B4
		return;
	case 85:
		// ERROR: 0x827BA0B4
		return;
	case 86:
		// ERROR: 0x827BA0B4
		return;
	case 87:
		// ERROR: 0x827BA0B4
		return;
	case 88:
		// ERROR: 0x827BA0B4
		return;
	case 89:
		// ERROR: 0x827BA0B4
		return;
	case 90:
		// ERROR: 0x827BA0B4
		return;
	case 91:
		// ERROR: 0x827BA0B4
		return;
	case 92:
		// ERROR: 0x827BA0B4
		return;
	case 93:
		// ERROR: 0x827BA0B4
		return;
	case 94:
		// ERROR: 0x827BA0BC
		return;
	case 95:
		// ERROR: 0x827BA0B4
		return;
	case 96:
		// ERROR: 0x827BA0B4
		return;
	case 97:
		// ERROR: 0x827BA0BC
		return;
	case 98:
		// ERROR: 0x827BA0B4
		return;
	case 99:
		// ERROR: 0x827BA0B4
		return;
	case 100:
		// ERROR: 0x827BA0B4
		return;
	case 101:
		// ERROR: 0x827BA0B4
		return;
	case 102:
		// ERROR: 0x827BA0B4
		return;
	case 103:
		// ERROR: 0x827BA0B4
		return;
	case 104:
		// ERROR: 0x827BA0B4
		return;
	case 105:
		// ERROR: 0x827BA0B4
		return;
	case 106:
		// ERROR: 0x827BA0B4
		return;
	case 107:
		// ERROR: 0x827BA0BC
		return;
	case 108:
		// ERROR: 0x827BA0B4
		return;
	case 109:
		// ERROR: 0x827BA0B4
		return;
	case 110:
		// ERROR: 0x827BA0BC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_827B9A64"))) PPC_WEAK_FUNC(sub_827B9A64);
PPC_FUNC_IMPL(__imp__sub_827B9A64) {
	PPC_FUNC_PROLOGUE();
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// addis r11,r4,-286
	ctx.r11.s64 = ctx.r4.s64 + -18743296;
	// addi r11,r11,31621
	ctx.r11.s64 = ctx.r11.s64 + 31621;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// bgt cr6,0x827ba0b4
	if (ctx.cr6.gt) {
		// ERROR 827BA0B4
		return;
	}
	// lis r12,-32132
	ctx.r12.s64 = -2105802752;
	// addi r12,r12,-25528
	ctx.r12.s64 = ctx.r12.s64 + -25528;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x827BA0BC
		return;
	case 1:
		// ERROR: 0x827BA0B4
		return;
	case 2:
		// ERROR: 0x827BA0B4
		return;
	case 3:
		// ERROR: 0x827BA0BC
		return;
	case 4:
		// ERROR: 0x827BA0B4
		return;
	case 5:
		// ERROR: 0x827BA0B4
		return;
	case 6:
		// ERROR: 0x827BA0B4
		return;
	case 7:
		// ERROR: 0x827BA0B4
		return;
	case 8:
		// ERROR: 0x827BA0B4
		return;
	case 9:
		// ERROR: 0x827BA0B4
		return;
	case 10:
		// ERROR: 0x827BA0B4
		return;
	case 11:
		// ERROR: 0x827BA0B4
		return;
	case 12:
		// ERROR: 0x827BA0B4
		return;
	case 13:
		// ERROR: 0x827BA0B4
		return;
	case 14:
		// ERROR: 0x827BA0B4
		return;
	case 15:
		// ERROR: 0x827BA0B4
		return;
	case 16:
		// ERROR: 0x827BA0B4
		return;
	case 17:
		// ERROR: 0x827BA0B4
		return;
	case 18:
		// ERROR: 0x827BA0B4
		return;
	case 19:
		// ERROR: 0x827BA0B4
		return;
	case 20:
		// ERROR: 0x827BA0B4
		return;
	case 21:
		// ERROR: 0x827BA0B4
		return;
	case 22:
		// ERROR: 0x827BA0B4
		return;
	case 23:
		// ERROR: 0x827BA0B4
		return;
	case 24:
		// ERROR: 0x827BA0B4
		return;
	case 25:
		// ERROR: 0x827BA0B4
		return;
	case 26:
		// ERROR: 0x827BA0B4
		return;
	case 27:
		// ERROR: 0x827BA0B4
		return;
	case 28:
		// ERROR: 0x827BA0B4
		return;
	case 29:
		// ERROR: 0x827BA0B4
		return;
	case 30:
		// ERROR: 0x827BA0B4
		return;
	case 31:
		// ERROR: 0x827BA0B4
		return;
	case 32:
		// ERROR: 0x827BA0B4
		return;
	case 33:
		// ERROR: 0x827BA0B4
		return;
	case 34:
		// ERROR: 0x827BA0B4
		return;
	case 35:
		// ERROR: 0x827BA0B4
		return;
	case 36:
		// ERROR: 0x827BA0B4
		return;
	case 37:
		// ERROR: 0x827BA0B4
		return;
	case 38:
		// ERROR: 0x827BA0B4
		return;
	case 39:
		// ERROR: 0x827BA0B4
		return;
	case 40:
		// ERROR: 0x827BA0B4
		return;
	case 41:
		// ERROR: 0x827BA0B4
		return;
	case 42:
		// ERROR: 0x827BA0B4
		return;
	case 43:
		// ERROR: 0x827BA0B4
		return;
	case 44:
		// ERROR: 0x827BA0B4
		return;
	case 45:
		// ERROR: 0x827BA0B4
		return;
	case 46:
		// ERROR: 0x827BA0B4
		return;
	case 47:
		// ERROR: 0x827BA0B4
		return;
	case 48:
		// ERROR: 0x827BA0B4
		return;
	case 49:
		// ERROR: 0x827BA0B4
		return;
	case 50:
		// ERROR: 0x827BA0B4
		return;
	case 51:
		// ERROR: 0x827BA0B4
		return;
	case 52:
		// ERROR: 0x827BA0B4
		return;
	case 53:
		// ERROR: 0x827BA0B4
		return;
	case 54:
		// ERROR: 0x827BA0B4
		return;
	case 55:
		// ERROR: 0x827BA0B4
		return;
	case 56:
		// ERROR: 0x827BA0B4
		return;
	case 57:
		// ERROR: 0x827BA0B4
		return;
	case 58:
		// ERROR: 0x827BA0B4
		return;
	case 59:
		// ERROR: 0x827BA0B4
		return;
	case 60:
		// ERROR: 0x827BA0B4
		return;
	case 61:
		// ERROR: 0x827BA0B4
		return;
	case 62:
		// ERROR: 0x827BA0B4
		return;
	case 63:
		// ERROR: 0x827BA0B4
		return;
	case 64:
		// ERROR: 0x827BA0B4
		return;
	case 65:
		// ERROR: 0x827BA0B4
		return;
	case 66:
		// ERROR: 0x827BA0B4
		return;
	case 67:
		// ERROR: 0x827BA0B4
		return;
	case 68:
		// ERROR: 0x827BA0B4
		return;
	case 69:
		// ERROR: 0x827BA0B4
		return;
	case 70:
		// ERROR: 0x827BA0B4
		return;
	case 71:
		// ERROR: 0x827BA0B4
		return;
	case 72:
		// ERROR: 0x827BA0B4
		return;
	case 73:
		// ERROR: 0x827BA0B4
		return;
	case 74:
		// ERROR: 0x827BA0B4
		return;
	case 75:
		// ERROR: 0x827BA0B4
		return;
	case 76:
		// ERROR: 0x827BA0B4
		return;
	case 77:
		// ERROR: 0x827BA0B4
		return;
	case 78:
		// ERROR: 0x827BA0B4
		return;
	case 79:
		// ERROR: 0x827BA0B4
		return;
	case 80:
		// ERROR: 0x827BA0B4
		return;
	case 81:
		// ERROR: 0x827BA0B4
		return;
	case 82:
		// ERROR: 0x827BA0B4
		return;
	case 83:
		// ERROR: 0x827BA0B4
		return;
	case 84:
		// ERROR: 0x827BA0B4
		return;
	case 85:
		// ERROR: 0x827BA0B4
		return;
	case 86:
		// ERROR: 0x827BA0B4
		return;
	case 87:
		// ERROR: 0x827BA0B4
		return;
	case 88:
		// ERROR: 0x827BA0B4
		return;
	case 89:
		// ERROR: 0x827BA0B4
		return;
	case 90:
		// ERROR: 0x827BA0B4
		return;
	case 91:
		// ERROR: 0x827BA0B4
		return;
	case 92:
		// ERROR: 0x827BA0B4
		return;
	case 93:
		// ERROR: 0x827BA0B4
		return;
	case 94:
		// ERROR: 0x827BA0B4
		return;
	case 95:
		// ERROR: 0x827BA0B4
		return;
	case 96:
		// ERROR: 0x827BA0B4
		return;
	case 97:
		// ERROR: 0x827BA0B4
		return;
	case 98:
		// ERROR: 0x827BA0B4
		return;
	case 99:
		// ERROR: 0x827BA0B4
		return;
	case 100:
		// ERROR: 0x827BA0B4
		return;
	case 101:
		// ERROR: 0x827BA0B4
		return;
	case 102:
		// ERROR: 0x827BA0B4
		return;
	case 103:
		// ERROR: 0x827BA0B4
		return;
	case 104:
		// ERROR: 0x827BA0B4
		return;
	case 105:
		// ERROR: 0x827BA0B4
		return;
	case 106:
		// ERROR: 0x827BA0B4
		return;
	case 107:
		// ERROR: 0x827BA0B4
		return;
	case 108:
		// ERROR: 0x827BA0B4
		return;
	case 109:
		// ERROR: 0x827BA0B4
		return;
	case 110:
		// ERROR: 0x827BA0BC
		return;
	case 111:
		// ERROR: 0x827BA0BC
		return;
	case 112:
		// ERROR: 0x827BA0BC
		return;
	case 113:
		// ERROR: 0x827BA0BC
		return;
	case 114:
		// ERROR: 0x827BA0B4
		return;
	case 115:
		// ERROR: 0x827BA0BC
		return;
	case 116:
		// ERROR: 0x827BA0B4
		return;
	case 117:
		// ERROR: 0x827BA0BC
		return;
	case 118:
		// ERROR: 0x827BA0B4
		return;
	case 119:
		// ERROR: 0x827BA0BC
		return;
	case 120:
		// ERROR: 0x827BA0BC
		return;
	case 121:
		// ERROR: 0x827BA0B4
		return;
	case 122:
		// ERROR: 0x827BA0B4
		return;
	case 123:
		// ERROR: 0x827BA0BC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_827B9C48"))) PPC_WEAK_FUNC(sub_827B9C48);
PPC_FUNC_IMPL(__imp__sub_827B9C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lis r11,285
	ctx.r11.s64 = 18677760;
	// ori r11,r11,34170
	ctx.r11.u64 = ctx.r11.u64 | 34170;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827ba05c
	if (ctx.cr6.gt) {
		// ERROR 827BA05C
		return;
	}
	// beq cr6,0x827ba0bc
	if (ctx.cr6.eq) {
		// ERROR 827BA0BC
		return;
	}
	// addis r11,r4,-286
	ctx.r11.s64 = ctx.r4.s64 + -18743296;
	// addi r11,r11,31493
	ctx.r11.s64 = ctx.r11.s64 + 31493;
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// bgt cr6,0x827ba0b4
	if (ctx.cr6.gt) {
		// ERROR 827BA0B4
		return;
	}
	// lis r12,-32132
	ctx.r12.s64 = -2105802752;
	// addi r12,r12,-24972
	ctx.r12.s64 = ctx.r12.s64 + -24972;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x827BA0BC
		return;
	case 1:
		// ERROR: 0x827BA0BC
		return;
	case 2:
		// ERROR: 0x827BA0B4
		return;
	case 3:
		// ERROR: 0x827BA0BC
		return;
	case 4:
		// ERROR: 0x827BA0BC
		return;
	case 5:
		// ERROR: 0x827BA0BC
		return;
	case 6:
		// ERROR: 0x827BA0BC
		return;
	case 7:
		// ERROR: 0x827BA0BC
		return;
	case 8:
		// ERROR: 0x827BA0BC
		return;
	case 9:
		// ERROR: 0x827BA0BC
		return;
	case 10:
		// ERROR: 0x827BA0B4
		return;
	case 11:
		// ERROR: 0x827BA0B4
		return;
	case 12:
		// ERROR: 0x827BA0B4
		return;
	case 13:
		// ERROR: 0x827BA0B4
		return;
	case 14:
		// ERROR: 0x827BA0B4
		return;
	case 15:
		// ERROR: 0x827BA0B4
		return;
	case 16:
		// ERROR: 0x827BA0B4
		return;
	case 17:
		// ERROR: 0x827BA0B4
		return;
	case 18:
		// ERROR: 0x827BA0B4
		return;
	case 19:
		// ERROR: 0x827BA0B4
		return;
	case 20:
		// ERROR: 0x827BA0B4
		return;
	case 21:
		// ERROR: 0x827BA0B4
		return;
	case 22:
		// ERROR: 0x827BA0B4
		return;
	case 23:
		// ERROR: 0x827BA0B4
		return;
	case 24:
		// ERROR: 0x827BA0B4
		return;
	case 25:
		// ERROR: 0x827BA0B4
		return;
	case 26:
		// ERROR: 0x827BA0B4
		return;
	case 27:
		// ERROR: 0x827BA0B4
		return;
	case 28:
		// ERROR: 0x827BA0B4
		return;
	case 29:
		// ERROR: 0x827BA0B4
		return;
	case 30:
		// ERROR: 0x827BA0B4
		return;
	case 31:
		// ERROR: 0x827BA0B4
		return;
	case 32:
		// ERROR: 0x827BA0B4
		return;
	case 33:
		// ERROR: 0x827BA0B4
		return;
	case 34:
		// ERROR: 0x827BA0B4
		return;
	case 35:
		// ERROR: 0x827BA0B4
		return;
	case 36:
		// ERROR: 0x827BA0B4
		return;
	case 37:
		// ERROR: 0x827BA0B4
		return;
	case 38:
		// ERROR: 0x827BA0B4
		return;
	case 39:
		// ERROR: 0x827BA0B4
		return;
	case 40:
		// ERROR: 0x827BA0B4
		return;
	case 41:
		// ERROR: 0x827BA0B4
		return;
	case 42:
		// ERROR: 0x827BA0B4
		return;
	case 43:
		// ERROR: 0x827BA0B4
		return;
	case 44:
		// ERROR: 0x827BA0B4
		return;
	case 45:
		// ERROR: 0x827BA0B4
		return;
	case 46:
		// ERROR: 0x827BA0B4
		return;
	case 47:
		// ERROR: 0x827BA0B4
		return;
	case 48:
		// ERROR: 0x827BA0B4
		return;
	case 49:
		// ERROR: 0x827BA0B4
		return;
	case 50:
		// ERROR: 0x827BA0B4
		return;
	case 51:
		// ERROR: 0x827BA0B4
		return;
	case 52:
		// ERROR: 0x827BA0B4
		return;
	case 53:
		// ERROR: 0x827BA0BC
		return;
	case 54:
		// ERROR: 0x827BA0BC
		return;
	case 55:
		// ERROR: 0x827BA0BC
		return;
	case 56:
		// ERROR: 0x827BA0BC
		return;
	case 57:
		// ERROR: 0x827BA0BC
		return;
	case 58:
		// ERROR: 0x827BA0BC
		return;
	case 59:
		// ERROR: 0x827BA0BC
		return;
	case 60:
		// ERROR: 0x827BA0BC
		return;
	case 61:
		// ERROR: 0x827BA0B4
		return;
	case 62:
		// ERROR: 0x827BA0BC
		return;
	case 63:
		// ERROR: 0x827BA0BC
		return;
	case 64:
		// ERROR: 0x827BA0BC
		return;
	case 65:
		// ERROR: 0x827BA0BC
		return;
	case 66:
		// ERROR: 0x827BA0BC
		return;
	case 67:
		// ERROR: 0x827BA0BC
		return;
	case 68:
		// ERROR: 0x827BA0BC
		return;
	case 69:
		// ERROR: 0x827BA0BC
		return;
	case 70:
		// ERROR: 0x827BA0BC
		return;
	case 71:
		// ERROR: 0x827BA0BC
		return;
	case 72:
		// ERROR: 0x827BA0BC
		return;
	case 73:
		// ERROR: 0x827BA0BC
		return;
	case 74:
		// ERROR: 0x827BA0B4
		return;
	case 75:
		// ERROR: 0x827BA0B4
		return;
	case 76:
		// ERROR: 0x827BA0B4
		return;
	case 77:
		// ERROR: 0x827BA0B4
		return;
	case 78:
		// ERROR: 0x827BA0B4
		return;
	case 79:
		// ERROR: 0x827BA0B4
		return;
	case 80:
		// ERROR: 0x827BA0B4
		return;
	case 81:
		// ERROR: 0x827BA0B4
		return;
	case 82:
		// ERROR: 0x827BA0B4
		return;
	case 83:
		// ERROR: 0x827BA0B4
		return;
	case 84:
		// ERROR: 0x827BA0B4
		return;
	case 85:
		// ERROR: 0x827BA0B4
		return;
	case 86:
		// ERROR: 0x827BA0B4
		return;
	case 87:
		// ERROR: 0x827BA0B4
		return;
	case 88:
		// ERROR: 0x827BA0B4
		return;
	case 89:
		// ERROR: 0x827BA0B4
		return;
	case 90:
		// ERROR: 0x827BA0B4
		return;
	case 91:
		// ERROR: 0x827BA0B4
		return;
	case 92:
		// ERROR: 0x827BA0B4
		return;
	case 93:
		// ERROR: 0x827BA0B4
		return;
	case 94:
		// ERROR: 0x827BA0B4
		return;
	case 95:
		// ERROR: 0x827BA0B4
		return;
	case 96:
		// ERROR: 0x827BA0B4
		return;
	case 97:
		// ERROR: 0x827BA0B4
		return;
	case 98:
		// ERROR: 0x827BA0B4
		return;
	case 99:
		// ERROR: 0x827BA0B4
		return;
	case 100:
		// ERROR: 0x827BA0B4
		return;
	case 101:
		// ERROR: 0x827BA0B4
		return;
	case 102:
		// ERROR: 0x827BA0B4
		return;
	case 103:
		// ERROR: 0x827BA0B4
		return;
	case 104:
		// ERROR: 0x827BA0B4
		return;
	case 105:
		// ERROR: 0x827BA0B4
		return;
	case 106:
		// ERROR: 0x827BA0B4
		return;
	case 107:
		// ERROR: 0x827BA0B4
		return;
	case 108:
		// ERROR: 0x827BA0B4
		return;
	case 109:
		// ERROR: 0x827BA0B4
		return;
	case 110:
		// ERROR: 0x827BA0BC
		return;
	case 111:
		// ERROR: 0x827BA0BC
		return;
	case 112:
		// ERROR: 0x827BA0B4
		return;
	case 113:
		// ERROR: 0x827BA0B4
		return;
	case 114:
		// ERROR: 0x827BA0BC
		return;
	case 115:
		// ERROR: 0x827BA0BC
		return;
	case 116:
		// ERROR: 0x827BA0B4
		return;
	case 117:
		// ERROR: 0x827BA0B4
		return;
	case 118:
		// ERROR: 0x827BA0BC
		return;
	case 119:
		// ERROR: 0x827BA0BC
		return;
	case 120:
		// ERROR: 0x827BA0B4
		return;
	case 121:
		// ERROR: 0x827BA0BC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_827B9E74"))) PPC_WEAK_FUNC(sub_827B9E74);
PPC_FUNC_IMPL(__imp__sub_827B9E74) {
	PPC_FUNC_PROLOGUE();
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lwz r19,-24396(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24396);
	// lwz r19,-24388(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24388);
	// lis r11,285
	ctx.r11.s64 = 18677760;
	// ori r10,r11,34207
	ctx.r10.u64 = ctx.r11.u64 | 34207;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x827ba098
	if (ctx.cr6.gt) goto loc_827BA098;
	// lis r11,285
	ctx.r11.s64 = 18677760;
	// ori r10,r11,34202
	ctx.r10.u64 = ctx.r11.u64 | 34202;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ba0bc
	if (!ctx.cr6.lt) goto loc_827BA0BC;
	// addis r11,r4,-286
	ctx.r11.s64 = ctx.r4.s64 + -18743296;
	// addic. r11,r11,31360
	ctx.xer.ca = ctx.r11.u32 > 4294935935;
	ctx.r11.s64 = ctx.r11.s64 + 31360;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827ba0bc
	if (ctx.cr0.eq) goto loc_827BA0BC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x827ba0bc
	if (ctx.cr6.eq) goto loc_827BA0BC;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// b 0x827ba0b0
	goto loc_827BA0B0;
loc_827BA098:
	// addis r11,r4,-286
	ctx.r11.s64 = ctx.r4.s64 + -18743296;
	// addic. r11,r11,31326
	ctx.xer.ca = ctx.r11.u32 > 4294935969;
	ctx.r11.s64 = ctx.r11.s64 + 31326;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827ba0bc
	if (ctx.cr0.eq) goto loc_827BA0BC;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x827ba0bc
	if (ctx.cr6.eq) goto loc_827BA0BC;
	// cmplwi cr6,r11,53034
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 53034, ctx.xer);
loc_827BA0B0:
	// beq cr6,0x827ba0bc
	if (ctx.cr6.eq) goto loc_827BA0BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827BA0BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA0C4"))) PPC_WEAK_FUNC(sub_827BA0C4);
PPC_FUNC_IMPL(__imp__sub_827BA0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA0C8"))) PPC_WEAK_FUNC(sub_827BA0C8);
PPC_FUNC_IMPL(__imp__sub_827BA0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA0DC"))) PPC_WEAK_FUNC(sub_827BA0DC);
PPC_FUNC_IMPL(__imp__sub_827BA0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA0E0"))) PPC_WEAK_FUNC(sub_827BA0E0);
PPC_FUNC_IMPL(__imp__sub_827BA0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA110"))) PPC_WEAK_FUNC(sub_827BA110);
PPC_FUNC_IMPL(__imp__sub_827BA110) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827BA120:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x827ba120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BA120;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA134"))) PPC_WEAK_FUNC(sub_827BA134);
PPC_FUNC_IMPL(__imp__sub_827BA134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA138"))) PPC_WEAK_FUNC(sub_827BA138);
PPC_FUNC_IMPL(__imp__sub_827BA138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ba15c
	if (ctx.cr6.eq) goto loc_827BA15C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ba15c
	if (!ctx.cr6.lt) goto loc_827BA15C;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_827BA15C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA164"))) PPC_WEAK_FUNC(sub_827BA164);
PPC_FUNC_IMPL(__imp__sub_827BA164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA168"))) PPC_WEAK_FUNC(sub_827BA168);
PPC_FUNC_IMPL(__imp__sub_827BA168) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA178"))) PPC_WEAK_FUNC(sub_827BA178);
PPC_FUNC_IMPL(__imp__sub_827BA178) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827ba18c
	if (!ctx.cr6.eq) goto loc_827BA18C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827BA18C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827ba1a0
	if (ctx.cr6.lt) goto loc_827BA1A0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
loc_827BA1A0:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA1AC"))) PPC_WEAK_FUNC(sub_827BA1AC);
PPC_FUNC_IMPL(__imp__sub_827BA1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA1B0"))) PPC_WEAK_FUNC(sub_827BA1B0);
PPC_FUNC_IMPL(__imp__sub_827BA1B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA1C4"))) PPC_WEAK_FUNC(sub_827BA1C4);
PPC_FUNC_IMPL(__imp__sub_827BA1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA1C8"))) PPC_WEAK_FUNC(sub_827BA1C8);
PPC_FUNC_IMPL(__imp__sub_827BA1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA1D8"))) PPC_WEAK_FUNC(sub_827BA1D8);
PPC_FUNC_IMPL(__imp__sub_827BA1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA1F4"))) PPC_WEAK_FUNC(sub_827BA1F4);
PPC_FUNC_IMPL(__imp__sub_827BA1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA1F8"))) PPC_WEAK_FUNC(sub_827BA1F8);
PPC_FUNC_IMPL(__imp__sub_827BA1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,13528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA214"))) PPC_WEAK_FUNC(sub_827BA214);
PPC_FUNC_IMPL(__imp__sub_827BA214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA218"))) PPC_WEAK_FUNC(sub_827BA218);
PPC_FUNC_IMPL(__imp__sub_827BA218) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,16488
	ctx.r11.s64 = ctx.r3.s64 + 16488;
loc_827BA220:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827ba244
	if (ctx.cr6.eq) goto loc_827BA244;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x827ba220
	if (ctx.cr6.lt) goto loc_827BA220;
loc_827BA23C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827BA244:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ba23c
	if (ctx.cr6.eq) goto loc_827BA23C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827ba264
	if (ctx.cr6.lt) goto loc_827BA264;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// blr 
	return;
loc_827BA264:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA270"))) PPC_WEAK_FUNC(sub_827BA270);
PPC_FUNC_IMPL(__imp__sub_827BA270) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,16488
	ctx.r11.s64 = ctx.r3.s64 + 16488;
loc_827BA278:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827ba29c
	if (ctx.cr6.eq) goto loc_827BA29C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x827ba278
	if (ctx.cr6.lt) goto loc_827BA278;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_827BA29C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA2A4"))) PPC_WEAK_FUNC(sub_827BA2A4);
PPC_FUNC_IMPL(__imp__sub_827BA2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BA2A8"))) PPC_WEAK_FUNC(sub_827BA2A8);
PPC_FUNC_IMPL(__imp__sub_827BA2A8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,1374
	ctx.r11.s64 = ctx.r4.s64 + 1374;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA2D0"))) PPC_WEAK_FUNC(sub_827BA2D0);
PPC_FUNC_IMPL(__imp__sub_827BA2D0) {
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
	// lwz r11,16536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ba304
	if (ctx.cr6.eq) goto loc_827BA304;
	// lwz r10,16540(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16540);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ba304
	if (!ctx.cr6.lt) goto loc_827BA304;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x827ba308
	goto loc_827BA308;
loc_827BA304:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_827BA308:
	// bl 0x8226ba48
	ctx.lr = 0x827BA30C;
	sub_8226BA48(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x827ba31c
	if (ctx.cr6.eq) goto loc_827BA31C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226ba10
	ctx.lr = 0x827BA31C;
	sub_8226BA10(ctx, base);
loc_827BA31C:
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

__attribute__((alias("__imp__sub_827BA330"))) PPC_WEAK_FUNC(sub_827BA330);
PPC_FUNC_IMPL(__imp__sub_827BA330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r11,r3,15728
	ctx.r11.s64 = ctx.r3.s64 + 15728;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
loc_827BA348:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827ba364
	if (ctx.cr6.eq) goto loc_827BA364;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827BA364:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827ba380
	if (ctx.cr6.eq) goto loc_827BA380;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_827BA380:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827ba39c
	if (ctx.cr6.eq) goto loc_827BA39C;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_827BA39C:
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827ba3b8
	if (ctx.cr6.eq) goto loc_827BA3B8;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_827BA3B8:
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827ba3d4
	if (ctx.cr6.eq) goto loc_827BA3D4;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_827BA3D4:
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827ba3f0
	if (ctx.cr6.eq) goto loc_827BA3F0;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_827BA3F0:
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827ba40c
	if (ctx.cr6.eq) goto loc_827BA40C;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
loc_827BA40C:
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827ba428
	if (ctx.cr6.eq) goto loc_827BA428;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_827BA428:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bne 0x827ba348
	if (!ctx.cr0.eq) goto loc_827BA348;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA438"))) PPC_WEAK_FUNC(sub_827BA438);
PPC_FUNC_IMPL(__imp__sub_827BA438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r3,15728
	ctx.r11.s64 = ctx.r3.s64 + 15728;
	// li r3,8
	ctx.r3.s64 = 8;
	// li r5,6
	ctx.r5.s64 = 6;
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r10,-11080
	ctx.r6.s64 = ctx.r10.s64 + -11080;
loc_827BA45C:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba498
	if (ctx.cr6.eq) goto loc_827BA498;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x827ba498
	if (!ctx.cr6.eq) goto loc_827BA498;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stw r7,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_827BA498:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba4d4
	if (ctx.cr6.eq) goto loc_827BA4D4;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x827ba4d4
	if (!ctx.cr6.eq) goto loc_827BA4D4;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_827BA4D4:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba510
	if (ctx.cr6.eq) goto loc_827BA510;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x827ba510
	if (!ctx.cr6.eq) goto loc_827BA510;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
loc_827BA510:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba54c
	if (ctx.cr6.eq) goto loc_827BA54C;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x827ba54c
	if (!ctx.cr6.eq) goto loc_827BA54C;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// stfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
loc_827BA54C:
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba588
	if (ctx.cr6.eq) goto loc_827BA588;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x827ba588
	if (!ctx.cr6.eq) goto loc_827BA588;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r7,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
loc_827BA588:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba5c4
	if (ctx.cr6.eq) goto loc_827BA5C4;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x827ba5c4
	if (!ctx.cr6.eq) goto loc_827BA5C4;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
loc_827BA5C4:
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba600
	if (ctx.cr6.eq) goto loc_827BA600;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x827ba600
	if (!ctx.cr6.eq) goto loc_827BA600;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// stfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stw r7,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
loc_827BA600:
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba63c
	if (ctx.cr6.eq) goto loc_827BA63C;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x827ba63c
	if (!ctx.cr6.eq) goto loc_827BA63C;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r7,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r7.u32);
	// stfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stw r7,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r7.u32);
loc_827BA63C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bne 0x827ba45c
	if (!ctx.cr0.eq) goto loc_827BA45C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA650"))) PPC_WEAK_FUNC(sub_827BA650);
PPC_FUNC_IMPL(__imp__sub_827BA650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r3,15728
	ctx.r11.s64 = ctx.r3.s64 + 15728;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
loc_827BA668:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba690
	if (ctx.cr6.eq) goto loc_827BA690;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba690
	if (!ctx.cr6.eq) goto loc_827BA690;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827BA690:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba6b8
	if (ctx.cr6.eq) goto loc_827BA6B8;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba6b8
	if (!ctx.cr6.eq) goto loc_827BA6B8;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_827BA6B8:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba6e0
	if (ctx.cr6.eq) goto loc_827BA6E0;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba6e0
	if (!ctx.cr6.eq) goto loc_827BA6E0;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_827BA6E0:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba708
	if (ctx.cr6.eq) goto loc_827BA708;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba708
	if (!ctx.cr6.eq) goto loc_827BA708;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_827BA708:
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba730
	if (ctx.cr6.eq) goto loc_827BA730;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba730
	if (!ctx.cr6.eq) goto loc_827BA730;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_827BA730:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba758
	if (ctx.cr6.eq) goto loc_827BA758;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba758
	if (!ctx.cr6.eq) goto loc_827BA758;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_827BA758:
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba780
	if (ctx.cr6.eq) goto loc_827BA780;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba780
	if (!ctx.cr6.eq) goto loc_827BA780;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
loc_827BA780:
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba7a8
	if (ctx.cr6.eq) goto loc_827BA7A8;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba7a8
	if (!ctx.cr6.eq) goto loc_827BA7A8;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_827BA7A8:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bne 0x827ba668
	if (!ctx.cr0.eq) goto loc_827BA668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA7B8"))) PPC_WEAK_FUNC(sub_827BA7B8);
PPC_FUNC_IMPL(__imp__sub_827BA7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r3,15728
	ctx.r11.s64 = ctx.r3.s64 + 15728;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
loc_827BA7D0:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba7f4
	if (ctx.cr6.eq) goto loc_827BA7F4;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba7f4
	if (!ctx.cr6.eq) goto loc_827BA7F4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827BA7F4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba818
	if (ctx.cr6.eq) goto loc_827BA818;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba818
	if (!ctx.cr6.eq) goto loc_827BA818;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_827BA818:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba83c
	if (ctx.cr6.eq) goto loc_827BA83C;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba83c
	if (!ctx.cr6.eq) goto loc_827BA83C;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_827BA83C:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba860
	if (ctx.cr6.eq) goto loc_827BA860;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba860
	if (!ctx.cr6.eq) goto loc_827BA860;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_827BA860:
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba884
	if (ctx.cr6.eq) goto loc_827BA884;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba884
	if (!ctx.cr6.eq) goto loc_827BA884;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_827BA884:
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba8a8
	if (ctx.cr6.eq) goto loc_827BA8A8;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba8a8
	if (!ctx.cr6.eq) goto loc_827BA8A8;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_827BA8A8:
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba8cc
	if (ctx.cr6.eq) goto loc_827BA8CC;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba8cc
	if (!ctx.cr6.eq) goto loc_827BA8CC;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
loc_827BA8CC:
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ba8f0
	if (ctx.cr6.eq) goto loc_827BA8F0;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x827ba8f0
	if (!ctx.cr6.eq) goto loc_827BA8F0;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_827BA8F0:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bne 0x827ba7d0
	if (!ctx.cr0.eq) goto loc_827BA7D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA900"))) PPC_WEAK_FUNC(sub_827BA900);
PPC_FUNC_IMPL(__imp__sub_827BA900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r6,r11,-11080
	ctx.r6.s64 = ctx.r11.s64 + -11080;
loc_827BA91C:
	// lwz r9,15660(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15660);
	// addi r11,r9,1310
	ctx.r11.s64 = ctx.r9.s64 + 1310;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827ba990
	if (ctx.cr6.eq) goto loc_827BA990;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x827ba964
	if (!ctx.cr6.lt) goto loc_827BA964;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x827ba97c
	goto loc_827BA97C;
loc_827BA964:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,15660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15660, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x827ba97c
	if (ctx.cr6.lt) goto loc_827BA97C;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,15660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15660, ctx.r11.u32);
loc_827BA97C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x827ba990
	if (!ctx.cr6.eq) goto loc_827BA990;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x827ba91c
	if (ctx.cr6.lt) goto loc_827BA91C;
loc_827BA990:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,15660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15660);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r11,1310
	ctx.r11.s64 = ctx.r11.s64 + 1310;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,-30728(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f13,48(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,15660(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15660);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,15660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15660, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x827ba9f0
	if (ctx.cr6.lt) goto loc_827BA9F0;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,15660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15660, ctx.r11.u32);
loc_827BA9F0:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BA9FC"))) PPC_WEAK_FUNC(sub_827BA9FC);
PPC_FUNC_IMPL(__imp__sub_827BA9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BAA00"))) PPC_WEAK_FUNC(sub_827BAA00);
PPC_FUNC_IMPL(__imp__sub_827BAA00) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827baa30
	if (ctx.cr6.eq) goto loc_827BAA30;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8226b930
	ctx.lr = 0x827BAA28;
	sub_8226B930(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827BAA30:
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

__attribute__((alias("__imp__sub_827BAA44"))) PPC_WEAK_FUNC(sub_827BAA44);
PPC_FUNC_IMPL(__imp__sub_827BAA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BAA48"))) PPC_WEAK_FUNC(sub_827BAA48);
PPC_FUNC_IMPL(__imp__sub_827BAA48) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827baac0
	if (ctx.cr6.eq) goto loc_827BAAC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x827baa74
	if (!ctx.cr6.eq) goto loc_827BAA74;
	// bl 0x827ba7b8
	ctx.lr = 0x827BAA74;
	sub_827BA7B8(ctx, base);
loc_827BAA74:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f0,-4012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x827baaa8
	if (!ctx.cr6.lt) goto loc_827BAAA8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-11080
	ctx.r9.s64 = ctx.r9.s64 + -11080;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
loc_827BAAA8:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827baac0
	if (ctx.cr6.eq) goto loc_827BAAC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82279348
	ctx.lr = 0x827BAAB8;
	sub_82279348(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827BAAC0:
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

__attribute__((alias("__imp__sub_827BAAD4"))) PPC_WEAK_FUNC(sub_827BAAD4);
PPC_FUNC_IMPL(__imp__sub_827BAAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BAAD8"))) PPC_WEAK_FUNC(sub_827BAAD8);
PPC_FUNC_IMPL(__imp__sub_827BAAD8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827bab04
	if (ctx.cr6.eq) goto loc_827BAB04;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,204
	ctx.r11.s64 = ctx.r3.s64 + 204;
loc_827BAAE8:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x827bab0c
	if (ctx.cr6.eq) goto loc_827BAB0C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x827baae8
	if (ctx.cr6.lt) goto loc_827BAAE8;
loc_827BAB04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827BAB0C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827bab04
	if (ctx.cr6.eq) goto loc_827BAB04;
	// b 0x8226c008
	sub_8226C008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BAB1C"))) PPC_WEAK_FUNC(sub_827BAB1C);
PPC_FUNC_IMPL(__imp__sub_827BAB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BAB20"))) PPC_WEAK_FUNC(sub_827BAB20);
PPC_FUNC_IMPL(__imp__sub_827BAB20) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x827bab6c
	if (!ctx.cr6.gt) goto loc_827BAB6C;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bge cr6,0x827bab6c
	if (!ctx.cr6.lt) goto loc_827BAB6C;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r10,-11080
	ctx.r11.s64 = ctx.r10.s64 + -11080;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827bab6c
	if (ctx.cr6.lt) goto loc_827BAB6C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x827bab6c
	if (!ctx.cr6.lt) goto loc_827BAB6C;
	// addi r11,r11,3919
	ctx.r11.s64 = ctx.r11.s64 + 3919;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_827BAB6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BAB74"))) PPC_WEAK_FUNC(sub_827BAB74);
PPC_FUNC_IMPL(__imp__sub_827BAB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BAB78"))) PPC_WEAK_FUNC(sub_827BAB78);
PPC_FUNC_IMPL(__imp__sub_827BAB78) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r4,3925
	ctx.r11.s64 = ctx.r4.s64 + 3925;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BABA4"))) PPC_WEAK_FUNC(sub_827BABA4);
PPC_FUNC_IMPL(__imp__sub_827BABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BABA8"))) PPC_WEAK_FUNC(sub_827BABA8);
PPC_FUNC_IMPL(__imp__sub_827BABA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827bac18
	if (ctx.cr6.eq) goto loc_827BAC18;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x827babec
	if (ctx.cr6.eq) goto loc_827BABEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r5,r11,-8780
	ctx.r5.s64 = ctx.r11.s64 + -8780;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bcac98
	ctx.lr = 0x827BABE8;
	sub_82BCAC98(ctx, base);
	// b 0x827bac08
	goto loc_827BAC08;
loc_827BABEC:
	// lfs f1,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// addi r5,r11,-8720
	ctx.r5.s64 = ctx.r11.s64 + -8720;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bcac98
	ctx.lr = 0x827BAC08;
	sub_82BCAC98(ctx, base);
loc_827BAC08:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_827BAC18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BAC28"))) PPC_WEAK_FUNC(sub_827BAC28);
PPC_FUNC_IMPL(__imp__sub_827BAC28) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827bac64
	if (ctx.cr6.eq) goto loc_827BAC64;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x827b92b8
	ctx.lr = 0x827BAC4C;
	sub_827B92B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827bac64
	if (ctx.cr6.eq) goto loc_827BAC64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
loc_827BAC64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BAC74"))) PPC_WEAK_FUNC(sub_827BAC74);
PPC_FUNC_IMPL(__imp__sub_827BAC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BAC78"))) PPC_WEAK_FUNC(sub_827BAC78);
PPC_FUNC_IMPL(__imp__sub_827BAC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BACA4"))) PPC_WEAK_FUNC(sub_827BACA4);
PPC_FUNC_IMPL(__imp__sub_827BACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BACA8"))) PPC_WEAK_FUNC(sub_827BACA8);
PPC_FUNC_IMPL(__imp__sub_827BACA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827badcc
	if (ctx.cr6.eq) goto loc_827BADCC;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8226ba80
	ctx.lr = 0x827BACD0;
	sub_8226BA80(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lwz r10,12492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// beq cr6,0x827bacf8
	if (ctx.cr6.eq) goto loc_827BACF8;
	// lfs f0,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_827BACF8:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f12,-4012(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4012);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x827bad24
	if (ctx.cr6.lt) goto loc_827BAD24;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lfs f13,-19784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19784);
	ctx.f13.f64 = double(temp.f32);
	// b 0x827badac
	goto loc_827BADAC;
loc_827BAD24:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r11,r11,2836
	ctx.r11.s64 = ctx.r11.s64 + 2836;
	// lfs f12,-30072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30072);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x827bad40
	if (ctx.cr6.lt) goto loc_827BAD40;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// b 0x827badac
	goto loc_827BADAC;
loc_827BAD40:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f12,-4392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x827bad5c
	if (ctx.cr6.lt) goto loc_827BAD5C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,-30316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30316);
	ctx.f13.f64 = double(temp.f32);
	// b 0x827badac
	goto loc_827BADAC;
loc_827BAD5C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f12,-30648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30648);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x827bad78
	if (ctx.cr6.gt) goto loc_827BAD78;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,-30320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30320);
	ctx.f13.f64 = double(temp.f32);
	// b 0x827badac
	goto loc_827BADAC;
loc_827BAD78:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f12,-30324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30324);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x827bad94
	if (ctx.cr6.gt) goto loc_827BAD94;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,-30328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30328);
	ctx.f13.f64 = double(temp.f32);
	// b 0x827badac
	goto loc_827BADAC;
loc_827BAD94:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f12,-30332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30332);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x827badac
	if (ctx.cr6.gt) goto loc_827BADAC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,-30336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30336);
	ctx.f13.f64 = double(temp.f32);
loc_827BADAC:
	// stfs f13,96(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827badcc
	if (ctx.cr6.eq) goto loc_827BADCC;
	// lfs f0,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_827BADCC:
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

__attribute__((alias("__imp__sub_827BADE0"))) PPC_WEAK_FUNC(sub_827BADE0);
PPC_FUNC_IMPL(__imp__sub_827BADE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BAE0C"))) PPC_WEAK_FUNC(sub_827BAE0C);
PPC_FUNC_IMPL(__imp__sub_827BAE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BAE10"))) PPC_WEAK_FUNC(sub_827BAE10);
PPC_FUNC_IMPL(__imp__sub_827BAE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827BAE18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x827bae3c
	if (!ctx.cr6.gt) goto loc_827BAE3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827BAE3C:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r3,13604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13604);
	// bl 0x827b9168
	ctx.lr = 0x827BAE48;
	sub_827B9168(ctx, base);
	// lwz r11,13604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13604);
	// li r31,5
	ctx.r31.s64 = 5;
	// addi r30,r11,15700
	ctx.r30.s64 = ctx.r11.s64 + 15700;
loc_827BAE54:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827BAE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x827bae54
	if (!ctx.cr0.eq) goto loc_827BAE54;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r29.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BAE9C"))) PPC_WEAK_FUNC(sub_827BAE9C);
PPC_FUNC_IMPL(__imp__sub_827BAE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BAEA0"))) PPC_WEAK_FUNC(sub_827BAEA0);
PPC_FUNC_IMPL(__imp__sub_827BAEA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827baebc
	if (ctx.cr6.eq) goto loc_827BAEBC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// blr 
	return;
loc_827BAEBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BAEC4"))) PPC_WEAK_FUNC(sub_827BAEC4);
PPC_FUNC_IMPL(__imp__sub_827BAEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BAEC8"))) PPC_WEAK_FUNC(sub_827BAEC8);
PPC_FUNC_IMPL(__imp__sub_827BAEC8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-15760
	ctx.r31.s64 = ctx.r11.s64 + -15760;
	// addi r3,r31,952
	ctx.r3.s64 = ctx.r31.s64 + 952;
	// bl 0x82c09bec
	ctx.lr = 0x827BAEF0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,15648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827baf00
	if (ctx.cr6.eq) goto loc_827BAF00;
	// bl 0x82286dc0
	ctx.lr = 0x827BAF00;
	sub_82286DC0(ctx, base);
loc_827BAF00:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827baf14
	if (ctx.cr6.eq) goto loc_827BAF14;
	// bl 0x8227c0d8
	ctx.lr = 0x827BAF14;
	sub_8227C0D8(ctx, base);
loc_827BAF14:
	// addi r3,r31,952
	ctx.r3.s64 = ctx.r31.s64 + 952;
	// bl 0x82c09bdc
	ctx.lr = 0x827BAF1C;
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

__attribute__((alias("__imp__sub_827BAF34"))) PPC_WEAK_FUNC(sub_827BAF34);
PPC_FUNC_IMPL(__imp__sub_827BAF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BAF38"))) PPC_WEAK_FUNC(sub_827BAF38);
PPC_FUNC_IMPL(__imp__sub_827BAF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827BAF40;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827bb02c
	if (ctx.cr6.lt) goto loc_827BB02C;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bge cr6,0x827bb02c
	if (!ctx.cr6.lt) goto loc_827BB02C;
	// addi r11,r30,4144
	ctx.r11.s64 = ctx.r30.s64 + 4144;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827bb02c
	if (!ctx.cr6.eq) goto loc_827BB02C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x827bafa0
	if (!ctx.cr6.lt) goto loc_827BAFA0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,-10256
	ctx.r9.s64 = ctx.r11.s64 + -10256;
	// lfsx f31,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f31.f64 = double(temp.f32);
loc_827BAFA0:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x827bb010
	if (ctx.cr6.eq) goto loc_827BB010;
	// addi r29,r28,64
	ctx.r29.s64 = ctx.r28.s64 + 64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827b1408
	ctx.lr = 0x827BAFC0;
	sub_827B1408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827bb01c
	if (ctx.cr6.eq) goto loc_827BB01C;
	// li r27,2
	ctx.r27.s64 = 2;
loc_827BAFD0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827bafec
	if (ctx.cr6.eq) goto loc_827BAFEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8226b930
	ctx.lr = 0x827BAFE8;
	sub_8226B930(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_827BAFEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827b1408
	ctx.lr = 0x827BB000;
	sub_827B1408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827bafd0
	if (!ctx.cr6.eq) goto loc_827BAFD0;
	// b 0x827bb01c
	goto loc_827BB01C;
loc_827BB010:
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822860f0
	ctx.lr = 0x827BB01C;
	sub_822860F0(ctx, base);
loc_827BB01C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x827b1d90
	ctx.lr = 0x827BB02C;
	sub_827B1D90(ctx, base);
loc_827BB02C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB038"))) PPC_WEAK_FUNC(sub_827BB038);
PPC_FUNC_IMPL(__imp__sub_827BB038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827BB040;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,15676
	ctx.r30.s64 = ctx.r29.s64 + 15676;
loc_827BB054:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827bb084
	if (ctx.cr6.lt) goto loc_827BB084;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bge cr6,0x827bb084
	if (!ctx.cr6.lt) goto loc_827BB084;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827bb084
	if (ctx.cr6.eq) goto loc_827BB084;
	// lwz r11,15696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15696);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827bb084
	if (ctx.cr6.eq) goto loc_827BB084;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226be08
	ctx.lr = 0x827BB084;
	sub_8226BE08(ctx, base);
loc_827BB084:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// blt cr6,0x827bb054
	if (ctx.cr6.lt) goto loc_827BB054;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,15648(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15648);
	// bl 0x82bf97b8
	ctx.lr = 0x827BB0A0;
	sub_82BF97B8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x827b17a8
	ctx.lr = 0x827BB0B0;
	sub_827B17A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB0BC"))) PPC_WEAK_FUNC(sub_827BB0BC);
PPC_FUNC_IMPL(__imp__sub_827BB0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BB0C0"))) PPC_WEAK_FUNC(sub_827BB0C0);
PPC_FUNC_IMPL(__imp__sub_827BB0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827BB0C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,15676
	ctx.r30.s64 = ctx.r29.s64 + 15676;
loc_827BB0DC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827bb10c
	if (ctx.cr6.lt) goto loc_827BB10C;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bge cr6,0x827bb10c
	if (!ctx.cr6.lt) goto loc_827BB10C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827bb10c
	if (ctx.cr6.eq) goto loc_827BB10C;
	// lwz r11,15696(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15696);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827bb10c
	if (ctx.cr6.eq) goto loc_827BB10C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226bd98
	ctx.lr = 0x827BB10C;
	sub_8226BD98(ctx, base);
loc_827BB10C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// blt cr6,0x827bb0dc
	if (ctx.cr6.lt) goto loc_827BB0DC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,15648(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15648);
	// bl 0x82bf9860
	ctx.lr = 0x827BB128;
	sub_82BF9860(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x827b17a8
	ctx.lr = 0x827BB138;
	sub_827B17A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB144"))) PPC_WEAK_FUNC(sub_827BB144);
PPC_FUNC_IMPL(__imp__sub_827BB144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BB148"))) PPC_WEAK_FUNC(sub_827BB148);
PPC_FUNC_IMPL(__imp__sub_827BB148) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,15672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15672);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,15672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15672, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827bb19c
	if (!ctx.cr6.eq) goto loc_827BB19C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827BB180:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827baf38
	ctx.lr = 0x827BB190;
	sub_827BAF38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// blt cr6,0x827bb180
	if (ctx.cr6.lt) goto loc_827BB180;
loc_827BB19C:
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

__attribute__((alias("__imp__sub_827BB1B8"))) PPC_WEAK_FUNC(sub_827BB1B8);
PPC_FUNC_IMPL(__imp__sub_827BB1B8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x827b15a8
	ctx.lr = 0x827BB1F0;
	sub_827B15A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827bb208
	if (ctx.cr6.eq) goto loc_827BB208;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ba900
	ctx.lr = 0x827BB208;
	sub_827BA900(ctx, base);
loc_827BB208:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
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

__attribute__((alias("__imp__sub_827BB224"))) PPC_WEAK_FUNC(sub_827BB224);
PPC_FUNC_IMPL(__imp__sub_827BB224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BB228"))) PPC_WEAK_FUNC(sub_827BB228);
PPC_FUNC_IMPL(__imp__sub_827BB228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x827BB230;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,-11080
	ctx.r11.s64 = ctx.r10.s64 + -11080;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwzx r29,r8,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r6,r29,3925
	ctx.r6.s64 = ctx.r29.s64 + 3925;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827BB280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827bb2ac
	if (ctx.cr6.eq) goto loc_827BB2AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,15564
	ctx.r3.s64 = ctx.r30.s64 + 15564;
	// bl 0x827afca8
	ctx.lr = 0x827BB294;
	sub_827AFCA8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827bb2ac
	if (ctx.cr6.eq) goto loc_827BB2AC;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_827BB2AC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,15564
	ctx.r3.s64 = ctx.r30.s64 + 15564;
	// bl 0x827afef0
	ctx.lr = 0x827BB2BC;
	sub_827AFEF0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827bb2cc
	if (!ctx.cr6.eq) goto loc_827BB2CC;
	// li r26,2
	ctx.r26.s64 = 2;
loc_827BB2CC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB2D8"))) PPC_WEAK_FUNC(sub_827BB2D8);
PPC_FUNC_IMPL(__imp__sub_827BB2D8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827bb374
	if (ctx.cr6.eq) goto loc_827BB374;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827bb374
	if (ctx.cr6.eq) goto loc_827BB374;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827bb32c
	if (ctx.cr6.eq) goto loc_827BB32C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827baa48
	ctx.lr = 0x827BB318;
	sub_827BAA48(ctx, base);
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
loc_827BB32C:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827bb360
	if (ctx.cr6.eq) goto loc_827BB360;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827ba900
	ctx.lr = 0x827BB34C;
	sub_827BA900(ctx, base);
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
loc_827BB360:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8226b9a0
	ctx.lr = 0x827BB36C;
	sub_8226B9A0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827BB374:
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

__attribute__((alias("__imp__sub_827BB388"))) PPC_WEAK_FUNC(sub_827BB388);
PPC_FUNC_IMPL(__imp__sub_827BB388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BB3C8"))) PPC_WEAK_FUNC(sub_827BB3C8);
PPC_FUNC_IMPL(__imp__sub_827BB3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827BB3D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827bb3f0
	if (!ctx.cr6.eq) goto loc_827BB3F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827BB3F0:
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r3,13604(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13604);
	// bl 0x827b9168
	ctx.lr = 0x827BB3FC;
	sub_827B9168(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r29.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// beq 0x827bb42c
	if (ctx.cr0.eq) goto loc_827BB42C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r29,-4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_827BB42C:
	// lwz r11,13604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13604);
	// li r31,5
	ctx.r31.s64 = 5;
	// addi r30,r11,15700
	ctx.r30.s64 = ctx.r11.s64 + 15700;
loc_827BB438:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827BB450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x827bb438
	if (!ctx.cr0.eq) goto loc_827BB438;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB468"))) PPC_WEAK_FUNC(sub_827BB468);
PPC_FUNC_IMPL(__imp__sub_827BB468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827BB470;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827bb554
	if (ctx.cr6.lt) goto loc_827BB554;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bge cr6,0x827bb554
	if (!ctx.cr6.lt) goto loc_827BB554;
	// addi r11,r30,4144
	ctx.r11.s64 = ctx.r30.s64 + 4144;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827bb554
	if (!ctx.cr6.gt) goto loc_827BB554;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
	// bne 0x827bb554
	if (!ctx.cr0.eq) goto loc_827BB554;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x827bb4d8
	if (!ctx.cr6.lt) goto loc_827BB4D8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-10256
	ctx.r11.s64 = ctx.r11.s64 + -10256;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lfsx f31,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f31.f64 = double(temp.f32);
loc_827BB4D8:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x827bb538
	if (ctx.cr6.eq) goto loc_827BB538;
	// addi r28,r29,64
	ctx.r28.s64 = ctx.r29.s64 + 64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b1408
	ctx.lr = 0x827BB4F8;
	sub_827B1408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827bb544
	if (ctx.cr6.eq) goto loc_827BB544;
loc_827BB504:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827bb2d8
	ctx.lr = 0x827BB514;
	sub_827BB2D8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827b1408
	ctx.lr = 0x827BB528;
	sub_827B1408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827bb504
	if (!ctx.cr6.eq) goto loc_827BB504;
	// b 0x827bb544
	goto loc_827BB544;
loc_827BB538:
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82286218
	ctx.lr = 0x827BB544;
	sub_82286218(ctx, base);
loc_827BB544:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x827b1d90
	ctx.lr = 0x827BB554;
	sub_827B1D90(ctx, base);
loc_827BB554:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB560"))) PPC_WEAK_FUNC(sub_827BB560);
PPC_FUNC_IMPL(__imp__sub_827BB560) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,15672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827bb5b8
	if (!ctx.cr6.gt) goto loc_827BB5B8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,15672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15672, ctx.r11.u32);
	// bne 0x827bb5b8
	if (!ctx.cr0.eq) goto loc_827BB5B8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827BB59C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827bb468
	ctx.lr = 0x827BB5AC;
	sub_827BB468(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// blt cr6,0x827bb59c
	if (ctx.cr6.lt) goto loc_827BB59C;
loc_827BB5B8:
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

__attribute__((alias("__imp__sub_827BB5D4"))) PPC_WEAK_FUNC(sub_827BB5D4);
PPC_FUNC_IMPL(__imp__sub_827BB5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BB5D8"))) PPC_WEAK_FUNC(sub_827BB5D8);
PPC_FUNC_IMPL(__imp__sub_827BB5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827BB5E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,12492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// addi r9,r7,-11080
	ctx.r9.s64 = ctx.r7.s64 + -11080;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f12,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-30728(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// lfd f11,48(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,-4476(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4476);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r6,16416
	ctx.r11.s64 = ctx.r6.s64 + 16416;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lwzx r11,r8,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// fmsubs f0,f9,f0,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x827bb6b8
	if (!ctx.cr6.lt) goto loc_827BB6B8;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// rlwinm r27,r11,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r10,-10256
	ctx.r28.s64 = ctx.r10.s64 + -10256;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// lfsx f13,r27,r11
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x827bb6b8
	if (!ctx.cr6.gt) goto loc_827BB6B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x827b1b78
	ctx.lr = 0x827BB68C;
	sub_827B1B78(ctx, base);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfsx f1,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827bb2d8
	ctx.lr = 0x827BB6A0;
	sub_827BB2D8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_827BB6B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB6C4"))) PPC_WEAK_FUNC(sub_827BB6C4);
PPC_FUNC_IMPL(__imp__sub_827BB6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BB6C8"))) PPC_WEAK_FUNC(sub_827BB6C8);
PPC_FUNC_IMPL(__imp__sub_827BB6C8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x827bb718
	if (ctx.cr6.eq) goto loc_827BB718;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x827bb6fc
	if (ctx.cr6.eq) goto loc_827BB6FC;
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
loc_827BB6FC:
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x827bb3c8
	ctx.lr = 0x827BB704;
	sub_827BB3C8(ctx, base);
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
loc_827BB718:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// bl 0x827bae10
	ctx.lr = 0x827BB724;
	sub_827BAE10(ctx, base);
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

__attribute__((alias("__imp__sub_827BB738"))) PPC_WEAK_FUNC(sub_827BB738);
PPC_FUNC_IMPL(__imp__sub_827BB738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827BB740;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827bb78c
	if (ctx.cr6.lt) goto loc_827BB78C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x827bb780
	if (!ctx.cr6.eq) goto loc_827BB780;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827BB77C;
	sub_82120040(ctx, base);
	// b 0x827bb788
	goto loc_827BB788;
loc_827BB780:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x827BB788;
	sub_82121828(ctx, base);
loc_827BB788:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_827BB78C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 22, ctx.xer);
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// bne cr6,0x827bb7b0
	if (!ctx.cr6.eq) goto loc_827BB7B0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,13604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13604);
	// bl 0x827ba2d0
	ctx.lr = 0x827BB7B0;
	sub_827BA2D0(ctx, base);
loc_827BB7B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB7B8"))) PPC_WEAK_FUNC(sub_827BB7B8);
PPC_FUNC_IMPL(__imp__sub_827BB7B8) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_827BB7C8"))) PPC_WEAK_FUNC(sub_827BB7C8);
PPC_FUNC_IMPL(__imp__sub_827BB7C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BB7CC"))) PPC_WEAK_FUNC(sub_827BB7CC);
PPC_FUNC_IMPL(__imp__sub_827BB7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BB7D0"))) PPC_WEAK_FUNC(sub_827BB7D0);
PPC_FUNC_IMPL(__imp__sub_827BB7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827BB7D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827bb824
	if (ctx.cr6.lt) goto loc_827BB824;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827bb818
	if (!ctx.cr6.eq) goto loc_827BB818;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827BB814;
	sub_82120040(ctx, base);
	// b 0x827bb820
	goto loc_827BB820;
loc_827BB818:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x827BB820;
	sub_82121828(ctx, base);
loc_827BB820:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_827BB824:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB838"))) PPC_WEAK_FUNC(sub_827BB838);
PPC_FUNC_IMPL(__imp__sub_827BB838) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82120a70
	sub_82120A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB848"))) PPC_WEAK_FUNC(sub_827BB848);
PPC_FUNC_IMPL(__imp__sub_827BB848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827BB84C"))) PPC_WEAK_FUNC(sub_827BB84C);
PPC_FUNC_IMPL(__imp__sub_827BB84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827BB850"))) PPC_WEAK_FUNC(sub_827BB850);
PPC_FUNC_IMPL(__imp__sub_827BB850) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,1374
	ctx.r11.s64 = ctx.r11.s64 + 1374;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x827bb7d0
	sub_827BB7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827BB884"))) PPC_WEAK_FUNC(sub_827BB884);
PPC_FUNC_IMPL(__imp__sub_827BB884) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

