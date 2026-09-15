#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828255F8"))) PPC_WEAK_FUNC(sub_828255F8);
PPC_FUNC_IMPL(__imp__sub_828255F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 332);
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
	// lfs f0,336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 336);
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

__attribute__((alias("__imp__sub_82825638"))) PPC_WEAK_FUNC(sub_82825638);
PPC_FUNC_IMPL(__imp__sub_82825638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,372(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 372);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825650"))) PPC_WEAK_FUNC(sub_82825650);
PPC_FUNC_IMPL(__imp__sub_82825650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,296(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825668"))) PPC_WEAK_FUNC(sub_82825668);
PPC_FUNC_IMPL(__imp__sub_82825668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,352(r9)
	PPC_STORE_U32(ctx.r9.u32 + 352, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282567C"))) PPC_WEAK_FUNC(sub_8282567C);
PPC_FUNC_IMPL(__imp__sub_8282567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82825680"))) PPC_WEAK_FUNC(sub_82825680);
PPC_FUNC_IMPL(__imp__sub_82825680) {
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

__attribute__((alias("__imp__sub_82825698"))) PPC_WEAK_FUNC(sub_82825698);
PPC_FUNC_IMPL(__imp__sub_82825698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,200(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828256B0"))) PPC_WEAK_FUNC(sub_828256B0);
PPC_FUNC_IMPL(__imp__sub_828256B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828256D8"))) PPC_WEAK_FUNC(sub_828256D8);
PPC_FUNC_IMPL(__imp__sub_828256D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 384, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828256F0"))) PPC_WEAK_FUNC(sub_828256F0);
PPC_FUNC_IMPL(__imp__sub_828256F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,240(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 240, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825704"))) PPC_WEAK_FUNC(sub_82825704);
PPC_FUNC_IMPL(__imp__sub_82825704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82825708"))) PPC_WEAK_FUNC(sub_82825708);
PPC_FUNC_IMPL(__imp__sub_82825708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282572C"))) PPC_WEAK_FUNC(sub_8282572C);
PPC_FUNC_IMPL(__imp__sub_8282572C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82825730"))) PPC_WEAK_FUNC(sub_82825730);
PPC_FUNC_IMPL(__imp__sub_82825730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,384(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 384);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825748"))) PPC_WEAK_FUNC(sub_82825748);
PPC_FUNC_IMPL(__imp__sub_82825748) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825760"))) PPC_WEAK_FUNC(sub_82825760);
PPC_FUNC_IMPL(__imp__sub_82825760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,348(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825778"))) PPC_WEAK_FUNC(sub_82825778);
PPC_FUNC_IMPL(__imp__sub_82825778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,376(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825790"))) PPC_WEAK_FUNC(sub_82825790);
PPC_FUNC_IMPL(__imp__sub_82825790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828257A8"))) PPC_WEAK_FUNC(sub_828257A8);
PPC_FUNC_IMPL(__imp__sub_828257A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,368(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x828257d8
	if (!ctx.cr6.eq) goto loc_828257D8;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_828257D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828257E4"))) PPC_WEAK_FUNC(sub_828257E4);
PPC_FUNC_IMPL(__imp__sub_828257E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828257E8"))) PPC_WEAK_FUNC(sub_828257E8);
PPC_FUNC_IMPL(__imp__sub_828257E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,352(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 352);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825800"))) PPC_WEAK_FUNC(sub_82825800);
PPC_FUNC_IMPL(__imp__sub_82825800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,292(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825818"))) PPC_WEAK_FUNC(sub_82825818);
PPC_FUNC_IMPL(__imp__sub_82825818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-29848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29848);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f13,240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282583C"))) PPC_WEAK_FUNC(sub_8282583C);
PPC_FUNC_IMPL(__imp__sub_8282583C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82825840"))) PPC_WEAK_FUNC(sub_82825840);
PPC_FUNC_IMPL(__imp__sub_82825840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,372(r9)
	PPC_STORE_U32(ctx.r9.u32 + 372, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825854"))) PPC_WEAK_FUNC(sub_82825854);
PPC_FUNC_IMPL(__imp__sub_82825854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82825858"))) PPC_WEAK_FUNC(sub_82825858);
PPC_FUNC_IMPL(__imp__sub_82825858) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,392(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 392);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825870"))) PPC_WEAK_FUNC(sub_82825870);
PPC_FUNC_IMPL(__imp__sub_82825870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825888"))) PPC_WEAK_FUNC(sub_82825888);
PPC_FUNC_IMPL(__imp__sub_82825888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,608(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 608);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828258A0"))) PPC_WEAK_FUNC(sub_828258A0);
PPC_FUNC_IMPL(__imp__sub_828258A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x828258A8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r29,-29532(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r20,13188(r26)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r30.u32);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82825918
	if (ctx.cr6.eq) goto loc_82825918;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82825910
	if (ctx.cr6.eq) goto loc_82825910;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82825908
	if (ctx.cr6.eq) goto loc_82825908;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8282591c
	goto loc_8282591C;
loc_82825908:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8282591c
	goto loc_8282591C;
loc_82825910:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8282591c
	goto loc_8282591C;
loc_82825918:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8282591C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// bl 0x8212c000
	ctx.lr = 0x82825930;
	sub_8212C000(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_82825938:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8212c000
	ctx.lr = 0x82825940;
	sub_8212C000(ctx, base);
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82825aa0
	if (!ctx.cr6.eq) goto loc_82825AA0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8282597c
	if (ctx.cr6.eq) goto loc_8282597C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82825974
	if (ctx.cr6.eq) goto loc_82825974;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8282596c
	if (ctx.cr6.eq) goto loc_8282596C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82825980
	goto loc_82825980;
loc_8282596C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82825980
	goto loc_82825980;
loc_82825974:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82825980
	goto loc_82825980;
loc_8282597C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82825980:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82825a90
	if (ctx.cr6.eq) goto loc_82825A90;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828259b8
	if (ctx.cr6.eq) goto loc_828259B8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828259b0
	if (ctx.cr6.eq) goto loc_828259B0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828259a8
	if (ctx.cr6.eq) goto loc_828259A8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x828259bc
	goto loc_828259BC;
loc_828259A8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828259bc
	goto loc_828259BC;
loc_828259B0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828259bc
	goto loc_828259BC;
loc_828259B8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828259BC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82825a90
	if (ctx.cr6.eq) goto loc_82825A90;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82825a04
	if (ctx.cr6.eq) goto loc_82825A04;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828259fc
	if (ctx.cr6.eq) goto loc_828259FC;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828259f4
	if (ctx.cr6.eq) goto loc_828259F4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82825a08
	goto loc_82825A08;
loc_828259F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82825a08
	goto loc_82825A08;
loc_828259FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82825a08
	goto loc_82825A08;
loc_82825A04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82825A08:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82824918
	ctx.lr = 0x82825A10;
	sub_82824918(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82825a90
	if (ctx.cr6.eq) goto loc_82825A90;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82825ab0
	if (!ctx.cr6.eq) goto loc_82825AB0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82825a4c
	if (ctx.cr6.eq) goto loc_82825A4C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82825a44
	if (ctx.cr6.eq) goto loc_82825A44;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82825a50
	if (!ctx.cr6.eq) goto loc_82825A50;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x82825a50
	goto loc_82825A50;
loc_82825A44:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x82825a50
	goto loc_82825A50;
loc_82825A4C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82825A50:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82825a80
	if (ctx.cr6.eq) goto loc_82825A80;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82825a78
	if (ctx.cr6.eq) goto loc_82825A78;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82825a70
	if (ctx.cr6.eq) goto loc_82825A70;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82825a84
	goto loc_82825A84;
loc_82825A70:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82825a84
	goto loc_82825A84;
loc_82825A78:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82825a84
	goto loc_82825A84;
loc_82825A80:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82825A84:
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82825a90
	if (!ctx.cr6.eq) goto loc_82825A90;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82825A90:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r25,150
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 150, ctx.xer);
	// blt cr6,0x82825938
	if (ctx.cr6.lt) goto loc_82825938;
loc_82825AA0:
	// stw r20,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r20.u32);
	// stw r23,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82825AB0:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82825a90
	if (!ctx.cr6.eq) goto loc_82825A90;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// b 0x82825a90
	goto loc_82825A90;
}

__attribute__((alias("__imp__sub_82825AC0"))) PPC_WEAK_FUNC(sub_82825AC0);
PPC_FUNC_IMPL(__imp__sub_82825AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825AD8"))) PPC_WEAK_FUNC(sub_82825AD8);
PPC_FUNC_IMPL(__imp__sub_82825AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_82825AFC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82825b28
	if (ctx.cr6.eq) goto loc_82825B28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82825b20
	if (ctx.cr6.eq) goto loc_82825B20;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82825b2c
	if (!ctx.cr6.eq) goto loc_82825B2C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82825b2c
	goto loc_82825B2C;
loc_82825B20:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82825b2c
	goto loc_82825B2C;
loc_82825B28:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82825B2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82825b50
	if (ctx.cr6.eq) goto loc_82825B50;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,150
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 150, ctx.xer);
	// blt cr6,0x82825afc
	if (ctx.cr6.lt) goto loc_82825AFC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82825B50:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825B58"))) PPC_WEAK_FUNC(sub_82825B58);
PPC_FUNC_IMPL(__imp__sub_82825B58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82825B7C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82825bb0
	if (ctx.cr6.eq) goto loc_82825BB0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82825ba8
	if (ctx.cr6.eq) goto loc_82825BA8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82825ba0
	if (ctx.cr6.eq) goto loc_82825BA0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82825bb4
	goto loc_82825BB4;
loc_82825BA0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82825bb4
	goto loc_82825BB4;
loc_82825BA8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82825bb4
	goto loc_82825BB4;
loc_82825BB0:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82825BB4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82825be4
	if (ctx.cr6.eq) goto loc_82825BE4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82825bdc
	if (ctx.cr6.eq) goto loc_82825BDC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82825bd4
	if (ctx.cr6.eq) goto loc_82825BD4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82825be8
	goto loc_82825BE8;
loc_82825BD4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82825be8
	goto loc_82825BE8;
loc_82825BDC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82825be8
	goto loc_82825BE8;
loc_82825BE4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82825BE8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82825c0c
	if (ctx.cr6.eq) goto loc_82825C0C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,150
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 150, ctx.xer);
	// blt cr6,0x82825b7c
	if (ctx.cr6.lt) goto loc_82825B7C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82825C0C:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825C14"))) PPC_WEAK_FUNC(sub_82825C14);
PPC_FUNC_IMPL(__imp__sub_82825C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82825C18"))) PPC_WEAK_FUNC(sub_82825C18);
PPC_FUNC_IMPL(__imp__sub_82825C18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825C20"))) PPC_WEAK_FUNC(sub_82825C20);
PPC_FUNC_IMPL(__imp__sub_82825C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82825c4c
	if (!ctx.cr6.gt) goto loc_82825C4C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// blr 
	return;
loc_82825C4C:
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825C60"))) PPC_WEAK_FUNC(sub_82825C60);
PPC_FUNC_IMPL(__imp__sub_82825C60) {
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

__attribute__((alias("__imp__sub_82825C78"))) PPC_WEAK_FUNC(sub_82825C78);
PPC_FUNC_IMPL(__imp__sub_82825C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825C90"))) PPC_WEAK_FUNC(sub_82825C90);
PPC_FUNC_IMPL(__imp__sub_82825C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// addi r5,r9,-29532
	ctx.r5.s64 = ctx.r9.s64 + -29532;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,13180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// lwz r8,-29532(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r6,13188(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82825cf4
	if (ctx.cr6.eq) goto loc_82825CF4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82825cec
	if (ctx.cr6.eq) goto loc_82825CEC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82825ce4
	if (ctx.cr6.eq) goto loc_82825CE4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82825cf8
	goto loc_82825CF8;
loc_82825CE4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82825cf8
	goto loc_82825CF8;
loc_82825CEC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82825cf8
	goto loc_82825CF8;
loc_82825CF4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82825CF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82825de8
	if (ctx.cr6.eq) goto loc_82825DE8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82825d30
	if (ctx.cr6.eq) goto loc_82825D30;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82825d28
	if (ctx.cr6.eq) goto loc_82825D28;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82825d20
	if (ctx.cr6.eq) goto loc_82825D20;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x82825d34
	goto loc_82825D34;
loc_82825D20:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// b 0x82825d34
	goto loc_82825D34;
loc_82825D28:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x82825d34
	goto loc_82825D34;
loc_82825D30:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82825D34:
	// lwz r11,120(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82825d60
	if (ctx.cr6.eq) goto loc_82825D60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82825d58
	if (ctx.cr6.eq) goto loc_82825D58;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82825d64
	if (!ctx.cr6.eq) goto loc_82825D64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82825d64
	goto loc_82825D64;
loc_82825D58:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82825d64
	goto loc_82825D64;
loc_82825D60:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82825D64:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82825de0
	if (ctx.cr6.eq) goto loc_82825DE0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82825d94
	if (ctx.cr6.eq) goto loc_82825D94;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82825d8c
	if (ctx.cr6.eq) goto loc_82825D8C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82825d98
	if (!ctx.cr6.eq) goto loc_82825D98;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82825d98
	goto loc_82825D98;
loc_82825D8C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82825d98
	goto loc_82825D98;
loc_82825D94:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82825D98:
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82825dc4
	if (ctx.cr6.eq) goto loc_82825DC4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82825dbc
	if (ctx.cr6.eq) goto loc_82825DBC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82825dc8
	if (!ctx.cr6.eq) goto loc_82825DC8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82825dc8
	goto loc_82825DC8;
loc_82825DBC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82825dc8
	goto loc_82825DC8;
loc_82825DC4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82825DC8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r11.u32);
	// blr 
	return;
loc_82825DE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r5)
	PPC_STORE_U32(ctx.r5.u32 + 120, ctx.r11.u32);
loc_82825DE8:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825DF0"))) PPC_WEAK_FUNC(sub_82825DF0);
PPC_FUNC_IMPL(__imp__sub_82825DF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825E08"))) PPC_WEAK_FUNC(sub_82825E08);
PPC_FUNC_IMPL(__imp__sub_82825E08) {
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

__attribute__((alias("__imp__sub_82825E20"))) PPC_WEAK_FUNC(sub_82825E20);
PPC_FUNC_IMPL(__imp__sub_82825E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825E38"))) PPC_WEAK_FUNC(sub_82825E38);
PPC_FUNC_IMPL(__imp__sub_82825E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82825e98
	if (ctx.cr6.eq) goto loc_82825E98;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82825e78
	if (ctx.cr6.eq) goto loc_82825E78;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82825ea0
	if (!ctx.cr6.eq) goto loc_82825EA0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82825E78:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82825E98:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82825EA0:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825EB4"))) PPC_WEAK_FUNC(sub_82825EB4);
PPC_FUNC_IMPL(__imp__sub_82825EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82825EB8"))) PPC_WEAK_FUNC(sub_82825EB8);
PPC_FUNC_IMPL(__imp__sub_82825EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825ED0"))) PPC_WEAK_FUNC(sub_82825ED0);
PPC_FUNC_IMPL(__imp__sub_82825ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82825ef4
	if (!ctx.cr6.eq) goto loc_82825EF4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82825EF4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825F00"))) PPC_WEAK_FUNC(sub_82825F00);
PPC_FUNC_IMPL(__imp__sub_82825F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82825F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bge cr6,0x82825f2c
	if (!ctx.cr6.lt) goto loc_82825F2C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82825F2C:
	// addi r10,r5,9
	ctx.r10.s64 = ctx.r5.s64 + 9;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r8,1436(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// beq cr6,0x82825f88
	if (ctx.cr6.eq) goto loc_82825F88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82825f80
	if (ctx.cr6.eq) goto loc_82825F80;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82825f8c
	if (!ctx.cr6.eq) goto loc_82825F8C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82825f8c
	goto loc_82825F8C;
loc_82825F80:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82825f8c
	goto loc_82825F8C;
loc_82825F88:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82825F8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82825fdc
	if (ctx.cr6.eq) goto loc_82825FDC;
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82825fd0
	if (ctx.cr6.eq) goto loc_82825FD0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82825fc8
	if (ctx.cr6.eq) goto loc_82825FC8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82825fc0
	if (ctx.cr6.eq) goto loc_82825FC0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82825fd4
	goto loc_82825FD4;
loc_82825FC0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82825fd4
	goto loc_82825FD4;
loc_82825FC8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82825fd4
	goto loc_82825FD4;
loc_82825FD0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82825FD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82825ff0
	if (!ctx.cr6.eq) goto loc_82825FF0;
loc_82825FDC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82825FF0:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82826018
	if (ctx.cr6.eq) goto loc_82826018;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282601c
	if (ctx.cr6.eq) goto loc_8282601C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82826010
	if (ctx.cr6.eq) goto loc_82826010;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8282601c
	goto loc_8282601C;
loc_82826010:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8282601c
	goto loc_8282601C;
loc_82826018:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8282601C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x82826024;
	sub_82804410(ctx, base);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826050
	if (ctx.cr6.eq) goto loc_82826050;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826048
	if (ctx.cr6.eq) goto loc_82826048;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826054
	if (!ctx.cr6.eq) goto loc_82826054;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82826054
	goto loc_82826054;
loc_82826048:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82826054
	goto loc_82826054;
loc_82826050:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82826054:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82826060;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,0(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828260A0"))) PPC_WEAK_FUNC(sub_828260A0);
PPC_FUNC_IMPL(__imp__sub_828260A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828260BC"))) PPC_WEAK_FUNC(sub_828260BC);
PPC_FUNC_IMPL(__imp__sub_828260BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828260C0"))) PPC_WEAK_FUNC(sub_828260C0);
PPC_FUNC_IMPL(__imp__sub_828260C0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,350
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 350, ctx.xer);
	// bge cr6,0x828260f0
	if (!ctx.cr6.lt) goto loc_828260F0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x828260f0
	if (ctx.cr6.lt) goto loc_828260F0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,9
	ctx.r10.s64 = ctx.r5.s64 + 9;
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
loc_828260F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828260FC"))) PPC_WEAK_FUNC(sub_828260FC);
PPC_FUNC_IMPL(__imp__sub_828260FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82826100"))) PPC_WEAK_FUNC(sub_82826100);
PPC_FUNC_IMPL(__imp__sub_82826100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282611C"))) PPC_WEAK_FUNC(sub_8282611C);
PPC_FUNC_IMPL(__imp__sub_8282611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82826120"))) PPC_WEAK_FUNC(sub_82826120);
PPC_FUNC_IMPL(__imp__sub_82826120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1436(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1436);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826138"))) PPC_WEAK_FUNC(sub_82826138);
PPC_FUNC_IMPL(__imp__sub_82826138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826150"))) PPC_WEAK_FUNC(sub_82826150);
PPC_FUNC_IMPL(__imp__sub_82826150) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828261bc
	if (ctx.cr6.eq) goto loc_828261BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828261b4
	if (ctx.cr6.eq) goto loc_828261B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828261ac
	if (ctx.cr6.eq) goto loc_828261AC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828261c0
	goto loc_828261C0;
loc_828261AC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x828261c0
	goto loc_828261C0;
loc_828261B4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828261c0
	goto loc_828261C0;
loc_828261BC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828261C0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82826248
	if (ctx.cr6.eq) goto loc_82826248;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828261f0
	if (ctx.cr6.eq) goto loc_828261F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828261e8
	if (ctx.cr6.eq) goto loc_828261E8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828261f4
	if (!ctx.cr6.eq) goto loc_828261F4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828261f4
	goto loc_828261F4;
loc_828261E8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828261f4
	goto loc_828261F4;
loc_828261F0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828261F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82826200;
	sub_82804410(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804410
	ctx.lr = 0x8282620C;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x82826254
	goto loc_82826254;
loc_82826248:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82826254:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8282626C"))) PPC_WEAK_FUNC(sub_8282626C);
PPC_FUNC_IMPL(__imp__sub_8282626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82826270"))) PPC_WEAK_FUNC(sub_82826270);
PPC_FUNC_IMPL(__imp__sub_82826270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82826290
	if (!ctx.cr6.gt) goto loc_82826290;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82826290:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826298"))) PPC_WEAK_FUNC(sub_82826298);
PPC_FUNC_IMPL(__imp__sub_82826298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x828262A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// addi r4,r9,-29532
	ctx.r4.s64 = ctx.r9.s64 + -29532;
	// lwz r26,13180(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r25,13184(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r22,-29532(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r8,48(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r21,4(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// blt cr6,0x828263ac
	if (ctx.cr6.lt) goto loc_828263AC;
	// cmpwi cr6,r5,350
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 350, ctx.xer);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// bge cr6,0x82826348
	if (!ctx.cr6.lt) goto loc_82826348;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r5,9
	ctx.r9.s64 = ctx.r5.s64 + 9;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r10,r4,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82826364
	if (ctx.cr6.eq) goto loc_82826364;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282635c
	if (ctx.cr6.eq) goto loc_8282635C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82826354
	if (ctx.cr6.eq) goto loc_82826354;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82826368
	goto loc_82826368;
loc_82826348:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82826368
	goto loc_82826368;
loc_82826354:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82826368
	goto loc_82826368;
loc_8282635C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82826368
	goto loc_82826368;
loc_82826364:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82826368:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828263ac
	if (ctx.cr6.eq) goto loc_828263AC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82826398
	if (ctx.cr6.eq) goto loc_82826398;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82826390
	if (ctx.cr6.eq) goto loc_82826390;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282639c
	if (!ctx.cr6.eq) goto loc_8282639C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8282639c
	goto loc_8282639C;
loc_82826390:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// b 0x8282639c
	goto loc_8282639C;
loc_82826398:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8282639C:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r20,108(r9)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
loc_828263AC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x828263b8
	if (ctx.cr6.eq) goto loc_828263B8;
	// li r20,3
	ctx.r20.s64 = 3;
loc_828263B8:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r10,1436(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1436);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82826668
	if (!ctx.cr6.lt) goto loc_82826668;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828263e4
	if (!ctx.cr6.eq) goto loc_828263E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82826404
	goto loc_82826404;
loc_828263E4:
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r9,r5,r11
	ctx.r9.s32 = ctx.r5.s32 / ctx.r11.s32;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// twllei r11,0
	// andc r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// twlgei r11,-1
loc_82826404:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
loc_82826414:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82826438
	if (ctx.cr6.lt) goto loc_82826438;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x82826414
	if (ctx.cr6.lt) goto loc_82826414;
loc_82826438:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82826474
	if (ctx.cr6.eq) goto loc_82826474;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82826484
	if (!ctx.cr6.eq) goto loc_82826484;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8282645c
	if (!ctx.cr6.lt) goto loc_8282645C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x82826484
	goto loc_82826484;
loc_8282645C:
	// li r11,-1000
	ctx.r11.s64 = -1000;
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// stw r25,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r25.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82826474:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8282645c
	if (ctx.cr6.lt) goto loc_8282645C;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_82826484:
	// cmpwi cr6,r5,350
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 350, ctx.xer);
	// bge cr6,0x828264d4
	if (!ctx.cr6.lt) goto loc_828264D4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x828264d4
	if (ctx.cr6.lt) goto loc_828264D4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,9
	ctx.r10.s64 = ctx.r5.s64 + 9;
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828264f8
	if (ctx.cr6.eq) goto loc_828264F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828264f0
	if (ctx.cr6.eq) goto loc_828264F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828264e8
	if (ctx.cr6.eq) goto loc_828264E8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828264fc
	goto loc_828264FC;
loc_828264D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828264fc
	goto loc_828264FC;
loc_828264E8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828264fc
	goto loc_828264FC;
loc_828264F0:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// b 0x828264fc
	goto loc_828264FC;
loc_828264F8:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_828264FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82826628
	if (ctx.cr6.eq) goto loc_82826628;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826534
	if (ctx.cr6.eq) goto loc_82826534;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282652c
	if (ctx.cr6.eq) goto loc_8282652C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82826524
	if (ctx.cr6.eq) goto loc_82826524;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82826538
	goto loc_82826538;
loc_82826524:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82826538
	goto loc_82826538;
loc_8282652C:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// b 0x82826538
	goto loc_82826538;
loc_82826534:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82826538:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r10,108(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// beq cr6,0x82826570
	if (ctx.cr6.eq) goto loc_82826570;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826568
	if (ctx.cr6.eq) goto loc_82826568;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826574
	if (!ctx.cr6.eq) goto loc_82826574;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82826574
	goto loc_82826574;
loc_82826568:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82826574
	goto loc_82826574;
loc_82826570:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82826574:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82826628
	if (ctx.cr6.eq) goto loc_82826628;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x8282659c
	if (!ctx.cr6.eq) goto loc_8282659C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x82826608
	goto loc_82826608;
loc_8282659C:
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 3, ctx.xer);
	// beq cr6,0x828265fc
	if (ctx.cr6.eq) goto loc_828265FC;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bne cr6,0x828265b4
	if (!ctx.cr6.eq) goto loc_828265B4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// b 0x82826608
	goto loc_82826608;
loc_828265B4:
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 4, ctx.xer);
	// bne cr6,0x828265c4
	if (!ctx.cr6.eq) goto loc_828265C4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// b 0x82826608
	goto loc_82826608;
loc_828265C4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x8282660c
	if (!ctx.cr6.eq) goto loc_8282660C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828265dc
	if (ctx.cr6.eq) goto loc_828265DC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8282660c
	if (!ctx.cr6.eq) goto loc_8282660C;
loc_828265DC:
	// li r11,-1000
	ctx.r11.s64 = -1000;
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// stw r25,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_828265FC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828265dc
	if (ctx.cr6.eq) goto loc_828265DC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
loc_82826608:
	// beq cr6,0x828265dc
	if (ctx.cr6.eq) goto loc_828265DC;
loc_8282660C:
	// stw r5,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r5.u32);
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// stw r25,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82826628:
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// beq cr6,0x82826638
	if (ctx.cr6.eq) goto loc_82826638;
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 3, ctx.xer);
	// bne cr6,0x828265dc
	if (!ctx.cr6.eq) goto loc_828265DC;
loc_82826638:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82826298
	ctx.lr = 0x82826648;
	sub_82826298(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// stw r25,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r25.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
loc_82826668:
	// li r11,-2000
	ctx.r11.s64 = -2000;
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// stw r25,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r25.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82826680"))) PPC_WEAK_FUNC(sub_82826680);
PPC_FUNC_IMPL(__imp__sub_82826680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826698"))) PPC_WEAK_FUNC(sub_82826698);
PPC_FUNC_IMPL(__imp__sub_82826698) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828266A0"))) PPC_WEAK_FUNC(sub_828266A0);
PPC_FUNC_IMPL(__imp__sub_828266A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,3136(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3136);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828266B8"))) PPC_WEAK_FUNC(sub_828266B8);
PPC_FUNC_IMPL(__imp__sub_828266B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,3316(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x82826754
	if (ctx.cr6.eq) goto loc_82826754;
	// lwz r10,3124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82826754
	if (!ctx.cr6.eq) goto loc_82826754;
	// lwz r9,3688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3688);
	// lwz r8,3684(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3684);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r11,3692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3692);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82826704
	if (!ctx.cr6.eq) goto loc_82826704;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8282674c
	if (!ctx.cr6.lt) goto loc_8282674C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82826724
	goto loc_82826724;
loc_82826704:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8282671c
	if (!ctx.cr6.eq) goto loc_8282671C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8282674c
	if (!ctx.cr6.lt) goto loc_8282674C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82826724
	goto loc_82826724;
loc_8282671C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8282674c
	if (!ctx.cr6.eq) goto loc_8282674C;
loc_82826724:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x8282674c
	if (!ctx.cr6.lt) goto loc_8282674C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82826748
	if (!ctx.cr6.lt) goto loc_82826748;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8282674c
	if (ctx.cr6.lt) goto loc_8282674C;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82826748:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8282674C:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82826754:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826760"))) PPC_WEAK_FUNC(sub_82826760);
PPC_FUNC_IMPL(__imp__sub_82826760) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82826870
	if (ctx.cr6.lt) goto loc_82826870;
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// bgt cr6,0x82826870
	if (ctx.cr6.gt) goto loc_82826870;
	// addi r11,r5,18
	ctx.r11.s64 = ctx.r5.s64 + 18;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,-29532
	ctx.r6.s64 = ctx.r9.s64 + -29532;
	// lwz r5,-29532(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x828267cc
	if (ctx.cr6.eq) goto loc_828267CC;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x828267c4
	if (ctx.cr6.eq) goto loc_828267C4;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x828267bc
	if (ctx.cr6.eq) goto loc_828267BC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828267d0
	goto loc_828267D0;
loc_828267BC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828267d0
	goto loc_828267D0;
loc_828267C4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828267d0
	goto loc_828267D0;
loc_828267CC:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_828267D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82826870
	if (ctx.cr6.eq) goto loc_82826870;
	// lwz r9,3588(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3588);
	// lwz r6,60(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82826870
	if (ctx.cr6.gt) goto loc_82826870;
	// addi r11,r9,18
	ctx.r11.s64 = ctx.r9.s64 + 18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_828267F4:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82826824
	if (ctx.cr6.eq) goto loc_82826824;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x8282681c
	if (ctx.cr6.eq) goto loc_8282681C;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82826814
	if (ctx.cr6.eq) goto loc_82826814;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82826828
	goto loc_82826828;
loc_82826814:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82826828
	goto loc_82826828;
loc_8282681C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82826828
	goto loc_82826828;
loc_82826824:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82826828:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826854
	if (ctx.cr6.eq) goto loc_82826854;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282684c
	if (ctx.cr6.eq) goto loc_8282684C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826858
	if (!ctx.cr6.eq) goto loc_82826858;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82826858
	goto loc_82826858;
loc_8282684C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82826858
	goto loc_82826858;
loc_82826854:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82826858:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82826880
	if (ctx.cr6.eq) goto loc_82826880;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x828267f4
	if (!ctx.cr6.gt) goto loc_828267F4;
loc_82826870:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82826880:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826890"))) PPC_WEAK_FUNC(sub_82826890);
PPC_FUNC_IMPL(__imp__sub_82826890) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,3500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828268e8
	if (ctx.cr6.eq) goto loc_828268E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828268d8
	if (ctx.cr6.eq) goto loc_828268D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828268f0
	if (!ctx.cr6.eq) goto loc_828268F0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828268f0
	goto loc_828268F0;
loc_828268D8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828268f0
	goto loc_828268F0;
loc_828268E8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828268F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x828268FC;
	sub_82804410(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804410
	ctx.lr = 0x82826908;
	sub_82804410(ctx, base);
	// lfs f11,3564(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3564);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f0,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,420(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 420, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8282695C"))) PPC_WEAK_FUNC(sub_8282695C);
PPC_FUNC_IMPL(__imp__sub_8282695C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82826960"))) PPC_WEAK_FUNC(sub_82826960);
PPC_FUNC_IMPL(__imp__sub_82826960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82826968;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,4700(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4700);
	ctx.f0.f64 = double(temp.f32);
	// lwz r26,13192(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// lwz r25,13188(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r24,13180(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r23,13184(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// lfs f13,3724(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 3724);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x828269e0
	if (ctx.cr6.lt) goto loc_828269E0;
	// lwz r3,464(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 464);
	// bl 0x82bfc538
	ctx.lr = 0x828269C4;
	sub_82BFC538(ctx, base);
	// lfs f0,3724(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 3724);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,3676(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 3676, temp.u32);
	// b 0x828269ec
	goto loc_828269EC;
loc_828269E0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3676(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 3676, temp.u32);
loc_828269EC:
	// stw r26,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82826A04"))) PPC_WEAK_FUNC(sub_82826A04);
PPC_FUNC_IMPL(__imp__sub_82826A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82826A08"))) PPC_WEAK_FUNC(sub_82826A08);
PPC_FUNC_IMPL(__imp__sub_82826A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,3608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3608);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826a48
	if (ctx.cr6.eq) goto loc_82826A48;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826a38
	if (ctx.cr6.eq) goto loc_82826A38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826a50
	if (!ctx.cr6.eq) goto loc_82826A50;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82826a50
	goto loc_82826A50;
loc_82826A38:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82826a50
	goto loc_82826A50;
loc_82826A48:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82826A50:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f0,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82826a8c
	if (!ctx.cr6.gt) goto loc_82826A8C;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// li r11,368
	ctx.r11.s64 = 368;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
loc_82826A8C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// li r11,368
	ctx.r11.s64 = 368;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826AA0"))) PPC_WEAK_FUNC(sub_82826AA0);
PPC_FUNC_IMPL(__imp__sub_82826AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,3608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3608);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826ae0
	if (ctx.cr6.eq) goto loc_82826AE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826ad0
	if (ctx.cr6.eq) goto loc_82826AD0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826ae8
	if (!ctx.cr6.eq) goto loc_82826AE8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82826ae8
	goto loc_82826AE8;
loc_82826AD0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82826ae8
	goto loc_82826AE8;
loc_82826AE0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82826AE8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r7,3456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3456, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826B00"))) PPC_WEAK_FUNC(sub_82826B00);
PPC_FUNC_IMPL(__imp__sub_82826B00) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82826b30
	if (ctx.cr6.lt) goto loc_82826B30;
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// bge cr6,0x82826b30
	if (!ctx.cr6.lt) goto loc_82826B30;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,18
	ctx.r10.s64 = ctx.r5.s64 + 18;
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
loc_82826B30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826B3C"))) PPC_WEAK_FUNC(sub_82826B3C);
PPC_FUNC_IMPL(__imp__sub_82826B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82826B40"))) PPC_WEAK_FUNC(sub_82826B40);
PPC_FUNC_IMPL(__imp__sub_82826B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blt cr6,0x82826b98
	if (ctx.cr6.lt) goto loc_82826B98;
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// bge cr6,0x82826b98
	if (!ctx.cr6.lt) goto loc_82826B98;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r5,18
	ctx.r9.s64 = ctx.r5.s64 + 18;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82826bb4
	if (ctx.cr6.eq) goto loc_82826BB4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82826bac
	if (ctx.cr6.eq) goto loc_82826BAC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82826ba4
	if (ctx.cr6.eq) goto loc_82826BA4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82826bb8
	goto loc_82826BB8;
loc_82826B98:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82826bb8
	goto loc_82826BB8;
loc_82826BA4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82826bb8
	goto loc_82826BB8;
loc_82826BAC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82826bb8
	goto loc_82826BB8;
loc_82826BB4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82826BB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82826c1c
	if (ctx.cr6.eq) goto loc_82826C1C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82826bec
	if (ctx.cr6.eq) goto loc_82826BEC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82826be8
	if (ctx.cr6.eq) goto loc_82826BE8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82826be0
	if (ctx.cr6.eq) goto loc_82826BE0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82826bec
	goto loc_82826BEC;
loc_82826BE0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82826bec
	goto loc_82826BEC;
loc_82826BE8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82826BEC:
	// cmpwi cr6,r6,350
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 350, ctx.xer);
	// bge cr6,0x82826c1c
	if (!ctx.cr6.lt) goto loc_82826C1C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82826c1c
	if (ctx.cr6.lt) goto loc_82826C1C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r6,9
	ctx.r10.s64 = ctx.r6.s64 + 9;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82826C1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826C28"))) PPC_WEAK_FUNC(sub_82826C28);
PPC_FUNC_IMPL(__imp__sub_82826C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stw r11,380(r8)
	PPC_STORE_U32(ctx.r8.u32 + 380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82826C48"))) PPC_WEAK_FUNC(sub_82826C48);
PPC_FUNC_IMPL(__imp__sub_82826C48) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82826C50;
	__savegprlr_29(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r4,r11,-29532
	ctx.r4.s64 = ctx.r11.s64 + -29532;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r10,13180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13180);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,13188(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82826cb4
	if (ctx.cr6.eq) goto loc_82826CB4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82826cac
	if (ctx.cr6.eq) goto loc_82826CAC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82826ca4
	if (ctx.cr6.eq) goto loc_82826CA4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82826cb8
	goto loc_82826CB8;
loc_82826CA4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82826cb8
	goto loc_82826CB8;
loc_82826CAC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82826cb8
	goto loc_82826CB8;
loc_82826CB4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82826CB8:
	// lwz r11,376(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826ce4
	if (ctx.cr6.eq) goto loc_82826CE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826cdc
	if (ctx.cr6.eq) goto loc_82826CDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826ce8
	if (!ctx.cr6.eq) goto loc_82826CE8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82826ce8
	goto loc_82826CE8;
loc_82826CDC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82826ce8
	goto loc_82826CE8;
loc_82826CE4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82826CE8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82827274
	if (ctx.cr6.eq) goto loc_82827274;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82826d20
	if (ctx.cr6.eq) goto loc_82826D20;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82826d18
	if (ctx.cr6.eq) goto loc_82826D18;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82826d10
	if (ctx.cr6.eq) goto loc_82826D10;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82826d24
	goto loc_82826D24;
loc_82826D10:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82826d24
	goto loc_82826D24;
loc_82826D18:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82826d24
	goto loc_82826D24;
loc_82826D20:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82826D24:
	// lwz r11,3608(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3608);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826d50
	if (ctx.cr6.eq) goto loc_82826D50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826d48
	if (ctx.cr6.eq) goto loc_82826D48;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826d54
	if (!ctx.cr6.eq) goto loc_82826D54;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82826d54
	goto loc_82826D54;
loc_82826D48:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82826d54
	goto loc_82826D54;
loc_82826D50:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82826D54:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82827264
	if (ctx.cr6.eq) goto loc_82827264;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82826d8c
	if (ctx.cr6.eq) goto loc_82826D8C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82826d84
	if (ctx.cr6.eq) goto loc_82826D84;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82826d7c
	if (ctx.cr6.eq) goto loc_82826D7C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82826d90
	goto loc_82826D90;
loc_82826D7C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82826d90
	goto loc_82826D90;
loc_82826D84:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82826d90
	goto loc_82826D90;
loc_82826D8C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82826D90:
	// lwz r11,3372(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826dbc
	if (ctx.cr6.eq) goto loc_82826DBC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826db4
	if (ctx.cr6.eq) goto loc_82826DB4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826dc0
	if (!ctx.cr6.eq) goto loc_82826DC0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82826dc0
	goto loc_82826DC0;
loc_82826DB4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82826dc0
	goto loc_82826DC0;
loc_82826DBC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82826DC0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82827254
	if (ctx.cr6.eq) goto loc_82827254;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82826df8
	if (ctx.cr6.eq) goto loc_82826DF8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82826df0
	if (ctx.cr6.eq) goto loc_82826DF0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82826de8
	if (ctx.cr6.eq) goto loc_82826DE8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82826dfc
	goto loc_82826DFC;
loc_82826DE8:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82826dfc
	goto loc_82826DFC;
loc_82826DF0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82826dfc
	goto loc_82826DFC;
loc_82826DF8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82826DFC:
	// lwz r11,3288(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826e28
	if (ctx.cr6.eq) goto loc_82826E28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826e20
	if (ctx.cr6.eq) goto loc_82826E20;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826e2c
	if (!ctx.cr6.eq) goto loc_82826E2C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82826e2c
	goto loc_82826E2C;
loc_82826E20:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82826e2c
	goto loc_82826E2C;
loc_82826E28:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82826E2C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82827244
	if (ctx.cr6.eq) goto loc_82827244;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82826e64
	if (ctx.cr6.eq) goto loc_82826E64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82826e5c
	if (ctx.cr6.eq) goto loc_82826E5C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82826e54
	if (ctx.cr6.eq) goto loc_82826E54;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82826e68
	goto loc_82826E68;
loc_82826E54:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82826e68
	goto loc_82826E68;
loc_82826E5C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82826e68
	goto loc_82826E68;
loc_82826E64:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82826E68:
	// lwz r11,440(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 440);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826e94
	if (ctx.cr6.eq) goto loc_82826E94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826e8c
	if (ctx.cr6.eq) goto loc_82826E8C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826e98
	if (!ctx.cr6.eq) goto loc_82826E98;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82826e98
	goto loc_82826E98;
loc_82826E8C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82826e98
	goto loc_82826E98;
loc_82826E94:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82826E98:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82827234
	if (ctx.cr6.eq) goto loc_82827234;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82826ed0
	if (ctx.cr6.eq) goto loc_82826ED0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82826ec8
	if (ctx.cr6.eq) goto loc_82826EC8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82826ec0
	if (ctx.cr6.eq) goto loc_82826EC0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82826ed4
	goto loc_82826ED4;
loc_82826EC0:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82826ed4
	goto loc_82826ED4;
loc_82826EC8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82826ed4
	goto loc_82826ED4;
loc_82826ED0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82826ED4:
	// lwz r11,3492(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3492);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826f00
	if (ctx.cr6.eq) goto loc_82826F00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826ef8
	if (ctx.cr6.eq) goto loc_82826EF8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826f04
	if (!ctx.cr6.eq) goto loc_82826F04;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82826f04
	goto loc_82826F04;
loc_82826EF8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82826f04
	goto loc_82826F04;
loc_82826F00:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82826F04:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82827224
	if (ctx.cr6.eq) goto loc_82827224;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82826f3c
	if (ctx.cr6.eq) goto loc_82826F3C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82826f34
	if (ctx.cr6.eq) goto loc_82826F34;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82826f2c
	if (ctx.cr6.eq) goto loc_82826F2C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82826f40
	goto loc_82826F40;
loc_82826F2C:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82826f40
	goto loc_82826F40;
loc_82826F34:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82826f40
	goto loc_82826F40;
loc_82826F3C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82826F40:
	// lwz r11,3584(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3584);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826f6c
	if (ctx.cr6.eq) goto loc_82826F6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826f64
	if (ctx.cr6.eq) goto loc_82826F64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82826f70
	if (!ctx.cr6.eq) goto loc_82826F70;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82826f70
	goto loc_82826F70;
loc_82826F64:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82826f70
	goto loc_82826F70;
loc_82826F6C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82826F70:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82827214
	if (ctx.cr6.eq) goto loc_82827214;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r6,3464
	ctx.r9.s64 = ctx.r6.s64 + 3464;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82826F88:
	// lwz r11,184(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82826fbc
	if (ctx.cr6.eq) goto loc_82826FBC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82826fb4
	if (ctx.cr6.eq) goto loc_82826FB4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82826fac
	if (ctx.cr6.eq) goto loc_82826FAC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82826fc0
	goto loc_82826FC0;
loc_82826FAC:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82826fc0
	goto loc_82826FC0;
loc_82826FB4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82826fc0
	goto loc_82826FC0;
loc_82826FBC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82826FC0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82826ff0
	if (ctx.cr6.eq) goto loc_82826FF0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82826fe8
	if (ctx.cr6.eq) goto loc_82826FE8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82826fe0
	if (ctx.cr6.eq) goto loc_82826FE0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82826ff4
	goto loc_82826FF4;
loc_82826FE0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82826ff4
	goto loc_82826FF4;
loc_82826FE8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82826ff4
	goto loc_82826FF4;
loc_82826FF0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82826FF4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828270c0
	if (ctx.cr6.eq) goto loc_828270C0;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82827030
	if (ctx.cr6.eq) goto loc_82827030;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82827028
	if (ctx.cr6.eq) goto loc_82827028;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82827020
	if (ctx.cr6.eq) goto loc_82827020;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82827034
	goto loc_82827034;
loc_82827020:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82827034
	goto loc_82827034;
loc_82827028:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82827034
	goto loc_82827034;
loc_82827030:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82827034:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82827064
	if (ctx.cr6.eq) goto loc_82827064;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282705c
	if (ctx.cr6.eq) goto loc_8282705C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82827054
	if (ctx.cr6.eq) goto loc_82827054;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82827068
	goto loc_82827068;
loc_82827054:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82827068
	goto loc_82827068;
loc_8282705C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82827068
	goto loc_82827068;
loc_82827064:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82827068:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828270ac
	if (ctx.cr6.eq) goto loc_828270AC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// blt cr6,0x82826f88
	if (ctx.cr6.lt) goto loc_82826F88;
	// addi r9,r6,72
	ctx.r9.s64 = ctx.r6.s64 + 72;
	// li r8,64
	ctx.r8.s64 = 64;
loc_82827088:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828270e4
	if (ctx.cr6.eq) goto loc_828270E4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828270dc
	if (ctx.cr6.eq) goto loc_828270DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828270d4
	if (ctx.cr6.eq) goto loc_828270D4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828270e8
	goto loc_828270E8;
loc_828270AC:
	// addi r11,r8,866
	ctx.r11.s64 = ctx.r8.s64 + 866;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_828270C0:
	// addi r11,r8,912
	ctx.r11.s64 = ctx.r8.s64 + 912;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_828270D4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x828270e8
	goto loc_828270E8;
loc_828270DC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x828270e8
	goto loc_828270E8;
loc_828270E4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_828270E8:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82827118
	if (ctx.cr6.eq) goto loc_82827118;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82827110
	if (ctx.cr6.eq) goto loc_82827110;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82827108
	if (ctx.cr6.eq) goto loc_82827108;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282711c
	goto loc_8282711C;
loc_82827108:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8282711c
	goto loc_8282711C;
loc_82827110:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8282711c
	goto loc_8282711C;
loc_82827118:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8282711C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82827134
	if (!ctx.cr6.eq) goto loc_82827134;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82827134:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82827088
	if (!ctx.cr0.eq) goto loc_82827088;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8282727c
	if (!ctx.cr6.eq) goto loc_8282727C;
	// addi r8,r6,3340
	ctx.r8.s64 = ctx.r6.s64 + 3340;
	// lwz r6,3344(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 3344);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82827154:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82827158:
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82827194
	if (ctx.cr6.eq) goto loc_82827194;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282718c
	if (ctx.cr6.eq) goto loc_8282718C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82827198
	if (!ctx.cr6.eq) goto loc_82827198;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82827198
	goto loc_82827198;
loc_8282718C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82827198
	goto loc_82827198;
loc_82827194:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82827198:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828271c8
	if (ctx.cr6.eq) goto loc_828271C8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828271c0
	if (ctx.cr6.eq) goto loc_828271C0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x828271b8
	if (ctx.cr6.eq) goto loc_828271B8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828271cc
	goto loc_828271CC;
loc_828271B8:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x828271cc
	goto loc_828271CC;
loc_828271C0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x828271cc
	goto loc_828271CC;
loc_828271C8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_828271CC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828271f4
	if (ctx.cr6.eq) goto loc_828271F4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x82827158
	if (ctx.cr6.lt) goto loc_82827158;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// blt cr6,0x82827154
	if (ctx.cr6.lt) goto loc_82827154;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_828271F4:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r5.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82827214:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,3584(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3584, ctx.r11.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82827224:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,3492(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3492, ctx.r11.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82827234:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,440(r6)
	PPC_STORE_U32(ctx.r6.u32 + 440, ctx.r11.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82827244:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,3288(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3288, ctx.r11.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82827254:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,3372(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3372, ctx.r11.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82827264:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,3608(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3608, ctx.r11.u32);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82827274:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,376(r6)
	PPC_STORE_U32(ctx.r6.u32 + 376, ctx.r11.u32);
loc_8282727C:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82827284"))) PPC_WEAK_FUNC(sub_82827284);
PPC_FUNC_IMPL(__imp__sub_82827284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82827288"))) PPC_WEAK_FUNC(sub_82827288);
PPC_FUNC_IMPL(__imp__sub_82827288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282728C"))) PPC_WEAK_FUNC(sub_8282728C);
PPC_FUNC_IMPL(__imp__sub_8282728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82827290"))) PPC_WEAK_FUNC(sub_82827290);
PPC_FUNC_IMPL(__imp__sub_82827290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,3408(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3408);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x828272f4
	if (!ctx.cr6.eq) goto loc_828272F4;
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x828272e4
	if (ctx.cr6.eq) goto loc_828272E4;
	// lwz r11,3596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3596);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828272d0
	if (ctx.cr6.eq) goto loc_828272D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_828272D0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,-3896
	ctx.r10.s64 = ctx.r11.s64 + -3896;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_828272E4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-3896(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3896);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_828272F4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-29764(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29764);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827304"))) PPC_WEAK_FUNC(sub_82827304);
PPC_FUNC_IMPL(__imp__sub_82827304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82827308"))) PPC_WEAK_FUNC(sub_82827308);
PPC_FUNC_IMPL(__imp__sub_82827308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282730C"))) PPC_WEAK_FUNC(sub_8282730C);
PPC_FUNC_IMPL(__imp__sub_8282730C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82827310"))) PPC_WEAK_FUNC(sub_82827310);
PPC_FUNC_IMPL(__imp__sub_82827310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82827318;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8221ad18
	ctx.lr = 0x82827320;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lfs f13,-29756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29756);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32030
	ctx.r9.s64 = -2099118080;
	// lfs f12,-29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29760);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// lfs f30,29744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f30.f64 = double(temp.f32);
	// addi r29,r9,29280
	ctx.r29.s64 = ctx.r9.s64 + 29280;
	// lfs f31,29760(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,-30228(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -30228);
	ctx.f0.f64 = double(temp.f32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r8,-17544
	ctx.r30.s64 = ctx.r8.s64 + -17544;
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r23,13188(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r22,13180(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// lwz r21,13184(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13184);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// lfs f11,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f11.f64 = double(temp.f32);
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stw r11,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r11.u32);
	// stw r10,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r10.u32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fsel f8,f9,f9,f30
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f30.f64;
	// fsubs f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fsel f4,f5,f5,f30
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f5.f64 : ctx.f30.f64;
	// fsubs f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// fsel f2,f3,f31,f4
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f31.f64 : ctx.f4.f64;
	// fsubs f1,f31,f2
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f2.f64));
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f12,f1,f30,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fsel f11,f12,f12,f30
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f30.f64;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsel f29,f10,f0,f11
	ctx.f29.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// beq cr6,0x82827434
	if (ctx.cr6.eq) goto loc_82827434;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827408;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82827434
	if (ctx.cr6.eq) goto loc_82827434;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_82827434:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lfs f29,-30868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30868);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82827490
	if (ctx.cr6.eq) goto loc_82827490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82827490
	if (ctx.cr6.eq) goto loc_82827490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8282748C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_82827490:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq cr6,0x828274e4
	if (ctx.cr6.eq) goto loc_828274E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828274B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828274e4
	if (ctx.cr6.eq) goto loc_828274E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828274E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_828274E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq cr6,0x8282753c
	if (ctx.cr6.eq) goto loc_8282753C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8282750C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282753c
	if (ctx.cr6.eq) goto loc_8282753C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,-30400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30400);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82827538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_8282753C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq cr6,0x82827590
	if (ctx.cr6.eq) goto loc_82827590;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82827590
	if (ctx.cr6.eq) goto loc_82827590;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8282758C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_82827590:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq cr6,0x828275e4
	if (ctx.cr6.eq) goto loc_828275E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828275B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828275e4
	if (ctx.cr6.eq) goto loc_828275E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828275E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
loc_828275E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq cr6,0x82827634
	if (ctx.cr6.eq) goto loc_82827634;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8282760C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82827634
	if (ctx.cr6.eq) goto loc_82827634;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82827634:
	// lwz r11,3748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3748);
	// lwz r3,488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282766c
	if (ctx.cr6.eq) goto loc_8282766C;
	// bl 0x82bfc538
	ctx.lr = 0x82827648;
	sub_82BFC538(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,-4368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4368);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsel f10,f11,f11,f30
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f30.f64;
	// fsubs f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fsel f8,f9,f31,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// fsubs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// fmadds f29,f8,f30,f7
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f7.f64));
	// b 0x82827690
	goto loc_82827690;
loc_8282766C:
	// bl 0x82bfc538
	ctx.lr = 0x82827670;
	sub_82BFC538(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,-4368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4368);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsel f10,f11,f11,f30
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f30.f64;
	// fsubs f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fsel f8,f9,f31,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// fsubs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// fmadds f29,f7,f30,f8
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f8.f64));
loc_82827690:
	// fsel f6,f29,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f29.f64 >= 0.0 ? ctx.f29.f64 : ctx.f30.f64;
	// lfs f13,3336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3336);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,3520(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3520);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r11.u8);
	// fsubs f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// fsel f4,f5,f31,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f31.f64 : ctx.f6.f64;
	// fmuls f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fsubs f3,f31,f4
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// fmadds f28,f3,f12,f2
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f2.f64));
	// beq cr6,0x82827708
	if (ctx.cr6.eq) goto loc_82827708;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828276DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82827708
	if (ctx.cr6.eq) goto loc_82827708;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
loc_82827708:
	// fsel f0,f29,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 >= 0.0 ? ctx.f29.f64 : ctx.f30.f64;
	// lfs f13,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r11.u8);
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fmadds f28,f9,f12,f8
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f8.f64));
	// beq cr6,0x8282777c
	if (ctx.cr6.eq) goto loc_8282777C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282777c
	if (ctx.cr6.eq) goto loc_8282777C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
loc_8282777C:
	// fsel f0,f29,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 >= 0.0 ? ctx.f29.f64 : ctx.f30.f64;
	// lfs f13,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,3328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r11.u8);
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fmadds f28,f9,f12,f8
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f8.f64));
	// beq cr6,0x828277f0
	if (ctx.cr6.eq) goto loc_828277F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828277C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828277f0
	if (ctx.cr6.eq) goto loc_828277F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828277EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
loc_828277F0:
	// fsel f0,f29,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 >= 0.0 ? ctx.f29.f64 : ctx.f30.f64;
	// lfs f13,3524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3524);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,3620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3620);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r11.u8);
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fmadds f28,f9,f12,f8
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f8.f64));
	// beq cr6,0x82827864
	if (ctx.cr6.eq) goto loc_82827864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82827864
	if (ctx.cr6.eq) goto loc_82827864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
loc_82827864:
	// fsel f0,f29,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 >= 0.0 ? ctx.f29.f64 : ctx.f30.f64;
	// lfs f13,3100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3100);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,3400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3400);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r11.u8);
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fmadds f28,f9,f12,f8
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f8.f64));
	// beq cr6,0x828278d8
	if (ctx.cr6.eq) goto loc_828278D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828278AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828278d8
	if (ctx.cr6.eq) goto loc_828278D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828278D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
loc_828278D8:
	// fsel f0,f29,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 >= 0.0 ? ctx.f29.f64 : ctx.f30.f64;
	// lfs f13,484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,3332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,45(r30)
	PPC_STORE_U8(ctx.r30.u32 + 45, ctx.r11.u8);
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsel f10,f11,f31,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fmadds f31,f9,f12,f8
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f8.f64));
	// beq cr6,0x82827948
	if (ctx.cr6.eq) goto loc_82827948;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82827948
	if (ctx.cr6.eq) goto loc_82827948;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82827948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82827948:
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8221ad64
	ctx.lr = 0x82827964;
	__restfpr_28(ctx, base);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82827968"))) PPC_WEAK_FUNC(sub_82827968);
PPC_FUNC_IMPL(__imp__sub_82827968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82827970;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// stfs f0,3564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3564, temp.u32);
	// stw r27,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r27.u32);
loc_828279A8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828279e4
	if (ctx.cr6.eq) goto loc_828279E4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828279dc
	if (ctx.cr6.eq) goto loc_828279DC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828279d4
	if (ctx.cr6.eq) goto loc_828279D4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x828279e8
	goto loc_828279E8;
loc_828279D4:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x828279e8
	goto loc_828279E8;
loc_828279DC:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x828279e8
	goto loc_828279E8;
loc_828279E4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_828279E8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82827a98
	if (ctx.cr6.eq) goto loc_82827A98;
	// cmpwi cr6,r27,64
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 64, ctx.xer);
	// bge cr6,0x82827a98
	if (!ctx.cr6.lt) goto loc_82827A98;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82827a24
	if (ctx.cr6.eq) goto loc_82827A24;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82827a20
	if (ctx.cr6.eq) goto loc_82827A20;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82827a18
	if (ctx.cr6.eq) goto loc_82827A18;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82827a24
	goto loc_82827A24;
loc_82827A18:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82827a24
	goto loc_82827A24;
loc_82827A20:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82827A24:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,3120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3120);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,1436(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1436);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r7.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82827a6c
	if (ctx.cr6.eq) goto loc_82827A6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82827a64
	if (ctx.cr6.eq) goto loc_82827A64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82827a70
	if (!ctx.cr6.eq) goto loc_82827A70;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82827a70
	goto loc_82827A70;
loc_82827A64:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82827a70
	goto loc_82827A70;
loc_82827A6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82827A70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82826150
	ctx.lr = 0x82827A7C;
	sub_82826150(ctx, base);
	// lfs f0,3564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3564);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,3564(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3564, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x828279a8
	goto loc_828279A8;
loc_82827A98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82827AA0"))) PPC_WEAK_FUNC(sub_82827AA0);
PPC_FUNC_IMPL(__imp__sub_82827AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82827AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82827b00
	if (ctx.cr6.eq) goto loc_82827B00;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82827af8
	if (ctx.cr6.eq) goto loc_82827AF8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82827af0
	if (ctx.cr6.eq) goto loc_82827AF0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82827b04
	goto loc_82827B04;
loc_82827AF0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82827b04
	goto loc_82827B04;
loc_82827AF8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82827b04
	goto loc_82827B04;
loc_82827B00:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82827B04:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r27,8(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// beq cr6,0x82827b3c
	if (ctx.cr6.eq) goto loc_82827B3C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82827b40
	if (ctx.cr6.eq) goto loc_82827B40;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82827b34
	if (ctx.cr6.eq) goto loc_82827B34;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82827b40
	goto loc_82827B40;
loc_82827B34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82827b40
	goto loc_82827B40;
loc_82827B3C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82827B40:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x82827B48;
	sub_82804410(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82827b78
	if (ctx.cr6.eq) goto loc_82827B78;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82827b70
	if (ctx.cr6.eq) goto loc_82827B70;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82827b68
	if (ctx.cr6.eq) goto loc_82827B68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82827b7c
	goto loc_82827B7C;
loc_82827B68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82827b7c
	goto loc_82827B7C;
loc_82827B70:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82827b7c
	goto loc_82827B7C;
loc_82827B78:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82827B7C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x82827B84;
	sub_82804410(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f0,f3
	ctx.f0.f64 = double(float(sqrt(ctx.f3.f64)));
	// beq cr6,0x82827d3c
	if (ctx.cr6.eq) goto loc_82827D3C;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// beq cr6,0x82827d34
	if (ctx.cr6.eq) goto loc_82827D34;
	// cmpwi cr6,r27,7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 7, ctx.xer);
	// beq cr6,0x82827d2c
	if (ctx.cr6.eq) goto loc_82827D2C;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// beq cr6,0x82827cf4
	if (ctx.cr6.eq) goto loc_82827CF4;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// beq cr6,0x82827cbc
	if (ctx.cr6.eq) goto loc_82827CBC;
	// lwz r11,3448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82827c94
	if (!ctx.cr6.eq) goto loc_82827C94;
	// lfs f13,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82827c68
	if (ctx.cr6.lt) goto loc_82827C68;
	// lfs f13,3396(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3396);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82827c3c
	if (ctx.cr6.lt) goto loc_82827C3C;
	// lwz r11,3752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82827c3c
	if (!ctx.cr6.eq) goto loc_82827C3C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,348(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3732(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3732);
	ctx.f12.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,3316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3316, ctx.r10.u32);
	// lfs f0,-30388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f10,3724(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3724, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82827C3C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,348(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3728(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3728);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,3316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3316, ctx.r10.u32);
	// lfs f0,-30388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f10,3724(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3724, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82827C68:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,348(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3580);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,3316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3316, ctx.r10.u32);
	// lfs f0,-30388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f10,3724(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3724, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82827C94:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f12,348(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,3316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3316, ctx.r10.u32);
	// lfs f13,-30388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30388);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,3724(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3724, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82827CBC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,348(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3732(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3732);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r9,3316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3316, ctx.r9.u32);
	// lfs f0,-30388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-18644(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18644);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,3724(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3724, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82827CF4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,348(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3732(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3732);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,3316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3316, ctx.r9.u32);
	// lfs f0,-30388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-18644(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18644);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,3724(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3724, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82827D2C:
	// li r9,7
	ctx.r9.s64 = 7;
	// b 0x82827d40
	goto loc_82827D40;
loc_82827D34:
	// li r9,6
	ctx.r9.s64 = 6;
	// b 0x82827d40
	goto loc_82827D40;
loc_82827D3C:
	// li r9,3
	ctx.r9.s64 = 3;
loc_82827D40:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f11,348(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// stw r9,3316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3316, ctx.r9.u32);
	// lfs f12,-30388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30388);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-19780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19780);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,3724(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3724, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82827D70"))) PPC_WEAK_FUNC(sub_82827D70);
PPC_FUNC_IMPL(__imp__sub_82827D70) {
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
	// beq cr6,0x82827dcc
	if (ctx.cr6.eq) goto loc_82827DCC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82827dc4
	if (ctx.cr6.eq) goto loc_82827DC4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82827dd0
	if (!ctx.cr6.eq) goto loc_82827DD0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82827dd0
	goto loc_82827DD0;
loc_82827DC4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82827dd0
	goto loc_82827DD0;
loc_82827DCC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82827DD0:
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82827dfc
	if (ctx.cr6.eq) goto loc_82827DFC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82827df4
	if (ctx.cr6.eq) goto loc_82827DF4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82827e00
	if (!ctx.cr6.eq) goto loc_82827E00;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82827e00
	goto loc_82827E00;
loc_82827DF4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82827e00
	goto loc_82827E00;
loc_82827DFC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82827E00:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827E18"))) PPC_WEAK_FUNC(sub_82827E18);
PPC_FUNC_IMPL(__imp__sub_82827E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,164
	ctx.r10.s64 = ctx.r11.s64 + 164;
	// lfs f13,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r6,-8(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827E6C"))) PPC_WEAK_FUNC(sub_82827E6C);
PPC_FUNC_IMPL(__imp__sub_82827E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82827E70"))) PPC_WEAK_FUNC(sub_82827E70);
PPC_FUNC_IMPL(__imp__sub_82827E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r6,-8(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827EC4"))) PPC_WEAK_FUNC(sub_82827EC4);
PPC_FUNC_IMPL(__imp__sub_82827EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82827EC8"))) PPC_WEAK_FUNC(sub_82827EC8);
PPC_FUNC_IMPL(__imp__sub_82827EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827EE0"))) PPC_WEAK_FUNC(sub_82827EE0);
PPC_FUNC_IMPL(__imp__sub_82827EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82827efc
	if (ctx.cr6.lt) goto loc_82827EFC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x82827f08
	if (ctx.cr6.lt) goto loc_82827F08;
loc_82827EFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82827F08:
	// addi r10,r5,34
	ctx.r10.s64 = ctx.r5.s64 + 34;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827F1C"))) PPC_WEAK_FUNC(sub_82827F1C);
PPC_FUNC_IMPL(__imp__sub_82827F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82827F20"))) PPC_WEAK_FUNC(sub_82827F20);
PPC_FUNC_IMPL(__imp__sub_82827F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,156(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827F38"))) PPC_WEAK_FUNC(sub_82827F38);
PPC_FUNC_IMPL(__imp__sub_82827F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,152(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827F50"))) PPC_WEAK_FUNC(sub_82827F50);
PPC_FUNC_IMPL(__imp__sub_82827F50) {
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

__attribute__((alias("__imp__sub_82827F68"))) PPC_WEAK_FUNC(sub_82827F68);
PPC_FUNC_IMPL(__imp__sub_82827F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827F80"))) PPC_WEAK_FUNC(sub_82827F80);
PPC_FUNC_IMPL(__imp__sub_82827F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,160(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 160, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827F94"))) PPC_WEAK_FUNC(sub_82827F94);
PPC_FUNC_IMPL(__imp__sub_82827F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82827F98"))) PPC_WEAK_FUNC(sub_82827F98);
PPC_FUNC_IMPL(__imp__sub_82827F98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827FAC"))) PPC_WEAK_FUNC(sub_82827FAC);
PPC_FUNC_IMPL(__imp__sub_82827FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82827FB0"))) PPC_WEAK_FUNC(sub_82827FB0);
PPC_FUNC_IMPL(__imp__sub_82827FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827FC8"))) PPC_WEAK_FUNC(sub_82827FC8);
PPC_FUNC_IMPL(__imp__sub_82827FC8) {
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

__attribute__((alias("__imp__sub_82827FDC"))) PPC_WEAK_FUNC(sub_82827FDC);
PPC_FUNC_IMPL(__imp__sub_82827FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82827FE0"))) PPC_WEAK_FUNC(sub_82827FE0);
PPC_FUNC_IMPL(__imp__sub_82827FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827FF8"))) PPC_WEAK_FUNC(sub_82827FF8);
PPC_FUNC_IMPL(__imp__sub_82827FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282800C"))) PPC_WEAK_FUNC(sub_8282800C);
PPC_FUNC_IMPL(__imp__sub_8282800C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828010"))) PPC_WEAK_FUNC(sub_82828010);
PPC_FUNC_IMPL(__imp__sub_82828010) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828028"))) PPC_WEAK_FUNC(sub_82828028);
PPC_FUNC_IMPL(__imp__sub_82828028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828040"))) PPC_WEAK_FUNC(sub_82828040);
PPC_FUNC_IMPL(__imp__sub_82828040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,60(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828058"))) PPC_WEAK_FUNC(sub_82828058);
PPC_FUNC_IMPL(__imp__sub_82828058) {
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

__attribute__((alias("__imp__sub_82828070"))) PPC_WEAK_FUNC(sub_82828070);
PPC_FUNC_IMPL(__imp__sub_82828070) {
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

__attribute__((alias("__imp__sub_82828088"))) PPC_WEAK_FUNC(sub_82828088);
PPC_FUNC_IMPL(__imp__sub_82828088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,60(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282809C"))) PPC_WEAK_FUNC(sub_8282809C);
PPC_FUNC_IMPL(__imp__sub_8282809C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828280A0"))) PPC_WEAK_FUNC(sub_828280A0);
PPC_FUNC_IMPL(__imp__sub_828280A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828280B8"))) PPC_WEAK_FUNC(sub_828280B8);
PPC_FUNC_IMPL(__imp__sub_828280B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828280CC"))) PPC_WEAK_FUNC(sub_828280CC);
PPC_FUNC_IMPL(__imp__sub_828280CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828280D0"))) PPC_WEAK_FUNC(sub_828280D0);
PPC_FUNC_IMPL(__imp__sub_828280D0) {
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

__attribute__((alias("__imp__sub_828280E8"))) PPC_WEAK_FUNC(sub_828280E8);
PPC_FUNC_IMPL(__imp__sub_828280E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828100"))) PPC_WEAK_FUNC(sub_82828100);
PPC_FUNC_IMPL(__imp__sub_82828100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,34
	ctx.r10.s64 = ctx.r5.s64 + 34;
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

__attribute__((alias("__imp__sub_82828120"))) PPC_WEAK_FUNC(sub_82828120);
PPC_FUNC_IMPL(__imp__sub_82828120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828134"))) PPC_WEAK_FUNC(sub_82828134);
PPC_FUNC_IMPL(__imp__sub_82828134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828138"))) PPC_WEAK_FUNC(sub_82828138);
PPC_FUNC_IMPL(__imp__sub_82828138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,34
	ctx.r10.s64 = ctx.r4.s64 + 34;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stwx r5,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828154"))) PPC_WEAK_FUNC(sub_82828154);
PPC_FUNC_IMPL(__imp__sub_82828154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828158"))) PPC_WEAK_FUNC(sub_82828158);
PPC_FUNC_IMPL(__imp__sub_82828158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,108(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 108, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282816C"))) PPC_WEAK_FUNC(sub_8282816C);
PPC_FUNC_IMPL(__imp__sub_8282816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828170"))) PPC_WEAK_FUNC(sub_82828170);
PPC_FUNC_IMPL(__imp__sub_82828170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,108(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828188"))) PPC_WEAK_FUNC(sub_82828188);
PPC_FUNC_IMPL(__imp__sub_82828188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,160(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828281A0"))) PPC_WEAK_FUNC(sub_828281A0);
PPC_FUNC_IMPL(__imp__sub_828281A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828281B4"))) PPC_WEAK_FUNC(sub_828281B4);
PPC_FUNC_IMPL(__imp__sub_828281B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828281B8"))) PPC_WEAK_FUNC(sub_828281B8);
PPC_FUNC_IMPL(__imp__sub_828281B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828281D0"))) PPC_WEAK_FUNC(sub_828281D0);
PPC_FUNC_IMPL(__imp__sub_828281D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// stw r8,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828281E8"))) PPC_WEAK_FUNC(sub_828281E8);
PPC_FUNC_IMPL(__imp__sub_828281E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828281FC"))) PPC_WEAK_FUNC(sub_828281FC);
PPC_FUNC_IMPL(__imp__sub_828281FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828200"))) PPC_WEAK_FUNC(sub_82828200);
PPC_FUNC_IMPL(__imp__sub_82828200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828214"))) PPC_WEAK_FUNC(sub_82828214);
PPC_FUNC_IMPL(__imp__sub_82828214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828218"))) PPC_WEAK_FUNC(sub_82828218);
PPC_FUNC_IMPL(__imp__sub_82828218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,72(r9)
	PPC_STORE_U32(ctx.r9.u32 + 72, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282822C"))) PPC_WEAK_FUNC(sub_8282822C);
PPC_FUNC_IMPL(__imp__sub_8282822C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828230"))) PPC_WEAK_FUNC(sub_82828230);
PPC_FUNC_IMPL(__imp__sub_82828230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,112(r9)
	PPC_STORE_U32(ctx.r9.u32 + 112, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828244"))) PPC_WEAK_FUNC(sub_82828244);
PPC_FUNC_IMPL(__imp__sub_82828244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828248"))) PPC_WEAK_FUNC(sub_82828248);
PPC_FUNC_IMPL(__imp__sub_82828248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828260"))) PPC_WEAK_FUNC(sub_82828260);
PPC_FUNC_IMPL(__imp__sub_82828260) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_82828274"))) PPC_WEAK_FUNC(sub_82828274);
PPC_FUNC_IMPL(__imp__sub_82828274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828278"))) PPC_WEAK_FUNC(sub_82828278);
PPC_FUNC_IMPL(__imp__sub_82828278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828290"))) PPC_WEAK_FUNC(sub_82828290);
PPC_FUNC_IMPL(__imp__sub_82828290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828282A8"))) PPC_WEAK_FUNC(sub_828282A8);
PPC_FUNC_IMPL(__imp__sub_828282A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828282B0"))) PPC_WEAK_FUNC(sub_828282B0);
PPC_FUNC_IMPL(__imp__sub_828282B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x828282B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// lwz r11,13180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// lwz r8,13188(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282830c
	if (ctx.cr6.eq) goto loc_8282830C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82828304
	if (ctx.cr6.eq) goto loc_82828304;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82828310
	if (!ctx.cr6.eq) goto loc_82828310;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82828310
	goto loc_82828310;
loc_82828304:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82828310
	goto loc_82828310;
loc_8282830C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82828310:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82828338
	if (!ctx.cr6.eq) goto loc_82828338;
	// lis r3,6917
	ctx.r3.s64 = 453312512;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,60161
	ctx.r3.u64 = ctx.r3.u64 | 60161;
	// bl 0x827eee58
	ctx.lr = 0x82828328;
	sub_827EEE58(ctx, base);
	// stw r3,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r3.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,13188(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
loc_82828338:
	// lwz r11,152(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82828364
	if (ctx.cr6.eq) goto loc_82828364;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282835c
	if (ctx.cr6.eq) goto loc_8282835C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82828368
	if (!ctx.cr6.eq) goto loc_82828368;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82828368
	goto loc_82828368;
loc_8282835C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82828368
	goto loc_82828368;
loc_82828364:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82828368:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82828384
	if (!ctx.cr6.eq) goto loc_82828384;
	// lis r3,6917
	ctx.r3.s64 = 453312512;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,60163
	ctx.r3.u64 = ctx.r3.u64 | 60163;
	// bl 0x827eee58
	ctx.lr = 0x82828380;
	sub_827EEE58(ctx, base);
	// stw r3,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r3.u32);
loc_82828384:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82828390"))) PPC_WEAK_FUNC(sub_82828390);
PPC_FUNC_IMPL(__imp__sub_82828390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,148(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828283f4
	if (ctx.cr6.eq) goto loc_828283F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828283ec
	if (ctx.cr6.eq) goto loc_828283EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828283e4
	if (ctx.cr6.eq) goto loc_828283E4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828283f8
	goto loc_828283F8;
loc_828283E4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828283f8
	goto loc_828283F8;
loc_828283EC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828283f8
	goto loc_828283F8;
loc_828283F4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828283F8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8282842c
	if (!ctx.cr6.eq) goto loc_8282842C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x82828408;
	sub_82804410(ctx, base);
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x82828484
	goto loc_82828484;
loc_8282842C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82828454
	if (ctx.cr6.eq) goto loc_82828454;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282844c
	if (ctx.cr6.eq) goto loc_8282844C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82828458
	if (!ctx.cr6.eq) goto loc_82828458;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82828458
	goto loc_82828458;
loc_8282844C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82828458
	goto loc_82828458;
loc_82828454:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82828458:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82828464;
	sub_82804410(ctx, base);
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82828484:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828284A8"))) PPC_WEAK_FUNC(sub_828284A8);
PPC_FUNC_IMPL(__imp__sub_828284A8) {
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
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,48(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r4,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r4.u32);
	// beq cr6,0x8282850c
	if (ctx.cr6.eq) goto loc_8282850C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82828504
	if (ctx.cr6.eq) goto loc_82828504;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828284fc
	if (ctx.cr6.eq) goto loc_828284FC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82828510
	goto loc_82828510;
loc_828284FC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82828510
	goto loc_82828510;
loc_82828504:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82828510
	goto loc_82828510;
loc_8282850C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82828510:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828590
	if (ctx.cr6.eq) goto loc_82828590;
	// lfs f0,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r30,116
	ctx.r31.s64 = ctx.r30.s64 + 116;
	// stfs f0,164(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
	// lfs f13,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stfs f13,168(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// lfs f12,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,172(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// beq cr6,0x8282855c
	if (ctx.cr6.eq) goto loc_8282855C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82828554
	if (ctx.cr6.eq) goto loc_82828554;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82828560
	if (ctx.cr6.eq) goto loc_82828560;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82828560
	goto loc_82828560;
loc_82828554:
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82828560
	goto loc_82828560;
loc_8282855C:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82828560:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x82828568;
	sub_82804410(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,-29752(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29752);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,84(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stfs f0,104(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
loc_82828590:
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

__attribute__((alias("__imp__sub_828285AC"))) PPC_WEAK_FUNC(sub_828285AC);
PPC_FUNC_IMPL(__imp__sub_828285AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828285B0"))) PPC_WEAK_FUNC(sub_828285B0);
PPC_FUNC_IMPL(__imp__sub_828285B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82828614
	if (ctx.cr6.eq) goto loc_82828614;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282860c
	if (ctx.cr6.eq) goto loc_8282860C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82828604
	if (ctx.cr6.eq) goto loc_82828604;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82828618
	goto loc_82828618;
loc_82828604:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82828618
	goto loc_82828618;
loc_8282860C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82828618
	goto loc_82828618;
loc_82828614:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82828618:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8282864c
	if (!ctx.cr6.eq) goto loc_8282864C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x82828628;
	sub_82804410(ctx, base);
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x828286a4
	goto loc_828286A4;
loc_8282864C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82828674
	if (ctx.cr6.eq) goto loc_82828674;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282866c
	if (ctx.cr6.eq) goto loc_8282866C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82828678
	if (!ctx.cr6.eq) goto loc_82828678;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82828678
	goto loc_82828678;
loc_8282866C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82828678
	goto loc_82828678;
loc_82828674:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82828678:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82828684;
	sub_82804410(ctx, base);
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_828286A4:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828286C8"))) PPC_WEAK_FUNC(sub_828286C8);
PPC_FUNC_IMPL(__imp__sub_828286C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,704
	ctx.r10.s64 = ctx.r5.s64 + 704;
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

__attribute__((alias("__imp__sub_828286E8"))) PPC_WEAK_FUNC(sub_828286E8);
PPC_FUNC_IMPL(__imp__sub_828286E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828286F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,13180(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r30,13192(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r29,13188(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r28,13184(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// bl 0x82b23f30
	ctx.lr = 0x82828734;
	sub_82B23F30(ctx, base);
	// stw r30,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r30.u32);
	// stw r31,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r31.u32);
	// stw r28,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r28.u32);
	// stw r29,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282874C"))) PPC_WEAK_FUNC(sub_8282874C);
PPC_FUNC_IMPL(__imp__sub_8282874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828750"))) PPC_WEAK_FUNC(sub_82828750);
PPC_FUNC_IMPL(__imp__sub_82828750) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828287a4
	if (ctx.cr6.eq) goto loc_828287A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82828794
	if (ctx.cr6.eq) goto loc_82828794;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828287ac
	if (!ctx.cr6.eq) goto loc_828287AC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828287ac
	goto loc_828287AC;
loc_82828794:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828287ac
	goto loc_828287AC;
loc_828287A4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828287AC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828023d0
	ctx.lr = 0x828287B4;
	sub_828023D0(ctx, base);
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

__attribute__((alias("__imp__sub_828287CC"))) PPC_WEAK_FUNC(sub_828287CC);
PPC_FUNC_IMPL(__imp__sub_828287CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828287D0"))) PPC_WEAK_FUNC(sub_828287D0);
PPC_FUNC_IMPL(__imp__sub_828287D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x828287D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r6,-29532(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r8,11700(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82828834
	if (ctx.cr6.eq) goto loc_82828834;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8282882c
	if (ctx.cr6.eq) goto loc_8282882C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82828824
	if (ctx.cr6.eq) goto loc_82828824;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82828838
	goto loc_82828838;
loc_82828824:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x82828838
	goto loc_82828838;
loc_8282882C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82828838
	goto loc_82828838;
loc_82828834:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_82828838:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82802678
	ctx.lr = 0x82828840;
	sub_82802678(ctx, base);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x82828898
	if (ctx.cr6.eq) goto loc_82828898;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82828870
	if (ctx.cr6.eq) goto loc_82828870;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82828868
	if (ctx.cr6.eq) goto loc_82828868;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82828874
	if (!ctx.cr6.eq) goto loc_82828874;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x82828874
	goto loc_82828874;
loc_82828868:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// b 0x82828874
	goto loc_82828874;
loc_82828870:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82828874:
	// addi r11,r5,704
	ctx.r11.s64 = ctx.r5.s64 + 704;
	// lwz r5,6468(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82800a10
	ctx.lr = 0x8282888C;
	sub_82800A10(ctx, base);
	// std r3,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r3.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82828898:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828288A8"))) PPC_WEAK_FUNC(sub_828288A8);
PPC_FUNC_IMPL(__imp__sub_828288A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,11692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11692);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x828288e4
	if (!ctx.cr6.eq) goto loc_828288E4;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x828288d8
	if (ctx.cr6.eq) goto loc_828288D8;
	// lwz r11,11696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828288e4
	if (!ctx.cr6.eq) goto loc_828288E4;
loc_828288D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828288E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828288F0"))) PPC_WEAK_FUNC(sub_828288F0);
PPC_FUNC_IMPL(__imp__sub_828288F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-4012(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r10,r11,8296
	ctx.r10.s64 = ctx.r11.s64 + 8296;
	// lwz r8,2096(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r7,8300(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r6,r11,9
	ctx.r6.s64 = ctx.r11.s64 + 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82828930
	if (!ctx.cr6.gt) goto loc_82828930;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82828930:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828938"))) PPC_WEAK_FUNC(sub_82828938);
PPC_FUNC_IMPL(__imp__sub_82828938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282893C"))) PPC_WEAK_FUNC(sub_8282893C);
PPC_FUNC_IMPL(__imp__sub_8282893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828940"))) PPC_WEAK_FUNC(sub_82828940);
PPC_FUNC_IMPL(__imp__sub_82828940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828944"))) PPC_WEAK_FUNC(sub_82828944);
PPC_FUNC_IMPL(__imp__sub_82828944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828948"))) PPC_WEAK_FUNC(sub_82828948);
PPC_FUNC_IMPL(__imp__sub_82828948) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828289a0
	if (ctx.cr6.eq) goto loc_828289A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82828990
	if (ctx.cr6.eq) goto loc_82828990;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828289a8
	if (!ctx.cr6.eq) goto loc_828289A8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828289a8
	goto loc_828289A8;
loc_82828990:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828289a8
	goto loc_828289A8;
loc_828289A0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828289A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828289f4
	if (ctx.cr6.eq) goto loc_828289F4;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828289f4
	if (ctx.cr6.eq) goto loc_828289F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828289f4
	if (ctx.cr6.eq) goto loc_828289F4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828289f4
	if (ctx.cr6.eq) goto loc_828289F4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828289f4
	if (ctx.cr6.eq) goto loc_828289F4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82798a18
	ctx.lr = 0x828289F0;
	sub_82798A18(ctx, base);
	// b 0x828289f8
	goto loc_828289F8;
loc_828289F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828289F8:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// std r3,1468(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1468, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_82828A1C"))) PPC_WEAK_FUNC(sub_82828A1C);
PPC_FUNC_IMPL(__imp__sub_82828A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828A20"))) PPC_WEAK_FUNC(sub_82828A20);
PPC_FUNC_IMPL(__imp__sub_82828A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r11,1468
	ctx.r10.s64 = ctx.r11.s64 + 1468;
	// ld r6,1468(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1468);
	// ld r5,1468(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 1468);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// std r4,1468(r11)
	PPC_STORE_U64(ctx.r11.u32 + 1468, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828A54"))) PPC_WEAK_FUNC(sub_82828A54);
PPC_FUNC_IMPL(__imp__sub_82828A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828A58"))) PPC_WEAK_FUNC(sub_82828A58);
PPC_FUNC_IMPL(__imp__sub_82828A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82828A60;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r11.u32);
	// lwz r22,48(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// beq cr6,0x82828abc
	if (ctx.cr6.eq) goto loc_82828ABC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8213ab30
	ctx.lr = 0x82828AB8;
	sub_8213AB30(ctx, base);
	// b 0x82828ac0
	goto loc_82828AC0;
loc_82828ABC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82828AC0:
	// addi r11,r27,2534
	ctx.r11.s64 = ctx.r27.s64 + 2534;
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// stwx r3,r10,r22
	PPC_STORE_U32(ctx.r10.u32 + ctx.r22.u32, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82828AE4"))) PPC_WEAK_FUNC(sub_82828AE4);
PPC_FUNC_IMPL(__imp__sub_82828AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828AE8"))) PPC_WEAK_FUNC(sub_82828AE8);
PPC_FUNC_IMPL(__imp__sub_82828AE8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82828b40
	if (ctx.cr6.eq) goto loc_82828B40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82828b30
	if (ctx.cr6.eq) goto loc_82828B30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82828b48
	if (!ctx.cr6.eq) goto loc_82828B48;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82828b48
	goto loc_82828B48;
loc_82828B30:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82828b48
	goto loc_82828B48;
loc_82828B40:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82828B48:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82800ba0
	ctx.lr = 0x82828B54;
	sub_82800BA0(ctx, base);
	// addi r11,r30,1601
	ctx.r11.s64 = ctx.r30.s64 + 1601;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82828B78"))) PPC_WEAK_FUNC(sub_82828B78);
PPC_FUNC_IMPL(__imp__sub_82828B78) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82828bd0
	if (ctx.cr6.eq) goto loc_82828BD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82828bc0
	if (ctx.cr6.eq) goto loc_82828BC0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82828bd8
	if (!ctx.cr6.eq) goto loc_82828BD8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82828bd8
	goto loc_82828BD8;
loc_82828BC0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82828bd8
	goto loc_82828BD8;
loc_82828BD0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82828BD8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82800f40
	ctx.lr = 0x82828BE4;
	sub_82800F40(ctx, base);
	// addi r11,r30,529
	ctx.r11.s64 = ctx.r30.s64 + 529;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82828C08"))) PPC_WEAK_FUNC(sub_82828C08);
PPC_FUNC_IMPL(__imp__sub_82828C08) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82828c64
	if (ctx.cr6.eq) goto loc_82828C64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82828c54
	if (ctx.cr6.eq) goto loc_82828C54;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82828c6c
	if (!ctx.cr6.eq) goto loc_82828C6C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82828c6c
	goto loc_82828C6C;
loc_82828C54:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82828c6c
	goto loc_82828C6C;
loc_82828C64:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82828C6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828cb8
	if (ctx.cr6.eq) goto loc_82828CB8;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82828cb8
	if (ctx.cr6.eq) goto loc_82828CB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82828cb8
	if (ctx.cr6.eq) goto loc_82828CB8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828cb8
	if (ctx.cr6.eq) goto loc_82828CB8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82828cb8
	if (ctx.cr6.eq) goto loc_82828CB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82798dc0
	ctx.lr = 0x82828CB4;
	sub_82798DC0(ctx, base);
	// b 0x82828cbc
	goto loc_82828CBC;
loc_82828CB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82828CBC:
	// addi r11,r30,574
	ctx.r11.s64 = ctx.r30.s64 + 574;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82828CE0"))) PPC_WEAK_FUNC(sub_82828CE0);
PPC_FUNC_IMPL(__imp__sub_82828CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,720
	ctx.r10.s64 = ctx.r4.s64 + 720;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// bne cr6,0x82828d08
	if (!ctx.cr6.eq) goto loc_82828D08;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82828D08:
	// addi r10,r5,720
	ctx.r10.s64 = ctx.r5.s64 + 720;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,27476(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r11,3780
	ctx.r10.s64 = ctx.r11.s64 + 3780;
	// sld r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r8.u8 & 0x7F));
	// ld r5,3780(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3780);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// std r4,3780(r11)
	PPC_STORE_U64(ctx.r11.u32 + 3780, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828D60"))) PPC_WEAK_FUNC(sub_82828D60);
PPC_FUNC_IMPL(__imp__sub_82828D60) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82828dbc
	if (!ctx.cr6.eq) goto loc_82828DBC;
	// li r11,-1
	ctx.r11.s64 = -1;
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
loc_82828DBC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82828dfc
	if (ctx.cr6.eq) goto loc_82828DFC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82828dec
	if (ctx.cr6.eq) goto loc_82828DEC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82828e04
	if (!ctx.cr6.eq) goto loc_82828E04;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82828e04
	goto loc_82828E04;
loc_82828DEC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82828e04
	goto loc_82828E04;
loc_82828DFC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82828E04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828e50
	if (ctx.cr6.eq) goto loc_82828E50;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82828e50
	if (ctx.cr6.eq) goto loc_82828E50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82828e50
	if (ctx.cr6.eq) goto loc_82828E50;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828e50
	if (ctx.cr6.eq) goto loc_82828E50;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82828e50
	if (ctx.cr6.eq) goto loc_82828E50;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x827987d8
	ctx.lr = 0x82828E4C;
	sub_827987D8(ctx, base);
	// b 0x82828e54
	goto loc_82828E54;
loc_82828E50:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82828E54:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82828E6C"))) PPC_WEAK_FUNC(sub_82828E6C);
PPC_FUNC_IMPL(__imp__sub_82828E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828E70"))) PPC_WEAK_FUNC(sub_82828E70);
PPC_FUNC_IMPL(__imp__sub_82828E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,11680(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11680);
	// lwz r11,10128(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10128);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82828e90
	if (!ctx.cr6.eq) goto loc_82828E90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82828E90:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828E98"))) PPC_WEAK_FUNC(sub_82828E98);
PPC_FUNC_IMPL(__imp__sub_82828E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,10716
	ctx.r11.s64 = ctx.r11.s64 + 10716;
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
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828EC8"))) PPC_WEAK_FUNC(sub_82828EC8);
PPC_FUNC_IMPL(__imp__sub_82828EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,6392(r9)
	PPC_STORE_U32(ctx.r9.u32 + 6392, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828EDC"))) PPC_WEAK_FUNC(sub_82828EDC);
PPC_FUNC_IMPL(__imp__sub_82828EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828EE0"))) PPC_WEAK_FUNC(sub_82828EE0);
PPC_FUNC_IMPL(__imp__sub_82828EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,7396(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7396);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82828f18
	if (!ctx.cr6.eq) goto loc_82828F18;
	// lwz r10,6556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// addi r11,r11,6552
	ctx.r11.s64 = ctx.r11.s64 + 6552;
	// addi r10,r10,211
	ctx.r10.s64 = ctx.r10.s64 + 211;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82828f1c
	if (ctx.cr6.eq) goto loc_82828F1C;
loc_82828F18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82828F1C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828F24"))) PPC_WEAK_FUNC(sub_82828F24);
PPC_FUNC_IMPL(__imp__sub_82828F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82828F28"))) PPC_WEAK_FUNC(sub_82828F28);
PPC_FUNC_IMPL(__imp__sub_82828F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2561
	ctx.r10.s64 = ctx.r5.s64 + 2561;
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
	// bne cr6,0x82828f6c
	if (!ctx.cr6.eq) goto loc_82828F6C;
	// lwz r10,10240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10240);
	// addi r11,r11,10236
	ctx.r11.s64 = ctx.r11.s64 + 10236;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82828f70
	if (ctx.cr6.eq) goto loc_82828F70;
loc_82828F6C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82828F70:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828F78"))) PPC_WEAK_FUNC(sub_82828F78);
PPC_FUNC_IMPL(__imp__sub_82828F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,6552
	ctx.r10.s64 = ctx.r11.s64 + 6552;
	// lwz r9,2096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2096);
	// lwz r8,6556(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6556);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,7
	ctx.r7.s64 = ctx.r8.s64 + 7;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82828fdc
	if (ctx.cr6.eq) goto loc_82828FDC;
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// lwz r6,8300(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// addi r8,r11,8296
	ctx.r8.s64 = ctx.r11.s64 + 8296;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mullw r7,r6,r9
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r3,r7,7
	ctx.r3.s64 = ctx.r7.s64 + 7;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82829038
	if (!ctx.cr6.eq) goto loc_82829038;
loc_82828FDC:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r7,r8,39
	ctx.r7.s64 = ctx.r8.s64 + 39;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8282902c
	if (ctx.cr6.eq) goto loc_8282902C;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// lwz r8,8300(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8300);
	// addi r11,r11,8296
	ctx.r11.s64 = ctx.r11.s64 + 8296;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,39
	ctx.r7.s64 = ctx.r10.s64 + 39;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82829038
	if (!ctx.cr6.eq) goto loc_82829038;
loc_8282902C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82829038:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829044"))) PPC_WEAK_FUNC(sub_82829044);
PPC_FUNC_IMPL(__imp__sub_82829044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829048"))) PPC_WEAK_FUNC(sub_82829048);
PPC_FUNC_IMPL(__imp__sub_82829048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829060"))) PPC_WEAK_FUNC(sub_82829060);
PPC_FUNC_IMPL(__imp__sub_82829060) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828290b4
	if (ctx.cr6.eq) goto loc_828290B4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828290a4
	if (ctx.cr6.eq) goto loc_828290A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828290bc
	if (ctx.cr6.eq) goto loc_828290BC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x828290bc
	goto loc_828290BC;
loc_828290A4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828290bc
	goto loc_828290BC;
loc_828290B4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828290BC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82802678
	ctx.lr = 0x828290C4;
	sub_82802678(ctx, base);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x828290f4
	if (ctx.cr6.eq) goto loc_828290F4;
	// ld r11,2856(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 2856);
	// and r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x828290e4
	if (!ctx.cr6.lt) goto loc_828290E4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x828290f8
	goto loc_828290F8;
loc_828290E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x828290f8
	if (ctx.cr6.eq) goto loc_828290F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x828290f8
	goto loc_828290F8;
loc_828290F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828290F8:
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

__attribute__((alias("__imp__sub_82829110"))) PPC_WEAK_FUNC(sub_82829110);
PPC_FUNC_IMPL(__imp__sub_82829110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r11,r11,11196
	ctx.r11.s64 = ctx.r11.s64 + 11196;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829134"))) PPC_WEAK_FUNC(sub_82829134);
PPC_FUNC_IMPL(__imp__sub_82829134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829138"))) PPC_WEAK_FUNC(sub_82829138);
PPC_FUNC_IMPL(__imp__sub_82829138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
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

__attribute__((alias("__imp__sub_8282915C"))) PPC_WEAK_FUNC(sub_8282915C);
PPC_FUNC_IMPL(__imp__sub_8282915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829160"))) PPC_WEAK_FUNC(sub_82829160);
PPC_FUNC_IMPL(__imp__sub_82829160) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r10,r8,10040
	ctx.r10.s64 = ctx.r8.s64 + 10040;
loc_82829178:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,2096(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2096);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r7.u32);
	// blt cr6,0x82829178
	if (ctx.cr6.lt) goto loc_82829178;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828291A4"))) PPC_WEAK_FUNC(sub_828291A4);
PPC_FUNC_IMPL(__imp__sub_828291A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828291A8"))) PPC_WEAK_FUNC(sub_828291A8);
PPC_FUNC_IMPL(__imp__sub_828291A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,2096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2096, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828291BC"))) PPC_WEAK_FUNC(sub_828291BC);
PPC_FUNC_IMPL(__imp__sub_828291BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828291C0"))) PPC_WEAK_FUNC(sub_828291C0);
PPC_FUNC_IMPL(__imp__sub_828291C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,10236
	ctx.r11.s64 = ctx.r11.s64 + 10236;
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
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828291F0"))) PPC_WEAK_FUNC(sub_828291F0);
PPC_FUNC_IMPL(__imp__sub_828291F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,11680(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11680);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,10128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10128, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829210"))) PPC_WEAK_FUNC(sub_82829210);
PPC_FUNC_IMPL(__imp__sub_82829210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r11,r11,11768
	ctx.r11.s64 = ctx.r11.s64 + 11768;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829234"))) PPC_WEAK_FUNC(sub_82829234);
PPC_FUNC_IMPL(__imp__sub_82829234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829238"))) PPC_WEAK_FUNC(sub_82829238);
PPC_FUNC_IMPL(__imp__sub_82829238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,11992(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11992);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82829270
	if (!ctx.cr6.eq) goto loc_82829270;
	// lwz r10,11772(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11772);
	// addi r11,r11,11768
	ctx.r11.s64 = ctx.r11.s64 + 11768;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82829274
	if (ctx.cr6.eq) goto loc_82829274;
loc_82829270:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82829274:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282927C"))) PPC_WEAK_FUNC(sub_8282927C);
PPC_FUNC_IMPL(__imp__sub_8282927C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829280"))) PPC_WEAK_FUNC(sub_82829280);
PPC_FUNC_IMPL(__imp__sub_82829280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,1940(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 1940, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829294"))) PPC_WEAK_FUNC(sub_82829294);
PPC_FUNC_IMPL(__imp__sub_82829294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829298"))) PPC_WEAK_FUNC(sub_82829298);
PPC_FUNC_IMPL(__imp__sub_82829298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282929C"))) PPC_WEAK_FUNC(sub_8282929C);
PPC_FUNC_IMPL(__imp__sub_8282929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828292A0"))) PPC_WEAK_FUNC(sub_828292A0);
PPC_FUNC_IMPL(__imp__sub_828292A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x828292A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r28,48(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,11700(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11700);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82829304
	if (ctx.cr6.eq) goto loc_82829304;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x828292fc
	if (ctx.cr6.eq) goto loc_828292FC;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x828292f4
	if (ctx.cr6.eq) goto loc_828292F4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82829308
	goto loc_82829308;
loc_828292F4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82829308
	goto loc_82829308;
loc_828292FC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82829308
	goto loc_82829308;
loc_82829304:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82829308:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82829348
	if (ctx.cr6.eq) goto loc_82829348;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82829348
	if (ctx.cr6.eq) goto loc_82829348;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82829348
	if (ctx.cr6.eq) goto loc_82829348;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82829348
	if (ctx.cr6.eq) goto loc_82829348;
	// lhz r7,2496(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2496);
	// b 0x8282934c
	goto loc_8282934C;
loc_82829348:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8282934C:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82829450
	if (!ctx.cr6.gt) goto loc_82829450;
loc_82829358:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82829388
	if (ctx.cr6.eq) goto loc_82829388;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82829380
	if (ctx.cr6.eq) goto loc_82829380;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82829378
	if (ctx.cr6.eq) goto loc_82829378;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x8282938c
	goto loc_8282938C;
loc_82829378:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8282938c
	goto loc_8282938C;
loc_82829380:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282938c
	goto loc_8282938C;
loc_82829388:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_8282938C:
	// bl 0x82802450
	ctx.lr = 0x82829390;
	sub_82802450(ctx, base);
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x828293ac
	if (ctx.cr6.eq) goto loc_828293AC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82829358
	if (ctx.cr6.lt) goto loc_82829358;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_828293AC:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x828293dc
	if (ctx.cr6.eq) goto loc_828293DC;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x828293d4
	if (ctx.cr6.eq) goto loc_828293D4;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x828293cc
	if (ctx.cr6.eq) goto loc_828293CC;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x828293e0
	goto loc_828293E0;
loc_828293CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828293e0
	goto loc_828293E0;
loc_828293D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828293e0
	goto loc_828293E0;
loc_828293DC:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_828293E0:
	// bl 0x82801808
	ctx.lr = 0x828293E4;
	sub_82801808(ctx, base);
	// lwz r11,11700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82829410
	if (ctx.cr6.eq) goto loc_82829410;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82829408
	if (ctx.cr6.eq) goto loc_82829408;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82829414
	if (!ctx.cr6.eq) goto loc_82829414;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82829414
	goto loc_82829414;
loc_82829408:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82829414
	goto loc_82829414;
loc_82829410:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82829414:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82829450
	if (ctx.cr6.eq) goto loc_82829450;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82829450
	if (ctx.cr6.eq) goto loc_82829450;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82829450
	if (ctx.cr6.eq) goto loc_82829450;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82829450
	if (ctx.cr6.eq) goto loc_82829450;
	// bl 0x8279de30
	ctx.lr = 0x82829450;
	sub_8279DE30(ctx, base);
loc_82829450:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82829458"))) PPC_WEAK_FUNC(sub_82829458);
PPC_FUNC_IMPL(__imp__sub_82829458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82829460;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,48(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,11700(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828294b4
	if (ctx.cr6.eq) goto loc_828294B4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828294ac
	if (ctx.cr6.eq) goto loc_828294AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828294b8
	if (!ctx.cr6.eq) goto loc_828294B8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828294b8
	goto loc_828294B8;
loc_828294AC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828294b8
	goto loc_828294B8;
loc_828294B4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_828294B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828294f8
	if (ctx.cr6.eq) goto loc_828294F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828294f8
	if (ctx.cr6.eq) goto loc_828294F8;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828294f8
	if (ctx.cr6.eq) goto loc_828294F8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828294f8
	if (ctx.cr6.eq) goto loc_828294F8;
	// lhz r29,2496(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2496);
	// b 0x828294fc
	goto loc_828294FC;
loc_828294F8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_828294FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x828295e8
	if (!ctx.cr6.gt) goto loc_828295E8;
	// li r7,448
	ctx.r7.s64 = 448;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82829510:
	// lwz r8,11700(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11700);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82829544
	if (ctx.cr6.eq) goto loc_82829544;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8282953c
	if (ctx.cr6.eq) goto loc_8282953C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82829534
	if (ctx.cr6.eq) goto loc_82829534;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82829548
	goto loc_82829548;
loc_82829534:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82829548
	goto loc_82829548;
loc_8282953C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82829548
	goto loc_82829548;
loc_82829544:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82829548:
	// bl 0x82802450
	ctx.lr = 0x8282954C;
	sub_82802450(ctx, base);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x828295d8
	if (!ctx.cr6.eq) goto loc_828295D8;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82829584
	if (ctx.cr6.eq) goto loc_82829584;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8282957c
	if (ctx.cr6.eq) goto loc_8282957C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82829574
	if (ctx.cr6.eq) goto loc_82829574;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82829588
	goto loc_82829588;
loc_82829574:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82829588
	goto loc_82829588;
loc_8282957C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82829588
	goto loc_82829588;
loc_82829584:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82829588:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828295d8
	if (ctx.cr6.eq) goto loc_828295D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828295d8
	if (ctx.cr6.eq) goto loc_828295D8;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828295d8
	if (ctx.cr6.eq) goto loc_828295D8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828295d8
	if (ctx.cr6.eq) goto loc_828295D8;
	// lhz r10,2496(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2496);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x828295d8
	if (!ctx.cr6.lt) goto loc_828295D8;
	// stwx r30,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_828295D8:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r4,r29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82829510
	if (ctx.cr6.lt) goto loc_82829510;
loc_828295E8:
	// lwz r11,11700(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82829614
	if (ctx.cr6.eq) goto loc_82829614;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282960c
	if (ctx.cr6.eq) goto loc_8282960C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82829618
	if (!ctx.cr6.eq) goto loc_82829618;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82829618
	goto loc_82829618;
loc_8282960C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82829618
	goto loc_82829618;
loc_82829614:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82829618:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82829654
	if (ctx.cr6.eq) goto loc_82829654;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82829654
	if (ctx.cr6.eq) goto loc_82829654;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82829654
	if (ctx.cr6.eq) goto loc_82829654;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82829654
	if (ctx.cr6.eq) goto loc_82829654;
	// bl 0x8279d910
	ctx.lr = 0x82829654;
	sub_8279D910(ctx, base);
loc_82829654:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282965C"))) PPC_WEAK_FUNC(sub_8282965C);
PPC_FUNC_IMPL(__imp__sub_8282965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829660"))) PPC_WEAK_FUNC(sub_82829660);
PPC_FUNC_IMPL(__imp__sub_82829660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,10364(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10364);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829678"))) PPC_WEAK_FUNC(sub_82829678);
PPC_FUNC_IMPL(__imp__sub_82829678) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x828296a8
	if (ctx.cr6.eq) goto loc_828296A8;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8282969c
	if (ctx.cr6.eq) goto loc_8282969C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828296a8
	if (ctx.cr6.eq) goto loc_828296A8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282969C:
	// li r11,174
	ctx.r11.s64 = 174;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828296A8:
	// li r11,173
	ctx.r11.s64 = 173;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828296B4"))) PPC_WEAK_FUNC(sub_828296B4);
PPC_FUNC_IMPL(__imp__sub_828296B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828296B8"))) PPC_WEAK_FUNC(sub_828296B8);
PPC_FUNC_IMPL(__imp__sub_828296B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// addi r10,r4,5714
	ctx.r10.s64 = ctx.r4.s64 + 5714;
	// addi r9,r4,5417
	ctx.r9.s64 = ctx.r4.s64 + 5417;
	// addi r5,r4,5912
	ctx.r5.s64 = ctx.r4.s64 + 5912;
	// addi r8,r4,3740
	ctx.r8.s64 = ctx.r4.s64 + 3740;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r4,3761
	ctx.r11.s64 = ctx.r4.s64 + 3761;
	// addi r7,r4,4085
	ctx.r7.s64 = ctx.r4.s64 + 4085;
	// lfs f0,29744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r5,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u32);
	// stfsx f0,r3,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, temp.u32);
	// addi r9,r6,12776
	ctx.r9.s64 = ctx.r6.s64 + 12776;
	// stwx r5,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// stfsx f0,r7,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
loc_8282972C:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x8282972c
	if (ctx.cr6.lt) goto loc_8282972C;
	// addi r9,r6,13548
	ctx.r9.s64 = ctx.r6.s64 + 13548;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82829758:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r4,r8
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x82829758
	if (ctx.cr6.lt) goto loc_82829758;
	// addi r9,r6,15124
	ctx.r9.s64 = ctx.r6.s64 + 15124;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82829784:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r3,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, temp.u32);
	// blt cr6,0x82829784
	if (ctx.cr6.lt) goto loc_82829784;
	// addi r10,r4,4369
	ctx.r10.s64 = ctx.r4.s64 + 4369;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r6,22048
	ctx.r9.s64 = ctx.r6.s64 + 22048;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r7,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r7.u32);
loc_828297C0:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x828297c0
	if (ctx.cr6.lt) goto loc_828297C0;
	// addi r10,r4,3090
	ctx.r10.s64 = ctx.r4.s64 + 3090;
	// addi r9,r6,14212
	ctx.r9.s64 = ctx.r6.s64 + 14212;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u32);
loc_828297F8:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r4,r8
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x828297f8
	if (ctx.cr6.lt) goto loc_828297F8;
	// addi r9,r6,18960
	ctx.r9.s64 = ctx.r6.s64 + 18960;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82829824:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r4,r8
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x82829824
	if (ctx.cr6.lt) goto loc_82829824;
	// addi r10,r4,4653
	ctx.r10.s64 = ctx.r4.s64 + 4653;
	// addi r9,r6,19608
	ctx.r9.s64 = ctx.r6.s64 + 19608;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u32);
loc_8282985C:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x8282985c
	if (ctx.cr6.lt) goto loc_8282985C;
	// addi r9,r6,17556
	ctx.r9.s64 = ctx.r6.s64 + 17556;
	// stw r11,21788(r6)
	PPC_STORE_U32(ctx.r6.u32 + 21788, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8282988C:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r4,r8
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x8282988c
	if (ctx.cr6.lt) goto loc_8282988C;
	// addi r9,r6,19856
	ctx.r9.s64 = ctx.r6.s64 + 19856;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828298B8:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x828298b8
	if (ctx.cr6.lt) goto loc_828298B8;
	// addi r9,r6,14472
	ctx.r9.s64 = ctx.r6.s64 + 14472;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828298E4:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x828298e4
	if (ctx.cr6.lt) goto loc_828298E4;
	// addi r9,r6,16420
	ctx.r9.s64 = ctx.r6.s64 + 16420;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82829910:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x82829910
	if (ctx.cr6.lt) goto loc_82829910;
	// addi r9,r6,16668
	ctx.r9.s64 = ctx.r6.s64 + 16668;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8282993C:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x8282993c
	if (ctx.cr6.lt) goto loc_8282993C;
	// addi r10,r4,5829
	ctx.r10.s64 = ctx.r4.s64 + 5829;
	// addi r9,r4,4250
	ctx.r9.s64 = ctx.r4.s64 + 4250;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r6,23396
	ctx.r9.s64 = ctx.r6.s64 + 23396;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r5,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r5.u32);
loc_82829980:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x82829980
	if (ctx.cr6.lt) goto loc_82829980;
	// addi r9,r6,18044
	ctx.r9.s64 = ctx.r6.s64 + 18044;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828299AC:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x828299ac
	if (ctx.cr6.lt) goto loc_828299AC;
	// addi r9,r6,13796
	ctx.r9.s64 = ctx.r6.s64 + 13796;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828299D8:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x828299d8
	if (ctx.cr6.lt) goto loc_828299D8;
	// addi r9,r6,22296
	ctx.r9.s64 = ctx.r6.s64 + 22296;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82829A04:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x82829a04
	if (ctx.cr6.lt) goto loc_82829A04;
	// addi r9,r6,20204
	ctx.r9.s64 = ctx.r6.s64 + 20204;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82829A30:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x82829a30
	if (ctx.cr6.lt) goto loc_82829A30;
	// addi r9,r6,15452
	ctx.r9.s64 = ctx.r6.s64 + 15452;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82829A5C:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x82829a5c
	if (ctx.cr6.lt) goto loc_82829A5C;
	// addi r10,r4,4674
	ctx.r10.s64 = ctx.r4.s64 + 4674;
	// addi r9,r6,12440
	ctx.r9.s64 = ctx.r6.s64 + 12440;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r7,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r7.u32);
loc_82829A94:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x82829a94
	if (ctx.cr6.lt) goto loc_82829A94;
	// addi r10,r4,4695
	ctx.r10.s64 = ctx.r4.s64 + 4695;
	// addi r9,r6,21244
	ctx.r9.s64 = ctx.r6.s64 + 21244;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82829ACC:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x82829acc
	if (ctx.cr6.lt) goto loc_82829ACC;
	// addi r9,r6,13104
	ctx.r9.s64 = ctx.r6.s64 + 13104;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82829AF8:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// blt cr6,0x82829af8
	if (ctx.cr6.lt) goto loc_82829AF8;
	// addi r9,r6,21412
	ctx.r9.s64 = ctx.r6.s64 + 21412;
	// addi r8,r6,22936
	ctx.r8.s64 = ctx.r6.s64 + 22936;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82829B28:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r3,r7,2
	ctx.r3.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r7,r3,r4
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// blt cr6,0x82829b28
	if (ctx.cr6.lt) goto loc_82829B28;
	// addi r10,r4,4271
	ctx.r10.s64 = ctx.r4.s64 + 4271;
	// addi r9,r6,17164
	ctx.r9.s64 = ctx.r6.s64 + 17164;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r6,21800
	ctx.r8.s64 = ctx.r6.s64 + 21800;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r11,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82829B7C:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r3,r7,2
	ctx.r3.s64 = ctx.r7.s64 + 2;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r7,r3,r4
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r5.u32);
	// blt cr6,0x82829b7c
	if (ctx.cr6.lt) goto loc_82829B7C;
	// addi r10,r4,3367
	ctx.r10.s64 = ctx.r4.s64 + 3367;
	// addi r9,r4,5279
	ctx.r9.s64 = ctx.r4.s64 + 5279;
	// addi r8,r4,3986
	ctx.r8.s64 = ctx.r4.s64 + 3986;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r11,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829BE8"))) PPC_WEAK_FUNC(sub_82829BE8);
PPC_FUNC_IMPL(__imp__sub_82829BE8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82829c44
	if (ctx.cr6.eq) goto loc_82829C44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82829c34
	if (ctx.cr6.eq) goto loc_82829C34;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82829c4c
	if (!ctx.cr6.eq) goto loc_82829C4C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82829c4c
	goto loc_82829C4C;
loc_82829C34:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82829c4c
	goto loc_82829C4C;
loc_82829C44:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82829C4C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828023d0
	ctx.lr = 0x82829C54;
	sub_828023D0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82829cac
	if (ctx.cr6.eq) goto loc_82829CAC;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82829ca4
	if (ctx.cr6.eq) goto loc_82829CA4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82829c7c
	if (!ctx.cr6.eq) goto loc_82829C7C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82829c9c
	if (ctx.cr6.eq) goto loc_82829C9C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// b 0x82829c88
	goto loc_82829C88;
loc_82829C7C:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82829c9c
	if (ctx.cr6.eq) goto loc_82829C9C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
loc_82829C88:
	// beq cr6,0x82829c94
	if (ctx.cr6.eq) goto loc_82829C94;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82829cb0
	goto loc_82829CB0;
loc_82829C94:
	// li r11,166
	ctx.r11.s64 = 166;
	// b 0x82829cb0
	goto loc_82829CB0;
loc_82829C9C:
	// li r11,167
	ctx.r11.s64 = 167;
	// b 0x82829cb0
	goto loc_82829CB0;
loc_82829CA4:
	// li r11,165
	ctx.r11.s64 = 165;
	// b 0x82829cb0
	goto loc_82829CB0;
loc_82829CAC:
	// li r11,164
	ctx.r11.s64 = 164;
loc_82829CB0:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82829CCC"))) PPC_WEAK_FUNC(sub_82829CCC);
PPC_FUNC_IMPL(__imp__sub_82829CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829CD0"))) PPC_WEAK_FUNC(sub_82829CD0);
PPC_FUNC_IMPL(__imp__sub_82829CD0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82829d2c
	if (ctx.cr6.eq) goto loc_82829D2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82829d1c
	if (ctx.cr6.eq) goto loc_82829D1C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82829d34
	if (!ctx.cr6.eq) goto loc_82829D34;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82829d34
	goto loc_82829D34;
loc_82829D1C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82829d34
	goto loc_82829D34;
loc_82829D2C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82829D34:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828023d0
	ctx.lr = 0x82829D3C;
	sub_828023D0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82829d94
	if (ctx.cr6.eq) goto loc_82829D94;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82829d8c
	if (ctx.cr6.eq) goto loc_82829D8C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82829d64
	if (!ctx.cr6.eq) goto loc_82829D64;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82829d84
	if (ctx.cr6.eq) goto loc_82829D84;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// b 0x82829d70
	goto loc_82829D70;
loc_82829D64:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82829d84
	if (ctx.cr6.eq) goto loc_82829D84;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
loc_82829D70:
	// beq cr6,0x82829d7c
	if (ctx.cr6.eq) goto loc_82829D7C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82829d98
	goto loc_82829D98;
loc_82829D7C:
	// li r11,170
	ctx.r11.s64 = 170;
	// b 0x82829d98
	goto loc_82829D98;
loc_82829D84:
	// li r11,171
	ctx.r11.s64 = 171;
	// b 0x82829d98
	goto loc_82829D98;
loc_82829D8C:
	// li r11,169
	ctx.r11.s64 = 169;
	// b 0x82829d98
	goto loc_82829D98;
loc_82829D94:
	// li r11,168
	ctx.r11.s64 = 168;
loc_82829D98:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82829DB4"))) PPC_WEAK_FUNC(sub_82829DB4);
PPC_FUNC_IMPL(__imp__sub_82829DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829DB8"))) PPC_WEAK_FUNC(sub_82829DB8);
PPC_FUNC_IMPL(__imp__sub_82829DB8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82829e14
	if (ctx.cr6.eq) goto loc_82829E14;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82829e04
	if (ctx.cr6.eq) goto loc_82829E04;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82829e1c
	if (!ctx.cr6.eq) goto loc_82829E1C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82829e1c
	goto loc_82829E1C;
loc_82829E04:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82829e1c
	goto loc_82829E1C;
loc_82829E14:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82829E1C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828023d0
	ctx.lr = 0x82829E24;
	sub_828023D0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82829e7c
	if (ctx.cr6.eq) goto loc_82829E7C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82829e74
	if (ctx.cr6.eq) goto loc_82829E74;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82829e4c
	if (!ctx.cr6.eq) goto loc_82829E4C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82829e6c
	if (ctx.cr6.eq) goto loc_82829E6C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// b 0x82829e58
	goto loc_82829E58;
loc_82829E4C:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82829e6c
	if (ctx.cr6.eq) goto loc_82829E6C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
loc_82829E58:
	// beq cr6,0x82829e64
	if (ctx.cr6.eq) goto loc_82829E64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82829e80
	goto loc_82829E80;
loc_82829E64:
	// li r11,188
	ctx.r11.s64 = 188;
	// b 0x82829e80
	goto loc_82829E80;
loc_82829E6C:
	// li r11,189
	ctx.r11.s64 = 189;
	// b 0x82829e80
	goto loc_82829E80;
loc_82829E74:
	// li r11,187
	ctx.r11.s64 = 187;
	// b 0x82829e80
	goto loc_82829E80;
loc_82829E7C:
	// li r11,186
	ctx.r11.s64 = 186;
loc_82829E80:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82829E9C"))) PPC_WEAK_FUNC(sub_82829E9C);
PPC_FUNC_IMPL(__imp__sub_82829E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829EA0"))) PPC_WEAK_FUNC(sub_82829EA0);
PPC_FUNC_IMPL(__imp__sub_82829EA0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,48
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 48, ctx.xer);
	// blt cr6,0x82829eb0
	if (ctx.cr6.lt) goto loc_82829EB0;
	// cmpwi cr6,r5,57
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 57, ctx.xer);
	// ble cr6,0x82829ebc
	if (!ctx.cr6.gt) goto loc_82829EBC;
loc_82829EB0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82829EBC:
	// addi r11,r5,-48
	ctx.r11.s64 = ctx.r5.s64 + -48;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829EC8"))) PPC_WEAK_FUNC(sub_82829EC8);
PPC_FUNC_IMPL(__imp__sub_82829EC8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,48
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 48, ctx.xer);
	// blt cr6,0x82829ed8
	if (ctx.cr6.lt) goto loc_82829ED8;
	// cmpwi cr6,r5,57
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 57, ctx.xer);
	// ble cr6,0x82829ee4
	if (!ctx.cr6.gt) goto loc_82829EE4;
loc_82829ED8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82829EE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829EF0"))) PPC_WEAK_FUNC(sub_82829EF0);
PPC_FUNC_IMPL(__imp__sub_82829EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,27476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,21792(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 21792, temp.u32);
	// stw r9,12352(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12352, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829F14"))) PPC_WEAK_FUNC(sub_82829F14);
PPC_FUNC_IMPL(__imp__sub_82829F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829F18"))) PPC_WEAK_FUNC(sub_82829F18);
PPC_FUNC_IMPL(__imp__sub_82829F18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,97
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 97, ctx.xer);
	// blt cr6,0x82829f28
	if (ctx.cr6.lt) goto loc_82829F28;
	// cmpwi cr6,r5,122
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 122, ctx.xer);
	// ble cr6,0x82829f34
	if (!ctx.cr6.gt) goto loc_82829F34;
loc_82829F28:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82829F34:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829F40"))) PPC_WEAK_FUNC(sub_82829F40);
PPC_FUNC_IMPL(__imp__sub_82829F40) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82829f68
	if (ctx.cr6.eq) goto loc_82829F68;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82829f5c
	if (ctx.cr6.eq) goto loc_82829F5C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82829F5C:
	// li r11,154
	ctx.r11.s64 = 154;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82829F68:
	// li r11,153
	ctx.r11.s64 = 153;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829F74"))) PPC_WEAK_FUNC(sub_82829F74);
PPC_FUNC_IMPL(__imp__sub_82829F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829F78"))) PPC_WEAK_FUNC(sub_82829F78);
PPC_FUNC_IMPL(__imp__sub_82829F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,21792(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21792);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829F90"))) PPC_WEAK_FUNC(sub_82829F90);
PPC_FUNC_IMPL(__imp__sub_82829F90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82829F94"))) PPC_WEAK_FUNC(sub_82829F94);
PPC_FUNC_IMPL(__imp__sub_82829F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82829F98"))) PPC_WEAK_FUNC(sub_82829F98);
PPC_FUNC_IMPL(__imp__sub_82829F98) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8282a038
	if (ctx.cr6.eq) goto loc_8282A038;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8282a02c
	if (ctx.cr6.eq) goto loc_8282A02C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8282a020
	if (ctx.cr6.eq) goto loc_8282A020;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8282a014
	if (ctx.cr6.eq) goto loc_8282A014;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8282a008
	if (ctx.cr6.eq) goto loc_8282A008;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82829ffc
	if (ctx.cr6.eq) goto loc_82829FFC;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x82829ff0
	if (ctx.cr6.eq) goto loc_82829FF0;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x82829fe4
	if (ctx.cr6.eq) goto loc_82829FE4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82829FE4:
	// li r11,162
	ctx.r11.s64 = 162;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82829FF0:
	// li r11,161
	ctx.r11.s64 = 161;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82829FFC:
	// li r11,160
	ctx.r11.s64 = 160;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A008:
	// li r11,159
	ctx.r11.s64 = 159;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A014:
	// li r11,158
	ctx.r11.s64 = 158;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A020:
	// li r11,157
	ctx.r11.s64 = 157;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A02C:
	// li r11,156
	ctx.r11.s64 = 156;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A038:
	// li r11,155
	ctx.r11.s64 = 155;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A044"))) PPC_WEAK_FUNC(sub_8282A044);
PPC_FUNC_IMPL(__imp__sub_8282A044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282A048"))) PPC_WEAK_FUNC(sub_8282A048);
PPC_FUNC_IMPL(__imp__sub_8282A048) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8282a084
	if (ctx.cr6.eq) goto loc_8282A084;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8282a078
	if (ctx.cr6.eq) goto loc_8282A078;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8282a06c
	if (ctx.cr6.eq) goto loc_8282A06C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A06C:
	// li r11,163
	ctx.r11.s64 = 163;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A078:
	// li r11,152
	ctx.r11.s64 = 152;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A084:
	// li r11,151
	ctx.r11.s64 = 151;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A090"))) PPC_WEAK_FUNC(sub_8282A090);
PPC_FUNC_IMPL(__imp__sub_8282A090) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8282a104
	if (!ctx.cr6.eq) goto loc_8282A104;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,11700(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282a0e8
	if (ctx.cr6.eq) goto loc_8282A0E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282a0d8
	if (ctx.cr6.eq) goto loc_8282A0D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282a0f0
	if (!ctx.cr6.eq) goto loc_8282A0F0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282a0f0
	goto loc_8282A0F0;
loc_8282A0D8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8282a0f0
	goto loc_8282A0F0;
loc_8282A0E8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8282A0F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82802678
	ctx.lr = 0x8282A0FC;
	sub_82802678(ctx, base);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// bne cr6,0x8282a11c
	if (!ctx.cr6.eq) goto loc_8282A11C;
loc_8282A104:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8282A11C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A134"))) PPC_WEAK_FUNC(sub_8282A134);
PPC_FUNC_IMPL(__imp__sub_8282A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282A138"))) PPC_WEAK_FUNC(sub_8282A138);
PPC_FUNC_IMPL(__imp__sub_8282A138) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,12348(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12348);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8282a1a4
	if (ctx.cr6.eq) goto loc_8282A1A4;
	// lwz r9,14952(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14952);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8282a190
	if (ctx.cr6.eq) goto loc_8282A190;
	// lwz r11,14864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14864);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// bne cr6,0x8282a178
	if (!ctx.cr6.eq) goto loc_8282A178;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8282a188
	if (ctx.cr6.lt) goto loc_8282A188;
loc_8282A178:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8282a19c
	if (!ctx.cr6.eq) goto loc_8282A19C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282a19c
	if (!ctx.cr6.gt) goto loc_8282A19C;
loc_8282A188:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8282a19c
	goto loc_8282A19C;
loc_8282A190:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8282a19c
	if (ctx.cr6.eq) goto loc_8282A19C;
	// li r11,-3
	ctx.r11.s64 = -3;
loc_8282A19C:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8282a1c8
	if (!ctx.cr6.eq) goto loc_8282A1C8;
loc_8282A1A4:
	// lwz r10,14952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14952);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8282a1c4
	if (ctx.cr6.eq) goto loc_8282A1C4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8282a1c8
	if (!ctx.cr6.eq) goto loc_8282A1C8;
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A1C4:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8282A1C8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A1D0"))) PPC_WEAK_FUNC(sub_8282A1D0);
PPC_FUNC_IMPL(__imp__sub_8282A1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8282a208
	if (ctx.cr6.eq) goto loc_8282A208;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,20200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20200, ctx.r10.u32);
	// stw r10,12352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12352, ctx.r10.u32);
	// lfs f0,29752(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29752);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stfs f0,21792(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 21792, temp.u32);
	// blr 
	return;
loc_8282A208:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A214"))) PPC_WEAK_FUNC(sub_8282A214);
PPC_FUNC_IMPL(__imp__sub_8282A214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282A218"))) PPC_WEAK_FUNC(sub_8282A218);
PPC_FUNC_IMPL(__imp__sub_8282A218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,10352(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10352);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282a264
	if (!ctx.cr6.eq) goto loc_8282A264;
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8282a258
	if (ctx.cr6.eq) goto loc_8282A258;
	// lwz r10,10240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10240);
	// addi r11,r11,10236
	ctx.r11.s64 = ctx.r11.s64 + 10236;
	// addi r10,r10,29
	ctx.r10.s64 = ctx.r10.s64 + 29;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282a264
	if (!ctx.cr6.eq) goto loc_8282A264;
loc_8282A258:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A264:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A270"))) PPC_WEAK_FUNC(sub_8282A270);
PPC_FUNC_IMPL(__imp__sub_8282A270) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8282a298
	if (ctx.cr6.eq) goto loc_8282A298;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8282a28c
	if (ctx.cr6.eq) goto loc_8282A28C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A28C:
	// li r11,-3
	ctx.r11.s64 = -3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A298:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A2A4"))) PPC_WEAK_FUNC(sub_8282A2A4);
PPC_FUNC_IMPL(__imp__sub_8282A2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282A2A8"))) PPC_WEAK_FUNC(sub_8282A2A8);
PPC_FUNC_IMPL(__imp__sub_8282A2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,22844(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22844);
	// addi r8,r11,5714
	ctx.r8.s64 = ctx.r11.s64 + 5714;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A2D4"))) PPC_WEAK_FUNC(sub_8282A2D4);
PPC_FUNC_IMPL(__imp__sub_8282A2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282A2D8"))) PPC_WEAK_FUNC(sub_8282A2D8);
PPC_FUNC_IMPL(__imp__sub_8282A2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8282A2E0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// addi r11,r11,-4012
	ctx.r11.s64 = ctx.r11.s64 + -4012;
	// lfs f31,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,48(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x8282a334
	if (!ctx.cr6.gt) goto loc_8282A334;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x8282a338
	goto loc_8282A338;
loc_8282A334:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_8282A338:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282a378
	if (ctx.cr6.eq) goto loc_8282A378;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282a374
	if (ctx.cr6.eq) goto loc_8282A374;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282a368
	if (ctx.cr6.eq) goto loc_8282A368;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f31,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8282a378
	goto loc_8282A378;
loc_8282A368:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f31,-29748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29748);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8282a378
	goto loc_8282A378;
loc_8282A374:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_8282A378:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// lwz r11,17412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282a3ac
	if (ctx.cr6.eq) goto loc_8282A3AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282a3a4
	if (ctx.cr6.eq) goto loc_8282A3A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282a3b0
	if (!ctx.cr6.eq) goto loc_8282A3B0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8282a3b0
	goto loc_8282A3B0;
loc_8282A3A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8282a3b0
	goto loc_8282A3B0;
loc_8282A3AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8282A3B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x8282A3BC;
	sub_82804410(ctx, base);
	// lwz r3,11700(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11700);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8282a3e8
	if (ctx.cr6.eq) goto loc_8282A3E8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282a3e0
	if (ctx.cr6.eq) goto loc_8282A3E0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8282a3ec
	if (!ctx.cr6.eq) goto loc_8282A3EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8282a3ec
	goto loc_8282A3EC;
loc_8282A3E0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8282a3ec
	goto loc_8282A3EC;
loc_8282A3E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8282A3EC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x8282A3F4;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82124928
	ctx.lr = 0x8282A430;
	sub_82124928(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8282a488
	if (!ctx.cr6.gt) goto loc_8282A488;
	// lwz r10,17412(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17412);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282a478
	if (ctx.cr6.eq) goto loc_8282A478;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282a470
	if (ctx.cr6.eq) goto loc_8282A470;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282a47c
	if (!ctx.cr6.eq) goto loc_8282A47C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8282a47c
	goto loc_8282A47C;
loc_8282A470:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8282a47c
	goto loc_8282A47C;
loc_8282A478:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8282A47C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8282a4d8
	if (!ctx.cr6.eq) goto loc_8282A4D8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
loc_8282A488:
	// bge cr6,0x8282a4e4
	if (!ctx.cr6.lt) goto loc_8282A4E4;
	// lwz r10,17412(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17412);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282a4bc
	if (ctx.cr6.eq) goto loc_8282A4BC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282a4b8
	if (ctx.cr6.eq) goto loc_8282A4B8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8282a4b0
	if (ctx.cr6.eq) goto loc_8282A4B0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8282a4bc
	goto loc_8282A4BC;
loc_8282A4B0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8282a4bc
	goto loc_8282A4BC;
loc_8282A4B8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8282A4BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282a4e4
	if (ctx.cr6.eq) goto loc_8282A4E4;
	// fneg f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// b 0x8282a4e4
	goto loc_8282A4E4;
loc_8282A4D8:
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_8282A4E4:
	// stfs f31,6396(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 6396, temp.u32);
	// stfs f0,2864(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 2864, temp.u32);
	// stfs f13,2868(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 2868, temp.u32);
	// stfs f12,2872(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 2872, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282A500"))) PPC_WEAK_FUNC(sub_8282A500);
PPC_FUNC_IMPL(__imp__sub_8282A500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,12352(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12352);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A518"))) PPC_WEAK_FUNC(sub_8282A518);
PPC_FUNC_IMPL(__imp__sub_8282A518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8282A520;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lfs f31,29744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// lfs f13,29760(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fabs f29,f30
	ctx.f29.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lwz r29,48(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,17412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282a5a4
	if (ctx.cr6.eq) goto loc_8282A5A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282a59c
	if (ctx.cr6.eq) goto loc_8282A59C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8282a594
	if (ctx.cr6.eq) goto loc_8282A594;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8282a5a8
	goto loc_8282A5A8;
loc_8282A594:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8282a5a8
	goto loc_8282A5A8;
loc_8282A59C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8282a5a8
	goto loc_8282A5A8;
loc_8282A5A4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8282A5A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8282a66c
	if (ctx.cr6.eq) goto loc_8282A66C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282a5d8
	if (ctx.cr6.eq) goto loc_8282A5D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282a5d0
	if (ctx.cr6.eq) goto loc_8282A5D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282a5dc
	if (!ctx.cr6.eq) goto loc_8282A5DC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8282a5dc
	goto loc_8282A5DC;
loc_8282A5D0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8282a5dc
	goto loc_8282A5DC;
loc_8282A5D8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8282A5DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x8282A5E8;
	sub_82804410(ctx, base);
	// lwz r11,11700(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11700);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282a614
	if (ctx.cr6.eq) goto loc_8282A614;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282a60c
	if (ctx.cr6.eq) goto loc_8282A60C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282a618
	if (!ctx.cr6.eq) goto loc_8282A618;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8282a618
	goto loc_8282A618;
loc_8282A60C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8282a618
	goto loc_8282A618;
loc_8282A614:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8282A618:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x8282A624;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82124928
	ctx.lr = 0x8282A660;
	sub_82124928(ctx, base);
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
loc_8282A66C:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x8282a688
	if (!ctx.cr6.lt) goto loc_8282A688;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f11,27476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_8282A688:
	// stfs f29,6396(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6396, temp.u32);
	// stfs f0,2864(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 2864, temp.u32);
	// stfs f13,2868(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 2868, temp.u32);
	// stfs f12,2872(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 2872, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282A6AC"))) PPC_WEAK_FUNC(sub_8282A6AC);
PPC_FUNC_IMPL(__imp__sub_8282A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282A6B0"))) PPC_WEAK_FUNC(sub_8282A6B0);
PPC_FUNC_IMPL(__imp__sub_8282A6B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,12348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12348);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8282a700
	if (ctx.cr6.eq) goto loc_8282A700;
	// lwz r9,14952(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14952);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8282a6f0
	if (ctx.cr6.eq) goto loc_8282A6F0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282a700
	if (!ctx.cr6.eq) goto loc_8282A700;
	// lwz r9,14864(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14864);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8282a700
	if (ctx.cr6.gt) goto loc_8282A700;
	// b 0x8282a6fc
	goto loc_8282A6FC;
loc_8282A6F0:
	// lwz r9,14864(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14864);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8282a700
	if (ctx.cr6.lt) goto loc_8282A700;
loc_8282A6FC:
	// stw r8,14952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14952, ctx.r8.u32);
loc_8282A700:
	// lwz r10,14952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14952);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8282a760
	if (ctx.cr6.eq) goto loc_8282A760;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8282a748
	if (ctx.cr6.eq) goto loc_8282A748;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8282a730
	if (ctx.cr6.eq) goto loc_8282A730;
	// lwz r11,17432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17432);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8282a760
	if (ctx.cr6.eq) goto loc_8282A760;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8282A730:
	// lwz r11,14864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282a760
	if (!ctx.cr6.gt) goto loc_8282A760;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A748:
	// lwz r11,14864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14864);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8282a760
	if (!ctx.cr6.lt) goto loc_8282A760;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A760:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A768"))) PPC_WEAK_FUNC(sub_8282A768);
PPC_FUNC_IMPL(__imp__sub_8282A768) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8282a7cc
	if (ctx.cr6.eq) goto loc_8282A7CC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8282a7c4
	if (ctx.cr6.eq) goto loc_8282A7C4;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8282a7c4
	if (ctx.cr6.eq) goto loc_8282A7C4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8282a7c4
	if (ctx.cr6.eq) goto loc_8282A7C4;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8282a7b8
	if (ctx.cr6.eq) goto loc_8282A7B8;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8282a7ac
	if (ctx.cr6.eq) goto loc_8282A7AC;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8282a7cc
	if (ctx.cr6.eq) goto loc_8282A7CC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A7AC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A7B8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A7C4:
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8282A7CC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A7D8"))) PPC_WEAK_FUNC(sub_8282A7D8);
PPC_FUNC_IMPL(__imp__sub_8282A7D8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8282a83c
	if (ctx.cr6.eq) goto loc_8282A83C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8282a834
	if (ctx.cr6.eq) goto loc_8282A834;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8282a834
	if (ctx.cr6.eq) goto loc_8282A834;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8282a834
	if (ctx.cr6.eq) goto loc_8282A834;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8282a828
	if (ctx.cr6.eq) goto loc_8282A828;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8282a81c
	if (ctx.cr6.eq) goto loc_8282A81C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8282a83c
	if (ctx.cr6.eq) goto loc_8282A83C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A81C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A828:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A834:
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8282A83C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A848"))) PPC_WEAK_FUNC(sub_8282A848);
PPC_FUNC_IMPL(__imp__sub_8282A848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,78
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 78, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x8282a9b8
	if (ctx.cr6.eq) goto loc_8282A9B8;
	// cmpwi cr6,r5,66
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 66, ctx.xer);
	// beq cr6,0x8282a98c
	if (ctx.cr6.eq) goto loc_8282A98C;
	// cmpwi cr6,r5,82
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 82, ctx.xer);
	// beq cr6,0x8282a95c
	if (ctx.cr6.eq) goto loc_8282A95C;
	// cmpwi cr6,r5,84
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 84, ctx.xer);
	// beq cr6,0x8282a92c
	if (ctx.cr6.eq) goto loc_8282A92C;
	// cmpwi cr6,r5,48
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 48, ctx.xer);
	// blt cr6,0x8282a888
	if (ctx.cr6.lt) goto loc_8282A888;
	// cmpwi cr6,r5,57
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 57, ctx.xer);
	// ble cr6,0x8282a8b4
	if (!ctx.cr6.gt) goto loc_8282A8B4;
loc_8282A888:
	// cmpwi cr6,r5,42
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 42, ctx.xer);
	// beq cr6,0x8282a89c
	if (ctx.cr6.eq) goto loc_8282A89C;
loc_8282A890:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282A89C:
	// lwz r9,22844(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4369
	ctx.r9.s64 = ctx.r9.s64 + 4369;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
loc_8282A8B4:
	// lwz r9,12764(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12764);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8282a890
	if (ctx.cr6.eq) goto loc_8282A890;
	// addi r8,r5,-48
	ctx.r8.s64 = ctx.r5.s64 + -48;
	// lwz r7,22844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// lwz r6,15128(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15128);
	// lfs f13,2568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2568);
	ctx.f13.f64 = double(temp.f32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mullw r8,r6,r7
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,15124
	ctx.r11.s64 = ctx.r11.s64 + 15124;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// lis r5,-32244
	ctx.r5.s64 = -2113142784;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f0,-4476(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f7,f10,f0,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfsx f7,r4,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
loc_8282A92C:
	// lwz r8,12780(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12780);
	// addi r9,r11,12776
	ctx.r9.s64 = ctx.r11.s64 + 12776;
	// lwz r7,22844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r4,r10,5
	ctx.r4.s64 = ctx.r10.s64 + 5;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r6.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// blr 
	return;
loc_8282A95C:
	// lwz r8,12780(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12780);
	// addi r9,r11,12776
	ctx.r9.s64 = ctx.r11.s64 + 12776;
	// lwz r7,22844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r6.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// blr 
	return;
loc_8282A98C:
	// lwz r7,12780(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12780);
	// addi r9,r11,12776
	ctx.r9.s64 = ctx.r11.s64 + 12776;
	// lwz r6,22844(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r8.u32);
	// stw r8,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r8.u32);
	// blr 
	return;
loc_8282A9B8:
	// lwz r8,12780(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12780);
	// addi r9,r11,12776
	ctx.r9.s64 = ctx.r11.s64 + 12776;
	// lwz r7,22844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r5,r8,2
	ctx.r5.s64 = ctx.r8.s64 + 2;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r6.u32);
	// stw r10,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A9E4"))) PPC_WEAK_FUNC(sub_8282A9E4);
PPC_FUNC_IMPL(__imp__sub_8282A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282A9E8"))) PPC_WEAK_FUNC(sub_8282A9E8);
PPC_FUNC_IMPL(__imp__sub_8282A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,87
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 87, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x8282aaf4
	if (ctx.cr6.eq) goto loc_8282AAF4;
	// cmpwi cr6,r5,68
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 68, ctx.xer);
	// beq cr6,0x8282aac8
	if (ctx.cr6.eq) goto loc_8282AAC8;
	// cmpwi cr6,r5,74
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 74, ctx.xer);
	// beq cr6,0x8282aa98
	if (ctx.cr6.eq) goto loc_8282AA98;
	// cmpwi cr6,r5,48
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 48, ctx.xer);
	// blt cr6,0x8282aa20
	if (ctx.cr6.lt) goto loc_8282AA20;
	// cmpwi cr6,r5,57
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 57, ctx.xer);
	// ble cr6,0x8282aa4c
	if (!ctx.cr6.gt) goto loc_8282AA4C;
loc_8282AA20:
	// cmpwi cr6,r5,42
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 42, ctx.xer);
	// beq cr6,0x8282aa34
	if (ctx.cr6.eq) goto loc_8282AA34;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282AA34:
	// lwz r9,22844(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4674
	ctx.r9.s64 = ctx.r9.s64 + 4674;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
loc_8282AA4C:
	// addi r9,r5,-48
	ctx.r9.s64 = ctx.r5.s64 + -48;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lfs f13,2568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2568);
	ctx.f13.f64 = double(temp.f32);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r5,r8,5912
	ctx.r5.s64 = ctx.r8.s64 + 5912;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f0,-4476(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f7,f13,f9,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfsx f7,r9,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// stw r10,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r10.u32);
	// blr 
	return;
loc_8282AA98:
	// lwz r8,23400(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23400);
	// addi r9,r11,23396
	ctx.r9.s64 = ctx.r11.s64 + 23396;
	// lwz r7,22844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r6.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// blr 
	return;
loc_8282AAC8:
	// lwz r7,23400(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23400);
	// addi r9,r11,23396
	ctx.r9.s64 = ctx.r11.s64 + 23396;
	// lwz r6,22844(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r8.u32);
	// stw r8,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r8.u32);
	// blr 
	return;
loc_8282AAF4:
	// lwz r8,23400(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23400);
	// addi r9,r11,23396
	ctx.r9.s64 = ctx.r11.s64 + 23396;
	// lwz r7,22844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r5,r8,2
	ctx.r5.s64 = ctx.r8.s64 + 2;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r6.u32);
	// stw r10,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282AB20"))) PPC_WEAK_FUNC(sub_8282AB20);
PPC_FUNC_IMPL(__imp__sub_8282AB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,82
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 82, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x8282ac6c
	if (ctx.cr6.eq) goto loc_8282AC6C;
	// cmpwi cr6,r5,71
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 71, ctx.xer);
	// beq cr6,0x8282ac40
	if (ctx.cr6.eq) goto loc_8282AC40;
	// cmpwi cr6,r5,83
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 83, ctx.xer);
	// beq cr6,0x8282ac24
	if (ctx.cr6.eq) goto loc_8282AC24;
	// cmpwi cr6,r5,48
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 48, ctx.xer);
	// blt cr6,0x8282ab58
	if (ctx.cr6.lt) goto loc_8282AB58;
	// cmpwi cr6,r5,57
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 57, ctx.xer);
	// ble cr6,0x8282ab64
	if (!ctx.cr6.gt) goto loc_8282AB64;
loc_8282AB58:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8282AB64:
	// lwz r9,23300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23300);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8282abf4
	if (ctx.cr6.eq) goto loc_8282ABF4;
	// lwz r8,12764(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12764);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8282ab58
	if (ctx.cr6.eq) goto loc_8282AB58;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8282abb0
	if (ctx.cr6.eq) goto loc_8282ABB0;
	// lwz r7,22844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// addi r9,r11,21800
	ctx.r9.s64 = ctx.r11.s64 + 21800;
	// lwz r6,21804(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21804);
	// addi r11,r5,-48
	ctx.r11.s64 = ctx.r5.s64 + -48;
	// mullw r10,r7,r6
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u32);
	// blr 
	return;
loc_8282ABB0:
	// addi r9,r5,-48
	ctx.r9.s64 = ctx.r5.s64 + -48;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lfs f13,2568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2568);
	ctx.f13.f64 = double(temp.f32);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// addi r5,r8,3367
	ctx.r5.s64 = ctx.r8.s64 + 3367;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f0,-4476(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f7,f13,f9,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfsx f7,r10,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
loc_8282ABF4:
	// lwz r9,22844(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// addi r8,r5,-48
	ctx.r8.s64 = ctx.r5.s64 + -48;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r10,r9,3986
	ctx.r10.s64 = ctx.r9.s64 + 3986;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// blr 
	return;
loc_8282AC24:
	// lwz r8,17168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17168);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r7,22844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// b 0x8282ac84
	goto loc_8282AC84;
loc_8282AC40:
	// lwz r7,17168(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17168);
	// addi r9,r11,17164
	ctx.r9.s64 = ctx.r11.s64 + 17164;
	// lwz r6,22844(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r8.u32);
	// stw r8,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r8.u32);
	// blr 
	return;
loc_8282AC6C:
	// lwz r8,17168(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,22844(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
loc_8282AC84:
	// addi r9,r11,17164
	ctx.r9.s64 = ctx.r11.s64 + 17164;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// stwx r6,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r6.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282AC9C"))) PPC_WEAK_FUNC(sub_8282AC9C);
PPC_FUNC_IMPL(__imp__sub_8282AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282ACA0"))) PPC_WEAK_FUNC(sub_8282ACA0);
PPC_FUNC_IMPL(__imp__sub_8282ACA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,83
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 83, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8282af80
	if (ctx.cr6.eq) goto loc_8282AF80;
	// cmpwi cr6,r5,76
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 76, ctx.xer);
	// beq cr6,0x8282af6c
	if (ctx.cr6.eq) goto loc_8282AF6C;
	// cmpwi cr6,r5,75
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 75, ctx.xer);
	// beq cr6,0x8282af58
	if (ctx.cr6.eq) goto loc_8282AF58;
	// cmpwi cr6,r5,72
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 72, ctx.xer);
	// beq cr6,0x8282af2c
	if (ctx.cr6.eq) goto loc_8282AF2C;
	// cmpwi cr6,r5,86
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 86, ctx.xer);
	// beq cr6,0x8282af00
	if (ctx.cr6.eq) goto loc_8282AF00;
	// cmpwi cr6,r5,65
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 65, ctx.xer);
	// beq cr6,0x8282aed0
	if (ctx.cr6.eq) goto loc_8282AED0;
	// cmpwi cr6,r5,68
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 68, ctx.xer);
	// beq cr6,0x8282aea0
	if (ctx.cr6.eq) goto loc_8282AEA0;
	// cmpwi cr6,r5,69
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 69, ctx.xer);
	// beq cr6,0x8282ae70
	if (ctx.cr6.eq) goto loc_8282AE70;
	// cmpwi cr6,r5,70
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 70, ctx.xer);
	// beq cr6,0x8282ae40
	if (ctx.cr6.eq) goto loc_8282AE40;
	// cmpwi cr6,r5,71
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 71, ctx.xer);
	// beq cr6,0x8282ae10
	if (ctx.cr6.eq) goto loc_8282AE10;
	// cmpwi cr6,r5,78
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 78, ctx.xer);
	// beq cr6,0x8282ade0
	if (ctx.cr6.eq) goto loc_8282ADE0;
	// cmpwi cr6,r5,82
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 82, ctx.xer);
	// beq cr6,0x8282adb0
	if (ctx.cr6.eq) goto loc_8282ADB0;
	// cmpwi cr6,r5,87
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 87, ctx.xer);
	// beq cr6,0x8282ad80
	if (ctx.cr6.eq) goto loc_8282AD80;
	// cmpwi cr6,r5,47
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 47, ctx.xer);
	// beq cr6,0x8282ad38
	if (ctx.cr6.eq) goto loc_8282AD38;
	// cmpwi cr6,r5,46
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 46, ctx.xer);
	// beq cr6,0x8282afc4
	if (ctx.cr6.eq) goto loc_8282AFC4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AD38:
	// lwz r8,12764(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12764);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8282ad54
	if (!ctx.cr6.eq) goto loc_8282AD54;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r10,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r10.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AD54:
	// lwz r5,19612(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19612);
	// addi r10,r11,19608
	ctx.r10.s64 = ctx.r11.s64 + 19608;
	// lwz r9,22844(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r10.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AD80:
	// lwz r9,18964(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18964);
	// addi r10,r11,18960
	ctx.r10.s64 = ctx.r11.s64 + 18960;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,2
	ctx.r5.s64 = 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,7
	ctx.r9.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282ADB0:
	// lwz r9,18964(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18964);
	// addi r10,r11,18960
	ctx.r10.s64 = ctx.r11.s64 + 18960;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,2
	ctx.r5.s64 = 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282ADE0:
	// lwz r9,18964(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18964);
	// addi r10,r11,18960
	ctx.r10.s64 = ctx.r11.s64 + 18960;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,2
	ctx.r5.s64 = 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AE10:
	// lwz r9,18964(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18964);
	// addi r10,r11,18960
	ctx.r10.s64 = ctx.r11.s64 + 18960;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,2
	ctx.r5.s64 = 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AE40:
	// lwz r9,18964(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18964);
	// addi r10,r11,18960
	ctx.r10.s64 = ctx.r11.s64 + 18960;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,2
	ctx.r5.s64 = 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AE70:
	// lwz r9,18964(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18964);
	// addi r10,r11,18960
	ctx.r10.s64 = ctx.r11.s64 + 18960;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,2
	ctx.r5.s64 = 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AEA0:
	// lwz r9,18964(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18964);
	// addi r10,r11,18960
	ctx.r10.s64 = ctx.r11.s64 + 18960;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,2
	ctx.r5.s64 = 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AED0:
	// lwz r9,18964(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18964);
	// addi r10,r11,18960
	ctx.r10.s64 = ctx.r11.s64 + 18960;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// li r5,2
	ctx.r5.s64 = 2;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,9
	ctx.r9.s64 = ctx.r9.s64 + 9;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r5,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r5.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AF00:
	// lwz r9,14216(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14216);
	// addi r10,r11,14212
	ctx.r10.s64 = ctx.r11.s64 + 14212;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r7,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r7.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AF2C:
	// lwz r9,14216(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14216);
	// addi r10,r11,14212
	ctx.r10.s64 = ctx.r11.s64 + 14212;
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r7,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r7.u32);
	// b 0x8282afa8
	goto loc_8282AFA8;
loc_8282AF58:
	// lwz r9,22052(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22052);
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// b 0x8282af90
	goto loc_8282AF90;
loc_8282AF6C:
	// lwz r9,22052(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22052);
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// b 0x8282af90
	goto loc_8282AF90;
loc_8282AF80:
	// lwz r9,22052(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22052);
	// lwz r8,22844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
loc_8282AF90:
	// addi r10,r11,22048
	ctx.r10.s64 = ctx.r11.s64 + 22048;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r6,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r6.u32);
loc_8282AFA8:
	// lwz r10,21656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21656);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8282afb8
	if (!ctx.cr6.gt) goto loc_8282AFB8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_8282AFB8:
	// stw r6,21656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21656, ctx.r6.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
loc_8282AFC4:
	// lwz r10,22844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22844);
	// addi r10,r10,4653
	ctx.r10.s64 = ctx.r10.s64 + 4653;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8282affc
	if (!ctx.cr6.eq) goto loc_8282AFFC;
	// lwz r10,21656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21656);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,21656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21656, ctx.r10.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8282affc
	if (!ctx.cr6.eq) goto loc_8282AFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// stw r6,21656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21656, ctx.r6.u32);
loc_8282AFFC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// stw r10,12764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12764, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282B00C"))) PPC_WEAK_FUNC(sub_8282B00C);
PPC_FUNC_IMPL(__imp__sub_8282B00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8282B010"))) PPC_WEAK_FUNC(sub_8282B010);
PPC_FUNC_IMPL(__imp__sub_8282B010) {
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
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,66
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 66, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x8282b268
	if (ctx.cr6.eq) goto loc_8282B268;
	// cmpwi cr6,r5,68
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 68, ctx.xer);
	// beq cr6,0x8282b230
	if (ctx.cr6.eq) goto loc_8282B230;
	// cmpwi cr6,r5,74
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 74, ctx.xer);
	// beq cr6,0x8282b1f4
	if (ctx.cr6.eq) goto loc_8282B1F4;
	// cmpwi cr6,r5,82
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 82, ctx.xer);
	// beq cr6,0x8282b1b8
	if (ctx.cr6.eq) goto loc_8282B1B8;
	// cmpwi cr6,r5,83
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 83, ctx.xer);
	// beq cr6,0x8282b17c
	if (ctx.cr6.eq) goto loc_8282B17C;
	// cmpwi cr6,r5,93
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 93, ctx.xer);
	// bne cr6,0x8282b0ac
	if (!ctx.cr6.eq) goto loc_8282B0AC;
	// lwz r11,12764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282b118
	if (!ctx.cr6.eq) goto loc_8282B118;
	// lwz r11,22844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22844);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,4250
	ctx.r11.s64 = ctx.r11.s64 + 4250;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8282a7d8
	ctx.lr = 0x8282B090;
	sub_8282A7D8(ctx, base);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8282B0AC:
	// cmpwi cr6,r5,91
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 91, ctx.xer);
	// bne cr6,0x8282b0f4
	if (!ctx.cr6.eq) goto loc_8282B0F4;
	// lwz r11,12764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282b118
	if (!ctx.cr6.eq) goto loc_8282B118;
	// lwz r11,22844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22844);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,4250
	ctx.r11.s64 = ctx.r11.s64 + 4250;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8282a768
	ctx.lr = 0x8282B0D8;
	sub_8282A768(ctx, base);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8282B0F4:
	// cmpwi cr6,r5,48
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 48, ctx.xer);
	// blt cr6,0x8282b110
	if (ctx.cr6.lt) goto loc_8282B110;
	// cmpwi cr6,r5,57
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 57, ctx.xer);
	// bgt cr6,0x8282b110
	if (ctx.cr6.gt) goto loc_8282B110;
	// lwz r9,12764(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12764);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x8282b154
	if (ctx.cr6.eq) goto loc_8282B154;
loc_8282B110:
	// cmpwi cr6,r5,42
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 42, ctx.xer);
	// beq cr6,0x8282b130
	if (ctx.cr6.eq) goto loc_8282B130;
loc_8282B118:
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8282B130:
	// lwz r9,22844(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22844);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4369
	ctx.r9.s64 = ctx.r9.s64 + 4369;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8282B154:
	// lwz r9,22844(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22844);
	// addi r11,r5,-48
	ctx.r11.s64 = ctx.r5.s64 + -48;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r9,r9,5829
	ctx.r9.s64 = ctx.r9.s64 + 5829;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8282B17C:
	// lwz r9,17560(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17560);
	// addi r11,r10,17556
	ctx.r11.s64 = ctx.r10.s64 + 17556;
	// lwz r8,22844(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22844);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r3,r9,6
	ctx.r3.s64 = ctx.r9.s64 + 6;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// stw r4,12764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12764, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8282B1B8:
	// lwz r9,17560(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17560);
	// addi r11,r10,17556
	ctx.r11.s64 = ctx.r10.s64 + 17556;
	// lwz r8,22844(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22844);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r3,r9,5
	ctx.r3.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// stw r4,12764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12764, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8282B1F4:
	// lwz r9,17560(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17560);
	// addi r11,r10,17556
	ctx.r11.s64 = ctx.r10.s64 + 17556;
	// lwz r8,22844(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22844);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// stw r4,12764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12764, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8282B230:
	// lwz r9,17560(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17560);
	// addi r11,r10,17556
	ctx.r11.s64 = ctx.r10.s64 + 17556;
	// lwz r5,22844(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22844);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// addi r4,r9,3
	ctx.r4.s64 = ctx.r9.s64 + 3;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r8,12764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12764, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8282B268:
	// lwz r8,17560(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17560);
	// addi r9,r10,17556
	ctx.r9.s64 = ctx.r10.s64 + 17556;
	// lwz r5,22844(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22844);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// stw r11,12764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12764, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282B2A0"))) PPC_WEAK_FUNC(sub_8282B2A0);
PPC_FUNC_IMPL(__imp__sub_8282B2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8282B2A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r25,13192(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8282b324
	if (ctx.cr6.eq) goto loc_8282B324;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,7984
	ctx.r3.s64 = ctx.r11.s64 + 7984;
	// bl 0x82803118
	ctx.lr = 0x8282B308;
	sub_82803118(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,7856
	ctx.r4.s64 = ctx.r10.s64 + 7856;
	// bl 0x82803078
	ctx.lr = 0x8282B314;
	sub_82803078(ctx, base);
	// lwz r4,23292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23292);
	// bl 0x82803118
	ctx.lr = 0x8282B31C;
	sub_82803118(ctx, base);
loc_8282B31C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8282b36c
	goto loc_8282B36C;
loc_8282B324:
	// cmpwi cr6,r5,108
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 108, ctx.xer);
	// beq cr6,0x8282b348
	if (ctx.cr6.eq) goto loc_8282B348;
	// cmpwi cr6,r5,104
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 104, ctx.xer);
	// bne cr6,0x8282b31c
	if (!ctx.cr6.eq) goto loc_8282B31C;
	// lwz r9,22844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// lwz r8,13552(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13552);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// b 0x8282b358
	goto loc_8282B358;
loc_8282B348:
	// lwz r9,22844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22844);
	// lwz r8,13552(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13552);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 + 3;
loc_8282B358:
	// addi r11,r31,13548
	ctx.r11.s64 = ctx.r31.s64 + 13548;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
loc_8282B36C:
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r25,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

