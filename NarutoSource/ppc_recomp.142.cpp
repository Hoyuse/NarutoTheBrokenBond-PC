#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828414AC"))) PPC_WEAK_FUNC(sub_828414AC);
PPC_FUNC_IMPL(__imp__sub_828414AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828414B0"))) PPC_WEAK_FUNC(sub_828414B0);
PPC_FUNC_IMPL(__imp__sub_828414B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828414C8"))) PPC_WEAK_FUNC(sub_828414C8);
PPC_FUNC_IMPL(__imp__sub_828414C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828414DC"))) PPC_WEAK_FUNC(sub_828414DC);
PPC_FUNC_IMPL(__imp__sub_828414DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828414E0"))) PPC_WEAK_FUNC(sub_828414E0);
PPC_FUNC_IMPL(__imp__sub_828414E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x828414fc
	if (!ctx.cr6.gt) goto loc_828414FC;
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// blt cr6,0x82841508
	if (ctx.cr6.lt) goto loc_82841508;
loc_828414FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82841508:
	// addi r10,r5,14
	ctx.r10.s64 = ctx.r5.s64 + 14;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284151C"))) PPC_WEAK_FUNC(sub_8284151C);
PPC_FUNC_IMPL(__imp__sub_8284151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841520"))) PPC_WEAK_FUNC(sub_82841520);
PPC_FUNC_IMPL(__imp__sub_82841520) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,232(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	// lwz r7,212(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// and r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 & ctx.r5.u64;
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

__attribute__((alias("__imp__sub_82841550"))) PPC_WEAK_FUNC(sub_82841550);
PPC_FUNC_IMPL(__imp__sub_82841550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8284156c
	if (ctx.cr6.lt) goto loc_8284156C;
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// blt cr6,0x82841578
	if (ctx.cr6.lt) goto loc_82841578;
loc_8284156C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82841578:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r5.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841588"))) PPC_WEAK_FUNC(sub_82841588);
PPC_FUNC_IMPL(__imp__sub_82841588) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,232(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	// and r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 & ctx.r5.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r3,r5,1
	ctx.r3.u64 = ctx.r5.u64 ^ 1;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828415B0"))) PPC_WEAK_FUNC(sub_828415B0);
PPC_FUNC_IMPL(__imp__sub_828415B0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,14
	ctx.r10.s64 = ctx.r4.s64 + 14;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stwx r9,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828415E0"))) PPC_WEAK_FUNC(sub_828415E0);
PPC_FUNC_IMPL(__imp__sub_828415E0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,14
	ctx.r10.s64 = ctx.r4.s64 + 14;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stwx r9,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841610"))) PPC_WEAK_FUNC(sub_82841610);
PPC_FUNC_IMPL(__imp__sub_82841610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,172(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841628"))) PPC_WEAK_FUNC(sub_82841628);
PPC_FUNC_IMPL(__imp__sub_82841628) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// and r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 & ctx.r4.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andc r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// beq cr6,0x82841664
	if (ctx.cr6.eq) goto loc_82841664;
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
loc_82841664:
	// stw r9,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284166C"))) PPC_WEAK_FUNC(sub_8284166C);
PPC_FUNC_IMPL(__imp__sub_8284166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841670"))) PPC_WEAK_FUNC(sub_82841670);
PPC_FUNC_IMPL(__imp__sub_82841670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,212(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// and r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 & ctx.r5.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r3,r5,1
	ctx.r3.u64 = ctx.r5.u64 ^ 1;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841698"))) PPC_WEAK_FUNC(sub_82841698);
PPC_FUNC_IMPL(__imp__sub_82841698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,232(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	// lwz r7,212(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// and r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 & ctx.r5.u64;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828416BC"))) PPC_WEAK_FUNC(sub_828416BC);
PPC_FUNC_IMPL(__imp__sub_828416BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828416C0"))) PPC_WEAK_FUNC(sub_828416C0);
PPC_FUNC_IMPL(__imp__sub_828416C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841700"))) PPC_WEAK_FUNC(sub_82841700);
PPC_FUNC_IMPL(__imp__sub_82841700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841740"))) PPC_WEAK_FUNC(sub_82841740);
PPC_FUNC_IMPL(__imp__sub_82841740) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,276(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 276);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841758"))) PPC_WEAK_FUNC(sub_82841758);
PPC_FUNC_IMPL(__imp__sub_82841758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 168, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284176C"))) PPC_WEAK_FUNC(sub_8284176C);
PPC_FUNC_IMPL(__imp__sub_8284176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841770"))) PPC_WEAK_FUNC(sub_82841770);
PPC_FUNC_IMPL(__imp__sub_82841770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,29200
	ctx.r11.s64 = ctx.r11.s64 + 29200;
loc_8284179C:
	// lwz r10,-21168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21168);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828417d0
	if (ctx.cr6.eq) goto loc_828417D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x828417d0
	if (ctx.cr6.lt) goto loc_828417D0;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x828417d0
	if (ctx.cr6.gt) goto loc_828417D0;
	// lwz r10,-27348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27348);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828417d0
	if (ctx.cr6.eq) goto loc_828417D0;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_828417D0:
	// lwz r10,-21164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21164);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82841804
	if (ctx.cr6.eq) goto loc_82841804;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x82841804
	if (ctx.cr6.lt) goto loc_82841804;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x82841804
	if (ctx.cr6.gt) goto loc_82841804;
	// lwz r10,-27344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27344);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82841804
	if (ctx.cr6.eq) goto loc_82841804;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841804:
	// lwz r10,-21160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21160);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82841838
	if (ctx.cr6.eq) goto loc_82841838;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x82841838
	if (ctx.cr6.lt) goto loc_82841838;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x82841838
	if (ctx.cr6.gt) goto loc_82841838;
	// lwz r10,-27340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27340);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82841838
	if (ctx.cr6.eq) goto loc_82841838;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841838:
	// lwz r10,-21156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21156);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8284186c
	if (ctx.cr6.eq) goto loc_8284186C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x8284186c
	if (ctx.cr6.lt) goto loc_8284186C;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x8284186c
	if (ctx.cr6.gt) goto loc_8284186C;
	// lwz r10,-27336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27336);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8284186c
	if (ctx.cr6.eq) goto loc_8284186C;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8284186C:
	// lwz r10,-21152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21152);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828418a0
	if (ctx.cr6.eq) goto loc_828418A0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x828418a0
	if (ctx.cr6.lt) goto loc_828418A0;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x828418a0
	if (ctx.cr6.gt) goto loc_828418A0;
	// lwz r10,-27332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27332);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828418a0
	if (ctx.cr6.eq) goto loc_828418A0;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_828418A0:
	// lwz r10,-21148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21148);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828418d4
	if (ctx.cr6.eq) goto loc_828418D4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x828418d4
	if (ctx.cr6.lt) goto loc_828418D4;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x828418d4
	if (ctx.cr6.gt) goto loc_828418D4;
	// lwz r10,-27328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828418d4
	if (ctx.cr6.eq) goto loc_828418D4;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_828418D4:
	// lwz r10,-21144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21144);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82841908
	if (ctx.cr6.eq) goto loc_82841908;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x82841908
	if (ctx.cr6.lt) goto loc_82841908;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x82841908
	if (ctx.cr6.gt) goto loc_82841908;
	// lwz r10,-27324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27324);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82841908
	if (ctx.cr6.eq) goto loc_82841908;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841908:
	// lwz r10,-21140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21140);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8284193c
	if (ctx.cr6.eq) goto loc_8284193C;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x8284193c
	if (ctx.cr6.lt) goto loc_8284193C;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x8284193c
	if (ctx.cr6.gt) goto loc_8284193C;
	// lwz r10,-27320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27320);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8284193c
	if (ctx.cr6.eq) goto loc_8284193C;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8284193C:
	// lwz r10,-21136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21136);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82841970
	if (ctx.cr6.eq) goto loc_82841970;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x82841970
	if (ctx.cr6.lt) goto loc_82841970;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x82841970
	if (ctx.cr6.gt) goto loc_82841970;
	// lwz r10,-27316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27316);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82841970
	if (ctx.cr6.eq) goto loc_82841970;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841970:
	// lwz r10,-21132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21132);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828419a4
	if (ctx.cr6.eq) goto loc_828419A4;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x828419a4
	if (ctx.cr6.lt) goto loc_828419A4;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bgt cr6,0x828419a4
	if (ctx.cr6.gt) goto loc_828419A4;
	// lwz r10,-27312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27312);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828419a4
	if (ctx.cr6.eq) goto loc_828419A4;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_828419A4:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bne 0x8284179c
	if (!ctx.cr0.eq) goto loc_8284179C;
	// stfs f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
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

__attribute__((alias("__imp__sub_828419D8"))) PPC_WEAK_FUNC(sub_828419D8);
PPC_FUNC_IMPL(__imp__sub_828419D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1080
	ctx.r11.s64 = ctx.r11.s64 + 1080;
loc_82841A04:
	// lwz r9,28120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28120);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841a30
	if (!ctx.cr6.eq) goto loc_82841A30;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82841a30
	if (!ctx.cr6.eq) goto loc_82841A30;
	// lwz r9,772(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82841a2c
	if (ctx.cr6.eq) goto loc_82841A2C;
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82841A2C:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841A30:
	// lwz r9,28124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28124);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841a5c
	if (!ctx.cr6.eq) goto loc_82841A5C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82841a5c
	if (!ctx.cr6.eq) goto loc_82841A5C;
	// lwz r9,776(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82841a58
	if (ctx.cr6.eq) goto loc_82841A58;
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82841A58:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841A5C:
	// lwz r9,28128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28128);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841a88
	if (!ctx.cr6.eq) goto loc_82841A88;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82841a88
	if (!ctx.cr6.eq) goto loc_82841A88;
	// lwz r9,780(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 780);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82841a84
	if (ctx.cr6.eq) goto loc_82841A84;
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82841A84:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841A88:
	// lwz r9,28132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28132);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841ab4
	if (!ctx.cr6.eq) goto loc_82841AB4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82841ab4
	if (!ctx.cr6.eq) goto loc_82841AB4;
	// lwz r9,784(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82841ab0
	if (ctx.cr6.eq) goto loc_82841AB0;
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82841AB0:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841AB4:
	// lwz r9,28136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28136);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841ae0
	if (!ctx.cr6.eq) goto loc_82841AE0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82841ae0
	if (!ctx.cr6.eq) goto loc_82841AE0;
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82841adc
	if (ctx.cr6.eq) goto loc_82841ADC;
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82841ADC:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841AE0:
	// lwz r9,28140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28140);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841b0c
	if (!ctx.cr6.eq) goto loc_82841B0C;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82841b0c
	if (!ctx.cr6.eq) goto loc_82841B0C;
	// lwz r9,792(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 792);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82841b08
	if (ctx.cr6.eq) goto loc_82841B08;
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82841B08:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841B0C:
	// lwz r9,28144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28144);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841b38
	if (!ctx.cr6.eq) goto loc_82841B38;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82841b38
	if (!ctx.cr6.eq) goto loc_82841B38;
	// lwz r9,796(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 796);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82841b34
	if (ctx.cr6.eq) goto loc_82841B34;
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82841B34:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841B38:
	// lwz r9,28148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28148);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841b64
	if (!ctx.cr6.eq) goto loc_82841B64;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82841b64
	if (!ctx.cr6.eq) goto loc_82841B64;
	// lwz r9,800(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82841b60
	if (ctx.cr6.eq) goto loc_82841B60;
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82841B60:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841B64:
	// lwz r9,28152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28152);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841b90
	if (!ctx.cr6.eq) goto loc_82841B90;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82841b90
	if (!ctx.cr6.eq) goto loc_82841B90;
	// lwz r9,804(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 804);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82841b8c
	if (ctx.cr6.eq) goto loc_82841B8C;
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82841B8C:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841B90:
	// lwz r9,28156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28156);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841bbc
	if (!ctx.cr6.eq) goto loc_82841BBC;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82841bbc
	if (!ctx.cr6.eq) goto loc_82841BBC;
	// lwz r9,808(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 808);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82841bb8
	if (ctx.cr6.eq) goto loc_82841BB8;
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_82841BB8:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841BBC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bne 0x82841a04
	if (!ctx.cr0.eq) goto loc_82841A04;
	// stfs f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
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

__attribute__((alias("__imp__sub_82841BF0"))) PPC_WEAK_FUNC(sub_82841BF0);
PPC_FUNC_IMPL(__imp__sub_82841BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82841c58
	if (ctx.cr6.eq) goto loc_82841C58;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r8,8032
	ctx.r11.s64 = ctx.r8.s64 + 8032;
loc_82841C10:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82841c28
	if (!ctx.cr6.eq) goto loc_82841C28;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82841c28
	if (!ctx.cr6.eq) goto loc_82841C28;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82841C28:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841c40
	if (!ctx.cr6.eq) goto loc_82841C40;
	// lwz r3,21168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21168);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82841c94
	if (ctx.cr6.eq) goto loc_82841C94;
loc_82841C40:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,150
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 150, ctx.xer);
	// blt cr6,0x82841c10
	if (ctx.cr6.lt) goto loc_82841C10;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82841c64
	if (!ctx.cr6.eq) goto loc_82841C64;
loc_82841C58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82841C64:
	// addi r9,r10,270
	ctx.r9.s64 = ctx.r10.s64 + 270;
	// addi r3,r10,7300
	ctx.r3.s64 = ctx.r10.s64 + 7300;
	// addi r11,r10,2008
	ctx.r11.s64 = ctx.r10.s64 + 2008;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
loc_82841C94:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841CA0"))) PPC_WEAK_FUNC(sub_82841CA0);
PPC_FUNC_IMPL(__imp__sub_82841CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82841cf4
	if (ctx.cr6.eq) goto loc_82841CF4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82841cf4
	if (ctx.cr6.lt) goto loc_82841CF4;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// bge cr6,0x82841cf4
	if (!ctx.cr6.lt) goto loc_82841CF4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,29200
	ctx.r11.s64 = ctx.r11.s64 + 29200;
loc_82841CCC:
	// lwz r9,-21168(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21168);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841ce4
	if (!ctx.cr6.eq) goto loc_82841CE4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82841d00
	if (ctx.cr6.eq) goto loc_82841D00;
loc_82841CE4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,150
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 150, ctx.xer);
	// blt cr6,0x82841ccc
	if (ctx.cr6.lt) goto loc_82841CCC;
loc_82841CF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82841D00:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841D0C"))) PPC_WEAK_FUNC(sub_82841D0C);
PPC_FUNC_IMPL(__imp__sub_82841D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841D10"))) PPC_WEAK_FUNC(sub_82841D10);
PPC_FUNC_IMPL(__imp__sub_82841D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r10,15
	ctx.r10.s64 = 15;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,29200
	ctx.r11.s64 = ctx.r11.s64 + 29200;
loc_82841D3C:
	// lwz r9,-21168(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21168);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82841d68
	if (ctx.cr6.eq) goto loc_82841D68;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841d68
	if (!ctx.cr6.eq) goto loc_82841D68;
	// lwz r9,-27348(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27348);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82841d68
	if (!ctx.cr6.eq) goto loc_82841D68;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841D68:
	// lwz r9,-21164(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21164);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82841d94
	if (ctx.cr6.eq) goto loc_82841D94;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841d94
	if (!ctx.cr6.eq) goto loc_82841D94;
	// lwz r9,-27344(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27344);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82841d94
	if (!ctx.cr6.eq) goto loc_82841D94;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841D94:
	// lwz r9,-21160(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21160);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82841dc0
	if (ctx.cr6.eq) goto loc_82841DC0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841dc0
	if (!ctx.cr6.eq) goto loc_82841DC0;
	// lwz r9,-27340(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27340);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82841dc0
	if (!ctx.cr6.eq) goto loc_82841DC0;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841DC0:
	// lwz r9,-21156(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21156);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82841dec
	if (ctx.cr6.eq) goto loc_82841DEC;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841dec
	if (!ctx.cr6.eq) goto loc_82841DEC;
	// lwz r9,-27336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27336);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82841dec
	if (!ctx.cr6.eq) goto loc_82841DEC;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841DEC:
	// lwz r9,-21152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21152);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82841e18
	if (ctx.cr6.eq) goto loc_82841E18;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841e18
	if (!ctx.cr6.eq) goto loc_82841E18;
	// lwz r9,-27332(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27332);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82841e18
	if (!ctx.cr6.eq) goto loc_82841E18;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841E18:
	// lwz r9,-21148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21148);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82841e44
	if (ctx.cr6.eq) goto loc_82841E44;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841e44
	if (!ctx.cr6.eq) goto loc_82841E44;
	// lwz r9,-27328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82841e44
	if (!ctx.cr6.eq) goto loc_82841E44;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841E44:
	// lwz r9,-21144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21144);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82841e70
	if (ctx.cr6.eq) goto loc_82841E70;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841e70
	if (!ctx.cr6.eq) goto loc_82841E70;
	// lwz r9,-27324(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27324);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82841e70
	if (!ctx.cr6.eq) goto loc_82841E70;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841E70:
	// lwz r9,-21140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21140);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82841e9c
	if (ctx.cr6.eq) goto loc_82841E9C;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841e9c
	if (!ctx.cr6.eq) goto loc_82841E9C;
	// lwz r9,-27320(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27320);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82841e9c
	if (!ctx.cr6.eq) goto loc_82841E9C;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841E9C:
	// lwz r9,-21136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21136);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82841ec8
	if (ctx.cr6.eq) goto loc_82841EC8;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841ec8
	if (!ctx.cr6.eq) goto loc_82841EC8;
	// lwz r9,-27316(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27316);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82841ec8
	if (!ctx.cr6.eq) goto loc_82841EC8;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841EC8:
	// lwz r9,-21132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21132);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82841ef4
	if (ctx.cr6.eq) goto loc_82841EF4;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841ef4
	if (!ctx.cr6.eq) goto loc_82841EF4;
	// lwz r9,-27312(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27312);
	// fadds f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82841ef4
	if (!ctx.cr6.eq) goto loc_82841EF4;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82841EF4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bne 0x82841d3c
	if (!ctx.cr0.eq) goto loc_82841D3C;
	// stfs f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
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

__attribute__((alias("__imp__sub_82841F28"))) PPC_WEAK_FUNC(sub_82841F28);
PPC_FUNC_IMPL(__imp__sub_82841F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82841f7c
	if (ctx.cr6.eq) goto loc_82841F7C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82841f7c
	if (ctx.cr6.lt) goto loc_82841F7C;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// bge cr6,0x82841f7c
	if (!ctx.cr6.lt) goto loc_82841F7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,29200
	ctx.r11.s64 = ctx.r9.s64 + 29200;
loc_82841F54:
	// lwz r8,-21168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21168);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82841f6c
	if (!ctx.cr6.eq) goto loc_82841F6C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82841f88
	if (ctx.cr6.eq) goto loc_82841F88;
loc_82841F6C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,150
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 150, ctx.xer);
	// blt cr6,0x82841f54
	if (ctx.cr6.lt) goto loc_82841F54;
loc_82841F7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82841F88:
	// addi r11,r10,463
	ctx.r11.s64 = ctx.r10.s64 + 463;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82841F9C"))) PPC_WEAK_FUNC(sub_82841F9C);
PPC_FUNC_IMPL(__imp__sub_82841F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82841FA0"))) PPC_WEAK_FUNC(sub_82841FA0);
PPC_FUNC_IMPL(__imp__sub_82841FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82841FA8;
	__savegprlr_25(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// ori r6,r9,42288
	ctx.r6.u64 = ctx.r9.u64 | 42288;
	// addi r7,r10,-10516
	ctx.r7.s64 = ctx.r10.s64 + -10516;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,24268
	ctx.r4.s64 = 24268;
	// addi r8,r8,-10504
	ctx.r8.s64 = ctx.r8.s64 + -10504;
	// li r3,6
	ctx.r3.s64 = 6;
	// li r31,24323
	ctx.r31.s64 = 24323;
	// li r30,5
	ctx.r30.s64 = 5;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r29,-32241
	ctx.r29.s64 = -2112946176;
	// addi r9,r11,23540
	ctx.r9.s64 = ctx.r11.s64 + 23540;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r27,-32241
	ctx.r27.s64 = -2112946176;
	// stw r7,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 952, ctx.r4.u32);
	// lfs f0,-29676(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -29676);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,19828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19828, ctx.r8.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stwx r30,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r30.u32);
	// lfs f13,29756(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 29756);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,22148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22148, ctx.r5.u32);
	// lfs f12,-30932(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -30932);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,20292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20292, ctx.r31.u32);
	// addi r8,r11,29800
	ctx.r8.s64 = ctx.r11.s64 + 29800;
	// stw r3,29052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29052, ctx.r3.u32);
	// li r31,25
	ctx.r31.s64 = 25;
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r4,440
	ctx.r7.s64 = ctx.r4.s64 * 440;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r7,r11,13988
	ctx.r7.s64 = ctx.r11.s64 + 13988;
	// li r30,1000
	ctx.r30.s64 = 1000;
	// li r28,2500
	ctx.r28.s64 = 2500;
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r5,440
	ctx.r6.s64 = ctx.r5.s64 * 440;
	// add r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r11,8920
	ctx.r6.s64 = ctx.r11.s64 + 8920;
	// li r27,12
	ctx.r27.s64 = 12;
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// li r25,24238
	ctx.r25.s64 = 24238;
	// stfs f13,16(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r5,r5,440
	ctx.r5.s64 = ctx.r5.s64 * 440;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stfs f12,20(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stw r10,23520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23520, ctx.r10.u32);
	// stw r10,20756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20756, ctx.r10.u32);
	// stw r29,2896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2896, ctx.r29.u32);
	// lwz r5,29804(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r9,r5,440
	ctx.r9.s64 = ctx.r5.s64 * 440;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r31.u32);
	// lwz r5,29804(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r9,r5,440
	ctx.r9.s64 = ctx.r5.s64 * 440;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
	// lwz r8,13992(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r9,r8,440
	ctx.r9.s64 = ctx.r8.s64 * 440;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r30,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r30.u32);
	// lwz r9,13992(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r9,r9,440
	ctx.r9.s64 = ctx.r9.s64 * 440;
	// add r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r28,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r28.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r7,8924(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r9,r7,440
	ctx.r9.s64 = ctx.r7.s64 * 440;
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// lwz r3,8924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r9,r3,440
	ctx.r9.s64 = ctx.r3.s64 * 440;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r27,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r27.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// ori r3,r8,42248
	ctx.r3.u64 = ctx.r8.u64 | 42248;
	// addi r5,r26,-10460
	ctx.r5.s64 = ctx.r26.s64 + -10460;
	// ori r8,r7,40388
	ctx.r8.u64 = ctx.r7.u64 | 40388;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// stw r5,448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 448, ctx.r5.u32);
	// addi r7,r6,-10444
	ctx.r7.s64 = ctx.r6.s64 + -10444;
	// stw r25,912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 912, ctx.r25.u32);
	// addi r9,r9,-30668
	ctx.r9.s64 = ctx.r9.s64 + -30668;
	// stw r7,19788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19788, ctx.r7.u32);
	// li r6,24357
	ctx.r6.s64 = 24357;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,23480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23480, ctx.r10.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r10,20716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20716, ctx.r10.u32);
	// li r31,31
	ctx.r31.s64 = 31;
	// stw r10,2856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2856, ctx.r10.u32);
	// stw r5,29012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29012, ctx.r5.u32);
	// li r30,10
	ctx.r30.s64 = 10;
	// stwx r31,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r31.u32);
	// addi r10,r11,2916
	ctx.r10.s64 = ctx.r11.s64 + 2916;
	// stw r6,20252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20252, ctx.r6.u32);
	// stwx r7,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r8,r6,400
	ctx.r8.s64 = ctx.r6.s64 * 400;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// lwz r3,2920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r11,r3,400
	ctx.r11.s64 = ctx.r3.s64 * 400;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284216C"))) PPC_WEAK_FUNC(sub_8284216C);
PPC_FUNC_IMPL(__imp__sub_8284216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842170"))) PPC_WEAK_FUNC(sub_82842170);
PPC_FUNC_IMPL(__imp__sub_82842170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x82842178;
	__savegprlr_17(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// ori r7,r10,42208
	ctx.r7.u64 = ctx.r10.u64 | 42208;
	// addi r6,r9,-10572
	ctx.r6.s64 = ctx.r9.s64 + -10572;
	// li r9,2008
	ctx.r9.s64 = 2008;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,6
	ctx.r5.s64 = 6;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// lis r30,-32246
	ctx.r30.s64 = -2113273856;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// addi r29,r30,-3988
	ctx.r29.s64 = ctx.r30.s64 + -3988;
	// addi r10,r11,23540
	ctx.r10.s64 = ctx.r11.s64 + 23540;
	// lfs f6,-27236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -27236);
	ctx.f6.f64 = double(temp.f32);
	// lis r31,-32244
	ctx.r31.s64 = -2113142784;
	// lfs f13,-3988(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -3988);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-32029
	ctx.r30.s64 = -2099052544;
	// stw r6,408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 408, ctx.r6.u32);
	// lfs f0,-4012(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// stwx r5,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// lis r3,-32029
	ctx.r3.s64 = -2099052544;
	// stw r9,872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 872, ctx.r9.u32);
	// lfs f5,-20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	ctx.f5.f64 = double(temp.f32);
	// stw r4,28972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28972, ctx.r4.u32);
	// lfs f10,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,22068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22068, ctx.r8.u32);
	// lfs f9,-16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,23544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r9,360
	ctx.r9.s64 = ctx.r9.s64 * 360;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f8,-19784(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -19784);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f12.f64 = double(temp.f32);
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lfs f11,-19780(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -19780);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r11,29800
	ctx.r9.s64 = ctx.r11.s64 + 29800;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r27,10
	ctx.r27.s64 = 10;
	// stfs f6,12(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// lfs f7,29760(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 29760);
	ctx.f7.f64 = double(temp.f32);
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// li r28,100
	ctx.r28.s64 = 100;
	// li r30,200
	ctx.r30.s64 = 200;
	// li r31,400
	ctx.r31.s64 = 400;
	// li r26,600
	ctx.r26.s64 = 600;
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f8,44(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r6,23440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23440, ctx.r6.u32);
	// stw r27,2816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2816, ctx.r27.u32);
	// li r25,800
	ctx.r25.s64 = 800;
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// ori r23,r7,42212
	ctx.r23.u64 = ctx.r7.u64 | 42212;
	// li r29,1000
	ctx.r29.s64 = 1000;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// addi r24,r24,-10560
	ctx.r24.s64 = ctx.r24.s64 + -10560;
	// lwz r3,29804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r3,360
	ctx.r7.s64 = ctx.r3.s64 * 360;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// li r22,2009
	ctx.r22.s64 = 2009;
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// lis r20,0
	ctx.r20.s64 = 0;
	// li r3,500
	ctx.r3.s64 = 500;
	// stw r8,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r8.u32);
	// li r19,50
	ctx.r19.s64 = 50;
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// li r18,300
	ctx.r18.s64 = 300;
	// addi r21,r21,-10548
	ctx.r21.s64 = ctx.r21.s64 + -10548;
	// ori r20,r20,42216
	ctx.r20.u64 = ctx.r20.u64 | 42216;
	// li r17,24609
	ctx.r17.s64 = 24609;
	// stw r8,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r8.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r28,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r28.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r30,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r30.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r31,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r31.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r26,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r26.u32);
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r25,44(r7)
	PPC_STORE_U32(ctx.r7.u32 + 44, ctx.r25.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,360
	ctx.r7.s64 = ctx.r7.s64 * 360;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r29,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r29.u32);
	// stw r24,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r24.u32);
	// stw r22,876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 876, ctx.r22.u32);
	// stw r4,28976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28976, ctx.r4.u32);
	// stwx r5,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r5.u32);
	// stw r6,22072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22072, ctx.r6.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f6,12(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f5,16(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f10,20(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f9,24(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lis r25,0
	ctx.r25.s64 = 0;
	// li r24,750
	ctx.r24.s64 = 750;
	// addi r26,r26,-10532
	ctx.r26.s64 = ctx.r26.s64 + -10532;
	// ori r25,r25,42220
	ctx.r25.u64 = ctx.r25.u64 | 42220;
	// stfs f0,28(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// li r23,1500
	ctx.r23.s64 = 1500;
	// stfs f13,32(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f12,36(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 36, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f11,40(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 40, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f8,44(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 44, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f7,48(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 48, temp.u32);
	// stw r6,23444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23444, ctx.r6.u32);
	// stw r27,2820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2820, ctx.r27.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r8.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r8.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r19,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r19.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r28,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r28.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r30,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r30.u32);
	// li r30,250
	ctx.r30.s64 = 250;
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r18,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r18.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r7,364
	ctx.r7.s64 = ctx.r7.s64 * 364;
	// add r28,r7,r9
	ctx.r28.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// addi r7,r7,-25088
	ctx.r7.s64 = ctx.r7.s64 + -25088;
	// stw r31,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r31.u32);
	// li r28,24608
	ctx.r28.s64 = 24608;
	// lwz r31,29804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r31,r31,364
	ctx.r31.s64 = ctx.r31.s64 * 364;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r21,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r21.u32);
	// stw r17,880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 880, ctx.r17.u32);
	// stw r4,28980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28980, ctx.r4.u32);
	// stwx r5,r11,r20
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, ctx.r5.u32);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 + ctx.r7.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// li r27,26
	ctx.r27.s64 = 26;
	// li r22,75
	ctx.r22.s64 = 75;
	// li r21,150
	ctx.r21.s64 = 150;
	// li r20,375
	ctx.r20.s64 = 375;
	// lwz r31,23544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r31,23544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r31,23544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r31,23544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r31,23544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r31,23544(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r6,23448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23448, ctx.r6.u32);
	// stw r5,2824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2824, ctx.r5.u32);
	// lwz r31,29804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r31,29804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// lwz r31,29804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r31,29804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// lwz r31,29804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r31,29804(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 * 368;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
	// stw r26,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r26.u32);
	// stw r4,28984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28984, ctx.r4.u32);
	// stwx r5,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r5.u32);
	// stw r28,884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 884, ctx.r28.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mulli r4,r4,372
	ctx.r4.s64 = ctx.r4.s64 * 372;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r27,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r27.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r4,372
	ctx.r7.s64 = ctx.r4.s64 * 372;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f0,12(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r4,372
	ctx.r7.s64 = ctx.r4.s64 * 372;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f13,16(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r4,372
	ctx.r7.s64 = ctx.r4.s64 * 372;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f12,20(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r4,372
	ctx.r7.s64 = ctx.r4.s64 * 372;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f11,24(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r4,372
	ctx.r7.s64 = ctx.r4.s64 * 372;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f8,28(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r4,372
	ctx.r7.s64 = ctx.r4.s64 * 372;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stfs f7,32(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r6,23452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23452, ctx.r6.u32);
	// stw r5,2828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2828, ctx.r5.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r10,r7,372
	ctx.r10.s64 = ctx.r7.s64 * 372;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// lwz r5,29804(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r10,r5,372
	ctx.r10.s64 = ctx.r5.s64 * 372;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r22,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r22.u32);
	// lwz r10,29804(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r10,r10,372
	ctx.r10.s64 = ctx.r10.s64 * 372;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r21,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r21.u32);
	// lwz r7,29804(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r10,r7,372
	ctx.r10.s64 = ctx.r7.s64 * 372;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r30.u32);
	// lwz r5,29804(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r10,r5,372
	ctx.r10.s64 = ctx.r5.s64 * 372;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r20,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r20.u32);
	// lwz r11,29804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r11,r11,372
	ctx.r11.s64 = ctx.r11.s64 * 372;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r3.u32);
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284270C"))) PPC_WEAK_FUNC(sub_8284270C);
PPC_FUNC_IMPL(__imp__sub_8284270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842710"))) PPC_WEAK_FUNC(sub_82842710);
PPC_FUNC_IMPL(__imp__sub_82842710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8284273c
	if (ctx.cr6.lt) goto loc_8284273C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x8284273c
	if (!ctx.cr6.lt) goto loc_8284273C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8284273c
	if (!ctx.cr6.gt) goto loc_8284273C;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82842748
	if (ctx.cr6.lt) goto loc_82842748;
loc_8284273C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82842748:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284276C"))) PPC_WEAK_FUNC(sub_8284276C);
PPC_FUNC_IMPL(__imp__sub_8284276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842770"))) PPC_WEAK_FUNC(sub_82842770);
PPC_FUNC_IMPL(__imp__sub_82842770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x82842778;
	__savegprlr_14(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r23,-32244
	ctx.r23.s64 = -2113142784;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r22,r23,-4476
	ctx.r22.s64 = ctx.r23.s64 + -4476;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r10,-10968
	ctx.r5.s64 = ctx.r10.s64 + -10968;
	// ori r4,r9,42128
	ctx.r4.u64 = ctx.r9.u64 | 42128;
	// ori r3,r8,40268
	ctx.r3.u64 = ctx.r8.u64 | 40268;
	// li r10,24269
	ctx.r10.s64 = 24269;
	// lfs f0,4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// addi r9,r6,-10956
	ctx.r9.s64 = ctx.r6.s64 + -10956;
	// li r7,3
	ctx.r7.s64 = 3;
	// lfs f13,-24944(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -24944);
	ctx.f13.f64 = double(temp.f32);
	// li r8,24329
	ctx.r8.s64 = 24329;
	// li r6,73
	ctx.r6.s64 = 73;
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r5,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r5.u32);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r10,792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 792, ctx.r10.u32);
	// addi r10,r11,23540
	ctx.r10.s64 = ctx.r11.s64 + 23540;
	// stw r9,19668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19668, ctx.r9.u32);
	// stfs f0,22740(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22740, temp.u32);
	// stwx r7,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r6,21524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21524, ctx.r6.u32);
	// lis r31,-32241
	ctx.r31.s64 = -2112946176;
	// stw r8,20132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20132, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r27,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r27.u32);
	// addi r9,r11,2916
	ctx.r9.s64 = ctx.r11.s64 + 2916;
	// stw r26,28892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28892, ctx.r26.u32);
	// li r25,50
	ctx.r25.s64 = 50;
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r4,280
	ctx.r6.s64 = ctx.r4.s64 * 280;
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f12,-29660(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29660);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-29664(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -29664);
	ctx.f11.f64 = double(temp.f32);
	// li r30,75
	ctx.r30.s64 = 75;
	// li r24,125
	ctx.r24.s64 = 125;
	// addi r6,r11,29800
	ctx.r6.s64 = ctx.r11.s64 + 29800;
	// li r20,10
	ctx.r20.s64 = 10;
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r5,r5,280
	ctx.r5.s64 = ctx.r5.s64 * 280;
	// add r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,13988
	ctx.r5.s64 = ctx.r11.s64 + 13988;
	// li r31,6
	ctx.r31.s64 = 6;
	// li r28,12
	ctx.r28.s64 = 12;
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r4,r4,280
	ctx.r4.s64 = ctx.r4.s64 * 280;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r29,16
	ctx.r29.s64 = 16;
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stw r8,23360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23360, ctx.r8.u32);
	// stw r7,2736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2736, ctx.r7.u32);
	// lwz r4,2920(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r4,r4,280
	ctx.r4.s64 = ctx.r4.s64 * 280;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r25,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r25.u32);
	// lwz r4,2920(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r4,r4,280
	ctx.r4.s64 = ctx.r4.s64 * 280;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r30,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r30.u32);
	// lwz r4,2920(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r4,r4,280
	ctx.r4.s64 = ctx.r4.s64 * 280;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r24,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r24.u32);
	// li r24,20
	ctx.r24.s64 = 20;
	// lwz r4,29804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r4,r4,280
	ctx.r4.s64 = ctx.r4.s64 * 280;
	// add r25,r4,r6
	ctx.r25.u64 = ctx.r4.u64 + ctx.r6.u64;
	// addi r4,r11,8920
	ctx.r4.s64 = ctx.r11.s64 + 8920;
	// stw r20,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r20.u32);
	// lwz r25,29804(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r25,r25,280
	ctx.r25.s64 = ctx.r25.s64 * 280;
	// std r3,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// stw r23,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r23.u32);
	// add r25,r25,r6
	ctx.r25.u64 = ctx.r25.u64 + ctx.r6.u64;
	// lis r17,-32241
	ctx.r17.s64 = -2112946176;
	// lis r20,0
	ctx.r20.s64 = 0;
	// lis r19,0
	ctx.r19.s64 = 0;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// stw r24,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r24.u32);
	// addi r21,r21,-10892
	ctx.r21.s64 = ctx.r21.s64 + -10892;
	// lwz r25,13992(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r25,r25,280
	ctx.r25.s64 = ctx.r25.s64 * 280;
	// add r25,r25,r5
	ctx.r25.u64 = ctx.r25.u64 + ctx.r5.u64;
	// lfs f12,-30868(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + -30868);
	ctx.f12.f64 = double(temp.f32);
	// ori r20,r20,42132
	ctx.r20.u64 = ctx.r20.u64 | 42132;
	// ori r19,r19,40272
	ctx.r19.u64 = ctx.r19.u64 | 40272;
	// li r17,24270
	ctx.r17.s64 = 24270;
	// addi r18,r18,-10880
	ctx.r18.s64 = ctx.r18.s64 + -10880;
	// stw r3,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r3.u32);
	// li r16,24328
	ctx.r16.s64 = 24328;
	// lwz r25,13992(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r25,r25,280
	ctx.r25.s64 = ctx.r25.s64 * 280;
	// add r25,r25,r5
	ctx.r25.u64 = ctx.r25.u64 + ctx.r5.u64;
	// li r15,74
	ctx.r15.s64 = 74;
	// lis r24,-32241
	ctx.r24.s64 = -2112946176;
	// lis r14,-32241
	ctx.r14.s64 = -2112946176;
	// li r23,50
	ctx.r23.s64 = 50;
	// stw r3,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r3.u32);
	// lis r25,-32243
	ctx.r25.s64 = -2113077248;
	// lwz r3,8924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// mulli r25,r3,280
	ctx.r25.s64 = ctx.r3.s64 * 280;
	// add r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 + ctx.r4.u64;
	// lfs f11,-30668(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -30668);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-29668(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + -29668);
	ctx.f10.f64 = double(temp.f32);
	// li r24,17
	ctx.r24.s64 = 17;
	// lis r14,0
	ctx.r14.s64 = 0;
	// std r24,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r24.u64);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lwz r24,-192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// ori r14,r14,42136
	ctx.r14.u64 = ctx.r14.u64 | 42136;
	// stw r31,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r31.u32);
	// lwz r25,8924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r25,r25,280
	ctx.r25.s64 = ctx.r25.s64 * 280;
	// add r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 + ctx.r4.u64;
	// addi r24,r24,-10800
	ctx.r24.s64 = ctx.r24.s64 + -10800;
	// stw r28,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r28.u32);
	// stw r21,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r21.u32);
	// stw r17,796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 796, ctx.r17.u32);
	// stw r18,19672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19672, ctx.r18.u32);
	// stfs f12,22744(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22744, temp.u32);
	// stw r16,20136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20136, ctx.r16.u32);
	// lfs f12,88(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r26,28896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28896, ctx.r26.u32);
	// stwx r7,r11,r20
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, ctx.r7.u32);
	// stwx r29,r11,r19
	PPC_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r29.u32);
	// stw r15,21528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21528, ctx.r15.u32);
	// lwz r25,23544(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stfs f11,12(r25)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// lwz r25,23544(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stfs f10,16(r25)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r25.u32 + 16, temp.u32);
	// lwz r25,23544(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stfs f13,20(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 20, temp.u32);
	// stw r8,23364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23364, ctx.r8.u32);
	// stw r7,2740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2740, ctx.r7.u32);
	// lfs f13,28(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lwz r25,2920(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// stw r23,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r23.u32);
	// lwz r25,2920(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// stw r30,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r30.u32);
	// lwz r25,2920(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// std r27,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r27.u64);
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// li r23,125
	ctx.r23.s64 = 125;
	// li r21,10
	ctx.r21.s64 = 10;
	// addi r19,r3,-10784
	ctx.r19.s64 = ctx.r3.s64 + -10784;
	// li r3,200
	ctx.r3.s64 = 200;
	// stw r23,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r23.u32);
	// li r20,24317
	ctx.r20.s64 = 24317;
	// lwz r25,29804(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r6
	ctx.r25.u64 = ctx.r25.u64 + ctx.r6.u64;
	// stw r3,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r3.u32);
	// ld r3,-176(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lis r23,0
	ctx.r23.s64 = 0;
	// li r18,24330
	ctx.r18.s64 = 24330;
	// ori r23,r23,40276
	ctx.r23.u64 = ctx.r23.u64 | 40276;
	// lis r17,-32243
	ctx.r17.s64 = -2113077248;
	// stw r21,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r21.u32);
	// lis r21,-32241
	ctx.r21.s64 = -2112946176;
	// lwz r25,29804(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r6
	ctx.r25.u64 = ctx.r25.u64 + ctx.r6.u64;
	// lfs f11,-29672(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -29672);
	ctx.f11.f64 = double(temp.f32);
	// addi r17,r17,-10728
	ctx.r17.s64 = ctx.r17.s64 + -10728;
	// lis r16,-32243
	ctx.r16.s64 = -2113077248;
	// stw r17,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r17.u32);
	// li r21,100
	ctx.r21.s64 = 100;
	// li r15,150
	ctx.r15.s64 = 150;
	// stw r27,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r27.u32);
	// li r27,30
	ctx.r27.s64 = 30;
	// lwz r25,13992(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r5
	ctx.r25.u64 = ctx.r25.u64 + ctx.r5.u64;
	// li r17,25144
	ctx.r17.s64 = 25144;
	// addi r16,r16,-10708
	ctx.r16.s64 = ctx.r16.s64 + -10708;
	// stw r3,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r3.u32);
	// li r25,25140
	ctx.r25.s64 = 25140;
	// stw r25,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r25.u32);
	// lwz r25,13992(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r5
	ctx.r25.u64 = ctx.r25.u64 + ctx.r5.u64;
	// stw r3,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r3.u32);
	// lwz r25,8924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 + ctx.r4.u64;
	// stw r31,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r31.u32);
	// lwz r25,8924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r25,r25,284
	ctx.r25.s64 = ctx.r25.s64 * 284;
	// add r25,r25,r4
	ctx.r25.u64 = ctx.r25.u64 + ctx.r4.u64;
	// stw r28,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r28.u32);
	// stw r24,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r24.u32);
	// stw r20,800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 800, ctx.r20.u32);
	// stw r19,19676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19676, ctx.r19.u32);
	// stfs f13,22748(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22748, temp.u32);
	// ld r24,-168(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfs f13,108(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,21532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21532, ctx.r30.u32);
	// stw r26,28900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28900, ctx.r26.u32);
	// stw r18,20140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20140, ctx.r18.u32);
	// stwx r7,r11,r14
	PPC_STORE_U32(ctx.r11.u32 + ctx.r14.u32, ctx.r7.u32);
	// stwx r24,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r24.u32);
	// lwz r30,23544(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r26,r30,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r30,r30,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lwz r30,23544(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r26,r30,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r30,r30,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lwz r30,23544(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r26,r30,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r30,r30,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r7,2744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2744, ctx.r7.u32);
	// stw r8,23368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23368, ctx.r8.u32);
	// li r25,20
	ctx.r25.s64 = 20;
	// lwz r30,2920(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// rlwinm r26,r30,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lwz r23,-188(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lis r18,0
	ctx.r18.s64 = 0;
	// rlwinm r30,r30,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r18,r18,42148
	ctx.r18.u64 = ctx.r18.u64 | 42148;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lfs f13,-4476(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -4476);
	ctx.f13.f64 = double(temp.f32);
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// lis r20,0
	ctx.r20.s64 = 0;
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// ori r20,r20,42144
	ctx.r20.u64 = ctx.r20.u64 | 42144;
	// stw r21,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r21.u32);
	// addi r22,r22,-10656
	ctx.r22.s64 = ctx.r22.s64 + -10656;
	// lwz r30,2920(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// rlwinm r26,r30,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lis r26,0
	ctx.r26.s64 = 0;
	// rlwinm r30,r30,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r23,r26,42140
	ctx.r23.u64 = ctx.r26.u64 | 42140;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// li r14,25141
	ctx.r14.s64 = 25141;
	// addi r21,r26,-10676
	ctx.r21.s64 = ctx.r26.s64 + -10676;
	// addi r19,r19,-10624
	ctx.r19.s64 = ctx.r19.s64 + -10624;
	// stw r15,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r15.u32);
	// li r15,25143
	ctx.r15.s64 = 25143;
	// lwz r30,2920(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// rlwinm r26,r30,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// rlwinm r30,r30,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r26,-10604
	ctx.r26.s64 = ctx.r26.s64 + -10604;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r30,-192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r18,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r18.u32);
	// li r18,25142
	ctx.r18.s64 = 25142;
	// stw r30,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r30.u32);
	// lwz r9,29804(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// li r30,25145
	ctx.r30.s64 = 25145;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r30,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r30.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r25,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r25.u32);
	// lwz r9,29804(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r27,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r27.u32);
	// lwz r9,13992(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r3,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r3.u32);
	// lwz r9,13992(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r3,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r3.u32);
	// lwz r9,8924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r5,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// lwz r9,8924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r9,-184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// stw r29,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r29.u32);
	// stw r9,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r9.u32);
	// ld r27,-160(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// stw r17,804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 804, ctx.r17.u32);
	// stw r16,19680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19680, ctx.r16.u32);
	// lwz r17,-176(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// stw r31,28904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28904, ctx.r31.u32);
	// stw r27,22000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22000, ctx.r27.u32);
	// stwx r7,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r7.u32);
	// lwz r25,-188(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// stw r17,20144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20144, ctx.r17.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r5,292
	ctx.r9.s64 = ctx.r5.s64 * 292;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stw r8,23372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23372, ctx.r8.u32);
	// stw r8,2748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2748, ctx.r8.u32);
	// stw r21,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r21.u32);
	// stw r15,808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 808, ctx.r15.u32);
	// stw r22,19684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19684, ctx.r22.u32);
	// stw r14,20148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20148, ctx.r14.u32);
	// stw r31,28908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28908, ctx.r31.u32);
	// stw r29,22004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22004, ctx.r29.u32);
	// stwx r7,r11,r20
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, ctx.r7.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r3,296
	ctx.r9.s64 = ctx.r3.s64 * 296;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stw r8,23376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23376, ctx.r8.u32);
	// stw r8,2752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2752, ctx.r8.u32);
	// stw r19,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r19.u32);
	// stw r25,812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 812, ctx.r25.u32);
	// stw r26,19688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19688, ctx.r26.u32);
	// lwz r26,-192(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r24,22008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22008, ctx.r24.u32);
	// stw r18,20152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20152, ctx.r18.u32);
	// stw r31,28912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28912, ctx.r31.u32);
	// stwx r7,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r7.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r7,300
	ctx.r9.s64 = ctx.r7.s64 * 300;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stw r8,23380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23380, ctx.r8.u32);
	// stw r8,2756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2756, ctx.r8.u32);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82842D34"))) PPC_WEAK_FUNC(sub_82842D34);
PPC_FUNC_IMPL(__imp__sub_82842D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842D38"))) PPC_WEAK_FUNC(sub_82842D38);
PPC_FUNC_IMPL(__imp__sub_82842D38) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82842d70
	if (!ctx.cr6.gt) goto loc_82842D70;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// bge cr6,0x82842d70
	if (!ctx.cr6.lt) goto loc_82842D70;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,5311
	ctx.r10.s64 = ctx.r5.s64 + 5311;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82842d70
	if (!ctx.cr6.gt) goto loc_82842D70;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// blt cr6,0x82842d74
	if (ctx.cr6.lt) goto loc_82842D74;
loc_82842D70:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82842D74:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842D7C"))) PPC_WEAK_FUNC(sub_82842D7C);
PPC_FUNC_IMPL(__imp__sub_82842D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842D80"))) PPC_WEAK_FUNC(sub_82842D80);
PPC_FUNC_IMPL(__imp__sub_82842D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82842dac
	if (!ctx.cr6.gt) goto loc_82842DAC;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// bge cr6,0x82842dac
	if (!ctx.cr6.lt) goto loc_82842DAC;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// blt cr6,0x82842dac
	if (ctx.cr6.lt) goto loc_82842DAC;
	// cmpwi cr6,r6,11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 11, ctx.xer);
	// blt cr6,0x82842db8
	if (ctx.cr6.lt) goto loc_82842DB8;
loc_82842DAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82842DB8:
	// addi r10,r5,5195
	ctx.r10.s64 = ctx.r5.s64 + 5195;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82842dd8
	if (ctx.cr6.eq) goto loc_82842DD8;
	// lwz r10,13992(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// addi r11,r11,13988
	ctx.r11.s64 = ctx.r11.s64 + 13988;
	// b 0x82842de0
	goto loc_82842DE0;
loc_82842DD8:
	// lwz r10,2920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// addi r11,r11,2916
	ctx.r11.s64 = ctx.r11.s64 + 2916;
loc_82842DE0:
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842DFC"))) PPC_WEAK_FUNC(sub_82842DFC);
PPC_FUNC_IMPL(__imp__sub_82842DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842E00"))) PPC_WEAK_FUNC(sub_82842E00);
PPC_FUNC_IMPL(__imp__sub_82842E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,10462
	ctx.r10.s64 = ctx.r5.s64 + 10462;
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

__attribute__((alias("__imp__sub_82842E20"))) PPC_WEAK_FUNC(sub_82842E20);
PPC_FUNC_IMPL(__imp__sub_82842E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82842e3c
	if (!ctx.cr6.gt) goto loc_82842E3C;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// blt cr6,0x82842e48
	if (ctx.cr6.lt) goto loc_82842E48;
loc_82842E3C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82842E48:
	// addi r10,r5,5079
	ctx.r10.s64 = ctx.r5.s64 + 5079;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842E5C"))) PPC_WEAK_FUNC(sub_82842E5C);
PPC_FUNC_IMPL(__imp__sub_82842E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842E60"))) PPC_WEAK_FUNC(sub_82842E60);
PPC_FUNC_IMPL(__imp__sub_82842E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82842e7c
	if (!ctx.cr6.gt) goto loc_82842E7C;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// blt cr6,0x82842e8c
	if (ctx.cr6.lt) goto loc_82842E8C;
loc_82842E7C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82842E8C:
	// addi r10,r5,5615
	ctx.r10.s64 = ctx.r5.s64 + 5615;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842EA0"))) PPC_WEAK_FUNC(sub_82842EA0);
PPC_FUNC_IMPL(__imp__sub_82842EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82842ebc
	if (!ctx.cr6.gt) goto loc_82842EBC;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// blt cr6,0x82842ec8
	if (ctx.cr6.lt) goto loc_82842EC8;
loc_82842EBC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82842EC8:
	// addi r10,r5,5195
	ctx.r10.s64 = ctx.r5.s64 + 5195;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842EDC"))) PPC_WEAK_FUNC(sub_82842EDC);
PPC_FUNC_IMPL(__imp__sub_82842EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842EE0"))) PPC_WEAK_FUNC(sub_82842EE0);
PPC_FUNC_IMPL(__imp__sub_82842EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82842f0c
	if (!ctx.cr6.gt) goto loc_82842F0C;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// bge cr6,0x82842f0c
	if (!ctx.cr6.lt) goto loc_82842F0C;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// blt cr6,0x82842f0c
	if (ctx.cr6.lt) goto loc_82842F0C;
	// cmpwi cr6,r6,11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 11, ctx.xer);
	// blt cr6,0x82842f18
	if (ctx.cr6.lt) goto loc_82842F18;
loc_82842F0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82842F18:
	// addi r10,r5,5195
	ctx.r10.s64 = ctx.r5.s64 + 5195;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82842f50
	if (ctx.cr6.eq) goto loc_82842F50;
	// lwz r10,29804(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// addi r11,r11,29800
	ctx.r11.s64 = ctx.r11.s64 + 29800;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
loc_82842F50:
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-30668
	ctx.r10.s64 = ctx.r10.s64 + -30668;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r11,r9,r5
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842F78"))) PPC_WEAK_FUNC(sub_82842F78);
PPC_FUNC_IMPL(__imp__sub_82842F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82842f94
	if (!ctx.cr6.gt) goto loc_82842F94;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// blt cr6,0x82842fa0
	if (ctx.cr6.lt) goto loc_82842FA0;
loc_82842F94:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82842FA0:
	// addi r10,r5,614
	ctx.r10.s64 = ctx.r5.s64 + 614;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82842FB4"))) PPC_WEAK_FUNC(sub_82842FB4);
PPC_FUNC_IMPL(__imp__sub_82842FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82842FB8"))) PPC_WEAK_FUNC(sub_82842FB8);
PPC_FUNC_IMPL(__imp__sub_82842FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,7153
	ctx.r10.s64 = ctx.r5.s64 + 7153;
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

__attribute__((alias("__imp__sub_82842FD8"))) PPC_WEAK_FUNC(sub_82842FD8);
PPC_FUNC_IMPL(__imp__sub_82842FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-25088
	ctx.r8.s64 = ctx.r8.s64 + -25088;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284300C"))) PPC_WEAK_FUNC(sub_8284300C);
PPC_FUNC_IMPL(__imp__sub_8284300C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82843010"))) PPC_WEAK_FUNC(sub_82843010);
PPC_FUNC_IMPL(__imp__sub_82843010) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82843048
	if (!ctx.cr6.gt) goto loc_82843048;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// bge cr6,0x82843048
	if (!ctx.cr6.lt) goto loc_82843048;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,9997
	ctx.r10.s64 = ctx.r5.s64 + 9997;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82843048
	if (ctx.cr6.lt) goto loc_82843048;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// blt cr6,0x8284304c
	if (ctx.cr6.lt) goto loc_8284304C;
loc_82843048:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8284304C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82843054"))) PPC_WEAK_FUNC(sub_82843054);
PPC_FUNC_IMPL(__imp__sub_82843054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82843058"))) PPC_WEAK_FUNC(sub_82843058);
PPC_FUNC_IMPL(__imp__sub_82843058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82843074
	if (!ctx.cr6.gt) goto loc_82843074;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// blt cr6,0x82843080
	if (ctx.cr6.lt) goto loc_82843080;
loc_82843074:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82843080:
	// addi r10,r5,5770
	ctx.r10.s64 = ctx.r5.s64 + 5770;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82843094"))) PPC_WEAK_FUNC(sub_82843094);
PPC_FUNC_IMPL(__imp__sub_82843094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82843098"))) PPC_WEAK_FUNC(sub_82843098);
PPC_FUNC_IMPL(__imp__sub_82843098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x828430c4
	if (!ctx.cr6.gt) goto loc_828430C4;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// bge cr6,0x828430c4
	if (!ctx.cr6.lt) goto loc_828430C4;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// blt cr6,0x828430c4
	if (ctx.cr6.lt) goto loc_828430C4;
	// cmpwi cr6,r6,11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 11, ctx.xer);
	// blt cr6,0x828430d4
	if (ctx.cr6.lt) goto loc_828430D4;
loc_828430C4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_828430D4:
	// lwz r10,23544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// addi r11,r11,23540
	ctx.r11.s64 = ctx.r11.s64 + 23540;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
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

__attribute__((alias("__imp__sub_828430F8"))) PPC_WEAK_FUNC(sub_828430F8);
PPC_FUNC_IMPL(__imp__sub_828430F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82843100;
	__savegprlr_19(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-15796
	ctx.r6.s64 = ctx.r10.s64 + -15796;
	// ori r4,r9,42048
	ctx.r4.u64 = ctx.r9.u64 | 42048;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,24271
	ctx.r9.s64 = 24271;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// ori r3,r8,40188
	ctx.r3.u64 = ctx.r8.u64 | 40188;
	// addi r8,r7,-11424
	ctx.r8.s64 = ctx.r7.s64 + -11424;
	// li r7,24331
	ctx.r7.s64 = 24331;
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r31,52
	ctx.r31.s64 = 52;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,18
	ctx.r27.s64 = 18;
	// addi r10,r11,23540
	ctx.r10.s64 = ctx.r11.s64 + 23540;
	// stw r6,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r6.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r9,712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 712, ctx.r9.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r8,19588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19588, ctx.r8.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r5,28812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28812, ctx.r5.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r7,20052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20052, ctx.r7.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stwx r26,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r26.u32);
	// lfs f0,-30668(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30668);
	ctx.f0.f64 = double(temp.f32);
	// stwx r27,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r27.u32);
	// lfs f13,-29796(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29796);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,21444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21444, ctx.r31.u32);
	// lfs f12,-29656(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29656);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r7,200
	ctx.r9.s64 = ctx.r7.s64 * 200;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r11,2916
	ctx.r7.s64 = ctx.r11.s64 + 2916;
	// li r25,50
	ctx.r25.s64 = 50;
	// li r24,75
	ctx.r24.s64 = 75;
	// li r23,125
	ctx.r23.s64 = 125;
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r8,r5,200
	ctx.r8.s64 = ctx.r5.s64 * 200;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r9,r11,29800
	ctx.r9.s64 = ctx.r11.s64 + 29800;
	// li r30,10
	ctx.r30.s64 = 10;
	// addi r8,r11,13988
	ctx.r8.s64 = ctx.r11.s64 + 13988;
	// li r31,15
	ctx.r31.s64 = 15;
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r5,r3,200
	ctx.r5.s64 = ctx.r3.s64 * 200;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// li r4,16
	ctx.r4.s64 = 16;
	// stfs f12,20(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stw r28,23280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23280, ctx.r28.u32);
	// stw r29,2656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2656, ctx.r29.u32);
	// lwz r5,2920(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r5,r5,200
	ctx.r5.s64 = ctx.r5.s64 * 200;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r25,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r25.u32);
	// lis r25,-32243
	ctx.r25.s64 = -2113077248;
	// lwz r5,2920(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r5,r5,200
	ctx.r5.s64 = ctx.r5.s64 * 200;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r24,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r24.u32);
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// lwz r5,2920(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2920);
	// mulli r5,r5,200
	ctx.r5.s64 = ctx.r5.s64 * 200;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r23,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r23.u32);
	// lwz r5,29804(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r7,r5,200
	ctx.r7.s64 = ctx.r5.s64 * 200;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r7,r11,8920
	ctx.r7.s64 = ctx.r11.s64 + 8920;
	// stw r30,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r30.u32);
	// lwz r5,29804(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r5,r5,200
	ctx.r5.s64 = ctx.r5.s64 * 200;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r31,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r31.u32);
	// lis r21,0
	ctx.r21.s64 = 0;
	// lwz r5,13992(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r5,r5,200
	ctx.r5.s64 = ctx.r5.s64 * 200;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addi r25,r25,-11336
	ctx.r25.s64 = ctx.r25.s64 + -11336;
	// ori r21,r21,42056
	ctx.r21.u64 = ctx.r21.u64 | 42056;
	// li r23,24272
	ctx.r23.s64 = 24272;
	// addi r24,r24,-11324
	ctx.r24.s64 = ctx.r24.s64 + -11324;
	// stw r6,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// lis r19,-32244
	ctx.r19.s64 = -2113142784;
	// lwz r5,13992(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r5,r5,200
	ctx.r5.s64 = ctx.r5.s64 * 200;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lfs f12,-4448(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + -4448);
	ctx.f12.f64 = double(temp.f32);
	// li r22,24332
	ctx.r22.s64 = 24332;
	// li r20,6
	ctx.r20.s64 = 6;
	// addi r19,r19,-4448
	ctx.r19.s64 = ctx.r19.s64 + -4448;
	// stw r6,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r6.u32);
	// lwz r5,8924(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r5,r5,200
	ctx.r5.s64 = ctx.r5.s64 * 200;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lfs f0,-24(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// lwz r5,8924(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r5,r5,200
	ctx.r5.s64 = ctx.r5.s64 * 200;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r4,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r4.u32);
	// stw r25,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r25.u32);
	// stw r23,720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 720, ctx.r23.u32);
	// stw r24,19596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19596, ctx.r24.u32);
	// stw r22,20060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20060, ctx.r22.u32);
	// stw r20,28820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28820, ctx.r20.u32);
	// stwx r26,r11,r21
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r26.u32);
	// stw r27,21916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21916, ctx.r27.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r5,r5,208
	ctx.r5.s64 = ctx.r5.s64 * 208;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r5,r5,208
	ctx.r5.s64 = ctx.r5.s64 * 208;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stfs f13,16(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r5,r5,208
	ctx.r5.s64 = ctx.r5.s64 * 208;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stfs f12,20(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stw r28,23288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23288, ctx.r28.u32);
	// stw r29,2664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2664, ctx.r29.u32);
	// lwz r5,29804(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r10,r5,208
	ctx.r10.s64 = ctx.r5.s64 * 208;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r30.u32);
	// lwz r5,29804(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29804);
	// mulli r10,r5,208
	ctx.r10.s64 = ctx.r5.s64 * 208;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r31,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r31.u32);
	// lwz r9,13992(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r10,r9,208
	ctx.r10.s64 = ctx.r9.s64 * 208;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// lwz r10,13992(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13992);
	// mulli r10,r10,208
	ctx.r10.s64 = ctx.r10.s64 * 208;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r6.u32);
	// lwz r8,8924(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r10,r8,208
	ctx.r10.s64 = ctx.r8.s64 * 208;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r3,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r3.u32);
	// lwz r5,8924(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r11,r5,208
	ctx.r11.s64 = ctx.r5.s64 * 208;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82843370"))) PPC_WEAK_FUNC(sub_82843370);
PPC_FUNC_IMPL(__imp__sub_82843370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8284339c
	if (ctx.cr6.lt) goto loc_8284339C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x8284339c
	if (!ctx.cr6.lt) goto loc_8284339C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8284339c
	if (ctx.cr6.lt) goto loc_8284339C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x828433a8
	if (ctx.cr6.lt) goto loc_828433A8;
loc_8284339C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828433A8:
	// lwz r10,8876(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8876);
	// addi r11,r11,8872
	ctx.r11.s64 = ctx.r11.s64 + 8872;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828433CC"))) PPC_WEAK_FUNC(sub_828433CC);
PPC_FUNC_IMPL(__imp__sub_828433CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828433D0"))) PPC_WEAK_FUNC(sub_828433D0);
PPC_FUNC_IMPL(__imp__sub_828433D0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x828433D8;
	__savegprlr_25(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,13192(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r27,13188(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r26,13180(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13180);
	// lwz r25,13184(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13184);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82843488
	if (!ctx.cr6.gt) goto loc_82843488;
	// cmpwi cr6,r5,115
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 115, ctx.xer);
	// bge cr6,0x82843488
	if (!ctx.cr6.lt) goto loc_82843488;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r8,r5,7153
	ctx.r8.s64 = ctx.r5.s64 + 7153;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
loc_82843430:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82843450
	if (ctx.cr6.lt) goto loc_82843450;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bge cr6,0x82843450
	if (!ctx.cr6.lt) goto loc_82843450;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82843450
	if (ctx.cr6.lt) goto loc_82843450;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x82843458
	if (ctx.cr6.lt) goto loc_82843458;
loc_82843450:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82843474
	goto loc_82843474;
loc_82843458:
	// lwz r10,8876(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8876);
	// addi r11,r8,8872
	ctx.r11.s64 = ctx.r8.s64 + 8872;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82843474:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82843490
	if (ctx.cr6.eq) goto loc_82843490;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x82843430
	if (ctx.cr6.lt) goto loc_82843430;
loc_82843488:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82843494
	goto loc_82843494;
loc_82843490:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82843494:
	// stw r27,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r27.u32);
	// stw r25,13184(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13184, ctx.r25.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r26.u32);
	// stw r28,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r28.u32);
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828434AC"))) PPC_WEAK_FUNC(sub_828434AC);
PPC_FUNC_IMPL(__imp__sub_828434AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828434B0"))) PPC_WEAK_FUNC(sub_828434B0);
PPC_FUNC_IMPL(__imp__sub_828434B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82843520
	if (!ctx.cr6.gt) goto loc_82843520;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bge cr6,0x82843520
	if (!ctx.cr6.lt) goto loc_82843520;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82843520
	if (ctx.cr6.lt) goto loc_82843520;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bge cr6,0x82843520
	if (!ctx.cr6.lt) goto loc_82843520;
	// addi r11,r11,8872
	ctx.r11.s64 = ctx.r11.s64 + 8872;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// ble cr6,0x82843520
	if (!ctx.cr6.gt) goto loc_82843520;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,115
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 115, ctx.xer);
	// blt cr6,0x8284352c
	if (ctx.cr6.lt) goto loc_8284352C;
loc_82843520:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8284352C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82843554"))) PPC_WEAK_FUNC(sub_82843554);
PPC_FUNC_IMPL(__imp__sub_82843554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82843558"))) PPC_WEAK_FUNC(sub_82843558);
PPC_FUNC_IMPL(__imp__sub_82843558) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
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
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r7,r4
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828435A8"))) PPC_WEAK_FUNC(sub_828435A8);
PPC_FUNC_IMPL(__imp__sub_828435A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189dc
	ctx.lr = 0x828435B0;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r21,13192(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r20,13188(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r19,13180(r28)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r18,13184(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r30,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r30.u32);
	// stw r30,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r30.u32);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r11.u32);
	// ble cr6,0x828436f0
	if (!ctx.cr6.gt) goto loc_828436F0;
	// cmpwi cr6,r26,115
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 115, ctx.xer);
	// bge cr6,0x828436f0
	if (!ctx.cr6.lt) goto loc_828436F0;
	// addi r11,r26,5195
	ctx.r11.s64 = ctx.r26.s64 + 5195;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x828436f0
	if (ctx.cr6.lt) goto loc_828436F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828433d0
	ctx.lr = 0x8284363C;
	sub_828433D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828436f0
	if (!ctx.cr6.eq) goto loc_828436F0;
	// addi r11,r26,7153
	ctx.r11.s64 = ctx.r26.s64 + 7153;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x828436f0
	if (ctx.cr6.lt) goto loc_828436F0;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x828436f0
	if (!ctx.cr6.lt) goto loc_828436F0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x828436f0
	if (ctx.cr6.lt) goto loc_828436F0;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bge cr6,0x828436f0
	if (!ctx.cr6.lt) goto loc_828436F0;
	// cmpwi cr6,r17,1
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 1, ctx.xer);
	// beq cr6,0x828436ac
	if (ctx.cr6.eq) goto loc_828436AC;
	// cmpwi cr6,r17,2
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 2, ctx.xer);
	// beq cr6,0x8284369c
	if (ctx.cr6.eq) goto loc_8284369C;
	// cmpwi cr6,r17,3
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 3, ctx.xer);
	// beq cr6,0x82843694
	if (ctx.cr6.eq) goto loc_82843694;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// b 0x828436b4
	goto loc_828436B4;
loc_82843694:
	// lwz r7,13188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// b 0x828436b4
	goto loc_828436B4;
loc_8284369C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828436b4
	goto loc_828436B4;
loc_828436AC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828436B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828434b0
	ctx.lr = 0x828436C8;
	sub_828434B0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8876(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8876);
	// addi r11,r25,8872
	ctx.r11.s64 = ctx.r25.s64 + 8872;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r26.u32);
	// b 0x828436f4
	goto loc_828436F4;
loc_828436F0:
	// stw r24,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r24.u32);
loc_828436F4:
	// stw r21,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r21.u32);
	// stw r19,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r19.u32);
	// stw r18,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r18.u32);
	// stw r20,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r20.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284370C"))) PPC_WEAK_FUNC(sub_8284370C);
PPC_FUNC_IMPL(__imp__sub_8284370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82843710"))) PPC_WEAK_FUNC(sub_82843710);
PPC_FUNC_IMPL(__imp__sub_82843710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x8284373c
	if (!ctx.cr6.gt) goto loc_8284373C;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bge cr6,0x8284373c
	if (!ctx.cr6.lt) goto loc_8284373C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8284373c
	if (ctx.cr6.lt) goto loc_8284373C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x82843748
	if (ctx.cr6.lt) goto loc_82843748;
loc_8284373C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82843748:
	// lwz r10,8900(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8900);
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284376C"))) PPC_WEAK_FUNC(sub_8284376C);
PPC_FUNC_IMPL(__imp__sub_8284376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82843770"))) PPC_WEAK_FUNC(sub_82843770);
PPC_FUNC_IMPL(__imp__sub_82843770) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r7,r4
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828437C0"))) PPC_WEAK_FUNC(sub_828437C0);
PPC_FUNC_IMPL(__imp__sub_828437C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x828437C8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8221ad18
	ctx.lr = 0x828437D0;
	__savefpr_28(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r28,10
	ctx.r28.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r21,3
	ctx.r21.s64 = 3;
	// li r31,5
	ctx.r31.s64 = 5;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r29,20
	ctx.r29.s64 = 20;
	// li r4,500
	ctx.r4.s64 = 500;
	// li r22,1000
	ctx.r22.s64 = 1000;
	// li r3,2500
	ctx.r3.s64 = 2500;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,29800
	ctx.r9.s64 = ctx.r11.s64 + 29800;
	// addi r10,r11,13988
	ctx.r10.s64 = ctx.r11.s64 + 13988;
	// stw r9,-252(r1)
	PPC_STORE_U32(ctx.r1.u32 + -252, ctx.r9.u32);
	// addi r7,r11,2496
	ctx.r7.s64 = ctx.r11.s64 + 2496;
	// stw r11,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r11.u32);
	// stw r10,-256(r1)
	PPC_STORE_U32(ctx.r1.u32 + -256, ctx.r10.u32);
loc_82843818:
	// stw r5,20624(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20624, ctx.r5.u32);
	// stw r21,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r21.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r28.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r6,r6,5
	ctx.r6.s64 = ctx.r6.s64 + 5;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r22,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r22.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r6,r8,r6
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// addi r6,r6,5
	ctx.r6.s64 = ctx.r6.s64 + 5;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,43
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 43, ctx.xer);
	// stwx r3,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r3.u32);
	// ble cr6,0x82843818
	if (!ctx.cr6.gt) goto loc_82843818;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r8,-14536
	ctx.r6.s64 = ctx.r8.s64 + -14536;
	// li r3,24273
	ctx.r3.s64 = 24273;
	// addi r8,r7,-14520
	ctx.r8.s64 = ctx.r7.s64 + -14520;
	// stw r6,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r6.u32);
	// li r7,24333
	ctx.r7.s64 = 24333;
	// stw r3,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r3.u32);
	// stw r8,19428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19428, ctx.r8.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r7,19892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19892, ctx.r7.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// ori r8,r3,41888
	ctx.r8.u64 = ctx.r3.u64 | 41888;
	// stw r5,28652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28652, ctx.r5.u32);
	// addi r3,r7,-4472
	ctx.r3.s64 = ctx.r7.s64 + -4472;
	// stw r7,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r7.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addis r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 65536;
	// stw r3,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r3.u32);
	// addi r27,r7,-27236
	ctx.r27.s64 = ctx.r7.s64 + -27236;
	// stw r7,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r7.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// addi r6,r6,-25088
	ctx.r6.s64 = ctx.r6.s64 + -25088;
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// li r30,11
	ctx.r30.s64 = 11;
	// addi r8,r11,23540
	ctx.r8.s64 = ctx.r11.s64 + 23540;
	// stw r6,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r6.u32);
	// lfs f8,8592(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8592);
	ctx.f8.f64 = double(temp.f32);
	// lis r26,-32241
	ctx.r26.s64 = -2112946176;
	// lfs f12,-4012(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4012);
	ctx.f12.f64 = double(temp.f32);
	// li r31,15
	ctx.r31.s64 = 15;
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lfs f13,-30792(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -30792);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r8.u32);
	// li r25,350
	ctx.r25.s64 = 350;
	// rlwinm r7,r3,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r26,650
	ctx.r26.s64 = 650;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r30.u32);
	// stfs f0,22500(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22500, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r3,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfs f8,12(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r3,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfs f12,16(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r3,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfs f13,20(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r3,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r28,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r28.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r3,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r31,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r31.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r3,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r7,r11,8920
	ctx.r7.s64 = ctx.r11.s64 + 8920;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r30,8
	ctx.r30.s64 = 8;
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r23,r24,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r24,r23
	ctx.r27.u64 = ctx.r24.u64 + ctx.r23.u64;
	// stw r7,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r7.u32);
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// rlwinm r24,r27,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r18,r23,-14432
	ctx.r18.s64 = ctx.r23.s64 + -14432;
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// lis r20,0
	ctx.r20.s64 = 0;
	// li r27,12
	ctx.r27.s64 = 12;
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// ori r20,r20,41892
	ctx.r20.u64 = ctx.r20.u64 | 41892;
	// stw r25,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r25.u32);
	// li r17,24276
	ctx.r17.s64 = 24276;
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r23,r24,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// addi r19,r19,-14416
	ctx.r19.s64 = ctx.r19.s64 + -14416;
	// rlwinm r24,r24,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// li r16,24334
	ctx.r16.s64 = 24334;
	// stw r19,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r19.u32);
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// lis r15,-32241
	ctx.r15.s64 = -2112946176;
	// stw r4,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r4.u32);
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r23,r24,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lfs f5,-30936(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -30936);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r24,r24,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r26,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r26.u32);
	// lwz r24,8924(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r23,r24,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// rlwinm r24,r24,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stw r3,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r3.u32);
	// lwz r24,8924(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r23,r24,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// rlwinm r24,r24,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stw r30,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r30.u32);
	// lwz r24,8924(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r23,r24,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// rlwinm r24,r24,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r23,r23,-14332
	ctx.r23.s64 = ctx.r23.s64 + -14332;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stw r27,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r27.u32);
	// stw r18,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r18.u32);
	// stw r17,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r17.u32);
	// stw r19,19432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19432, ctx.r19.u32);
	// stwx r5,r11,r20
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, ctx.r5.u32);
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// stw r16,19896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19896, ctx.r16.u32);
	// stw r5,28656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28656, ctx.r5.u32);
	// lwz r24,4(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r6
	ctx.r24.u64 = ctx.r24.u64 + ctx.r6.u64;
	// stw r21,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r21.u32);
	// stfs f0,22504(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22504, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// lis r21,0
	ctx.r21.s64 = 0;
	// stfs f5,12(r24)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stfs f8,16(r24)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stfs f12,20(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 20, temp.u32);
	// lwz r24,4(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// stw r28,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r28.u32);
	// lis r16,-32246
	ctx.r16.s64 = -2113273856;
	// li r19,24277
	ctx.r19.s64 = 24277;
	// std r22,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.r22.u64);
	// addi r15,r16,-3988
	ctx.r15.s64 = ctx.r16.s64 + -3988;
	// addi r20,r20,-14312
	ctx.r20.s64 = ctx.r20.s64 + -14312;
	// ori r21,r21,41896
	ctx.r21.u64 = ctx.r21.u64 | 41896;
	// li r18,24335
	ctx.r18.s64 = 24335;
	// stw r20,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r20.u32);
	// li r17,26
	ctx.r17.s64 = 26;
	// lfs f11,-3988(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + -3988);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-20(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -20);
	ctx.f10.f64 = double(temp.f32);
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// lfs f7,92(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lis r22,0
	ctx.r22.s64 = 0;
	// lfs f6,-16(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// addi r14,r14,-14208
	ctx.r14.s64 = ctx.r14.s64 + -14208;
	// ori r22,r22,41900
	ctx.r22.u64 = ctx.r22.u64 | 41900;
	// lwz r24,4(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// stw r31,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r31.u32);
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// lwz r15,4(r9)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r24,r24,-14224
	ctx.r24.s64 = ctx.r24.s64 + -14224;
	// stw r24,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r24.u32);
	// mulli r24,r15,44
	ctx.r24.s64 = ctx.r15.s64 * 44;
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// stw r29,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r29.u32);
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r25,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r25.u32);
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r4,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r4.u32);
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r26,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r26.u32);
	// lwz r24,8924(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stw r3,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r3.u32);
	// lwz r24,8924(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stw r30,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r30.u32);
	// lwz r24,8924(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r24,r24,44
	ctx.r24.s64 = ctx.r24.s64 * 44;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stw r27,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r27.u32);
	// stw r23,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r23.u32);
	// stw r19,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r19.u32);
	// stw r20,19436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19436, ctx.r20.u32);
	// li r20,24336
	ctx.r20.s64 = 24336;
	// stwx r5,r11,r21
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r5.u32);
	// li r21,24278
	ctx.r21.s64 = 24278;
	// stw r18,19900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19900, ctx.r18.u32);
	// stw r5,28660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28660, ctx.r5.u32);
	// lwz r24,4(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r23,r24,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// rlwinm r24,r24,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r24,r6
	ctx.r24.u64 = ctx.r24.u64 + ctx.r6.u64;
	// stw r17,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r17.u32);
	// stfs f0,22508(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22508, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r23,r24,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// rlwinm r24,r24,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stfs f10,12(r24)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r23,r24,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// rlwinm r24,r24,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stfs f7,16(r24)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r23,r24,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r15,-248(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// li r19,7
	ctx.r19.s64 = 7;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// rlwinm r24,r24,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r16,r23,-14116
	ctx.r16.s64 = ctx.r23.s64 + -14116;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// lis r17,0
	ctx.r17.s64 = 0;
	// addi r18,r18,-14096
	ctx.r18.s64 = ctx.r18.s64 + -14096;
	// ori r17,r17,41904
	ctx.r17.u64 = ctx.r17.u64 | 41904;
	// stfs f6,20(r24)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r24.u32 + 20, temp.u32);
	// lwz r24,4(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r23,r24,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// rlwinm r24,r24,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// stw r28,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r28.u32);
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r24,r28,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// rlwinm r28,r28,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r24,r28,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r28,r24
	ctx.r28.u64 = ctx.r28.u64 + ctx.r24.u64;
	// rlwinm r28,r28,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r4,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r4.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// lwz r29,8924(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// lwz r29,8924(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// lwz r29,8924(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// li r28,50
	ctx.r28.s64 = 50;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// li r29,30
	ctx.r29.s64 = 30;
	// stw r15,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r15.u32);
	// stw r21,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r21.u32);
	// stw r14,19440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19440, ctx.r14.u32);
	// stw r5,28664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28664, ctx.r5.u32);
	// stwx r5,r11,r22
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r5.u32);
	// stw r20,19904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19904, ctx.r20.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r5,r5,52
	ctx.r5.s64 = ctx.r5.s64 * 52;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r19,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r19.u32);
	// stfs f0,22512(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22512, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r5,52
	ctx.r6.s64 = ctx.r5.s64 * 52;
	// ld r22,-200(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// stw r18,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r18.u32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lis r24,-32241
	ctx.r24.s64 = -2112946176;
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// li r5,750
	ctx.r5.s64 = 750;
	// li r26,24279
	ctx.r26.s64 = 24279;
	// stfs f10,12(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// li r25,24337
	ctx.r25.s64 = 24337;
	// lfs f2,-29644(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -29644);
	ctx.f2.f64 = double(temp.f32);
	// addi r24,r21,-14000
	ctx.r24.s64 = ctx.r21.s64 + -14000;
	// li r19,24
	ctx.r19.s64 = 24;
	// lis r23,-32241
	ctx.r23.s64 = -2112946176;
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// li r15,24338
	ctx.r15.s64 = 24338;
	// lfs f29,-29648(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -29648);
	ctx.f29.f64 = double(temp.f32);
	// addi r23,r20,-13984
	ctx.r23.s64 = ctx.r20.s64 + -13984;
	// li r20,24280
	ctx.r20.s64 = 24280;
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r6,52
	ctx.r6.s64 = ctx.r6.s64 * 52;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stfs f6,16(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r21,r6,41908
	ctx.r21.u64 = ctx.r6.u64 | 41908;
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r6,52
	ctx.r6.s64 = ctx.r6.s64 * 52;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stfs f11,20(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r8,r6,52
	ctx.r8.s64 = ctx.r6.s64 * 52;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r31,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r31.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r8,r6,52
	ctx.r8.s64 = ctx.r6.s64 * 52;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r29,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r29.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r8,r6,52
	ctx.r8.s64 = ctx.r6.s64 * 52;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r28,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r28.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r8,52
	ctx.r9.s64 = ctx.r8.s64 * 52;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r4,52
	ctx.r9.s64 = ctx.r4.s64 * 52;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r5.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r8,52
	ctx.r9.s64 = ctx.r8.s64 * 52;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r22,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r22.u32);
	// lwz r5,8924(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r10,r5,52
	ctx.r10.s64 = ctx.r5.s64 * 52;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// lwz r3,8924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// lwz r8,8924(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r11,r8,52
	ctx.r11.s64 = ctx.r8.s64 * 52;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,-272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// stw r27,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r27.u32);
	// stw r16,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r16.u32);
	// stw r26,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r26.u32);
	// stw r18,19444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19444, ctx.r18.u32);
	// stw r10,28668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28668, ctx.r10.u32);
	// stwx r10,r11,r17
	PPC_STORE_U32(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u32);
	// lwz r10,-268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// stw r25,19908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19908, ctx.r25.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r6,56
	ctx.r9.s64 = ctx.r6.s64 * 56;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// stw r19,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r19.u32);
	// stfs f0,22516(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22516, temp.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r4,56
	ctx.r9.s64 = ctx.r4.s64 * 56;
	// stw r23,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r23.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,25
	ctx.r7.s64 = 25;
	// li r6,30
	ctx.r6.s64 = 30;
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r5,500
	ctx.r5.s64 = 500;
	// li r30,16
	ctx.r30.s64 = 16;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// li r28,24281
	ctx.r28.s64 = 24281;
	// addi r29,r29,-13880
	ctx.r29.s64 = ctx.r29.s64 + -13880;
	// li r27,24339
	ctx.r27.s64 = 24339;
	// li r26,27
	ctx.r26.s64 = 27;
	// li r25,28
	ctx.r25.s64 = 28;
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r4,56
	ctx.r9.s64 = ctx.r4.s64 * 56;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r4,750
	ctx.r4.s64 = 750;
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r3,56
	ctx.r9.s64 = ctx.r3.s64 * 56;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// addi r3,r31,-13892
	ctx.r3.s64 = ctx.r31.s64 + -13892;
	// lis r31,0
	ctx.r31.s64 = 0;
	// stw r3,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r3.u32);
	// ori r31,r31,41912
	ctx.r31.u64 = ctx.r31.u64 | 41912;
	// stfs f29,20(r9)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r9,56
	ctx.r9.s64 = ctx.r9.s64 * 56;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r9,56
	ctx.r9.s64 = ctx.r9.s64 * 56;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r7,56
	ctx.r9.s64 = ctx.r7.s64 * 56;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r9,56
	ctx.r9.s64 = ctx.r9.s64 * 56;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r7,56
	ctx.r9.s64 = ctx.r7.s64 * 56;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r4.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r5,56
	ctx.r9.s64 = ctx.r5.s64 * 56;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// stw r9,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r9.u32);
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r9,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// lwz r3,8924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r8,r3,56
	ctx.r8.s64 = ctx.r3.s64 * 56;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r8,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r8.u32);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// lwz r6,8924(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r8,r6,56
	ctx.r8.s64 = ctx.r6.s64 * 56;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r9.u32);
	// lwz r4,8924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r24,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r24.u32);
	// stw r20,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r20.u32);
	// stw r23,19448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19448, ctx.r23.u32);
	// stw r15,19912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19912, ctx.r15.u32);
	// stwx r10,r11,r21
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r10,28672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28672, ctx.r10.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r10,-268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r18,r8,-13776
	ctx.r18.s64 = ctx.r8.s64 + -13776;
	// lwz r6,-248(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lwz r22,-260(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	// lfs f9,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f9.f64 = double(temp.f32);
	// li r4,20
	ctx.r4.s64 = 20;
	// li r3,30
	ctx.r3.s64 = 30;
	// lwz r21,-244(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 * 60;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r9,25
	ctx.r9.s64 = 25;
	// li r30,500
	ctx.r30.s64 = 500;
	// li r23,750
	ctx.r23.s64 = 750;
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lis r19,0
	ctx.r19.s64 = 0;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 * 60;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r20,r20,-13760
	ctx.r20.s64 = ctx.r20.s64 + -13760;
	// ori r19,r19,41916
	ctx.r19.u64 = ctx.r19.u64 | 41916;
	// li r17,24282
	ctx.r17.s64 = 24282;
	// li r16,24340
	ctx.r16.s64 = 24340;
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r8,r7,60
	ctx.r8.s64 = ctx.r7.s64 * 60;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// stw r5,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r5.u32);
	// stfs f0,22520(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22520, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r8,r7,60
	ctx.r8.s64 = ctx.r7.s64 * 60;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f10,12(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r8,23544(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 * 60;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f7,16(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r11,r5,60
	ctx.r11.s64 = ctx.r5.s64 * 60;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// stfs f6,20(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r8,60
	ctx.r10.s64 = ctx.r8.s64 * 60;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r4.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r5,60
	ctx.r10.s64 = ctx.r5.s64 * 60;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// stw r3,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r3.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r8,60
	ctx.r10.s64 = ctx.r8.s64 * 60;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r8,r24,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// stw r30,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r30.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r5,60
	ctx.r10.s64 = ctx.r5.s64 * 60;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r23.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r10,8924(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8924);
	// mulli r11,r10,60
	ctx.r11.s64 = ctx.r10.s64 * 60;
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stw r21,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r21.u32);
	// lwz r8,8924(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8924);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,-240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// rotlwi r9,r24,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// mulli r11,r8,60
	ctx.r11.s64 = ctx.r8.s64 * 60;
	// lwz r23,-236(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r4,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r4.u32);
	// li r30,25
	ctx.r30.s64 = 25;
	// lfs f4,-19780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19780);
	ctx.f4.f64 = double(temp.f32);
	// li r24,30
	ctx.r24.s64 = 30;
	// li r22,500
	ctx.r22.s64 = 500;
	// li r3,750
	ctx.r3.s64 = 750;
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// li r15,24283
	ctx.r15.s64 = 24283;
	// addi r14,r21,-13644
	ctx.r14.s64 = ctx.r21.s64 + -13644;
	// lwz r9,8924(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8924);
	// mulli r11,r9,60
	ctx.r11.s64 = ctx.r9.s64 * 60;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,-272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// stw r23,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r23.u32);
	// stw r28,576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 576, ctx.r28.u32);
	// stw r29,19452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19452, ctx.r29.u32);
	// li r29,1000
	ctx.r29.s64 = 1000;
	// stw r10,28676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28676, ctx.r10.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// stw r27,19916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19916, ctx.r27.u32);
	// lwz r10,-268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r7,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r26,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r26.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r4,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// stw r25,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r25.u32);
	// stfs f0,22524(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22524, temp.u32);
	// lwz r8,23544(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r9,r8,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f12,12(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r9,r6,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lwz r11,23544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// stfs f9,20(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r30.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// stw r24,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r24.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r22,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r22.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,-260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r3.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// li r24,12
	ctx.r24.s64 = 12;
	// lwz r6,-268(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r7,-264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// li r30,16
	ctx.r30.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r29.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r31,4
	ctx.r31.s64 = 4;
	// li r28,25
	ctx.r28.s64 = 25;
	// li r21,35
	ctx.r21.s64 = 35;
	// li r26,50
	ctx.r26.s64 = 50;
	// lfs f1,-30868(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30868);
	ctx.f1.f64 = double(temp.f32);
	// li r9,24341
	ctx.r9.s64 = 24341;
	// lis r25,0
	ctx.r25.s64 = 0;
	// stw r9,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r9.u32);
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// ori r25,r25,41920
	ctx.r25.u64 = ctx.r25.u64 | 41920;
	// li r27,60
	ctx.r27.s64 = 60;
	// stw r25,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r25.u32);
	// li r25,1250
	ctx.r25.s64 = 1250;
	// addi r23,r23,-13632
	ctx.r23.s64 = ctx.r23.s64 + -13632;
	// lwz r22,8924(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r9,r22,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r24,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r24.u32);
	// lwz r9,8924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r4.u32);
	// lwz r9,8924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r30,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r30.u32);
	// stw r18,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r18.u32);
	// stw r17,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r17.u32);
	// stw r20,19456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19456, ctx.r20.u32);
	// stw r5,28680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28680, ctx.r5.u32);
	// stwx r5,r11,r19
	PPC_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r5.u32);
	// stw r16,19920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19920, ctx.r16.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// stfs f0,22528(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22528, temp.u32);
	// lwz r9,23544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f6,12(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,23544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f11,16(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lwz r9,23544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// add r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,-252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 * 68;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 * 68;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r21,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 * 68;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 * 68;
	// add r28,r31,r10
	ctx.r28.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r31,40
	ctx.r31.s64 = 40;
	// stw r3,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 * 68;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// addi r18,r3,-13524
	ctx.r18.s64 = ctx.r3.s64 + -13524;
	// addi r16,r28,-13512
	ctx.r16.s64 = ctx.r28.s64 + -13512;
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r3,24344
	ctx.r3.s64 = 24344;
	// li r22,1200
	ctx.r22.s64 = 1200;
	// stw r3,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r3.u32);
	// mulli r3,r28,68
	ctx.r3.s64 = ctx.r28.s64 * 68;
	// lwz r28,-236(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// li r20,29
	ctx.r20.s64 = 29;
	// li r26,30
	ctx.r26.s64 = 30;
	// lis r19,0
	ctx.r19.s64 = 0;
	// li r17,24284
	ctx.r17.s64 = 24284;
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// ori r19,r19,41924
	ctx.r19.u64 = ctx.r19.u64 | 41924;
	// lwz r3,8924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 * 68;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// lwz r3,8924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 * 68;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lwz r3,8924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 * 68;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r14,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r14.u32);
	// stw r15,584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 584, ctx.r15.u32);
	// stw r23,19460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19460, ctx.r23.u32);
	// stw r5,28684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28684, ctx.r5.u32);
	// stw r28,19924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19924, ctx.r28.u32);
	// lwz r28,-240(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stwx r5,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r5.u32);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// stw r20,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r20.u32);
	// stfs f1,22532(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22532, temp.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r3,r9
	ctx.r28.u64 = ctx.r3.u64 + ctx.r9.u64;
	// li r3,21
	ctx.r3.s64 = 21;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r23,r28,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r23,r28,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// std r24,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.r24.u64);
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// lwz r23,-232(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// addi r20,r20,-13404
	ctx.r20.s64 = ctx.r20.s64 + -13404;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r20,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r20.u32);
	// li r15,34
	ctx.r15.s64 = 34;
	// add r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 + ctx.r10.u64;
	// lfs f4,84(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lis r23,0
	ctx.r23.s64 = 0;
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// li r24,24342
	ctx.r24.s64 = 24342;
	// addi r14,r14,-13384
	ctx.r14.s64 = ctx.r14.s64 + -13384;
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// ori r28,r23,41928
	ctx.r28.u64 = ctx.r23.u64 | 41928;
	// stw r28,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r28.u32);
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r23,r28,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// li r23,24285
	ctx.r23.s64 = 24285;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r23,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r23.u32);
	// add r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stw r25,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r25.u32);
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r23,r28,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r28,r10
	ctx.r23.u64 = ctx.r28.u64 + ctx.r10.u64;
	// li r28,2500
	ctx.r28.s64 = 2500;
	// stw r28,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r28.u32);
	// lwz r23,8924(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r20,r23,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// rlwinm r23,r23,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r23,r8
	ctx.r23.u64 = ctx.r23.u64 + ctx.r8.u64;
	// stw r4,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r4.u32);
	// lwz r23,8924(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r20,r23,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// rlwinm r23,r23,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r23,r8
	ctx.r23.u64 = ctx.r23.u64 + ctx.r8.u64;
	// stw r30,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r30.u32);
	// lwz r23,8924(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r20,r23,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// rlwinm r23,r23,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r23,r8
	ctx.r23.u64 = ctx.r23.u64 + ctx.r8.u64;
	// stw r3,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r3.u32);
	// stw r18,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r18.u32);
	// stw r17,588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 588, ctx.r17.u32);
	// stw r16,19464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19464, ctx.r16.u32);
	// stw r5,28688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28688, ctx.r5.u32);
	// stwx r5,r11,r19
	PPC_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r5.u32);
	// lwz r18,-244(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	// stw r18,19928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19928, ctx.r18.u32);
	// lwz r23,4(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r6
	ctx.r23.u64 = ctx.r23.u64 + ctx.r6.u64;
	// stw r15,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r15.u32);
	// stfs f1,22536(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22536, temp.u32);
	// lwz r23,23544(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r7
	ctx.r23.u64 = ctx.r23.u64 + ctx.r7.u64;
	// stfs f13,12(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + 12, temp.u32);
	// lwz r23,23544(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r7
	ctx.r23.u64 = ctx.r23.u64 + ctx.r7.u64;
	// stfs f9,16(r23)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r23.u32 + 16, temp.u32);
	// lwz r23,23544(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r7
	ctx.r23.u64 = ctx.r23.u64 + ctx.r7.u64;
	// stfs f4,20(r23)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r23.u32 + 20, temp.u32);
	// lwz r23,4(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 + ctx.r9.u64;
	// stw r26,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r26.u32);
	// lwz r23,4(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 + ctx.r9.u64;
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// addi r17,r20,-13308
	ctx.r17.s64 = ctx.r20.s64 + -13308;
	// lis r18,0
	ctx.r18.s64 = 0;
	// stw r31,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r31.u32);
	// li r16,24286
	ctx.r16.s64 = 24286;
	// lwz r23,4(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 + ctx.r9.u64;
	// addi r19,r19,-13296
	ctx.r19.s64 = ctx.r19.s64 + -13296;
	// ori r18,r18,41932
	ctx.r18.u64 = ctx.r18.u64 | 41932;
	// li r15,24343
	ctx.r15.s64 = 24343;
	// stw r27,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r27.u32);
	// lwz r23,4(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r10
	ctx.r23.u64 = ctx.r23.u64 + ctx.r10.u64;
	// stw r29,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r29.u32);
	// lwz r23,4(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r10
	ctx.r23.u64 = ctx.r23.u64 + ctx.r10.u64;
	// stw r25,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r25.u32);
	// lwz r23,4(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r10
	ctx.r23.u64 = ctx.r23.u64 + ctx.r10.u64;
	// stw r28,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r28.u32);
	// lwz r23,8924(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r8
	ctx.r23.u64 = ctx.r23.u64 + ctx.r8.u64;
	// stw r4,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r4.u32);
	// lwz r23,8924(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r8
	ctx.r23.u64 = ctx.r23.u64 + ctx.r8.u64;
	// stw r30,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r30.u32);
	// lwz r23,8924(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r23,r23,76
	ctx.r23.s64 = ctx.r23.s64 * 76;
	// add r23,r23,r8
	ctx.r23.u64 = ctx.r23.u64 + ctx.r8.u64;
	// stw r3,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r3.u32);
	// lwz r23,-232(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// stw r23,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r23.u32);
	// lwz r23,-236(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// stw r23,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r23.u32);
	// stw r14,19468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19468, ctx.r14.u32);
	// lwz r14,-240(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stw r24,19932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19932, ctx.r24.u32);
	// stw r5,28692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28692, ctx.r5.u32);
	// stwx r5,r11,r14
	PPC_STORE_U32(ctx.r11.u32 + ctx.r14.u32, ctx.r5.u32);
	// lwz r23,4(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r20,r23,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// rlwinm r23,r23,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r23,r6
	ctx.r23.u64 = ctx.r23.u64 + ctx.r6.u64;
	// stw r21,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r21.u32);
	// stfs f0,22540(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22540, temp.u32);
	// lwz r23,23544(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r21,r23,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r23,r21
	ctx.r23.u64 = ctx.r23.u64 + ctx.r21.u64;
	// rlwinm r23,r23,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r23,r7
	ctx.r23.u64 = ctx.r23.u64 + ctx.r7.u64;
	// stfs f5,12(r23)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r23.u32 + 12, temp.u32);
	// lwz r23,23544(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r21,r23,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r23,r21
	ctx.r23.u64 = ctx.r23.u64 + ctx.r21.u64;
	// rlwinm r23,r23,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r23,r7
	ctx.r23.u64 = ctx.r23.u64 + ctx.r7.u64;
	// stfs f7,16(r23)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r23.u32 + 16, temp.u32);
	// lwz r23,23544(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r21,r23,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r23,r21
	ctx.r23.u64 = ctx.r23.u64 + ctx.r21.u64;
	// rlwinm r23,r23,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r23,r7
	ctx.r23.u64 = ctx.r23.u64 + ctx.r7.u64;
	// stfs f2,20(r23)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r23.u32 + 20, temp.u32);
	// lwz r23,4(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r21,r23,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r23,r21
	ctx.r23.u64 = ctx.r23.u64 + ctx.r21.u64;
	// rlwinm r23,r23,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 + ctx.r9.u64;
	// stw r26,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r26.u32);
	// lwz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r23,r26,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r26,r23
	ctx.r26.u64 = ctx.r26.u64 + ctx.r23.u64;
	// rlwinm r26,r26,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r24,0
	ctx.r24.s64 = 0;
	// add r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 + ctx.r9.u64;
	// li r21,6
	ctx.r21.s64 = 6;
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// lis r14,-32243
	ctx.r14.s64 = -2113077248;
	// addi r20,r20,-13208
	ctx.r20.s64 = ctx.r20.s64 + -13208;
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// addi r14,r14,-13192
	ctx.r14.s64 = ctx.r14.s64 + -13192;
	// lwz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r23,r26,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r26,r23
	ctx.r26.u64 = ctx.r26.u64 + ctx.r23.u64;
	// rlwinm r26,r26,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 + ctx.r9.u64;
	// stw r27,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r27.u32);
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r23,r26,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r26,r23
	ctx.r26.u64 = ctx.r26.u64 + ctx.r23.u64;
	// li r23,5
	ctx.r23.s64 = 5;
	// rlwinm r26,r26,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 + ctx.r10.u64;
	// stw r29,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r29.u32);
	// ori r29,r24,41936
	ctx.r29.u64 = ctx.r24.u64 | 41936;
	// li r26,24287
	ctx.r26.s64 = 24287;
	// stw r29,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r29.u32);
	// li r24,24345
	ctx.r24.s64 = 24345;
	// stw r26,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r26.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r26,r29,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r25,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r25.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r26,r29,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// lwz r29,8924(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r26,r29,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// stw r4,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r4.u32);
	// lwz r29,8924(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r26,r29,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// rlwinm r29,r29,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// lwz r30,8924(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r30,r30,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r30,r8
	ctx.r29.u64 = ctx.r30.u64 + ctx.r8.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// stw r17,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r17.u32);
	// stw r16,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r16.u32);
	// stw r19,19472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19472, ctx.r19.u32);
	// stw r5,28696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28696, ctx.r5.u32);
	// stw r15,19936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19936, ctx.r15.u32);
	// stwx r5,r11,r18
	PPC_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r5.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r21,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r21.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r23,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r23.u32);
	// stfs f0,22544(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22544, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stfs f8,12(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stfs f12,16(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// li r29,80
	ctx.r29.s64 = 80;
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r21,r21,-13104
	ctx.r21.s64 = ctx.r21.s64 + -13104;
	// li r26,24
	ctx.r26.s64 = 24;
	// stw r21,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r21.u32);
	// lis r19,0
	ctx.r19.s64 = 0;
	// li r25,10
	ctx.r25.s64 = 10;
	// stfs f13,20(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// li r23,15
	ctx.r23.s64 = 15;
	// ori r19,r19,41940
	ctx.r19.u64 = ctx.r19.u64 | 41940;
	// li r18,24288
	ctx.r18.s64 = 24288;
	// li r17,24346
	ctx.r17.s64 = 24346;
	// li r16,17
	ctx.r16.s64 = 17;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r31,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r31.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r27,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r27.u32);
	// li r27,5000
	ctx.r27.s64 = 5000;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r29,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r29.u32);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r29,20
	ctx.r29.s64 = 20;
	// addi r21,r5,-13088
	ctx.r21.s64 = ctx.r5.s64 + -13088;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r22,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r22.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r28,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r28.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r27,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r27.u32);
	// lwz r5,8924(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r3,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// lwz r5,8924(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r5,r5,84
	ctx.r5.s64 = ctx.r5.s64 * 84;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// lwz r3,8924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r5,r3,84
	ctx.r5.s64 = ctx.r3.s64 * 84;
	// add r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r26,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r26.u32);
	// stw r20,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r20.u32);
	// lwz r20,-232(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// stw r20,600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 600, ctx.r20.u32);
	// lwz r20,-236(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// stw r14,19476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19476, ctx.r14.u32);
	// stw r24,19940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19940, ctx.r24.u32);
	// stw r30,28700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28700, ctx.r30.u32);
	// stwx r30,r11,r20
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, ctx.r30.u32);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r5,r3,88
	ctx.r5.s64 = ctx.r3.s64 * 88;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r31,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r31.u32);
	// stfs f0,22548(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22548, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r5,88
	ctx.r6.s64 = ctx.r5.s64 * 88;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r6,88
	ctx.r6.s64 = ctx.r6.s64 * 88;
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stfs f6,16(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r3,88
	ctx.r6.s64 = ctx.r3.s64 * 88;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stfs f11,20(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// ld r24,-200(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// li r28,16
	ctx.r28.s64 = 16;
	// mulli r7,r6,88
	ctx.r7.s64 = ctx.r6.s64 * 88;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r20,r27,-12992
	ctx.r20.s64 = ctx.r27.s64 + -12992;
	// lis r26,0
	ctx.r26.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r31,20
	ctx.r31.s64 = 20;
	// stw r25,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r25.u32);
	// ori r22,r26,41944
	ctx.r22.u64 = ctx.r26.u64 | 41944;
	// li r15,24289
	ctx.r15.s64 = 24289;
	// li r14,24347
	ctx.r14.s64 = 24347;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r7,r3,88
	ctx.r7.s64 = ctx.r3.s64 * 88;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r23,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r23.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r7,r6,88
	ctx.r7.s64 = ctx.r6.s64 * 88;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r7,-240(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r6,-268(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// stw r29,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r29.u32);
	// li r5,350
	ctx.r5.s64 = 350;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r3,88
	ctx.r9.s64 = ctx.r3.s64 * 88;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r3,500
	ctx.r3.s64 = 500;
	// li r29,650
	ctx.r29.s64 = 650;
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r23,r9,-13008
	ctx.r23.s64 = ctx.r9.s64 + -13008;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r9,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r9.u32);
	// mulli r9,r27,88
	ctx.r9.s64 = ctx.r27.s64 * 88;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r3.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r3,88
	ctx.r9.s64 = ctx.r3.s64 * 88;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r29,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r29.u32);
	// lwz r9,8924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 * 88;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// li r24,10
	ctx.r24.s64 = 10;
	// lwz r10,8924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 * 88;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r4.u32);
	// lwz r4,8924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r11,r4,88
	ctx.r11.s64 = ctx.r4.s64 * 88;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,-272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// lwz r8,-264(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r7,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r7.u32);
	// stw r18,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r18.u32);
	// stw r21,19480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19480, ctx.r21.u32);
	// stw r17,19944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19944, ctx.r17.u32);
	// stw r5,28704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28704, ctx.r5.u32);
	// stwx r5,r11,r19
	PPC_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r5.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r16,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r16.u32);
	// stfs f0,22552(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22552, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r10,r7,92
	ctx.r10.s64 = ctx.r7.s64 * 92;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r10,r3,92
	ctx.r10.s64 = ctx.r3.s64 * 92;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stfs f13,16(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r9,23544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r10,r9,92
	ctx.r10.s64 = ctx.r9.s64 * 92;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stfs f9,20(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// lwz r10,-252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// li r25,350
	ctx.r25.s64 = 350;
	// li r27,650
	ctx.r27.s64 = 650;
	// li r26,12
	ctx.r26.s64 = 12;
	// lis r29,-32241
	ctx.r29.s64 = -2112946176;
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// addi r21,r21,-12908
	ctx.r21.s64 = ctx.r21.s64 + -12908;
	// addi r19,r19,-12896
	ctx.r19.s64 = ctx.r19.s64 + -12896;
	// lfs f31,-29652(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -29652);
	ctx.f31.f64 = double(temp.f32);
	// li r18,24290
	ctx.r18.s64 = 24290;
	// li r17,24348
	ctx.r17.s64 = 24348;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r4,92
	ctx.r9.s64 = ctx.r4.s64 * 92;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r9,92
	ctx.r9.s64 = ctx.r9.s64 * 92;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r30,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r30.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r4,92
	ctx.r9.s64 = ctx.r4.s64 * 92;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,-256(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r3,500
	ctx.r3.s64 = 500;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r7,r7,92
	ctx.r7.s64 = ctx.r7.s64 * 92;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r25,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r25.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lfs f11,29744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r16,r7,41948
	ctx.r16.u64 = ctx.r7.u64 | 41948;
	// lfs f3,-30228(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -30228);
	ctx.f3.f64 = double(temp.f32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r7,r4,92
	ctx.r7.s64 = ctx.r4.s64 * 92;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r3,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r3.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r7,r4,92
	ctx.r7.s64 = ctx.r4.s64 * 92;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r7,-260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	// stw r27,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r27.u32);
	// lwz r4,8924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r4,r4,92
	ctx.r4.s64 = ctx.r4.s64 * 92;
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// lwz r4,8924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r4,r4,92
	ctx.r4.s64 = ctx.r4.s64 * 92;
	// add r29,r4,r7
	ctx.r29.u64 = ctx.r4.u64 + ctx.r7.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r4,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r4.u32);
	// lwz r29,8924(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 * 92;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r23,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r23.u32);
	// stw r15,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r15.u32);
	// stw r20,19484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19484, ctx.r20.u32);
	// stwx r5,r11,r22
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r5.u32);
	// stw r14,19948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19948, ctx.r14.u32);
	// stw r5,28708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28708, ctx.r5.u32);
	// lwz r22,-232(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r29,4(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// stw r22,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r22.u32);
	// stfs f11,22556(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22556, temp.u32);
	// lwz r29,23544(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// stfs f3,12(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lwz r29,23544(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// lwz r22,-228(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r20,r20,-12796
	ctx.r20.s64 = ctx.r20.s64 + -12796;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// lfs f30,-27236(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -27236);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,16(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// lwz r29,23544(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// stfs f13,20(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// li r23,14
	ctx.r23.s64 = 14;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r24,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r24.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r24,r29,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r24,r29,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r24,r29,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r25,r29,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r25,r29,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// lwz r29,8924(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r27,r29,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// stw r26,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r26.u32);
	// lwz r29,8924(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r27,r29,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// stw r4,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r4.u32);
	// lwz r29,8924(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r27,r29,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// rlwinm r29,r29,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 + ctx.r7.u64;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r21,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r21.u32);
	// stw r18,612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 612, ctx.r18.u32);
	// stw r19,19488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19488, ctx.r19.u32);
	// stw r17,19952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19952, ctx.r17.u32);
	// stw r5,28712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28712, ctx.r5.u32);
	// stwx r5,r11,r16
	PPC_STORE_U32(ctx.r11.u32 + ctx.r16.u32, ctx.r5.u32);
	// lwz r29,4(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 * 100;
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// stw r23,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r23.u32);
	// stfs f11,22560(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22560, temp.u32);
	// lwz r29,23544(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 * 100;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// li r27,25
	ctx.r27.s64 = 25;
	// lis r25,0
	ctx.r25.s64 = 0;
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// ori r23,r25,41952
	ctx.r23.u64 = ctx.r25.u64 | 41952;
	// stfs f30,12(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// li r22,24291
	ctx.r22.s64 = 24291;
	// addi r24,r24,-12776
	ctx.r24.s64 = ctx.r24.s64 + -12776;
	// li r21,24349
	ctx.r21.s64 = 24349;
	// li r19,36
	ctx.r19.s64 = 36;
	// li r18,37
	ctx.r18.s64 = 37;
	// lwz r29,23544(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 * 100;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// stfs f10,16(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// lwz r29,23544(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 * 100;
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// stfs f7,20(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 * 100;
	// add r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// li r29,750
	ctx.r29.s64 = 750;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 * 100;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 * 100;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 * 100;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 * 100;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 * 100;
	// add r25,r30,r9
	ctx.r25.u64 = ctx.r30.u64 + ctx.r9.u64;
	// li r30,1000
	ctx.r30.s64 = 1000;
	// stw r30,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r30.u32);
	// lwz r25,8924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r25,r25,100
	ctx.r25.s64 = ctx.r25.s64 * 100;
	// add r25,r25,r7
	ctx.r25.u64 = ctx.r25.u64 + ctx.r7.u64;
	// stw r26,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r26.u32);
	// lwz r26,8924(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 * 100;
	// add r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 + ctx.r7.u64;
	// stw r4,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r4.u32);
	// lwz r26,8924(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 * 100;
	// add r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 + ctx.r7.u64;
	// stw r28,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r28.u32);
	// stw r20,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r20.u32);
	// stw r22,616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 616, ctx.r22.u32);
	// stw r24,19492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19492, ctx.r24.u32);
	// stw r21,19956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19956, ctx.r21.u32);
	// stw r5,28716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28716, ctx.r5.u32);
	// stwx r5,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r5.u32);
	// lwz r26,4(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r26,r26,104
	ctx.r26.s64 = ctx.r26.s64 * 104;
	// add r26,r26,r6
	ctx.r26.u64 = ctx.r26.u64 + ctx.r6.u64;
	// stw r19,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r19.u32);
	// lwz r26,4(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r26,r26,104
	ctx.r26.s64 = ctx.r26.s64 * 104;
	// add r26,r26,r6
	ctx.r26.u64 = ctx.r26.u64 + ctx.r6.u64;
	// stw r18,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r18.u32);
	// stfs f1,22564(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22564, temp.u32);
	// lwz r26,23544(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r26,r26,104
	ctx.r26.s64 = ctx.r26.s64 * 104;
	// add r26,r26,r8
	ctx.r26.u64 = ctx.r26.u64 + ctx.r8.u64;
	// stfs f12,12(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// lwz r26,23544(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r26,r26,104
	ctx.r26.s64 = ctx.r26.s64 * 104;
	// add r26,r26,r8
	ctx.r26.u64 = ctx.r26.u64 + ctx.r8.u64;
	// stfs f9,16(r26)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + 16, temp.u32);
	// lwz r26,23544(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// lis r24,0
	ctx.r24.s64 = 0;
	// lwz r23,-224(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// mulli r26,r26,104
	ctx.r26.s64 = ctx.r26.s64 * 104;
	// lfs f1,-4472(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -4472);
	ctx.f1.f64 = double(temp.f32);
	// add r26,r26,r8
	ctx.r26.u64 = ctx.r26.u64 + ctx.r8.u64;
	// ori r24,r24,41956
	ctx.r24.u64 = ctx.r24.u64 | 41956;
	// li r20,24292
	ctx.r20.s64 = 24292;
	// addi r22,r22,-12648
	ctx.r22.s64 = ctx.r22.s64 + -12648;
	// li r23,24350
	ctx.r23.s64 = 24350;
	// stfs f4,20(r26)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r26.u32 + 20, temp.u32);
	// li r19,7
	ctx.r19.s64 = 7;
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r26,r26,104
	ctx.r26.s64 = ctx.r26.s64 * 104;
	// add r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 + ctx.r10.u64;
	// stw r31,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r31.u32);
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r26,r26,104
	ctx.r26.s64 = ctx.r26.s64 * 104;
	// add r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 + ctx.r10.u64;
	// stw r27,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r27.u32);
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r26,r26,104
	ctx.r26.s64 = ctx.r26.s64 * 104;
	// add r25,r26,r10
	ctx.r25.u64 = ctx.r26.u64 + ctx.r10.u64;
	// li r26,30
	ctx.r26.s64 = 30;
	// stw r26,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r26.u32);
	// lis r25,-32243
	ctx.r25.s64 = -2113077248;
	// addi r21,r25,-12660
	ctx.r21.s64 = ctx.r25.s64 + -12660;
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r25,r25,104
	ctx.r25.s64 = ctx.r25.s64 * 104;
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// stw r3,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r3.u32);
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r25,r25,104
	ctx.r25.s64 = ctx.r25.s64 * 104;
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// stw r29,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r29.u32);
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r25,r25,104
	ctx.r25.s64 = ctx.r25.s64 * 104;
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// stw r30,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r30.u32);
	// lwz r25,8924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r25,r25,104
	ctx.r25.s64 = ctx.r25.s64 * 104;
	// add r25,r25,r7
	ctx.r25.u64 = ctx.r25.u64 + ctx.r7.u64;
	// stw r4,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r4.u32);
	// lwz r25,8924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r25,r25,104
	ctx.r25.s64 = ctx.r25.s64 * 104;
	// add r25,r25,r7
	ctx.r25.u64 = ctx.r25.u64 + ctx.r7.u64;
	// stw r28,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r28.u32);
	// lwz r25,8924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r25,r25,104
	ctx.r25.s64 = ctx.r25.s64 * 104;
	// add r18,r25,r7
	ctx.r18.u64 = ctx.r25.u64 + ctx.r7.u64;
	// li r25,21
	ctx.r25.s64 = 21;
	// stw r25,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r25.u32);
	// stw r21,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r21.u32);
	// stw r20,620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 620, ctx.r20.u32);
	// stw r22,19496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19496, ctx.r22.u32);
	// stwx r5,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r5.u32);
	// stw r23,19960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19960, ctx.r23.u32);
	// stw r5,28720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28720, ctx.r5.u32);
	// lwz r24,4(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// add r24,r24,r6
	ctx.r24.u64 = ctx.r24.u64 + ctx.r6.u64;
	// stw r19,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r19.u32);
	// stfs f1,22568(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22568, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stfs f8,12(r24)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stfs f12,16(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stfs f13,20(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 20, temp.u32);
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r31,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r31.u32);
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// stw r30,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r30.u32);
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// lis r17,-32243
	ctx.r17.s64 = -2113077248;
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// addi r17,r17,-12448
	ctx.r17.s64 = ctx.r17.s64 + -12448;
	// addi r23,r23,-12548
	ctx.r23.s64 = ctx.r23.s64 + -12548;
	// stw r27,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r27.u32);
	// li r20,24293
	ctx.r20.s64 = 24293;
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r17,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r17.u32);
	// lis r22,0
	ctx.r22.s64 = 0;
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// ori r22,r22,41960
	ctx.r22.u64 = ctx.r22.u64 | 41960;
	// addi r21,r21,-12536
	ctx.r21.s64 = ctx.r21.s64 + -12536;
	// stw r26,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r26.u32);
	// li r19,24351
	ctx.r19.s64 = 24351;
	// li r18,26
	ctx.r18.s64 = 26;
	// lis r15,0
	ctx.r15.s64 = 0;
	// li r14,24294
	ctx.r14.s64 = 24294;
	// ori r15,r15,41964
	ctx.r15.u64 = ctx.r15.u64 | 41964;
	// lis r16,-32243
	ctx.r16.s64 = -2113077248;
	// stw r14,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, ctx.r14.u32);
	// stw r15,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r15.u32);
	// lis r15,-32243
	ctx.r15.s64 = -2113077248;
	// addi r16,r16,-12432
	ctx.r16.s64 = ctx.r16.s64 + -12432;
	// li r14,50
	ctx.r14.s64 = 50;
	// lwz r24,4(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// stw r3,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r3.u32);
	// lwz r24,4(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// stw r29,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r29.u32);
	// lwz r24,4(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// stw r30,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r30.u32);
	// lis r24,-32241
	ctx.r24.s64 = -2112946176;
	// lfs f28,-30400(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -30400);
	ctx.f28.f64 = double(temp.f32);
	// li r24,24352
	ctx.r24.s64 = 24352;
	// stw r24,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r24.u32);
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// stw r24,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r24.u32);
	// lwz r17,8924(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r24,r17,108
	ctx.r24.s64 = ctx.r17.s64 * 108;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stw r4,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r4.u32);
	// lwz r24,8924(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r24,r24,108
	ctx.r24.s64 = ctx.r24.s64 * 108;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stw r28,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r28.u32);
	// lwz r28,8924(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r28,r28,108
	ctx.r28.s64 = ctx.r28.s64 * 108;
	// add r7,r28,r7
	ctx.r7.u64 = ctx.r28.u64 + ctx.r7.u64;
	// stw r25,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r25.u32);
	// stw r23,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r23.u32);
	// stw r20,624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 624, ctx.r20.u32);
	// stw r21,19500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19500, ctx.r21.u32);
	// stw r5,28724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28724, ctx.r5.u32);
	// stwx r5,r11,r22
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r5.u32);
	// stw r19,19964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19964, ctx.r19.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r7,r5,112
	ctx.r7.s64 = ctx.r5.s64 * 112;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r18,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r18.u32);
	// stfs f28,22572(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22572, temp.u32);
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r6,112
	ctx.r7.s64 = ctx.r6.s64 * 112;
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfs f5,12(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r7,23544(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r7,r7,112
	ctx.r7.s64 = ctx.r7.s64 * 112;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfs f7,16(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r11,r5,112
	ctx.r11.s64 = ctx.r5.s64 * 112;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfs f2,20(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r11,r8,112
	ctx.r11.s64 = ctx.r8.s64 * 112;
	// lwz r23,-228(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-248(r1)
	PPC_STORE_U32(ctx.r1.u32 + -248, ctx.r29.u32);
	// stw r4,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r4.u32);
	// li r28,24295
	ctx.r28.s64 = 24295;
	// stw r30,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r30.u32);
	// stw r14,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r14.u32);
	// stw r16,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r16.u32);
	// stw r31,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r31.u32);
	// li r31,24
	ctx.r31.s64 = 24;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r11,r6,112
	ctx.r11.s64 = ctx.r6.s64 * 112;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r27.u32);
	// li r27,24353
	ctx.r27.s64 = 24353;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r26.u32);
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r11,r8,112
	ctx.r11.s64 = ctx.r8.s64 * 112;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,-260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r3,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
	// rotlwi r7,r30,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// li r30,4
	ctx.r30.s64 = 4;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r11,r6,112
	ctx.r11.s64 = ctx.r6.s64 * 112;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r6,21
	ctx.r6.s64 = 21;
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// lwz r5,-272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 * 112;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,1200
	ctx.r11.s64 = 1200;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r11,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r11.u32);
	// ori r29,r9,41968
	ctx.r29.u64 = ctx.r9.u64 | 41968;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r7,r23,-12344
	ctx.r7.s64 = ctx.r23.s64 + -12344;
	// lwz r23,-232(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// addi r3,r15,-12328
	ctx.r3.s64 = ctx.r15.s64 + -12328;
	// lwz r11,8924(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8924);
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// lwz r5,8924(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r9,r5,112
	ctx.r9.s64 = ctx.r5.s64 * 112;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r8.u32);
	// lwz r9,8924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 * 112;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r6,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// stw r23,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r23.u32);
	// lwz r23,-236(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// stw r23,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r23.u32);
	// lwz r23,-240(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stw r16,19504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19504, ctx.r16.u32);
	// stw r10,28728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28728, ctx.r10.u32);
	// stwx r10,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r10.u32);
	// lwz r23,-244(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	// lwz r10,-268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// stw r23,19968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19968, ctx.r23.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r6,116
	ctx.r9.s64 = ctx.r6.s64 * 116;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r8,r4,116
	ctx.r8.s64 = ctx.r4.s64 * 116;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r31,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r31.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r24,750
	ctx.r24.s64 = 750;
	// lwz r25,-272(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// lis r22,0
	ctx.r22.s64 = 0;
	// mulli r8,r6,116
	ctx.r8.s64 = ctx.r6.s64 * 116;
	// lwz r23,-260(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r21,-216(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// stw r24,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r24.u32);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// ori r24,r22,41972
	ctx.r24.u64 = ctx.r22.u64 | 41972;
	// li r31,29
	ctx.r31.s64 = 29;
	// addi r26,r26,-12244
	ctx.r26.s64 = ctx.r26.s64 + -12244;
	// stw r30,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r30.u32);
	// stfs f1,22576(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22576, temp.u32);
	// lwz r30,-228(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// li r22,24296
	ctx.r22.s64 = 24296;
	// li r18,24354
	ctx.r18.s64 = 24354;
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r8,r4,116
	ctx.r8.s64 = ctx.r4.s64 * 116;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f30,12(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r8,r6,116
	ctx.r8.s64 = ctx.r6.s64 * 116;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f10,16(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r8,116
	ctx.r10.s64 = ctx.r8.s64 * 116;
	// lwz r8,-248(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// rotlwi r9,r14,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r5,116
	ctx.r10.s64 = ctx.r5.s64 * 116;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,35
	ctx.r10.s64 = 35;
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r4,-220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// addi r19,r10,-12232
	ctx.r19.s64 = ctx.r10.s64 + -12232;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 * 116;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r9,116
	ctx.r10.s64 = ctx.r9.s64 * 116;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r9,116
	ctx.r10.s64 = ctx.r9.s64 * 116;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r4.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r4,116
	ctx.r10.s64 = ctx.r4.s64 * 116;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r23,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r23.u32, 0);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r9,8924(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8924);
	// mulli r11,r9,116
	ctx.r11.s64 = ctx.r9.s64 * 116;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r21,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r21.u32);
	// lwz r4,8924(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8924);
	// mulli r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 * 116;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r11,r25,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// stw r6,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r6.u32);
	// lwz r8,8924(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r9,r8,116
	ctx.r9.s64 = ctx.r8.s64 * 116;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r5.u32);
	// stw r7,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r7.u32);
	// stw r28,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r28.u32);
	// li r25,60
	ctx.r25.s64 = 60;
	// stw r3,19508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19508, ctx.r3.u32);
	// li r30,2500
	ctx.r30.s64 = 2500;
	// stwx r10,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
	// li r29,40
	ctx.r29.s64 = 40;
	// stw r10,28732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28732, ctx.r10.u32);
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// stw r27,19972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19972, ctx.r27.u32);
	// li r27,1250
	ctx.r27.s64 = 1250;
	// lwz r10,-268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// addi r21,r21,-12140
	ctx.r21.s64 = ctx.r21.s64 + -12140;
	// lwz r28,-216(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// li r20,24297
	ctx.r20.s64 = 24297;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r5,120
	ctx.r9.s64 = ctx.r5.s64 * 120;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// stfs f0,22580(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22580, temp.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r31,21
	ctx.r31.s64 = 21;
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r3,120
	ctx.r9.s64 = ctx.r3.s64 * 120;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// stfs f3,12(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r8,23544(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r8,120
	ctx.r9.s64 = ctx.r8.s64 * 120;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r9,30
	ctx.r9.s64 = 30;
	// rotlwi r8,r23,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r23.u32, 0);
	// li r23,34
	ctx.r23.s64 = 34;
	// stfs f31,16(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r11,r6,120
	ctx.r11.s64 = ctx.r6.s64 * 120;
	// lwz r6,-268(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// stfs f13,20(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r5,120
	ctx.r10.s64 = ctx.r5.s64 * 120;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r17,r9,-12120
	ctx.r17.s64 = ctx.r9.s64 + -12120;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r9,120
	ctx.r10.s64 = ctx.r9.s64 * 120;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// stw r25,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r25.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r9,120
	ctx.r10.s64 = ctx.r9.s64 * 120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r11,r9,120
	ctx.r11.s64 = ctx.r9.s64 * 120;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r11,r9,120
	ctx.r11.s64 = ctx.r9.s64 * 120;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// stw r30,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r30.u32);
	// lwz r9,8924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 * 120;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// lwz r9,8924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 * 120;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r31.u32);
	// lwz r9,8924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 * 120;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lis r29,0
	ctx.r29.s64 = 0;
	// li r25,30
	ctx.r25.s64 = 30;
	// li r28,40
	ctx.r28.s64 = 40;
	// stw r3,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r3.u32);
	// stw r26,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r26.u32);
	// stw r22,636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 636, ctx.r22.u32);
	// ori r22,r29,41976
	ctx.r22.u64 = ctx.r29.u64 | 41976;
	// stw r19,19512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19512, ctx.r19.u32);
	// stwx r5,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r5.u32);
	// stw r18,19976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19976, ctx.r18.u32);
	// stw r5,28736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28736, ctx.r5.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r9,r9,124
	ctx.r9.s64 = ctx.r9.s64 * 124;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r23,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r23.u32);
	// stfs f0,22584(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22584, temp.u32);
	// li r23,24355
	ctx.r23.s64 = 24355;
	// lwz r9,23544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r9,124
	ctx.r9.s64 = ctx.r9.s64 * 124;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f3,12(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lwz r9,23544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r9,124
	ctx.r9.s64 = ctx.r9.s64 * 124;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f31,16(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lwz r9,23544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r9,r9,124
	ctx.r9.s64 = ctx.r9.s64 * 124;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stfs f13,20(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lwz r9,-252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r29,r29,124
	ctx.r29.s64 = ctx.r29.s64 * 124;
	// add r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r29,r29,124
	ctx.r29.s64 = ctx.r29.s64 * 124;
	// add r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r29,r29,124
	ctx.r29.s64 = ctx.r29.s64 * 124;
	// add r26,r29,r9
	ctx.r26.u64 = ctx.r29.u64 + ctx.r9.u64;
	// li r29,60
	ctx.r29.s64 = 60;
	// stw r29,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r29.u32);
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r26,r26,124
	ctx.r26.s64 = ctx.r26.s64 * 124;
	// add r24,r26,r10
	ctx.r24.u64 = ctx.r26.u64 + ctx.r10.u64;
	// li r26,750
	ctx.r26.s64 = 750;
	// stw r26,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r26.u32);
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r24,r24,124
	ctx.r24.s64 = ctx.r24.s64 * 124;
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r27,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r27.u32);
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r24,r24,124
	ctx.r24.s64 = ctx.r24.s64 * 124;
	// add r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stw r30,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r30.u32);
	// lwz r24,8924(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r24,r24,124
	ctx.r24.s64 = ctx.r24.s64 * 124;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stw r4,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r4.u32);
	// lwz r24,8924(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r24,r24,124
	ctx.r24.s64 = ctx.r24.s64 * 124;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stw r31,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r31.u32);
	// lwz r24,8924(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r24,r24,124
	ctx.r24.s64 = ctx.r24.s64 * 124;
	// add r24,r24,r8
	ctx.r24.u64 = ctx.r24.u64 + ctx.r8.u64;
	// stw r3,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r3.u32);
	// stw r21,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r21.u32);
	// stw r20,640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 640, ctx.r20.u32);
	// stw r17,19516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19516, ctx.r17.u32);
	// stw r23,19980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19980, ctx.r23.u32);
	// stw r5,28740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28740, ctx.r5.u32);
	// stwx r5,r11,r22
	PPC_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r5.u32);
	// lwz r24,4(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r24,r24,7,0,24
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 7) & 0xFFFFFF80;
	// add r24,r24,r6
	ctx.r24.u64 = ctx.r24.u64 + ctx.r6.u64;
	// stw r4,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r4.u32);
	// stfs f11,22588(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22588, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r24,r24,7,0,24
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 7) & 0xFFFFFF80;
	// lis r23,0
	ctx.r23.s64 = 0;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// ori r23,r23,41980
	ctx.r23.u64 = ctx.r23.u64 | 41980;
	// addi r22,r22,-12000
	ctx.r22.s64 = ctx.r22.s64 + -12000;
	// li r21,24356
	ctx.r21.s64 = 24356;
	// stfs f30,12(r24)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r24.u32 + 12, temp.u32);
	// li r20,42
	ctx.r20.s64 = 42;
	// stw r22,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r22.u32);
	// li r19,80
	ctx.r19.s64 = 80;
	// li r18,1500
	ctx.r18.s64 = 1500;
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r24,r24,7,0,24
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 7) & 0xFFFFFF80;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stfs f5,16(r24)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r24.u32 + 16, temp.u32);
	// lwz r24,23544(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// rlwinm r24,r24,7,0,24
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 7) & 0xFFFFFF80;
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// stfs f10,20(r24)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r24.u32 + 20, temp.u32);
	// lwz r24,4(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r24,r24,7,0,24
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 7) & 0xFFFFFF80;
	// add r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 + ctx.r9.u64;
	// stw r25,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r25.u32);
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r25,r25,7,0,24
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 7) & 0xFFFFFF80;
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// addi r24,r24,-12016
	ctx.r24.s64 = ctx.r24.s64 + -12016;
	// stw r28,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r28.u32);
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r25,r25,7,0,24
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 7) & 0xFFFFFF80;
	// add r25,r25,r9
	ctx.r25.u64 = ctx.r25.u64 + ctx.r9.u64;
	// stw r29,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r29.u32);
	// lwz r25,4(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r25,r25,7,0,24
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 7) & 0xFFFFFF80;
	// add r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 + ctx.r10.u64;
	// stw r26,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r26.u32);
	// li r25,24298
	ctx.r25.s64 = 24298;
	// lwz r26,4(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r26,r26,7,0,24
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 7) & 0xFFFFFF80;
	// add r26,r26,r10
	ctx.r26.u64 = ctx.r26.u64 + ctx.r10.u64;
	// stw r27,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r27.u32);
	// lwz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r27,r27,7,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// add r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// lwz r27,8924(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r27,r27,7,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// add r27,r27,r8
	ctx.r27.u64 = ctx.r27.u64 + ctx.r8.u64;
	// stw r4,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r4.u32);
	// lwz r27,8924(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r27,r27,7,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// add r27,r27,r8
	ctx.r27.u64 = ctx.r27.u64 + ctx.r8.u64;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// lwz r27,8924(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// rlwinm r27,r27,7,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// add r27,r27,r8
	ctx.r27.u64 = ctx.r27.u64 + ctx.r8.u64;
	// stw r3,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r3.u32);
	// stw r24,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r24.u32);
	// stw r25,644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 644, ctx.r25.u32);
	// stw r22,19520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19520, ctx.r22.u32);
	// stw r5,28744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28744, ctx.r5.u32);
	// stwx r5,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r5.u32);
	// stw r21,19984(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19984, ctx.r21.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r5,r5,132
	ctx.r5.s64 = ctx.r5.s64 * 132;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r20,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r20.u32);
	// stfs f11,22592(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22592, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r5,132
	ctx.r6.s64 = ctx.r5.s64 * 132;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stfs f5,12(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r5,132
	ctx.r6.s64 = ctx.r5.s64 * 132;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stfs f8,16(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r6,r5,132
	ctx.r6.s64 = ctx.r5.s64 * 132;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stfs f3,20(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stw r3,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r3.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r24,0
	ctx.r24.s64 = 0;
	// addi r3,r3,-11888
	ctx.r3.s64 = ctx.r3.s64 + -11888;
	// li r26,24300
	ctx.r26.s64 = 24300;
	// li r25,24361
	ctx.r25.s64 = 24361;
	// ori r24,r24,41992
	ctx.r24.u64 = ctx.r24.u64 | 41992;
	// li r22,24301
	ctx.r22.s64 = 24301;
	// li r21,24362
	ctx.r21.s64 = 24362;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r7,r6,132
	ctx.r7.s64 = ctx.r6.s64 * 132;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r28,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r28.u32);
	// lis r28,0
	ctx.r28.s64 = 0;
	// ori r28,r28,41988
	ctx.r28.u64 = ctx.r28.u64 | 41988;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r7,r7,132
	ctx.r7.s64 = ctx.r7.s64 * 132;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r29,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r29.u32);
	// lwz r29,-208(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// stw r3,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r3.u32);
	// li r3,24299
	ctx.r3.s64 = 24299;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r7,r5,132
	ctx.r7.s64 = ctx.r5.s64 * 132;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r20,-208(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// stw r19,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r19.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r7,132
	ctx.r9.s64 = ctx.r7.s64 * 132;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r18,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r18.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r5,132
	ctx.r9.s64 = ctx.r5.s64 * 132;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r5,5000
	ctx.r5.s64 = 5000;
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// lwz r30,-212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r7,132
	ctx.r9.s64 = ctx.r7.s64 * 132;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r5,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r5.u32);
	// lwz r5,-216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r7,8924(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r10,r7,132
	ctx.r10.s64 = ctx.r7.s64 * 132;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ori r10,r9,41984
	ctx.r10.u64 = ctx.r9.u64 | 41984;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r4,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// addi r27,r10,-11872
	ctx.r27.s64 = ctx.r10.s64 + -11872;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r6,24360
	ctx.r6.s64 = 24360;
	// addi r23,r10,-11864
	ctx.r23.s64 = ctx.r10.s64 + -11864;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r19,-212(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r10,8924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 * 132;
	// add r18,r10,r8
	ctx.r18.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,-268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// stw r31,16(r18)
	PPC_STORE_U32(ctx.r18.u32 + 16, ctx.r31.u32);
	// li r31,25
	ctx.r31.s64 = 25;
	// lwz r11,8924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8924);
	// mulli r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 * 132;
	// add r18,r11,r8
	ctx.r18.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,-272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r5,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r5.u32);
	// stw r20,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r20.u32);
	// stw r3,648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 648, ctx.r3.u32);
	// stw r30,19524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19524, ctx.r30.u32);
	// stw r6,19988(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19988, ctx.r6.u32);
	// stw r4,28748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28748, ctx.r4.u32);
	// stwx r7,r11,r19
	PPC_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r7.u32);
	// stw r8,23216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23216, ctx.r8.u32);
	// stw r9,20452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20452, ctx.r9.u32);
	// stw r9,2592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2592, ctx.r9.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r6,r6,136
	ctx.r6.s64 = ctx.r6.s64 * 136;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r6,-264(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// lis r17,0
	ctx.r17.s64 = 0;
	// li r20,24302
	ctx.r20.s64 = 24302;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stfs f0,22596(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22596, temp.u32);
	// li r19,24363
	ctx.r19.s64 = 24363;
	// ori r17,r17,42000
	ctx.r17.u64 = ctx.r17.u64 | 42000;
	// li r14,24303
	ctx.r14.s64 = 24303;
	// addi r18,r18,-11724
	ctx.r18.s64 = ctx.r18.s64 + -11724;
	// lwz r4,23544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// stw r27,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r27.u32);
	// rotlwi r27,r16,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r16.u32, 0);
	// mulli r5,r4,136
	ctx.r5.s64 = ctx.r4.s64 * 136;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r26,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r26.u32);
	// stw r29,19528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19528, ctx.r29.u32);
	// lis r26,0
	ctx.r26.s64 = 0;
	// stw r25,19992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19992, ctx.r25.u32);
	// addi r25,r30,-11852
	ctx.r25.s64 = ctx.r30.s64 + -11852;
	// stw r5,28752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28752, ctx.r5.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r9,20456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20456, ctx.r9.u32);
	// ori r26,r26,41996
	ctx.r26.u64 = ctx.r26.u64 | 41996;
	// stw r9,2596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2596, ctx.r9.u32);
	// addi r15,r30,-11824
	ctx.r15.s64 = ctx.r30.s64 + -11824;
	// stw r8,23220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23220, ctx.r8.u32);
	// stwx r7,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r7.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r29,-204(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r4,r4,140
	ctx.r4.s64 = ctx.r4.s64 * 140;
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r4,r4,140
	ctx.r4.s64 = ctx.r4.s64 * 140;
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r16,r3,-11840
	ctx.r16.s64 = ctx.r3.s64 + -11840;
	// li r3,24364
	ctx.r3.s64 = 24364;
	// stw r3,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r3,r30,140
	ctx.r3.s64 = ctx.r30.s64 * 140;
	// add r30,r3,r10
	ctx.r30.u64 = ctx.r3.u64 + ctx.r10.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// stfs f0,22600(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22600, temp.u32);
	// lwz r30,23544(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// stw r23,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r23.u32);
	// mulli r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 * 140;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f9,20(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r22,656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 656, ctx.r22.u32);
	// stw r29,19532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19532, ctx.r29.u32);
	// stw r5,28756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28756, ctx.r5.u32);
	// stw r9,20460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20460, ctx.r9.u32);
	// stw r9,2600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2600, ctx.r9.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r7,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r7.u32);
	// stw r21,19996(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19996, ctx.r21.u32);
	// stw r8,23224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23224, ctx.r8.u32);
	// lwz r5,-264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,-272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stfs f0,22604(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22604, temp.u32);
	// lwz r10,23544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// stw r25,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r25.u32);
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r6,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r6.u32);
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r23,r23,-11576
	ctx.r23.s64 = ctx.r23.s64 + -11576;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r23,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r23.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r24,-32244
	ctx.r24.s64 = -2113142784;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,-272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// li r21,24305
	ctx.r21.s64 = 24305;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// li r25,38
	ctx.r25.s64 = 38;
	// addi r29,r29,-11712
	ctx.r29.s64 = ctx.r29.s64 + -11712;
	// stfs f4,20(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stw r20,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r20.u32);
	// stw r27,19536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19536, ctx.r27.u32);
	// lis r20,0
	ctx.r20.s64 = 0;
	// stw r19,20000(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20000, ctx.r19.u32);
	// li r19,24366
	ctx.r19.s64 = 24366;
	// stwx r7,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r7.u32);
	// li r27,24304
	ctx.r27.s64 = 24304;
	// stw r6,28760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28760, ctx.r6.u32);
	// li r26,24365
	ctx.r26.s64 = 24365;
	// stw r8,23228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23228, ctx.r8.u32);
	// ori r20,r20,42008
	ctx.r20.u64 = ctx.r20.u64 | 42008;
	// stw r10,2604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2604, ctx.r10.u32);
	// stw r10,20464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20464, ctx.r10.u32);
	// stw r19,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r19.u32);
	// lis r19,-32243
	ctx.r19.s64 = -2113077248;
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r30,r30,148
	ctx.r30.s64 = ctx.r30.s64 * 148;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r31,r31,148
	ctx.r31.s64 = ctx.r31.s64 * 148;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwz r30,-192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r21,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r21.u32);
	// li r21,24367
	ctx.r21.s64 = 24367;
	// stw r21,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r21.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r30,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r30.u32);
	// li r30,24306
	ctx.r30.s64 = 24306;
	// ori r28,r4,42004
	ctx.r28.u64 = ctx.r4.u64 | 42004;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r30,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r30.u32);
	// li r31,10
	ctx.r31.s64 = 10;
	// addi r22,r4,-11608
	ctx.r22.s64 = ctx.r4.s64 + -11608;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r30,r19,-11588
	ctx.r30.s64 = ctx.r19.s64 + -11588;
	// ori r4,r4,42012
	ctx.r4.u64 = ctx.r4.u64 | 42012;
	// stw r4,-228(r1)
	PPC_STORE_U32(ctx.r1.u32 + -228, ctx.r4.u32);
	// lwz r23,4(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r4,r23,148
	ctx.r4.s64 = ctx.r23.s64 * 148;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// stfs f1,22608(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22608, temp.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// stw r16,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r16.u32);
	// mulli r4,r3,148
	ctx.r4.s64 = ctx.r3.s64 * 148;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stw r14,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r14.u32);
	// lfs f12,4700(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4700);
	ctx.f12.f64 = double(temp.f32);
	// lwz r24,-204(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// stw r15,19540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19540, ctx.r15.u32);
	// stw r6,28764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28764, ctx.r6.u32);
	// stwx r7,r11,r17
	PPC_STORE_U32(ctx.r11.u32 + ctx.r17.u32, ctx.r7.u32);
	// stw r8,23232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23232, ctx.r8.u32);
	// stw r24,20004(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20004, ctx.r24.u32);
	// stw r10,20468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20468, ctx.r10.u32);
	// stw r10,2608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2608, ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r4,r3,152
	ctx.r4.s64 = ctx.r3.s64 * 152;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// stfs f11,22612(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22612, temp.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// lis r17,0
	ctx.r17.s64 = 0;
	// stw r18,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r18.u32);
	// li r23,24368
	ctx.r23.s64 = 24368;
	// mulli r4,r3,152
	ctx.r4.s64 = ctx.r3.s64 * 152;
	// lwz r31,-192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lwz r24,-212(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// lwz r18,-228(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// lwz r16,-232(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// ori r17,r17,42020
	ctx.r17.u64 = ctx.r17.u64 | 42020;
	// li r21,42
	ctx.r21.s64 = 42;
	// rotlwi r19,r6,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// li r14,24308
	ctx.r14.s64 = 24308;
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stw r27,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r27.u32);
	// stw r29,19544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19544, ctx.r29.u32);
	// li r29,16
	ctx.r29.s64 = 16;
	// stw r26,20008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20008, ctx.r26.u32);
	// stwx r7,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r7.u32);
	// stw r6,28768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28768, ctx.r6.u32);
	// stw r8,23236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23236, ctx.r8.u32);
	// stw r10,20472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20472, ctx.r10.u32);
	// stw r10,2612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2612, ctx.r10.u32);
	// lwz r26,-264(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r4,r3,156
	ctx.r4.s64 = ctx.r3.s64 * 156;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stw r25,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r25.u32);
	// stfs f11,22616(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22616, temp.u32);
	// li r25,24307
	ctx.r25.s64 = 24307;
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// mulli r4,r3,156
	ctx.r4.s64 = ctx.r3.s64 * 156;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r22,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r22,-216(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r28,r3,-11496
	ctx.r28.s64 = ctx.r3.s64 + -11496;
	// stfs f12,20(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stw r31,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r31.u32);
	// lwz r31,-200(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// ori r27,r5,42016
	ctx.r27.u64 = ctx.r5.u64 | 42016;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r15,r3,-11484
	ctx.r15.s64 = ctx.r3.s64 + -11484;
	// stw r31,19548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19548, ctx.r31.u32);
	// addi r5,r5,-11480
	ctx.r5.s64 = ctx.r5.s64 + -11480;
	// lwz r31,-208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// li r3,24369
	ctx.r3.s64 = 24369;
	// stwx r7,r11,r20
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, ctx.r7.u32);
	// stw r4,28772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28772, ctx.r4.u32);
	// stw r8,23240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23240, ctx.r8.u32);
	// stw r10,20476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20476, ctx.r10.u32);
	// stw r31,20012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20012, ctx.r31.u32);
	// li r31,26
	ctx.r31.s64 = 26;
	// stw r10,2616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2616, ctx.r10.u32);
	// stw r5,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r5.u32);
	// stw r3,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// stw r17,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r17.u32);
	// rotlwi r17,r8,0
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r20,-220(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// rlwinm r5,r3,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// stfs f0,22620(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22620, temp.u32);
	// lwz r5,23544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// stw r30,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r30.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,-268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,-272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// stfs f9,20(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stw r24,676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 676, ctx.r24.u32);
	// stw r22,19552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19552, ctx.r22.u32);
	// stw r10,20480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20480, ctx.r10.u32);
	// stw r10,2620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2620, ctx.r10.u32);
	// stw r20,20016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20016, ctx.r20.u32);
	// stw r19,28776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28776, ctx.r19.u32);
	// stwx r7,r11,r18
	PPC_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r7.u32);
	// stw r17,23244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23244, ctx.r17.u32);
	// lwz r31,-200(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r5,r3,164
	ctx.r5.s64 = ctx.r3.s64 * 164;
	// add r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rotlwi r5,r26,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stfs f11,22624(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22624, temp.u32);
	// lwz r3,23544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// stw r28,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r28.u32);
	// mulli r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 * 164;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stfs f6,20(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r25,680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 680, ctx.r25.u32);
	// stw r16,19556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19556, ctx.r16.u32);
	// stw r6,28780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28780, ctx.r6.u32);
	// stw r10,20484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20484, ctx.r10.u32);
	// stw r10,2624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2624, ctx.r10.u32);
	// stw r23,20020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20020, ctx.r23.u32);
	// stwx r7,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r7.u32);
	// stw r8,23248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23248, ctx.r8.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r6,r6,168
	ctx.r6.s64 = ctx.r6.s64 * 168;
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r21,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r21.u32);
	// stfs f11,22628(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22628, temp.u32);
	// lwz r6,23544(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23544);
	// stw r15,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r15.u32);
	// mulli r6,r6,168
	ctx.r6.s64 = ctx.r6.s64 * 168;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stfs f29,20(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stw r14,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r14.u32);
	// stw r31,19560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19560, ctx.r31.u32);
	// lwz r31,-204(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	// stw r10,20488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20488, ctx.r10.u32);
	// stw r10,2628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2628, ctx.r10.u32);
	// stw r4,28784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28784, ctx.r4.u32);
	// stw r8,23252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23252, ctx.r8.u32);
	// stw r31,20024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20024, ctx.r31.u32);
	// lwz r31,-208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mulli r10,r4,172
	ctx.r10.s64 = ctx.r4.s64 * 172;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stfs f11,22632(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22632, temp.u32);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8221ad64
	ctx.lr = 0x82845E60;
	__restfpr_28(ctx, base);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82845E64"))) PPC_WEAK_FUNC(sub_82845E64);
