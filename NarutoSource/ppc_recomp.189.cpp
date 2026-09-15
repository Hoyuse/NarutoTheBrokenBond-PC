#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BEFAFC"))) PPC_WEAK_FUNC(sub_82BEFAFC);
PPC_FUNC_IMPL(__imp__sub_82BEFAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFB00"))) PPC_WEAK_FUNC(sub_82BEFB00);
PPC_FUNC_IMPL(__imp__sub_82BEFB00) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82be4e18
	sub_82BE4E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFB08"))) PPC_WEAK_FUNC(sub_82BEFB08);
PPC_FUNC_IMPL(__imp__sub_82BEFB08) {
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
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stb r4,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFB60"))) PPC_WEAK_FUNC(sub_82BEFB60);
PPC_FUNC_IMPL(__imp__sub_82BEFB60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be4f40
	sub_82BE4F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFB64"))) PPC_WEAK_FUNC(sub_82BEFB64);
PPC_FUNC_IMPL(__imp__sub_82BEFB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFB68"))) PPC_WEAK_FUNC(sub_82BEFB68);
PPC_FUNC_IMPL(__imp__sub_82BEFB68) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82befbb0
	if (ctx.cr6.eq) goto loc_82BEFBB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befbb0
	if (ctx.cr6.eq) goto loc_82BEFBB0;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befbb0
	if (ctx.cr6.eq) goto loc_82BEFBB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befbb0
	if (ctx.cr6.eq) goto loc_82BEFBB0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befbb0
	if (ctx.cr6.eq) goto loc_82BEFBB0;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// blr 
	return;
loc_82BEFBB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFBB8"))) PPC_WEAK_FUNC(sub_82BEFBB8);
PPC_FUNC_IMPL(__imp__sub_82BEFBB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be5090
	sub_82BE5090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFBBC"))) PPC_WEAK_FUNC(sub_82BEFBBC);
PPC_FUNC_IMPL(__imp__sub_82BEFBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFBC0"))) PPC_WEAK_FUNC(sub_82BEFBC0);
PPC_FUNC_IMPL(__imp__sub_82BEFBC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be5178
	sub_82BE5178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFBC4"))) PPC_WEAK_FUNC(sub_82BEFBC4);
PPC_FUNC_IMPL(__imp__sub_82BEFBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFBC8"))) PPC_WEAK_FUNC(sub_82BEFBC8);
PPC_FUNC_IMPL(__imp__sub_82BEFBC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be51e0
	sub_82BE51E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFBCC"))) PPC_WEAK_FUNC(sub_82BEFBCC);
PPC_FUNC_IMPL(__imp__sub_82BEFBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFBD0"))) PPC_WEAK_FUNC(sub_82BEFBD0);
PPC_FUNC_IMPL(__imp__sub_82BEFBD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be5250
	sub_82BE5250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFBD4"))) PPC_WEAK_FUNC(sub_82BEFBD4);
PPC_FUNC_IMPL(__imp__sub_82BEFBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFBD8"))) PPC_WEAK_FUNC(sub_82BEFBD8);
PPC_FUNC_IMPL(__imp__sub_82BEFBD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be52c0
	sub_82BE52C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFBDC"))) PPC_WEAK_FUNC(sub_82BEFBDC);
PPC_FUNC_IMPL(__imp__sub_82BEFBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFBE0"))) PPC_WEAK_FUNC(sub_82BEFBE0);
PPC_FUNC_IMPL(__imp__sub_82BEFBE0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bdb6c8
	sub_82BDB6C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFBE8"))) PPC_WEAK_FUNC(sub_82BEFBE8);
PPC_FUNC_IMPL(__imp__sub_82BEFBE8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82befc30
	if (ctx.cr6.eq) goto loc_82BEFC30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befc30
	if (ctx.cr6.eq) goto loc_82BEFC30;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befc30
	if (ctx.cr6.eq) goto loc_82BEFC30;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befc30
	if (ctx.cr6.eq) goto loc_82BEFC30;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befc30
	if (ctx.cr6.eq) goto loc_82BEFC30;
	// lbz r3,74(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// blr 
	return;
loc_82BEFC30:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFC38"))) PPC_WEAK_FUNC(sub_82BEFC38);
PPC_FUNC_IMPL(__imp__sub_82BEFC38) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82befc80
	if (ctx.cr6.eq) goto loc_82BEFC80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befc80
	if (ctx.cr6.eq) goto loc_82BEFC80;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82befc80
	if (ctx.cr6.eq) goto loc_82BEFC80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befc80
	if (ctx.cr6.eq) goto loc_82BEFC80;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befc80
	if (ctx.cr6.eq) goto loc_82BEFC80;
	// lhz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// blr 
	return;
loc_82BEFC80:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFC88"))) PPC_WEAK_FUNC(sub_82BEFC88);
PPC_FUNC_IMPL(__imp__sub_82BEFC88) {
	PPC_FUNC_PROLOGUE();
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,11
	ctx.r6.s64 = 11;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82be53d0
	sub_82BE53D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFC98"))) PPC_WEAK_FUNC(sub_82BEFC98);
PPC_FUNC_IMPL(__imp__sub_82BEFC98) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82be53d0
	sub_82BE53D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFCA0"))) PPC_WEAK_FUNC(sub_82BEFCA0);
PPC_FUNC_IMPL(__imp__sub_82BEFCA0) {
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
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82bfdcf8
	sub_82BFDCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFCE8"))) PPC_WEAK_FUNC(sub_82BEFCE8);
PPC_FUNC_IMPL(__imp__sub_82BEFCE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFCEC"))) PPC_WEAK_FUNC(sub_82BEFCEC);
PPC_FUNC_IMPL(__imp__sub_82BEFCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFCF0"))) PPC_WEAK_FUNC(sub_82BEFCF0);
PPC_FUNC_IMPL(__imp__sub_82BEFCF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be5698
	sub_82BE5698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFCF4"))) PPC_WEAK_FUNC(sub_82BEFCF4);
PPC_FUNC_IMPL(__imp__sub_82BEFCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFCF8"))) PPC_WEAK_FUNC(sub_82BEFCF8);
PPC_FUNC_IMPL(__imp__sub_82BEFCF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be57b0
	sub_82BE57B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFCFC"))) PPC_WEAK_FUNC(sub_82BEFCFC);
PPC_FUNC_IMPL(__imp__sub_82BEFCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFD00"))) PPC_WEAK_FUNC(sub_82BEFD00);
PPC_FUNC_IMPL(__imp__sub_82BEFD00) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be5840
	sub_82BE5840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFD04"))) PPC_WEAK_FUNC(sub_82BEFD04);
PPC_FUNC_IMPL(__imp__sub_82BEFD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFD08"))) PPC_WEAK_FUNC(sub_82BEFD08);
PPC_FUNC_IMPL(__imp__sub_82BEFD08) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82be5910
	sub_82BE5910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFD10"))) PPC_WEAK_FUNC(sub_82BEFD10);
PPC_FUNC_IMPL(__imp__sub_82BEFD10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be59d0
	sub_82BE59D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFD14"))) PPC_WEAK_FUNC(sub_82BEFD14);
PPC_FUNC_IMPL(__imp__sub_82BEFD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFD18"))) PPC_WEAK_FUNC(sub_82BEFD18);
PPC_FUNC_IMPL(__imp__sub_82BEFD18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,13312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13312);
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stw r8,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFD34"))) PPC_WEAK_FUNC(sub_82BEFD34);
PPC_FUNC_IMPL(__imp__sub_82BEFD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFD38"))) PPC_WEAK_FUNC(sub_82BEFD38);
PPC_FUNC_IMPL(__imp__sub_82BEFD38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,13312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13312);
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stw r8,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFD54"))) PPC_WEAK_FUNC(sub_82BEFD54);
PPC_FUNC_IMPL(__imp__sub_82BEFD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFD58"))) PPC_WEAK_FUNC(sub_82BEFD58);
PPC_FUNC_IMPL(__imp__sub_82BEFD58) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r9,13312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x827f95a8
	ctx.lr = 0x82BEFD7C;
	sub_827F95A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82befdb0
	if (ctx.cr6.eq) goto loc_82BEFDB0;
	// lwz r11,448(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 448);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82befdb0
	if (ctx.cr6.eq) goto loc_82BEFDB0;
	// li r7,70
	ctx.r7.s64 = 70;
	// li r5,70
	ctx.r5.s64 = 70;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x827f93d0
	ctx.lr = 0x82BEFDA0;
	sub_827F93D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BEFDB0:
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

__attribute__((alias("__imp__sub_82BEFDC4"))) PPC_WEAK_FUNC(sub_82BEFDC4);
PPC_FUNC_IMPL(__imp__sub_82BEFDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFDC8"))) PPC_WEAK_FUNC(sub_82BEFDC8);
PPC_FUNC_IMPL(__imp__sub_82BEFDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,13312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r10,452(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 452);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82befe30
	if (ctx.cr6.eq) goto loc_82BEFE30;
	// lwz r11,448(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82befe30
	if (ctx.cr6.lt) goto loc_82BEFE30;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82befe30
	if (!ctx.cr6.lt) goto loc_82BEFE30;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82befe30
	if (ctx.cr6.eq) goto loc_82BEFE30;
	// ld r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 72);
	// cmpdi cr6,r10,-1
	ctx.cr6.compare<int64_t>(ctx.r10.s64, -1, ctx.xer);
	// beq cr6,0x82befe30
	if (ctx.cr6.eq) goto loc_82BEFE30;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82befe30
	if (ctx.cr6.eq) goto loc_82BEFE30;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x827f94b8
	sub_827F94B8(ctx, base);
	return;
loc_82BEFE30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFE38"))) PPC_WEAK_FUNC(sub_82BEFE38);
PPC_FUNC_IMPL(__imp__sub_82BEFE38) {
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
	// lwz r11,13928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13928);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82befe6c
	if (!ctx.cr6.eq) goto loc_82BEFE6C;
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
loc_82BEFE6C:
	// bl 0x82bdc190
	ctx.lr = 0x82BEFE70;
	sub_82BDC190(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFE94"))) PPC_WEAK_FUNC(sub_82BEFE94);
PPC_FUNC_IMPL(__imp__sub_82BEFE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFE98"))) PPC_WEAK_FUNC(sub_82BEFE98);
PPC_FUNC_IMPL(__imp__sub_82BEFE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r3,448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// b 0x8222ee50
	sub_8222EE50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFEB4"))) PPC_WEAK_FUNC(sub_82BEFEB4);
PPC_FUNC_IMPL(__imp__sub_82BEFEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFEB8"))) PPC_WEAK_FUNC(sub_82BEFEB8);
PPC_FUNC_IMPL(__imp__sub_82BEFEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13928);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82befee0
	if (ctx.cr6.eq) goto loc_82BEFEE0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// beq cr6,0x82befee0
	if (ctx.cr6.eq) goto loc_82BEFEE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_82BEFEE0:
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFEE8"))) PPC_WEAK_FUNC(sub_82BEFEE8);
PPC_FUNC_IMPL(__imp__sub_82BEFEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82beff04
	if (ctx.cr6.eq) goto loc_82BEFF04;
	// lwz r3,448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// blr 
	return;
loc_82BEFF04:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFF0C"))) PPC_WEAK_FUNC(sub_82BEFF0C);
PPC_FUNC_IMPL(__imp__sub_82BEFF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFF10"))) PPC_WEAK_FUNC(sub_82BEFF10);
PPC_FUNC_IMPL(__imp__sub_82BEFF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,13420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFF28"))) PPC_WEAK_FUNC(sub_82BEFF28);
PPC_FUNC_IMPL(__imp__sub_82BEFF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,13420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFF48"))) PPC_WEAK_FUNC(sub_82BEFF48);
PPC_FUNC_IMPL(__imp__sub_82BEFF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFF58"))) PPC_WEAK_FUNC(sub_82BEFF58);
PPC_FUNC_IMPL(__imp__sub_82BEFF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// b 0x827f9298
	sub_827F9298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFF64"))) PPC_WEAK_FUNC(sub_82BEFF64);
PPC_FUNC_IMPL(__imp__sub_82BEFF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFF68"))) PPC_WEAK_FUNC(sub_82BEFF68);
PPC_FUNC_IMPL(__imp__sub_82BEFF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// b 0x827f95a8
	sub_827F95A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFF74"))) PPC_WEAK_FUNC(sub_82BEFF74);
PPC_FUNC_IMPL(__imp__sub_82BEFF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFF78"))) PPC_WEAK_FUNC(sub_82BEFF78);
PPC_FUNC_IMPL(__imp__sub_82BEFF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,13420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BEFF94"))) PPC_WEAK_FUNC(sub_82BEFF94);
PPC_FUNC_IMPL(__imp__sub_82BEFF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFF98"))) PPC_WEAK_FUNC(sub_82BEFF98);
PPC_FUNC_IMPL(__imp__sub_82BEFF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,70
	ctx.r7.s64 = 70;
	// li r5,70
	ctx.r5.s64 = 70;
	// lwz r3,13312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// b 0x827f9bc0
	sub_827F9BC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFFB4"))) PPC_WEAK_FUNC(sub_82BEFFB4);
PPC_FUNC_IMPL(__imp__sub_82BEFFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFFB8"))) PPC_WEAK_FUNC(sub_82BEFFB8);
PPC_FUNC_IMPL(__imp__sub_82BEFFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r4,25576
	ctx.r4.s64 = 1676148736;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,52
	ctx.r6.s64 = 52;
	// ori r4,r4,16383
	ctx.r4.u64 = ctx.r4.u64 | 16383;
	// lwz r3,13312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// b 0x827f9a40
	sub_827F9A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFFD4"))) PPC_WEAK_FUNC(sub_82BEFFD4);
PPC_FUNC_IMPL(__imp__sub_82BEFFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFFD8"))) PPC_WEAK_FUNC(sub_82BEFFD8);
PPC_FUNC_IMPL(__imp__sub_82BEFFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// b 0x827f9c60
	sub_827F9C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFFE4"))) PPC_WEAK_FUNC(sub_82BEFFE4);
PPC_FUNC_IMPL(__imp__sub_82BEFFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BEFFE8"))) PPC_WEAK_FUNC(sub_82BEFFE8);
PPC_FUNC_IMPL(__imp__sub_82BEFFE8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8277f040
	sub_8277F040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BEFFF0"))) PPC_WEAK_FUNC(sub_82BEFFF0);
PPC_FUNC_IMPL(__imp__sub_82BEFFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// b 0x827ee728
	sub_827EE728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0000"))) PPC_WEAK_FUNC(sub_82BF0000);
PPC_FUNC_IMPL(__imp__sub_82BF0000) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-32065
	ctx.r12.s64 = -2101411840;
	// addi r12,r12,24
	ctx.r12.s64 = ctx.r12.s64 + 24;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BF0018"))) PPC_WEAK_FUNC(sub_82BF0018);
PPC_FUNC_IMPL(__imp__sub_82BF0018) {
	PPC_FUNC_PROLOGUE();
	// lwz r21,64(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r21,76(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r21,88(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r21,112(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r21,112(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r21,112(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r21,112(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r21,112(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r21,112(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r21,100(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// b 0x827f4a60
	sub_827F4A60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF004C"))) PPC_WEAK_FUNC(sub_82BF004C);
PPC_FUNC_IMPL(__imp__sub_82BF004C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// b 0x827f4c20
	sub_827F4C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0058"))) PPC_WEAK_FUNC(sub_82BF0058);
PPC_FUNC_IMPL(__imp__sub_82BF0058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// b 0x827f4b40
	sub_827F4B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0064"))) PPC_WEAK_FUNC(sub_82BF0064);
PPC_FUNC_IMPL(__imp__sub_82BF0064) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// b 0x827f4980
	sub_827F4980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0070"))) PPC_WEAK_FUNC(sub_82BF0070);
PPC_FUNC_IMPL(__imp__sub_82BF0070) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0078"))) PPC_WEAK_FUNC(sub_82BF0078);
PPC_FUNC_IMPL(__imp__sub_82BF0078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,1256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// b 0x82ba03e0
	sub_82BA03E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0088"))) PPC_WEAK_FUNC(sub_82BF0088);
PPC_FUNC_IMPL(__imp__sub_82BF0088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BF0090;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// bne cr6,0x82bf00d4
	if (!ctx.cr6.eq) goto loc_82BF00D4;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r10,-17544
	ctx.r3.s64 = ctx.r10.s64 + -17544;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82218a80
	ctx.lr = 0x82BF00D0;
	sub_82218A80(ctx, base);
	// b 0x82bf00e8
	goto loc_82BF00E8;
loc_82BF00D4:
	// cmplwi cr6,r31,48
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 48, ctx.xer);
	// bge cr6,0x82bf00e8
	if (!ctx.cr6.lt) goto loc_82BF00E8;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-17544
	ctx.r9.s64 = ctx.r10.s64 + -17544;
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_82BF00E8:
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29280
	ctx.r11.s64 = ctx.r11.s64 + 29280;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf0124
	if (ctx.cr6.eq) goto loc_82BF0124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r29.s64;
	// li r4,1
	ctx.r4.s64 = 1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF0124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BF0124:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf014c
	if (ctx.cr6.eq) goto loc_82BF014C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF014C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BF014C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0158"))) PPC_WEAK_FUNC(sub_82BF0158);
PPC_FUNC_IMPL(__imp__sub_82BF0158) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b8bb40
	sub_82B8BB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF015C"))) PPC_WEAK_FUNC(sub_82BF015C);
PPC_FUNC_IMPL(__imp__sub_82BF015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0160"))) PPC_WEAK_FUNC(sub_82BF0160);
PPC_FUNC_IMPL(__imp__sub_82BF0160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0170"))) PPC_WEAK_FUNC(sub_82BF0170);
PPC_FUNC_IMPL(__imp__sub_82BF0170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// b 0x82bc8dc8
	sub_82BC8DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF017C"))) PPC_WEAK_FUNC(sub_82BF017C);
PPC_FUNC_IMPL(__imp__sub_82BF017C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0180"))) PPC_WEAK_FUNC(sub_82BF0180);
PPC_FUNC_IMPL(__imp__sub_82BF0180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bf019c
	if (!ctx.cr6.eq) goto loc_82BF019C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BF019C:
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf01b0
	if (ctx.cr6.eq) goto loc_82BF01B0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
loc_82BF01B0:
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF01B8"))) PPC_WEAK_FUNC(sub_82BF01B8);
PPC_FUNC_IMPL(__imp__sub_82BF01B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82bf01d4
	if (!ctx.cr6.eq) goto loc_82BF01D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BF01D4:
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF01E4"))) PPC_WEAK_FUNC(sub_82BF01E4);
PPC_FUNC_IMPL(__imp__sub_82BF01E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF01E8"))) PPC_WEAK_FUNC(sub_82BF01E8);
PPC_FUNC_IMPL(__imp__sub_82BF01E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f1,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF01F8"))) PPC_WEAK_FUNC(sub_82BF01F8);
PPC_FUNC_IMPL(__imp__sub_82BF01F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f11,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// bge cr6,0x82bf021c
	if (!ctx.cr6.lt) goto loc_82BF021C;
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// blr 
	return;
loc_82BF021C:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f1,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f13,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// beq cr6,0x82bf023c
	if (ctx.cr6.eq) goto loc_82BF023C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f12,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82bf0240
	goto loc_82BF0240;
loc_82BF023C:
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
loc_82BF0240:
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// addi r10,r11,26208
	ctx.r10.s64 = ctx.r11.s64 + 26208;
	// lfs f0,26208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26208);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f11,26208(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26208, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f0,f10,f0,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0274"))) PPC_WEAK_FUNC(sub_82BF0274);
PPC_FUNC_IMPL(__imp__sub_82BF0274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0278"))) PPC_WEAK_FUNC(sub_82BF0278);
PPC_FUNC_IMPL(__imp__sub_82BF0278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF02A4"))) PPC_WEAK_FUNC(sub_82BF02A4);
PPC_FUNC_IMPL(__imp__sub_82BF02A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF02A8"))) PPC_WEAK_FUNC(sub_82BF02A8);
PPC_FUNC_IMPL(__imp__sub_82BF02A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f1,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF02B8"))) PPC_WEAK_FUNC(sub_82BF02B8);
PPC_FUNC_IMPL(__imp__sub_82BF02B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f12,29760(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82bf02e0
	if (ctx.cr6.eq) goto loc_82BF02E0;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82bf02e4
	goto loc_82BF02E4;
loc_82BF02E0:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82BF02E4:
	// fmuls f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fdivs f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0300"))) PPC_WEAK_FUNC(sub_82BF0300);
PPC_FUNC_IMPL(__imp__sub_82BF0300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82bf0324
	if (ctx.cr6.eq) goto loc_82BF0324;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
loc_82BF0324:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0334"))) PPC_WEAK_FUNC(sub_82BF0334);
PPC_FUNC_IMPL(__imp__sub_82BF0334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0338"))) PPC_WEAK_FUNC(sub_82BF0338);
PPC_FUNC_IMPL(__imp__sub_82BF0338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-30728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF036C"))) PPC_WEAK_FUNC(sub_82BF036C);
PPC_FUNC_IMPL(__imp__sub_82BF036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0370"))) PPC_WEAK_FUNC(sub_82BF0370);
PPC_FUNC_IMPL(__imp__sub_82BF0370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-30728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF03A4"))) PPC_WEAK_FUNC(sub_82BF03A4);
PPC_FUNC_IMPL(__imp__sub_82BF03A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF03A8"))) PPC_WEAK_FUNC(sub_82BF03A8);
PPC_FUNC_IMPL(__imp__sub_82BF03A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-30728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmsubs f10,f11,f0,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f1.f64));
	// fcmpu cr6,f10,f2
	ctx.cr6.compare(ctx.f10.f64, ctx.f2.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF03EC"))) PPC_WEAK_FUNC(sub_82BF03EC);
PPC_FUNC_IMPL(__imp__sub_82BF03EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF03F0"))) PPC_WEAK_FUNC(sub_82BF03F0);
PPC_FUNC_IMPL(__imp__sub_82BF03F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-30728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmsubs f10,f11,f0,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f1.f64));
	// fcmpu cr6,f10,f2
	ctx.cr6.compare(ctx.f10.f64, ctx.f2.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0434"))) PPC_WEAK_FUNC(sub_82BF0434);
PPC_FUNC_IMPL(__imp__sub_82BF0434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0438"))) PPC_WEAK_FUNC(sub_82BF0438);
PPC_FUNC_IMPL(__imp__sub_82BF0438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,40
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 40, ctx.xer);
	// ble cr6,0x82bf0480
	if (!ctx.cr6.gt) goto loc_82BF0480;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,-12444
	ctx.r6.s64 = ctx.r11.s64 + -12444;
	// addi r4,r10,-12620
	ctx.r4.s64 = ctx.r10.s64 + -12620;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82219e28
	ctx.lr = 0x82BF046C;
	sub_82219E28(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF0480:
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r31,r1,652
	ctx.r31.s64 = ctx.r1.s64 + 652;
	// stw r11,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r11.u32);
	// bl 0x8212c880
	ctx.lr = 0x82BF0490;
	sub_8212C880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8212caa8
	ctx.lr = 0x82BF04A0;
	sub_8212CAA8(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8212c880
	ctx.lr = 0x82BF04AC;
	sub_8212C880(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf04c4
	if (ctx.cr6.eq) goto loc_82BF04C4;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bf04c8
	if (ctx.cr6.eq) goto loc_82BF04C8;
loc_82BF04C4:
	// twi 31,r0,22
loc_82BF04C8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bf055c
	if (ctx.cr6.eq) goto loc_82BF055C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf04e0
	if (!ctx.cr6.eq) goto loc_82BF04E0;
	// twi 31,r0,22
loc_82BF04E0:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf04f0
	if (!ctx.cr6.eq) goto loc_82BF04F0;
	// twi 31,r0,22
loc_82BF04F0:
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lfs f0,-30728(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82bf0528
	if (ctx.cr6.eq) goto loc_82BF0528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,12492(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// ld r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// ld r6,112(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 112);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82bf0544
	goto loc_82BF0544;
loc_82BF0528:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,12492(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// ld r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// ld r6,104(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 104);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82BF0544:
	// fcfid f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bne cr6,0x82bf0558
	if (!ctx.cr6.eq) goto loc_82BF0558;
	// twi 31,r0,22
loc_82BF0558:
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_82BF055C:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0570"))) PPC_WEAK_FUNC(sub_82BF0570);
PPC_FUNC_IMPL(__imp__sub_82BF0570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,40
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 40, ctx.xer);
	// ble cr6,0x82bf05c0
	if (!ctx.cr6.gt) goto loc_82BF05C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,-12492
	ctx.r6.s64 = ctx.r11.s64 + -12492;
	// addi r4,r10,-12620
	ctx.r4.s64 = ctx.r10.s64 + -12620;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82219e28
	ctx.lr = 0x82BF05A4;
	sub_82219E28(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f1,-30784(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30784);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF05C0:
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r31,r1,652
	ctx.r31.s64 = ctx.r1.s64 + 652;
	// stw r11,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r11.u32);
	// bl 0x8212c880
	ctx.lr = 0x82BF05D0;
	sub_8212C880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8212caa8
	ctx.lr = 0x82BF05E0;
	sub_8212CAA8(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x8212c880
	ctx.lr = 0x82BF05EC;
	sub_8212C880(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf0604
	if (ctx.cr6.eq) goto loc_82BF0604;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bf0608
	if (ctx.cr6.eq) goto loc_82BF0608;
loc_82BF0604:
	// twi 31,r0,22
loc_82BF0608:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bf06e4
	if (ctx.cr6.eq) goto loc_82BF06E4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf0620
	if (!ctx.cr6.eq) goto loc_82BF0620;
	// twi 31,r0,22
loc_82BF0620:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0630
	if (!ctx.cr6.eq) goto loc_82BF0630;
	// twi 31,r0,22
loc_82BF0630:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82bf06e4
	if (!ctx.cr6.eq) goto loc_82BF06E4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0650
	if (!ctx.cr6.eq) goto loc_82BF0650;
	// twi 31,r0,22
loc_82BF0650:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0660
	if (!ctx.cr6.eq) goto loc_82BF0660;
	// twi 31,r0,22
loc_82BF0660:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f13,-30728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// beq cr6,0x82bf06b0
	if (ctx.cr6.eq) goto loc_82BF06B0;
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
	// fnmsubs f1,f10,f13,f0
	ctx.f1.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF06B0:
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r8,104(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fnmsubs f1,f10,f13,f0
	ctx.f1.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BF06E4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f1,-30784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30784);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0700"))) PPC_WEAK_FUNC(sub_82BF0700);
PPC_FUNC_IMPL(__imp__sub_82BF0700) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// lfs f0,-30728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lfs f29,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f29.f64 = double(temp.f32);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r5,112(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f30,f31,f1
	ctx.f30.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// bl 0x8212c880
	ctx.lr = 0x82BF07A4;
	sub_8212C880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8212c950
	ctx.lr = 0x82BF07B4;
	sub_8212C950(ctx, base);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lbz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82bf082c
	if (!ctx.cr6.eq) goto loc_82BF082C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf07dc
	if (!ctx.cr6.eq) goto loc_82BF07DC;
	// twi 31,r0,22
loc_82BF07DC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bf07ec
	if (!ctx.cr6.eq) goto loc_82BF07EC;
	// twi 31,r0,22
loc_82BF07EC:
	// stfs f30,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bf0800
	if (!ctx.cr6.eq) goto loc_82BF0800;
	// twi 31,r0,22
loc_82BF0800:
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bf0814
	if (!ctx.cr6.eq) goto loc_82BF0814;
	// twi 31,r0,22
loc_82BF0814:
	// stfs f29,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0828
	if (!ctx.cr6.eq) goto loc_82BF0828;
	// twi 31,r0,22
loc_82BF0828:
	// stfs f31,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_82BF082C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_82BF0850"))) PPC_WEAK_FUNC(sub_82BF0850);
PPC_FUNC_IMPL(__imp__sub_82BF0850) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,40
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 40, ctx.xer);
	// ble cr6,0x82bf0898
	if (!ctx.cr6.gt) goto loc_82BF0898;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,-12540
	ctx.r6.s64 = ctx.r11.s64 + -12540;
	// addi r4,r10,-12620
	ctx.r4.s64 = ctx.r10.s64 + -12620;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82219e28
	ctx.lr = 0x82BF0894;
	sub_82219E28(ctx, base);
	// b 0x82bf09a8
	goto loc_82BF09A8;
loc_82BF0898:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// add r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// lfs f0,-30728(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30728);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lfs f29,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f29.f64 = double(temp.f32);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f30,f31,f1
	ctx.f30.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// bl 0x8212c880
	ctx.lr = 0x82BF0920;
	sub_8212C880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8212c950
	ctx.lr = 0x82BF0930;
	sub_8212C950(ctx, base);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lbz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bf09a8
	if (!ctx.cr6.eq) goto loc_82BF09A8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf0958
	if (!ctx.cr6.eq) goto loc_82BF0958;
	// twi 31,r0,22
loc_82BF0958:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bf0968
	if (!ctx.cr6.eq) goto loc_82BF0968;
	// twi 31,r0,22
loc_82BF0968:
	// stfs f30,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bf097c
	if (!ctx.cr6.eq) goto loc_82BF097C;
	// twi 31,r0,22
loc_82BF097C:
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bf0990
	if (!ctx.cr6.eq) goto loc_82BF0990;
	// twi 31,r0,22
loc_82BF0990:
	// stfs f31,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf09a4
	if (!ctx.cr6.eq) goto loc_82BF09A4;
	// twi 31,r0,22
loc_82BF09A4:
	// stfs f29,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_82BF09A8:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_82BF09CC"))) PPC_WEAK_FUNC(sub_82BF09CC);
PPC_FUNC_IMPL(__imp__sub_82BF09CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF09D0"))) PPC_WEAK_FUNC(sub_82BF09D0);
PPC_FUNC_IMPL(__imp__sub_82BF09D0) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8212c880
	ctx.lr = 0x82BF09F4;
	sub_8212C880(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f29,-30784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30784);
	ctx.f29.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-30728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30728);
	ctx.f30.f64 = double(temp.f32);
loc_82BF0A28:
	// bl 0x8212c880
	ctx.lr = 0x82BF0A2C;
	sub_8212C880(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf0a44
	if (ctx.cr6.eq) goto loc_82BF0A44;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bf0a48
	if (ctx.cr6.eq) goto loc_82BF0A48;
loc_82BF0A44:
	// twi 31,r0,22
loc_82BF0A48:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bf0ba4
	if (ctx.cr6.eq) goto loc_82BF0BA4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf0a60
	if (!ctx.cr6.eq) goto loc_82BF0A60;
	// twi 31,r0,22
loc_82BF0A60:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0a70
	if (!ctx.cr6.eq) goto loc_82BF0A70;
	// twi 31,r0,22
loc_82BF0A70:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0a84
	if (!ctx.cr6.eq) goto loc_82BF0A84;
	// twi 31,r0,22
loc_82BF0A84:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,12492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12492);
	// beq cr6,0x82bf0aac
	if (ctx.cr6.eq) goto loc_82BF0AAC;
	// ld r7,40(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 40);
	// ld r6,112(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 112);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82bf0ac0
	goto loc_82BF0AC0;
loc_82BF0AAC:
	// ld r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 48);
	// ld r6,104(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 104);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82BF0AC0:
	// fcfid f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f30
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// bne cr6,0x82bf0ad8
	if (!ctx.cr6.eq) goto loc_82BF0AD8;
	// twi 31,r0,22
loc_82BF0AD8:
	// lfs f12,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82bf0b08
	if (!ctx.cr6.gt) goto loc_82BF0B08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82130d78
	ctx.lr = 0x82BF0AF0;
	sub_82130D78(ctx, base);
	// bl 0x8212c880
	ctx.lr = 0x82BF0AF4;
	sub_8212C880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82131378
	ctx.lr = 0x82BF0B04;
	sub_82131378(ctx, base);
	// b 0x82bf0a28
	goto loc_82BF0A28;
loc_82BF0B08:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82bf0b24
	if (!ctx.cr6.eq) goto loc_82BF0B24;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0b20
	if (!ctx.cr6.eq) goto loc_82BF0B20;
	// twi 31,r0,22
loc_82BF0B20:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
loc_82BF0B24:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82bf0b78
	if (!ctx.cr6.lt) goto loc_82BF0B78;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82bf0b5c
	if (ctx.cr6.eq) goto loc_82BF0B5C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82130d78
	ctx.lr = 0x82BF0B44;
	sub_82130D78(ctx, base);
	// bl 0x8212c880
	ctx.lr = 0x82BF0B48;
	sub_8212C880(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82131378
	ctx.lr = 0x82BF0B58;
	sub_82131378(ctx, base);
	// b 0x82bf0a28
	goto loc_82BF0A28;
loc_82BF0B5C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0b68
	if (!ctx.cr6.eq) goto loc_82BF0B68;
	// twi 31,r0,22
loc_82BF0B68:
	// stfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82130d78
	ctx.lr = 0x82BF0B74;
	sub_82130D78(ctx, base);
	// b 0x82bf0a28
	goto loc_82BF0A28;
loc_82BF0B78:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82bf0b98
	if (!ctx.cr6.gt) goto loc_82BF0B98;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82bf0b98
	if (ctx.cr6.eq) goto loc_82BF0B98;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bf0b94
	if (!ctx.cr6.eq) goto loc_82BF0B94;
	// twi 31,r0,22
loc_82BF0B94:
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_82BF0B98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82130d78
	ctx.lr = 0x82BF0BA0;
	sub_82130D78(ctx, base);
	// b 0x82bf0a28
	goto loc_82BF0A28;
loc_82BF0BA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

__attribute__((alias("__imp__sub_82BF0BC8"))) PPC_WEAK_FUNC(sub_82BF0BC8);
PPC_FUNC_IMPL(__imp__sub_82BF0BC8) {
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
	// bl 0x8212c880
	ctx.lr = 0x82BF0BDC;
	sub_8212C880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212cb70
	ctx.lr = 0x82BF0BEC;
	sub_8212CB70(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82BF0C20"))) PPC_WEAK_FUNC(sub_82BF0C20);
PPC_FUNC_IMPL(__imp__sub_82BF0C20) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r10,r3,21
	ctx.r10.s64 = ctx.r3.s64 + 21;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// stwx r4,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0C54"))) PPC_WEAK_FUNC(sub_82BF0C54);
PPC_FUNC_IMPL(__imp__sub_82BF0C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0C58"))) PPC_WEAK_FUNC(sub_82BF0C58);
PPC_FUNC_IMPL(__imp__sub_82BF0C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// stw r3,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0C7C"))) PPC_WEAK_FUNC(sub_82BF0C7C);
PPC_FUNC_IMPL(__imp__sub_82BF0C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0C80"))) PPC_WEAK_FUNC(sub_82BF0C80);
PPC_FUNC_IMPL(__imp__sub_82BF0C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// stw r3,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r3.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0CA4"))) PPC_WEAK_FUNC(sub_82BF0CA4);
PPC_FUNC_IMPL(__imp__sub_82BF0CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0CA8"))) PPC_WEAK_FUNC(sub_82BF0CA8);
PPC_FUNC_IMPL(__imp__sub_82BF0CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BF0CC4"))) PPC_WEAK_FUNC(sub_82BF0CC4);
PPC_FUNC_IMPL(__imp__sub_82BF0CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0CC8"))) PPC_WEAK_FUNC(sub_82BF0CC8);
PPC_FUNC_IMPL(__imp__sub_82BF0CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BF0CE4"))) PPC_WEAK_FUNC(sub_82BF0CE4);
PPC_FUNC_IMPL(__imp__sub_82BF0CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0CE8"))) PPC_WEAK_FUNC(sub_82BF0CE8);
PPC_FUNC_IMPL(__imp__sub_82BF0CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF0CFC"))) PPC_WEAK_FUNC(sub_82BF0CFC);
PPC_FUNC_IMPL(__imp__sub_82BF0CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0D00"))) PPC_WEAK_FUNC(sub_82BF0D00);
PPC_FUNC_IMPL(__imp__sub_82BF0D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BF0D1C"))) PPC_WEAK_FUNC(sub_82BF0D1C);
PPC_FUNC_IMPL(__imp__sub_82BF0D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0D20"))) PPC_WEAK_FUNC(sub_82BF0D20);
PPC_FUNC_IMPL(__imp__sub_82BF0D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1048
	sub_827A1048(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0D30"))) PPC_WEAK_FUNC(sub_82BF0D30);
PPC_FUNC_IMPL(__imp__sub_82BF0D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a10d8
	sub_827A10D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0D40"))) PPC_WEAK_FUNC(sub_82BF0D40);
PPC_FUNC_IMPL(__imp__sub_82BF0D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,243
	ctx.r6.s64 = 243;
	// li r5,143
	ctx.r5.s64 = 143;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1168
	sub_827A1168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0D58"))) PPC_WEAK_FUNC(sub_82BF0D58);
PPC_FUNC_IMPL(__imp__sub_82BF0D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,43
	ctx.r5.s64 = 43;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a11f0
	sub_827A11F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0D6C"))) PPC_WEAK_FUNC(sub_82BF0D6C);
PPC_FUNC_IMPL(__imp__sub_82BF0D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0D70"))) PPC_WEAK_FUNC(sub_82BF0D70);
PPC_FUNC_IMPL(__imp__sub_82BF0D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1270
	sub_827A1270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0D84"))) PPC_WEAK_FUNC(sub_82BF0D84);
PPC_FUNC_IMPL(__imp__sub_82BF0D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0D88"))) PPC_WEAK_FUNC(sub_82BF0D88);
PPC_FUNC_IMPL(__imp__sub_82BF0D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1300
	sub_827A1300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0D9C"))) PPC_WEAK_FUNC(sub_82BF0D9C);
PPC_FUNC_IMPL(__imp__sub_82BF0D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0DA0"))) PPC_WEAK_FUNC(sub_82BF0DA0);
PPC_FUNC_IMPL(__imp__sub_82BF0DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1390
	sub_827A1390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0DB4"))) PPC_WEAK_FUNC(sub_82BF0DB4);
PPC_FUNC_IMPL(__imp__sub_82BF0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0DB8"))) PPC_WEAK_FUNC(sub_82BF0DB8);
PPC_FUNC_IMPL(__imp__sub_82BF0DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1468
	sub_827A1468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0DCC"))) PPC_WEAK_FUNC(sub_82BF0DCC);
PPC_FUNC_IMPL(__imp__sub_82BF0DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0DD0"))) PPC_WEAK_FUNC(sub_82BF0DD0);
PPC_FUNC_IMPL(__imp__sub_82BF0DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1540
	sub_827A1540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0DE4"))) PPC_WEAK_FUNC(sub_82BF0DE4);
PPC_FUNC_IMPL(__imp__sub_82BF0DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0DE8"))) PPC_WEAK_FUNC(sub_82BF0DE8);
PPC_FUNC_IMPL(__imp__sub_82BF0DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a15c0
	sub_827A15C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0DF8"))) PPC_WEAK_FUNC(sub_82BF0DF8);
PPC_FUNC_IMPL(__imp__sub_82BF0DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1658
	sub_827A1658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0E08"))) PPC_WEAK_FUNC(sub_82BF0E08);
PPC_FUNC_IMPL(__imp__sub_82BF0E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1b48
	sub_827A1B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0E18"))) PPC_WEAK_FUNC(sub_82BF0E18);
PPC_FUNC_IMPL(__imp__sub_82BF0E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1be0
	sub_827A1BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0E28"))) PPC_WEAK_FUNC(sub_82BF0E28);
PPC_FUNC_IMPL(__imp__sub_82BF0E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1c80
	sub_827A1C80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0E38"))) PPC_WEAK_FUNC(sub_82BF0E38);
PPC_FUNC_IMPL(__imp__sub_82BF0E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a16d8
	sub_827A16D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0E50"))) PPC_WEAK_FUNC(sub_82BF0E50);
PPC_FUNC_IMPL(__imp__sub_82BF0E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1760
	sub_827A1760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0E64"))) PPC_WEAK_FUNC(sub_82BF0E64);
PPC_FUNC_IMPL(__imp__sub_82BF0E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0E68"))) PPC_WEAK_FUNC(sub_82BF0E68);
PPC_FUNC_IMPL(__imp__sub_82BF0E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a17e0
	sub_827A17E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0E7C"))) PPC_WEAK_FUNC(sub_82BF0E7C);
PPC_FUNC_IMPL(__imp__sub_82BF0E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0E80"))) PPC_WEAK_FUNC(sub_82BF0E80);
PPC_FUNC_IMPL(__imp__sub_82BF0E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1870
	sub_827A1870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0E94"))) PPC_WEAK_FUNC(sub_82BF0E94);
PPC_FUNC_IMPL(__imp__sub_82BF0E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0E98"))) PPC_WEAK_FUNC(sub_82BF0E98);
PPC_FUNC_IMPL(__imp__sub_82BF0E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1900
	sub_827A1900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0EAC"))) PPC_WEAK_FUNC(sub_82BF0EAC);
PPC_FUNC_IMPL(__imp__sub_82BF0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0EB0"))) PPC_WEAK_FUNC(sub_82BF0EB0);
PPC_FUNC_IMPL(__imp__sub_82BF0EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1990
	sub_827A1990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0EC4"))) PPC_WEAK_FUNC(sub_82BF0EC4);
PPC_FUNC_IMPL(__imp__sub_82BF0EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0EC8"))) PPC_WEAK_FUNC(sub_82BF0EC8);
PPC_FUNC_IMPL(__imp__sub_82BF0EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1a50
	sub_827A1A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0ED8"))) PPC_WEAK_FUNC(sub_82BF0ED8);
PPC_FUNC_IMPL(__imp__sub_82BF0ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a1ad0
	sub_827A1AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0EE4"))) PPC_WEAK_FUNC(sub_82BF0EE4);
PPC_FUNC_IMPL(__imp__sub_82BF0EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0EE8"))) PPC_WEAK_FUNC(sub_82BF0EE8);
PPC_FUNC_IMPL(__imp__sub_82BF0EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a2038
	sub_827A2038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0EF8"))) PPC_WEAK_FUNC(sub_82BF0EF8);
PPC_FUNC_IMPL(__imp__sub_82BF0EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a21e0
	sub_827A21E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0F08"))) PPC_WEAK_FUNC(sub_82BF0F08);
PPC_FUNC_IMPL(__imp__sub_82BF0F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a2468
	sub_827A2468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0F18"))) PPC_WEAK_FUNC(sub_82BF0F18);
PPC_FUNC_IMPL(__imp__sub_82BF0F18) {
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
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82751db0
	ctx.lr = 0x82BF0F3C;
	sub_82751DB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82BF0F60"))) PPC_WEAK_FUNC(sub_82BF0F60);
PPC_FUNC_IMPL(__imp__sub_82BF0F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a29a8
	sub_827A29A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0F70"))) PPC_WEAK_FUNC(sub_82BF0F70);
PPC_FUNC_IMPL(__imp__sub_82BF0F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a2aa0
	sub_827A2AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0F80"))) PPC_WEAK_FUNC(sub_82BF0F80);
PPC_FUNC_IMPL(__imp__sub_82BF0F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a2b98
	sub_827A2B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0F90"))) PPC_WEAK_FUNC(sub_82BF0F90);
PPC_FUNC_IMPL(__imp__sub_82BF0F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BF0F98;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-7504
	ctx.r5.s64 = ctx.r10.s64 + -7504;
	// lwz r31,13772(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82219f10
	ctx.lr = 0x82BF0FC4;
	sub_82219F10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,116(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82120268
	ctx.lr = 0x82BF0FD4;
	sub_82120268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF0FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF0FF4"))) PPC_WEAK_FUNC(sub_82BF0FF4);
PPC_FUNC_IMPL(__imp__sub_82BF0FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF0FF8"))) PPC_WEAK_FUNC(sub_82BF0FF8);
PPC_FUNC_IMPL(__imp__sub_82BF0FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BF1000;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-7448
	ctx.r5.s64 = ctx.r10.s64 + -7448;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r31,13772(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82219f10
	ctx.lr = 0x82BF1028;
	sub_82219F10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,116(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82120268
	ctx.lr = 0x82BF1038;
	sub_82120268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF1050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1058"))) PPC_WEAK_FUNC(sub_82BF1058);
PPC_FUNC_IMPL(__imp__sub_82BF1058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BF1060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r10,-7400
	ctx.r3.s64 = ctx.r10.s64 + -7400;
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// lwz r29,116(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82120268
	ctx.lr = 0x82BF1084;
	sub_82120268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF109C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF10A4"))) PPC_WEAK_FUNC(sub_82BF10A4);
PPC_FUNC_IMPL(__imp__sub_82BF10A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF10A8"))) PPC_WEAK_FUNC(sub_82BF10A8);
PPC_FUNC_IMPL(__imp__sub_82BF10A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a2dd0
	sub_827A2DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF10B4"))) PPC_WEAK_FUNC(sub_82BF10B4);
PPC_FUNC_IMPL(__imp__sub_82BF10B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF10B8"))) PPC_WEAK_FUNC(sub_82BF10B8);
PPC_FUNC_IMPL(__imp__sub_82BF10B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a2e28
	sub_827A2E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF10C4"))) PPC_WEAK_FUNC(sub_82BF10C4);
PPC_FUNC_IMPL(__imp__sub_82BF10C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF10C8"))) PPC_WEAK_FUNC(sub_82BF10C8);
PPC_FUNC_IMPL(__imp__sub_82BF10C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a2e80
	sub_827A2E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF10D4"))) PPC_WEAK_FUNC(sub_82BF10D4);
PPC_FUNC_IMPL(__imp__sub_82BF10D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF10D8"))) PPC_WEAK_FUNC(sub_82BF10D8);
PPC_FUNC_IMPL(__imp__sub_82BF10D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a2ed8
	sub_827A2ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF10E4"))) PPC_WEAK_FUNC(sub_82BF10E4);
PPC_FUNC_IMPL(__imp__sub_82BF10E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF10E8"))) PPC_WEAK_FUNC(sub_82BF10E8);
PPC_FUNC_IMPL(__imp__sub_82BF10E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a2f30
	sub_827A2F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF10F4"))) PPC_WEAK_FUNC(sub_82BF10F4);
PPC_FUNC_IMPL(__imp__sub_82BF10F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF10F8"))) PPC_WEAK_FUNC(sub_82BF10F8);
PPC_FUNC_IMPL(__imp__sub_82BF10F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a2f88
	sub_827A2F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF110C"))) PPC_WEAK_FUNC(sub_82BF110C);
PPC_FUNC_IMPL(__imp__sub_82BF110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1110"))) PPC_WEAK_FUNC(sub_82BF1110);
PPC_FUNC_IMPL(__imp__sub_82BF1110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a3040
	sub_827A3040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1120"))) PPC_WEAK_FUNC(sub_82BF1120);
PPC_FUNC_IMPL(__imp__sub_82BF1120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a30a8
	sub_827A30A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1130"))) PPC_WEAK_FUNC(sub_82BF1130);
PPC_FUNC_IMPL(__imp__sub_82BF1130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BF1138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r10,-7152
	ctx.r3.s64 = ctx.r10.s64 + -7152;
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// lwz r29,116(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82120268
	ctx.lr = 0x82BF115C;
	sub_82120268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF1174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF117C"))) PPC_WEAK_FUNC(sub_82BF117C);
PPC_FUNC_IMPL(__imp__sub_82BF117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1180"))) PPC_WEAK_FUNC(sub_82BF1180);
PPC_FUNC_IMPL(__imp__sub_82BF1180) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r10,-10316
	ctx.r3.s64 = ctx.r10.s64 + -10316;
	// lwz r11,13772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// lwz r31,116(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82120268
	ctx.lr = 0x82BF11B0;
	sub_82120268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF11C4;
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

__attribute__((alias("__imp__sub_82BF11DC"))) PPC_WEAK_FUNC(sub_82BF11DC);
PPC_FUNC_IMPL(__imp__sub_82BF11DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF11E0"))) PPC_WEAK_FUNC(sub_82BF11E0);
PPC_FUNC_IMPL(__imp__sub_82BF11E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a33b8
	sub_827A33B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF11F8"))) PPC_WEAK_FUNC(sub_82BF11F8);
PPC_FUNC_IMPL(__imp__sub_82BF11F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a3430
	sub_827A3430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF120C"))) PPC_WEAK_FUNC(sub_82BF120C);
PPC_FUNC_IMPL(__imp__sub_82BF120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1210"))) PPC_WEAK_FUNC(sub_82BF1210);
PPC_FUNC_IMPL(__imp__sub_82BF1210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a34a0
	sub_827A34A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1220"))) PPC_WEAK_FUNC(sub_82BF1220);
PPC_FUNC_IMPL(__imp__sub_82BF1220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// b 0x827a3598
	sub_827A3598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1234"))) PPC_WEAK_FUNC(sub_82BF1234);
PPC_FUNC_IMPL(__imp__sub_82BF1234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1238"))) PPC_WEAK_FUNC(sub_82BF1238);
PPC_FUNC_IMPL(__imp__sub_82BF1238) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bf1314
	if (ctx.cr6.eq) goto loc_82BF1314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1314
	if (ctx.cr6.eq) goto loc_82BF1314;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1314
	if (ctx.cr6.eq) goto loc_82BF1314;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1314
	if (ctx.cr6.eq) goto loc_82BF1314;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bf1314
	if (ctx.cr6.eq) goto loc_82BF1314;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1314
	if (ctx.cr6.eq) goto loc_82BF1314;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1314
	if (ctx.cr6.eq) goto loc_82BF1314;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1314
	if (ctx.cr6.eq) goto loc_82BF1314;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF12E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF1314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BF1314:
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

__attribute__((alias("__imp__sub_82BF132C"))) PPC_WEAK_FUNC(sub_82BF132C);
PPC_FUNC_IMPL(__imp__sub_82BF132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1330"))) PPC_WEAK_FUNC(sub_82BF1330);
PPC_FUNC_IMPL(__imp__sub_82BF1330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82BF1338;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,12480(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x82BF135C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r31,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r9,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc5990
	ctx.lr = 0x82BF1378;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82BF1384;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82bf13d8
	if (ctx.cr6.eq) goto loc_82BF13D8;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82bf13d8
	if (ctx.cr6.eq) goto loc_82BF13D8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf13b8
	if (ctx.cr6.eq) goto loc_82BF13B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF13B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BF13B8:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BF13D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BF13D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF13E0"))) PPC_WEAK_FUNC(sub_82BF13E0);
PPC_FUNC_IMPL(__imp__sub_82BF13E0) {
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
	// rlwinm r10,r4,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1428
	if (ctx.cr6.eq) goto loc_82BF1428;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// bl 0x82bcd500
	ctx.lr = 0x82BF140C;
	sub_82BCD500(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82bf14b4
	if (!ctx.cr6.eq) goto loc_82BF14B4;
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
loc_82BF1428:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf14b4
	if (ctx.cr6.eq) goto loc_82BF14B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bf14b4
	if (ctx.cr6.eq) goto loc_82BF14B4;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf14b4
	if (ctx.cr6.eq) goto loc_82BF14B4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf14b4
	if (ctx.cr6.eq) goto loc_82BF14B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82bf14b0
	if (!ctx.cr6.eq) goto loc_82BF14B0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// divw r7,r4,r9
	ctx.r7.s32 = ctx.r4.s32 / ctx.r9.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r5,r7,r9
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
	// andc r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r3,-1
	// twllei r9,0
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BF14B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82BF14B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF14C4"))) PPC_WEAK_FUNC(sub_82BF14C4);
PPC_FUNC_IMPL(__imp__sub_82BF14C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF14C8"))) PPC_WEAK_FUNC(sub_82BF14C8);
PPC_FUNC_IMPL(__imp__sub_82BF14C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BF14D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1504
	if (ctx.cr6.eq) goto loc_82BF1504;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1504
	if (ctx.cr6.eq) goto loc_82BF1504;
	// bl 0x82bdf2a0
	ctx.lr = 0x82BF14FC;
	sub_82BDF2A0(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82beb878
	ctx.lr = 0x82BF1504;
	sub_82BEB878(ctx, base);
loc_82BF1504:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bf13e0
	ctx.lr = 0x82BF1514;
	sub_82BF13E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1574
	if (ctx.cr6.eq) goto loc_82BF1574;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bb6c98
	ctx.lr = 0x82BF152C;
	sub_82BB6C98(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1574
	if (ctx.cr6.eq) goto loc_82BF1574;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82bf1574
	if (!ctx.cr6.eq) goto loc_82BF1574;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1574
	if (ctx.cr6.eq) goto loc_82BF1574;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BF1574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BF1574:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF157C"))) PPC_WEAK_FUNC(sub_82BF157C);
PPC_FUNC_IMPL(__imp__sub_82BF157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1580"))) PPC_WEAK_FUNC(sub_82BF1580);
PPC_FUNC_IMPL(__imp__sub_82BF1580) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf15c0
	if (ctx.cr6.eq) goto loc_82BF15C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf15c0
	if (ctx.cr6.eq) goto loc_82BF15C0;
	// bl 0x82bdf2a0
	ctx.lr = 0x82BF15B8;
	sub_82BDF2A0(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82beb878
	ctx.lr = 0x82BF15C0;
	sub_82BEB878(ctx, base);
loc_82BF15C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bf13e0
	ctx.lr = 0x82BF15D0;
	sub_82BF13E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1600
	if (ctx.cr6.eq) goto loc_82BF1600;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bb6c98
	ctx.lr = 0x82BF15E8;
	sub_82BB6C98(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1600
	if (ctx.cr6.eq) goto loc_82BF1600;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r10,r30,11,16,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0xF800) | (ctx.r10.u64 & 0xFFFFFFFFFFFF07FF);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82BF1600:
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

__attribute__((alias("__imp__sub_82BF1618"))) PPC_WEAK_FUNC(sub_82BF1618);
PPC_FUNC_IMPL(__imp__sub_82BF1618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BF1620;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf16c8
	if (ctx.cr6.eq) goto loc_82BF16C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf165c
	if (ctx.cr6.eq) goto loc_82BF165C;
	// bl 0x82bdf2a0
	ctx.lr = 0x82BF1654;
	sub_82BDF2A0(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82beb878
	ctx.lr = 0x82BF165C;
	sub_82BEB878(ctx, base);
loc_82BF165C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf16c8
	if (ctx.cr6.eq) goto loc_82BF16C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bf13e0
	ctx.lr = 0x82BF166C;
	sub_82BF13E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf16c8
	if (ctx.cr6.eq) goto loc_82BF16C8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bb6c98
	ctx.lr = 0x82BF1684;
	sub_82BB6C98(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf16c8
	if (ctx.cr6.eq) goto loc_82BF16C8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// bne cr6,0x82bf16b8
	if (!ctx.cr6.eq) goto loc_82BF16B8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// rlwimi r11,r9,0,0,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFE000) | (ctx.r11.u64 & 0xFFFFFFFF00001FFF);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82BF16B8:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// rlwimi r11,r9,0,0,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFE000) | (ctx.r11.u64 & 0xFFFFFFFF00001FFF);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_82BF16C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF16D0"))) PPC_WEAK_FUNC(sub_82BF16D0);
PPC_FUNC_IMPL(__imp__sub_82BF16D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82bf14c8
	sub_82BF14C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF16E4"))) PPC_WEAK_FUNC(sub_82BF16E4);
PPC_FUNC_IMPL(__imp__sub_82BF16E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF16E8"))) PPC_WEAK_FUNC(sub_82BF16E8);
PPC_FUNC_IMPL(__imp__sub_82BF16E8) {
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
	// beq cr6,0x82bf1720
	if (ctx.cr6.eq) goto loc_82BF1720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf171c
	if (!ctx.cr6.eq) goto loc_82BF171C;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1720
	if (ctx.cr6.eq) goto loc_82BF1720;
	// bl 0x82bdf2a0
	ctx.lr = 0x82BF171C;
	sub_82BDF2A0(ctx, base);
loc_82BF171C:
	// bl 0x82bb71c0
	ctx.lr = 0x82BF1720;
	sub_82BB71C0(ctx, base);
loc_82BF1720:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1730"))) PPC_WEAK_FUNC(sub_82BF1730);
PPC_FUNC_IMPL(__imp__sub_82BF1730) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1738"))) PPC_WEAK_FUNC(sub_82BF1738);
PPC_FUNC_IMPL(__imp__sub_82BF1738) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82bf1764
	if (ctx.cr6.lt) goto loc_82BF1764;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x82bf1764
	if (!ctx.cr6.lt) goto loc_82BF1764;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mulli r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 * 208;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// blr 
	return;
loc_82BF1764:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF176C"))) PPC_WEAK_FUNC(sub_82BF176C);
PPC_FUNC_IMPL(__imp__sub_82BF176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1770"))) PPC_WEAK_FUNC(sub_82BF1770);
PPC_FUNC_IMPL(__imp__sub_82BF1770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82bf17f8
	if (ctx.cr6.lt) goto loc_82BF17F8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x82bf17f8
	if (!ctx.cr6.lt) goto loc_82BF17F8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x82bf17f8
	if (ctx.cr6.gt) goto loc_82BF17F8;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mulli r11,r3,208
	ctx.r11.s64 = ctx.r3.s64 * 208;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-3548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3548);
	ctx.f13.f64 = double(temp.f32);
	// lbz r7,88(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 88);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x82bf17f8
	if (ctx.cr6.gt) goto loc_82BF17F8;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82BF17F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1800"))) PPC_WEAK_FUNC(sub_82BF1800);
PPC_FUNC_IMPL(__imp__sub_82BF1800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mulli r10,r3,208
	ctx.r10.s64 = ctx.r3.s64 * 208;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1838"))) PPC_WEAK_FUNC(sub_82BF1838);
PPC_FUNC_IMPL(__imp__sub_82BF1838) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,12704(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12704);
	// bl 0x82bbe3e8
	ctx.lr = 0x82BF1860;
	sub_82BBE3E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1894
	if (ctx.cr6.eq) goto loc_82BF1894;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1894
	if (ctx.cr6.eq) goto loc_82BF1894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF1888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12704(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12704);
	// bl 0x82bbdf50
	ctx.lr = 0x82BF1894;
	sub_82BBDF50(ctx, base);
loc_82BF1894:
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

__attribute__((alias("__imp__sub_82BF18AC"))) PPC_WEAK_FUNC(sub_82BF18AC);
PPC_FUNC_IMPL(__imp__sub_82BF18AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF18B0"))) PPC_WEAK_FUNC(sub_82BF18B0);
PPC_FUNC_IMPL(__imp__sub_82BF18B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BF18B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r9,r11,-12788
	ctx.r9.s64 = ctx.r11.s64 + -12788;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
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
	ctx.lr = 0x82BF18F8;
	sub_82BCACB0(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// lwz r3,12704(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12704);
	// bl 0x82bbe3e8
	ctx.lr = 0x82BF1908;
	sub_82BBE3E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1934
	if (ctx.cr6.eq) goto loc_82BF1934;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1934
	if (ctx.cr6.eq) goto loc_82BF1934;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF1934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BF1934:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF193C"))) PPC_WEAK_FUNC(sub_82BF193C);
PPC_FUNC_IMPL(__imp__sub_82BF193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1940"))) PPC_WEAK_FUNC(sub_82BF1940);
PPC_FUNC_IMPL(__imp__sub_82BF1940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82BF1948;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r9,r11,-12840
	ctx.r9.s64 = ctx.r11.s64 + -12840;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
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
	ctx.lr = 0x82BF1988;
	sub_82BCACB0(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// lwz r3,12704(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12704);
	// bl 0x82bbe3e8
	ctx.lr = 0x82BF1998;
	sub_82BBE3E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf19c4
	if (ctx.cr6.eq) goto loc_82BF19C4;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf19c4
	if (ctx.cr6.eq) goto loc_82BF19C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF19C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BF19C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF19CC"))) PPC_WEAK_FUNC(sub_82BF19CC);
PPC_FUNC_IMPL(__imp__sub_82BF19CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF19D0"))) PPC_WEAK_FUNC(sub_82BF19D0);
PPC_FUNC_IMPL(__imp__sub_82BF19D0) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// bl 0x82bbe5b0
	ctx.lr = 0x82BF1A00;
	sub_82BBE5B0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82BF1A30"))) PPC_WEAK_FUNC(sub_82BF1A30);
PPC_FUNC_IMPL(__imp__sub_82BF1A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// b 0x82bbe630
	sub_82BBE630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1A48"))) PPC_WEAK_FUNC(sub_82BF1A48);
PPC_FUNC_IMPL(__imp__sub_82BF1A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82bf1a68
	if (!ctx.cr6.gt) goto loc_82BF1A68;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BF1A68:
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82bbe4a0
	sub_82BBE4A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1A74"))) PPC_WEAK_FUNC(sub_82BF1A74);
PPC_FUNC_IMPL(__imp__sub_82BF1A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1A78"))) PPC_WEAK_FUNC(sub_82BF1A78);
PPC_FUNC_IMPL(__imp__sub_82BF1A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82bf1a98
	if (!ctx.cr6.gt) goto loc_82BF1A98;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BF1A98:
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82bbe528
	sub_82BBE528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1AA4"))) PPC_WEAK_FUNC(sub_82BF1AA4);
PPC_FUNC_IMPL(__imp__sub_82BF1AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1AA8"))) PPC_WEAK_FUNC(sub_82BF1AA8);
PPC_FUNC_IMPL(__imp__sub_82BF1AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82bf1ac8
	if (!ctx.cr6.gt) goto loc_82BF1AC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BF1AC8:
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82bbe6b0
	sub_82BBE6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1AD4"))) PPC_WEAK_FUNC(sub_82BF1AD4);
PPC_FUNC_IMPL(__imp__sub_82BF1AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1AD8"))) PPC_WEAK_FUNC(sub_82BF1AD8);
PPC_FUNC_IMPL(__imp__sub_82BF1AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,12704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// b 0x82bbe718
	sub_82BBE718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1AEC"))) PPC_WEAK_FUNC(sub_82BF1AEC);
PPC_FUNC_IMPL(__imp__sub_82BF1AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1AF0"))) PPC_WEAK_FUNC(sub_82BF1AF0);
PPC_FUNC_IMPL(__imp__sub_82BF1AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// b 0x82becdf0
	sub_82BECDF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1AFC"))) PPC_WEAK_FUNC(sub_82BF1AFC);
PPC_FUNC_IMPL(__imp__sub_82BF1AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1B00"))) PPC_WEAK_FUNC(sub_82BF1B00);
PPC_FUNC_IMPL(__imp__sub_82BF1B00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf1b0c
	if (!ctx.cr6.eq) goto loc_82BF1B0C;
	// blr 
	return;
loc_82BF1B0C:
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1B14"))) PPC_WEAK_FUNC(sub_82BF1B14);
PPC_FUNC_IMPL(__imp__sub_82BF1B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1B18"))) PPC_WEAK_FUNC(sub_82BF1B18);
PPC_FUNC_IMPL(__imp__sub_82BF1B18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf1b24
	if (!ctx.cr6.eq) goto loc_82BF1B24;
	// blr 
	return;
loc_82BF1B24:
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1B2C"))) PPC_WEAK_FUNC(sub_82BF1B2C);
PPC_FUNC_IMPL(__imp__sub_82BF1B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1B30"))) PPC_WEAK_FUNC(sub_82BF1B30);
PPC_FUNC_IMPL(__imp__sub_82BF1B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,13416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1B44"))) PPC_WEAK_FUNC(sub_82BF1B44);
PPC_FUNC_IMPL(__imp__sub_82BF1B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1B48"))) PPC_WEAK_FUNC(sub_82BF1B48);
PPC_FUNC_IMPL(__imp__sub_82BF1B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,13416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1B5C"))) PPC_WEAK_FUNC(sub_82BF1B5C);
PPC_FUNC_IMPL(__imp__sub_82BF1B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1B60"))) PPC_WEAK_FUNC(sub_82BF1B60);
PPC_FUNC_IMPL(__imp__sub_82BF1B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// b 0x82becee0
	sub_82BECEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1B70"))) PPC_WEAK_FUNC(sub_82BF1B70);
PPC_FUNC_IMPL(__imp__sub_82BF1B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82be44a0
	sub_82BE44A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BF1B84"))) PPC_WEAK_FUNC(sub_82BF1B84);
PPC_FUNC_IMPL(__imp__sub_82BF1B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1B88"))) PPC_WEAK_FUNC(sub_82BF1B88);
PPC_FUNC_IMPL(__imp__sub_82BF1B88) {
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
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1BA4;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf1bc0
	if (!ctx.cr6.eq) goto loc_82BF1BC0;
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
loc_82BF1BC0:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bgt cr6,0x82bf1bd8
	if (ctx.cr6.gt) goto loc_82BF1BD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BF1BD8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x82bf1be8
	if (!ctx.cr6.lt) goto loc_82BF1BE8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BF1BE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1BF8"))) PPC_WEAK_FUNC(sub_82BF1BF8);
PPC_FUNC_IMPL(__imp__sub_82BF1BF8) {
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
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1C14;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf1c2c
	if (!ctx.cr6.eq) goto loc_82BF1C2C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BF1C2C:
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1C40"))) PPC_WEAK_FUNC(sub_82BF1C40);
PPC_FUNC_IMPL(__imp__sub_82BF1C40) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1C64;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1c78
	if (ctx.cr6.eq) goto loc_82BF1C78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc3a0
	ctx.lr = 0x82BF1C78;
	sub_827CC3A0(ctx, base);
loc_82BF1C78:
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

__attribute__((alias("__imp__sub_82BF1C8C"))) PPC_WEAK_FUNC(sub_82BF1C8C);
PPC_FUNC_IMPL(__imp__sub_82BF1C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1C90"))) PPC_WEAK_FUNC(sub_82BF1C90);
PPC_FUNC_IMPL(__imp__sub_82BF1C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1CB4;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1cc8
	if (ctx.cr6.eq) goto loc_82BF1CC8;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x827cc408
	ctx.lr = 0x82BF1CC8;
	sub_827CC408(ctx, base);
loc_82BF1CC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1CDC"))) PPC_WEAK_FUNC(sub_82BF1CDC);
PPC_FUNC_IMPL(__imp__sub_82BF1CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1CE0"))) PPC_WEAK_FUNC(sub_82BF1CE0);
PPC_FUNC_IMPL(__imp__sub_82BF1CE0) {
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
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1CFC;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1d14
	if (ctx.cr6.eq) goto loc_82BF1D14;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// oris r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 1073741824;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
loc_82BF1D14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1D24"))) PPC_WEAK_FUNC(sub_82BF1D24);
PPC_FUNC_IMPL(__imp__sub_82BF1D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1D28"))) PPC_WEAK_FUNC(sub_82BF1D28);
PPC_FUNC_IMPL(__imp__sub_82BF1D28) {
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
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1D44;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bf1d5c
	if (!ctx.cr6.eq) goto loc_82BF1D5C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BF1D5C:
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
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

__attribute__((alias("__imp__sub_82BF1D74"))) PPC_WEAK_FUNC(sub_82BF1D74);
PPC_FUNC_IMPL(__imp__sub_82BF1D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1D78"))) PPC_WEAK_FUNC(sub_82BF1D78);
PPC_FUNC_IMPL(__imp__sub_82BF1D78) {
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
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1D94;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1da4
	if (ctx.cr6.eq) goto loc_82BF1DA4;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc5b8
	ctx.lr = 0x82BF1DA4;
	sub_827CC5B8(ctx, base);
loc_82BF1DA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1DB4"))) PPC_WEAK_FUNC(sub_82BF1DB4);
PPC_FUNC_IMPL(__imp__sub_82BF1DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1DB8"))) PPC_WEAK_FUNC(sub_82BF1DB8);
PPC_FUNC_IMPL(__imp__sub_82BF1DB8) {
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
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1DD4;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1e14
	if (ctx.cr6.eq) goto loc_82BF1E14;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// rlwinm r10,r9,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf1e14
	if (!ctx.cr6.eq) goto loc_82BF1E14;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1e14
	if (ctx.cr6.eq) goto loc_82BF1E14;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r10,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bf1e14
	if (ctx.cr6.eq) goto loc_82BF1E14;
	// oris r10,r9,32768
	ctx.r10.u64 = ctx.r9.u64 | 2147483648;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82BF1E14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1E24"))) PPC_WEAK_FUNC(sub_82BF1E24);
PPC_FUNC_IMPL(__imp__sub_82BF1E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1E28"))) PPC_WEAK_FUNC(sub_82BF1E28);
PPC_FUNC_IMPL(__imp__sub_82BF1E28) {
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
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1E44;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1e54
	if (ctx.cr6.eq) goto loc_82BF1E54;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82BF1E54;
	sub_827CC4E0(ctx, base);
loc_82BF1E54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1E64"))) PPC_WEAK_FUNC(sub_82BF1E64);
PPC_FUNC_IMPL(__imp__sub_82BF1E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1E68"))) PPC_WEAK_FUNC(sub_82BF1E68);
PPC_FUNC_IMPL(__imp__sub_82BF1E68) {
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
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1E84;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1ec4
	if (ctx.cr6.eq) goto loc_82BF1EC4;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// rlwinm r10,r9,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bf1ec4
	if (!ctx.cr6.eq) goto loc_82BF1EC4;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bf1ec4
	if (ctx.cr6.eq) goto loc_82BF1EC4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r10,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bf1ec4
	if (ctx.cr6.eq) goto loc_82BF1EC4;
	// oris r10,r9,32768
	ctx.r10.u64 = ctx.r9.u64 | 2147483648;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82BF1EC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1ED4"))) PPC_WEAK_FUNC(sub_82BF1ED4);
PPC_FUNC_IMPL(__imp__sub_82BF1ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BF1ED8"))) PPC_WEAK_FUNC(sub_82BF1ED8);
PPC_FUNC_IMPL(__imp__sub_82BF1ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1F04;
	sub_82BECEE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1f20
	if (ctx.cr6.eq) goto loc_82BF1F20;
	// stfs f31,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// stfs f30,44(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// bl 0x827cc098
	ctx.lr = 0x82BF1F20;
	sub_827CC098(ctx, base);
loc_82BF1F20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1F38"))) PPC_WEAK_FUNC(sub_82BF1F38);
PPC_FUNC_IMPL(__imp__sub_82BF1F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1F64;
	sub_82BECEE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bf1f80
	if (ctx.cr6.eq) goto loc_82BF1F80;
	// stfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// stfs f30,36(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// bl 0x827cc098
	ctx.lr = 0x82BF1F80;
	sub_827CC098(ctx, base);
loc_82BF1F80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1F98"))) PPC_WEAK_FUNC(sub_82BF1F98);
PPC_FUNC_IMPL(__imp__sub_82BF1F98) {
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
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82BF1FB4;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bf1fcc
	if (ctx.cr6.eq) goto loc_82BF1FCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BF1FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BF1FCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BF1FDC"))) PPC_WEAK_FUNC(sub_82BF1FDC);
PPC_FUNC_IMPL(__imp__sub_82BF1FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