PPC_FUNC_IMPL(__imp__sub_82845E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82845E68"))) PPC_WEAK_FUNC(sub_82845E68);
PPC_FUNC_IMPL(__imp__sub_82845E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,23540
	ctx.r11.s64 = ctx.r11.s64 + 23540;
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
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82845E98"))) PPC_WEAK_FUNC(sub_82845E98);
PPC_FUNC_IMPL(__imp__sub_82845E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,58
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 58, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82845ec4
	if (ctx.cr6.gt) goto loc_82845EC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82845EC4:
	// addi r9,r4,2159
	ctx.r9.s64 = ctx.r4.s64 + 2159;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82845ED4"))) PPC_WEAK_FUNC(sub_82845ED4);
PPC_FUNC_IMPL(__imp__sub_82845ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82845ED8"))) PPC_WEAK_FUNC(sub_82845ED8);
PPC_FUNC_IMPL(__imp__sub_82845ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,5554
	ctx.r10.s64 = ctx.r5.s64 + 5554;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82845EF8"))) PPC_WEAK_FUNC(sub_82845EF8);
PPC_FUNC_IMPL(__imp__sub_82845EF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82845f14
	if (ctx.cr6.lt) goto loc_82845F14;
	// cmpwi cr6,r5,58
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 58, ctx.xer);
	// blt cr6,0x82845f20
	if (ctx.cr6.lt) goto loc_82845F20;
loc_82845F14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82845F20:
	// addi r10,r5,4776
	ctx.r10.s64 = ctx.r5.s64 + 4776;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82845F34"))) PPC_WEAK_FUNC(sub_82845F34);
PPC_FUNC_IMPL(__imp__sub_82845F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82845F38"))) PPC_WEAK_FUNC(sub_82845F38);
PPC_FUNC_IMPL(__imp__sub_82845F38) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,48
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 48, ctx.xer);
	// beq cr6,0x82845ff8
	if (ctx.cr6.eq) goto loc_82845FF8;
	// cmpwi cr6,r5,49
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 49, ctx.xer);
	// beq cr6,0x82845fec
	if (ctx.cr6.eq) goto loc_82845FEC;
	// cmpwi cr6,r5,50
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 50, ctx.xer);
	// beq cr6,0x82845fe0
	if (ctx.cr6.eq) goto loc_82845FE0;
	// cmpwi cr6,r5,51
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 51, ctx.xer);
	// beq cr6,0x82845fd4
	if (ctx.cr6.eq) goto loc_82845FD4;
	// cmpwi cr6,r5,52
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 52, ctx.xer);
	// beq cr6,0x82845fc8
	if (ctx.cr6.eq) goto loc_82845FC8;
	// cmpwi cr6,r5,53
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 53, ctx.xer);
	// beq cr6,0x82845fbc
	if (ctx.cr6.eq) goto loc_82845FBC;
	// cmpwi cr6,r5,54
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 54, ctx.xer);
	// beq cr6,0x82845fb0
	if (ctx.cr6.eq) goto loc_82845FB0;
	// cmpwi cr6,r5,55
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 55, ctx.xer);
	// beq cr6,0x82845fa4
	if (ctx.cr6.eq) goto loc_82845FA4;
	// cmpwi cr6,r5,56
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 56, ctx.xer);
	// beq cr6,0x82845f98
	if (ctx.cr6.eq) goto loc_82845F98;
	// cmpwi cr6,r5,57
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 57, ctx.xer);
	// bne cr6,0x82845ffc
	if (!ctx.cr6.eq) goto loc_82845FFC;
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82845F98:
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82845FA4:
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82845FB0:
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82845FBC:
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82845FC8:
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82845FD4:
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82845FE0:
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82845FEC:
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82845FF8:
	// li r11,34
	ctx.r11.s64 = 34;
loc_82845FFC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846004"))) PPC_WEAK_FUNC(sub_82846004);
PPC_FUNC_IMPL(__imp__sub_82846004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82846008"))) PPC_WEAK_FUNC(sub_82846008);
PPC_FUNC_IMPL(__imp__sub_82846008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82846040
	if (ctx.cr6.lt) goto loc_82846040;
	// cmpwi cr6,r5,58
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 58, ctx.xer);
	// bge cr6,0x82846040
	if (!ctx.cr6.lt) goto loc_82846040;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82846040
	if (!ctx.cr6.gt) goto loc_82846040;
	// addi r11,r5,4776
	ctx.r11.s64 = ctx.r5.s64 + 4776;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x8284604c
	if (ctx.cr6.gt) goto loc_8284604C;
loc_82846040:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8284604C:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// subf r8,r6,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8284606c
	if (!ctx.cr6.lt) goto loc_8284606C;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8284606C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846078"))) PPC_WEAK_FUNC(sub_82846078);
PPC_FUNC_IMPL(__imp__sub_82846078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82846094
	if (ctx.cr6.lt) goto loc_82846094;
	// cmpwi cr6,r5,58
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 58, ctx.xer);
	// blt cr6,0x828460a0
	if (ctx.cr6.lt) goto loc_828460A0;
loc_82846094:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828460A0:
	// addi r10,r5,2159
	ctx.r10.s64 = ctx.r5.s64 + 2159;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828460B4"))) PPC_WEAK_FUNC(sub_828460B4);
PPC_FUNC_IMPL(__imp__sub_828460B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828460B8"))) PPC_WEAK_FUNC(sub_828460B8);
PPC_FUNC_IMPL(__imp__sub_828460B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828460C0"))) PPC_WEAK_FUNC(sub_828460C0);
PPC_FUNC_IMPL(__imp__sub_828460C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x828460dc
	if (ctx.cr6.lt) goto loc_828460DC;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x828460e8
	if (ctx.cr6.lt) goto loc_828460E8;
loc_828460DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828460E8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,39980
	ctx.r8.u64 = ctx.r10.u64 | 39980;
	// ori r7,r9,41840
	ctx.r7.u64 = ctx.r9.u64 | 41840;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r6,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284610C"))) PPC_WEAK_FUNC(sub_8284610C);
PPC_FUNC_IMPL(__imp__sub_8284610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82846110"))) PPC_WEAK_FUNC(sub_82846110);
PPC_FUNC_IMPL(__imp__sub_82846110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8284613c
	if (ctx.cr6.lt) goto loc_8284613C;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bge cr6,0x8284613c
	if (!ctx.cr6.lt) goto loc_8284613C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82846160
	if (ctx.cr6.eq) goto loc_82846160;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82846148
	if (ctx.cr6.eq) goto loc_82846148;
loc_8284613C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82846148:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,41840
	ctx.r8.u64 = ctx.r10.u64 | 41840;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// blr 
	return;
loc_82846160:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,39980
	ctx.r8.u64 = ctx.r10.u64 | 39980;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846178"))) PPC_WEAK_FUNC(sub_82846178);
PPC_FUNC_IMPL(__imp__sub_82846178) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,23072(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23072);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846190"))) PPC_WEAK_FUNC(sub_82846190);
PPC_FUNC_IMPL(__imp__sub_82846190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x828461ac
	if (ctx.cr6.lt) goto loc_828461AC;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x828461b8
	if (ctx.cr6.lt) goto loc_828461B8;
loc_828461AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828461B8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r6,23072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23072, ctx.r6.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828461C8"))) PPC_WEAK_FUNC(sub_828461C8);
PPC_FUNC_IMPL(__imp__sub_828461C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,23068(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23068);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828461E0"))) PPC_WEAK_FUNC(sub_828461E0);
PPC_FUNC_IMPL(__imp__sub_828461E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,23072(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23072);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// ble cr6,0x82846200
	if (!ctx.cr6.gt) goto loc_82846200;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82846200:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846208"))) PPC_WEAK_FUNC(sub_82846208);
PPC_FUNC_IMPL(__imp__sub_82846208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82846224
	if (ctx.cr6.lt) goto loc_82846224;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// blt cr6,0x82846230
	if (ctx.cr6.lt) goto loc_82846230;
loc_82846224:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82846230:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r6,23068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23068, ctx.r6.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846240"))) PPC_WEAK_FUNC(sub_82846240);
PPC_FUNC_IMPL(__imp__sub_82846240) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bne cr6,0x8284626c
	if (!ctx.cr6.eq) goto loc_8284626C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,39980
	ctx.r9.u64 = ctx.r11.u64 | 39980;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8284626C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846274"))) PPC_WEAK_FUNC(sub_82846274);
PPC_FUNC_IMPL(__imp__sub_82846274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82846278"))) PPC_WEAK_FUNC(sub_82846278);
PPC_FUNC_IMPL(__imp__sub_82846278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,4920(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4920, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284628C"))) PPC_WEAK_FUNC(sub_8284628C);
PPC_FUNC_IMPL(__imp__sub_8284628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82846290"))) PPC_WEAK_FUNC(sub_82846290);
PPC_FUNC_IMPL(__imp__sub_82846290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r8,4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4872, ctx.r8.u32);
	// lwz r9,1932(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1932);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828462e4
	if (!ctx.cr6.gt) goto loc_828462E4;
	// lwz r9,1968(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r10,r11,4604
	ctx.r10.s64 = ctx.r11.s64 + 4604;
	// lwz r7,4608(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4608);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x828462e4
	if (!ctx.cr6.eq) goto loc_828462E4;
	// stw r8,4888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4888, ctx.r8.u32);
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4872, ctx.r10.u32);
loc_828462E4:
	// lwz r10,1936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82846334
	if (!ctx.cr6.gt) goto loc_82846334;
	// lwz r9,1968(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r10,r11,4604
	ctx.r10.s64 = ctx.r11.s64 + 4604;
	// lwz r8,4608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4608);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82846334
	if (!ctx.cr6.eq) goto loc_82846334;
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,1222
	ctx.r8.s64 = ctx.r10.s64 + 1222;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4872, ctx.r6.u32);
loc_82846334:
	// lwz r10,1940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1940);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82846384
	if (!ctx.cr6.gt) goto loc_82846384;
	// lwz r9,1968(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r10,r11,4604
	ctx.r10.s64 = ctx.r11.s64 + 4604;
	// lwz r8,4608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4608);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82846384
	if (!ctx.cr6.eq) goto loc_82846384;
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r10,1222
	ctx.r8.s64 = ctx.r10.s64 + 1222;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4872, ctx.r6.u32);
loc_82846384:
	// lwz r10,1944(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1944);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828463d4
	if (!ctx.cr6.gt) goto loc_828463D4;
	// lwz r9,1968(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r10,r11,4604
	ctx.r10.s64 = ctx.r11.s64 + 4604;
	// lwz r8,4608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4608);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,5
	ctx.r7.s64 = ctx.r9.s64 + 5;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x828463d4
	if (!ctx.cr6.eq) goto loc_828463D4;
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r10,1222
	ctx.r8.s64 = ctx.r10.s64 + 1222;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4872, ctx.r6.u32);
loc_828463D4:
	// lwz r10,1948(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1948);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82846424
	if (!ctx.cr6.gt) goto loc_82846424;
	// lwz r9,1968(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r10,r11,4604
	ctx.r10.s64 = ctx.r11.s64 + 4604;
	// lwz r8,4608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4608);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,6
	ctx.r7.s64 = ctx.r9.s64 + 6;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82846424
	if (!ctx.cr6.eq) goto loc_82846424;
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r10,1222
	ctx.r8.s64 = ctx.r10.s64 + 1222;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4872, ctx.r6.u32);
loc_82846424:
	// lwz r10,1952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82846474
	if (!ctx.cr6.gt) goto loc_82846474;
	// lwz r9,1968(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r10,r11,4604
	ctx.r10.s64 = ctx.r11.s64 + 4604;
	// lwz r8,4608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4608);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82846474
	if (!ctx.cr6.eq) goto loc_82846474;
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,1222
	ctx.r8.s64 = ctx.r10.s64 + 1222;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4872, ctx.r6.u32);
loc_82846474:
	// lwz r10,1956(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828464c4
	if (!ctx.cr6.gt) goto loc_828464C4;
	// lwz r9,1968(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r10,r11,4604
	ctx.r10.s64 = ctx.r11.s64 + 4604;
	// lwz r8,4608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4608);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x828464c4
	if (!ctx.cr6.eq) goto loc_828464C4;
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r10,1222
	ctx.r8.s64 = ctx.r10.s64 + 1222;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4872, ctx.r6.u32);
loc_828464C4:
	// lwz r10,1960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1960);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,1968(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r10,r11,4604
	ctx.r10.s64 = ctx.r11.s64 + 4604;
	// lwz r8,4608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4608);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,9
	ctx.r7.s64 = ctx.r9.s64 + 9;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,1222
	ctx.r8.s64 = ctx.r10.s64 + 1222;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,4872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4872);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,4872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4872, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846518"))) PPC_WEAK_FUNC(sub_82846518);
PPC_FUNC_IMPL(__imp__sub_82846518) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82846520;
	__savegprlr_29(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r10,-15836
	ctx.r8.s64 = ctx.r10.s64 + -15836;
	// li r7,24611
	ctx.r7.s64 = 24611;
	// li r6,24612
	ctx.r6.s64 = 24612;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r3,r9,-15816
	ctx.r3.s64 = ctx.r9.s64 + -15816;
	// li r11,24613
	ctx.r11.s64 = 24613;
	// li r10,24617
	ctx.r10.s64 = 24617;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r5,48(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// addi r4,r4,-15796
	ctx.r4.s64 = ctx.r4.s64 + -15796;
	// li r31,24271
	ctx.r31.s64 = 24271;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// li r30,24621
	ctx.r30.s64 = 24621;
	// addi r9,r9,-15788
	ctx.r9.s64 = ctx.r9.s64 + -15788;
	// stw r8,1896(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1896, ctx.r8.u32);
	// li r8,24614
	ctx.r8.s64 = 24614;
	// stw r7,4840(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4840, ctx.r7.u32);
	// li r7,24618
	ctx.r7.s64 = 24618;
	// stw r6,6052(r5)
	PPC_STORE_U32(ctx.r5.u32 + 6052, ctx.r6.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r3,1900(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1900, ctx.r3.u32);
	// addi r3,r29,-15780
	ctx.r3.s64 = ctx.r29.s64 + -15780;
	// stw r11,4844(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4844, ctx.r11.u32);
	// li r29,2328
	ctx.r29.s64 = 2328;
	// stw r10,6056(r5)
	PPC_STORE_U32(ctx.r5.u32 + 6056, ctx.r10.u32);
	// li r10,24632
	ctx.r10.s64 = 24632;
	// stw r4,1904(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1904, ctx.r4.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r31,4848(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4848, ctx.r31.u32);
	// addi r6,r6,-15772
	ctx.r6.s64 = ctx.r6.s64 + -15772;
	// stw r30,6060(r5)
	PPC_STORE_U32(ctx.r5.u32 + 6060, ctx.r30.u32);
	// li r31,24634
	ctx.r31.s64 = 24634;
	// stw r9,1908(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1908, ctx.r9.u32);
	// li r9,24616
	ctx.r9.s64 = 24616;
	// stw r8,4852(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4852, ctx.r8.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r7,6064(r5)
	PPC_STORE_U32(ctx.r5.u32 + 6064, ctx.r7.u32);
	// addi r7,r4,-15756
	ctx.r7.s64 = ctx.r4.s64 + -15756;
	// stw r3,1912(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1912, ctx.r3.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,4856(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4856, ctx.r29.u32);
	// addi r4,r8,-15748
	ctx.r4.s64 = ctx.r8.s64 + -15748;
	// stw r10,6068(r5)
	PPC_STORE_U32(ctx.r5.u32 + 6068, ctx.r10.u32);
	// stw r6,1916(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1916, ctx.r6.u32);
	// stw r31,4860(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4860, ctx.r31.u32);
	// stw r9,6072(r5)
	PPC_STORE_U32(ctx.r5.u32 + 6072, ctx.r9.u32);
	// stw r7,1920(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1920, ctx.r7.u32);
	// stw r11,4864(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4864, ctx.r11.u32);
	// stw r11,6076(r5)
	PPC_STORE_U32(ctx.r5.u32 + 6076, ctx.r11.u32);
	// stw r4,1924(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1924, ctx.r4.u32);
	// stw r11,4868(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4868, ctx.r11.u32);
	// stw r11,6080(r5)
	PPC_STORE_U32(ctx.r5.u32 + 6080, ctx.r11.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82846604"))) PPC_WEAK_FUNC(sub_82846604);
PPC_FUNC_IMPL(__imp__sub_82846604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82846608"))) PPC_WEAK_FUNC(sub_82846608);
PPC_FUNC_IMPL(__imp__sub_82846608) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,1968(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1968);
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

__attribute__((alias("__imp__sub_82846630"))) PPC_WEAK_FUNC(sub_82846630);
PPC_FUNC_IMPL(__imp__sub_82846630) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r7,r10,-15996
	ctx.r7.s64 = ctx.r10.s64 + -15996;
	// li r9,1896
	ctx.r9.s64 = 1896;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r8,-15980
	ctx.r4.s64 = ctx.r8.s64 + -15980;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r8,r6,-15964
	ctx.r8.s64 = ctx.r6.s64 + -15964;
	// li r10,2420
	ctx.r10.s64 = 2420;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lwz r5,48(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// addi r3,r3,-15948
	ctx.r3.s64 = ctx.r3.s64 + -15948;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// addi r6,r6,-15928
	ctx.r6.s64 = ctx.r6.s64 + -15928;
	// li r11,2421
	ctx.r11.s64 = 2421;
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r7,2680(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2680, ctx.r7.u32);
	// addi r7,r31,-15912
	ctx.r7.s64 = ctx.r31.s64 + -15912;
	// stw r9,1864(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1864, ctx.r9.u32);
	// addi r31,r30,-15892
	ctx.r31.s64 = ctx.r30.s64 + -15892;
	// stw r4,2692(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2692, ctx.r4.u32);
	// li r4,24610
	ctx.r4.s64 = 24610;
	// stw r9,1876(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1876, ctx.r9.u32);
	// stw r8,2684(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2684, ctx.r8.u32);
	// stw r10,1868(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1868, ctx.r10.u32);
	// stw r3,2696(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2696, ctx.r3.u32);
	// stw r10,1880(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1880, ctx.r10.u32);
	// stw r6,2688(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2688, ctx.r6.u32);
	// stw r11,1872(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1872, ctx.r11.u32);
	// stw r7,2700(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2700, ctx.r7.u32);
	// stw r11,1884(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1884, ctx.r11.u32);
	// stw r31,2704(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2704, ctx.r31.u32);
	// stw r4,1888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1888, ctx.r4.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828466D0"))) PPC_WEAK_FUNC(sub_828466D0);
PPC_FUNC_IMPL(__imp__sub_828466D0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828466F4"))) PPC_WEAK_FUNC(sub_828466F4);
PPC_FUNC_IMPL(__imp__sub_828466F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828466F8"))) PPC_WEAK_FUNC(sub_828466F8);
PPC_FUNC_IMPL(__imp__sub_828466F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82846738
	if (ctx.cr6.eq) goto loc_82846738;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82846728
	if (ctx.cr6.eq) goto loc_82846728;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82846740
	if (ctx.cr6.eq) goto loc_82846740;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82846740
	goto loc_82846740;
loc_82846728:
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82846740
	goto loc_82846740;
loc_82846738:
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r3,-29532(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
loc_82846740:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82846750
	if (ctx.cr6.eq) goto loc_82846750;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r5.u32);
loc_82846750:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846758"))) PPC_WEAK_FUNC(sub_82846758);
PPC_FUNC_IMPL(__imp__sub_82846758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846770"))) PPC_WEAK_FUNC(sub_82846770);
PPC_FUNC_IMPL(__imp__sub_82846770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846788"))) PPC_WEAK_FUNC(sub_82846788);
PPC_FUNC_IMPL(__imp__sub_82846788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,120(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828467A0"))) PPC_WEAK_FUNC(sub_828467A0);
PPC_FUNC_IMPL(__imp__sub_828467A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,188(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 188);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828467B8"))) PPC_WEAK_FUNC(sub_828467B8);
PPC_FUNC_IMPL(__imp__sub_828467B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828467D0"))) PPC_WEAK_FUNC(sub_828467D0);
PPC_FUNC_IMPL(__imp__sub_828467D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828467E8"))) PPC_WEAK_FUNC(sub_828467E8);
PPC_FUNC_IMPL(__imp__sub_828467E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82846804
	if (ctx.cr6.lt) goto loc_82846804;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// blt cr6,0x82846810
	if (ctx.cr6.lt) goto loc_82846810;
loc_82846804:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82846810:
	// addi r10,r5,35
	ctx.r10.s64 = ctx.r5.s64 + 35;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846824"))) PPC_WEAK_FUNC(sub_82846824);
PPC_FUNC_IMPL(__imp__sub_82846824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82846828"))) PPC_WEAK_FUNC(sub_82846828);
PPC_FUNC_IMPL(__imp__sub_82846828) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,316(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846840"))) PPC_WEAK_FUNC(sub_82846840);
PPC_FUNC_IMPL(__imp__sub_82846840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,480(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 480);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846858"))) PPC_WEAK_FUNC(sub_82846858);
PPC_FUNC_IMPL(__imp__sub_82846858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,192(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846870"))) PPC_WEAK_FUNC(sub_82846870);
PPC_FUNC_IMPL(__imp__sub_82846870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846888"))) PPC_WEAK_FUNC(sub_82846888);
PPC_FUNC_IMPL(__imp__sub_82846888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,416(r9)
	PPC_STORE_U32(ctx.r9.u32 + 416, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284689C"))) PPC_WEAK_FUNC(sub_8284689C);
PPC_FUNC_IMPL(__imp__sub_8284689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828468A0"))) PPC_WEAK_FUNC(sub_828468A0);
PPC_FUNC_IMPL(__imp__sub_828468A0) {
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

__attribute__((alias("__imp__sub_828468C0"))) PPC_WEAK_FUNC(sub_828468C0);
PPC_FUNC_IMPL(__imp__sub_828468C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,13184(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13184);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,13184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13184, ctx.r10.u32);
	// stw r7,168(r6)
	PPC_STORE_U32(ctx.r6.u32 + 168, ctx.r7.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828468F0"))) PPC_WEAK_FUNC(sub_828468F0);
PPC_FUNC_IMPL(__imp__sub_828468F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846904"))) PPC_WEAK_FUNC(sub_82846904);
PPC_FUNC_IMPL(__imp__sub_82846904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82846908"))) PPC_WEAK_FUNC(sub_82846908);
PPC_FUNC_IMPL(__imp__sub_82846908) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,97
	ctx.r10.s64 = ctx.r5.s64 + 97;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stwx r6,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284692C"))) PPC_WEAK_FUNC(sub_8284692C);
PPC_FUNC_IMPL(__imp__sub_8284692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82846930"))) PPC_WEAK_FUNC(sub_82846930);
PPC_FUNC_IMPL(__imp__sub_82846930) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,13184(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13184);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,13184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13184, ctx.r10.u32);
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846960"))) PPC_WEAK_FUNC(sub_82846960);
PPC_FUNC_IMPL(__imp__sub_82846960) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r11,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r11.u32);
	// stw r9,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r9.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// ori r5,r6,16384
	ctx.r5.u64 = ctx.r6.u64 | 16384;
	// sth r5,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846994"))) PPC_WEAK_FUNC(sub_82846994);
PPC_FUNC_IMPL(__imp__sub_82846994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82846998"))) PPC_WEAK_FUNC(sub_82846998);
PPC_FUNC_IMPL(__imp__sub_82846998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828469B4"))) PPC_WEAK_FUNC(sub_828469B4);
PPC_FUNC_IMPL(__imp__sub_828469B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828469B8"))) PPC_WEAK_FUNC(sub_828469B8);
PPC_FUNC_IMPL(__imp__sub_828469B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828469D0"))) PPC_WEAK_FUNC(sub_828469D0);
PPC_FUNC_IMPL(__imp__sub_828469D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828469E8"))) PPC_WEAK_FUNC(sub_828469E8);
PPC_FUNC_IMPL(__imp__sub_828469E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r6,r6,0,18,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// sth r6,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846A18"))) PPC_WEAK_FUNC(sub_82846A18);
PPC_FUNC_IMPL(__imp__sub_82846A18) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x82846a74
	if (ctx.cr6.eq) goto loc_82846A74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846a6c
	if (ctx.cr6.eq) goto loc_82846A6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846a78
	if (!ctx.cr6.eq) goto loc_82846A78;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82846a78
	goto loc_82846A78;
loc_82846A6C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82846a78
	goto loc_82846A78;
loc_82846A74:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82846A78:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82846aa4
	if (ctx.cr6.eq) goto loc_82846AA4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82846a9c
	if (ctx.cr6.eq) goto loc_82846A9C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82846aa8
	if (!ctx.cr6.eq) goto loc_82846AA8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82846aa8
	goto loc_82846AA8;
loc_82846A9C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82846aa8
	goto loc_82846AA8;
loc_82846AA4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82846AA8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846AC0"))) PPC_WEAK_FUNC(sub_82846AC0);
PPC_FUNC_IMPL(__imp__sub_82846AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82846AD8"))) PPC_WEAK_FUNC(sub_82846AD8);
PPC_FUNC_IMPL(__imp__sub_82846AD8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82846AE0;
	__savegprlr_28(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,-29532(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r28,48(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82846b2c
	if (ctx.cr6.eq) goto loc_82846B2C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82846b24
	if (ctx.cr6.eq) goto loc_82846B24;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82846b1c
	if (ctx.cr6.eq) goto loc_82846B1C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82846b30
	goto loc_82846B30;
loc_82846B1C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82846b30
	goto loc_82846B30;
loc_82846B24:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82846b30
	goto loc_82846B30;
loc_82846B2C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82846B30:
	// lwz r11,280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82846b5c
	if (ctx.cr6.eq) goto loc_82846B5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846b54
	if (ctx.cr6.eq) goto loc_82846B54;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846b60
	if (!ctx.cr6.eq) goto loc_82846B60;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82846b60
	goto loc_82846B60;
loc_82846B54:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82846b60
	goto loc_82846B60;
loc_82846B5C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82846B60:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82846b78
	if (!ctx.cr6.eq) goto loc_82846B78;
	// stw r30,280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 280, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82846B78:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82846ba8
	if (ctx.cr6.eq) goto loc_82846BA8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82846ba0
	if (ctx.cr6.eq) goto loc_82846BA0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82846b98
	if (ctx.cr6.eq) goto loc_82846B98;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82846bac
	goto loc_82846BAC;
loc_82846B98:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82846bac
	goto loc_82846BAC;
loc_82846BA0:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82846bac
	goto loc_82846BAC;
loc_82846BA8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82846BAC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82846bd8
	if (ctx.cr6.eq) goto loc_82846BD8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846bd0
	if (ctx.cr6.eq) goto loc_82846BD0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846bdc
	if (!ctx.cr6.eq) goto loc_82846BDC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82846bdc
	goto loc_82846BDC;
loc_82846BD0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82846bdc
	goto loc_82846BDC;
loc_82846BD8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82846BDC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82846bf0
	if (!ctx.cr6.eq) goto loc_82846BF0;
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82846BF0:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82846c20
	if (ctx.cr6.eq) goto loc_82846C20;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82846c18
	if (ctx.cr6.eq) goto loc_82846C18;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82846c10
	if (ctx.cr6.eq) goto loc_82846C10;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82846c24
	goto loc_82846C24;
loc_82846C10:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82846c24
	goto loc_82846C24;
loc_82846C18:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82846c24
	goto loc_82846C24;
loc_82846C20:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82846C24:
	// lwz r11,276(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 276);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82846c50
	if (ctx.cr6.eq) goto loc_82846C50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846c48
	if (ctx.cr6.eq) goto loc_82846C48;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846c54
	if (!ctx.cr6.eq) goto loc_82846C54;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82846c54
	goto loc_82846C54;
loc_82846C48:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82846c54
	goto loc_82846C54;
loc_82846C50:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82846C54:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82846c68
	if (!ctx.cr6.eq) goto loc_82846C68;
	// stw r30,276(r28)
	PPC_STORE_U32(ctx.r28.u32 + 276, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82846C68:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82846c98
	if (ctx.cr6.eq) goto loc_82846C98;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82846c90
	if (ctx.cr6.eq) goto loc_82846C90;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82846c88
	if (ctx.cr6.eq) goto loc_82846C88;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82846c9c
	goto loc_82846C9C;
loc_82846C88:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82846c9c
	goto loc_82846C9C;
loc_82846C90:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82846c9c
	goto loc_82846C9C;
loc_82846C98:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82846C9C:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82846cc8
	if (ctx.cr6.eq) goto loc_82846CC8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846cc0
	if (ctx.cr6.eq) goto loc_82846CC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846ccc
	if (!ctx.cr6.eq) goto loc_82846CCC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82846ccc
	goto loc_82846CCC;
loc_82846CC0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82846ccc
	goto loc_82846CCC;
loc_82846CC8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82846CCC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82846ce0
	if (!ctx.cr6.eq) goto loc_82846CE0;
	// stw r30,196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 196, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82846CE0:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82846d10
	if (ctx.cr6.eq) goto loc_82846D10;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82846d08
	if (ctx.cr6.eq) goto loc_82846D08;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82846d00
	if (ctx.cr6.eq) goto loc_82846D00;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82846d14
	goto loc_82846D14;
loc_82846D00:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82846d14
	goto loc_82846D14;
loc_82846D08:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82846d14
	goto loc_82846D14;
loc_82846D10:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82846D14:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82846d40
	if (ctx.cr6.eq) goto loc_82846D40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846d38
	if (ctx.cr6.eq) goto loc_82846D38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846d44
	if (!ctx.cr6.eq) goto loc_82846D44;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82846d44
	goto loc_82846D44;
loc_82846D38:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82846d44
	goto loc_82846D44;
loc_82846D40:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82846D44:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82846d58
	if (!ctx.cr6.eq) goto loc_82846D58;
	// stw r30,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82846D58:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r29,r28,112
	ctx.r29.s64 = ctx.r28.s64 + 112;
	// addi r8,r28,12
	ctx.r8.s64 = ctx.r28.s64 + 12;
loc_82846D64:
	// addi r11,r7,61
	ctx.r11.s64 = ctx.r7.s64 + 61;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82846d98
	if (ctx.cr6.eq) goto loc_82846D98;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846d90
	if (ctx.cr6.eq) goto loc_82846D90;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846d9c
	if (!ctx.cr6.eq) goto loc_82846D9C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82846d9c
	goto loc_82846D9C;
loc_82846D90:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82846d9c
	goto loc_82846D9C;
loc_82846D98:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82846D9C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82846dcc
	if (ctx.cr6.eq) goto loc_82846DCC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82846dc4
	if (ctx.cr6.eq) goto loc_82846DC4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82846dbc
	if (ctx.cr6.eq) goto loc_82846DBC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82846dd0
	goto loc_82846DD0;
loc_82846DBC:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82846dd0
	goto loc_82846DD0;
loc_82846DC4:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82846dd0
	goto loc_82846DD0;
loc_82846DCC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82846DD0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82846de4
	if (!ctx.cr6.eq) goto loc_82846DE4;
	// stwx r30,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82846DE4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82846e20
	if (ctx.cr6.eq) goto loc_82846E20;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846e18
	if (ctx.cr6.eq) goto loc_82846E18;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846e24
	if (!ctx.cr6.eq) goto loc_82846E24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82846e24
	goto loc_82846E24;
loc_82846E18:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82846e24
	goto loc_82846E24;
loc_82846E20:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82846E24:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82846e54
	if (ctx.cr6.eq) goto loc_82846E54;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82846e4c
	if (ctx.cr6.eq) goto loc_82846E4C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82846e44
	if (ctx.cr6.eq) goto loc_82846E44;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82846e58
	goto loc_82846E58;
loc_82846E44:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82846e58
	goto loc_82846E58;
loc_82846E4C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82846e58
	goto loc_82846E58;
loc_82846E54:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82846E58:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82846e7c
	if (!ctx.cr6.eq) goto loc_82846E7C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82846E7C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82846eb8
	if (ctx.cr6.eq) goto loc_82846EB8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846eb0
	if (ctx.cr6.eq) goto loc_82846EB0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846ebc
	if (!ctx.cr6.eq) goto loc_82846EBC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82846ebc
	goto loc_82846EBC;
loc_82846EB0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82846ebc
	goto loc_82846EBC;
loc_82846EB8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82846EBC:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82846eec
	if (ctx.cr6.eq) goto loc_82846EEC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82846ee4
	if (ctx.cr6.eq) goto loc_82846EE4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82846edc
	if (ctx.cr6.eq) goto loc_82846EDC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82846ef0
	goto loc_82846EF0;
loc_82846EDC:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82846ef0
	goto loc_82846EF0;
loc_82846EE4:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82846ef0
	goto loc_82846EF0;
loc_82846EEC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82846EF0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82846f14
	if (!ctx.cr6.eq) goto loc_82846F14;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r30.u32);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_82846F14:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82846f50
	if (ctx.cr6.eq) goto loc_82846F50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846f48
	if (ctx.cr6.eq) goto loc_82846F48;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846f54
	if (!ctx.cr6.eq) goto loc_82846F54;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82846f54
	goto loc_82846F54;
loc_82846F48:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82846f54
	goto loc_82846F54;
loc_82846F50:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82846F54:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82846f84
	if (ctx.cr6.eq) goto loc_82846F84;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82846f7c
	if (ctx.cr6.eq) goto loc_82846F7C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82846f74
	if (ctx.cr6.eq) goto loc_82846F74;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82846f88
	goto loc_82846F88;
loc_82846F74:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82846f88
	goto loc_82846F88;
loc_82846F7C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82846f88
	goto loc_82846F88;
loc_82846F84:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82846F88:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82846fac
	if (!ctx.cr6.eq) goto loc_82846FAC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82846FAC:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82846FB0:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82846ff0
	if (ctx.cr6.eq) goto loc_82846FF0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82846fe8
	if (ctx.cr6.eq) goto loc_82846FE8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82846ff4
	if (!ctx.cr6.eq) goto loc_82846FF4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82846ff4
	goto loc_82846FF4;
loc_82846FE8:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82846ff4
	goto loc_82846FF4;
loc_82846FF0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82846FF4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82847024
	if (ctx.cr6.eq) goto loc_82847024;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8284701c
	if (ctx.cr6.eq) goto loc_8284701C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82847014
	if (ctx.cr6.eq) goto loc_82847014;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82847028
	goto loc_82847028;
loc_82847014:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82847028
	goto loc_82847028;
loc_8284701C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82847028
	goto loc_82847028;
loc_82847024:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82847028:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82847050
	if (!ctx.cr6.eq) goto loc_82847050;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82847050:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82847090
	if (ctx.cr6.eq) goto loc_82847090;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82847088
	if (ctx.cr6.eq) goto loc_82847088;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82847094
	if (!ctx.cr6.eq) goto loc_82847094;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82847094
	goto loc_82847094;
loc_82847088:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82847094
	goto loc_82847094;
loc_82847090:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82847094:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828470c4
	if (ctx.cr6.eq) goto loc_828470C4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828470bc
	if (ctx.cr6.eq) goto loc_828470BC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828470b4
	if (ctx.cr6.eq) goto loc_828470B4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x828470c8
	goto loc_828470C8;
loc_828470B4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828470c8
	goto loc_828470C8;
loc_828470BC:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x828470c8
	goto loc_828470C8;
loc_828470C4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_828470C8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828470f0
	if (!ctx.cr6.eq) goto loc_828470F0;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_828470F0:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82847130
	if (ctx.cr6.eq) goto loc_82847130;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82847128
	if (ctx.cr6.eq) goto loc_82847128;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82847134
	if (!ctx.cr6.eq) goto loc_82847134;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82847134
	goto loc_82847134;
loc_82847128:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82847134
	goto loc_82847134;
loc_82847130:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82847134:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82847164
	if (ctx.cr6.eq) goto loc_82847164;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8284715c
	if (ctx.cr6.eq) goto loc_8284715C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82847154
	if (ctx.cr6.eq) goto loc_82847154;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82847168
	goto loc_82847168;
loc_82847154:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82847168
	goto loc_82847168;
loc_8284715C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82847168
	goto loc_82847168;
loc_82847164:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82847168:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82847190
	if (!ctx.cr6.eq) goto loc_82847190;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r30.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82847190:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x82846fb0
	if (ctx.cr6.lt) goto loc_82846FB0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// blt cr6,0x82846d64
	if (ctx.cr6.lt) goto loc_82846D64;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828471AC"))) PPC_WEAK_FUNC(sub_828471AC);
PPC_FUNC_IMPL(__imp__sub_828471AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828471B0"))) PPC_WEAK_FUNC(sub_828471B0);
PPC_FUNC_IMPL(__imp__sub_828471B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828471B4"))) PPC_WEAK_FUNC(sub_828471B4);
PPC_FUNC_IMPL(__imp__sub_828471B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828471B8"))) PPC_WEAK_FUNC(sub_828471B8);
PPC_FUNC_IMPL(__imp__sub_828471B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828471C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r27,13192(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82847240
	if (ctx.cr6.eq) goto loc_82847240;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82847238
	if (ctx.cr6.eq) goto loc_82847238;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82847230
	if (ctx.cr6.eq) goto loc_82847230;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82847244
	goto loc_82847244;
loc_82847230:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82847244
	goto loc_82847244;
loc_82847238:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82847244
	goto loc_82847244;
loc_82847240:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82847244:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828472f8
	if (ctx.cr6.eq) goto loc_828472F8;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82847274
	if (ctx.cr6.eq) goto loc_82847274;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8284726c
	if (ctx.cr6.eq) goto loc_8284726C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82847278
	if (!ctx.cr6.eq) goto loc_82847278;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82847278
	goto loc_82847278;
loc_8284726C:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82847278
	goto loc_82847278;
loc_82847274:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82847278:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828472a8
	if (ctx.cr6.eq) goto loc_828472A8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828472a0
	if (ctx.cr6.eq) goto loc_828472A0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82847298
	if (ctx.cr6.eq) goto loc_82847298;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828472ac
	goto loc_828472AC;
loc_82847298:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x828472ac
	goto loc_828472AC;
loc_828472A0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x828472ac
	goto loc_828472AC;
loc_828472A8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_828472AC:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r9,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r9.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lhz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r4,r4,0,18,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// sth r4,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r4.u16);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828472f8
	if (!ctx.cr6.eq) goto loc_828472F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x829d16c8
	ctx.lr = 0x828472F8;
	sub_829D16C8(ctx, base);
loc_828472F8:
	// stw r27,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82847310"))) PPC_WEAK_FUNC(sub_82847310);
PPC_FUNC_IMPL(__imp__sub_82847310) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x8284736c
	if (ctx.cr6.eq) goto loc_8284736C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82847364
	if (ctx.cr6.eq) goto loc_82847364;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82847370
	if (!ctx.cr6.eq) goto loc_82847370;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82847370
	goto loc_82847370;
loc_82847364:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82847370
	goto loc_82847370;
loc_8284736C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82847370:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8284739c
	if (ctx.cr6.eq) goto loc_8284739C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82847394
	if (ctx.cr6.eq) goto loc_82847394;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x828473a0
	if (!ctx.cr6.eq) goto loc_828473A0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828473a0
	goto loc_828473A0;
loc_82847394:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828473a0
	goto loc_828473A0;
loc_8284739C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828473A0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828473B8"))) PPC_WEAK_FUNC(sub_828473B8);
PPC_FUNC_IMPL(__imp__sub_828473B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,328(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828473D0"))) PPC_WEAK_FUNC(sub_828473D0);
PPC_FUNC_IMPL(__imp__sub_828473D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,312(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 312);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828473E8"))) PPC_WEAK_FUNC(sub_828473E8);
PPC_FUNC_IMPL(__imp__sub_828473E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// blt cr6,0x8284740c
	if (ctx.cr6.lt) goto loc_8284740C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82847410
	if (ctx.cr6.lt) goto loc_82847410;
loc_8284740C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82847410:
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// blt cr6,0x82847424
	if (ctx.cr6.lt) goto loc_82847424;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82847428
	if (ctx.cr6.lt) goto loc_82847428;
loc_82847424:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82847428:
	// lwz r11,232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// blt cr6,0x8284743c
	if (ctx.cr6.lt) goto loc_8284743C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82847440
	if (ctx.cr6.lt) goto loc_82847440;
loc_8284743C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82847440:
	// lwz r11,312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82847474
	if (ctx.cr6.eq) goto loc_82847474;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82847464
	if (ctx.cr6.eq) goto loc_82847464;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284747c
	if (!ctx.cr6.eq) goto loc_8284747C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284747c
	goto loc_8284747C;
loc_82847464:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8284747c
	goto loc_8284747C;
loc_82847474:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8284747C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8284748c
	if (!ctx.cr6.eq) goto loc_8284748C;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8284748C:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847494"))) PPC_WEAK_FUNC(sub_82847494);
PPC_FUNC_IMPL(__imp__sub_82847494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847498"))) PPC_WEAK_FUNC(sub_82847498);
PPC_FUNC_IMPL(__imp__sub_82847498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,224(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828474B0"))) PPC_WEAK_FUNC(sub_828474B0);
PPC_FUNC_IMPL(__imp__sub_828474B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,264(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 264);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828474C8"))) PPC_WEAK_FUNC(sub_828474C8);
PPC_FUNC_IMPL(__imp__sub_828474C8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82847518
	if (ctx.cr6.eq) goto loc_82847518;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82847510
	if (ctx.cr6.eq) goto loc_82847510;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82847508
	if (ctx.cr6.eq) goto loc_82847508;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8284751c
	goto loc_8284751C;
loc_82847508:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284751c
	goto loc_8284751C;
loc_82847510:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8284751c
	goto loc_8284751C;
loc_82847518:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8284751C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828475bc
	if (ctx.cr6.eq) goto loc_828475BC;
	// addi r9,r10,532
	ctx.r9.s64 = ctx.r10.s64 + 532;
	// li r31,32
	ctx.r31.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82847530:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82847564
	if (ctx.cr6.eq) goto loc_82847564;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284755c
	if (ctx.cr6.eq) goto loc_8284755C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82847554
	if (ctx.cr6.eq) goto loc_82847554;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82847568
	goto loc_82847568;
loc_82847554:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82847568
	goto loc_82847568;
loc_8284755C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82847568
	goto loc_82847568;
loc_82847564:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82847568:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82847598
	if (ctx.cr6.eq) goto loc_82847598;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82847590
	if (ctx.cr6.eq) goto loc_82847590;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82847588
	if (ctx.cr6.eq) goto loc_82847588;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8284759c
	goto loc_8284759C;
loc_82847588:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284759c
	goto loc_8284759C;
loc_82847590:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8284759c
	goto loc_8284759C;
loc_82847598:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8284759C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828475b0
	if (!ctx.cr6.eq) goto loc_828475B0;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_828475B0:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82847530
	if (!ctx.cr0.eq) goto loc_82847530;
loc_828475BC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828475C4"))) PPC_WEAK_FUNC(sub_828475C4);
PPC_FUNC_IMPL(__imp__sub_828475C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828475C8"))) PPC_WEAK_FUNC(sub_828475C8);
PPC_FUNC_IMPL(__imp__sub_828475C8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
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
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x8284761c
	if (ctx.cr6.eq) goto loc_8284761C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82847614
	if (ctx.cr6.eq) goto loc_82847614;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8284760c
	if (ctx.cr6.eq) goto loc_8284760C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82847620
	goto loc_82847620;
loc_8284760C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82847620
	goto loc_82847620;
loc_82847614:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82847620
	goto loc_82847620;
loc_8284761C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82847620:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82847764
	if (ctx.cr6.eq) goto loc_82847764;
	// lwz r6,524(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82847764
	if (!ctx.cr6.gt) goto loc_82847764;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
loc_82847640:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82847674
	if (ctx.cr6.eq) goto loc_82847674;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8284766c
	if (ctx.cr6.eq) goto loc_8284766C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82847664
	if (ctx.cr6.eq) goto loc_82847664;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x82847678
	goto loc_82847678;
loc_82847664:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82847678
	goto loc_82847678;
loc_8284766C:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// b 0x82847678
	goto loc_82847678;
loc_82847674:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82847678:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828476a8
	if (ctx.cr6.eq) goto loc_828476A8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828476a0
	if (ctx.cr6.eq) goto loc_828476A0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82847698
	if (ctx.cr6.eq) goto loc_82847698;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x828476ac
	goto loc_828476AC;
loc_82847698:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828476ac
	goto loc_828476AC;
loc_828476A0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x828476ac
	goto loc_828476AC;
loc_828476A8:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_828476AC:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828476d4
	if (ctx.cr6.eq) goto loc_828476D4;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82847640
	if (ctx.cr6.lt) goto loc_82847640;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_828476D4:
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// stw r10,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82847734
	if (ctx.cr6.eq) goto loc_82847734;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 3;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r8,168
	ctx.r5.s64 = ctx.r8.s64 + 168;
	// addi r4,r8,297
	ctx.r4.s64 = ctx.r8.s64 + 297;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// addi r8,r10,168
	ctx.r8.s64 = ctx.r10.s64 + 168;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r6,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// addi r5,r10,297
	ctx.r5.s64 = ctx.r10.s64 + 297;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// stwx r3,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
loc_82847734:
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// addi r8,r10,168
	ctx.r8.s64 = ctx.r10.s64 + 168;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// addi r6,r10,297
	ctx.r6.s64 = ctx.r10.s64 + 297;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r30.u32);
loc_82847764:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847770"))) PPC_WEAK_FUNC(sub_82847770);
PPC_FUNC_IMPL(__imp__sub_82847770) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x828477c4
	if (ctx.cr6.eq) goto loc_828477C4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828477bc
	if (ctx.cr6.eq) goto loc_828477BC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828477b4
	if (ctx.cr6.eq) goto loc_828477B4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x828477c8
	goto loc_828477C8;
loc_828477B4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828477c8
	goto loc_828477C8;
loc_828477BC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828477c8
	goto loc_828477C8;
loc_828477C4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828477C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82847940
	if (ctx.cr6.eq) goto loc_82847940;
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82847940
	if (!ctx.cr6.gt) goto loc_82847940;
	// addi r9,r30,1188
	ctx.r9.s64 = ctx.r30.s64 + 1188;
loc_828477E8:
	// lwz r11,-516(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -516);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284781c
	if (ctx.cr6.eq) goto loc_8284781C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82847814
	if (ctx.cr6.eq) goto loc_82847814;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8284780c
	if (ctx.cr6.eq) goto loc_8284780C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82847820
	goto loc_82847820;
loc_8284780C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82847820
	goto loc_82847820;
loc_82847814:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82847820
	goto loc_82847820;
loc_8284781C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82847820:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82847850
	if (ctx.cr6.eq) goto loc_82847850;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82847848
	if (ctx.cr6.eq) goto loc_82847848;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82847840
	if (ctx.cr6.eq) goto loc_82847840;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82847854
	goto loc_82847854;
loc_82847840:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82847854
	goto loc_82847854;
loc_82847848:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82847854
	goto loc_82847854;
loc_82847850:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82847854:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828478d4
	if (ctx.cr6.eq) goto loc_828478D4;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82847890
	if (ctx.cr6.eq) goto loc_82847890;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82847888
	if (ctx.cr6.eq) goto loc_82847888;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82847880
	if (ctx.cr6.eq) goto loc_82847880;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82847894
	goto loc_82847894;
loc_82847880:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82847894
	goto loc_82847894;
loc_82847888:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82847894
	goto loc_82847894;
loc_82847890:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82847894:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828478c4
	if (ctx.cr6.eq) goto loc_828478C4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828478bc
	if (ctx.cr6.eq) goto loc_828478BC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828478b4
	if (ctx.cr6.eq) goto loc_828478B4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x828478c8
	goto loc_828478C8;
loc_828478B4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828478c8
	goto loc_828478C8;
loc_828478BC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828478c8
	goto loc_828478C8;
loc_828478C4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828478C8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8284792c
	if (!ctx.cr6.eq) goto loc_8284792C;
	// b 0x82847920
	goto loc_82847920;
loc_828478D4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82847908
	if (ctx.cr6.eq) goto loc_82847908;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82847900
	if (ctx.cr6.eq) goto loc_82847900;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828478f8
	if (ctx.cr6.eq) goto loc_828478F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8284790c
	goto loc_8284790C;
loc_828478F8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284790c
	goto loc_8284790C;
loc_82847900:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8284790c
	goto loc_8284790C;
loc_82847908:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8284790C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8284791c
	if (!ctx.cr6.eq) goto loc_8284791C;
	// stw r5,-516(r9)
	PPC_STORE_U32(ctx.r9.u32 + -516, ctx.r5.u32);
	// b 0x82847924
	goto loc_82847924;
loc_8284791C:
	// stw r10,-516(r9)
	PPC_STORE_U32(ctx.r9.u32 + -516, ctx.r10.u32);
loc_82847920:
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
loc_82847924:
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8284792C:
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828477e8
	if (ctx.cr6.lt) goto loc_828477E8;
loc_82847940:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284794C"))) PPC_WEAK_FUNC(sub_8284794C);
PPC_FUNC_IMPL(__imp__sub_8284794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847950"))) PPC_WEAK_FUNC(sub_82847950);
PPC_FUNC_IMPL(__imp__sub_82847950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82847958;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x828479c0
	if (ctx.cr6.eq) goto loc_828479C0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828479b8
	if (ctx.cr6.eq) goto loc_828479B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x828479d0
	goto loc_828479D0;
loc_828479B8:
	// lwz r3,1700(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1700);
	// b 0x828479c4
	goto loc_828479C4;
loc_828479C0:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_828479C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827eee58
	ctx.lr = 0x828479CC;
	sub_827EEE58(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_828479D0:
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828479E8"))) PPC_WEAK_FUNC(sub_828479E8);
PPC_FUNC_IMPL(__imp__sub_828479E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828479EC"))) PPC_WEAK_FUNC(sub_828479EC);
PPC_FUNC_IMPL(__imp__sub_828479EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828479F0"))) PPC_WEAK_FUNC(sub_828479F0);
PPC_FUNC_IMPL(__imp__sub_828479F0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82847a14
	if (ctx.cr6.eq) goto loc_82847A14;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82847a14
	if (ctx.cr6.eq) goto loc_82847A14;
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82847A14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847A20"))) PPC_WEAK_FUNC(sub_82847A20);
PPC_FUNC_IMPL(__imp__sub_82847A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,236(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847A38"))) PPC_WEAK_FUNC(sub_82847A38);
PPC_FUNC_IMPL(__imp__sub_82847A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847A50"))) PPC_WEAK_FUNC(sub_82847A50);
PPC_FUNC_IMPL(__imp__sub_82847A50) {
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
	// beq cr6,0x82847a94
	if (ctx.cr6.eq) goto loc_82847A94;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82847a8c
	if (ctx.cr6.eq) goto loc_82847A8C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82847a98
	if (!ctx.cr6.eq) goto loc_82847A98;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82847a98
	goto loc_82847A98;
loc_82847A8C:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82847a98
	goto loc_82847A98;
loc_82847A94:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82847A98:
	// lwz r10,232(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82847ac8
	if (ctx.cr6.eq) goto loc_82847AC8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82847ac4
	if (ctx.cr6.eq) goto loc_82847AC4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82847abc
	if (ctx.cr6.eq) goto loc_82847ABC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82847ac8
	goto loc_82847AC8;
loc_82847ABC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82847ac8
	goto loc_82847AC8;
loc_82847AC4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82847AC8:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,232(r8)
	PPC_STORE_U32(ctx.r8.u32 + 232, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847ADC"))) PPC_WEAK_FUNC(sub_82847ADC);
PPC_FUNC_IMPL(__imp__sub_82847ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847AE0"))) PPC_WEAK_FUNC(sub_82847AE0);
PPC_FUNC_IMPL(__imp__sub_82847AE0) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x82847b3c
	if (ctx.cr6.eq) goto loc_82847B3C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82847b34
	if (ctx.cr6.eq) goto loc_82847B34;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82847b40
	if (!ctx.cr6.eq) goto loc_82847B40;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82847b40
	goto loc_82847B40;
loc_82847B34:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82847b40
	goto loc_82847B40;
loc_82847B3C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82847B40:
	// lwz r10,324(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 324);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82847b6c
	if (ctx.cr6.eq) goto loc_82847B6C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82847b64
	if (ctx.cr6.eq) goto loc_82847B64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82847b70
	if (!ctx.cr6.eq) goto loc_82847B70;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82847b70
	goto loc_82847B70;
loc_82847B64:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82847b70
	goto loc_82847B70;
loc_82847B6C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82847B70:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,324(r6)
	PPC_STORE_U32(ctx.r6.u32 + 324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847B88"))) PPC_WEAK_FUNC(sub_82847B88);
PPC_FUNC_IMPL(__imp__sub_82847B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,52(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847B9C"))) PPC_WEAK_FUNC(sub_82847B9C);
PPC_FUNC_IMPL(__imp__sub_82847B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847BA0"))) PPC_WEAK_FUNC(sub_82847BA0);
PPC_FUNC_IMPL(__imp__sub_82847BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,52(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847BB8"))) PPC_WEAK_FUNC(sub_82847BB8);
PPC_FUNC_IMPL(__imp__sub_82847BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82847c10
	if (ctx.cr6.eq) goto loc_82847C10;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82847c10
	if (ctx.cr6.eq) goto loc_82847C10;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,29744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r7,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r7.u32);
	// blr 
	return;
loc_82847C10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847C1C"))) PPC_WEAK_FUNC(sub_82847C1C);
PPC_FUNC_IMPL(__imp__sub_82847C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847C20"))) PPC_WEAK_FUNC(sub_82847C20);
PPC_FUNC_IMPL(__imp__sub_82847C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,196(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 196, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847C34"))) PPC_WEAK_FUNC(sub_82847C34);
PPC_FUNC_IMPL(__imp__sub_82847C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847C38"))) PPC_WEAK_FUNC(sub_82847C38);
PPC_FUNC_IMPL(__imp__sub_82847C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 192, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847C50"))) PPC_WEAK_FUNC(sub_82847C50);
PPC_FUNC_IMPL(__imp__sub_82847C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,356(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 356);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847C68"))) PPC_WEAK_FUNC(sub_82847C68);
PPC_FUNC_IMPL(__imp__sub_82847C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847C80"))) PPC_WEAK_FUNC(sub_82847C80);
PPC_FUNC_IMPL(__imp__sub_82847C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,80(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847C94"))) PPC_WEAK_FUNC(sub_82847C94);
PPC_FUNC_IMPL(__imp__sub_82847C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847C98"))) PPC_WEAK_FUNC(sub_82847C98);
PPC_FUNC_IMPL(__imp__sub_82847C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847CB0"))) PPC_WEAK_FUNC(sub_82847CB0);
PPC_FUNC_IMPL(__imp__sub_82847CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82847CB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82847d14
	if (ctx.cr6.eq) goto loc_82847D14;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82847d0c
	if (ctx.cr6.eq) goto loc_82847D0C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82847d04
	if (ctx.cr6.eq) goto loc_82847D04;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82847d18
	goto loc_82847D18;
loc_82847D04:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82847d18
	goto loc_82847D18;
loc_82847D0C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82847d18
	goto loc_82847D18;
loc_82847D14:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82847D18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82847d2c
	if (!ctx.cr6.eq) goto loc_82847D2C;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82847D2C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82847d54
	if (ctx.cr6.eq) goto loc_82847D54;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82847d4c
	if (ctx.cr6.eq) goto loc_82847D4C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82847d58
	if (!ctx.cr6.eq) goto loc_82847D58;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// b 0x82847d58
	goto loc_82847D58;
loc_82847D4C:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// b 0x82847d58
	goto loc_82847D58;
loc_82847D54:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82847D58:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82847d68
	if (ctx.cr6.eq) goto loc_82847D68;
	// lbz r11,18(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 18);
loc_82847D68:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r9.u32);
	// beq cr6,0x82847e10
	if (ctx.cr6.eq) goto loc_82847E10;
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r10.u8);
	// lwz r9,336(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r8.u32);
	// bl 0x828073d0
	ctx.lr = 0x82847DA4;
	sub_828073D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82847dd4
	if (ctx.cr6.eq) goto loc_82847DD4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lbz r4,2(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// rotlwi r3,r4,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stb r29,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r29.u8);
loc_82847DD4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828073d0
	ctx.lr = 0x82847DE0;
	sub_828073D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82847e10
	if (ctx.cr6.eq) goto loc_82847E10;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lbz r4,3(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// rotlwi r3,r4,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stb r29,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r29.u8);
loc_82847E10:
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82847eb0
	if (ctx.cr6.eq) goto loc_82847EB0;
	// lbz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r10.u8);
	// lwz r9,336(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stw r8,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r8.u32);
	// bl 0x828073d0
	ctx.lr = 0x82847E40;
	sub_828073D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82847e74
	if (ctx.cr6.eq) goto loc_82847E74;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lbz r4,2(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// rotlwi r3,r4,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
loc_82847E74:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828073d0
	ctx.lr = 0x82847E80;
	sub_828073D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82847eb0
	if (ctx.cr6.eq) goto loc_82847EB0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lbz r4,3(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// rotlwi r3,r4,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lwzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
loc_82847EB0:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82847EBC"))) PPC_WEAK_FUNC(sub_82847EBC);
PPC_FUNC_IMPL(__imp__sub_82847EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847EC0"))) PPC_WEAK_FUNC(sub_82847EC0);
PPC_FUNC_IMPL(__imp__sub_82847EC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r11,r11,148
	ctx.r11.s64 = ctx.r11.s64 + 148;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82847EDC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82847edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82847EDC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847EEC"))) PPC_WEAK_FUNC(sub_82847EEC);
PPC_FUNC_IMPL(__imp__sub_82847EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847EF0"))) PPC_WEAK_FUNC(sub_82847EF0);
PPC_FUNC_IMPL(__imp__sub_82847EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847F08"))) PPC_WEAK_FUNC(sub_82847F08);
PPC_FUNC_IMPL(__imp__sub_82847F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82847F10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,13192(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82847f64
	if (ctx.cr6.eq) goto loc_82847F64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r11.u32);
loc_82847F64:
	// lwz r4,216(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82847f74
	if (ctx.cr6.eq) goto loc_82847F74;
	// bl 0x82bf1330
	ctx.lr = 0x82847F74;
	sub_82BF1330(ctx, base);
loc_82847F74:
	// stw r27,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82847F8C"))) PPC_WEAK_FUNC(sub_82847F8C);
PPC_FUNC_IMPL(__imp__sub_82847F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847F90"))) PPC_WEAK_FUNC(sub_82847F90);
PPC_FUNC_IMPL(__imp__sub_82847F90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,2032(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2032);
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

__attribute__((alias("__imp__sub_82847FB8"))) PPC_WEAK_FUNC(sub_82847FB8);
PPC_FUNC_IMPL(__imp__sub_82847FB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847FC4"))) PPC_WEAK_FUNC(sub_82847FC4);
PPC_FUNC_IMPL(__imp__sub_82847FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847FC8"))) PPC_WEAK_FUNC(sub_82847FC8);
PPC_FUNC_IMPL(__imp__sub_82847FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82847FEC"))) PPC_WEAK_FUNC(sub_82847FEC);
PPC_FUNC_IMPL(__imp__sub_82847FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82847FF0"))) PPC_WEAK_FUNC(sub_82847FF0);
PPC_FUNC_IMPL(__imp__sub_82847FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82847FF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r25,13188(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r24,13180(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r23,13184(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,2032(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2032);
	// bl 0x827eee58
	ctx.lr = 0x82848048;
	sub_827EEE58(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82848078
	if (ctx.cr6.eq) goto loc_82848078;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82848068
	if (ctx.cr6.eq) goto loc_82848068;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82848080
	if (!ctx.cr6.eq) goto loc_82848080;
	// lwz r3,13188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// b 0x82848080
	goto loc_82848080;
loc_82848068:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82848080
	goto loc_82848080;
loc_82848078:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82848080:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r25.u32);
	// beq cr6,0x828480a0
	if (ctx.cr6.eq) goto loc_828480A0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_828480A0:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828480AC"))) PPC_WEAK_FUNC(sub_828480AC);
PPC_FUNC_IMPL(__imp__sub_828480AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828480B0"))) PPC_WEAK_FUNC(sub_828480B0);
PPC_FUNC_IMPL(__imp__sub_828480B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x828480d4
	if (!ctx.cr6.eq) goto loc_828480D4;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828480e0
	if (ctx.cr6.eq) goto loc_828480E0;
loc_828480D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828480E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828480EC"))) PPC_WEAK_FUNC(sub_828480EC);
PPC_FUNC_IMPL(__imp__sub_828480EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828480F0"))) PPC_WEAK_FUNC(sub_828480F0);
PPC_FUNC_IMPL(__imp__sub_828480F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848108"))) PPC_WEAK_FUNC(sub_82848108);
PPC_FUNC_IMPL(__imp__sub_82848108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,908(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848120"))) PPC_WEAK_FUNC(sub_82848120);
PPC_FUNC_IMPL(__imp__sub_82848120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,1544(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82848140
	if (!ctx.cr6.lt) goto loc_82848140;
	// stw r10,1544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1544, ctx.r10.u32);
loc_82848140:
	// lwz r9,1768(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1768);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8284815c
	if (!ctx.cr6.lt) goto loc_8284815C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1768, ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_8284815C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848168"))) PPC_WEAK_FUNC(sub_82848168);
PPC_FUNC_IMPL(__imp__sub_82848168) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,284
	ctx.r10.s64 = ctx.r5.s64 + 284;
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

__attribute__((alias("__imp__sub_82848188"))) PPC_WEAK_FUNC(sub_82848188);
PPC_FUNC_IMPL(__imp__sub_82848188) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r9,2012(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2012);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828481c4
	if (!ctx.cr6.gt) goto loc_828481C4;
	// addi r10,r10,924
	ctx.r10.s64 = ctx.r10.s64 + 924;
loc_828481A8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x828481c8
	if (!ctx.cr6.eq) goto loc_828481C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828481a8
	if (ctx.cr6.lt) goto loc_828481A8;
loc_828481C4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828481C8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828481D0"))) PPC_WEAK_FUNC(sub_828481D0);
PPC_FUNC_IMPL(__imp__sub_828481D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r9,924
	ctx.r11.s64 = ctx.r9.s64 + 924;
	// stw r8,2016(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2016, ctx.r8.u32);
loc_828481EC:
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82848214
	if (ctx.cr6.eq) goto loc_82848214;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8284821c
	if (!ctx.cr6.eq) goto loc_8284821C;
loc_82848214:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x82848224
	goto loc_82848224;
loc_8284821C:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82848230
	if (!ctx.cr6.eq) goto loc_82848230;
loc_82848224:
	// lwz r10,2016(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2016);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,2016(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2016, ctx.r10.u32);
loc_82848230:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r8,50
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 50, ctx.xer);
	// blt cr6,0x828481ec
	if (ctx.cr6.lt) goto loc_828481EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848244"))) PPC_WEAK_FUNC(sub_82848244);
PPC_FUNC_IMPL(__imp__sub_82848244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848248"))) PPC_WEAK_FUNC(sub_82848248);
PPC_FUNC_IMPL(__imp__sub_82848248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,113
	ctx.r10.s64 = ctx.r5.s64 + 113;
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

__attribute__((alias("__imp__sub_82848268"))) PPC_WEAK_FUNC(sub_82848268);
PPC_FUNC_IMPL(__imp__sub_82848268) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,50
	ctx.r31.s64 = 50;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r6,r11,452
	ctx.r6.s64 = ctx.r11.s64 + 452;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82848294:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828482c8
	if (ctx.cr6.eq) goto loc_828482C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828482c0
	if (ctx.cr6.eq) goto loc_828482C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828482b8
	if (ctx.cr6.eq) goto loc_828482B8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828482cc
	goto loc_828482CC;
loc_828482B8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828482cc
	goto loc_828482CC;
loc_828482C0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828482cc
	goto loc_828482CC;
loc_828482C8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_828482CC:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828482fc
	if (ctx.cr6.eq) goto loc_828482FC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828482f4
	if (ctx.cr6.eq) goto loc_828482F4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828482ec
	if (ctx.cr6.eq) goto loc_828482EC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82848300
	goto loc_82848300;
loc_828482EC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82848300
	goto loc_82848300;
loc_828482F4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82848300
	goto loc_82848300;
loc_828482FC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82848300:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82848314
	if (!ctx.cr6.eq) goto loc_82848314;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82848314:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82848294
	if (!ctx.cr0.eq) goto loc_82848294;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848328"))) PPC_WEAK_FUNC(sub_82848328);
PPC_FUNC_IMPL(__imp__sub_82848328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,231
	ctx.r10.s64 = ctx.r4.s64 + 231;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x8284836c
	if (ctx.cr6.eq) goto loc_8284836C;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82848378
	if (!ctx.cr6.eq) goto loc_82848378;
	// lwz r10,2016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2016);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,2016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2016, ctx.r10.u32);
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
loc_8284836C:
	// lwz r10,2016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2016);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,2016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2016, ctx.r10.u32);
loc_82848378:
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848380"))) PPC_WEAK_FUNC(sub_82848380);
PPC_FUNC_IMPL(__imp__sub_82848380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,231
	ctx.r10.s64 = ctx.r5.s64 + 231;
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

__attribute__((alias("__imp__sub_828483A0"))) PPC_WEAK_FUNC(sub_828483A0);
PPC_FUNC_IMPL(__imp__sub_828483A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2012(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2012);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828483B8"))) PPC_WEAK_FUNC(sub_828483B8);
PPC_FUNC_IMPL(__imp__sub_828483B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r11,r11,1136
	ctx.r11.s64 = ctx.r11.s64 + 1136;
loc_828483CC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x828483f4
	if (ctx.cr6.eq) goto loc_828483F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x828483cc
	if (ctx.cr6.lt) goto loc_828483CC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828483F4:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828483FC"))) PPC_WEAK_FUNC(sub_828483FC);
PPC_FUNC_IMPL(__imp__sub_828483FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848400"))) PPC_WEAK_FUNC(sub_82848400);
PPC_FUNC_IMPL(__imp__sub_82848400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,1140
	ctx.r10.s64 = ctx.r11.s64 + 1140;
	// stw r9,2016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2016, ctx.r9.u32);
	// stw r9,2012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2012, ctx.r9.u32);
loc_82848420:
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,2012(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2012);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,2012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2012, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,2012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2012, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,2012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2012, ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,2012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2012, ctx.r9.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// stw r9,2012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2012, ctx.r9.u32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpwi cr6,r7,50
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 50, ctx.xer);
	// blt cr6,0x82848420
	if (ctx.cr6.lt) goto loc_82848420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828484C4"))) PPC_WEAK_FUNC(sub_828484C4);
PPC_FUNC_IMPL(__imp__sub_828484C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828484C8"))) PPC_WEAK_FUNC(sub_828484C8);
PPC_FUNC_IMPL(__imp__sub_828484C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,392
	ctx.r10.s64 = ctx.r5.s64 + 392;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x828484fc
	if (ctx.cr6.eq) goto loc_828484FC;
	// addi r10,r5,113
	ctx.r10.s64 = ctx.r5.s64 + 113;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828484FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848508"))) PPC_WEAK_FUNC(sub_82848508);
PPC_FUNC_IMPL(__imp__sub_82848508) {
	PPC_FUNC_PROLOGUE();
	// li r11,58
	ctx.r11.s64 = 58;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848514"))) PPC_WEAK_FUNC(sub_82848514);
PPC_FUNC_IMPL(__imp__sub_82848514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848518"))) PPC_WEAK_FUNC(sub_82848518);
PPC_FUNC_IMPL(__imp__sub_82848518) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x8284855c
	if (ctx.cr6.eq) goto loc_8284855C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82848554
	if (ctx.cr6.eq) goto loc_82848554;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8284854c
	if (ctx.cr6.eq) goto loc_8284854C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82848560
	goto loc_82848560;
loc_8284854C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82848560
	goto loc_82848560;
loc_82848554:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82848560
	goto loc_82848560;
loc_8284855C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82848560:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82848590
	if (ctx.cr6.eq) goto loc_82848590;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82848594
	if (ctx.cr6.eq) goto loc_82848594;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82848588
	if (ctx.cr6.eq) goto loc_82848588;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82848594
	goto loc_82848594;
loc_82848588:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82848594
	goto loc_82848594;
loc_82848590:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82848594:
	// b 0x82848268
	sub_82848268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82848598"))) PPC_WEAK_FUNC(sub_82848598);
PPC_FUNC_IMPL(__imp__sub_82848598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284859C"))) PPC_WEAK_FUNC(sub_8284859C);
PPC_FUNC_IMPL(__imp__sub_8284859C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828485A0"))) PPC_WEAK_FUNC(sub_828485A0);
PPC_FUNC_IMPL(__imp__sub_828485A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828485A4"))) PPC_WEAK_FUNC(sub_828485A4);
PPC_FUNC_IMPL(__imp__sub_828485A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828485A8"))) PPC_WEAK_FUNC(sub_828485A8);
PPC_FUNC_IMPL(__imp__sub_828485A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1780(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1780);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828485C0"))) PPC_WEAK_FUNC(sub_828485C0);
PPC_FUNC_IMPL(__imp__sub_828485C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828485C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13180(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r24,13188(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r23,13184(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r11.u32);
	// stw r10,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r10.u32);
	// beq cr6,0x82848668
	if (ctx.cr6.eq) goto loc_82848668;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x827eee58
	ctx.lr = 0x82848620;
	sub_827EEE58(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82848658
	if (ctx.cr6.eq) goto loc_82848658;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82848648
	if (ctx.cr6.eq) goto loc_82848648;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82848640
	if (ctx.cr6.eq) goto loc_82848640;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82848660
	goto loc_82848660;
loc_82848640:
	// lwz r11,13188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// b 0x82848660
	goto loc_82848660;
loc_82848648:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82848660
	goto loc_82848660;
loc_82848658:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82848660:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82848674
	if (!ctx.cr6.eq) goto loc_82848674;
loc_82848668:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82848678
	goto loc_82848678;
loc_82848674:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_82848678:
	// stw r24,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r24.u32);
	// stw r23,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r23.u32);
	// stw r26,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r26.u32);
	// stw r25,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82848690"))) PPC_WEAK_FUNC(sub_82848690);
PPC_FUNC_IMPL(__imp__sub_82848690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,652(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 652);
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

__attribute__((alias("__imp__sub_828486B8"))) PPC_WEAK_FUNC(sub_828486B8);
PPC_FUNC_IMPL(__imp__sub_828486B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,900(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 900);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828486D0"))) PPC_WEAK_FUNC(sub_828486D0);
PPC_FUNC_IMPL(__imp__sub_828486D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828486E8"))) PPC_WEAK_FUNC(sub_828486E8);
PPC_FUNC_IMPL(__imp__sub_828486E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828486F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r31,13180(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,13192(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13192);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r29,13188(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// lwz r28,13184(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13184);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r11.u32);
	// stw r10,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r10.u32);
	// bl 0x827eee58
	ctx.lr = 0x82848740;
	sub_827EEE58(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r30,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r30.u32);
	// stw r31,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r31.u32);
	// stw r28,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r28.u32);
	// stw r29,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284875C"))) PPC_WEAK_FUNC(sub_8284875C);
PPC_FUNC_IMPL(__imp__sub_8284875C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848760"))) PPC_WEAK_FUNC(sub_82848760);
PPC_FUNC_IMPL(__imp__sub_82848760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2044(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2044);
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

__attribute__((alias("__imp__sub_82848784"))) PPC_WEAK_FUNC(sub_82848784);
PPC_FUNC_IMPL(__imp__sub_82848784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848788"))) PPC_WEAK_FUNC(sub_82848788);
PPC_FUNC_IMPL(__imp__sub_82848788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,872(r9)
	PPC_STORE_U32(ctx.r9.u32 + 872, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284879C"))) PPC_WEAK_FUNC(sub_8284879C);
PPC_FUNC_IMPL(__imp__sub_8284879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828487A0"))) PPC_WEAK_FUNC(sub_828487A0);
PPC_FUNC_IMPL(__imp__sub_828487A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,144(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x828487c0
	if (!ctx.cr6.gt) goto loc_828487C0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_828487C0:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828487C8"))) PPC_WEAK_FUNC(sub_828487C8);
PPC_FUNC_IMPL(__imp__sub_828487C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 492, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828487E0"))) PPC_WEAK_FUNC(sub_828487E0);
PPC_FUNC_IMPL(__imp__sub_828487E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82848820
	if (ctx.cr6.eq) goto loc_82848820;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82848810
	if (ctx.cr6.eq) goto loc_82848810;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82848828
	if (!ctx.cr6.eq) goto loc_82848828;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82848828
	goto loc_82848828;
loc_82848810:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82848828
	goto loc_82848828;
loc_82848820:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_82848828:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82848884
	if (ctx.cr6.eq) goto loc_82848884;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lfs f13,180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f12,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,180(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// blt cr6,0x82848864
	if (ctx.cr6.lt) goto loc_82848864;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8284886c
	if (!ctx.cr6.gt) goto loc_8284886C;
loc_82848864:
	// stw r8,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r8.u32);
	// b 0x82848870
	goto loc_82848870;
loc_8284886C:
	// stw r9,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r9.u32);
loc_82848870:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8284888c
	if (!ctx.cr6.gt) goto loc_8284888C;
loc_82848884:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8284888C:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848894"))) PPC_WEAK_FUNC(sub_82848894);
PPC_FUNC_IMPL(__imp__sub_82848894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848898"))) PPC_WEAK_FUNC(sub_82848898);
PPC_FUNC_IMPL(__imp__sub_82848898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f13,180(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x828488c0
	if (ctx.cr6.gt) goto loc_828488C0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_828488C0:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828488C8"))) PPC_WEAK_FUNC(sub_828488C8);
PPC_FUNC_IMPL(__imp__sub_828488C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,368(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 368, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828488EC"))) PPC_WEAK_FUNC(sub_828488EC);
PPC_FUNC_IMPL(__imp__sub_828488EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828488F0"))) PPC_WEAK_FUNC(sub_828488F0);
PPC_FUNC_IMPL(__imp__sub_828488F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,500(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 500, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848914"))) PPC_WEAK_FUNC(sub_82848914);
PPC_FUNC_IMPL(__imp__sub_82848914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848918"))) PPC_WEAK_FUNC(sub_82848918);
PPC_FUNC_IMPL(__imp__sub_82848918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,624(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 624, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284893C"))) PPC_WEAK_FUNC(sub_8284893C);
PPC_FUNC_IMPL(__imp__sub_8284893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848940"))) PPC_WEAK_FUNC(sub_82848940);
PPC_FUNC_IMPL(__imp__sub_82848940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,624(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848958"))) PPC_WEAK_FUNC(sub_82848958);
PPC_FUNC_IMPL(__imp__sub_82848958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82848974
	if (!ctx.cr6.gt) goto loc_82848974;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// blt cr6,0x82848980
	if (ctx.cr6.lt) goto loc_82848980;
loc_82848974:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82848980:
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848994"))) PPC_WEAK_FUNC(sub_82848994);
PPC_FUNC_IMPL(__imp__sub_82848994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848998"))) PPC_WEAK_FUNC(sub_82848998);
PPC_FUNC_IMPL(__imp__sub_82848998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x828489d8
	if (ctx.cr6.eq) goto loc_828489D8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828489d0
	if (ctx.cr6.eq) goto loc_828489D0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x828489c8
	if (ctx.cr6.eq) goto loc_828489C8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x828489dc
	goto loc_828489DC;
loc_828489C8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828489dc
	goto loc_828489DC;
loc_828489D0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x828489dc
	goto loc_828489DC;
loc_828489D8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828489DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82848a3c
	if (ctx.cr6.eq) goto loc_82848A3C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82848a10
	if (ctx.cr6.eq) goto loc_82848A10;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82848a0c
	if (ctx.cr6.eq) goto loc_82848A0C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82848a04
	if (ctx.cr6.eq) goto loc_82848A04;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82848a10
	goto loc_82848A10;
loc_82848A04:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82848a10
	goto loc_82848A10;
loc_82848A0C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82848A10:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r11,900(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 900);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82848a3c
	if (!ctx.cr6.gt) goto loc_82848A3C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x82848a48
	if (ctx.cr6.lt) goto loc_82848A48;
loc_82848A3C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82848A48:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848A5C"))) PPC_WEAK_FUNC(sub_82848A5C);
PPC_FUNC_IMPL(__imp__sub_82848A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848A60"))) PPC_WEAK_FUNC(sub_82848A60);
PPC_FUNC_IMPL(__imp__sub_82848A60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r8,r8,-16192
	ctx.r8.s64 = ctx.r8.s64 + -16192;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r6,r9,264
	ctx.r6.s64 = ctx.r9.s64 + 264;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82848A84:
	// stw r8,-260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -260, ctx.r8.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82848a84
	if (!ctx.cr0.eq) goto loc_82848A84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r8,r11,-16172
	ctx.r8.s64 = ctx.r11.s64 + -16172;
	// li r7,3915
	ctx.r7.s64 = 3915;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// addi r4,r10,-16392
	ctx.r4.s64 = ctx.r10.s64 + -16392;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// li r3,3920
	ctx.r3.s64 = 3920;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// addi r10,r5,-16152
	ctx.r10.s64 = ctx.r5.s64 + -16152;
	// stw r3,268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 268, ctx.r3.u32);
	// li r8,3918
	ctx.r8.s64 = 3918;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// addi r6,r11,-16132
	ctx.r6.s64 = ctx.r11.s64 + -16132;
	// stw r8,272(r9)
	PPC_STORE_U32(ctx.r9.u32 + 272, ctx.r8.u32);
	// li r5,3917
	ctx.r5.s64 = 3917;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r6,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r6.u32);
	// addi r3,r7,-16116
	ctx.r3.s64 = ctx.r7.s64 + -16116;
	// stw r5,276(r9)
	PPC_STORE_U32(ctx.r9.u32 + 276, ctx.r5.u32);
	// li r11,3921
	ctx.r11.s64 = 3921;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r3.u32);
	// addi r8,r4,-16312
	ctx.r8.s64 = ctx.r4.s64 + -16312;
	// stw r11,280(r9)
	PPC_STORE_U32(ctx.r9.u32 + 280, ctx.r11.u32);
	// li r7,3919
	ctx.r7.s64 = 3919;
	// addi r6,r10,-16644
	ctx.r6.s64 = ctx.r10.s64 + -16644;
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// li r5,3916
	ctx.r5.s64 = 3916;
	// stw r7,284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 284, ctx.r7.u32);
	// li r4,24034
	ctx.r4.s64 = 24034;
	// stw r6,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r6.u32);
	// stw r5,288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 288, ctx.r5.u32);
	// stw r4,400(r9)
	PPC_STORE_U32(ctx.r9.u32 + 400, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848B30"))) PPC_WEAK_FUNC(sub_82848B30);
PPC_FUNC_IMPL(__imp__sub_82848B30) {
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
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,13188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// bl 0x82808690
	ctx.lr = 0x82848B4C;
	sub_82808690(ctx, base);
	// bl 0x82848a60
	ctx.lr = 0x82848B50;
	sub_82848A60(ctx, base);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848B64"))) PPC_WEAK_FUNC(sub_82848B64);
PPC_FUNC_IMPL(__imp__sub_82848B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848B68"))) PPC_WEAK_FUNC(sub_82848B68);
PPC_FUNC_IMPL(__imp__sub_82848B68) {
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

__attribute__((alias("__imp__sub_82848B80"))) PPC_WEAK_FUNC(sub_82848B80);
PPC_FUNC_IMPL(__imp__sub_82848B80) {
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

__attribute__((alias("__imp__sub_82848B98"))) PPC_WEAK_FUNC(sub_82848B98);
PPC_FUNC_IMPL(__imp__sub_82848B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848BB0"))) PPC_WEAK_FUNC(sub_82848BB0);
PPC_FUNC_IMPL(__imp__sub_82848BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,404(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 404);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848BC8"))) PPC_WEAK_FUNC(sub_82848BC8);
PPC_FUNC_IMPL(__imp__sub_82848BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,148(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848BE0"))) PPC_WEAK_FUNC(sub_82848BE0);
PPC_FUNC_IMPL(__imp__sub_82848BE0) {
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
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,13188(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13188);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82848c44
	if (ctx.cr6.eq) goto loc_82848C44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82848c3c
	if (ctx.cr6.eq) goto loc_82848C3C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82848c34
	if (ctx.cr6.eq) goto loc_82848C34;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82848c48
	goto loc_82848C48;
loc_82848C34:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82848c48
	goto loc_82848C48;
loc_82848C3C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82848c48
	goto loc_82848C48;
loc_82848C44:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82848C48:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82848ca0
	if (ctx.cr6.eq) goto loc_82848CA0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82848c78
	if (ctx.cr6.eq) goto loc_82848C78;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82848c70
	if (ctx.cr6.eq) goto loc_82848C70;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82848c7c
	if (!ctx.cr6.eq) goto loc_82848C7C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82848c7c
	goto loc_82848C7C;
loc_82848C70:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82848c7c
	goto loc_82848C7C;
loc_82848C78:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82848C7C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82848c94
	if (ctx.cr6.eq) goto loc_82848C94;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82848c98
	if (ctx.cr6.eq) goto loc_82848C98;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82848c98
	goto loc_82848C98;
loc_82848C94:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82848C98:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82848518
	ctx.lr = 0x82848CA0;
	sub_82848518(ctx, base);
loc_82848CA0:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848CB4"))) PPC_WEAK_FUNC(sub_82848CB4);
PPC_FUNC_IMPL(__imp__sub_82848CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848CB8"))) PPC_WEAK_FUNC(sub_82848CB8);
PPC_FUNC_IMPL(__imp__sub_82848CB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848CC0"))) PPC_WEAK_FUNC(sub_82848CC0);
PPC_FUNC_IMPL(__imp__sub_82848CC0) {
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
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,13188(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13188);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82848d24
	if (ctx.cr6.eq) goto loc_82848D24;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82848d1c
	if (ctx.cr6.eq) goto loc_82848D1C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82848d14
	if (ctx.cr6.eq) goto loc_82848D14;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82848d28
	goto loc_82848D28;
loc_82848D14:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82848d28
	goto loc_82848D28;
loc_82848D1C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82848d28
	goto loc_82848D28;
loc_82848D24:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82848D28:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82848d80
	if (ctx.cr6.eq) goto loc_82848D80;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82848d58
	if (ctx.cr6.eq) goto loc_82848D58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82848d50
	if (ctx.cr6.eq) goto loc_82848D50;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82848d5c
	if (!ctx.cr6.eq) goto loc_82848D5C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82848d5c
	goto loc_82848D5C;
loc_82848D50:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82848d5c
	goto loc_82848D5C;
loc_82848D58:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82848D5C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82848d74
	if (ctx.cr6.eq) goto loc_82848D74;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82848d78
	if (ctx.cr6.eq) goto loc_82848D78;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82848d78
	goto loc_82848D78;
loc_82848D74:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82848D78:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82848518
	ctx.lr = 0x82848D80;
	sub_82848518(ctx, base);
loc_82848D80:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848D94"))) PPC_WEAK_FUNC(sub_82848D94);
PPC_FUNC_IMPL(__imp__sub_82848D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848D98"))) PPC_WEAK_FUNC(sub_82848D98);
PPC_FUNC_IMPL(__imp__sub_82848D98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2272);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

