#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82848DB0"))) PPC_WEAK_FUNC(sub_82848DB0);
PPC_FUNC_IMPL(__imp__sub_82848DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r9,r10,2252
	ctx.r9.s64 = ctx.r10.s64 + 2252;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82848DCC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82848e18
	if (!ctx.cr6.gt) goto loc_82848E18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82848dcc
	if (ctx.cr6.lt) goto loc_82848DCC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82848DF0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82848e18
	if (!ctx.cr6.gt) goto loc_82848E18;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82848df0
	if (ctx.cr6.lt) goto loc_82848DF0;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82848E18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848E24"))) PPC_WEAK_FUNC(sub_82848E24);
PPC_FUNC_IMPL(__imp__sub_82848E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848E28"))) PPC_WEAK_FUNC(sub_82848E28);
PPC_FUNC_IMPL(__imp__sub_82848E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2504(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2504);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848E40"))) PPC_WEAK_FUNC(sub_82848E40);
PPC_FUNC_IMPL(__imp__sub_82848E40) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,58
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 58, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,2224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2224, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848E64"))) PPC_WEAK_FUNC(sub_82848E64);
PPC_FUNC_IMPL(__imp__sub_82848E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848E68"))) PPC_WEAK_FUNC(sub_82848E68);
PPC_FUNC_IMPL(__imp__sub_82848E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,2224(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2224);
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

__attribute__((alias("__imp__sub_82848E90"))) PPC_WEAK_FUNC(sub_82848E90);
PPC_FUNC_IMPL(__imp__sub_82848E90) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848E9C"))) PPC_WEAK_FUNC(sub_82848E9C);
PPC_FUNC_IMPL(__imp__sub_82848E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848EA0"))) PPC_WEAK_FUNC(sub_82848EA0);
PPC_FUNC_IMPL(__imp__sub_82848EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r10,2564(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2564, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848EC0"))) PPC_WEAK_FUNC(sub_82848EC0);
PPC_FUNC_IMPL(__imp__sub_82848EC0) {
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
	// beq cr6,0x82848f24
	if (ctx.cr6.eq) goto loc_82848F24;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82848f1c
	if (ctx.cr6.eq) goto loc_82848F1C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82848f14
	if (ctx.cr6.eq) goto loc_82848F14;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82848f28
	goto loc_82848F28;
loc_82848F14:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82848f28
	goto loc_82848F28;
loc_82848F1C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82848f28
	goto loc_82848F28;
loc_82848F24:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82848F28:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82848f80
	if (ctx.cr6.eq) goto loc_82848F80;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82848f58
	if (ctx.cr6.eq) goto loc_82848F58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82848f50
	if (ctx.cr6.eq) goto loc_82848F50;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82848f5c
	if (!ctx.cr6.eq) goto loc_82848F5C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82848f5c
	goto loc_82848F5C;
loc_82848F50:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82848f5c
	goto loc_82848F5C;
loc_82848F58:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82848F5C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82848f74
	if (ctx.cr6.eq) goto loc_82848F74;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82848f78
	if (ctx.cr6.eq) goto loc_82848F78;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82848f78
	goto loc_82848F78;
loc_82848F74:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82848F78:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82848518
	ctx.lr = 0x82848F80;
	sub_82848518(ctx, base);
loc_82848F80:
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

__attribute__((alias("__imp__sub_82848F94"))) PPC_WEAK_FUNC(sub_82848F94);
PPC_FUNC_IMPL(__imp__sub_82848F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848F98"))) PPC_WEAK_FUNC(sub_82848F98);
PPC_FUNC_IMPL(__imp__sub_82848F98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82848fc4
	if (ctx.cr6.eq) goto loc_82848FC4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,496(r8)
	PPC_STORE_U32(ctx.r8.u32 + 496, ctx.r10.u32);
	// blr 
	return;
loc_82848FC4:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,520(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r9,496(r7)
	PPC_STORE_U32(ctx.r7.u32 + 496, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82848FDC"))) PPC_WEAK_FUNC(sub_82848FDC);
PPC_FUNC_IMPL(__imp__sub_82848FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82848FE0"))) PPC_WEAK_FUNC(sub_82848FE0);
PPC_FUNC_IMPL(__imp__sub_82848FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r11,320(r6)
	PPC_STORE_U32(ctx.r6.u32 + 320, ctx.r11.u32);
	// stw r9,584(r6)
	PPC_STORE_U32(ctx.r6.u32 + 584, ctx.r9.u32);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,48(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stfs f0,588(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 588, temp.u32);
	// stfs f0,656(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 656, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82849024"))) PPC_WEAK_FUNC(sub_82849024);
PPC_FUNC_IMPL(__imp__sub_82849024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82849028"))) PPC_WEAK_FUNC(sub_82849028);
PPC_FUNC_IMPL(__imp__sub_82849028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
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
	// lwz r11,380(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 380);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82849078
	if (ctx.cr6.eq) goto loc_82849078;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82849070
	if (ctx.cr6.eq) goto loc_82849070;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82849068
	if (ctx.cr6.eq) goto loc_82849068;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8284907c
	goto loc_8284907C;
loc_82849068:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8284907c
	goto loc_8284907C;
loc_82849070:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8284907c
	goto loc_8284907C;
loc_82849078:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8284907C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828490ac
	if (ctx.cr6.eq) goto loc_828490AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828490a4
	if (ctx.cr6.eq) goto loc_828490A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828490b0
	if (!ctx.cr6.eq) goto loc_828490B0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828490b0
	goto loc_828490B0;
loc_828490A4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828490b0
	goto loc_828490B0;
loc_828490AC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828490B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82821e08
	sub_82821E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828490B8"))) PPC_WEAK_FUNC(sub_828490B8);
PPC_FUNC_IMPL(__imp__sub_828490B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828490BC"))) PPC_WEAK_FUNC(sub_828490BC);
PPC_FUNC_IMPL(__imp__sub_828490BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828490C0"))) PPC_WEAK_FUNC(sub_828490C0);
PPC_FUNC_IMPL(__imp__sub_828490C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x828490C8;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r8,32(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r25,13180(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13180);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r22,13184(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// stw r27,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r27.u32);
	// stw r27,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r27.u32);
	// stw r11,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82849148
	if (ctx.cr6.eq) goto loc_82849148;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82849144
	if (ctx.cr6.eq) goto loc_82849144;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82849148
	if (!ctx.cr6.eq) goto loc_82849148;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82849148
	goto loc_82849148;
loc_82849144:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82849148:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82804410
	ctx.lr = 0x82849154;
	sub_82804410(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82804410
	ctx.lr = 0x82849160;
	sub_82804410(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f31,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82849200
	if (ctx.cr6.eq) goto loc_82849200;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82804270
	ctx.lr = 0x828491C4;
	sub_82804270(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8212c210
	ctx.lr = 0x828491E8;
	sub_8212C210(ctx, base);
	// fneg f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82849200
	if (ctx.cr6.lt) goto loc_82849200;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82849204
	if (!ctx.cr6.gt) goto loc_82849204;
loc_82849200:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82849204:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r25,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r25.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r22,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r22.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82849228"))) PPC_WEAK_FUNC(sub_82849228);
PPC_FUNC_IMPL(__imp__sub_82849228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,836(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828492d8
	if (ctx.cr6.eq) goto loc_828492D8;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r11,-29532(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x82849288
	if (ctx.cr6.eq) goto loc_82849288;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82849280
	if (ctx.cr6.eq) goto loc_82849280;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82849278
	if (ctx.cr6.eq) goto loc_82849278;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x8284928c
	goto loc_8284928C;
loc_82849278:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x8284928c
	goto loc_8284928C;
loc_82849280:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x8284928c
	goto loc_8284928C;
loc_82849288:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8284928C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828492d8
	if (ctx.cr6.eq) goto loc_828492D8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828492c0
	if (ctx.cr6.eq) goto loc_828492C0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828492bc
	if (ctx.cr6.eq) goto loc_828492BC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828492b4
	if (ctx.cr6.eq) goto loc_828492B4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x828492c0
	goto loc_828492C0;
loc_828492B4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828492c0
	goto loc_828492C0;
loc_828492BC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828492C0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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
loc_828492D8:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828492E0"))) PPC_WEAK_FUNC(sub_828492E0);
PPC_FUNC_IMPL(__imp__sub_828492E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,48(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,192(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82849330
	if (ctx.cr6.eq) goto loc_82849330;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82849328
	if (ctx.cr6.eq) goto loc_82849328;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82849320
	if (ctx.cr6.eq) goto loc_82849320;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82849334
	goto loc_82849334;
loc_82849320:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82849334
	goto loc_82849334;
loc_82849328:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82849334
	goto loc_82849334;
loc_82849330:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82849334:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82849348
	if (!ctx.cr6.eq) goto loc_82849348;
	// lwz r11,328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82849348:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82849370
	if (ctx.cr6.eq) goto loc_82849370;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82849368
	if (ctx.cr6.eq) goto loc_82849368;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82849374
	if (!ctx.cr6.eq) goto loc_82849374;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82849374
	goto loc_82849374;
loc_82849368:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82849374
	goto loc_82849374;
loc_82849370:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82849374:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1620(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1620);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284938C"))) PPC_WEAK_FUNC(sub_8284938C);
PPC_FUNC_IMPL(__imp__sub_8284938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82849390"))) PPC_WEAK_FUNC(sub_82849390);
PPC_FUNC_IMPL(__imp__sub_82849390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82849398;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x828493F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82849400;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284940C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82849420;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82849454
	if (ctx.cr6.eq) goto loc_82849454;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82849454
	if (!ctx.cr6.eq) goto loc_82849454;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x82849444;
	sub_82BFEA70(ctx, base);
	// stw r3,3784(r20)
	PPC_STORE_U32(ctx.r20.u32 + 3784, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bfea70
	ctx.lr = 0x82849450;
	sub_82BFEA70(ctx, base);
	// stw r3,1676(r20)
	PPC_STORE_U32(ctx.r20.u32 + 1676, ctx.r3.u32);
loc_82849454:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284946C"))) PPC_WEAK_FUNC(sub_8284946C);
PPC_FUNC_IMPL(__imp__sub_8284946C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82849470"))) PPC_WEAK_FUNC(sub_82849470);
PPC_FUNC_IMPL(__imp__sub_82849470) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x828494b0
	if (!ctx.cr6.eq) goto loc_828494B0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,3784(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3784);
	// beq cr6,0x828494a4
	if (ctx.cr6.eq) goto loc_828494A4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,3784(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3784, ctx.r8.u32);
	// blr 
	return;
loc_828494A4:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,3784(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3784, ctx.r8.u32);
	// blr 
	return;
loc_828494B0:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r5,98
	ctx.r9.s64 = ctx.r5.s64 + 98;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addic. r9,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x828494d4
	if (!ctx.cr0.lt) goto loc_828494D4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_828494D4:
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r11,r6,98
	ctx.r11.s64 = ctx.r6.s64 + 98;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828494FC"))) PPC_WEAK_FUNC(sub_828494FC);
PPC_FUNC_IMPL(__imp__sub_828494FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82849500"))) PPC_WEAK_FUNC(sub_82849500);
PPC_FUNC_IMPL(__imp__sub_82849500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82849508;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// lfs f30,27476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27476);
	ctx.f30.f64 = double(temp.f32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r26,48(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82849708
	if (!ctx.cr6.gt) goto loc_82849708;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r23,r26,1776
	ctx.r23.s64 = ctx.r26.s64 + 1776;
loc_82849568:
	// lwz r30,0(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8284959c
	if (ctx.cr6.eq) goto loc_8284959C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82849594
	if (ctx.cr6.eq) goto loc_82849594;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x8284958c
	if (ctx.cr6.eq) goto loc_8284958C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828495a0
	goto loc_828495A0;
loc_8284958C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828495a0
	goto loc_828495A0;
loc_82849594:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828495a0
	goto loc_828495A0;
loc_8284959C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_828495A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828496f4
	if (ctx.cr6.eq) goto loc_828496F4;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x828495d8
	if (ctx.cr6.eq) goto loc_828495D8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x828495d0
	if (ctx.cr6.eq) goto loc_828495D0;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x828495c8
	if (ctx.cr6.eq) goto loc_828495C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828495dc
	goto loc_828495DC;
loc_828495C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x828495dc
	goto loc_828495DC;
loc_828495D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828495dc
	goto loc_828495DC;
loc_828495D8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_828495DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828492e0
	ctx.lr = 0x828495E4;
	sub_828492E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x828496f4
	if (!ctx.cr6.eq) goto loc_828496F4;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82849620
	if (ctx.cr6.eq) goto loc_82849620;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82849618
	if (ctx.cr6.eq) goto loc_82849618;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82849610
	if (ctx.cr6.eq) goto loc_82849610;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82849624
	goto loc_82849624;
loc_82849610:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82849624
	goto loc_82849624;
loc_82849618:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82849624
	goto loc_82849624;
loc_82849620:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82849624:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284971c
	if (ctx.cr6.eq) goto loc_8284971C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x8284965c
	if (ctx.cr6.eq) goto loc_8284965C;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82849654
	if (ctx.cr6.eq) goto loc_82849654;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x8284964c
	if (ctx.cr6.eq) goto loc_8284964C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82849660
	goto loc_82849660;
loc_8284964C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82849660
	goto loc_82849660;
loc_82849654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82849660
	goto loc_82849660;
loc_8284965C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82849660:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82804410
	ctx.lr = 0x82849668;
	sub_82804410(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82849698
	if (ctx.cr6.eq) goto loc_82849698;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82849690
	if (ctx.cr6.eq) goto loc_82849690;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82849688
	if (ctx.cr6.eq) goto loc_82849688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8284969c
	goto loc_8284969C;
loc_82849688:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8284969c
	goto loc_8284969C;
loc_82849690:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8284969c
	goto loc_8284969C;
loc_82849698:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8284969C:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82804410
	ctx.lr = 0x828496A4;
	sub_82804410(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// beq cr6,0x828496e4
	if (ctx.cr6.eq) goto loc_828496E4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x828496ec
	if (!ctx.cr6.lt) goto loc_828496EC;
loc_828496E4:
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_828496EC:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_828496F4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82849568
	if (ctx.cr6.lt) goto loc_82849568;
loc_82849708:
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
loc_8284971C:
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82849730"))) PPC_WEAK_FUNC(sub_82849730);
PPC_FUNC_IMPL(__imp__sub_82849730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8284974c
	if (ctx.cr6.lt) goto loc_8284974C;
	// cmpwi cr6,r4,500
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 500, ctx.xer);
	// blt cr6,0x82849754
	if (ctx.cr6.lt) goto loc_82849754;
loc_8284974C:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82849760
	goto loc_82849760;
loc_82849754:
	// addi r11,r4,444
	ctx.r11.s64 = ctx.r4.s64 + 444;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
loc_82849760:
	// addi r11,r4,975
	ctx.r11.s64 = ctx.r4.s64 + 975;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// addi r9,r9,-29532
	ctx.r9.s64 = ctx.r9.s64 + -29532;
	// lfsx f12,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f1,r11,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// beq cr6,0x828497a0
	if (ctx.cr6.eq) goto loc_828497A0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82849798
	if (ctx.cr6.eq) goto loc_82849798;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x828497a4
	if (!ctx.cr6.eq) goto loc_828497A4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828497a4
	goto loc_828497A4;
loc_82849798:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828497a4
	goto loc_828497A4;
loc_828497A0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828497A4:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stfs f1,268(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 268, temp.u32);
	// lfs f13,328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x828497dc
	if (!ctx.cr6.lt) goto loc_828497DC;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82849850
	if (ctx.cr6.gt) goto loc_82849850;
loc_828497DC:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,444
	ctx.r11.s64 = ctx.r4.s64 + 444;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82849820
	if (ctx.cr6.eq) goto loc_82849820;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82849818
	if (ctx.cr6.eq) goto loc_82849818;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82849824
	if (!ctx.cr6.eq) goto loc_82849824;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82849824
	goto loc_82849824;
loc_82849818:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82849824
	goto loc_82849824;
loc_82849820:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82849824:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,292(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,596(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 404, ctx.r10.u32);
	// stw r9,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r9.u32);
	// blr 
	return;
loc_82849850:
	// addi r11,r4,444
	ctx.r11.s64 = ctx.r4.s64 + 444;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82849884
	if (ctx.cr6.eq) goto loc_82849884;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284987c
	if (ctx.cr6.eq) goto loc_8284987C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82849888
	if (!ctx.cr6.eq) goto loc_82849888;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82849888
	goto loc_82849888;
loc_8284987C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82849888
	goto loc_82849888;
loc_82849884:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82849888:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 596, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828498A0"))) PPC_WEAK_FUNC(sub_828498A0);
PPC_FUNC_IMPL(__imp__sub_828498A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x828498A8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x82849904;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82849910;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284991C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r11,15828
	ctx.r7.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82849934;
	sub_828097A0(ctx, base);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284997c
	if (ctx.cr6.eq) goto loc_8284997C;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8284997c
	if (!ctx.cr6.eq) goto loc_8284997C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x82849958;
	sub_82BFEA70(ctx, base);
	// stw r3,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bfea70
	ctx.lr = 0x82849964;
	sub_82BFEA70(ctx, base);
	// stw r3,88(r20)
	PPC_STORE_U32(ctx.r20.u32 + 88, ctx.r3.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r20,28
	ctx.r5.s64 = ctx.r20.s64 + 28;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82809be0
	ctx.lr = 0x8284997C;
	sub_82809BE0(ctx, base);
loc_8284997C:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82849994"))) PPC_WEAK_FUNC(sub_82849994);
PPC_FUNC_IMPL(__imp__sub_82849994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82849998"))) PPC_WEAK_FUNC(sub_82849998);
PPC_FUNC_IMPL(__imp__sub_82849998) {
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
	// li r4,127
	ctx.r4.s64 = 127;
	// lwz r3,13188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// bl 0x82808690
	ctx.lr = 0x828499B4;
	sub_82808690(ctx, base);
	// bl 0x828498a0
	ctx.lr = 0x828499B8;
	sub_828498A0(ctx, base);
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

__attribute__((alias("__imp__sub_828499CC"))) PPC_WEAK_FUNC(sub_828499CC);
PPC_FUNC_IMPL(__imp__sub_828499CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828499D0"))) PPC_WEAK_FUNC(sub_828499D0);
PPC_FUNC_IMPL(__imp__sub_828499D0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82849a64
	if (ctx.cr6.eq) goto loc_82849A64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82849a20
	if (ctx.cr6.eq) goto loc_82849A20;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82849a10
	if (ctx.cr6.eq) goto loc_82849A10;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82849a28
	if (!ctx.cr6.eq) goto loc_82849A28;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x82849a28
	goto loc_82849A28;
loc_82849A10:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82849a28
	goto loc_82849A28;
loc_82849A20:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r7,-29532(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82849A28:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x8280e500
	ctx.lr = 0x82849A30;
	sub_8280E500(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82849a50
	if (!ctx.cr6.lt) goto loc_82849A50;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,27476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82849a54
	if (!ctx.cr6.eq) goto loc_82849A54;
loc_82849A50:
	// stfs f1,436(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 436, temp.u32);
loc_82849A54:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r6,2100(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2100, ctx.r6.u32);
loc_82849A64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82849A74"))) PPC_WEAK_FUNC(sub_82849A74);
PPC_FUNC_IMPL(__imp__sub_82849A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82849A78"))) PPC_WEAK_FUNC(sub_82849A78);
PPC_FUNC_IMPL(__imp__sub_82849A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82849A80;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r23,13192(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// addi r26,r9,-15760
	ctx.r26.s64 = ctx.r9.s64 + -15760;
	// lwz r22,13188(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r31,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// lwz r20,12480(r8)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12480);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// bl 0x82c09bec
	ctx.lr = 0x82849ADC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r20,4132
	ctx.r4.s64 = ctx.r20.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82849AE8;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82849AF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82849B08;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82849b24
	if (ctx.cr6.eq) goto loc_82849B24;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x82849b2c
	if (ctx.cr6.eq) goto loc_82849B2C;
loc_82849B24:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82849b30
	goto loc_82849B30;
loc_82849B2C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82849B30:
	// stw r22,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82849B4C"))) PPC_WEAK_FUNC(sub_82849B4C);
PPC_FUNC_IMPL(__imp__sub_82849B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82849B50"))) PPC_WEAK_FUNC(sub_82849B50);
PPC_FUNC_IMPL(__imp__sub_82849B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82849B58;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r10,-29532
	ctx.r30.s64 = ctx.r10.s64 + -29532;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r24,13192(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r22,13180(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r21,13184(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82849bdc
	if (ctx.cr6.eq) goto loc_82849BDC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82849bd4
	if (ctx.cr6.eq) goto loc_82849BD4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82849bcc
	if (ctx.cr6.eq) goto loc_82849BCC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82849be0
	goto loc_82849BE0;
loc_82849BCC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82849be0
	goto loc_82849BE0;
loc_82849BD4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82849be0
	goto loc_82849BE0;
loc_82849BDC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82849BE0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82849c60
	if (ctx.cr6.eq) goto loc_82849C60;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82849c10
	if (ctx.cr6.eq) goto loc_82849C10;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82849c08
	if (ctx.cr6.eq) goto loc_82849C08;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82849c14
	if (ctx.cr6.eq) goto loc_82849C14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82849c14
	goto loc_82849C14;
loc_82849C08:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82849c14
	goto loc_82849C14;
loc_82849C10:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82849C14:
	// bl 0x828040c8
	ctx.lr = 0x82849C18;
	sub_828040C8(ctx, base);
	// stw r3,556(r25)
	PPC_STORE_U32(ctx.r25.u32 + 556, ctx.r3.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82849c44
	if (ctx.cr6.eq) goto loc_82849C44;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82849c3c
	if (ctx.cr6.eq) goto loc_82849C3C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82849c48
	if (!ctx.cr6.eq) goto loc_82849C48;
	// lwz r31,13188(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// b 0x82849c48
	goto loc_82849C48;
loc_82849C3C:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82849c48
	goto loc_82849C48;
loc_82849C44:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82849C48:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x82849c68
	goto loc_82849C68;
loc_82849C60:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,556(r25)
	PPC_STORE_U32(ctx.r25.u32 + 556, ctx.r11.u32);
loc_82849C68:
	// stw r24,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82849C80"))) PPC_WEAK_FUNC(sub_82849C80);
PPC_FUNC_IMPL(__imp__sub_82849C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82849cb4
	if (ctx.cr6.eq) goto loc_82849CB4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82849ca4
	if (ctx.cr6.eq) goto loc_82849CA4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82849cbc
	if (!ctx.cr6.eq) goto loc_82849CBC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82849cbc
	goto loc_82849CBC;
loc_82849CA4:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82849cbc
	goto loc_82849CBC;
loc_82849CB4:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r5,-29532(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_82849CBC:
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f13,-30252(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1404(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1404);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// bne cr6,0x82849d00
	if (!ctx.cr6.eq) goto loc_82849D00;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82849d10
	if (ctx.cr6.lt) goto loc_82849D10;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82849d14
	if (!ctx.cr6.lt) goto loc_82849D14;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82849D00:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82849d10
	if (ctx.cr6.lt) goto loc_82849D10;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82849d14
	if (!ctx.cr6.gt) goto loc_82849D14;
loc_82849D10:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82849D14:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82849D1C"))) PPC_WEAK_FUNC(sub_82849D1C);
PPC_FUNC_IMPL(__imp__sub_82849D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82849D20"))) PPC_WEAK_FUNC(sub_82849D20);
PPC_FUNC_IMPL(__imp__sub_82849D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82849d54
	if (ctx.cr6.eq) goto loc_82849D54;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82849d44
	if (ctx.cr6.eq) goto loc_82849D44;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82849d5c
	if (!ctx.cr6.eq) goto loc_82849D5C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82849d5c
	goto loc_82849D5C;
loc_82849D44:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82849d5c
	goto loc_82849D5C;
loc_82849D54:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r5,-29532(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_82849D5C:
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f13,-30252(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1408(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1408);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// bne cr6,0x82849da0
	if (!ctx.cr6.eq) goto loc_82849DA0;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82849db0
	if (ctx.cr6.lt) goto loc_82849DB0;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82849db4
	if (!ctx.cr6.lt) goto loc_82849DB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82849DA0:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82849db0
	if (ctx.cr6.lt) goto loc_82849DB0;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82849db4
	if (!ctx.cr6.gt) goto loc_82849DB4;
loc_82849DB0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82849DB4:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82849DBC"))) PPC_WEAK_FUNC(sub_82849DBC);
PPC_FUNC_IMPL(__imp__sub_82849DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82849DC0"))) PPC_WEAK_FUNC(sub_82849DC0);
PPC_FUNC_IMPL(__imp__sub_82849DC0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82849DC8;
	__savegprlr_22(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r27,13192(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13192);
	// lwz r26,13188(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r25,13180(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13180);
	// lwz r24,13184(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13184);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1552(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1552);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82849ee0
	if (!ctx.cr6.gt) goto loc_82849EE0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r30,40
	ctx.r30.s64 = 40;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r28,48(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r22,-29532(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r23,4(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82849E28:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82849e3c
	if (ctx.cr6.lt) goto loc_82849E3C;
	// lwz r11,1552(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1552);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82849e48
	if (ctx.cr6.lt) goto loc_82849E48;
loc_82849E3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82849e80
	goto loc_82849E80;
loc_82849E48:
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82849e7c
	if (ctx.cr6.eq) goto loc_82849E7C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82849e74
	if (ctx.cr6.eq) goto loc_82849E74;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82849e6c
	if (ctx.cr6.eq) goto loc_82849E6C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82849e80
	goto loc_82849E80;
loc_82849E6C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82849e80
	goto loc_82849E80;
loc_82849E74:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// b 0x82849e80
	goto loc_82849E80;
loc_82849E7C:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82849E80:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82849ed0
	if (ctx.cr6.eq) goto loc_82849ED0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82849eb0
	if (ctx.cr6.eq) goto loc_82849EB0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82849ea8
	if (ctx.cr6.eq) goto loc_82849EA8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82849eb4
	if (!ctx.cr6.eq) goto loc_82849EB4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82849eb4
	goto loc_82849EB4;
loc_82849EA8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82849eb4
	goto loc_82849EB4;
loc_82849EB0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82849EB4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82849ed0
	if (!ctx.cr6.eq) goto loc_82849ED0;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_82849ED0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82849e28
	if (ctx.cr6.lt) goto loc_82849E28;
loc_82849EE0:
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// stw r27,13192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r26.u32);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82849EF8"))) PPC_WEAK_FUNC(sub_82849EF8);
PPC_FUNC_IMPL(__imp__sub_82849EF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,204(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82849f3c
	if (ctx.cr6.eq) goto loc_82849F3C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82849f3c
	if (ctx.cr6.lt) goto loc_82849F3C;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x82849f3c
	if (!ctx.cr6.lt) goto loc_82849F3C;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r11,363
	ctx.r9.s64 = ctx.r11.s64 + 363;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r10,r8,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
loc_82849F3C:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82849F44"))) PPC_WEAK_FUNC(sub_82849F44);
PPC_FUNC_IMPL(__imp__sub_82849F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82849F48"))) PPC_WEAK_FUNC(sub_82849F48);
PPC_FUNC_IMPL(__imp__sub_82849F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82849F50;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r23,13192(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// addi r26,r9,-15760
	ctx.r26.s64 = ctx.r9.s64 + -15760;
	// lwz r22,13188(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r31,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// lwz r20,12480(r8)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12480);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// bl 0x82c09bec
	ctx.lr = 0x82849FAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r20,4132
	ctx.r4.s64 = ctx.r20.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82849FB8;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82849FC4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82849FD8;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82849ff4
	if (ctx.cr6.eq) goto loc_82849FF4;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82849ffc
	if (ctx.cr6.eq) goto loc_82849FFC;
loc_82849FF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8284a000
	goto loc_8284A000;
loc_82849FFC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8284A000:
	// stw r22,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284A01C"))) PPC_WEAK_FUNC(sub_8284A01C);
PPC_FUNC_IMPL(__imp__sub_8284A01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284A020"))) PPC_WEAK_FUNC(sub_8284A020);
PPC_FUNC_IMPL(__imp__sub_8284A020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x8284A028;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r25,13192(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r23,13180(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r22,13184(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r9,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r9.u32);
	// blt cr6,0x8284a0e8
	if (ctx.cr6.lt) goto loc_8284A0E8;
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// bge cr6,0x8284a0e8
	if (!ctx.cr6.lt) goto loc_8284A0E8;
	// mulli r11,r5,124
	ctx.r11.s64 = ctx.r5.s64 * 124;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lbz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284a0e8
	if (ctx.cr6.eq) goto loc_8284A0E8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284a0e8
	if (ctx.cr6.eq) goto loc_8284A0E8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8284a0e8
	if (ctx.cr6.eq) goto loc_8284A0E8;
	// bl 0x827fea90
	ctx.lr = 0x8284A0BC;
	sub_827FEA90(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13232);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r11.u32);
	// beq cr6,0x8284a0dc
	if (ctx.cr6.eq) goto loc_8284A0DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8284a0e8
	goto loc_8284A0E8;
loc_8284A0DC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8284A0E8:
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// stw r22,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r22.u32);
	// stw r23,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r23.u32);
	// stw r25,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r25.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284A104"))) PPC_WEAK_FUNC(sub_8284A104);
PPC_FUNC_IMPL(__imp__sub_8284A104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284A108"))) PPC_WEAK_FUNC(sub_8284A108);
PPC_FUNC_IMPL(__imp__sub_8284A108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8284A110;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r23,13192(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r22,13188(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r21,13180(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r20,13184(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r19,12480(r9)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8284A170;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r19,4132
	ctx.r4.s64 = ctx.r19.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8284A17C;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284A188;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r11,15828
	ctx.r7.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8284A1A0;
	sub_828097A0(ctx, base);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284a1bc
	if (ctx.cr6.eq) goto loc_8284A1BC;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8284a1c4
	if (ctx.cr6.eq) goto loc_8284A1C4;
loc_8284A1BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8284a1f4
	goto loc_8284A1F4;
loc_8284A1C4:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r25,8
	ctx.r5.s64 = ctx.r25.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82809be0
	ctx.lr = 0x8284A1D8;
	sub_82809BE0(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82bfea70
	ctx.lr = 0x8284A1E0;
	sub_82BFEA70(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82bfea70
	ctx.lr = 0x8284A1EC;
	sub_82BFEA70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r3.u32);
loc_8284A1F4:
	// stw r22,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r22.u32);
	// stw r20,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r20.u32);
	// stw r21,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r21.u32);
	// stw r23,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r23.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284A210"))) PPC_WEAK_FUNC(sub_8284A210);
PPC_FUNC_IMPL(__imp__sub_8284A210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x8284A218;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82800500
	ctx.lr = 0x8284A248;
	sub_82800500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82800588
	ctx.lr = 0x8284A254;
	sub_82800588(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8284a314
	if (ctx.cr6.eq) goto loc_8284A314;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8284a314
	if (ctx.cr6.eq) goto loc_8284A314;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82811070
	ctx.lr = 0x8284A278;
	sub_82811070(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8284a314
	if (ctx.cr6.eq) goto loc_8284A314;
	// lwz r10,5428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8284a314
	if (!ctx.cr6.gt) goto loc_8284A314;
	// addi r10,r31,5384
	ctx.r10.s64 = ctx.r31.s64 + 5384;
loc_8284A298:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8284a2bc
	if (ctx.cr6.eq) goto loc_8284A2BC;
	// lwz r8,5428(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8284a298
	if (ctx.cr6.lt) goto loc_8284A298;
	// b 0x8284a314
	goto loc_8284A314;
loc_8284A2BC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8284a314
	if (ctx.cr6.eq) goto loc_8284A314;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8284a2fc
	if (ctx.cr6.eq) goto loc_8284A2FC;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x8284a2f4
	if (ctx.cr6.eq) goto loc_8284A2F4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8284a2ec
	if (ctx.cr6.eq) goto loc_8284A2EC;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x8284a314
	if (!ctx.cr6.eq) goto loc_8284A314;
	// lwz r10,2440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// b 0x8284a300
	goto loc_8284A300;
loc_8284A2EC:
	// lwz r10,7988(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7988);
	// b 0x8284a300
	goto loc_8284A300;
loc_8284A2F4:
	// lwz r10,5436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5436);
	// b 0x8284a300
	goto loc_8284A300;
loc_8284A2FC:
	// lwz r10,13508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13508);
loc_8284A300:
	// addi r11,r11,1381
	ctx.r11.s64 = ctx.r11.s64 + 1381;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r10,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r10.u32);
	// stw r8,13520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13520, ctx.r8.u32);
loc_8284A314:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82800500
	ctx.lr = 0x8284A31C;
	sub_82800500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82800588
	ctx.lr = 0x8284A328;
	sub_82800588(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8284a3ec
	if (ctx.cr6.eq) goto loc_8284A3EC;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8284a3ec
	if (ctx.cr6.eq) goto loc_8284A3EC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82811070
	ctx.lr = 0x8284A34C;
	sub_82811070(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8284a3ec
	if (ctx.cr6.eq) goto loc_8284A3EC;
	// lwz r10,5428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8284a3ec
	if (!ctx.cr6.gt) goto loc_8284A3EC;
	// addi r10,r31,5384
	ctx.r10.s64 = ctx.r31.s64 + 5384;
loc_8284A36C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8284a394
	if (ctx.cr6.eq) goto loc_8284A394;
	// lwz r8,5428(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8284a36c
	if (ctx.cr6.lt) goto loc_8284A36C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_8284A394:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8284a3ec
	if (ctx.cr6.eq) goto loc_8284A3EC;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x8284a3d4
	if (ctx.cr6.eq) goto loc_8284A3D4;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// beq cr6,0x8284a3cc
	if (ctx.cr6.eq) goto loc_8284A3CC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8284a3c4
	if (ctx.cr6.eq) goto loc_8284A3C4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bne cr6,0x8284a3ec
	if (!ctx.cr6.eq) goto loc_8284A3EC;
	// lwz r10,2440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// b 0x8284a3d8
	goto loc_8284A3D8;
loc_8284A3C4:
	// lwz r10,7988(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7988);
	// b 0x8284a3d8
	goto loc_8284A3D8;
loc_8284A3CC:
	// lwz r10,5436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5436);
	// b 0x8284a3d8
	goto loc_8284A3D8;
loc_8284A3D4:
	// lwz r10,13508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13508);
loc_8284A3D8:
	// addi r11,r11,1381
	ctx.r11.s64 = ctx.r11.s64 + 1381;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r10,2752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2752, ctx.r10.u32);
	// stw r8,13516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13516, ctx.r8.u32);
loc_8284A3EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284A3F4"))) PPC_WEAK_FUNC(sub_8284A3F4);
PPC_FUNC_IMPL(__imp__sub_8284A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284A3F8"))) PPC_WEAK_FUNC(sub_8284A3F8);
PPC_FUNC_IMPL(__imp__sub_8284A3F8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x828107b0
	sub_828107B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284A404"))) PPC_WEAK_FUNC(sub_8284A404);
PPC_FUNC_IMPL(__imp__sub_8284A404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284A408"))) PPC_WEAK_FUNC(sub_8284A408);
PPC_FUNC_IMPL(__imp__sub_8284A408) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82800718
	ctx.lr = 0x8284A434;
	sub_82800718(ctx, base);
	// lwz r9,5428(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8284a478
	if (!ctx.cr6.gt) goto loc_8284A478;
	// addi r10,r31,5384
	ctx.r10.s64 = ctx.r31.s64 + 5384;
loc_8284A448:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8284a470
	if (ctx.cr6.eq) goto loc_8284A470;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8284a448
	if (ctx.cr6.lt) goto loc_8284A448;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8284a494
	goto loc_8284A494;
loc_8284A470:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8284a484
	if (!ctx.cr6.eq) goto loc_8284A484;
loc_8284A478:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8284a494
	goto loc_8284A494;
loc_8284A484:
	// addi r11,r11,1381
	ctx.r11.s64 = ctx.r11.s64 + 1381;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_8284A494:
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

__attribute__((alias("__imp__sub_8284A4AC"))) PPC_WEAK_FUNC(sub_8284A4AC);
PPC_FUNC_IMPL(__imp__sub_8284A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284A4B0"))) PPC_WEAK_FUNC(sub_8284A4B0);
PPC_FUNC_IMPL(__imp__sub_8284A4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8284A4B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,3855
	ctx.r3.s64 = 3855;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82800718
	ctx.lr = 0x8284A4D0;
	sub_82800718(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a4f4
	if (ctx.cr6.eq) goto loc_8284A4F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,3855
	ctx.r10.s64 = 3855;
	// addi r9,r11,-14984
	ctx.r9.s64 = ctx.r11.s64 + -14984;
	// stw r9,12016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12016, ctx.r9.u32);
	// stw r30,8012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8012, ctx.r30.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8284A4F4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r10,r11,-14960
	ctx.r10.s64 = ctx.r11.s64 + -14960;
	// li r3,2886
	ctx.r3.s64 = 2886;
	// stw r10,12020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12020, ctx.r10.u32);
	// stw r30,8016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8016, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82800718
	ctx.lr = 0x8284A514;
	sub_82800718(ctx, base);
	// li r28,2886
	ctx.r28.s64 = 2886;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a534
	if (ctx.cr6.eq) goto loc_8284A534;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-14936
	ctx.r10.s64 = ctx.r11.s64 + -14936;
	// stw r10,12056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12056, ctx.r10.u32);
	// stw r30,8052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8052, ctx.r30.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
loc_8284A534:
	// li r3,22897
	ctx.r3.s64 = 22897;
	// bl 0x82800718
	ctx.lr = 0x8284A53C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a55c
	if (ctx.cr6.eq) goto loc_8284A55C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,22897
	ctx.r10.s64 = 22897;
	// addi r9,r11,-14912
	ctx.r9.s64 = ctx.r11.s64 + -14912;
	// stw r9,12024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12024, ctx.r9.u32);
	// stw r30,8020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8020, ctx.r30.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8284A55C:
	// li r3,634
	ctx.r3.s64 = 634;
	// bl 0x82800718
	ctx.lr = 0x8284A564;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a584
	if (ctx.cr6.eq) goto loc_8284A584;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,634
	ctx.r10.s64 = 634;
	// addi r9,r11,-14888
	ctx.r9.s64 = ctx.r11.s64 + -14888;
	// stw r9,12060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12060, ctx.r9.u32);
	// stw r30,8056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8056, ctx.r30.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_8284A584:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,2886
	ctx.r3.s64 = 2886;
	// addi r10,r11,-14864
	ctx.r10.s64 = ctx.r11.s64 + -14864;
	// stw r10,12064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12064, ctx.r10.u32);
	// stw r30,8060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8060, ctx.r30.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// bl 0x82800718
	ctx.lr = 0x8284A5A0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a5c0
	if (ctx.cr6.eq) goto loc_8284A5C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,31
	ctx.r10.s64 = 31;
	// addi r9,r11,-14836
	ctx.r9.s64 = ctx.r11.s64 + -14836;
	// stw r9,12068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12068, ctx.r9.u32);
	// stw r10,8064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8064, ctx.r10.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
loc_8284A5C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r9,r11,-14812
	ctx.r9.s64 = ctx.r11.s64 + -14812;
	// li r8,16186
	ctx.r8.s64 = 16186;
	// stw r9,12072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12072, ctx.r9.u32);
	// li r3,21575
	ctx.r3.s64 = 21575;
	// stw r10,8068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8068, ctx.r10.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// bl 0x82800718
	ctx.lr = 0x8284A5E4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a604
	if (ctx.cr6.eq) goto loc_8284A604;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,21575
	ctx.r10.s64 = 21575;
	// addi r9,r11,-14784
	ctx.r9.s64 = ctx.r11.s64 + -14784;
	// stw r9,16004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16004, ctx.r9.u32);
	// stw r30,12000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12000, ctx.r30.u32);
	// stw r10,3992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3992, ctx.r10.u32);
loc_8284A604:
	// li r3,22916
	ctx.r3.s64 = 22916;
	// bl 0x82800718
	ctx.lr = 0x8284A60C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a62c
	if (ctx.cr6.eq) goto loc_8284A62C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,22916
	ctx.r10.s64 = 22916;
	// addi r9,r11,-14760
	ctx.r9.s64 = ctx.r11.s64 + -14760;
	// stw r9,15216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15216, ctx.r9.u32);
	// stw r30,11212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11212, ctx.r30.u32);
	// stw r10,3204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3204, ctx.r10.u32);
loc_8284A62C:
	// li r3,22936
	ctx.r3.s64 = 22936;
	// bl 0x82800718
	ctx.lr = 0x8284A634;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a654
	if (ctx.cr6.eq) goto loc_8284A654;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,22936
	ctx.r10.s64 = 22936;
	// addi r9,r11,-14708
	ctx.r9.s64 = ctx.r11.s64 + -14708;
	// stw r9,15220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15220, ctx.r9.u32);
	// stw r30,11216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11216, ctx.r30.u32);
	// stw r10,3208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3208, ctx.r10.u32);
loc_8284A654:
	// li r3,22957
	ctx.r3.s64 = 22957;
	// bl 0x82800718
	ctx.lr = 0x8284A65C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a67c
	if (ctx.cr6.eq) goto loc_8284A67C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,22957
	ctx.r10.s64 = 22957;
	// addi r9,r11,-14656
	ctx.r9.s64 = ctx.r11.s64 + -14656;
	// stw r9,15224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15224, ctx.r9.u32);
	// stw r30,11220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11220, ctx.r30.u32);
	// stw r10,3212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3212, ctx.r10.u32);
loc_8284A67C:
	// li r3,22974
	ctx.r3.s64 = 22974;
	// bl 0x82800718
	ctx.lr = 0x8284A684;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a6a4
	if (ctx.cr6.eq) goto loc_8284A6A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,22974
	ctx.r10.s64 = 22974;
	// addi r9,r11,-14600
	ctx.r9.s64 = ctx.r11.s64 + -14600;
	// stw r9,15228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15228, ctx.r9.u32);
	// stw r30,11224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11224, ctx.r30.u32);
	// stw r10,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r10.u32);
loc_8284A6A4:
	// li r3,22988
	ctx.r3.s64 = 22988;
	// bl 0x82800718
	ctx.lr = 0x8284A6AC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a6cc
	if (ctx.cr6.eq) goto loc_8284A6CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,22988
	ctx.r10.s64 = 22988;
	// addi r9,r11,-14540
	ctx.r9.s64 = ctx.r11.s64 + -14540;
	// stw r9,15232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15232, ctx.r9.u32);
	// stw r30,11228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11228, ctx.r30.u32);
	// stw r10,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r10.u32);
loc_8284A6CC:
	// li r3,23001
	ctx.r3.s64 = 23001;
	// bl 0x82800718
	ctx.lr = 0x8284A6D4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a6f4
	if (ctx.cr6.eq) goto loc_8284A6F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23001
	ctx.r10.s64 = 23001;
	// addi r9,r11,-14488
	ctx.r9.s64 = ctx.r11.s64 + -14488;
	// stw r9,15236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15236, ctx.r9.u32);
	// stw r30,11232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11232, ctx.r30.u32);
	// stw r10,3224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3224, ctx.r10.u32);
loc_8284A6F4:
	// li r3,23035
	ctx.r3.s64 = 23035;
	// bl 0x82800718
	ctx.lr = 0x8284A6FC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a71c
	if (ctx.cr6.eq) goto loc_8284A71C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23035
	ctx.r10.s64 = 23035;
	// addi r9,r11,-14424
	ctx.r9.s64 = ctx.r11.s64 + -14424;
	// stw r9,15240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15240, ctx.r9.u32);
	// stw r30,11236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11236, ctx.r30.u32);
	// stw r10,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r10.u32);
loc_8284A71C:
	// li r3,23055
	ctx.r3.s64 = 23055;
	// bl 0x82800718
	ctx.lr = 0x8284A724;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a744
	if (ctx.cr6.eq) goto loc_8284A744;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23055
	ctx.r10.s64 = 23055;
	// addi r9,r11,-14368
	ctx.r9.s64 = ctx.r11.s64 + -14368;
	// stw r9,15244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15244, ctx.r9.u32);
	// stw r30,11240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11240, ctx.r30.u32);
	// stw r10,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r10.u32);
loc_8284A744:
	// li r3,23074
	ctx.r3.s64 = 23074;
	// bl 0x82800718
	ctx.lr = 0x8284A74C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a76c
	if (ctx.cr6.eq) goto loc_8284A76C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23074
	ctx.r10.s64 = 23074;
	// addi r9,r11,-14316
	ctx.r9.s64 = ctx.r11.s64 + -14316;
	// stw r9,15248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15248, ctx.r9.u32);
	// stw r30,11244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11244, ctx.r30.u32);
	// stw r10,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r10.u32);
loc_8284A76C:
	// li r3,23091
	ctx.r3.s64 = 23091;
	// bl 0x82800718
	ctx.lr = 0x8284A774;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a794
	if (ctx.cr6.eq) goto loc_8284A794;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23091
	ctx.r10.s64 = 23091;
	// addi r9,r11,-14260
	ctx.r9.s64 = ctx.r11.s64 + -14260;
	// stw r9,15252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15252, ctx.r9.u32);
	// stw r30,11248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11248, ctx.r30.u32);
	// stw r10,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r10.u32);
loc_8284A794:
	// li r3,23105
	ctx.r3.s64 = 23105;
	// bl 0x82800718
	ctx.lr = 0x8284A79C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a7bc
	if (ctx.cr6.eq) goto loc_8284A7BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23105
	ctx.r10.s64 = 23105;
	// addi r9,r11,-14200
	ctx.r9.s64 = ctx.r11.s64 + -14200;
	// stw r9,15256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15256, ctx.r9.u32);
	// stw r30,11252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11252, ctx.r30.u32);
	// stw r10,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r10.u32);
loc_8284A7BC:
	// li r3,23118
	ctx.r3.s64 = 23118;
	// bl 0x82800718
	ctx.lr = 0x8284A7C4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a7e4
	if (ctx.cr6.eq) goto loc_8284A7E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23118
	ctx.r10.s64 = 23118;
	// addi r9,r11,-14144
	ctx.r9.s64 = ctx.r11.s64 + -14144;
	// stw r9,15260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15260, ctx.r9.u32);
	// stw r30,11256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11256, ctx.r30.u32);
	// stw r10,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r10.u32);
loc_8284A7E4:
	// li r3,23212
	ctx.r3.s64 = 23212;
	// bl 0x82800718
	ctx.lr = 0x8284A7EC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a80c
	if (ctx.cr6.eq) goto loc_8284A80C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23212
	ctx.r10.s64 = 23212;
	// addi r9,r11,-14080
	ctx.r9.s64 = ctx.r11.s64 + -14080;
	// stw r9,15264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15264, ctx.r9.u32);
	// stw r30,11260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11260, ctx.r30.u32);
	// stw r10,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r10.u32);
loc_8284A80C:
	// li r3,23200
	ctx.r3.s64 = 23200;
	// bl 0x82800718
	ctx.lr = 0x8284A814;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a834
	if (ctx.cr6.eq) goto loc_8284A834;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23200
	ctx.r10.s64 = 23200;
	// addi r9,r11,-14024
	ctx.r9.s64 = ctx.r11.s64 + -14024;
	// stw r9,15268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15268, ctx.r9.u32);
	// stw r30,11264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11264, ctx.r30.u32);
	// stw r10,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r10.u32);
loc_8284A834:
	// li r3,23228
	ctx.r3.s64 = 23228;
	// bl 0x82800718
	ctx.lr = 0x8284A83C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a85c
	if (ctx.cr6.eq) goto loc_8284A85C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23228
	ctx.r10.s64 = 23228;
	// addi r9,r11,-13968
	ctx.r9.s64 = ctx.r11.s64 + -13968;
	// stw r9,15272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15272, ctx.r9.u32);
	// stw r30,11268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11268, ctx.r30.u32);
	// stw r10,3260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3260, ctx.r10.u32);
loc_8284A85C:
	// li r3,23249
	ctx.r3.s64 = 23249;
	// bl 0x82800718
	ctx.lr = 0x8284A864;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a884
	if (ctx.cr6.eq) goto loc_8284A884;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23249
	ctx.r10.s64 = 23249;
	// addi r9,r11,-13916
	ctx.r9.s64 = ctx.r11.s64 + -13916;
	// stw r9,15276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15276, ctx.r9.u32);
	// stw r30,11272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11272, ctx.r30.u32);
	// stw r10,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r10.u32);
loc_8284A884:
	// li r3,23256
	ctx.r3.s64 = 23256;
	// bl 0x82800718
	ctx.lr = 0x8284A88C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a8ac
	if (ctx.cr6.eq) goto loc_8284A8AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23256
	ctx.r10.s64 = 23256;
	// addi r9,r11,-13864
	ctx.r9.s64 = ctx.r11.s64 + -13864;
	// stw r9,15280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15280, ctx.r9.u32);
	// stw r30,11276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11276, ctx.r30.u32);
	// stw r10,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r10.u32);
loc_8284A8AC:
	// li r3,23376
	ctx.r3.s64 = 23376;
	// bl 0x82800718
	ctx.lr = 0x8284A8B4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a8d4
	if (ctx.cr6.eq) goto loc_8284A8D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23376
	ctx.r10.s64 = 23376;
	// addi r9,r11,-13812
	ctx.r9.s64 = ctx.r11.s64 + -13812;
	// stw r9,15284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15284, ctx.r9.u32);
	// stw r30,11280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11280, ctx.r30.u32);
	// stw r10,3272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3272, ctx.r10.u32);
loc_8284A8D4:
	// li r3,23425
	ctx.r3.s64 = 23425;
	// bl 0x82800718
	ctx.lr = 0x8284A8DC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a8fc
	if (ctx.cr6.eq) goto loc_8284A8FC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23425
	ctx.r10.s64 = 23425;
	// addi r9,r11,-13760
	ctx.r9.s64 = ctx.r11.s64 + -13760;
	// stw r9,15288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15288, ctx.r9.u32);
	// stw r30,11284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11284, ctx.r30.u32);
	// stw r10,3276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3276, ctx.r10.u32);
loc_8284A8FC:
	// li r3,23496
	ctx.r3.s64 = 23496;
	// bl 0x82800718
	ctx.lr = 0x8284A904;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a924
	if (ctx.cr6.eq) goto loc_8284A924;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23496
	ctx.r10.s64 = 23496;
	// addi r9,r11,-13708
	ctx.r9.s64 = ctx.r11.s64 + -13708;
	// stw r9,15292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15292, ctx.r9.u32);
	// stw r30,11288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11288, ctx.r30.u32);
	// stw r10,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r10.u32);
loc_8284A924:
	// li r3,23522
	ctx.r3.s64 = 23522;
	// bl 0x82800718
	ctx.lr = 0x8284A92C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a94c
	if (ctx.cr6.eq) goto loc_8284A94C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23522
	ctx.r10.s64 = 23522;
	// addi r9,r11,-13656
	ctx.r9.s64 = ctx.r11.s64 + -13656;
	// stw r9,15296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15296, ctx.r9.u32);
	// stw r30,11292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11292, ctx.r30.u32);
	// stw r10,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r10.u32);
loc_8284A94C:
	// li r3,23527
	ctx.r3.s64 = 23527;
	// bl 0x82800718
	ctx.lr = 0x8284A954;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a974
	if (ctx.cr6.eq) goto loc_8284A974;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23527
	ctx.r10.s64 = 23527;
	// addi r9,r11,-13600
	ctx.r9.s64 = ctx.r11.s64 + -13600;
	// stw r9,15300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15300, ctx.r9.u32);
	// stw r30,11296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11296, ctx.r30.u32);
	// stw r10,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r10.u32);
loc_8284A974:
	// li r3,23535
	ctx.r3.s64 = 23535;
	// bl 0x82800718
	ctx.lr = 0x8284A97C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a99c
	if (ctx.cr6.eq) goto loc_8284A99C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23535
	ctx.r10.s64 = 23535;
	// addi r9,r11,-13544
	ctx.r9.s64 = ctx.r11.s64 + -13544;
	// stw r9,15304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15304, ctx.r9.u32);
	// stw r30,11300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11300, ctx.r30.u32);
	// stw r10,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r10.u32);
loc_8284A99C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284A9A4"))) PPC_WEAK_FUNC(sub_8284A9A4);
PPC_FUNC_IMPL(__imp__sub_8284A9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284A9A8"))) PPC_WEAK_FUNC(sub_8284A9A8);
PPC_FUNC_IMPL(__imp__sub_8284A9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8284A9B0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,20053
	ctx.r3.s64 = 20053;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82800718
	ctx.lr = 0x8284A9C8;
	sub_82800718(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284a9ec
	if (ctx.cr6.eq) goto loc_8284A9EC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,20053
	ctx.r10.s64 = 20053;
	// addi r9,r11,31972
	ctx.r9.s64 = ctx.r11.s64 + 31972;
	// stw r9,12096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12096, ctx.r9.u32);
	// stw r30,8092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8092, ctx.r30.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_8284A9EC:
	// li r3,19703
	ctx.r3.s64 = 19703;
	// bl 0x82800718
	ctx.lr = 0x8284A9F4;
	sub_82800718(ctx, base);
	// li r21,19703
	ctx.r21.s64 = 19703;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aa14
	if (ctx.cr6.eq) goto loc_8284AA14;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,32000
	ctx.r10.s64 = ctx.r11.s64 + 32000;
	// stw r10,12100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12100, ctx.r10.u32);
	// stw r30,8096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8096, ctx.r30.u32);
	// stw r21,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r21.u32);
loc_8284AA14:
	// li r3,22605
	ctx.r3.s64 = 22605;
	// bl 0x82800718
	ctx.lr = 0x8284AA1C;
	sub_82800718(ctx, base);
	// li r19,22605
	ctx.r19.s64 = 22605;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aa3c
	if (ctx.cr6.eq) goto loc_8284AA3C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,32028
	ctx.r10.s64 = ctx.r11.s64 + 32028;
	// stw r10,12104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12104, ctx.r10.u32);
	// stw r30,8100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8100, ctx.r30.u32);
	// stw r19,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r19.u32);
loc_8284AA3C:
	// li r3,20042
	ctx.r3.s64 = 20042;
	// bl 0x82800718
	ctx.lr = 0x8284AA44;
	sub_82800718(ctx, base);
	// li r20,20042
	ctx.r20.s64 = 20042;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aa64
	if (ctx.cr6.eq) goto loc_8284AA64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,32056
	ctx.r10.s64 = ctx.r11.s64 + 32056;
	// stw r10,12108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12108, ctx.r10.u32);
	// stw r30,8104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8104, ctx.r30.u32);
	// stw r20,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r20.u32);
loc_8284AA64:
	// li r3,19703
	ctx.r3.s64 = 19703;
	// bl 0x82800718
	ctx.lr = 0x8284AA6C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aa88
	if (ctx.cr6.eq) goto loc_8284AA88;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,32084
	ctx.r10.s64 = ctx.r11.s64 + 32084;
	// stw r10,12112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12112, ctx.r10.u32);
	// stw r30,8108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8108, ctx.r30.u32);
	// stw r21,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r21.u32);
loc_8284AA88:
	// li r3,22605
	ctx.r3.s64 = 22605;
	// bl 0x82800718
	ctx.lr = 0x8284AA90;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aaac
	if (ctx.cr6.eq) goto loc_8284AAAC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,32116
	ctx.r10.s64 = ctx.r11.s64 + 32116;
	// stw r10,12116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12116, ctx.r10.u32);
	// stw r30,8112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8112, ctx.r30.u32);
	// stw r19,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r19.u32);
loc_8284AAAC:
	// li r3,19703
	ctx.r3.s64 = 19703;
	// bl 0x82800718
	ctx.lr = 0x8284AAB4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aad0
	if (ctx.cr6.eq) goto loc_8284AAD0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,32148
	ctx.r10.s64 = ctx.r11.s64 + 32148;
	// stw r10,12120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12120, ctx.r10.u32);
	// stw r30,8116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8116, ctx.r30.u32);
	// stw r21,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r21.u32);
loc_8284AAD0:
	// li r3,8150
	ctx.r3.s64 = 8150;
	// bl 0x82800718
	ctx.lr = 0x8284AAD8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aaf8
	if (ctx.cr6.eq) goto loc_8284AAF8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8150
	ctx.r10.s64 = 8150;
	// addi r9,r11,32180
	ctx.r9.s64 = ctx.r11.s64 + 32180;
	// stw r9,12416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12416, ctx.r9.u32);
	// stw r30,8412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8412, ctx.r30.u32);
	// stw r10,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r10.u32);
loc_8284AAF8:
	// li r3,8104
	ctx.r3.s64 = 8104;
	// bl 0x82800718
	ctx.lr = 0x8284AB00;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ab20
	if (ctx.cr6.eq) goto loc_8284AB20;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8104
	ctx.r10.s64 = 8104;
	// addi r9,r11,32232
	ctx.r9.s64 = ctx.r11.s64 + 32232;
	// stw r9,12420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12420, ctx.r9.u32);
	// stw r30,8416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8416, ctx.r30.u32);
	// stw r10,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
loc_8284AB20:
	// li r3,8158
	ctx.r3.s64 = 8158;
	// bl 0x82800718
	ctx.lr = 0x8284AB28;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ab48
	if (ctx.cr6.eq) goto loc_8284AB48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8158
	ctx.r10.s64 = 8158;
	// addi r9,r11,32284
	ctx.r9.s64 = ctx.r11.s64 + 32284;
	// stw r9,12424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12424, ctx.r9.u32);
	// stw r30,8420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8420, ctx.r30.u32);
	// stw r10,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
loc_8284AB48:
	// li r3,8161
	ctx.r3.s64 = 8161;
	// bl 0x82800718
	ctx.lr = 0x8284AB50;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ab70
	if (ctx.cr6.eq) goto loc_8284AB70;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8161
	ctx.r10.s64 = 8161;
	// addi r9,r11,32336
	ctx.r9.s64 = ctx.r11.s64 + 32336;
	// stw r9,12428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12428, ctx.r9.u32);
	// stw r30,8424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8424, ctx.r30.u32);
	// stw r10,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
loc_8284AB70:
	// li r3,8166
	ctx.r3.s64 = 8166;
	// bl 0x82800718
	ctx.lr = 0x8284AB78;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ab98
	if (ctx.cr6.eq) goto loc_8284AB98;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8166
	ctx.r10.s64 = 8166;
	// addi r9,r11,32400
	ctx.r9.s64 = ctx.r11.s64 + 32400;
	// stw r9,12432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12432, ctx.r9.u32);
	// stw r30,8428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8428, ctx.r30.u32);
	// stw r10,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r10.u32);
loc_8284AB98:
	// li r3,8168
	ctx.r3.s64 = 8168;
	// bl 0x82800718
	ctx.lr = 0x8284ABA0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284abc0
	if (ctx.cr6.eq) goto loc_8284ABC0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8168
	ctx.r10.s64 = 8168;
	// addi r9,r11,32448
	ctx.r9.s64 = ctx.r11.s64 + 32448;
	// stw r9,12436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12436, ctx.r9.u32);
	// stw r30,8432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8432, ctx.r30.u32);
	// stw r10,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
loc_8284ABC0:
	// li r3,22233
	ctx.r3.s64 = 22233;
	// bl 0x82800718
	ctx.lr = 0x8284ABC8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284abe8
	if (ctx.cr6.eq) goto loc_8284ABE8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,22233
	ctx.r10.s64 = 22233;
	// addi r9,r11,32496
	ctx.r9.s64 = ctx.r11.s64 + 32496;
	// stw r9,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r9.u32);
	// stw r30,9188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9188, ctx.r30.u32);
	// stw r10,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r10.u32);
loc_8284ABE8:
	// li r3,22236
	ctx.r3.s64 = 22236;
	// bl 0x82800718
	ctx.lr = 0x8284ABF0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ac10
	if (ctx.cr6.eq) goto loc_8284AC10;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,22236
	ctx.r10.s64 = 22236;
	// addi r9,r11,32568
	ctx.r9.s64 = ctx.r11.s64 + 32568;
	// stw r9,13196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13196, ctx.r9.u32);
	// stw r30,9192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9192, ctx.r30.u32);
	// stw r10,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r10.u32);
loc_8284AC10:
	// li r3,8070
	ctx.r3.s64 = 8070;
	// bl 0x82800718
	ctx.lr = 0x8284AC18;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ac38
	if (ctx.cr6.eq) goto loc_8284AC38;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8070
	ctx.r10.s64 = 8070;
	// addi r9,r11,32636
	ctx.r9.s64 = ctx.r11.s64 + 32636;
	// stw r9,12440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12440, ctx.r9.u32);
	// stw r30,8436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8436, ctx.r30.u32);
	// stw r10,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
loc_8284AC38:
	// li r3,8082
	ctx.r3.s64 = 8082;
	// bl 0x82800718
	ctx.lr = 0x8284AC40;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ac60
	if (ctx.cr6.eq) goto loc_8284AC60;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,8082
	ctx.r10.s64 = 8082;
	// addi r9,r11,32700
	ctx.r9.s64 = ctx.r11.s64 + 32700;
	// stw r9,12444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12444, ctx.r9.u32);
	// stw r30,8440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8440, ctx.r30.u32);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
loc_8284AC60:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284AC68;
	sub_82800718(ctx, base);
	// li r25,18313
	ctx.r25.s64 = 18313;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ac88
	if (ctx.cr6.eq) goto loc_8284AC88;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,32764
	ctx.r10.s64 = ctx.r11.s64 + 32764;
	// stw r10,12448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12448, ctx.r10.u32);
	// stw r30,8444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8444, ctx.r30.u32);
	// stw r25,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r25.u32);
loc_8284AC88:
	// li r3,7816
	ctx.r3.s64 = 7816;
	// bl 0x82800718
	ctx.lr = 0x8284AC90;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284acb0
	if (ctx.cr6.eq) goto loc_8284ACB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7816
	ctx.r10.s64 = 7816;
	// addi r9,r11,-32720
	ctx.r9.s64 = ctx.r11.s64 + -32720;
	// stw r9,12452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12452, ctx.r9.u32);
	// stw r30,8448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8448, ctx.r30.u32);
	// stw r10,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r10.u32);
loc_8284ACB0:
	// li r3,7814
	ctx.r3.s64 = 7814;
	// bl 0x82800718
	ctx.lr = 0x8284ACB8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284acd8
	if (ctx.cr6.eq) goto loc_8284ACD8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7814
	ctx.r10.s64 = 7814;
	// addi r9,r11,-32680
	ctx.r9.s64 = ctx.r11.s64 + -32680;
	// stw r9,12456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12456, ctx.r9.u32);
	// stw r30,8452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8452, ctx.r30.u32);
	// stw r10,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r10.u32);
loc_8284ACD8:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284ACE0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284acfc
	if (ctx.cr6.eq) goto loc_8284ACFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-32632
	ctx.r10.s64 = ctx.r11.s64 + -32632;
	// stw r10,12460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12460, ctx.r10.u32);
	// stw r30,8456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8456, ctx.r30.u32);
	// stw r25,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r25.u32);
loc_8284ACFC:
	// li r3,8197
	ctx.r3.s64 = 8197;
	// bl 0x82800718
	ctx.lr = 0x8284AD04;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ad24
	if (ctx.cr6.eq) goto loc_8284AD24;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,8197
	ctx.r10.s64 = 8197;
	// addi r9,r11,-32580
	ctx.r9.s64 = ctx.r11.s64 + -32580;
	// stw r9,12464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12464, ctx.r9.u32);
	// stw r30,8460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8460, ctx.r30.u32);
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
loc_8284AD24:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284AD2C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ad48
	if (ctx.cr6.eq) goto loc_8284AD48;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-32536
	ctx.r10.s64 = ctx.r11.s64 + -32536;
	// stw r10,12468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12468, ctx.r10.u32);
	// stw r30,8464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8464, ctx.r30.u32);
	// stw r25,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r25.u32);
loc_8284AD48:
	// li r3,7965
	ctx.r3.s64 = 7965;
	// bl 0x82800718
	ctx.lr = 0x8284AD50;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ad70
	if (ctx.cr6.eq) goto loc_8284AD70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7965
	ctx.r10.s64 = 7965;
	// addi r9,r11,-32488
	ctx.r9.s64 = ctx.r11.s64 + -32488;
	// stw r9,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r9.u32);
	// stw r30,9492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9492, ctx.r30.u32);
	// stw r10,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r10.u32);
loc_8284AD70:
	// li r3,8042
	ctx.r3.s64 = 8042;
	// bl 0x82800718
	ctx.lr = 0x8284AD78;
	sub_82800718(ctx, base);
	// li r22,513
	ctx.r22.s64 = 513;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ad9c
	if (ctx.cr6.eq) goto loc_8284AD9C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,8042
	ctx.r10.s64 = 8042;
	// addi r9,r11,-32432
	ctx.r9.s64 = ctx.r11.s64 + -32432;
	// stw r9,12472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12472, ctx.r9.u32);
	// stw r22,8468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8468, ctx.r22.u32);
	// stw r10,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
loc_8284AD9C:
	// li r3,8044
	ctx.r3.s64 = 8044;
	// bl 0x82800718
	ctx.lr = 0x8284ADA4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284adc4
	if (ctx.cr6.eq) goto loc_8284ADC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,8044
	ctx.r10.s64 = 8044;
	// addi r9,r11,-32376
	ctx.r9.s64 = ctx.r11.s64 + -32376;
	// stw r9,12476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12476, ctx.r9.u32);
	// stw r30,8472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8472, ctx.r30.u32);
	// stw r10,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r10.u32);
loc_8284ADC4:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284ADCC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ade8
	if (ctx.cr6.eq) goto loc_8284ADE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-32324
	ctx.r10.s64 = ctx.r11.s64 + -32324;
	// stw r10,13200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13200, ctx.r10.u32);
	// stw r30,9196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9196, ctx.r30.u32);
	// stw r25,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r25.u32);
loc_8284ADE8:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284ADF0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ae0c
	if (ctx.cr6.eq) goto loc_8284AE0C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-32268
	ctx.r10.s64 = ctx.r11.s64 + -32268;
	// stw r10,13204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13204, ctx.r10.u32);
	// stw r30,9200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9200, ctx.r30.u32);
	// stw r25,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r25.u32);
loc_8284AE0C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r24,33
	ctx.r24.s64 = 33;
	// addi r10,r11,-32228
	ctx.r10.s64 = ctx.r11.s64 + -32228;
	// li r9,14185
	ctx.r9.s64 = 14185;
	// stw r10,13276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13276, ctx.r10.u32);
	// li r3,3951
	ctx.r3.s64 = 3951;
	// stw r24,9272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9272, ctx.r24.u32);
	// stw r9,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r9.u32);
	// bl 0x82800718
	ctx.lr = 0x8284AE30;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ae50
	if (ctx.cr6.eq) goto loc_8284AE50;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,3951
	ctx.r10.s64 = 3951;
	// addi r9,r11,-32184
	ctx.r9.s64 = ctx.r11.s64 + -32184;
	// stw r9,12480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12480, ctx.r9.u32);
	// stw r30,8476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8476, ctx.r30.u32);
	// stw r10,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
loc_8284AE50:
	// li r3,3372
	ctx.r3.s64 = 3372;
	// bl 0x82800718
	ctx.lr = 0x8284AE58;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ae78
	if (ctx.cr6.eq) goto loc_8284AE78;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,3372
	ctx.r10.s64 = 3372;
	// addi r9,r11,-32136
	ctx.r9.s64 = ctx.r11.s64 + -32136;
	// stw r9,12484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12484, ctx.r9.u32);
	// stw r30,8480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8480, ctx.r30.u32);
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
loc_8284AE78:
	// li r3,3406
	ctx.r3.s64 = 3406;
	// bl 0x82800718
	ctx.lr = 0x8284AE80;
	sub_82800718(ctx, base);
	// li r29,3406
	ctx.r29.s64 = 3406;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aea0
	if (ctx.cr6.eq) goto loc_8284AEA0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-32080
	ctx.r10.s64 = ctx.r11.s64 + -32080;
	// stw r10,12488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12488, ctx.r10.u32);
	// stw r30,8484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8484, ctx.r30.u32);
	// stw r29,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r29.u32);
loc_8284AEA0:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284AEA8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aec4
	if (ctx.cr6.eq) goto loc_8284AEC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-32032
	ctx.r10.s64 = ctx.r11.s64 + -32032;
	// stw r10,12492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12492, ctx.r10.u32);
	// stw r30,8488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8488, ctx.r30.u32);
	// stw r25,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r25.u32);
loc_8284AEC4:
	// li r3,6937
	ctx.r3.s64 = 6937;
	// bl 0x82800718
	ctx.lr = 0x8284AECC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aeec
	if (ctx.cr6.eq) goto loc_8284AEEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6937
	ctx.r10.s64 = 6937;
	// addi r9,r11,-31976
	ctx.r9.s64 = ctx.r11.s64 + -31976;
	// stw r9,12496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12496, ctx.r9.u32);
	// stw r30,8492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8492, ctx.r30.u32);
	// stw r10,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r10.u32);
loc_8284AEEC:
	// li r3,6943
	ctx.r3.s64 = 6943;
	// bl 0x82800718
	ctx.lr = 0x8284AEF4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284af14
	if (ctx.cr6.eq) goto loc_8284AF14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6943
	ctx.r10.s64 = 6943;
	// addi r9,r11,-31928
	ctx.r9.s64 = ctx.r11.s64 + -31928;
	// stw r9,13216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13216, ctx.r9.u32);
	// stw r30,9212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9212, ctx.r30.u32);
	// stw r10,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r10.u32);
loc_8284AF14:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284AF1C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284af38
	if (ctx.cr6.eq) goto loc_8284AF38;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-31872
	ctx.r10.s64 = ctx.r11.s64 + -31872;
	// stw r10,12500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12500, ctx.r10.u32);
	// stw r30,8496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8496, ctx.r30.u32);
	// stw r25,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r25.u32);
loc_8284AF38:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284AF40;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284af5c
	if (ctx.cr6.eq) goto loc_8284AF5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-31816
	ctx.r10.s64 = ctx.r11.s64 + -31816;
	// stw r10,12504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12504, ctx.r10.u32);
	// stw r30,8500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8500, ctx.r30.u32);
	// stw r25,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r25.u32);
loc_8284AF5C:
	// li r3,4065
	ctx.r3.s64 = 4065;
	// bl 0x82800718
	ctx.lr = 0x8284AF64;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284af84
	if (ctx.cr6.eq) goto loc_8284AF84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4065
	ctx.r10.s64 = 4065;
	// addi r9,r11,-31764
	ctx.r9.s64 = ctx.r11.s64 + -31764;
	// stw r9,12508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12508, ctx.r9.u32);
	// stw r30,8504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8504, ctx.r30.u32);
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
loc_8284AF84:
	// li r3,3435
	ctx.r3.s64 = 3435;
	// bl 0x82800718
	ctx.lr = 0x8284AF8C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284afac
	if (ctx.cr6.eq) goto loc_8284AFAC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,3435
	ctx.r10.s64 = 3435;
	// addi r9,r11,-31720
	ctx.r9.s64 = ctx.r11.s64 + -31720;
	// stw r9,12512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12512, ctx.r9.u32);
	// stw r30,8508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8508, ctx.r30.u32);
	// stw r10,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
loc_8284AFAC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,41
	ctx.r10.s64 = 41;
	// addi r9,r11,-31672
	ctx.r9.s64 = ctx.r11.s64 + -31672;
	// li r8,23183
	ctx.r8.s64 = 23183;
	// stw r9,13484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13484, ctx.r9.u32);
	// li r3,3438
	ctx.r3.s64 = 3438;
	// stw r10,9480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9480, ctx.r10.u32);
	// stw r8,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r8.u32);
	// bl 0x82800718
	ctx.lr = 0x8284AFD0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284aff0
	if (ctx.cr6.eq) goto loc_8284AFF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,3438
	ctx.r10.s64 = 3438;
	// addi r9,r11,-31608
	ctx.r9.s64 = ctx.r11.s64 + -31608;
	// stw r9,12516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12516, ctx.r9.u32);
	// stw r30,8512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8512, ctx.r30.u32);
	// stw r10,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r10.u32);
loc_8284AFF0:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284AFF8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b014
	if (ctx.cr6.eq) goto loc_8284B014;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-31560
	ctx.r10.s64 = ctx.r11.s64 + -31560;
	// stw r10,12520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12520, ctx.r10.u32);
	// stw r30,8516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8516, ctx.r30.u32);
	// stw r25,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r25.u32);
loc_8284B014:
	// li r3,7322
	ctx.r3.s64 = 7322;
	// bl 0x82800718
	ctx.lr = 0x8284B01C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b03c
	if (ctx.cr6.eq) goto loc_8284B03C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7322
	ctx.r10.s64 = 7322;
	// addi r9,r11,-31504
	ctx.r9.s64 = ctx.r11.s64 + -31504;
	// stw r9,12524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12524, ctx.r9.u32);
	// stw r30,8520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8520, ctx.r30.u32);
	// stw r10,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r10.u32);
loc_8284B03C:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284B044;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b060
	if (ctx.cr6.eq) goto loc_8284B060;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-31456
	ctx.r10.s64 = ctx.r11.s64 + -31456;
	// stw r10,12528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12528, ctx.r10.u32);
	// stw r30,8524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8524, ctx.r30.u32);
	// stw r25,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r25.u32);
loc_8284B060:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284B068;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b084
	if (ctx.cr6.eq) goto loc_8284B084;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-31392
	ctx.r10.s64 = ctx.r11.s64 + -31392;
	// stw r10,13212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13212, ctx.r10.u32);
	// stw r30,9208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9208, ctx.r30.u32);
	// stw r25,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r25.u32);
loc_8284B084:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284B08C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b0a8
	if (ctx.cr6.eq) goto loc_8284B0A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-31320
	ctx.r10.s64 = ctx.r11.s64 + -31320;
	// stw r10,12532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12532, ctx.r10.u32);
	// stw r30,8528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8528, ctx.r30.u32);
	// stw r25,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r25.u32);
loc_8284B0A8:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284B0B0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b0cc
	if (ctx.cr6.eq) goto loc_8284B0CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-31264
	ctx.r10.s64 = ctx.r11.s64 + -31264;
	// stw r10,12536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12536, ctx.r10.u32);
	// stw r30,8532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8532, ctx.r30.u32);
	// stw r25,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r25.u32);
loc_8284B0CC:
	// li r3,4140
	ctx.r3.s64 = 4140;
	// bl 0x82800718
	ctx.lr = 0x8284B0D4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b0f4
	if (ctx.cr6.eq) goto loc_8284B0F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4140
	ctx.r10.s64 = 4140;
	// addi r9,r11,-31212
	ctx.r9.s64 = ctx.r11.s64 + -31212;
	// stw r9,12540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12540, ctx.r9.u32);
	// stw r30,8536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8536, ctx.r30.u32);
	// stw r10,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r10.u32);
loc_8284B0F4:
	// li r3,7327
	ctx.r3.s64 = 7327;
	// bl 0x82800718
	ctx.lr = 0x8284B0FC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b11c
	if (ctx.cr6.eq) goto loc_8284B11C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7327
	ctx.r10.s64 = 7327;
	// addi r9,r11,-31168
	ctx.r9.s64 = ctx.r11.s64 + -31168;
	// stw r9,13208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13208, ctx.r9.u32);
	// stw r30,9204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9204, ctx.r30.u32);
	// stw r10,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r10.u32);
loc_8284B11C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-31124
	ctx.r9.s64 = ctx.r11.s64 + -31124;
	// li r23,45
	ctx.r23.s64 = 45;
	// stw r9,13280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13280, ctx.r9.u32);
	// addi r8,r10,-31084
	ctx.r8.s64 = ctx.r10.s64 + -31084;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r23,9276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9276, ctx.r23.u32);
	// li r26,37
	ctx.r26.s64 = 37;
	// stw r29,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r29.u32);
	// li r6,14468
	ctx.r6.s64 = 14468;
	// stw r8,13284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13284, ctx.r8.u32);
	// addi r5,r7,-31040
	ctx.r5.s64 = ctx.r7.s64 + -31040;
	// stw r26,9280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9280, ctx.r26.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r6,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r6.u32);
	// li r3,15349
	ctx.r3.s64 = 15349;
	// stw r5,13288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13288, ctx.r5.u32);
	// addi r11,r4,-30988
	ctx.r11.s64 = ctx.r4.s64 + -30988;
	// stw r26,9284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9284, ctx.r26.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r3.u32);
	// li r9,15345
	ctx.r9.s64 = 15345;
	// stw r11,13292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13292, ctx.r11.u32);
	// addi r8,r10,-30924
	ctx.r8.s64 = ctx.r10.s64 + -30924;
	// stw r26,9288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9288, ctx.r26.u32);
	// stw r9,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r9.u32);
	// li r7,15468
	ctx.r7.s64 = 15468;
	// stw r8,13296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13296, ctx.r8.u32);
	// li r3,4186
	ctx.r3.s64 = 4186;
	// stw r26,9292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9292, ctx.r26.u32);
	// stw r7,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r7.u32);
	// bl 0x82800718
	ctx.lr = 0x8284B1A0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b1c0
	if (ctx.cr6.eq) goto loc_8284B1C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4186
	ctx.r10.s64 = 4186;
	// addi r9,r11,-30860
	ctx.r9.s64 = ctx.r11.s64 + -30860;
	// stw r9,12544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12544, ctx.r9.u32);
	// stw r30,8540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8540, ctx.r30.u32);
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
loc_8284B1C0:
	// li r3,20886
	ctx.r3.s64 = 20886;
	// bl 0x82800718
	ctx.lr = 0x8284B1C8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b1e8
	if (ctx.cr6.eq) goto loc_8284B1E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,20886
	ctx.r10.s64 = 20886;
	// addi r9,r11,-30808
	ctx.r9.s64 = ctx.r11.s64 + -30808;
	// stw r9,13220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13220, ctx.r9.u32);
	// stw r30,9216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9216, ctx.r30.u32);
	// stw r10,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r10.u32);
loc_8284B1E8:
	// li r3,4189
	ctx.r3.s64 = 4189;
	// bl 0x82800718
	ctx.lr = 0x8284B1F0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b210
	if (ctx.cr6.eq) goto loc_8284B210;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4189
	ctx.r10.s64 = 4189;
	// addi r9,r11,-30748
	ctx.r9.s64 = ctx.r11.s64 + -30748;
	// stw r9,13224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13224, ctx.r9.u32);
	// stw r30,9220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9220, ctx.r30.u32);
	// stw r10,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r10.u32);
loc_8284B210:
	// li r3,4198
	ctx.r3.s64 = 4198;
	// bl 0x82800718
	ctx.lr = 0x8284B218;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b238
	if (ctx.cr6.eq) goto loc_8284B238;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4198
	ctx.r10.s64 = 4198;
	// addi r9,r11,-30692
	ctx.r9.s64 = ctx.r11.s64 + -30692;
	// stw r9,12548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12548, ctx.r9.u32);
	// stw r30,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r30.u32);
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
loc_8284B238:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4141
	ctx.r10.s64 = 4141;
	// addi r9,r11,-30644
	ctx.r9.s64 = ctx.r11.s64 + -30644;
	// li r8,15473
	ctx.r8.s64 = 15473;
	// stw r9,13300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13300, ctx.r9.u32);
	// li r3,4212
	ctx.r3.s64 = 4212;
	// stw r10,9296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9296, ctx.r10.u32);
	// stw r8,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r8.u32);
	// bl 0x82800718
	ctx.lr = 0x8284B25C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b27c
	if (ctx.cr6.eq) goto loc_8284B27C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4212
	ctx.r10.s64 = 4212;
	// addi r9,r11,-30592
	ctx.r9.s64 = ctx.r11.s64 + -30592;
	// stw r9,12552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12552, ctx.r9.u32);
	// stw r30,8548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8548, ctx.r30.u32);
	// stw r10,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r10.u32);
loc_8284B27C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-30540
	ctx.r9.s64 = ctx.r11.s64 + -30540;
	// li r8,15928
	ctx.r8.s64 = 15928;
	// stw r9,13304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13304, ctx.r9.u32);
	// addi r7,r10,-30484
	ctx.r7.s64 = ctx.r10.s64 + -30484;
	// stw r26,9300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9300, ctx.r26.u32);
	// li r6,15480
	ctx.r6.s64 = 15480;
	// stw r8,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r8.u32);
	// li r3,4227
	ctx.r3.s64 = 4227;
	// stw r7,13308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13308, ctx.r7.u32);
	// stw r26,9304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9304, ctx.r26.u32);
	// stw r6,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r6.u32);
	// bl 0x82800718
	ctx.lr = 0x8284B2B4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b2d4
	if (ctx.cr6.eq) goto loc_8284B2D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4227
	ctx.r10.s64 = 4227;
	// addi r9,r11,-30436
	ctx.r9.s64 = ctx.r11.s64 + -30436;
	// stw r9,12556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12556, ctx.r9.u32);
	// stw r30,8552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8552, ctx.r30.u32);
	// stw r10,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r10.u32);
loc_8284B2D4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,16071
	ctx.r10.s64 = 16071;
	// addi r9,r11,-30384
	ctx.r9.s64 = ctx.r11.s64 + -30384;
	// li r3,4239
	ctx.r3.s64 = 4239;
	// stw r9,13312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13312, ctx.r9.u32);
	// stw r26,9308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9308, ctx.r26.u32);
	// stw r10,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r10.u32);
	// bl 0x82800718
	ctx.lr = 0x8284B2F4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b314
	if (ctx.cr6.eq) goto loc_8284B314;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4239
	ctx.r10.s64 = 4239;
	// addi r9,r11,-30328
	ctx.r9.s64 = ctx.r11.s64 + -30328;
	// stw r9,12560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12560, ctx.r9.u32);
	// stw r30,8556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8556, ctx.r30.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
loc_8284B314:
	// li r3,20594
	ctx.r3.s64 = 20594;
	// bl 0x82800718
	ctx.lr = 0x8284B31C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b33c
	if (ctx.cr6.eq) goto loc_8284B33C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,20594
	ctx.r10.s64 = 20594;
	// addi r9,r11,-30280
	ctx.r9.s64 = ctx.r11.s64 + -30280;
	// stw r9,13500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13500, ctx.r9.u32);
	// stw r30,9496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9496, ctx.r30.u32);
	// stw r10,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r10.u32);
loc_8284B33C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,16076
	ctx.r10.s64 = 16076;
	// addi r9,r11,-30232
	ctx.r9.s64 = ctx.r11.s64 + -30232;
	// li r3,4264
	ctx.r3.s64 = 4264;
	// stw r9,13316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13316, ctx.r9.u32);
	// stw r26,9312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9312, ctx.r26.u32);
	// stw r10,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r10.u32);
	// bl 0x82800718
	ctx.lr = 0x8284B35C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b37c
	if (ctx.cr6.eq) goto loc_8284B37C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4264
	ctx.r10.s64 = 4264;
	// addi r9,r11,-30176
	ctx.r9.s64 = ctx.r11.s64 + -30176;
	// stw r9,12564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12564, ctx.r9.u32);
	// stw r30,8560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8560, ctx.r30.u32);
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
loc_8284B37C:
	// li r3,4249
	ctx.r3.s64 = 4249;
	// bl 0x82800718
	ctx.lr = 0x8284B384;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b3a4
	if (ctx.cr6.eq) goto loc_8284B3A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4249
	ctx.r10.s64 = 4249;
	// addi r9,r11,-30124
	ctx.r9.s64 = ctx.r11.s64 + -30124;
	// stw r9,12568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12568, ctx.r9.u32);
	// stw r30,8564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8564, ctx.r30.u32);
	// stw r10,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
loc_8284B3A4:
	// li r3,4272
	ctx.r3.s64 = 4272;
	// bl 0x82800718
	ctx.lr = 0x8284B3AC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b3cc
	if (ctx.cr6.eq) goto loc_8284B3CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4272
	ctx.r10.s64 = 4272;
	// addi r9,r11,-30068
	ctx.r9.s64 = ctx.r11.s64 + -30068;
	// stw r9,12572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12572, ctx.r9.u32);
	// stw r30,8568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8568, ctx.r30.u32);
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
loc_8284B3CC:
	// li r3,4281
	ctx.r3.s64 = 4281;
	// bl 0x82800718
	ctx.lr = 0x8284B3D4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b3f4
	if (ctx.cr6.eq) goto loc_8284B3F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4281
	ctx.r10.s64 = 4281;
	// addi r9,r11,-30020
	ctx.r9.s64 = ctx.r11.s64 + -30020;
	// stw r9,12576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12576, ctx.r9.u32);
	// stw r30,8572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8572, ctx.r30.u32);
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
loc_8284B3F4:
	// li r3,4285
	ctx.r3.s64 = 4285;
	// bl 0x82800718
	ctx.lr = 0x8284B3FC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b41c
	if (ctx.cr6.eq) goto loc_8284B41C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4285
	ctx.r10.s64 = 4285;
	// addi r9,r11,-29952
	ctx.r9.s64 = ctx.r11.s64 + -29952;
	// stw r9,13228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13228, ctx.r9.u32);
	// stw r30,9224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9224, ctx.r30.u32);
	// stw r10,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r10.u32);
loc_8284B41C:
	// li r3,4291
	ctx.r3.s64 = 4291;
	// bl 0x82800718
	ctx.lr = 0x8284B424;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b444
	if (ctx.cr6.eq) goto loc_8284B444;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4291
	ctx.r10.s64 = 4291;
	// addi r9,r11,-29884
	ctx.r9.s64 = ctx.r11.s64 + -29884;
	// stw r9,12580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12580, ctx.r9.u32);
	// stw r30,8576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8576, ctx.r30.u32);
	// stw r10,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r10.u32);
loc_8284B444:
	// li r3,4308
	ctx.r3.s64 = 4308;
	// bl 0x82800718
	ctx.lr = 0x8284B44C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b46c
	if (ctx.cr6.eq) goto loc_8284B46C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4308
	ctx.r10.s64 = 4308;
	// addi r9,r11,-29836
	ctx.r9.s64 = ctx.r11.s64 + -29836;
	// stw r9,13232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13232, ctx.r9.u32);
	// stw r30,9228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9228, ctx.r30.u32);
	// stw r10,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r10.u32);
loc_8284B46C:
	// li r3,19398
	ctx.r3.s64 = 19398;
	// bl 0x82800718
	ctx.lr = 0x8284B474;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b494
	if (ctx.cr6.eq) goto loc_8284B494;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,19398
	ctx.r10.s64 = 19398;
	// addi r9,r11,-29784
	ctx.r9.s64 = ctx.r11.s64 + -29784;
	// stw r9,13172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13172, ctx.r9.u32);
	// stw r30,9168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9168, ctx.r30.u32);
	// stw r10,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r10.u32);
loc_8284B494:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-29736
	ctx.r9.s64 = ctx.r11.s64 + -29736;
	// li r8,16087
	ctx.r8.s64 = 16087;
	// stw r9,13504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13504, ctx.r9.u32);
	// addi r7,r10,-29680
	ctx.r7.s64 = ctx.r10.s64 + -29680;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r26,9500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9500, ctx.r26.u32);
	// stw r8,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r8.u32);
	// li r5,16091
	ctx.r5.s64 = 16091;
	// stw r7,13508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13508, ctx.r7.u32);
	// addi r4,r6,-29616
	ctx.r4.s64 = ctx.r6.s64 + -29616;
	// stw r26,9504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9504, ctx.r26.u32);
	// li r11,16099
	ctx.r11.s64 = 16099;
	// stw r5,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r5.u32);
	// li r3,5261
	ctx.r3.s64 = 5261;
	// stw r4,13512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13512, ctx.r4.u32);
	// stw r26,9508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9508, ctx.r26.u32);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// bl 0x82800718
	ctx.lr = 0x8284B4E4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b504
	if (ctx.cr6.eq) goto loc_8284B504;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5261
	ctx.r10.s64 = 5261;
	// addi r9,r11,-29556
	ctx.r9.s64 = ctx.r11.s64 + -29556;
	// stw r9,12768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12768, ctx.r9.u32);
	// stw r30,8764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8764, ctx.r30.u32);
	// stw r10,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r10.u32);
loc_8284B504:
	// li r3,5276
	ctx.r3.s64 = 5276;
	// bl 0x82800718
	ctx.lr = 0x8284B50C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b52c
	if (ctx.cr6.eq) goto loc_8284B52C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5276
	ctx.r10.s64 = 5276;
	// addi r9,r11,-29496
	ctx.r9.s64 = ctx.r11.s64 + -29496;
	// stw r9,12772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12772, ctx.r9.u32);
	// stw r30,8768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8768, ctx.r30.u32);
	// stw r10,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r10.u32);
loc_8284B52C:
	// li r3,5292
	ctx.r3.s64 = 5292;
	// bl 0x82800718
	ctx.lr = 0x8284B534;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b554
	if (ctx.cr6.eq) goto loc_8284B554;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5292
	ctx.r10.s64 = 5292;
	// addi r9,r11,-29444
	ctx.r9.s64 = ctx.r11.s64 + -29444;
	// stw r9,12776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12776, ctx.r9.u32);
	// stw r30,8772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8772, ctx.r30.u32);
	// stw r10,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r10.u32);
loc_8284B554:
	// li r3,5315
	ctx.r3.s64 = 5315;
	// bl 0x82800718
	ctx.lr = 0x8284B55C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b57c
	if (ctx.cr6.eq) goto loc_8284B57C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5315
	ctx.r10.s64 = 5315;
	// addi r9,r11,-29380
	ctx.r9.s64 = ctx.r11.s64 + -29380;
	// stw r9,12780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12780, ctx.r9.u32);
	// stw r30,8776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8776, ctx.r30.u32);
	// stw r10,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r10.u32);
loc_8284B57C:
	// li r3,7246
	ctx.r3.s64 = 7246;
	// bl 0x82800718
	ctx.lr = 0x8284B584;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b5a4
	if (ctx.cr6.eq) goto loc_8284B5A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7246
	ctx.r10.s64 = 7246;
	// addi r9,r11,-29320
	ctx.r9.s64 = ctx.r11.s64 + -29320;
	// stw r9,12784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12784, ctx.r9.u32);
	// stw r30,8780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8780, ctx.r30.u32);
	// stw r10,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r10.u32);
loc_8284B5A4:
	// li r3,5324
	ctx.r3.s64 = 5324;
	// bl 0x82800718
	ctx.lr = 0x8284B5AC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b5cc
	if (ctx.cr6.eq) goto loc_8284B5CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5324
	ctx.r10.s64 = 5324;
	// addi r9,r11,-29268
	ctx.r9.s64 = ctx.r11.s64 + -29268;
	// stw r9,12788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12788, ctx.r9.u32);
	// stw r30,8784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8784, ctx.r30.u32);
	// stw r10,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r10.u32);
loc_8284B5CC:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284B5D4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b5f0
	if (ctx.cr6.eq) goto loc_8284B5F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-29208
	ctx.r10.s64 = ctx.r11.s64 + -29208;
	// stw r10,13236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13236, ctx.r10.u32);
	// stw r30,9232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9232, ctx.r30.u32);
	// stw r25,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r25.u32);
loc_8284B5F0:
	// li r3,5337
	ctx.r3.s64 = 5337;
	// bl 0x82800718
	ctx.lr = 0x8284B5F8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b618
	if (ctx.cr6.eq) goto loc_8284B618;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5337
	ctx.r10.s64 = 5337;
	// addi r9,r11,-29140
	ctx.r9.s64 = ctx.r11.s64 + -29140;
	// stw r9,12792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12792, ctx.r9.u32);
	// stw r30,8788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8788, ctx.r30.u32);
	// stw r10,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r10.u32);
loc_8284B618:
	// li r3,5349
	ctx.r3.s64 = 5349;
	// bl 0x82800718
	ctx.lr = 0x8284B620;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b640
	if (ctx.cr6.eq) goto loc_8284B640;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5349
	ctx.r10.s64 = 5349;
	// addi r9,r11,-29084
	ctx.r9.s64 = ctx.r11.s64 + -29084;
	// stw r9,12796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12796, ctx.r9.u32);
	// stw r30,8792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8792, ctx.r30.u32);
	// stw r10,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r10.u32);
loc_8284B640:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284B648;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b664
	if (ctx.cr6.eq) goto loc_8284B664;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-29020
	ctx.r10.s64 = ctx.r11.s64 + -29020;
	// stw r10,12800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12800, ctx.r10.u32);
	// stw r30,8796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8796, ctx.r30.u32);
	// stw r25,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r25.u32);
loc_8284B664:
	// li r3,5401
	ctx.r3.s64 = 5401;
	// bl 0x82800718
	ctx.lr = 0x8284B66C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b68c
	if (ctx.cr6.eq) goto loc_8284B68C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5401
	ctx.r10.s64 = 5401;
	// addi r9,r11,-28964
	ctx.r9.s64 = ctx.r11.s64 + -28964;
	// stw r9,12804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12804, ctx.r9.u32);
	// stw r30,8800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8800, ctx.r30.u32);
	// stw r10,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r10.u32);
loc_8284B68C:
	// li r3,5428
	ctx.r3.s64 = 5428;
	// bl 0x82800718
	ctx.lr = 0x8284B694;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b6b4
	if (ctx.cr6.eq) goto loc_8284B6B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5428
	ctx.r10.s64 = 5428;
	// addi r9,r11,-28908
	ctx.r9.s64 = ctx.r11.s64 + -28908;
	// stw r9,12808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12808, ctx.r9.u32);
	// stw r22,8804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8804, ctx.r22.u32);
	// stw r10,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r10.u32);
loc_8284B6B4:
	// li r3,7467
	ctx.r3.s64 = 7467;
	// bl 0x82800718
	ctx.lr = 0x8284B6BC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b6dc
	if (ctx.cr6.eq) goto loc_8284B6DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7467
	ctx.r10.s64 = 7467;
	// addi r9,r11,-28852
	ctx.r9.s64 = ctx.r11.s64 + -28852;
	// stw r9,12812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12812, ctx.r9.u32);
	// stw r30,8808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8808, ctx.r30.u32);
	// stw r10,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r10.u32);
loc_8284B6DC:
	// li r3,5435
	ctx.r3.s64 = 5435;
	// bl 0x82800718
	ctx.lr = 0x8284B6E4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b704
	if (ctx.cr6.eq) goto loc_8284B704;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5435
	ctx.r10.s64 = 5435;
	// addi r9,r11,-28800
	ctx.r9.s64 = ctx.r11.s64 + -28800;
	// stw r9,12816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12816, ctx.r9.u32);
	// stw r30,8812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8812, ctx.r30.u32);
	// stw r10,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r10.u32);
loc_8284B704:
	// li r3,5450
	ctx.r3.s64 = 5450;
	// bl 0x82800718
	ctx.lr = 0x8284B70C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b72c
	if (ctx.cr6.eq) goto loc_8284B72C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5450
	ctx.r10.s64 = 5450;
	// addi r9,r11,-28748
	ctx.r9.s64 = ctx.r11.s64 + -28748;
	// stw r9,12820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12820, ctx.r9.u32);
	// stw r30,8816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8816, ctx.r30.u32);
	// stw r10,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r10.u32);
loc_8284B72C:
	// li r3,19429
	ctx.r3.s64 = 19429;
	// bl 0x82800718
	ctx.lr = 0x8284B734;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b754
	if (ctx.cr6.eq) goto loc_8284B754;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,19429
	ctx.r10.s64 = 19429;
	// addi r9,r11,-28688
	ctx.r9.s64 = ctx.r11.s64 + -28688;
	// stw r9,13480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13480, ctx.r9.u32);
	// stw r30,9476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9476, ctx.r30.u32);
	// stw r10,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r10.u32);
loc_8284B754:
	// li r3,6127
	ctx.r3.s64 = 6127;
	// bl 0x82800718
	ctx.lr = 0x8284B75C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b77c
	if (ctx.cr6.eq) goto loc_8284B77C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6127
	ctx.r10.s64 = 6127;
	// addi r9,r11,-28656
	ctx.r9.s64 = ctx.r11.s64 + -28656;
	// stw r9,13128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13128, ctx.r9.u32);
	// stw r30,9124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9124, ctx.r30.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
loc_8284B77C:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284B784;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b7a0
	if (ctx.cr6.eq) goto loc_8284B7A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-28608
	ctx.r10.s64 = ctx.r11.s64 + -28608;
	// stw r10,13132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13132, ctx.r10.u32);
	// stw r30,9128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9128, ctx.r30.u32);
	// stw r25,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r25.u32);
loc_8284B7A0:
	// li r3,20509
	ctx.r3.s64 = 20509;
	// bl 0x82800718
	ctx.lr = 0x8284B7A8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b7c8
	if (ctx.cr6.eq) goto loc_8284B7C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,20509
	ctx.r10.s64 = 20509;
	// addi r9,r11,-28548
	ctx.r9.s64 = ctx.r11.s64 + -28548;
	// stw r9,13136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13136, ctx.r9.u32);
	// stw r30,9132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9132, ctx.r30.u32);
	// stw r10,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r10.u32);
loc_8284B7C8:
	// li r3,23705
	ctx.r3.s64 = 23705;
	// bl 0x82800718
	ctx.lr = 0x8284B7D0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b7f0
	if (ctx.cr6.eq) goto loc_8284B7F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,23705
	ctx.r10.s64 = 23705;
	// addi r9,r11,-28500
	ctx.r9.s64 = ctx.r11.s64 + -28500;
	// stw r9,13140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13140, ctx.r9.u32);
	// stw r30,9136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9136, ctx.r30.u32);
	// stw r10,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r10.u32);
loc_8284B7F0:
	// li r3,6153
	ctx.r3.s64 = 6153;
	// bl 0x82800718
	ctx.lr = 0x8284B7F8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b818
	if (ctx.cr6.eq) goto loc_8284B818;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6153
	ctx.r10.s64 = 6153;
	// addi r9,r11,-28444
	ctx.r9.s64 = ctx.r11.s64 + -28444;
	// stw r9,13144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13144, ctx.r9.u32);
	// stw r30,9140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9140, ctx.r30.u32);
	// stw r10,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r10.u32);
loc_8284B818:
	// li r3,6182
	ctx.r3.s64 = 6182;
	// bl 0x82800718
	ctx.lr = 0x8284B820;
	sub_82800718(ctx, base);
	// li r29,6182
	ctx.r29.s64 = 6182;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b840
	if (ctx.cr6.eq) goto loc_8284B840;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-28384
	ctx.r10.s64 = ctx.r11.s64 + -28384;
	// stw r10,13148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13148, ctx.r10.u32);
	// stw r30,9144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9144, ctx.r30.u32);
	// stw r29,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r29.u32);
loc_8284B840:
	// li r3,6199
	ctx.r3.s64 = 6199;
	// bl 0x82800718
	ctx.lr = 0x8284B848;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b868
	if (ctx.cr6.eq) goto loc_8284B868;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6199
	ctx.r10.s64 = 6199;
	// addi r9,r11,-28336
	ctx.r9.s64 = ctx.r11.s64 + -28336;
	// stw r9,13152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13152, ctx.r9.u32);
	// stw r30,9148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9148, ctx.r30.u32);
	// stw r10,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r10.u32);
loc_8284B868:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284B870;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b88c
	if (ctx.cr6.eq) goto loc_8284B88C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-28284
	ctx.r10.s64 = ctx.r11.s64 + -28284;
	// stw r10,13156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13156, ctx.r10.u32);
	// stw r30,9152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9152, ctx.r30.u32);
	// stw r25,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r25.u32);
loc_8284B88C:
	// li r3,6207
	ctx.r3.s64 = 6207;
	// bl 0x82800718
	ctx.lr = 0x8284B894;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b8b4
	if (ctx.cr6.eq) goto loc_8284B8B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6207
	ctx.r10.s64 = 6207;
	// addi r9,r11,-28220
	ctx.r9.s64 = ctx.r11.s64 + -28220;
	// stw r9,13160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13160, ctx.r9.u32);
	// stw r30,9156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9156, ctx.r30.u32);
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
loc_8284B8B4:
	// li r3,6216
	ctx.r3.s64 = 6216;
	// bl 0x82800718
	ctx.lr = 0x8284B8BC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b8dc
	if (ctx.cr6.eq) goto loc_8284B8DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6216
	ctx.r10.s64 = 6216;
	// addi r9,r11,-28176
	ctx.r9.s64 = ctx.r11.s64 + -28176;
	// stw r9,13164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13164, ctx.r9.u32);
	// stw r30,9160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9160, ctx.r30.u32);
	// stw r10,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r10.u32);
loc_8284B8DC:
	// li r3,6219
	ctx.r3.s64 = 6219;
	// bl 0x82800718
	ctx.lr = 0x8284B8E4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b904
	if (ctx.cr6.eq) goto loc_8284B904;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6219
	ctx.r10.s64 = 6219;
	// addi r9,r11,-28112
	ctx.r9.s64 = ctx.r11.s64 + -28112;
	// stw r9,13168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13168, ctx.r9.u32);
	// stw r30,9164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9164, ctx.r30.u32);
	// stw r10,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r10.u32);
loc_8284B904:
	// li r3,6182
	ctx.r3.s64 = 6182;
	// bl 0x82800718
	ctx.lr = 0x8284B90C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b928
	if (ctx.cr6.eq) goto loc_8284B928;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-28064
	ctx.r10.s64 = ctx.r11.s64 + -28064;
	// stw r10,13240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13240, ctx.r10.u32);
	// stw r30,9236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9236, ctx.r30.u32);
	// stw r29,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r29.u32);
loc_8284B928:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284B930;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b94c
	if (ctx.cr6.eq) goto loc_8284B94C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-28012
	ctx.r10.s64 = ctx.r11.s64 + -28012;
	// stw r10,13244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13244, ctx.r10.u32);
	// stw r30,9240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9240, ctx.r30.u32);
	// stw r25,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r25.u32);
loc_8284B94C:
	// li r3,6192
	ctx.r3.s64 = 6192;
	// bl 0x82800718
	ctx.lr = 0x8284B954;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b974
	if (ctx.cr6.eq) goto loc_8284B974;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6192
	ctx.r10.s64 = 6192;
	// addi r9,r11,-27956
	ctx.r9.s64 = ctx.r11.s64 + -27956;
	// stw r9,13248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13248, ctx.r9.u32);
	// stw r30,9244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9244, ctx.r30.u32);
	// stw r10,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r10.u32);
loc_8284B974:
	// li r3,4652
	ctx.r3.s64 = 4652;
	// bl 0x82800718
	ctx.lr = 0x8284B97C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b99c
	if (ctx.cr6.eq) goto loc_8284B99C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4652
	ctx.r10.s64 = 4652;
	// addi r9,r11,-27908
	ctx.r9.s64 = ctx.r11.s64 + -27908;
	// stw r9,12584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12584, ctx.r9.u32);
	// stw r30,8580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8580, ctx.r30.u32);
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
loc_8284B99C:
	// li r3,4640
	ctx.r3.s64 = 4640;
	// bl 0x82800718
	ctx.lr = 0x8284B9A4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b9c8
	if (ctx.cr6.eq) goto loc_8284B9C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,257
	ctx.r10.s64 = 257;
	// addi r9,r11,-27852
	ctx.r9.s64 = ctx.r11.s64 + -27852;
	// li r8,4640
	ctx.r8.s64 = 4640;
	// stw r9,13516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13516, ctx.r9.u32);
	// stw r10,9512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9512, ctx.r10.u32);
	// stw r8,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r8.u32);
loc_8284B9C8:
	// li r3,4659
	ctx.r3.s64 = 4659;
	// bl 0x82800718
	ctx.lr = 0x8284B9D0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284b9f0
	if (ctx.cr6.eq) goto loc_8284B9F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4659
	ctx.r10.s64 = 4659;
	// addi r9,r11,-27800
	ctx.r9.s64 = ctx.r11.s64 + -27800;
	// stw r9,13528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13528, ctx.r9.u32);
	// stw r30,9524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9524, ctx.r30.u32);
	// stw r10,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r10.u32);
loc_8284B9F0:
	// li r3,4664
	ctx.r3.s64 = 4664;
	// bl 0x82800718
	ctx.lr = 0x8284B9F8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ba18
	if (ctx.cr6.eq) goto loc_8284BA18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4664
	ctx.r10.s64 = 4664;
	// addi r9,r11,-27744
	ctx.r9.s64 = ctx.r11.s64 + -27744;
	// stw r9,12588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12588, ctx.r9.u32);
	// stw r30,8584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8584, ctx.r30.u32);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
loc_8284BA18:
	// li r3,4685
	ctx.r3.s64 = 4685;
	// bl 0x82800718
	ctx.lr = 0x8284BA20;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ba40
	if (ctx.cr6.eq) goto loc_8284BA40;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4685
	ctx.r10.s64 = 4685;
	// addi r9,r11,-27688
	ctx.r9.s64 = ctx.r11.s64 + -27688;
	// stw r9,12592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12592, ctx.r9.u32);
	// stw r30,8588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8588, ctx.r30.u32);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
loc_8284BA40:
	// li r3,4693
	ctx.r3.s64 = 4693;
	// bl 0x82800718
	ctx.lr = 0x8284BA48;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ba68
	if (ctx.cr6.eq) goto loc_8284BA68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4693
	ctx.r10.s64 = 4693;
	// addi r9,r11,-27624
	ctx.r9.s64 = ctx.r11.s64 + -27624;
	// stw r9,12596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12596, ctx.r9.u32);
	// stw r30,8592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8592, ctx.r30.u32);
	// stw r10,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r10.u32);
loc_8284BA68:
	// li r3,4703
	ctx.r3.s64 = 4703;
	// bl 0x82800718
	ctx.lr = 0x8284BA70;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ba90
	if (ctx.cr6.eq) goto loc_8284BA90;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4703
	ctx.r10.s64 = 4703;
	// addi r9,r11,-27548
	ctx.r9.s64 = ctx.r11.s64 + -27548;
	// stw r9,12600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12600, ctx.r9.u32);
	// stw r30,8596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8596, ctx.r30.u32);
	// stw r10,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r10.u32);
loc_8284BA90:
	// li r3,4712
	ctx.r3.s64 = 4712;
	// bl 0x82800718
	ctx.lr = 0x8284BA98;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bab8
	if (ctx.cr6.eq) goto loc_8284BAB8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4712
	ctx.r10.s64 = 4712;
	// addi r9,r11,-27492
	ctx.r9.s64 = ctx.r11.s64 + -27492;
	// stw r9,12604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12604, ctx.r9.u32);
	// stw r30,8600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8600, ctx.r30.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
loc_8284BAB8:
	// li r3,4719
	ctx.r3.s64 = 4719;
	// bl 0x82800718
	ctx.lr = 0x8284BAC0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bae0
	if (ctx.cr6.eq) goto loc_8284BAE0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4719
	ctx.r10.s64 = 4719;
	// addi r9,r11,-27444
	ctx.r9.s64 = ctx.r11.s64 + -27444;
	// stw r9,12608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12608, ctx.r9.u32);
	// stw r30,8604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8604, ctx.r30.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
loc_8284BAE0:
	// li r3,4731
	ctx.r3.s64 = 4731;
	// bl 0x82800718
	ctx.lr = 0x8284BAE8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bb08
	if (ctx.cr6.eq) goto loc_8284BB08;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4731
	ctx.r10.s64 = 4731;
	// addi r9,r11,-27388
	ctx.r9.s64 = ctx.r11.s64 + -27388;
	// stw r9,12612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12612, ctx.r9.u32);
	// stw r30,8608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8608, ctx.r30.u32);
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
loc_8284BB08:
	// li r3,4751
	ctx.r3.s64 = 4751;
	// bl 0x82800718
	ctx.lr = 0x8284BB10;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bb30
	if (ctx.cr6.eq) goto loc_8284BB30;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4751
	ctx.r10.s64 = 4751;
	// addi r9,r11,-27328
	ctx.r9.s64 = ctx.r11.s64 + -27328;
	// stw r9,13492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13492, ctx.r9.u32);
	// stw r30,9488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9488, ctx.r30.u32);
	// stw r10,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r10.u32);
loc_8284BB30:
	// li r3,4746
	ctx.r3.s64 = 4746;
	// bl 0x82800718
	ctx.lr = 0x8284BB38;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bb58
	if (ctx.cr6.eq) goto loc_8284BB58;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4746
	ctx.r10.s64 = 4746;
	// addi r9,r11,-27264
	ctx.r9.s64 = ctx.r11.s64 + -27264;
	// stw r9,13488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13488, ctx.r9.u32);
	// stw r30,9484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9484, ctx.r30.u32);
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
loc_8284BB58:
	// li r3,4756
	ctx.r3.s64 = 4756;
	// bl 0x82800718
	ctx.lr = 0x8284BB60;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bb80
	if (ctx.cr6.eq) goto loc_8284BB80;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4756
	ctx.r10.s64 = 4756;
	// addi r9,r11,-27200
	ctx.r9.s64 = ctx.r11.s64 + -27200;
	// stw r9,12616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12616, ctx.r9.u32);
	// stw r30,8612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8612, ctx.r30.u32);
	// stw r10,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
loc_8284BB80:
	// li r3,4768
	ctx.r3.s64 = 4768;
	// bl 0x82800718
	ctx.lr = 0x8284BB88;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bba8
	if (ctx.cr6.eq) goto loc_8284BBA8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4768
	ctx.r10.s64 = 4768;
	// addi r9,r11,-27128
	ctx.r9.s64 = ctx.r11.s64 + -27128;
	// stw r9,12620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12620, ctx.r9.u32);
	// stw r30,8616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8616, ctx.r30.u32);
	// stw r10,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r10.u32);
loc_8284BBA8:
	// li r3,4773
	ctx.r3.s64 = 4773;
	// bl 0x82800718
	ctx.lr = 0x8284BBB0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bbd0
	if (ctx.cr6.eq) goto loc_8284BBD0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4773
	ctx.r10.s64 = 4773;
	// addi r9,r11,-27064
	ctx.r9.s64 = ctx.r11.s64 + -27064;
	// stw r9,12624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12624, ctx.r9.u32);
	// stw r30,8620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8620, ctx.r30.u32);
	// stw r10,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r10.u32);
loc_8284BBD0:
	// li r3,4771
	ctx.r3.s64 = 4771;
	// bl 0x82800718
	ctx.lr = 0x8284BBD8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bbf8
	if (ctx.cr6.eq) goto loc_8284BBF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4771
	ctx.r10.s64 = 4771;
	// addi r9,r11,-26984
	ctx.r9.s64 = ctx.r11.s64 + -26984;
	// stw r9,13540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13540, ctx.r9.u32);
	// stw r30,9536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9536, ctx.r30.u32);
	// stw r10,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r10.u32);
loc_8284BBF8:
	// li r3,4790
	ctx.r3.s64 = 4790;
	// bl 0x82800718
	ctx.lr = 0x8284BC00;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bc20
	if (ctx.cr6.eq) goto loc_8284BC20;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4790
	ctx.r10.s64 = 4790;
	// addi r9,r11,-26916
	ctx.r9.s64 = ctx.r11.s64 + -26916;
	// stw r9,12628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12628, ctx.r9.u32);
	// stw r30,8624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8624, ctx.r30.u32);
	// stw r10,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r10.u32);
loc_8284BC20:
	// li r3,4798
	ctx.r3.s64 = 4798;
	// bl 0x82800718
	ctx.lr = 0x8284BC28;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bc48
	if (ctx.cr6.eq) goto loc_8284BC48;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4798
	ctx.r10.s64 = 4798;
	// addi r9,r11,-26864
	ctx.r9.s64 = ctx.r11.s64 + -26864;
	// stw r9,12632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12632, ctx.r9.u32);
	// stw r30,8628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8628, ctx.r30.u32);
	// stw r10,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r10.u32);
loc_8284BC48:
	// li r3,4822
	ctx.r3.s64 = 4822;
	// bl 0x82800718
	ctx.lr = 0x8284BC50;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bc70
	if (ctx.cr6.eq) goto loc_8284BC70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4822
	ctx.r10.s64 = 4822;
	// addi r9,r11,-26804
	ctx.r9.s64 = ctx.r11.s64 + -26804;
	// stw r9,12636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12636, ctx.r9.u32);
	// stw r30,8632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8632, ctx.r30.u32);
	// stw r10,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r10.u32);
loc_8284BC70:
	// li r3,4840
	ctx.r3.s64 = 4840;
	// bl 0x82800718
	ctx.lr = 0x8284BC78;
	sub_82800718(ctx, base);
	// li r28,3
	ctx.r28.s64 = 3;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bc9c
	if (ctx.cr6.eq) goto loc_8284BC9C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4840
	ctx.r10.s64 = 4840;
	// addi r9,r11,-26744
	ctx.r9.s64 = ctx.r11.s64 + -26744;
	// stw r9,12640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12640, ctx.r9.u32);
	// stw r28,8636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8636, ctx.r28.u32);
	// stw r10,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r10.u32);
loc_8284BC9C:
	// li r3,8287
	ctx.r3.s64 = 8287;
	// bl 0x82800718
	ctx.lr = 0x8284BCA4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bcc4
	if (ctx.cr6.eq) goto loc_8284BCC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,8287
	ctx.r10.s64 = 8287;
	// addi r9,r11,-26696
	ctx.r9.s64 = ctx.r11.s64 + -26696;
	// stw r9,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r9.u32);
	// stw r28,9180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9180, ctx.r28.u32);
	// stw r10,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r10.u32);
loc_8284BCC4:
	// li r3,5708
	ctx.r3.s64 = 5708;
	// bl 0x82800718
	ctx.lr = 0x8284BCCC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bcec
	if (ctx.cr6.eq) goto loc_8284BCEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5708
	ctx.r10.s64 = 5708;
	// addi r9,r11,-26636
	ctx.r9.s64 = ctx.r11.s64 + -26636;
	// stw r9,12644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12644, ctx.r9.u32);
	// stw r30,8640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8640, ctx.r30.u32);
	// stw r10,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r10.u32);
loc_8284BCEC:
	// li r3,7410
	ctx.r3.s64 = 7410;
	// bl 0x82800718
	ctx.lr = 0x8284BCF4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bd14
	if (ctx.cr6.eq) goto loc_8284BD14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7410
	ctx.r10.s64 = 7410;
	// addi r9,r11,-26584
	ctx.r9.s64 = ctx.r11.s64 + -26584;
	// stw r9,12648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12648, ctx.r9.u32);
	// stw r30,8644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8644, ctx.r30.u32);
	// stw r10,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r10.u32);
loc_8284BD14:
	// li r3,5991
	ctx.r3.s64 = 5991;
	// bl 0x82800718
	ctx.lr = 0x8284BD1C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bd3c
	if (ctx.cr6.eq) goto loc_8284BD3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5991
	ctx.r10.s64 = 5991;
	// addi r9,r11,-26532
	ctx.r9.s64 = ctx.r11.s64 + -26532;
	// stw r9,12824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12824, ctx.r9.u32);
	// stw r30,8820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8820, ctx.r30.u32);
	// stw r10,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r10.u32);
loc_8284BD3C:
	// li r3,20656
	ctx.r3.s64 = 20656;
	// bl 0x82800718
	ctx.lr = 0x8284BD44;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bd68
	if (ctx.cr6.eq) goto loc_8284BD68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,129
	ctx.r10.s64 = 129;
	// addi r9,r11,-26484
	ctx.r9.s64 = ctx.r11.s64 + -26484;
	// li r8,20656
	ctx.r8.s64 = 20656;
	// stw r9,13252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13252, ctx.r9.u32);
	// stw r10,9248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9248, ctx.r10.u32);
	// stw r8,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r8.u32);
loc_8284BD68:
	// li r3,6016
	ctx.r3.s64 = 6016;
	// bl 0x82800718
	ctx.lr = 0x8284BD70;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bd90
	if (ctx.cr6.eq) goto loc_8284BD90;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6016
	ctx.r10.s64 = 6016;
	// addi r9,r11,-26428
	ctx.r9.s64 = ctx.r11.s64 + -26428;
	// stw r9,12828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12828, ctx.r9.u32);
	// stw r30,8824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8824, ctx.r30.u32);
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
loc_8284BD90:
	// li r3,6019
	ctx.r3.s64 = 6019;
	// bl 0x82800718
	ctx.lr = 0x8284BD98;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bdb8
	if (ctx.cr6.eq) goto loc_8284BDB8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6019
	ctx.r10.s64 = 6019;
	// addi r9,r11,-26384
	ctx.r9.s64 = ctx.r11.s64 + -26384;
	// stw r9,13256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13256, ctx.r9.u32);
	// stw r30,9252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9252, ctx.r30.u32);
	// stw r10,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r10.u32);
loc_8284BDB8:
	// li r3,6034
	ctx.r3.s64 = 6034;
	// bl 0x82800718
	ctx.lr = 0x8284BDC0;
	sub_82800718(ctx, base);
	// li r29,6034
	ctx.r29.s64 = 6034;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bde0
	if (ctx.cr6.eq) goto loc_8284BDE0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-26324
	ctx.r10.s64 = ctx.r11.s64 + -26324;
	// stw r10,12832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12832, ctx.r10.u32);
	// stw r30,8828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8828, ctx.r30.u32);
	// stw r29,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r29.u32);
loc_8284BDE0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-26276
	ctx.r9.s64 = ctx.r11.s64 + -26276;
	// li r8,16245
	ctx.r8.s64 = 16245;
	// stw r9,13320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13320, ctx.r9.u32);
	// addi r7,r10,-26228
	ctx.r7.s64 = ctx.r10.s64 + -26228;
	// stw r24,9316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9316, ctx.r24.u32);
	// li r6,16249
	ctx.r6.s64 = 16249;
	// stw r8,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r8.u32);
	// li r3,6032
	ctx.r3.s64 = 6032;
	// stw r7,13324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13324, ctx.r7.u32);
	// stw r24,9320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9320, ctx.r24.u32);
	// stw r6,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r6.u32);
	// bl 0x82800718
	ctx.lr = 0x8284BE18;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284be38
	if (ctx.cr6.eq) goto loc_8284BE38;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6032
	ctx.r10.s64 = 6032;
	// addi r9,r11,-26180
	ctx.r9.s64 = ctx.r11.s64 + -26180;
	// stw r9,12836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12836, ctx.r9.u32);
	// stw r30,8832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8832, ctx.r30.u32);
	// stw r10,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r10.u32);
loc_8284BE38:
	// li r3,6044
	ctx.r3.s64 = 6044;
	// bl 0x82800718
	ctx.lr = 0x8284BE40;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284be60
	if (ctx.cr6.eq) goto loc_8284BE60;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6044
	ctx.r10.s64 = 6044;
	// addi r9,r11,-26136
	ctx.r9.s64 = ctx.r11.s64 + -26136;
	// stw r9,12840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12840, ctx.r9.u32);
	// stw r30,8836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8836, ctx.r30.u32);
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
loc_8284BE60:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284BE68;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284be84
	if (ctx.cr6.eq) goto loc_8284BE84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-26088
	ctx.r10.s64 = ctx.r11.s64 + -26088;
	// stw r10,12844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12844, ctx.r10.u32);
	// stw r30,8840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8840, ctx.r30.u32);
	// stw r25,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r25.u32);
loc_8284BE84:
	// li r3,6059
	ctx.r3.s64 = 6059;
	// bl 0x82800718
	ctx.lr = 0x8284BE8C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284beac
	if (ctx.cr6.eq) goto loc_8284BEAC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6059
	ctx.r10.s64 = 6059;
	// addi r9,r11,-26032
	ctx.r9.s64 = ctx.r11.s64 + -26032;
	// stw r9,12848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12848, ctx.r9.u32);
	// stw r30,8844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8844, ctx.r30.u32);
	// stw r10,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r10.u32);
loc_8284BEAC:
	// li r3,6053
	ctx.r3.s64 = 6053;
	// bl 0x82800718
	ctx.lr = 0x8284BEB4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bed4
	if (ctx.cr6.eq) goto loc_8284BED4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6053
	ctx.r10.s64 = 6053;
	// addi r9,r11,-25964
	ctx.r9.s64 = ctx.r11.s64 + -25964;
	// stw r9,13520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13520, ctx.r9.u32);
	// stw r30,9516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9516, ctx.r30.u32);
	// stw r10,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r10.u32);
loc_8284BED4:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284BEDC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bef8
	if (ctx.cr6.eq) goto loc_8284BEF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-25900
	ctx.r10.s64 = ctx.r11.s64 + -25900;
	// stw r10,12852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12852, ctx.r10.u32);
	// stw r30,8848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8848, ctx.r30.u32);
	// stw r25,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r25.u32);
loc_8284BEF8:
	// li r3,6103
	ctx.r3.s64 = 6103;
	// bl 0x82800718
	ctx.lr = 0x8284BF00;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bf20
	if (ctx.cr6.eq) goto loc_8284BF20;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6103
	ctx.r10.s64 = 6103;
	// addi r9,r11,-25844
	ctx.r9.s64 = ctx.r11.s64 + -25844;
	// stw r9,12856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12856, ctx.r9.u32);
	// stw r30,8852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8852, ctx.r30.u32);
	// stw r10,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r10.u32);
loc_8284BF20:
	// li r3,7077
	ctx.r3.s64 = 7077;
	// bl 0x82800718
	ctx.lr = 0x8284BF28;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bf48
	if (ctx.cr6.eq) goto loc_8284BF48;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7077
	ctx.r10.s64 = 7077;
	// addi r9,r11,-25784
	ctx.r9.s64 = ctx.r11.s64 + -25784;
	// stw r9,12860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12860, ctx.r9.u32);
	// stw r30,8856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8856, ctx.r30.u32);
	// stw r10,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r10.u32);
loc_8284BF48:
	// li r3,7352
	ctx.r3.s64 = 7352;
	// bl 0x82800718
	ctx.lr = 0x8284BF50;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bf70
	if (ctx.cr6.eq) goto loc_8284BF70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7352
	ctx.r10.s64 = 7352;
	// addi r9,r11,-25732
	ctx.r9.s64 = ctx.r11.s64 + -25732;
	// stw r9,12864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12864, ctx.r9.u32);
	// stw r30,8860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8860, ctx.r30.u32);
	// stw r10,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r10.u32);
loc_8284BF70:
	// li r3,7080
	ctx.r3.s64 = 7080;
	// bl 0x82800718
	ctx.lr = 0x8284BF78;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bf98
	if (ctx.cr6.eq) goto loc_8284BF98;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7080
	ctx.r10.s64 = 7080;
	// addi r9,r11,-25684
	ctx.r9.s64 = ctx.r11.s64 + -25684;
	// stw r9,12868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12868, ctx.r9.u32);
	// stw r30,8864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8864, ctx.r30.u32);
	// stw r10,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r10.u32);
loc_8284BF98:
	// li r3,6010
	ctx.r3.s64 = 6010;
	// bl 0x82800718
	ctx.lr = 0x8284BFA0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bfc0
	if (ctx.cr6.eq) goto loc_8284BFC0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6010
	ctx.r10.s64 = 6010;
	// addi r9,r11,-25632
	ctx.r9.s64 = ctx.r11.s64 + -25632;
	// stw r9,13260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13260, ctx.r9.u32);
	// stw r30,9256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9256, ctx.r30.u32);
	// stw r10,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r10.u32);
loc_8284BFC0:
	// li r3,6034
	ctx.r3.s64 = 6034;
	// bl 0x82800718
	ctx.lr = 0x8284BFC8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284bfe4
	if (ctx.cr6.eq) goto loc_8284BFE4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-25580
	ctx.r10.s64 = ctx.r11.s64 + -25580;
	// stw r10,13264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13264, ctx.r10.u32);
	// stw r30,9260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9260, ctx.r30.u32);
	// stw r29,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r29.u32);
loc_8284BFE4:
	// li r3,6093
	ctx.r3.s64 = 6093;
	// bl 0x82800718
	ctx.lr = 0x8284BFEC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c00c
	if (ctx.cr6.eq) goto loc_8284C00C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6093
	ctx.r10.s64 = 6093;
	// addi r9,r11,-25520
	ctx.r9.s64 = ctx.r11.s64 + -25520;
	// stw r9,13268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13268, ctx.r9.u32);
	// stw r30,9264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9264, ctx.r30.u32);
	// stw r10,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r10.u32);
loc_8284C00C:
	// li r3,6084
	ctx.r3.s64 = 6084;
	// bl 0x82800718
	ctx.lr = 0x8284C014;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c034
	if (ctx.cr6.eq) goto loc_8284C034;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6084
	ctx.r10.s64 = 6084;
	// addi r9,r11,-25460
	ctx.r9.s64 = ctx.r11.s64 + -25460;
	// stw r9,13272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13272, ctx.r9.u32);
	// stw r30,9268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9268, ctx.r30.u32);
	// stw r10,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r10.u32);
loc_8284C034:
	// li r3,6914
	ctx.r3.s64 = 6914;
	// bl 0x82800718
	ctx.lr = 0x8284C03C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c05c
	if (ctx.cr6.eq) goto loc_8284C05C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6914
	ctx.r10.s64 = 6914;
	// addi r9,r11,-25416
	ctx.r9.s64 = ctx.r11.s64 + -25416;
	// stw r9,12652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12652, ctx.r9.u32);
	// stw r30,8648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8648, ctx.r30.u32);
	// stw r10,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r10.u32);
loc_8284C05C:
	// li r3,5475
	ctx.r3.s64 = 5475;
	// bl 0x82800718
	ctx.lr = 0x8284C064;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c084
	if (ctx.cr6.eq) goto loc_8284C084;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5475
	ctx.r10.s64 = 5475;
	// addi r9,r11,-25372
	ctx.r9.s64 = ctx.r11.s64 + -25372;
	// stw r9,12656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12656, ctx.r9.u32);
	// stw r30,8652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8652, ctx.r30.u32);
	// stw r10,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
loc_8284C084:
	// li r3,5489
	ctx.r3.s64 = 5489;
	// bl 0x82800718
	ctx.lr = 0x8284C08C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c0ac
	if (ctx.cr6.eq) goto loc_8284C0AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5489
	ctx.r10.s64 = 5489;
	// addi r9,r11,-25316
	ctx.r9.s64 = ctx.r11.s64 + -25316;
	// stw r9,12660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12660, ctx.r9.u32);
	// stw r30,8656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8656, ctx.r30.u32);
	// stw r10,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r10.u32);
loc_8284C0AC:
	// li r3,7297
	ctx.r3.s64 = 7297;
	// bl 0x82800718
	ctx.lr = 0x8284C0B4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c0d4
	if (ctx.cr6.eq) goto loc_8284C0D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7297
	ctx.r10.s64 = 7297;
	// addi r9,r11,-25272
	ctx.r9.s64 = ctx.r11.s64 + -25272;
	// stw r9,12664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12664, ctx.r9.u32);
	// stw r30,8660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8660, ctx.r30.u32);
	// stw r10,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
loc_8284C0D4:
	// li r3,5465
	ctx.r3.s64 = 5465;
	// bl 0x82800718
	ctx.lr = 0x8284C0DC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c0fc
	if (ctx.cr6.eq) goto loc_8284C0FC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5465
	ctx.r10.s64 = 5465;
	// addi r9,r11,-25220
	ctx.r9.s64 = ctx.r11.s64 + -25220;
	// stw r9,12668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12668, ctx.r9.u32);
	// stw r30,8664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8664, ctx.r30.u32);
	// stw r10,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r10.u32);
loc_8284C0FC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,16448
	ctx.r10.s64 = 16448;
	// addi r9,r11,-25164
	ctx.r9.s64 = ctx.r11.s64 + -25164;
	// li r3,5530
	ctx.r3.s64 = 5530;
	// stw r9,13328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13328, ctx.r9.u32);
	// stw r26,9324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9324, ctx.r26.u32);
	// stw r10,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r10.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C11C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c13c
	if (ctx.cr6.eq) goto loc_8284C13C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5530
	ctx.r10.s64 = 5530;
	// addi r9,r11,-25112
	ctx.r9.s64 = ctx.r11.s64 + -25112;
	// stw r9,12672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12672, ctx.r9.u32);
	// stw r30,8668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8668, ctx.r30.u32);
	// stw r10,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r10.u32);
loc_8284C13C:
	// li r3,5578
	ctx.r3.s64 = 5578;
	// bl 0x82800718
	ctx.lr = 0x8284C144;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c164
	if (ctx.cr6.eq) goto loc_8284C164;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5578
	ctx.r10.s64 = 5578;
	// addi r9,r11,-25060
	ctx.r9.s64 = ctx.r11.s64 + -25060;
	// stw r9,12676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12676, ctx.r9.u32);
	// stw r30,8672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8672, ctx.r30.u32);
	// stw r10,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r10.u32);
loc_8284C164:
	// li r3,7009
	ctx.r3.s64 = 7009;
	// bl 0x82800718
	ctx.lr = 0x8284C16C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c18c
	if (ctx.cr6.eq) goto loc_8284C18C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7009
	ctx.r10.s64 = 7009;
	// addi r9,r11,-25008
	ctx.r9.s64 = ctx.r11.s64 + -25008;
	// stw r9,12680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12680, ctx.r9.u32);
	// stw r30,8676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8676, ctx.r30.u32);
	// stw r10,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r10.u32);
loc_8284C18C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-24952
	ctx.r9.s64 = ctx.r11.s64 + -24952;
	// li r8,16454
	ctx.r8.s64 = 16454;
	// stw r9,13332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13332, ctx.r9.u32);
	// addi r7,r10,-24896
	ctx.r7.s64 = ctx.r10.s64 + -24896;
	// stw r26,9328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9328, ctx.r26.u32);
	// li r6,16458
	ctx.r6.s64 = 16458;
	// stw r8,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r8.u32);
	// li r3,7017
	ctx.r3.s64 = 7017;
	// stw r7,13336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13336, ctx.r7.u32);
	// stw r26,9332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9332, ctx.r26.u32);
	// stw r6,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r6.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C1C4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c1e4
	if (ctx.cr6.eq) goto loc_8284C1E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7017
	ctx.r10.s64 = 7017;
	// addi r9,r11,-24840
	ctx.r9.s64 = ctx.r11.s64 + -24840;
	// stw r9,12684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12684, ctx.r9.u32);
	// stw r30,8680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8680, ctx.r30.u32);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
loc_8284C1E4:
	// li r3,7610
	ctx.r3.s64 = 7610;
	// bl 0x82800718
	ctx.lr = 0x8284C1EC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c20c
	if (ctx.cr6.eq) goto loc_8284C20C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7610
	ctx.r10.s64 = 7610;
	// addi r9,r11,-24796
	ctx.r9.s64 = ctx.r11.s64 + -24796;
	// stw r9,12872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12872, ctx.r9.u32);
	// stw r30,8868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8868, ctx.r30.u32);
	// stw r10,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r10.u32);
loc_8284C20C:
	// li r3,7631
	ctx.r3.s64 = 7631;
	// bl 0x82800718
	ctx.lr = 0x8284C214;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c238
	if (ctx.cr6.eq) goto loc_8284C238;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4105
	ctx.r10.s64 = 4105;
	// addi r9,r11,-24736
	ctx.r9.s64 = ctx.r11.s64 + -24736;
	// li r8,7631
	ctx.r8.s64 = 7631;
	// stw r9,13760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13760, ctx.r9.u32);
	// stw r10,9756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9756, ctx.r10.u32);
	// stw r8,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r8.u32);
loc_8284C238:
	// li r3,7626
	ctx.r3.s64 = 7626;
	// bl 0x82800718
	ctx.lr = 0x8284C240;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c260
	if (ctx.cr6.eq) goto loc_8284C260;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7626
	ctx.r10.s64 = 7626;
	// addi r9,r11,-24672
	ctx.r9.s64 = ctx.r11.s64 + -24672;
	// stw r9,12876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12876, ctx.r9.u32);
	// stw r30,8872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8872, ctx.r30.u32);
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
loc_8284C260:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,16463
	ctx.r10.s64 = 16463;
	// addi r9,r11,-24616
	ctx.r9.s64 = ctx.r11.s64 + -24616;
	// li r3,7643
	ctx.r3.s64 = 7643;
	// stw r9,13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13340, ctx.r9.u32);
	// stw r26,9336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9336, ctx.r26.u32);
	// stw r10,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r10.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C280;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c2a0
	if (ctx.cr6.eq) goto loc_8284C2A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7643
	ctx.r10.s64 = 7643;
	// addi r9,r11,-24560
	ctx.r9.s64 = ctx.r11.s64 + -24560;
	// stw r9,12880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12880, ctx.r9.u32);
	// stw r30,8876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8876, ctx.r30.u32);
	// stw r10,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r10.u32);
loc_8284C2A0:
	// li r3,7649
	ctx.r3.s64 = 7649;
	// bl 0x82800718
	ctx.lr = 0x8284C2A8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c2c8
	if (ctx.cr6.eq) goto loc_8284C2C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7649
	ctx.r10.s64 = 7649;
	// addi r9,r11,-24492
	ctx.r9.s64 = ctx.r11.s64 + -24492;
	// stw r9,12884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12884, ctx.r9.u32);
	// stw r30,8880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8880, ctx.r30.u32);
	// stw r10,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r10.u32);
loc_8284C2C8:
	// li r3,7654
	ctx.r3.s64 = 7654;
	// bl 0x82800718
	ctx.lr = 0x8284C2D0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c2f0
	if (ctx.cr6.eq) goto loc_8284C2F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7654
	ctx.r10.s64 = 7654;
	// addi r9,r11,-24432
	ctx.r9.s64 = ctx.r11.s64 + -24432;
	// stw r9,12888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12888, ctx.r9.u32);
	// stw r30,8884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8884, ctx.r30.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
loc_8284C2F0:
	// li r3,7662
	ctx.r3.s64 = 7662;
	// bl 0x82800718
	ctx.lr = 0x8284C2F8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c318
	if (ctx.cr6.eq) goto loc_8284C318;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7662
	ctx.r10.s64 = 7662;
	// addi r9,r11,-24368
	ctx.r9.s64 = ctx.r11.s64 + -24368;
	// stw r9,12892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12892, ctx.r9.u32);
	// stw r30,8888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8888, ctx.r30.u32);
	// stw r10,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r10.u32);
loc_8284C318:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,16468
	ctx.r10.s64 = 16468;
	// addi r9,r11,-24316
	ctx.r9.s64 = ctx.r11.s64 + -24316;
	// li r3,8240
	ctx.r3.s64 = 8240;
	// stw r9,13344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13344, ctx.r9.u32);
	// stw r26,9340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9340, ctx.r26.u32);
	// stw r10,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r10.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C338;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c358
	if (ctx.cr6.eq) goto loc_8284C358;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,8240
	ctx.r10.s64 = 8240;
	// addi r9,r11,-24272
	ctx.r9.s64 = ctx.r11.s64 + -24272;
	// stw r9,12896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12896, ctx.r9.u32);
	// stw r30,8892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8892, ctx.r30.u32);
	// stw r10,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r10.u32);
loc_8284C358:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,16473
	ctx.r10.s64 = 16473;
	// addi r9,r11,-24208
	ctx.r9.s64 = ctx.r11.s64 + -24208;
	// li r3,8250
	ctx.r3.s64 = 8250;
	// stw r9,13348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13348, ctx.r9.u32);
	// stw r26,9344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9344, ctx.r26.u32);
	// stw r10,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r10.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C378;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c398
	if (ctx.cr6.eq) goto loc_8284C398;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,8250
	ctx.r10.s64 = 8250;
	// addi r9,r11,-24164
	ctx.r9.s64 = ctx.r11.s64 + -24164;
	// stw r9,12900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12900, ctx.r9.u32);
	// stw r30,8896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8896, ctx.r30.u32);
	// stw r10,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r10.u32);
loc_8284C398:
	// li r3,8255
	ctx.r3.s64 = 8255;
	// bl 0x82800718
	ctx.lr = 0x8284C3A0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c3c0
	if (ctx.cr6.eq) goto loc_8284C3C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,8255
	ctx.r10.s64 = 8255;
	// addi r9,r11,-24108
	ctx.r9.s64 = ctx.r11.s64 + -24108;
	// stw r9,12904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12904, ctx.r9.u32);
	// stw r30,8900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8900, ctx.r30.u32);
	// stw r10,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r10.u32);
loc_8284C3C0:
	// li r3,6476
	ctx.r3.s64 = 6476;
	// bl 0x82800718
	ctx.lr = 0x8284C3C8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c3e8
	if (ctx.cr6.eq) goto loc_8284C3E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6476
	ctx.r10.s64 = 6476;
	// addi r9,r11,-24048
	ctx.r9.s64 = ctx.r11.s64 + -24048;
	// stw r9,12908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12908, ctx.r9.u32);
	// stw r30,8904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8904, ctx.r30.u32);
	// stw r10,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r10.u32);
loc_8284C3E8:
	// li r3,6482
	ctx.r3.s64 = 6482;
	// bl 0x82800718
	ctx.lr = 0x8284C3F0;
	sub_82800718(ctx, base);
	// li r27,1025
	ctx.r27.s64 = 1025;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c414
	if (ctx.cr6.eq) goto loc_8284C414;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6482
	ctx.r10.s64 = 6482;
	// addi r9,r11,-23996
	ctx.r9.s64 = ctx.r11.s64 + -23996;
	// stw r9,13352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13352, ctx.r9.u32);
	// stw r27,9348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9348, ctx.r27.u32);
	// stw r10,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r10.u32);
loc_8284C414:
	// li r3,7209
	ctx.r3.s64 = 7209;
	// bl 0x82800718
	ctx.lr = 0x8284C41C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c43c
	if (ctx.cr6.eq) goto loc_8284C43C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7209
	ctx.r10.s64 = 7209;
	// addi r9,r11,-23936
	ctx.r9.s64 = ctx.r11.s64 + -23936;
	// stw r9,12912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12912, ctx.r9.u32);
	// stw r30,8908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8908, ctx.r30.u32);
	// stw r10,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r10.u32);
loc_8284C43C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,16478
	ctx.r10.s64 = 16478;
	// addi r9,r11,-23892
	ctx.r9.s64 = ctx.r11.s64 + -23892;
	// li r3,6488
	ctx.r3.s64 = 6488;
	// stw r9,13364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13364, ctx.r9.u32);
	// stw r26,9360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9360, ctx.r26.u32);
	// stw r10,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r10.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C45C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c47c
	if (ctx.cr6.eq) goto loc_8284C47C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6488
	ctx.r10.s64 = 6488;
	// addi r9,r11,-23840
	ctx.r9.s64 = ctx.r11.s64 + -23840;
	// stw r9,12916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12916, ctx.r9.u32);
	// stw r30,8912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8912, ctx.r30.u32);
	// stw r10,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r10.u32);
loc_8284C47C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,16489
	ctx.r10.s64 = 16489;
	// addi r9,r11,-23796
	ctx.r9.s64 = ctx.r11.s64 + -23796;
	// li r3,6512
	ctx.r3.s64 = 6512;
	// stw r9,13368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13368, ctx.r9.u32);
	// stw r26,9364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9364, ctx.r26.u32);
	// stw r10,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r10.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C49C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c4bc
	if (ctx.cr6.eq) goto loc_8284C4BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6512
	ctx.r10.s64 = 6512;
	// addi r9,r11,-23744
	ctx.r9.s64 = ctx.r11.s64 + -23744;
	// stw r9,12920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12920, ctx.r9.u32);
	// stw r30,8916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8916, ctx.r30.u32);
	// stw r10,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r10.u32);
loc_8284C4BC:
	// li r3,6518
	ctx.r3.s64 = 6518;
	// bl 0x82800718
	ctx.lr = 0x8284C4C4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c4e4
	if (ctx.cr6.eq) goto loc_8284C4E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6518
	ctx.r10.s64 = 6518;
	// addi r9,r11,-23688
	ctx.r9.s64 = ctx.r11.s64 + -23688;
	// stw r9,13356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13356, ctx.r9.u32);
	// stw r27,9352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9352, ctx.r27.u32);
	// stw r10,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r10.u32);
loc_8284C4E4:
	// li r3,6527
	ctx.r3.s64 = 6527;
	// bl 0x82800718
	ctx.lr = 0x8284C4EC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c50c
	if (ctx.cr6.eq) goto loc_8284C50C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6527
	ctx.r10.s64 = 6527;
	// addi r9,r11,-23628
	ctx.r9.s64 = ctx.r11.s64 + -23628;
	// stw r9,13360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13360, ctx.r9.u32);
	// stw r27,9356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9356, ctx.r27.u32);
	// stw r10,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r10.u32);
loc_8284C50C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-23568
	ctx.r9.s64 = ctx.r11.s64 + -23568;
	// li r8,16494
	ctx.r8.s64 = 16494;
	// stw r9,13372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13372, ctx.r9.u32);
	// addi r7,r10,-23520
	ctx.r7.s64 = ctx.r10.s64 + -23520;
	// stw r26,9368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9368, ctx.r26.u32);
	// li r6,16498
	ctx.r6.s64 = 16498;
	// stw r8,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r8.u32);
	// li r3,6501
	ctx.r3.s64 = 6501;
	// stw r7,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r7.u32);
	// stw r26,9372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9372, ctx.r26.u32);
	// stw r6,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r6.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C544;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c564
	if (ctx.cr6.eq) goto loc_8284C564;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6501
	ctx.r10.s64 = 6501;
	// addi r9,r11,-23468
	ctx.r9.s64 = ctx.r11.s64 + -23468;
	// stw r9,13524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13524, ctx.r9.u32);
	// stw r30,9520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9520, ctx.r30.u32);
	// stw r10,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r10.u32);
loc_8284C564:
	// li r3,4329
	ctx.r3.s64 = 4329;
	// bl 0x82800718
	ctx.lr = 0x8284C56C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c58c
	if (ctx.cr6.eq) goto loc_8284C58C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4329
	ctx.r10.s64 = 4329;
	// addi r9,r11,-23412
	ctx.r9.s64 = ctx.r11.s64 + -23412;
	// stw r9,12688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12688, ctx.r9.u32);
	// stw r30,8684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8684, ctx.r30.u32);
	// stw r10,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r10.u32);
loc_8284C58C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,16503
	ctx.r10.s64 = 16503;
	// addi r9,r11,-23356
	ctx.r9.s64 = ctx.r11.s64 + -23356;
	// li r3,6786
	ctx.r3.s64 = 6786;
	// stw r9,13380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13380, ctx.r9.u32);
	// stw r26,9376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9376, ctx.r26.u32);
	// stw r10,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r10.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C5AC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c5cc
	if (ctx.cr6.eq) goto loc_8284C5CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6786
	ctx.r10.s64 = 6786;
	// addi r9,r11,-23300
	ctx.r9.s64 = ctx.r11.s64 + -23300;
	// stw r9,12692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12692, ctx.r9.u32);
	// stw r30,8688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8688, ctx.r30.u32);
	// stw r10,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r10.u32);
loc_8284C5CC:
	// li r3,4372
	ctx.r3.s64 = 4372;
	// bl 0x82800718
	ctx.lr = 0x8284C5D4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c5f4
	if (ctx.cr6.eq) goto loc_8284C5F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4372
	ctx.r10.s64 = 4372;
	// addi r9,r11,-23252
	ctx.r9.s64 = ctx.r11.s64 + -23252;
	// stw r9,12696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12696, ctx.r9.u32);
	// stw r28,8692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8692, ctx.r28.u32);
	// stw r10,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r10.u32);
loc_8284C5F4:
	// li r3,4367
	ctx.r3.s64 = 4367;
	// bl 0x82800718
	ctx.lr = 0x8284C5FC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c61c
	if (ctx.cr6.eq) goto loc_8284C61C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4367
	ctx.r10.s64 = 4367;
	// addi r9,r11,-23208
	ctx.r9.s64 = ctx.r11.s64 + -23208;
	// stw r9,13532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13532, ctx.r9.u32);
	// stw r30,9528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9528, ctx.r30.u32);
	// stw r10,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r10.u32);
loc_8284C61C:
	// li r3,4397
	ctx.r3.s64 = 4397;
	// bl 0x82800718
	ctx.lr = 0x8284C624;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c644
	if (ctx.cr6.eq) goto loc_8284C644;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4397
	ctx.r10.s64 = 4397;
	// addi r9,r11,-23156
	ctx.r9.s64 = ctx.r11.s64 + -23156;
	// stw r9,12700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12700, ctx.r9.u32);
	// stw r30,8696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8696, ctx.r30.u32);
	// stw r10,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r10.u32);
loc_8284C644:
	// li r3,4407
	ctx.r3.s64 = 4407;
	// bl 0x82800718
	ctx.lr = 0x8284C64C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c66c
	if (ctx.cr6.eq) goto loc_8284C66C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4407
	ctx.r10.s64 = 4407;
	// addi r9,r11,-23104
	ctx.r9.s64 = ctx.r11.s64 + -23104;
	// stw r9,12704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12704, ctx.r9.u32);
	// stw r27,8700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8700, ctx.r27.u32);
	// stw r10,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r10.u32);
loc_8284C66C:
	// li r3,6801
	ctx.r3.s64 = 6801;
	// bl 0x82800718
	ctx.lr = 0x8284C674;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c694
	if (ctx.cr6.eq) goto loc_8284C694;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6801
	ctx.r10.s64 = 6801;
	// addi r9,r11,-23044
	ctx.r9.s64 = ctx.r11.s64 + -23044;
	// stw r9,12708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12708, ctx.r9.u32);
	// stw r30,8704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8704, ctx.r30.u32);
	// stw r10,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r10.u32);
loc_8284C694:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-22996
	ctx.r9.s64 = ctx.r11.s64 + -22996;
	// li r8,16508
	ctx.r8.s64 = 16508;
	// stw r9,13384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13384, ctx.r9.u32);
	// addi r7,r10,-22940
	ctx.r7.s64 = ctx.r10.s64 + -22940;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r26,9380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9380, ctx.r26.u32);
	// stw r8,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r8.u32);
	// li r5,16513
	ctx.r5.s64 = 16513;
	// stw r7,13388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13388, ctx.r7.u32);
	// addi r4,r6,-22884
	ctx.r4.s64 = ctx.r6.s64 + -22884;
	// stw r26,9384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9384, ctx.r26.u32);
	// li r11,16518
	ctx.r11.s64 = 16518;
	// stw r5,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r5.u32);
	// li r3,4403
	ctx.r3.s64 = 4403;
	// stw r4,13392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13392, ctx.r4.u32);
	// stw r26,9388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9388, ctx.r26.u32);
	// stw r11,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r11.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C6E4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c704
	if (ctx.cr6.eq) goto loc_8284C704;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4403
	ctx.r10.s64 = 4403;
	// addi r9,r11,-22840
	ctx.r9.s64 = ctx.r11.s64 + -22840;
	// stw r9,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r9.u32);
	// stw r27,8708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8708, ctx.r27.u32);
	// stw r10,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r10.u32);
loc_8284C704:
	// li r3,6858
	ctx.r3.s64 = 6858;
	// bl 0x82800718
	ctx.lr = 0x8284C70C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c72c
	if (ctx.cr6.eq) goto loc_8284C72C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6858
	ctx.r10.s64 = 6858;
	// addi r9,r11,-22796
	ctx.r9.s64 = ctx.r11.s64 + -22796;
	// stw r9,12716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12716, ctx.r9.u32);
	// stw r30,8712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8712, ctx.r30.u32);
	// stw r10,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r10.u32);
loc_8284C72C:
	// li r3,4439
	ctx.r3.s64 = 4439;
	// bl 0x82800718
	ctx.lr = 0x8284C734;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c754
	if (ctx.cr6.eq) goto loc_8284C754;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4439
	ctx.r10.s64 = 4439;
	// addi r9,r11,-22748
	ctx.r9.s64 = ctx.r11.s64 + -22748;
	// stw r9,12720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12720, ctx.r9.u32);
	// stw r27,8716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8716, ctx.r27.u32);
	// stw r10,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r10.u32);
loc_8284C754:
	// li r3,4447
	ctx.r3.s64 = 4447;
	// bl 0x82800718
	ctx.lr = 0x8284C75C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c77c
	if (ctx.cr6.eq) goto loc_8284C77C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4447
	ctx.r10.s64 = 4447;
	// addi r9,r11,-22708
	ctx.r9.s64 = ctx.r11.s64 + -22708;
	// stw r9,12724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12724, ctx.r9.u32);
	// stw r30,8720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8720, ctx.r30.u32);
	// stw r10,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r10.u32);
loc_8284C77C:
	// li r3,6865
	ctx.r3.s64 = 6865;
	// bl 0x82800718
	ctx.lr = 0x8284C784;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c7a4
	if (ctx.cr6.eq) goto loc_8284C7A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6865
	ctx.r10.s64 = 6865;
	// addi r9,r11,-22652
	ctx.r9.s64 = ctx.r11.s64 + -22652;
	// stw r9,13536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13536, ctx.r9.u32);
	// stw r30,9532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9532, ctx.r30.u32);
	// stw r10,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r10.u32);
loc_8284C7A4:
	// li r3,4451
	ctx.r3.s64 = 4451;
	// bl 0x82800718
	ctx.lr = 0x8284C7AC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c7cc
	if (ctx.cr6.eq) goto loc_8284C7CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4451
	ctx.r10.s64 = 4451;
	// addi r9,r11,-22604
	ctx.r9.s64 = ctx.r11.s64 + -22604;
	// stw r9,12728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12728, ctx.r9.u32);
	// stw r30,8724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8724, ctx.r30.u32);
	// stw r10,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r10.u32);
loc_8284C7CC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-22560
	ctx.r9.s64 = ctx.r11.s64 + -22560;
	// li r8,16525
	ctx.r8.s64 = 16525;
	// stw r9,13396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13396, ctx.r9.u32);
	// addi r7,r10,-22508
	ctx.r7.s64 = ctx.r10.s64 + -22508;
	// stw r26,9392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9392, ctx.r26.u32);
	// li r6,16529
	ctx.r6.s64 = 16529;
	// stw r8,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r8.u32);
	// li r3,4970
	ctx.r3.s64 = 4970;
	// stw r7,13400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13400, ctx.r7.u32);
	// stw r26,9396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9396, ctx.r26.u32);
	// stw r6,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r6.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C804;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c824
	if (ctx.cr6.eq) goto loc_8284C824;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4970
	ctx.r10.s64 = 4970;
	// addi r9,r11,-22456
	ctx.r9.s64 = ctx.r11.s64 + -22456;
	// stw r9,12960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12960, ctx.r9.u32);
	// stw r30,8956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8956, ctx.r30.u32);
	// stw r10,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r10.u32);
loc_8284C824:
	// li r3,4998
	ctx.r3.s64 = 4998;
	// bl 0x82800718
	ctx.lr = 0x8284C82C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c84c
	if (ctx.cr6.eq) goto loc_8284C84C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4998
	ctx.r10.s64 = 4998;
	// addi r9,r11,-22396
	ctx.r9.s64 = ctx.r11.s64 + -22396;
	// stw r9,13404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13404, ctx.r9.u32);
	// stw r30,9400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9400, ctx.r30.u32);
	// stw r10,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r10.u32);
loc_8284C84C:
	// li r3,5016
	ctx.r3.s64 = 5016;
	// bl 0x82800718
	ctx.lr = 0x8284C854;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c874
	if (ctx.cr6.eq) goto loc_8284C874;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5016
	ctx.r10.s64 = 5016;
	// addi r9,r11,-22340
	ctx.r9.s64 = ctx.r11.s64 + -22340;
	// stw r9,12964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12964, ctx.r9.u32);
	// stw r30,8960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8960, ctx.r30.u32);
	// stw r10,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r10.u32);
loc_8284C874:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-22280
	ctx.r9.s64 = ctx.r11.s64 + -22280;
	// li r8,16535
	ctx.r8.s64 = 16535;
	// stw r9,13408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13408, ctx.r9.u32);
	// addi r7,r10,-22216
	ctx.r7.s64 = ctx.r10.s64 + -22216;
	// stw r26,9404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9404, ctx.r26.u32);
	// li r6,16539
	ctx.r6.s64 = 16539;
	// stw r8,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r8.u32);
	// li r3,20743
	ctx.r3.s64 = 20743;
	// stw r7,13412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13412, ctx.r7.u32);
	// stw r26,9408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9408, ctx.r26.u32);
	// stw r6,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r6.u32);
	// bl 0x82800718
	ctx.lr = 0x8284C8AC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c8cc
	if (ctx.cr6.eq) goto loc_8284C8CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,20743
	ctx.r10.s64 = 20743;
	// addi r9,r11,-22156
	ctx.r9.s64 = ctx.r11.s64 + -22156;
	// stw r9,12928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12928, ctx.r9.u32);
	// stw r30,8924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8924, ctx.r30.u32);
	// stw r10,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r10.u32);
loc_8284C8CC:
	// li r3,5046
	ctx.r3.s64 = 5046;
	// bl 0x82800718
	ctx.lr = 0x8284C8D4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c8f4
	if (ctx.cr6.eq) goto loc_8284C8F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5046
	ctx.r10.s64 = 5046;
	// addi r9,r11,-22100
	ctx.r9.s64 = ctx.r11.s64 + -22100;
	// stw r9,12932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12932, ctx.r9.u32);
	// stw r30,8928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8928, ctx.r30.u32);
	// stw r10,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r10.u32);
loc_8284C8F4:
	// li r3,5094
	ctx.r3.s64 = 5094;
	// bl 0x82800718
	ctx.lr = 0x8284C8FC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c91c
	if (ctx.cr6.eq) goto loc_8284C91C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5094
	ctx.r10.s64 = 5094;
	// addi r9,r11,-22048
	ctx.r9.s64 = ctx.r11.s64 + -22048;
	// stw r9,12936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12936, ctx.r9.u32);
	// stw r30,8932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8932, ctx.r30.u32);
	// stw r10,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r10.u32);
loc_8284C91C:
	// li r3,5101
	ctx.r3.s64 = 5101;
	// bl 0x82800718
	ctx.lr = 0x8284C924;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c944
	if (ctx.cr6.eq) goto loc_8284C944;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5101
	ctx.r10.s64 = 5101;
	// addi r9,r11,-21976
	ctx.r9.s64 = ctx.r11.s64 + -21976;
	// stw r9,12940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12940, ctx.r9.u32);
	// stw r30,8936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8936, ctx.r30.u32);
	// stw r10,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r10.u32);
loc_8284C944:
	// li r3,5108
	ctx.r3.s64 = 5108;
	// bl 0x82800718
	ctx.lr = 0x8284C94C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c96c
	if (ctx.cr6.eq) goto loc_8284C96C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5108
	ctx.r10.s64 = 5108;
	// addi r9,r11,-21904
	ctx.r9.s64 = ctx.r11.s64 + -21904;
	// stw r9,12944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12944, ctx.r9.u32);
	// stw r30,8940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8940, ctx.r30.u32);
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
loc_8284C96C:
	// li r3,5175
	ctx.r3.s64 = 5175;
	// bl 0x82800718
	ctx.lr = 0x8284C974;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c994
	if (ctx.cr6.eq) goto loc_8284C994;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5175
	ctx.r10.s64 = 5175;
	// addi r9,r11,-21840
	ctx.r9.s64 = ctx.r11.s64 + -21840;
	// stw r9,12948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12948, ctx.r9.u32);
	// stw r30,8944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8944, ctx.r30.u32);
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
loc_8284C994:
	// li r3,5198
	ctx.r3.s64 = 5198;
	// bl 0x82800718
	ctx.lr = 0x8284C99C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c9bc
	if (ctx.cr6.eq) goto loc_8284C9BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5198
	ctx.r10.s64 = 5198;
	// addi r9,r11,-21788
	ctx.r9.s64 = ctx.r11.s64 + -21788;
	// stw r9,12952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12952, ctx.r9.u32);
	// stw r30,8948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8948, ctx.r30.u32);
	// stw r10,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r10.u32);
loc_8284C9BC:
	// li r3,5227
	ctx.r3.s64 = 5227;
	// bl 0x82800718
	ctx.lr = 0x8284C9C4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284c9e4
	if (ctx.cr6.eq) goto loc_8284C9E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5227
	ctx.r10.s64 = 5227;
	// addi r9,r11,-21728
	ctx.r9.s64 = ctx.r11.s64 + -21728;
	// stw r9,12956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12956, ctx.r9.u32);
	// stw r30,8952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8952, ctx.r30.u32);
	// stw r10,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r10.u32);
loc_8284C9E4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-21672
	ctx.r9.s64 = ctx.r11.s64 + -21672;
	// addi r8,r10,-21624
	ctx.r8.s64 = ctx.r10.s64 + -21624;
	// stw r9,13416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13416, ctx.r9.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r24,9412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9412, ctx.r24.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r25,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r25.u32);
	// addi r5,r7,-21580
	ctx.r5.s64 = ctx.r7.s64 + -21580;
	// stw r8,13420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13420, ctx.r8.u32);
	// addi r4,r6,-21532
	ctx.r4.s64 = ctx.r6.s64 + -21532;
	// stw r24,9416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9416, ctx.r24.u32);
	// li r3,5605
	ctx.r3.s64 = 5605;
	// stw r25,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r25.u32);
	// stw r5,13424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13424, ctx.r5.u32);
	// stw r24,9420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9420, ctx.r24.u32);
	// stw r25,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r25.u32);
	// stw r4,13428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13428, ctx.r4.u32);
	// stw r24,9424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9424, ctx.r24.u32);
	// stw r25,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r25.u32);
	// bl 0x82800718
	ctx.lr = 0x8284CA3C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ca5c
	if (ctx.cr6.eq) goto loc_8284CA5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5605
	ctx.r10.s64 = 5605;
	// addi r9,r11,-21484
	ctx.r9.s64 = ctx.r11.s64 + -21484;
	// stw r9,13016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13016, ctx.r9.u32);
	// stw r30,9012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9012, ctx.r30.u32);
	// stw r10,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r10.u32);
loc_8284CA5C:
	// li r3,5615
	ctx.r3.s64 = 5615;
	// bl 0x82800718
	ctx.lr = 0x8284CA64;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ca84
	if (ctx.cr6.eq) goto loc_8284CA84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5615
	ctx.r10.s64 = 5615;
	// addi r9,r11,-21432
	ctx.r9.s64 = ctx.r11.s64 + -21432;
	// stw r9,13024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13024, ctx.r9.u32);
	// stw r30,9020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9020, ctx.r30.u32);
	// stw r10,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r10.u32);
loc_8284CA84:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284CA8C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284caa8
	if (ctx.cr6.eq) goto loc_8284CAA8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-21376
	ctx.r10.s64 = ctx.r11.s64 + -21376;
	// stw r10,13032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13032, ctx.r10.u32);
	// stw r30,9028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9028, ctx.r30.u32);
	// stw r25,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r25.u32);
loc_8284CAA8:
	// li r3,5639
	ctx.r3.s64 = 5639;
	// bl 0x82800718
	ctx.lr = 0x8284CAB0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cad0
	if (ctx.cr6.eq) goto loc_8284CAD0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5639
	ctx.r10.s64 = 5639;
	// addi r9,r11,-21312
	ctx.r9.s64 = ctx.r11.s64 + -21312;
	// stw r9,13040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13040, ctx.r9.u32);
	// stw r30,9036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9036, ctx.r30.u32);
	// stw r10,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r10.u32);
loc_8284CAD0:
	// li r3,5648
	ctx.r3.s64 = 5648;
	// bl 0x82800718
	ctx.lr = 0x8284CAD8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284caf8
	if (ctx.cr6.eq) goto loc_8284CAF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5648
	ctx.r10.s64 = 5648;
	// addi r9,r11,-21256
	ctx.r9.s64 = ctx.r11.s64 + -21256;
	// stw r9,13048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13048, ctx.r9.u32);
	// stw r30,9044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9044, ctx.r30.u32);
	// stw r10,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r10.u32);
loc_8284CAF8:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284CB00;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cb1c
	if (ctx.cr6.eq) goto loc_8284CB1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-21208
	ctx.r10.s64 = ctx.r11.s64 + -21208;
	// stw r10,13056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13056, ctx.r10.u32);
	// stw r30,9052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9052, ctx.r30.u32);
	// stw r25,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r25.u32);
loc_8284CB1C:
	// li r3,5671
	ctx.r3.s64 = 5671;
	// bl 0x82800718
	ctx.lr = 0x8284CB24;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cb44
	if (ctx.cr6.eq) goto loc_8284CB44;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5671
	ctx.r10.s64 = 5671;
	// addi r9,r11,-21144
	ctx.r9.s64 = ctx.r11.s64 + -21144;
	// stw r9,13064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13064, ctx.r9.u32);
	// stw r30,9060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9060, ctx.r30.u32);
	// stw r10,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r10.u32);
loc_8284CB44:
	// li r3,5665
	ctx.r3.s64 = 5665;
	// bl 0x82800718
	ctx.lr = 0x8284CB4C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cb6c
	if (ctx.cr6.eq) goto loc_8284CB6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5665
	ctx.r10.s64 = 5665;
	// addi r9,r11,-21080
	ctx.r9.s64 = ctx.r11.s64 + -21080;
	// stw r9,13072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13072, ctx.r9.u32);
	// stw r30,9068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9068, ctx.r30.u32);
	// stw r10,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r10.u32);
loc_8284CB6C:
	// li r3,5668
	ctx.r3.s64 = 5668;
	// bl 0x82800718
	ctx.lr = 0x8284CB74;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cb94
	if (ctx.cr6.eq) goto loc_8284CB94;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5668
	ctx.r10.s64 = 5668;
	// addi r9,r11,-21028
	ctx.r9.s64 = ctx.r11.s64 + -21028;
	// stw r9,13080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13080, ctx.r9.u32);
	// stw r30,9076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9076, ctx.r30.u32);
	// stw r10,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r10.u32);
loc_8284CB94:
	// li r3,5680
	ctx.r3.s64 = 5680;
	// bl 0x82800718
	ctx.lr = 0x8284CB9C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cbbc
	if (ctx.cr6.eq) goto loc_8284CBBC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5680
	ctx.r10.s64 = 5680;
	// addi r9,r11,-20968
	ctx.r9.s64 = ctx.r11.s64 + -20968;
	// stw r9,13088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13088, ctx.r9.u32);
	// stw r30,9084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9084, ctx.r30.u32);
	// stw r10,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r10.u32);
loc_8284CBBC:
	// li r3,5687
	ctx.r3.s64 = 5687;
	// bl 0x82800718
	ctx.lr = 0x8284CBC4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cbe4
	if (ctx.cr6.eq) goto loc_8284CBE4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5687
	ctx.r10.s64 = 5687;
	// addi r9,r11,-20916
	ctx.r9.s64 = ctx.r11.s64 + -20916;
	// stw r9,13096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13096, ctx.r9.u32);
	// stw r30,9092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9092, ctx.r30.u32);
	// stw r10,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r10.u32);
loc_8284CBE4:
	// li r3,5695
	ctx.r3.s64 = 5695;
	// bl 0x82800718
	ctx.lr = 0x8284CBEC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cc0c
	if (ctx.cr6.eq) goto loc_8284CC0C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5695
	ctx.r10.s64 = 5695;
	// addi r9,r11,-20864
	ctx.r9.s64 = ctx.r11.s64 + -20864;
	// stw r9,13104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13104, ctx.r9.u32);
	// stw r30,9100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9100, ctx.r30.u32);
	// stw r10,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r10.u32);
loc_8284CC0C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-20816
	ctx.r9.s64 = ctx.r11.s64 + -20816;
	// li r8,16558
	ctx.r8.s64 = 16558;
	// stw r9,13432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13432, ctx.r9.u32);
	// addi r7,r10,-20776
	ctx.r7.s64 = ctx.r10.s64 + -20776;
	// stw r26,9428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9428, ctx.r26.u32);
	// li r6,16562
	ctx.r6.s64 = 16562;
	// stw r8,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r8.u32);
	// li r3,5751
	ctx.r3.s64 = 5751;
	// stw r7,13436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13436, ctx.r7.u32);
	// stw r26,9432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9432, ctx.r26.u32);
	// stw r6,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r6.u32);
	// bl 0x82800718
	ctx.lr = 0x8284CC44;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cc64
	if (ctx.cr6.eq) goto loc_8284CC64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5751
	ctx.r10.s64 = 5751;
	// addi r9,r11,-20732
	ctx.r9.s64 = ctx.r11.s64 + -20732;
	// stw r9,12968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12968, ctx.r9.u32);
	// stw r30,8964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8964, ctx.r30.u32);
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
loc_8284CC64:
	// li r3,5786
	ctx.r3.s64 = 5786;
	// bl 0x82800718
	ctx.lr = 0x8284CC6C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cc8c
	if (ctx.cr6.eq) goto loc_8284CC8C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5786
	ctx.r10.s64 = 5786;
	// addi r9,r11,-20676
	ctx.r9.s64 = ctx.r11.s64 + -20676;
	// stw r9,12972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12972, ctx.r9.u32);
	// stw r30,8968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8968, ctx.r30.u32);
	// stw r10,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r10.u32);
loc_8284CC8C:
	// li r3,5800
	ctx.r3.s64 = 5800;
	// bl 0x82800718
	ctx.lr = 0x8284CC94;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ccb4
	if (ctx.cr6.eq) goto loc_8284CCB4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5800
	ctx.r10.s64 = 5800;
	// addi r9,r11,-20608
	ctx.r9.s64 = ctx.r11.s64 + -20608;
	// stw r9,12976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12976, ctx.r9.u32);
	// stw r27,8972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8972, ctx.r27.u32);
	// stw r10,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r10.u32);
loc_8284CCB4:
	// li r3,5789
	ctx.r3.s64 = 5789;
	// bl 0x82800718
	ctx.lr = 0x8284CCBC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ccdc
	if (ctx.cr6.eq) goto loc_8284CCDC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5789
	ctx.r10.s64 = 5789;
	// addi r9,r11,-20536
	ctx.r9.s64 = ctx.r11.s64 + -20536;
	// stw r9,12980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12980, ctx.r9.u32);
	// stw r30,8976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8976, ctx.r30.u32);
	// stw r10,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r10.u32);
loc_8284CCDC:
	// li r3,5806
	ctx.r3.s64 = 5806;
	// bl 0x82800718
	ctx.lr = 0x8284CCE4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cd04
	if (ctx.cr6.eq) goto loc_8284CD04;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5806
	ctx.r10.s64 = 5806;
	// addi r9,r11,-20456
	ctx.r9.s64 = ctx.r11.s64 + -20456;
	// stw r9,12984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12984, ctx.r9.u32);
	// stw r30,8980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8980, ctx.r30.u32);
	// stw r10,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r10.u32);
loc_8284CD04:
	// li r3,5808
	ctx.r3.s64 = 5808;
	// bl 0x82800718
	ctx.lr = 0x8284CD0C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cd2c
	if (ctx.cr6.eq) goto loc_8284CD2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5808
	ctx.r10.s64 = 5808;
	// addi r9,r11,-20376
	ctx.r9.s64 = ctx.r11.s64 + -20376;
	// stw r9,12988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12988, ctx.r9.u32);
	// stw r27,8984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8984, ctx.r27.u32);
	// stw r10,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r10.u32);
loc_8284CD2C:
	// li r3,5791
	ctx.r3.s64 = 5791;
	// bl 0x82800718
	ctx.lr = 0x8284CD34;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cd54
	if (ctx.cr6.eq) goto loc_8284CD54;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5791
	ctx.r10.s64 = 5791;
	// addi r9,r11,-20296
	ctx.r9.s64 = ctx.r11.s64 + -20296;
	// stw r9,13768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13768, ctx.r9.u32);
	// stw r27,9764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9764, ctx.r27.u32);
	// stw r10,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r10.u32);
loc_8284CD54:
	// li r3,5840
	ctx.r3.s64 = 5840;
	// bl 0x82800718
	ctx.lr = 0x8284CD5C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cd7c
	if (ctx.cr6.eq) goto loc_8284CD7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5840
	ctx.r10.s64 = 5840;
	// addi r9,r11,-20216
	ctx.r9.s64 = ctx.r11.s64 + -20216;
	// stw r9,12992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12992, ctx.r9.u32);
	// stw r27,8988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8988, ctx.r27.u32);
	// stw r10,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r10.u32);
loc_8284CD7C:
	// li r3,5845
	ctx.r3.s64 = 5845;
	// bl 0x82800718
	ctx.lr = 0x8284CD84;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cda4
	if (ctx.cr6.eq) goto loc_8284CDA4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5845
	ctx.r10.s64 = 5845;
	// addi r9,r11,-20144
	ctx.r9.s64 = ctx.r11.s64 + -20144;
	// stw r9,12996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12996, ctx.r9.u32);
	// stw r27,8992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8992, ctx.r27.u32);
	// stw r10,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r10.u32);
loc_8284CDA4:
	// li r3,5879
	ctx.r3.s64 = 5879;
	// bl 0x82800718
	ctx.lr = 0x8284CDAC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cdcc
	if (ctx.cr6.eq) goto loc_8284CDCC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5879
	ctx.r10.s64 = 5879;
	// addi r9,r11,-20064
	ctx.r9.s64 = ctx.r11.s64 + -20064;
	// stw r9,13000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13000, ctx.r9.u32);
	// stw r30,8996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8996, ctx.r30.u32);
	// stw r10,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r10.u32);
loc_8284CDCC:
	// li r3,5889
	ctx.r3.s64 = 5889;
	// bl 0x82800718
	ctx.lr = 0x8284CDD4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cdf4
	if (ctx.cr6.eq) goto loc_8284CDF4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5889
	ctx.r10.s64 = 5889;
	// addi r9,r11,-19992
	ctx.r9.s64 = ctx.r11.s64 + -19992;
	// stw r9,13004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13004, ctx.r9.u32);
	// stw r30,9000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9000, ctx.r30.u32);
	// stw r10,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r10.u32);
loc_8284CDF4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-19912
	ctx.r9.s64 = ctx.r11.s64 + -19912;
	// li r8,16566
	ctx.r8.s64 = 16566;
	// stw r9,13440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13440, ctx.r9.u32);
	// addi r7,r10,-19872
	ctx.r7.s64 = ctx.r10.s64 + -19872;
	// stw r23,9436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9436, ctx.r23.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r8,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r8.u32);
	// li r3,7433
	ctx.r3.s64 = 7433;
	// stw r7,13708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13708, ctx.r7.u32);
	// stw r22,9704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9704, ctx.r22.u32);
	// stw r28,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r28.u32);
	// bl 0x82800718
	ctx.lr = 0x8284CE2C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ce4c
	if (ctx.cr6.eq) goto loc_8284CE4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,7433
	ctx.r10.s64 = 7433;
	// addi r9,r11,-19808
	ctx.r9.s64 = ctx.r11.s64 + -19808;
	// stw r9,13108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13108, ctx.r9.u32);
	// stw r30,9104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9104, ctx.r30.u32);
	// stw r10,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r10.u32);
loc_8284CE4C:
	// li r3,6252
	ctx.r3.s64 = 6252;
	// bl 0x82800718
	ctx.lr = 0x8284CE54;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ce74
	if (ctx.cr6.eq) goto loc_8284CE74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6252
	ctx.r10.s64 = 6252;
	// addi r9,r11,-19752
	ctx.r9.s64 = ctx.r11.s64 + -19752;
	// stw r9,13112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13112, ctx.r9.u32);
	// stw r27,9108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9108, ctx.r27.u32);
	// stw r10,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r10.u32);
loc_8284CE74:
	// li r3,6265
	ctx.r3.s64 = 6265;
	// bl 0x82800718
	ctx.lr = 0x8284CE7C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ce9c
	if (ctx.cr6.eq) goto loc_8284CE9C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6265
	ctx.r10.s64 = 6265;
	// addi r9,r11,-19688
	ctx.r9.s64 = ctx.r11.s64 + -19688;
	// stw r9,13116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13116, ctx.r9.u32);
	// stw r27,9112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9112, ctx.r27.u32);
	// stw r10,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r10.u32);
loc_8284CE9C:
	// li r3,6310
	ctx.r3.s64 = 6310;
	// bl 0x82800718
	ctx.lr = 0x8284CEA4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cec4
	if (ctx.cr6.eq) goto loc_8284CEC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6310
	ctx.r10.s64 = 6310;
	// addi r9,r11,-19620
	ctx.r9.s64 = ctx.r11.s64 + -19620;
	// stw r9,13120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13120, ctx.r9.u32);
	// stw r30,9116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9116, ctx.r30.u32);
	// stw r10,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r10.u32);
loc_8284CEC4:
	// li r3,6298
	ctx.r3.s64 = 6298;
	// bl 0x82800718
	ctx.lr = 0x8284CECC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284ceec
	if (ctx.cr6.eq) goto loc_8284CEEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6298
	ctx.r10.s64 = 6298;
	// addi r9,r11,-19576
	ctx.r9.s64 = ctx.r11.s64 + -19576;
	// stw r9,13124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13124, ctx.r9.u32);
	// stw r30,9120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9120, ctx.r30.u32);
	// stw r10,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r10.u32);
loc_8284CEEC:
	// li r3,6295
	ctx.r3.s64 = 6295;
	// bl 0x82800718
	ctx.lr = 0x8284CEF4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cf14
	if (ctx.cr6.eq) goto loc_8284CF14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6295
	ctx.r10.s64 = 6295;
	// addi r9,r11,-19516
	ctx.r9.s64 = ctx.r11.s64 + -19516;
	// stw r9,13764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13764, ctx.r9.u32);
	// stw r30,9760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9760, ctx.r30.u32);
	// stw r10,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r10.u32);
loc_8284CF14:
	// li r3,5911
	ctx.r3.s64 = 5911;
	// bl 0x82800718
	ctx.lr = 0x8284CF1C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cf3c
	if (ctx.cr6.eq) goto loc_8284CF3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5911
	ctx.r10.s64 = 5911;
	// addi r9,r11,-19468
	ctx.r9.s64 = ctx.r11.s64 + -19468;
	// stw r9,13444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13444, ctx.r9.u32);
	// stw r30,9440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9440, ctx.r30.u32);
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
loc_8284CF3C:
	// li r3,6321
	ctx.r3.s64 = 6321;
	// bl 0x82800718
	ctx.lr = 0x8284CF44;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cf68
	if (ctx.cr6.eq) goto loc_8284CF68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,8193
	ctx.r10.s64 = 8193;
	// addi r9,r11,-19400
	ctx.r9.s64 = ctx.r11.s64 + -19400;
	// li r8,6321
	ctx.r8.s64 = 6321;
	// stw r9,13448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13448, ctx.r9.u32);
	// stw r10,9444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9444, ctx.r10.u32);
	// stw r8,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r8.u32);
loc_8284CF68:
	// li r3,6326
	ctx.r3.s64 = 6326;
	// bl 0x82800718
	ctx.lr = 0x8284CF70;
	sub_82800718(ctx, base);
	// li r29,6326
	ctx.r29.s64 = 6326;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cf90
	if (ctx.cr6.eq) goto loc_8284CF90;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-19312
	ctx.r10.s64 = ctx.r11.s64 + -19312;
	// stw r10,13716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13716, ctx.r10.u32);
	// stw r30,9712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9712, ctx.r30.u32);
	// stw r29,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r29.u32);
loc_8284CF90:
	// li r3,5917
	ctx.r3.s64 = 5917;
	// bl 0x82800718
	ctx.lr = 0x8284CF98;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cfb8
	if (ctx.cr6.eq) goto loc_8284CFB8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5917
	ctx.r10.s64 = 5917;
	// addi r9,r11,-19224
	ctx.r9.s64 = ctx.r11.s64 + -19224;
	// stw r9,13452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13452, ctx.r9.u32);
	// stw r30,9448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9448, ctx.r30.u32);
	// stw r10,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r10.u32);
loc_8284CFB8:
	// li r3,5928
	ctx.r3.s64 = 5928;
	// bl 0x82800718
	ctx.lr = 0x8284CFC0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284cfe0
	if (ctx.cr6.eq) goto loc_8284CFE0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5928
	ctx.r10.s64 = 5928;
	// addi r9,r11,-19156
	ctx.r9.s64 = ctx.r11.s64 + -19156;
	// stw r9,13456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13456, ctx.r9.u32);
	// stw r30,9452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9452, ctx.r30.u32);
	// stw r10,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r10.u32);
loc_8284CFE0:
	// li r3,5962
	ctx.r3.s64 = 5962;
	// bl 0x82800718
	ctx.lr = 0x8284CFE8;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d008
	if (ctx.cr6.eq) goto loc_8284D008;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5962
	ctx.r10.s64 = 5962;
	// addi r9,r11,-19096
	ctx.r9.s64 = ctx.r11.s64 + -19096;
	// stw r9,13460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13460, ctx.r9.u32);
	// stw r27,9456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9456, ctx.r27.u32);
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
loc_8284D008:
	// li r3,5974
	ctx.r3.s64 = 5974;
	// bl 0x82800718
	ctx.lr = 0x8284D010;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d030
	if (ctx.cr6.eq) goto loc_8284D030;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5974
	ctx.r10.s64 = 5974;
	// addi r9,r11,-19032
	ctx.r9.s64 = ctx.r11.s64 + -19032;
	// stw r9,13720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13720, ctx.r9.u32);
	// stw r30,9716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9716, ctx.r30.u32);
	// stw r10,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r10.u32);
loc_8284D030:
	// li r3,5981
	ctx.r3.s64 = 5981;
	// bl 0x82800718
	ctx.lr = 0x8284D038;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d058
	if (ctx.cr6.eq) goto loc_8284D058;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,5981
	ctx.r10.s64 = 5981;
	// addi r9,r11,-18960
	ctx.r9.s64 = ctx.r11.s64 + -18960;
	// stw r9,13724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13724, ctx.r9.u32);
	// stw r30,9720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9720, ctx.r30.u32);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
loc_8284D058:
	// li r3,6326
	ctx.r3.s64 = 6326;
	// bl 0x82800718
	ctx.lr = 0x8284D060;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d07c
	if (ctx.cr6.eq) goto loc_8284D07C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-18896
	ctx.r10.s64 = ctx.r11.s64 + -18896;
	// stw r10,13772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13772, ctx.r10.u32);
	// stw r30,9768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9768, ctx.r30.u32);
	// stw r29,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r29.u32);
loc_8284D07C:
	// li r3,634
	ctx.r3.s64 = 634;
	// bl 0x82800718
	ctx.lr = 0x8284D084;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d0a4
	if (ctx.cr6.eq) goto loc_8284D0A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,634
	ctx.r10.s64 = 634;
	// addi r9,r11,-18828
	ctx.r9.s64 = ctx.r11.s64 + -18828;
	// stw r9,13544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13544, ctx.r9.u32);
	// stw r27,9540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9540, ctx.r27.u32);
	// stw r10,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r10.u32);
loc_8284D0A4:
	// li r3,6376
	ctx.r3.s64 = 6376;
	// bl 0x82800718
	ctx.lr = 0x8284D0AC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d0cc
	if (ctx.cr6.eq) goto loc_8284D0CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6376
	ctx.r10.s64 = 6376;
	// addi r9,r11,-18772
	ctx.r9.s64 = ctx.r11.s64 + -18772;
	// stw r9,12732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12732, ctx.r9.u32);
	// stw r30,8728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8728, ctx.r30.u32);
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
loc_8284D0CC:
	// li r3,708
	ctx.r3.s64 = 708;
	// bl 0x82800718
	ctx.lr = 0x8284D0D4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d0f4
	if (ctx.cr6.eq) goto loc_8284D0F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,708
	ctx.r10.s64 = 708;
	// addi r9,r11,-18712
	ctx.r9.s64 = ctx.r11.s64 + -18712;
	// stw r9,12736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12736, ctx.r9.u32);
	// stw r30,8732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8732, ctx.r30.u32);
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
loc_8284D0F4:
	// li r3,744
	ctx.r3.s64 = 744;
	// bl 0x82800718
	ctx.lr = 0x8284D0FC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d11c
	if (ctx.cr6.eq) goto loc_8284D11C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,744
	ctx.r10.s64 = 744;
	// addi r9,r11,-18660
	ctx.r9.s64 = ctx.r11.s64 + -18660;
	// stw r9,12740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12740, ctx.r9.u32);
	// stw r27,8736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8736, ctx.r27.u32);
	// stw r10,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r10.u32);
loc_8284D11C:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284D124;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d140
	if (ctx.cr6.eq) goto loc_8284D140;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-18616
	ctx.r10.s64 = ctx.r11.s64 + -18616;
	// stw r10,12744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12744, ctx.r10.u32);
	// stw r30,8740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8740, ctx.r30.u32);
	// stw r25,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r25.u32);
loc_8284D140:
	// li r3,6400
	ctx.r3.s64 = 6400;
	// bl 0x82800718
	ctx.lr = 0x8284D148;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d168
	if (ctx.cr6.eq) goto loc_8284D168;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,6400
	ctx.r10.s64 = 6400;
	// addi r9,r11,-18552
	ctx.r9.s64 = ctx.r11.s64 + -18552;
	// stw r9,12748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12748, ctx.r9.u32);
	// stw r30,8744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8744, ctx.r30.u32);
	// stw r10,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r10.u32);
loc_8284D168:
	// li r3,18313
	ctx.r3.s64 = 18313;
	// bl 0x82800718
	ctx.lr = 0x8284D170;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d18c
	if (ctx.cr6.eq) goto loc_8284D18C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-18504
	ctx.r10.s64 = ctx.r11.s64 + -18504;
	// stw r10,12752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12752, ctx.r10.u32);
	// stw r30,8748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8748, ctx.r30.u32);
	// stw r25,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r25.u32);
loc_8284D18C:
	// li r3,4477
	ctx.r3.s64 = 4477;
	// bl 0x82800718
	ctx.lr = 0x8284D194;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d1b4
	if (ctx.cr6.eq) goto loc_8284D1B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4477
	ctx.r10.s64 = 4477;
	// addi r9,r11,-18440
	ctx.r9.s64 = ctx.r11.s64 + -18440;
	// stw r9,12756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12756, ctx.r9.u32);
	// stw r30,8752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8752, ctx.r30.u32);
	// stw r10,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r10.u32);
loc_8284D1B4:
	// li r3,4474
	ctx.r3.s64 = 4474;
	// bl 0x82800718
	ctx.lr = 0x8284D1BC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d1dc
	if (ctx.cr6.eq) goto loc_8284D1DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4474
	ctx.r10.s64 = 4474;
	// addi r9,r11,-18388
	ctx.r9.s64 = ctx.r11.s64 + -18388;
	// stw r9,13712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13712, ctx.r9.u32);
	// stw r30,9708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9708, ctx.r30.u32);
	// stw r10,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r10.u32);
loc_8284D1DC:
	// li r3,4504
	ctx.r3.s64 = 4504;
	// bl 0x82800718
	ctx.lr = 0x8284D1E4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d204
	if (ctx.cr6.eq) goto loc_8284D204;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4504
	ctx.r10.s64 = 4504;
	// addi r9,r11,-18340
	ctx.r9.s64 = ctx.r11.s64 + -18340;
	// stw r9,12760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12760, ctx.r9.u32);
	// stw r30,8756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8756, ctx.r30.u32);
	// stw r10,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r10.u32);
loc_8284D204:
	// li r3,4510
	ctx.r3.s64 = 4510;
	// bl 0x82800718
	ctx.lr = 0x8284D20C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d22c
	if (ctx.cr6.eq) goto loc_8284D22C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,4510
	ctx.r10.s64 = 4510;
	// addi r9,r11,-18292
	ctx.r9.s64 = ctx.r11.s64 + -18292;
	// stw r9,13548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13548, ctx.r9.u32);
	// stw r30,9544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9544, ctx.r30.u32);
	// stw r10,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r10.u32);
loc_8284D22C:
	// li r3,4529
	ctx.r3.s64 = 4529;
	// bl 0x82800718
	ctx.lr = 0x8284D234;
	sub_82800718(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r29,r11,-18236
	ctx.r29.s64 = ctx.r11.s64 + -18236;
	// beq cr6,0x8284d254
	if (ctx.cr6.eq) goto loc_8284D254;
	// li r11,4529
	ctx.r11.s64 = 4529;
	// stw r29,12764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12764, ctx.r29.u32);
	// stw r30,8760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8760, ctx.r30.u32);
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
loc_8284D254:
	// li r3,4571
	ctx.r3.s64 = 4571;
	// bl 0x82800718
	ctx.lr = 0x8284D25C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d274
	if (ctx.cr6.eq) goto loc_8284D274;
	// li r11,4571
	ctx.r11.s64 = 4571;
	// stw r29,12764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12764, ctx.r29.u32);
	// stw r30,8760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8760, ctx.r30.u32);
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
loc_8284D274:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-18188
	ctx.r9.s64 = ctx.r11.s64 + -18188;
	// li r27,2593
	ctx.r27.s64 = 2593;
	// stw r9,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r9.u32);
	// addi r8,r10,-18144
	ctx.r8.s64 = ctx.r10.s64 + -18144;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r27,9176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9176, ctx.r27.u32);
	// stw r28,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r28.u32);
	// li r3,19365
	ctx.r3.s64 = 19365;
	// stw r8,13464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13464, ctx.r8.u32);
	// addi r6,r7,-18100
	ctx.r6.s64 = ctx.r7.s64 + -18100;
	// stw r27,9460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9460, ctx.r27.u32);
	// stw r28,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r28.u32);
	// stw r6,13468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13468, ctx.r6.u32);
	// stw r27,9464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9464, ctx.r27.u32);
	// stw r28,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r28.u32);
	// bl 0x82800718
	ctx.lr = 0x8284D2BC;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d2dc
	if (ctx.cr6.eq) goto loc_8284D2DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,19365
	ctx.r10.s64 = 19365;
	// addi r9,r11,-18056
	ctx.r9.s64 = ctx.r11.s64 + -18056;
	// stw r9,13472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13472, ctx.r9.u32);
	// stw r22,9468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9468, ctx.r22.u32);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
loc_8284D2DC:
	// li r3,25511
	ctx.r3.s64 = 25511;
	// bl 0x82800718
	ctx.lr = 0x8284D2E4;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d304
	if (ctx.cr6.eq) goto loc_8284D304;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,25511
	ctx.r10.s64 = 25511;
	// addi r9,r11,-18008
	ctx.r9.s64 = ctx.r11.s64 + -18008;
	// stw r9,13816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13816, ctx.r9.u32);
	// stw r22,9812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9812, ctx.r22.u32);
	// stw r10,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r10.u32);
loc_8284D304:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-17960
	ctx.r9.s64 = ctx.r11.s64 + -17960;
	// li r29,2605
	ctx.r29.s64 = 2605;
	// stw r9,13552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13552, ctx.r9.u32);
	// addi r8,r10,-17904
	ctx.r8.s64 = ctx.r10.s64 + -17904;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r29,9548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9548, ctx.r29.u32);
	// stw r28,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r28.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r8,13572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13572, ctx.r8.u32);
	// addi r5,r7,-17844
	ctx.r5.s64 = ctx.r7.s64 + -17844;
	// stw r29,9568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9568, ctx.r29.u32);
	// li r4,19682
	ctx.r4.s64 = 19682;
	// stw r28,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r28.u32);
	// addi r3,r6,-17788
	ctx.r3.s64 = ctx.r6.s64 + -17788;
	// stw r5,13556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13556, ctx.r5.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,9552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9552, ctx.r29.u32);
	// li r10,20056
	ctx.r10.s64 = 20056;
	// stw r4,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r4.u32);
	// addi r9,r11,-17736
	ctx.r9.s64 = ctx.r11.s64 + -17736;
	// stw r3,13560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13560, ctx.r3.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r29,9556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9556, ctx.r29.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r10,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r10.u32);
	// addi r6,r8,-17680
	ctx.r6.s64 = ctx.r8.s64 + -17680;
	// stw r9,13564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13564, ctx.r9.u32);
	// li r5,20047
	ctx.r5.s64 = 20047;
	// stw r29,9560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9560, ctx.r29.u32);
	// addi r4,r7,-17624
	ctx.r4.s64 = ctx.r7.s64 + -17624;
	// stw r20,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r20.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// stw r6,13568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13568, ctx.r6.u32);
	// li r10,19445
	ctx.r10.s64 = 19445;
	// stw r29,9564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9564, ctx.r29.u32);
	// addi r9,r3,-17568
	ctx.r9.s64 = ctx.r3.s64 + -17568;
	// stw r5,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r5.u32);
	// li r8,21744
	ctx.r8.s64 = 21744;
	// stw r4,13576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13576, ctx.r4.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r29,9572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9572, ctx.r29.u32);
	// stw r10,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r10.u32);
	// stw r9,13580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13580, ctx.r9.u32);
	// stw r29,9576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9576, ctx.r29.u32);
	// li r11,6701
	ctx.r11.s64 = 6701;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r8,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r8.u32);
	// addi r5,r7,-17512
	ctx.r5.s64 = ctx.r7.s64 + -17512;
	// li r4,21733
	ctx.r4.s64 = 21733;
	// stw r5,13584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13584, ctx.r5.u32);
	// addi r3,r6,-17456
	ctx.r3.s64 = ctx.r6.s64 + -17456;
	// stw r29,9580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9580, ctx.r29.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r4,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r4.u32);
	// li r9,21738
	ctx.r9.s64 = 21738;
	// stw r3,13588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13588, ctx.r3.u32);
	// addi r8,r10,-17400
	ctx.r8.s64 = ctx.r10.s64 + -17400;
	// stw r29,9584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9584, ctx.r29.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r9,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r9.u32);
	// stw r8,13592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13592, ctx.r8.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r5,r7,-17344
	ctx.r5.s64 = ctx.r7.s64 + -17344;
	// stw r11,9588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9588, ctx.r11.u32);
	// stw r28,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r28.u32);
	// addi r4,r6,-17288
	ctx.r4.s64 = ctx.r6.s64 + -17288;
	// stw r5,13612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13612, ctx.r5.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// stw r11,9608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9608, ctx.r11.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r28,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r28.u32);
	// addi r9,r3,-17232
	ctx.r9.s64 = ctx.r3.s64 + -17232;
	// stw r4,13596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13596, ctx.r4.u32);
	// li r8,21956
	ctx.r8.s64 = 21956;
	// stw r11,9592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9592, ctx.r11.u32);
	// addi r7,r10,-17176
	ctx.r7.s64 = ctx.r10.s64 + -17176;
	// stw r21,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r21.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r9,13600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13600, ctx.r9.u32);
	// li r5,19715
	ctx.r5.s64 = 19715;
	// stw r11,9596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9596, ctx.r11.u32);
	// addi r4,r6,-17116
	ctx.r4.s64 = ctx.r6.s64 + -17116;
	// stw r8,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r8.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// stw r7,13604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13604, ctx.r7.u32);
	// li r10,19727
	ctx.r10.s64 = 19727;
	// stw r11,9600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9600, ctx.r11.u32);
	// addi r9,r3,-17056
	ctx.r9.s64 = ctx.r3.s64 + -17056;
	// stw r5,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r5.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r4,13608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13608, ctx.r4.u32);
	// stw r11,9604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9604, ctx.r11.u32);
	// stw r10,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r10.u32);
	// stw r9,13616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13616, ctx.r9.u32);
	// li r7,19472
	ctx.r7.s64 = 19472;
	// stw r11,9612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9612, ctx.r11.u32);
	// addi r6,r8,-16996
	ctx.r6.s64 = ctx.r8.s64 + -16996;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r7,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r7.u32);
	// li r4,21717
	ctx.r4.s64 = 21717;
	// stw r6,13620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13620, ctx.r6.u32);
	// addi r3,r5,-16940
	ctx.r3.s64 = ctx.r5.s64 + -16940;
	// stw r11,9616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9616, ctx.r11.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r4,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r4.u32);
	// li r9,19484
	ctx.r9.s64 = 19484;
	// stw r3,13624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13624, ctx.r3.u32);
	// addi r8,r10,-16880
	ctx.r8.s64 = ctx.r10.s64 + -16880;
	// stw r11,9620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9620, ctx.r11.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r9,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r9.u32);
	// li r6,19496
	ctx.r6.s64 = 19496;
	// stw r8,13628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13628, ctx.r8.u32);
	// addi r5,r7,-16820
	ctx.r5.s64 = ctx.r7.s64 + -16820;
	// stw r11,9624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9624, ctx.r11.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r6,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r6.u32);
	// stw r5,13632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13632, ctx.r5.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// addi r11,r4,-16752
	ctx.r11.s64 = ctx.r4.s64 + -16752;
	// stw r29,9628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9628, ctx.r29.u32);
	// stw r28,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r28.u32);
	// addi r10,r3,-16688
	ctx.r10.s64 = ctx.r3.s64 + -16688;
	// stw r11,13636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13636, ctx.r11.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r29,9632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9632, ctx.r29.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r28,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r28.u32);
	// addi r7,r9,-16624
	ctx.r7.s64 = ctx.r9.s64 + -16624;
	// stw r10,13640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13640, ctx.r10.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r29,9636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9636, ctx.r29.u32);
	// addi r5,r8,-16552
	ctx.r5.s64 = ctx.r8.s64 + -16552;
	// stw r28,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r28.u32);
	// addi r4,r6,-16480
	ctx.r4.s64 = ctx.r6.s64 + -16480;
	// stw r7,13644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13644, ctx.r7.u32);
	// li r3,21423
	ctx.r3.s64 = 21423;
	// stw r29,9640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9640, ctx.r29.u32);
	// stw r28,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r28.u32);
	// stw r5,13648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13648, ctx.r5.u32);
	// stw r29,9644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9644, ctx.r29.u32);
	// stw r28,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r28.u32);
	// stw r4,13652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13652, ctx.r4.u32);
	// stw r29,9648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9648, ctx.r29.u32);
	// stw r28,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r28.u32);
	// bl 0x82800718
	ctx.lr = 0x8284D554;
	sub_82800718(ctx, base);
	// li r26,2637
	ctx.r26.s64 = 2637;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d578
	if (ctx.cr6.eq) goto loc_8284D578;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,21423
	ctx.r10.s64 = 21423;
	// addi r9,r11,-16412
	ctx.r9.s64 = ctx.r11.s64 + -16412;
	// stw r9,13656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13656, ctx.r9.u32);
	// stw r26,9652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9652, ctx.r26.u32);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
loc_8284D578:
	// li r3,21319
	ctx.r3.s64 = 21319;
	// bl 0x82800718
	ctx.lr = 0x8284D580;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d5a0
	if (ctx.cr6.eq) goto loc_8284D5A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,21319
	ctx.r10.s64 = 21319;
	// addi r9,r11,-16352
	ctx.r9.s64 = ctx.r11.s64 + -16352;
	// stw r9,13660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13660, ctx.r9.u32);
	// stw r26,9656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9656, ctx.r26.u32);
	// stw r10,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r10.u32);
loc_8284D5A0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r11,-16288
	ctx.r9.s64 = ctx.r11.s64 + -16288;
	// addi r8,r10,-16228
	ctx.r8.s64 = ctx.r10.s64 + -16228;
	// stw r9,13664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13664, ctx.r9.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r29,9660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9660, ctx.r29.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r28,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r28.u32);
	// addi r5,r7,-16168
	ctx.r5.s64 = ctx.r7.s64 + -16168;
	// stw r8,13668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13668, ctx.r8.u32);
	// addi r4,r6,-16108
	ctx.r4.s64 = ctx.r6.s64 + -16108;
	// stw r29,9664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9664, ctx.r29.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// stw r28,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r28.u32);
	// li r11,20478
	ctx.r11.s64 = 20478;
	// stw r5,13688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13688, ctx.r5.u32);
	// addi r10,r3,-16048
	ctx.r10.s64 = ctx.r3.s64 + -16048;
	// stw r27,9684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9684, ctx.r27.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r28,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r28.u32);
	// li r8,20521
	ctx.r8.s64 = 20521;
	// stw r4,13692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13692, ctx.r4.u32);
	// addi r7,r9,-15988
	ctx.r7.s64 = ctx.r9.s64 + -15988;
	// stw r27,9688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9688, ctx.r27.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// li r5,20483
	ctx.r5.s64 = 20483;
	// stw r10,13696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13696, ctx.r10.u32);
	// addi r4,r6,-15932
	ctx.r4.s64 = ctx.r6.s64 + -15932;
	// stw r27,9692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9692, ctx.r27.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// stw r8,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r8.u32);
	// li r11,22168
	ctx.r11.s64 = 22168;
	// stw r7,13700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13700, ctx.r7.u32);
	// addi r10,r3,-15868
	ctx.r10.s64 = ctx.r3.s64 + -15868;
	// stw r27,9696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9696, ctx.r27.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r5,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r5.u32);
	// stw r4,13704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13704, ctx.r4.u32);
	// stw r27,9700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9700, ctx.r27.u32);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// stw r10,13728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13728, ctx.r10.u32);
	// stw r29,9724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9724, ctx.r29.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r7,r9,-15808
	ctx.r7.s64 = ctx.r9.s64 + -15808;
	// stw r19,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r19.u32);
	// li r29,545
	ctx.r29.s64 = 545;
	// stw r7,13672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13672, ctx.r7.u32);
	// addi r6,r8,-15748
	ctx.r6.s64 = ctx.r8.s64 + -15748;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r29,9668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9668, ctx.r29.u32);
	// stw r28,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r28.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r6,13676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13676, ctx.r6.u32);
	// addi r11,r5,-15692
	ctx.r11.s64 = ctx.r5.s64 + -15692;
	// stw r29,9672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9672, ctx.r29.u32);
	// addi r10,r4,-15632
	ctx.r10.s64 = ctx.r4.s64 + -15632;
	// stw r28,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r28.u32);
	// li r3,9623
	ctx.r3.s64 = 9623;
	// stw r11,13680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13680, ctx.r11.u32);
	// stw r29,9676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9676, ctx.r29.u32);
	// stw r28,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r28.u32);
	// stw r10,13684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13684, ctx.r10.u32);
	// stw r29,9680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9680, ctx.r29.u32);
	// stw r28,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r28.u32);
	// bl 0x82800718
	ctx.lr = 0x8284D6AC;
	sub_82800718(ctx, base);
	// li r10,577
	ctx.r10.s64 = 577;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d6d0
	if (ctx.cr6.eq) goto loc_8284D6D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r9,9623
	ctx.r9.s64 = 9623;
	// addi r8,r11,-15564
	ctx.r8.s64 = ctx.r11.s64 + -15564;
	// stw r8,13732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13732, ctx.r8.u32);
	// stw r10,9728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9728, ctx.r10.u32);
	// stw r9,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r9.u32);
loc_8284D6D0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,-15500
	ctx.r8.s64 = ctx.r11.s64 + -15500;
	// li r11,837
	ctx.r11.s64 = 837;
	// stw r8,13736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13736, ctx.r8.u32);
	// addi r7,r9,-15480
	ctx.r7.s64 = ctx.r9.s64 + -15480;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r11,9732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9732, ctx.r11.u32);
	// stw r28,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r28.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r7,13740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13740, ctx.r7.u32);
	// addi r4,r6,-15444
	ctx.r4.s64 = ctx.r6.s64 + -15444;
	// stw r11,9736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9736, ctx.r11.u32);
	// addi r3,r5,-15424
	ctx.r3.s64 = ctx.r5.s64 + -15424;
	// stw r28,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r28.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r4,13744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13744, ctx.r4.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r11,9740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9740, ctx.r11.u32);
	// addi r7,r9,-15396
	ctx.r7.s64 = ctx.r9.s64 + -15396;
	// stw r28,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r28.u32);
	// addi r6,r8,-15372
	ctx.r6.s64 = ctx.r8.s64 + -15372;
	// stw r3,13748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13748, ctx.r3.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r11,9744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9744, ctx.r11.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r28,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r28.u32);
	// addi r3,r5,-15348
	ctx.r3.s64 = ctx.r5.s64 + -15348;
	// stw r7,13752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13752, ctx.r7.u32);
	// li r9,17618
	ctx.r9.s64 = 17618;
	// stw r11,9748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9748, ctx.r11.u32);
	// addi r8,r4,-15320
	ctx.r8.s64 = ctx.r4.s64 + -15320;
	// stw r28,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r28.u32);
	// li r7,16617
	ctx.r7.s64 = 16617;
	// stw r6,13756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13756, ctx.r6.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r10,9752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9752, ctx.r10.u32);
	// stw r28,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r28.u32);
	// stw r3,13776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13776, ctx.r3.u32);
	// stw r29,9772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9772, ctx.r29.u32);
	// stw r9,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r9.u32);
	// stw r8,13780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13780, ctx.r8.u32);
	// stw r29,9776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9776, ctx.r29.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r7,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r7.u32);
	// addi r4,r6,-15296
	ctx.r4.s64 = ctx.r6.s64 + -15296;
	// li r3,16627
	ctx.r3.s64 = 16627;
	// stw r4,13784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13784, ctx.r4.u32);
	// addi r11,r5,-15272
	ctx.r11.s64 = ctx.r5.s64 + -15272;
	// stw r29,9780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9780, ctx.r29.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r3.u32);
	// li r9,14247
	ctx.r9.s64 = 14247;
	// stw r11,13788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13788, ctx.r11.u32);
	// addi r8,r10,-15248
	ctx.r8.s64 = ctx.r10.s64 + -15248;
	// stw r29,9784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9784, ctx.r29.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r9,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r9.u32);
	// li r6,16613
	ctx.r6.s64 = 16613;
	// stw r8,13792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13792, ctx.r8.u32);
	// addi r5,r7,-15220
	ctx.r5.s64 = ctx.r7.s64 + -15220;
	// stw r29,9788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9788, ctx.r29.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r6,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r6.u32);
	// li r3,16654
	ctx.r3.s64 = 16654;
	// stw r5,13796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13796, ctx.r5.u32);
	// addi r11,r4,-15192
	ctx.r11.s64 = ctx.r4.s64 + -15192;
	// stw r29,9792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9792, ctx.r29.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r3.u32);
	// li r9,16645
	ctx.r9.s64 = 16645;
	// stw r11,13800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13800, ctx.r11.u32);
	// addi r8,r10,-15164
	ctx.r8.s64 = ctx.r10.s64 + -15164;
	// stw r29,9796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9796, ctx.r29.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r9,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r9.u32);
	// li r6,16708
	ctx.r6.s64 = 16708;
	// stw r8,13804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13804, ctx.r8.u32);
	// addi r5,r7,-15140
	ctx.r5.s64 = ctx.r7.s64 + -15140;
	// stw r29,9800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9800, ctx.r29.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r6,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r6.u32);
	// li r3,16602
	ctx.r3.s64 = 16602;
	// stw r5,13808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13808, ctx.r5.u32);
	// addi r11,r4,-15112
	ctx.r11.s64 = ctx.r4.s64 + -15112;
	// stw r29,9804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9804, ctx.r29.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r3.u32);
	// li r9,16766
	ctx.r9.s64 = 16766;
	// stw r11,13812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13812, ctx.r11.u32);
	// addi r8,r10,-15088
	ctx.r8.s64 = ctx.r10.s64 + -15088;
	// stw r29,9808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9808, ctx.r29.u32);
	// stw r9,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r9.u32);
	// li r7,16757
	ctx.r7.s64 = 16757;
	// stw r8,13824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13824, ctx.r8.u32);
	// li r3,19684
	ctx.r3.s64 = 19684;
	// stw r29,9820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9820, ctx.r29.u32);
	// stw r7,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r7.u32);
	// bl 0x82800718
	ctx.lr = 0x8284D85C;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d880
	if (ctx.cr6.eq) goto loc_8284D880;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,77
	ctx.r10.s64 = 77;
	// addi r9,r11,-15060
	ctx.r9.s64 = ctx.r11.s64 + -15060;
	// li r8,19684
	ctx.r8.s64 = 19684;
	// stw r9,13820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13820, ctx.r9.u32);
	// stw r10,9816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9816, ctx.r10.u32);
	// stw r8,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r8.u32);
loc_8284D880:
	// li r3,18634
	ctx.r3.s64 = 18634;
	// bl 0x82800718
	ctx.lr = 0x8284D888;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d8a8
	if (ctx.cr6.eq) goto loc_8284D8A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,18634
	ctx.r10.s64 = 18634;
	// addi r9,r11,-15032
	ctx.r9.s64 = ctx.r11.s64 + -15032;
	// stw r9,16008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16008, ctx.r9.u32);
	// stw r30,12004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12004, ctx.r30.u32);
	// stw r10,3996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3996, ctx.r10.u32);
loc_8284D8A8:
	// li r3,18282
	ctx.r3.s64 = 18282;
	// bl 0x82800718
	ctx.lr = 0x8284D8B0;
	sub_82800718(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284d8d0
	if (ctx.cr6.eq) goto loc_8284D8D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,18282
	ctx.r10.s64 = 18282;
	// addi r9,r11,-15008
	ctx.r9.s64 = ctx.r11.s64 + -15008;
	// stw r9,16012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16012, ctx.r9.u32);
	// stw r30,12008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12008, ctx.r30.u32);
	// stw r10,4000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4000, ctx.r10.u32);
loc_8284D8D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284D8D8"))) PPC_WEAK_FUNC(sub_8284D8D8);
PPC_FUNC_IMPL(__imp__sub_8284D8D8) {
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
	// lwz r3,13188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// bl 0x8284a9a8
	ctx.lr = 0x8284D8F4;
	sub_8284A9A8(ctx, base);
	// lwz r3,13188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// bl 0x8284a4b0
	ctx.lr = 0x8284D8FC;
	sub_8284A4B0(ctx, base);
	// li r3,1000
	ctx.r3.s64 = 1000;
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

__attribute__((alias("__imp__sub_8284D914"))) PPC_WEAK_FUNC(sub_8284D914);
PPC_FUNC_IMPL(__imp__sub_8284D914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284D918"))) PPC_WEAK_FUNC(sub_8284D918);
PPC_FUNC_IMPL(__imp__sub_8284D918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8284D920;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8284D97C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8284D988;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284D994;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8284D9A8;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284d9d0
	if (ctx.cr6.eq) goto loc_8284D9D0;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8284d9d0
	if (!ctx.cr6.eq) goto loc_8284D9D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x8284D9CC;
	sub_82BFEA70(ctx, base);
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
loc_8284D9D0:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284D9E8"))) PPC_WEAK_FUNC(sub_8284D9E8);
PPC_FUNC_IMPL(__imp__sub_8284D9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8284D9F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8284DA4C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8284DA58;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284DA64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r11,15828
	ctx.r7.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8284DA7C;
	sub_828097A0(ctx, base);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284dac4
	if (ctx.cr6.eq) goto loc_8284DAC4;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// bne cr6,0x8284dac4
	if (!ctx.cr6.eq) goto loc_8284DAC4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// li r6,58
	ctx.r6.s64 = 58;
	// addi r5,r20,2512
	ctx.r5.s64 = ctx.r20.s64 + 2512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82809be0
	ctx.lr = 0x8284DAAC;
	sub_82809BE0(ctx, base);
	// li r3,58
	ctx.r3.s64 = 58;
	// bl 0x82bfea70
	ctx.lr = 0x8284DAB4;
	sub_82BFEA70(ctx, base);
	// stw r3,2980(r20)
	PPC_STORE_U32(ctx.r20.u32 + 2980, ctx.r3.u32);
	// li r3,59
	ctx.r3.s64 = 59;
	// bl 0x82bfea70
	ctx.lr = 0x8284DAC0;
	sub_82BFEA70(ctx, base);
	// stw r3,3456(r20)
	PPC_STORE_U32(ctx.r20.u32 + 3456, ctx.r3.u32);
loc_8284DAC4:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284DADC"))) PPC_WEAK_FUNC(sub_8284DADC);
PPC_FUNC_IMPL(__imp__sub_8284DADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284DAE0"))) PPC_WEAK_FUNC(sub_8284DAE0);
PPC_FUNC_IMPL(__imp__sub_8284DAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x8284DAE8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r17,13192(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13192);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r16,13188(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r15,13180(r25)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r14,13184(r26)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8284dd04
	if (!ctx.cr6.gt) goto loc_8284DD04;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r19,r27,508
	ctx.r19.s64 = ctx.r27.s64 + 508;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8284DB50:
	// lwz r31,0(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8284db84
	if (ctx.cr6.eq) goto loc_8284DB84;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8284db7c
	if (ctx.cr6.eq) goto loc_8284DB7C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8284db74
	if (ctx.cr6.eq) goto loc_8284DB74;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8284db88
	goto loc_8284DB88;
loc_8284DB74:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8284db88
	goto loc_8284DB88;
loc_8284DB7C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284db88
	goto loc_8284DB88;
loc_8284DB84:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284DB88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284dcf0
	if (ctx.cr6.eq) goto loc_8284DCF0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8284dbc0
	if (ctx.cr6.eq) goto loc_8284DBC0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8284dbb8
	if (ctx.cr6.eq) goto loc_8284DBB8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8284dbb0
	if (ctx.cr6.eq) goto loc_8284DBB0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8284dbc4
	goto loc_8284DBC4;
loc_8284DBB0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8284dbc4
	goto loc_8284DBC4;
loc_8284DBB8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284dbc4
	goto loc_8284DBC4;
loc_8284DBC0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284DBC4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8284dcf0
	if (!ctx.cr6.eq) goto loc_8284DCF0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8284dc0c
	if (ctx.cr6.eq) goto loc_8284DC0C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8284dc04
	if (ctx.cr6.eq) goto loc_8284DC04;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8284dbfc
	if (ctx.cr6.eq) goto loc_8284DBFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8284dc10
	goto loc_8284DC10;
loc_8284DBFC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8284dc10
	goto loc_8284DC10;
loc_8284DC04:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284dc10
	goto loc_8284DC10;
loc_8284DC0C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284DC10:
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// beq cr6,0x8284dc38
	if (ctx.cr6.eq) goto loc_8284DC38;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// beq cr6,0x8284dc3c
	if (ctx.cr6.eq) goto loc_8284DC3C;
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 3, ctx.xer);
	// beq cr6,0x8284dc30
	if (ctx.cr6.eq) goto loc_8284DC30;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// b 0x8284dc3c
	goto loc_8284DC3C;
loc_8284DC30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8284dc3c
	goto loc_8284DC3C;
loc_8284DC38:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8284DC3C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x8284DC48;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq cr6,0x8284dcf0
	if (ctx.cr6.eq) goto loc_8284DCF0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8284dc88
	if (ctx.cr6.eq) goto loc_8284DC88;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8284dc80
	if (ctx.cr6.eq) goto loc_8284DC80;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8284dc78
	if (ctx.cr6.eq) goto loc_8284DC78;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8284dc8c
	goto loc_8284DC8C;
loc_8284DC78:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8284dc8c
	goto loc_8284DC8C;
loc_8284DC80:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284dc8c
	goto loc_8284DC8C;
loc_8284DC88:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284DC8C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r10,136(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 136);
	// beq cr6,0x8284dce0
	if (ctx.cr6.eq) goto loc_8284DCE0;
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// beq cr6,0x8284dce0
	if (ctx.cr6.eq) goto loc_8284DCE0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8284dcc8
	if (ctx.cr6.eq) goto loc_8284DCC8;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bne cr6,0x8284dcec
	if (!ctx.cr6.eq) goto loc_8284DCEC;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8284dcec
	goto loc_8284DCEC;
loc_8284DCC8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8284dcd8
	if (ctx.cr6.eq) goto loc_8284DCD8;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8284dcec
	goto loc_8284DCEC;
loc_8284DCD8:
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x8284dcec
	goto loc_8284DCEC;
loc_8284DCE0:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8284dcec
	if (!ctx.cr6.eq) goto loc_8284DCEC;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8284DCEC:
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_8284DCF0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8284db50
	if (ctx.cr6.lt) goto loc_8284DB50;
loc_8284DD04:
	// stw r21,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r21.u32);
	// stw r17,13192(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13192, ctx.r17.u32);
	// stw r15,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r15.u32);
	// stw r14,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r14.u32);
	// stw r16,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r16.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284DD20"))) PPC_WEAK_FUNC(sub_8284DD20);
PPC_FUNC_IMPL(__imp__sub_8284DD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e0
	ctx.lr = 0x8284DD28;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r19,13180(r25)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r18,13184(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r20,13188(r28)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r21,13192(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13192);
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// stw r3,13192(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13192, ctx.r3.u32);
	// addi r22,r23,568
	ctx.r22.s64 = ctx.r23.s64 + 568;
	// addi r27,r11,-29532
	ctx.r27.s64 = ctx.r11.s64 + -29532;
	// stw r10,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r10.u32);
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_8284DD84:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8284de48
	if (ctx.cr6.eq) goto loc_8284DE48;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r23,288
	ctx.r31.s64 = ctx.r23.s64 + 288;
loc_8284DD98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284ddd8
	if (ctx.cr6.eq) goto loc_8284DDD8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284ddd0
	if (ctx.cr6.eq) goto loc_8284DDD0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284dddc
	if (!ctx.cr6.eq) goto loc_8284DDDC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8284dddc
	goto loc_8284DDDC;
loc_8284DDD0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8284dddc
	goto loc_8284DDDC;
loc_8284DDD8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284DDDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284de3c
	if (ctx.cr6.eq) goto loc_8284DE3C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284de24
	if (ctx.cr6.eq) goto loc_8284DE24;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284de1c
	if (ctx.cr6.eq) goto loc_8284DE1C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284de28
	if (!ctx.cr6.eq) goto loc_8284DE28;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8284de28
	goto loc_8284DE28;
loc_8284DE1C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8284de28
	goto loc_8284DE28;
loc_8284DE24:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284DE28:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82847f08
	ctx.lr = 0x8284DE30;
	sub_82847F08(ctx, base);
	// lwz r10,13188(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_8284DE3C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x8284dd98
	if (ctx.cr6.lt) goto loc_8284DD98;
loc_8284DE48:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// blt cr6,0x8284dd84
	if (ctx.cr6.lt) goto loc_8284DD84;
	// stw r21,13192(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13192, ctx.r21.u32);
	// stw r19,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r19.u32);
	// stw r18,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r18.u32);
	// stw r20,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r20.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284DE70"))) PPC_WEAK_FUNC(sub_8284DE70);
PPC_FUNC_IMPL(__imp__sub_8284DE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8284DE78;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r26,13192(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r25,13188(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r24,13180(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r23,13184(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// lwz r4,716(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 716);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8284decc
	if (ctx.cr6.eq) goto loc_8284DECC;
	// bl 0x82bf1330
	ctx.lr = 0x8284DECC;
	sub_82BF1330(ctx, base);
loc_8284DECC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284dd20
	ctx.lr = 0x8284DED4;
	sub_8284DD20(ctx, base);
	// stw r26,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284DEEC"))) PPC_WEAK_FUNC(sub_8284DEEC);
PPC_FUNC_IMPL(__imp__sub_8284DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284DEF0"))) PPC_WEAK_FUNC(sub_8284DEF0);
PPC_FUNC_IMPL(__imp__sub_8284DEF0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// rlwinm r7,r10,0,5,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r4,48(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// bne cr6,0x8284dfc0
	if (!ctx.cr6.eq) goto loc_8284DFC0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8284e344
	if (ctx.cr6.eq) goto loc_8284E344;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8284dfc0
	if (ctx.cr6.eq) goto loc_8284DFC0;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x8284e35c
	if (ctx.cr6.eq) goto loc_8284E35C;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x8284e350
	if (ctx.cr6.eq) goto loc_8284E350;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// beq cr6,0x8284e338
	if (ctx.cr6.eq) goto loc_8284E338;
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// beq cr6,0x8284e318
	if (ctx.cr6.eq) goto loc_8284E318;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// beq cr6,0x8284e300
	if (ctx.cr6.eq) goto loc_8284E300;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x8284e2ec
	if (ctx.cr6.eq) goto loc_8284E2EC;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// beq cr6,0x8284e1d8
	if (ctx.cr6.eq) goto loc_8284E1D8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x8284dfdc
	if (!ctx.cr6.eq) goto loc_8284DFDC;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284dfb4
	if (ctx.cr6.eq) goto loc_8284DFB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284dfac
	if (ctx.cr6.eq) goto loc_8284DFAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284dfb4
	if (!ctx.cr6.eq) goto loc_8284DFB4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8284dfb8
	goto loc_8284DFB8;
loc_8284DFAC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8284dfb8
	goto loc_8284DFB8;
loc_8284DFB4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8284DFB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8284e194
	if (!ctx.cr6.eq) goto loc_8284E194;
loc_8284DFC0:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8284DFC4:
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
loc_8284DFDC:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8284e048
	if (!ctx.cr6.eq) goto loc_8284E048;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e01c
	if (ctx.cr6.eq) goto loc_8284E01C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e014
	if (ctx.cr6.eq) goto loc_8284E014;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e01c
	if (!ctx.cr6.eq) goto loc_8284E01C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8284e020
	goto loc_8284E020;
loc_8284E014:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8284e020
	goto loc_8284E020;
loc_8284E01C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8284E020:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284dfc0
	if (ctx.cr6.eq) goto loc_8284DFC0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e170
	if (ctx.cr6.eq) goto loc_8284E170;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e16c
	if (ctx.cr6.eq) goto loc_8284E16C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e170
	if (!ctx.cr6.eq) goto loc_8284E170;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284e170
	goto loc_8284E170;
loc_8284E048:
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x8284e0b4
	if (!ctx.cr6.eq) goto loc_8284E0B4;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e088
	if (ctx.cr6.eq) goto loc_8284E088;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e080
	if (ctx.cr6.eq) goto loc_8284E080;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e088
	if (!ctx.cr6.eq) goto loc_8284E088;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8284e08c
	goto loc_8284E08C;
loc_8284E080:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8284e08c
	goto loc_8284E08C;
loc_8284E088:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8284E08C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284dfc0
	if (ctx.cr6.eq) goto loc_8284DFC0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e14c
	if (ctx.cr6.eq) goto loc_8284E14C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e148
	if (ctx.cr6.eq) goto loc_8284E148;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e14c
	if (!ctx.cr6.eq) goto loc_8284E14C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284e14c
	goto loc_8284E14C;
loc_8284E0B4:
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x8284dfc0
	if (!ctx.cr6.eq) goto loc_8284DFC0;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e0f4
	if (ctx.cr6.eq) goto loc_8284E0F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e0ec
	if (ctx.cr6.eq) goto loc_8284E0EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e0f4
	if (!ctx.cr6.eq) goto loc_8284E0F4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8284e0f8
	goto loc_8284E0F8;
loc_8284E0EC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8284e0f8
	goto loc_8284E0F8;
loc_8284E0F4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8284E0F8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284dfc0
	if (ctx.cr6.eq) goto loc_8284DFC0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e124
	if (ctx.cr6.eq) goto loc_8284E124;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e120
	if (ctx.cr6.eq) goto loc_8284E120;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e124
	if (!ctx.cr6.eq) goto loc_8284E124;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284e124
	goto loc_8284E124;
loc_8284E120:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284E124:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x827d6b38
	ctx.lr = 0x8284E134;
	sub_827D6B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8284dfc0
	if (!ctx.cr6.eq) goto loc_8284DFC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
loc_8284E148:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284E14C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x8284E158;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8284dfc0
	if (!ctx.cr6.eq) goto loc_8284DFC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
loc_8284E16C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284E170:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x827d6b38
	ctx.lr = 0x8284E180;
	sub_827D6B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8284dfc0
	if (ctx.cr6.eq) goto loc_8284DFC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
loc_8284E194:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e1b8
	if (ctx.cr6.eq) goto loc_8284E1B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e1b4
	if (ctx.cr6.eq) goto loc_8284E1B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e1b8
	if (!ctx.cr6.eq) goto loc_8284E1B8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284e1b8
	goto loc_8284E1B8;
loc_8284E1B4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284E1B8:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x8284E1C4;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8284dfc0
	if (ctx.cr6.eq) goto loc_8284DFC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
loc_8284E1D8:
	// lwz r11,1220(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8284dfc0
	if (ctx.cr6.lt) goto loc_8284DFC0;
	// lwz r10,608(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 608);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8284dfc0
	if (ctx.cr6.lt) goto loc_8284DFC0;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// addi r5,r4,568
	ctx.r5.s64 = ctx.r4.s64 + 568;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8284E208:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8284e2d0
	if (!ctx.cr6.eq) goto loc_8284E2D0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r4,288
	ctx.r10.s64 = ctx.r4.s64 + 288;
loc_8284E21C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e25c
	if (ctx.cr6.eq) goto loc_8284E25C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e254
	if (ctx.cr6.eq) goto loc_8284E254;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e260
	if (!ctx.cr6.eq) goto loc_8284E260;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284e260
	goto loc_8284E260;
loc_8284E254:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8284e260
	goto loc_8284E260;
loc_8284E25C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8284E260:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284e2c4
	if (ctx.cr6.eq) goto loc_8284E2C4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e2a8
	if (ctx.cr6.eq) goto loc_8284E2A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e2a0
	if (ctx.cr6.eq) goto loc_8284E2A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e2ac
	if (!ctx.cr6.eq) goto loc_8284E2AC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284e2ac
	goto loc_8284E2AC;
loc_8284E2A0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8284e2ac
	goto loc_8284E2AC;
loc_8284E2A8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8284E2AC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284dfc0
	if (ctx.cr6.eq) goto loc_8284DFC0;
loc_8284E2C4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// blt cr6,0x8284e21c
	if (ctx.cr6.lt) goto loc_8284E21C;
loc_8284E2D0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// blt cr6,0x8284e208
	if (ctx.cr6.lt) goto loc_8284E208;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
loc_8284E2EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82813340
	ctx.lr = 0x8284E2F4;
	sub_82813340(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
loc_8284E300:
	// lwz r11,1692(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1692);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8284dfc0
	if (!ctx.cr6.eq) goto loc_8284DFC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
loc_8284E318:
	// lwz r11,1692(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1692);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8284e32c
	if (ctx.cr6.eq) goto loc_8284E32C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8284dfc0
	if (!ctx.cr6.eq) goto loc_8284DFC0;
loc_8284E32C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
loc_8284E338:
	// lwz r11,1692(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1692);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8284dfc0
	if (!ctx.cr6.eq) goto loc_8284DFC0;
loc_8284E344:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
loc_8284E350:
	// lwz r11,1472(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1472);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
loc_8284E35C:
	// lwz r11,1688(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1688);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8284dfc4
	goto loc_8284DFC4;
}

__attribute__((alias("__imp__sub_8284E368"))) PPC_WEAK_FUNC(sub_8284E368);
PPC_FUNC_IMPL(__imp__sub_8284E368) {
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
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82808750
	ctx.lr = 0x8284E38C;
	sub_82808750(ctx, base);
	// cmpwi cr6,r3,1000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1000, ctx.xer);
	// bne cr6,0x8284e3f0
	if (!ctx.cr6.eq) goto loc_8284E3F0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// bne cr6,0x8284e3ec
	if (!ctx.cr6.eq) goto loc_8284E3EC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,13188(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// beq cr6,0x8284e3dc
	if (ctx.cr6.eq) goto loc_8284E3DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e3cc
	if (ctx.cr6.eq) goto loc_8284E3CC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e3e4
	if (!ctx.cr6.eq) goto loc_8284E3E4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284e3e4
	goto loc_8284E3E4;
loc_8284E3CC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8284e3e4
	goto loc_8284E3E4;
loc_8284E3DC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8284E3E4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82813c48
	ctx.lr = 0x8284E3EC;
	sub_82813C48(ctx, base);
loc_8284E3EC:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8284E3F0:
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

__attribute__((alias("__imp__sub_8284E404"))) PPC_WEAK_FUNC(sub_8284E404);
PPC_FUNC_IMPL(__imp__sub_8284E404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284E408"))) PPC_WEAK_FUNC(sub_8284E408);
PPC_FUNC_IMPL(__imp__sub_8284E408) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e44c
	if (ctx.cr6.eq) goto loc_8284E44C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e448
	if (ctx.cr6.eq) goto loc_8284E448;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e44c
	if (!ctx.cr6.eq) goto loc_8284E44C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284e44c
	goto loc_8284E44C;
loc_8284E448:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8284E44C:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x827d6b38
	ctx.lr = 0x8284E45C;
	sub_827D6B38(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8284E480"))) PPC_WEAK_FUNC(sub_8284E480);
PPC_FUNC_IMPL(__imp__sub_8284E480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8284E488;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r26,13180(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r23,13184(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// stw r31,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8284e4ec
	if (ctx.cr6.eq) goto loc_8284E4EC;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284e4ec
	if (ctx.cr6.eq) goto loc_8284E4EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8284E4EC:
	// lis r4,16386
	ctx.r4.s64 = 1073872896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,4100
	ctx.r4.u64 = ctx.r4.u64 | 4100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beee50
	ctx.lr = 0x8284E500;
	sub_82BEEE50(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8284e524
	if (ctx.cr6.eq) goto loc_8284E524;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284e524
	if (ctx.cr6.eq) goto loc_8284E524;
	// stfs f13,32(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
loc_8284E524:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8284e5c0
	if (ctx.cr6.eq) goto loc_8284E5C0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284e560
	if (ctx.cr6.eq) goto loc_8284E560;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8284e560
	if (ctx.cr6.eq) goto loc_8284E560;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_8284E560:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284e5c0
	if (ctx.cr6.eq) goto loc_8284E5C0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284e594
	if (ctx.cr6.eq) goto loc_8284E594;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8284e594
	if (ctx.cr6.eq) goto loc_8284E594;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
loc_8284E594:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284e5c0
	if (ctx.cr6.eq) goto loc_8284E5C0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284e5c0
	if (ctx.cr6.eq) goto loc_8284E5C0;
	// lfs f12,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_8284E5C0:
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// stw r23,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284E5D8"))) PPC_WEAK_FUNC(sub_8284E5D8);
PPC_FUNC_IMPL(__imp__sub_8284E5D8) {
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
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82808750
	ctx.lr = 0x8284E5FC;
	sub_82808750(ctx, base);
	// cmpwi cr6,r3,1000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1000, ctx.xer);
	// bne cr6,0x8284e654
	if (!ctx.cr6.eq) goto loc_8284E654;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,13188(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// beq cr6,0x8284e640
	if (ctx.cr6.eq) goto loc_8284E640;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e630
	if (ctx.cr6.eq) goto loc_8284E630;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e648
	if (!ctx.cr6.eq) goto loc_8284E648;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284e648
	goto loc_8284E648;
loc_8284E630:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8284e648
	goto loc_8284E648;
loc_8284E640:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8284E648:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82813d28
	ctx.lr = 0x8284E650;
	sub_82813D28(ctx, base);
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8284E654:
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

__attribute__((alias("__imp__sub_8284E668"))) PPC_WEAK_FUNC(sub_8284E668);
PPC_FUNC_IMPL(__imp__sub_8284E668) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,13188(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8284e6b0
	if (!ctx.cr6.gt) goto loc_8284E6B0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulli r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 * 52;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8284e6bc
	goto loc_8284E6BC;
loc_8284E6B0:
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r30.u32);
loc_8284E6BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x8284E6C8;
	sub_82219130(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e6fc
	if (ctx.cr6.eq) goto loc_8284E6FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e6ec
	if (ctx.cr6.eq) goto loc_8284E6EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284e704
	if (!ctx.cr6.eq) goto loc_8284E704;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8284e704
	goto loc_8284E704;
loc_8284E6EC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8284e704
	goto loc_8284E704;
loc_8284E6FC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8284E704:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284e764
	if (ctx.cr6.eq) goto loc_8284E764;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x8284e744
	if (ctx.cr6.eq) goto loc_8284E744;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bne cr6,0x8284e768
	if (!ctx.cr6.eq) goto loc_8284E768;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8284e768
	if (!ctx.cr6.eq) goto loc_8284E768;
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// b 0x8284e768
	goto loc_8284E768;
loc_8284E744:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8284e764
	if (!ctx.cr6.eq) goto loc_8284E764;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_8284E764:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8284E768:
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

__attribute__((alias("__imp__sub_8284E780"))) PPC_WEAK_FUNC(sub_8284E780);
PPC_FUNC_IMPL(__imp__sub_8284E780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8284e8a8
	if (ctx.cr6.eq) goto loc_8284E8A8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8284e858
	if (ctx.cr6.eq) goto loc_8284E858;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8284e958
	if (!ctx.cr6.eq) goto loc_8284E958;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,12492(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// lfs f13,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8284e7c8
	if (ctx.cr6.eq) goto loc_8284E7C8;
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8284e7d0
	goto loc_8284E7D0;
loc_8284E7C8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_8284E7D0:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,148(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x8284e818
	if (!ctx.cr6.gt) goto loc_8284E818;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8284e818
	if (!ctx.cr6.eq) goto loc_8284E818;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r10,136(r7)
	PPC_STORE_U32(ctx.r7.u32 + 136, ctx.r10.u32);
loc_8284E818:
	// lfs f13,224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8284e834
	if (!ctx.cr6.lt) goto loc_8284E834;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8284e84c
	if (ctx.cr6.lt) goto loc_8284E84C;
loc_8284E834:
	// lfs f12,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8284e958
	if (!ctx.cr6.gt) goto loc_8284E958;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8284e958
	if (!ctx.cr6.gt) goto loc_8284E958;
loc_8284E84C:
	// fabs f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// stfs f0,220(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// b 0x8284e950
	goto loc_8284E950;
loc_8284E858:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,12492(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// lfs f13,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8284e878
	if (ctx.cr6.eq) goto loc_8284E878;
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8284e880
	goto loc_8284E880;
loc_8284E878:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_8284E880:
	// lfs f12,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fnmsubs f11,f0,f13,f12
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f11,188(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x8284e958
	if (ctx.cr6.gt) goto loc_8284E958;
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x8284e954
	goto loc_8284E954;
loc_8284E8A8:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,12492(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// lfs f13,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8284e8c8
	if (ctx.cr6.eq) goto loc_8284E8C8;
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8284e8d0
	goto loc_8284E8D0;
loc_8284E8C8:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_8284E8D0:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,148(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x8284e918
	if (!ctx.cr6.lt) goto loc_8284E918;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8284e918
	if (!ctx.cr6.eq) goto loc_8284E918;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r10,136(r7)
	PPC_STORE_U32(ctx.r7.u32 + 136, ctx.r10.u32);
loc_8284E918:
	// lfs f13,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8284e934
	if (!ctx.cr6.lt) goto loc_8284E934;
	// lfs f12,288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8284e94c
	if (ctx.cr6.lt) goto loc_8284E94C;
loc_8284E934:
	// lfs f12,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8284e958
	if (!ctx.cr6.gt) goto loc_8284E958;
	// lfs f12,288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8284e958
	if (!ctx.cr6.gt) goto loc_8284E958;
loc_8284E94C:
	// li r10,2
	ctx.r10.s64 = 2;
loc_8284E950:
	// stfs f13,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
loc_8284E954:
	// stw r10,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r10.u32);
loc_8284E958:
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f13,220(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 220, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284E974"))) PPC_WEAK_FUNC(sub_8284E974);
PPC_FUNC_IMPL(__imp__sub_8284E974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284E978"))) PPC_WEAK_FUNC(sub_8284E978);
PPC_FUNC_IMPL(__imp__sub_8284E978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,48(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,192(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284e9c8
	if (ctx.cr6.eq) goto loc_8284E9C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e9c0
	if (ctx.cr6.eq) goto loc_8284E9C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8284e9b8
	if (ctx.cr6.eq) goto loc_8284E9B8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8284e9cc
	goto loc_8284E9CC;
loc_8284E9B8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8284e9cc
	goto loc_8284E9CC;
loc_8284E9C0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8284e9cc
	goto loc_8284E9CC;
loc_8284E9C8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8284E9CC:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,48(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f10,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x8284ea04
	if (ctx.cr6.eq) goto loc_8284EA04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284e9fc
	if (ctx.cr6.eq) goto loc_8284E9FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284ea08
	if (!ctx.cr6.eq) goto loc_8284EA08;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284ea08
	goto loc_8284EA08;
loc_8284E9FC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8284ea08
	goto loc_8284EA08;
loc_8284EA04:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284EA08:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,152(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 152);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,48(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// beq cr6,0x8284ea44
	if (ctx.cr6.eq) goto loc_8284EA44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284ea3c
	if (ctx.cr6.eq) goto loc_8284EA3C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284ea48
	if (!ctx.cr6.eq) goto loc_8284EA48;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284ea48
	goto loc_8284EA48;
loc_8284EA3C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8284ea48
	goto loc_8284EA48;
loc_8284EA44:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284EA48:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,136(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 136);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x8284ea80
	if (ctx.cr6.eq) goto loc_8284EA80;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8284eaa0
	if (!ctx.cr6.gt) goto loc_8284EAA0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8284eaa0
	goto loc_8284EAA0;
loc_8284EA80:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8284ea94
	if (!ctx.cr6.gt) goto loc_8284EA94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8284EA94:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_8284EAA0:
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lfs f12,-27236(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27236);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-29796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29796);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8284eacc
	if (ctx.cr6.lt) goto loc_8284EACC;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x8284ead0
	if (!ctx.cr6.gt) goto loc_8284EAD0;
loc_8284EACC:
	// lfs f13,220(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
loc_8284EAD0:
	// addi r11,r9,14
	ctx.r11.s64 = ctx.r9.s64 + 14;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8284eaec
	if (ctx.cr6.lt) goto loc_8284EAEC;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8284eaf0
	if (!ctx.cr6.gt) goto loc_8284EAF0;
loc_8284EAEC:
	// lfs f0,220(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
loc_8284EAF0:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f13,f0,f10,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,20(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284EB04"))) PPC_WEAK_FUNC(sub_8284EB04);
PPC_FUNC_IMPL(__imp__sub_8284EB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284EB08"))) PPC_WEAK_FUNC(sub_8284EB08);
PPC_FUNC_IMPL(__imp__sub_8284EB08) {
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
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284eb60
	if (ctx.cr6.eq) goto loc_8284EB60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284eb50
	if (ctx.cr6.eq) goto loc_8284EB50;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284eb68
	if (!ctx.cr6.eq) goto loc_8284EB68;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8284eb68
	goto loc_8284EB68;
loc_8284EB50:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8284eb68
	goto loc_8284EB68;
loc_8284EB60:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8284EB68:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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
	// bl 0x82124928
	ctx.lr = 0x8284EB98;
	sub_82124928(ctx, base);
	// lfs f11,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// beq cr6,0x8284ebf4
	if (ctx.cr6.eq) goto loc_8284EBF4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284ebf4
	if (ctx.cr6.eq) goto loc_8284EBF4;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_8284EBF4:
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

__attribute__((alias("__imp__sub_8284EC0C"))) PPC_WEAK_FUNC(sub_8284EC0C);
PPC_FUNC_IMPL(__imp__sub_8284EC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284EC10"))) PPC_WEAK_FUNC(sub_8284EC10);
PPC_FUNC_IMPL(__imp__sub_8284EC10) {
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r3,13188(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284ec74
	if (ctx.cr6.eq) goto loc_8284EC74;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284ec6c
	if (ctx.cr6.eq) goto loc_8284EC6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8284ec64
	if (ctx.cr6.eq) goto loc_8284EC64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8284ec78
	goto loc_8284EC78;
loc_8284EC64:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8284ec78
	goto loc_8284EC78;
loc_8284EC6C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8284ec78
	goto loc_8284EC78;
loc_8284EC74:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8284EC78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284ecb4
	if (ctx.cr6.eq) goto loc_8284ECB4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284eca8
	if (ctx.cr6.eq) goto loc_8284ECA8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284eca0
	if (ctx.cr6.eq) goto loc_8284ECA0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284ecac
	if (!ctx.cr6.eq) goto loc_8284ECAC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284ecac
	goto loc_8284ECAC;
loc_8284ECA0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8284ecac
	goto loc_8284ECAC;
loc_8284ECA8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284ECAC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82814ec8
	ctx.lr = 0x8284ECB4;
	sub_82814EC8(ctx, base);
loc_8284ECB4:
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

__attribute__((alias("__imp__sub_8284ECC8"))) PPC_WEAK_FUNC(sub_8284ECC8);
PPC_FUNC_IMPL(__imp__sub_8284ECC8) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,13188(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284ed1c
	if (ctx.cr6.eq) goto loc_8284ED1C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284ed0c
	if (ctx.cr6.eq) goto loc_8284ED0C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284ed24
	if (!ctx.cr6.eq) goto loc_8284ED24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284ed24
	goto loc_8284ED24;
loc_8284ED0C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8284ed24
	goto loc_8284ED24;
loc_8284ED1C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8284ED24:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82815298
	ctx.lr = 0x8284ED2C;
	sub_82815298(ctx, base);
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

__attribute__((alias("__imp__sub_8284ED40"))) PPC_WEAK_FUNC(sub_8284ED40);
PPC_FUNC_IMPL(__imp__sub_8284ED40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x8284ED48;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r20,12480(r9)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r19,48(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8284EDA8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r20,4132
	ctx.r4.s64 = ctx.r20.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8284EDB4;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284EDC0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8284EDD4;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284edf0
	if (ctx.cr6.eq) goto loc_8284EDF0;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284edf8
	if (ctx.cr6.eq) goto loc_8284EDF8;
loc_8284EDF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8284ee08
	goto loc_8284EE08;
loc_8284EDF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x8284EE00;
	sub_82BFEA70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,384(r19)
	PPC_STORE_U32(ctx.r19.u32 + 384, ctx.r3.u32);
loc_8284EE08:
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284EE24"))) PPC_WEAK_FUNC(sub_8284EE24);
PPC_FUNC_IMPL(__imp__sub_8284EE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284EE28"))) PPC_WEAK_FUNC(sub_8284EE28);
PPC_FUNC_IMPL(__imp__sub_8284EE28) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82815928
	ctx.lr = 0x8284EE54;
	sub_82815928(ctx, base);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8284eea8
	if (ctx.cr6.lt) goto loc_8284EEA8;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x8284eea8
	if (!ctx.cr6.lt) goto loc_8284EEA8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8284eea8
	if (ctx.cr6.lt) goto loc_8284EEA8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bge cr6,0x8284eea8
	if (!ctx.cr6.lt) goto loc_8284EEA8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,3996
	ctx.r11.s64 = ctx.r11.s64 + 3996;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// b 0x8284eeac
	goto loc_8284EEAC;
loc_8284EEA8:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8284EEAC:
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

__attribute__((alias("__imp__sub_8284EEC4"))) PPC_WEAK_FUNC(sub_8284EEC4);
PPC_FUNC_IMPL(__imp__sub_8284EEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284EEC8"))) PPC_WEAK_FUNC(sub_8284EEC8);
PPC_FUNC_IMPL(__imp__sub_8284EEC8) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,13188(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284ef1c
	if (ctx.cr6.eq) goto loc_8284EF1C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284ef0c
	if (ctx.cr6.eq) goto loc_8284EF0C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284ef24
	if (!ctx.cr6.eq) goto loc_8284EF24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284ef24
	goto loc_8284EF24;
loc_8284EF0C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8284ef24
	goto loc_8284EF24;
loc_8284EF1C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8284EF24:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82815cb8
	ctx.lr = 0x8284EF2C;
	sub_82815CB8(ctx, base);
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

__attribute__((alias("__imp__sub_8284EF40"))) PPC_WEAK_FUNC(sub_8284EF40);
PPC_FUNC_IMPL(__imp__sub_8284EF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8284EF48;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8284EFA4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8284EFB0;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284EFBC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8284EFD0;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284eff8
	if (ctx.cr6.eq) goto loc_8284EFF8;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8284eff8
	if (!ctx.cr6.eq) goto loc_8284EFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x8284EFF4;
	sub_82BFEA70(ctx, base);
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
loc_8284EFF8:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284F010"))) PPC_WEAK_FUNC(sub_8284F010);
PPC_FUNC_IMPL(__imp__sub_8284F010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8284F018;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8284F074;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8284F080;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284F08C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8284F0A0;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284f0d4
	if (ctx.cr6.eq) goto loc_8284F0D4;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8284f0d4
	if (!ctx.cr6.eq) goto loc_8284F0D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x8284F0C4;
	sub_82BFEA70(ctx, base);
	// stw r3,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bfea70
	ctx.lr = 0x8284F0D0;
	sub_82BFEA70(ctx, base);
	// stw r3,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r3.u32);
loc_8284F0D4:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284F0EC"))) PPC_WEAK_FUNC(sub_8284F0EC);
PPC_FUNC_IMPL(__imp__sub_8284F0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284F0F0"))) PPC_WEAK_FUNC(sub_8284F0F0);
PPC_FUNC_IMPL(__imp__sub_8284F0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8284F0F8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8284F154;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8284F160;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284F16C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8284F180;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284f1a8
	if (ctx.cr6.eq) goto loc_8284F1A8;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8284f1a8
	if (!ctx.cr6.eq) goto loc_8284F1A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x8284F1A4;
	sub_82BFEA70(ctx, base);
	// stw r3,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r3.u32);
loc_8284F1A8:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284F1C0"))) PPC_WEAK_FUNC(sub_8284F1C0);
PPC_FUNC_IMPL(__imp__sub_8284F1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
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
	// lwz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284f210
	if (ctx.cr6.eq) goto loc_8284F210;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284f208
	if (ctx.cr6.eq) goto loc_8284F208;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8284f200
	if (ctx.cr6.eq) goto loc_8284F200;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8284f214
	goto loc_8284F214;
loc_8284F200:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8284f214
	goto loc_8284F214;
loc_8284F208:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8284f214
	goto loc_8284F214;
loc_8284F210:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8284F214:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284f264
	if (ctx.cr6.eq) goto loc_8284F264;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284f24c
	if (ctx.cr6.eq) goto loc_8284F24C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284f268
	if (!ctx.cr6.eq) goto loc_8284F268;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,256(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 256, temp.u32);
	// blr 
	return;
loc_8284F24C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,256(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 256, temp.u32);
	// blr 
	return;
loc_8284F264:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284F268:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,256(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 256, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8284F27C"))) PPC_WEAK_FUNC(sub_8284F27C);
PPC_FUNC_IMPL(__imp__sub_8284F27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284F280"))) PPC_WEAK_FUNC(sub_8284F280);
PPC_FUNC_IMPL(__imp__sub_8284F280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8284F288;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r31,-29532(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// beq cr6,0x8284f2e0
	if (ctx.cr6.eq) goto loc_8284F2E0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8284f2d8
	if (ctx.cr6.eq) goto loc_8284F2D8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8284f2e0
	if (!ctx.cr6.eq) goto loc_8284F2E0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8284f2e4
	goto loc_8284F2E4;
loc_8284F2D8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8284f2e4
	goto loc_8284F2E4;
loc_8284F2E0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8284F2E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284f3a4
	if (ctx.cr6.eq) goto loc_8284F3A4;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8284f314
	if (ctx.cr6.eq) goto loc_8284F314;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8284f30c
	if (ctx.cr6.eq) goto loc_8284F30C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8284f314
	if (!ctx.cr6.eq) goto loc_8284F314;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8284f318
	goto loc_8284F318;
loc_8284F30C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8284f318
	goto loc_8284F318;
loc_8284F314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8284F318:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283f1d8
	ctx.lr = 0x8284F328;
	sub_8283F1D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284f35c
	if (ctx.cr6.eq) goto loc_8284F35C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284f354
	if (ctx.cr6.eq) goto loc_8284F354;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8284f34c
	if (ctx.cr6.eq) goto loc_8284F34C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8284f360
	goto loc_8284F360;
loc_8284F34C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8284f360
	goto loc_8284F360;
loc_8284F354:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8284f360
	goto loc_8284F360;
loc_8284F35C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8284F360:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284f3a4
	if (ctx.cr6.eq) goto loc_8284F3A4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284f390
	if (ctx.cr6.eq) goto loc_8284F390;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284f388
	if (ctx.cr6.eq) goto loc_8284F388;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284f394
	if (!ctx.cr6.eq) goto loc_8284F394;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8284f394
	goto loc_8284F394;
loc_8284F388:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8284f394
	goto loc_8284F394;
loc_8284F390:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8284F394:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r28,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r28.u32);
loc_8284F3A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284F3AC"))) PPC_WEAK_FUNC(sub_8284F3AC);
PPC_FUNC_IMPL(__imp__sub_8284F3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284F3B0"))) PPC_WEAK_FUNC(sub_8284F3B0);
PPC_FUNC_IMPL(__imp__sub_8284F3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x8284F3B8;
	__savegprlr_24(ctx, base);
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
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r27,13192(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r26,13188(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r25,13180(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r11.u32);
	// lwz r3,13416(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13416);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82becee0
	ctx.lr = 0x8284F40C;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8284f424
	if (ctx.cr6.eq) goto loc_8284F424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8284F424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8284F424:
	// stw r27,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284F43C"))) PPC_WEAK_FUNC(sub_8284F43C);
PPC_FUNC_IMPL(__imp__sub_8284F43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284F440"))) PPC_WEAK_FUNC(sub_8284F440);
PPC_FUNC_IMPL(__imp__sub_8284F440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8284F448;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r31,-29532(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,48(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// beq cr6,0x8284f49c
	if (ctx.cr6.eq) goto loc_8284F49C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8284f494
	if (ctx.cr6.eq) goto loc_8284F494;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8284f49c
	if (!ctx.cr6.eq) goto loc_8284F49C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8284f4a0
	goto loc_8284F4A0;
loc_8284F494:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8284f4a0
	goto loc_8284F4A0;
loc_8284F49C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8284F4A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284f564
	if (ctx.cr6.eq) goto loc_8284F564;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8284f4d0
	if (ctx.cr6.eq) goto loc_8284F4D0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8284f4c8
	if (ctx.cr6.eq) goto loc_8284F4C8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8284f4d0
	if (!ctx.cr6.eq) goto loc_8284F4D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8284f4d4
	goto loc_8284F4D4;
loc_8284F4C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8284f4d4
	goto loc_8284F4D4;
loc_8284F4D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8284F4D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283f1d8
	ctx.lr = 0x8284F4E4;
	sub_8283F1D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284f518
	if (ctx.cr6.eq) goto loc_8284F518;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284f510
	if (ctx.cr6.eq) goto loc_8284F510;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8284f508
	if (ctx.cr6.eq) goto loc_8284F508;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8284f51c
	goto loc_8284F51C;
loc_8284F508:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8284f51c
	goto loc_8284F51C;
loc_8284F510:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8284f51c
	goto loc_8284F51C;
loc_8284F518:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8284F51C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284f564
	if (ctx.cr6.eq) goto loc_8284F564;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284f54c
	if (ctx.cr6.eq) goto loc_8284F54C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284f544
	if (ctx.cr6.eq) goto loc_8284F544;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284f550
	if (!ctx.cr6.eq) goto loc_8284F550;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8284f550
	goto loc_8284F550;
loc_8284F544:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8284f550
	goto loc_8284F550;
loc_8284F54C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8284F550:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r8,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r8.u32);
loc_8284F564:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284F56C"))) PPC_WEAK_FUNC(sub_8284F56C);
PPC_FUNC_IMPL(__imp__sub_8284F56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284F570"))) PPC_WEAK_FUNC(sub_8284F570);
PPC_FUNC_IMPL(__imp__sub_8284F570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8284F578;
	__savegprlr_23(ctx, base);
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r10,1340(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1340);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8284f5e4
	if (!ctx.cr6.eq) goto loc_8284F5E4;
	// lwz r3,1152(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1152);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8284f5e4
	if (!ctx.cr6.gt) goto loc_8284F5E4;
	// bl 0x82bf2028
	ctx.lr = 0x8284F5D4;
	sub_82BF2028(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1152(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1152, ctx.r11.u32);
	// stw r10,1340(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1340, ctx.r10.u32);
loc_8284F5E4:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284F5FC"))) PPC_WEAK_FUNC(sub_8284F5FC);
PPC_FUNC_IMPL(__imp__sub_8284F5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284F600"))) PPC_WEAK_FUNC(sub_8284F600);
PPC_FUNC_IMPL(__imp__sub_8284F600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8284F608;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8284F664;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8284F670;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284F67C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8284F690;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284f6b8
	if (ctx.cr6.eq) goto loc_8284F6B8;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8284f6b8
	if (!ctx.cr6.eq) goto loc_8284F6B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x8284F6B4;
	sub_82BFEA70(ctx, base);
	// stw r3,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r3.u32);
loc_8284F6B8:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284F6D0"))) PPC_WEAK_FUNC(sub_8284F6D0);
PPC_FUNC_IMPL(__imp__sub_8284F6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x8284F6D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,-29532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r30,48(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x8284f730
	if (ctx.cr6.eq) goto loc_8284F730;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284f728
	if (ctx.cr6.eq) goto loc_8284F728;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284f730
	if (!ctx.cr6.eq) goto loc_8284F730;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8284f734
	goto loc_8284F734;
loc_8284F728:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8284f734
	goto loc_8284F734;
loc_8284F730:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8284F734:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284f788
	if (ctx.cr6.eq) goto loc_8284F788;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284f760
	if (ctx.cr6.eq) goto loc_8284F760;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284f75c
	if (ctx.cr6.eq) goto loc_8284F75C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284f760
	if (!ctx.cr6.eq) goto loc_8284F760;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8284f760
	goto loc_8284F760;
loc_8284F75C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284F760:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816500
	ctx.lr = 0x8284F770;
	sub_82816500(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8284f794
	if (!ctx.cr6.eq) goto loc_8284F794;
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
loc_8284F788:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_8284F794:
	// lfs f13,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8284f7f0
	if (ctx.cr6.eq) goto loc_8284F7F0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f12,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x8284f7d4
	if (ctx.cr6.eq) goto loc_8284F7D4;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_8284F7D4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_8284F7F0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284F808"))) PPC_WEAK_FUNC(sub_8284F808);
PPC_FUNC_IMPL(__imp__sub_8284F808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x8284F810;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r23,13192(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r22,13188(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r21,13180(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r20,13184(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x8284F86C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x8284F878;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8284F884;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r31,r11,15828
	ctx.r31.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x8284F89C;
	sub_828097A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284f924
	if (ctx.cr6.eq) goto loc_8284F924;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x8284f924
	if (!ctx.cr6.eq) goto loc_8284F924;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x8284F8C0;
	sub_82BFEA70(ctx, base);
	// stw r3,620(r24)
	PPC_STORE_U32(ctx.r24.u32 + 620, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bfea70
	ctx.lr = 0x8284F8CC;
	sub_82BFEA70(ctx, base);
	// stw r3,616(r24)
	PPC_STORE_U32(ctx.r24.u32 + 616, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r24,7260
	ctx.r5.s64 = ctx.r24.s64 + 7260;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82809be0
	ctx.lr = 0x8284F8E4;
	sub_82809BE0(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r24,1420
	ctx.r5.s64 = ctx.r24.s64 + 1420;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82809be0
	ctx.lr = 0x8284F8F4;
	sub_82809BE0(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r24,664
	ctx.r5.s64 = ctx.r24.s64 + 664;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82809be0
	ctx.lr = 0x8284F904;
	sub_82809BE0(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r5,r24,796
	ctx.r5.s64 = ctx.r24.s64 + 796;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82809be0
	ctx.lr = 0x8284F914;
	sub_82809BE0(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r24,684
	ctx.r5.s64 = ctx.r24.s64 + 684;
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x82809be0
	ctx.lr = 0x8284F924;
	sub_82809BE0(ctx, base);
loc_8284F924:
	// stw r23,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r23.u32);
	// stw r21,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r21.u32);
	// stw r20,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r20.u32);
	// stw r22,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284F93C"))) PPC_WEAK_FUNC(sub_8284F93C);
PPC_FUNC_IMPL(__imp__sub_8284F93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284F940"))) PPC_WEAK_FUNC(sub_8284F940);
PPC_FUNC_IMPL(__imp__sub_8284F940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x8284F948;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r24,13180(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r23,13192(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r22,13188(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r21,13184(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r11.u32);
	// bl 0x82816b18
	ctx.lr = 0x8284F998;
	sub_82816B18(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284f9dc
	if (ctx.cr6.eq) goto loc_8284F9DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284f9d4
	if (ctx.cr6.eq) goto loc_8284F9D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8284f9cc
	if (ctx.cr6.eq) goto loc_8284F9CC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x8284f9e0
	goto loc_8284F9E0;
loc_8284F9CC:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x8284f9e0
	goto loc_8284F9E0;
loc_8284F9D4:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x8284f9e0
	goto loc_8284F9E0;
loc_8284F9DC:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8284F9E0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8284fa70
	if (ctx.cr6.eq) goto loc_8284FA70;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284fa10
	if (ctx.cr6.eq) goto loc_8284FA10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284fa08
	if (ctx.cr6.eq) goto loc_8284FA08;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284fa14
	if (!ctx.cr6.eq) goto loc_8284FA14;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284fa14
	goto loc_8284FA14;
loc_8284FA08:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8284fa14
	goto loc_8284FA14;
loc_8284FA10:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8284FA14:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r3,132(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284fa70
	if (ctx.cr6.eq) goto loc_8284FA70;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827eee58
	ctx.lr = 0x8284FA34;
	sub_827EEE58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284fa60
	if (ctx.cr6.eq) goto loc_8284FA60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284fa58
	if (ctx.cr6.eq) goto loc_8284FA58;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284fa64
	if (!ctx.cr6.eq) goto loc_8284FA64;
	// lwz r11,13188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// b 0x8284fa64
	goto loc_8284FA64;
loc_8284FA58:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8284fa64
	goto loc_8284FA64;
loc_8284FA60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8284FA64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284fa70
	if (ctx.cr6.eq) goto loc_8284FA70;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8284FA70:
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// stw r23,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r23.u32);
	// stw r24,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r24.u32);
	// stw r21,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r21.u32);
	// stw r22,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284FA8C"))) PPC_WEAK_FUNC(sub_8284FA8C);
PPC_FUNC_IMPL(__imp__sub_8284FA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284FA90"))) PPC_WEAK_FUNC(sub_8284FA90);
PPC_FUNC_IMPL(__imp__sub_8284FA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x8284FA98;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r26,13180(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r24,13188(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// bl 0x82816b18
	ctx.lr = 0x8284FAE8;
	sub_82816B18(ctx, base);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r10,-29532(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x8284fb2c
	if (ctx.cr6.eq) goto loc_8284FB2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284fb24
	if (ctx.cr6.eq) goto loc_8284FB24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8284fb1c
	if (ctx.cr6.eq) goto loc_8284FB1C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x8284fb30
	goto loc_8284FB30;
loc_8284FB1C:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x8284fb30
	goto loc_8284FB30;
loc_8284FB24:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x8284fb30
	goto loc_8284FB30;
loc_8284FB2C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8284FB30:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8284fb88
	if (ctx.cr6.eq) goto loc_8284FB88;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284fb60
	if (ctx.cr6.eq) goto loc_8284FB60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284fb58
	if (ctx.cr6.eq) goto loc_8284FB58;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284fb64
	if (!ctx.cr6.eq) goto loc_8284FB64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284fb64
	goto loc_8284FB64;
loc_8284FB58:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8284fb64
	goto loc_8284FB64;
loc_8284FB60:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8284FB64:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r3,132(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8284fb88
	if (ctx.cr6.eq) goto loc_8284FB88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827eee58
	ctx.lr = 0x8284FB84;
	sub_827EEE58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8284FB88:
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// stw r25,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r26.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284FBA4"))) PPC_WEAK_FUNC(sub_8284FBA4);
PPC_FUNC_IMPL(__imp__sub_8284FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8284FBA8"))) PPC_WEAK_FUNC(sub_8284FBA8);
PPC_FUNC_IMPL(__imp__sub_8284FBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x8284FBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8284fbe4
	if (!ctx.cr6.eq) goto loc_8284FBE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8284fbf0
	goto loc_8284FBF0;
loc_8284FBE4:
	// addi r11,r11,1811
	ctx.r11.s64 = ctx.r11.s64 + 1811;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_8284FBF0:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// stw r11,5968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5968, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r30,r10,-29532
	ctx.r30.s64 = ctx.r10.s64 + -29532;
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq cr6,0x8284fc34
	if (ctx.cr6.eq) goto loc_8284FC34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284fc2c
	if (ctx.cr6.eq) goto loc_8284FC2C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8284fc24
	if (ctx.cr6.eq) goto loc_8284FC24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8284fc38
	goto loc_8284FC38;
loc_8284FC24:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8284fc38
	goto loc_8284FC38;
loc_8284FC2C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8284fc38
	goto loc_8284FC38;
loc_8284FC34:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8284FC38:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8284fd70
	if (ctx.cr6.eq) goto loc_8284FD70;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8284fc68
	if (ctx.cr6.eq) goto loc_8284FC68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8284fc60
	if (ctx.cr6.eq) goto loc_8284FC60;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8284fc6c
	if (!ctx.cr6.eq) goto loc_8284FC6C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8284fc6c
	goto loc_8284FC6C;
loc_8284FC60:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8284fc6c
	goto loc_8284FC6C;
loc_8284FC68:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8284FC6C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x8284FC78;
	sub_82804410(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,5972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5972, temp.u32);
	// stfs f13,5976(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5976, temp.u32);
	// stfs f12,5980(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5980, temp.u32);
	// lwz r3,5968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5968);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8284fcbc
	if (ctx.cr6.eq) goto loc_8284FCBC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8284fcb4
	if (ctx.cr6.eq) goto loc_8284FCB4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8284fcc0
	if (!ctx.cr6.eq) goto loc_8284FCC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8284fcc0
	goto loc_8284FCC0;
loc_8284FCB4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8284fcc0
	goto loc_8284FCC0;
loc_8284FCBC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8284FCC0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82804270
	ctx.lr = 0x8284FCC8;
	sub_82804270(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,1432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1432, temp.u32);
	// stfs f13,1436(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1436, temp.u32);
	// stfs f12,1440(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// lwz r3,5968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5968);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8284fd0c
	if (ctx.cr6.eq) goto loc_8284FD0C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8284fd04
	if (ctx.cr6.eq) goto loc_8284FD04;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8284fd10
	if (!ctx.cr6.eq) goto loc_8284FD10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8284fd10
	goto loc_8284FD10;
loc_8284FD04:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8284fd10
	goto loc_8284FD10;
loc_8284FD0C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8284FD10:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82804118
	ctx.lr = 0x8284FD18;
	sub_82804118(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// stfs f13,844(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// stfs f12,848(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// lwz r3,5968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5968);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8284fd5c
	if (ctx.cr6.eq) goto loc_8284FD5C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8284fd54
	if (ctx.cr6.eq) goto loc_8284FD54;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8284fd60
	if (!ctx.cr6.eq) goto loc_8284FD60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8284fd60
	goto loc_8284FD60;
loc_8284FD54:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8284fd60
	goto loc_8284FD60;
loc_8284FD5C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8284FD60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283d008
	ctx.lr = 0x8284FD68;
	sub_8283D008(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
loc_8284FD70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8284FD78"))) PPC_WEAK_FUNC(sub_8284FD78);
PPC_FUNC_IMPL(__imp__sub_8284FD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d0
	ctx.lr = 0x8284FD80;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8221ad18
	ctx.lr = 0x8284FD88;
	__savefpr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r19,-31942
	ctx.r19.s64 = -2093350912;
	// lis r20,-31942
	ctx.r20.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r21,-31942
	ctx.r21.s64 = -2093350912;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,13184(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 13184);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// lwz r14,13180(r20)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13180);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lwz r15,13188(r24)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r16,13192(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13192);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f28,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r26,13192(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13192, ctx.r26.u32);
	// li r27,7244
	ctx.r27.s64 = 7244;
	// stw r25,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r25.u32);
	// lis r23,-32051
	ctx.r23.s64 = -2100494336;
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13180, ctx.r11.u32);
	// lfs f31,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,13184(r19)
	PPC_STORE_U32(ctx.r19.u32 + 13184, ctx.r11.u32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r31,r29,5972
	ctx.r31.s64 = ctx.r29.s64 + 5972;
	// addi r18,r11,-29532
	ctx.r18.s64 = ctx.r11.s64 + -29532;
	// lfs f30,5976(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5976);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,5972(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5972);
	ctx.f29.f64 = double(temp.f32);
loc_8284FE10:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwzx r3,r9,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8284fe50
	if (ctx.cr6.eq) goto loc_8284FE50;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8284fe48
	if (ctx.cr6.eq) goto loc_8284FE48;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8284fe40
	if (ctx.cr6.eq) goto loc_8284FE40;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284fe54
	goto loc_8284FE54;
loc_8284FE40:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8284fe54
	goto loc_8284FE54;
loc_8284FE48:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// b 0x8284fe54
	goto loc_8284FE54;
loc_8284FE50:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
loc_8284FE54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8284ff24
	if (ctx.cr6.eq) goto loc_8284FF24;
	// lwz r11,616(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 616);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8284ff24
	if (ctx.cr6.eq) goto loc_8284FF24;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8284fe90
	if (ctx.cr6.eq) goto loc_8284FE90;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8284fe88
	if (ctx.cr6.eq) goto loc_8284FE88;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8284fe94
	if (!ctx.cr6.eq) goto loc_8284FE94;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8284fe94
	goto loc_8284FE94;
loc_8284FE88:
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// b 0x8284fe94
	goto loc_8284FE94;
loc_8284FE90:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
loc_8284FE94:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82804410
	ctx.lr = 0x8284FE9C;
	sub_82804410(ctx, base);
	// lfs f0,26592(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 26592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bgt cr6,0x8284fef4
	if (ctx.cr6.gt) goto loc_8284FEF4;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8284fef4
	if (ctx.cr6.gt) goto loc_8284FEF4;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8284ff24
	if (!ctx.cr6.gt) goto loc_8284FF24;
loc_8284FEF4:
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r29,1432
	ctx.r3.s64 = ctx.r29.s64 + 1432;
	// bl 0x8212c210
	ctx.lr = 0x8284FF10;
	sub_8212C210(ctx, base);
	// lwz r25,13188(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8284ff24
	if (!ctx.cr6.lt) goto loc_8284FF24;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8284FF24:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r27,7256
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 7256, ctx.xer);
	// blt cr6,0x8284fe10
	if (ctx.cr6.lt) goto loc_8284FE10;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8284ff44
	if (ctx.cr6.eq) goto loc_8284FF44;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x82850070
	if (!ctx.cr6.eq) goto loc_82850070;
loc_8284FF44:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lfs f0,1432(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1436(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,840(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 840);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,844(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 844);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,7244
	ctx.r31.s64 = 7244;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f6,640(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 640);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,644(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 644);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f1,f11,f6
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fadds f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fadds f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fadds f30,f8,f0
	ctx.f30.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f29,f7,f13
	ctx.f29.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
loc_8284FFA4:
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8284ffe4
	if (ctx.cr6.eq) goto loc_8284FFE4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8284ffdc
	if (ctx.cr6.eq) goto loc_8284FFDC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8284ffd4
	if (ctx.cr6.eq) goto loc_8284FFD4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8284ffe8
	goto loc_8284FFE8;
loc_8284FFD4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8284ffe8
	goto loc_8284FFE8;
loc_8284FFDC:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// b 0x8284ffe8
	goto loc_8284FFE8;
loc_8284FFE4:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
loc_8284FFE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82850060
	if (ctx.cr6.eq) goto loc_82850060;
	// lwz r11,616(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 616);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82850060
	if (ctx.cr6.eq) goto loc_82850060;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82850024
	if (ctx.cr6.eq) goto loc_82850024;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8285001c
	if (ctx.cr6.eq) goto loc_8285001C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82850028
	if (!ctx.cr6.eq) goto loc_82850028;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82850028
	goto loc_82850028;
loc_8285001C:
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// b 0x82850028
	goto loc_82850028;
loc_82850024:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
loc_82850028:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82804410
	ctx.lr = 0x82850030;
	sub_82804410(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f11,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// beq cr6,0x82850058
	if (ctx.cr6.eq) goto loc_82850058;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82850060
	if (!ctx.cr6.lt) goto loc_82850060;
loc_82850058:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
loc_82850060:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,7256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7256, ctx.xer);
	// blt cr6,0x8284ffa4
	if (ctx.cr6.lt) goto loc_8284FFA4;
loc_82850070:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r22.u32);
	// stw r16,13192(r21)
	PPC_STORE_U32(ctx.r21.u32 + 13192, ctx.r16.u32);
	// stw r14,13180(r20)
	PPC_STORE_U32(ctx.r20.u32 + 13180, ctx.r14.u32);
	// stw r15,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r15.u32);
	// stw r11,13184(r19)
	PPC_STORE_U32(ctx.r19.u32 + 13184, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8221ad64
	ctx.lr = 0x82850094;
	__restfpr_28(ctx, base);
	// b 0x82218a20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82850098"))) PPC_WEAK_FUNC(sub_82850098);
PPC_FUNC_IMPL(__imp__sub_82850098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x828500A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq cr6,0x8285011c
	if (ctx.cr6.eq) goto loc_8285011C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x828500ec
	if (ctx.cr6.eq) goto loc_828500EC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x8285014c
	if (!ctx.cr6.eq) goto loc_8285014C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828176e8
	ctx.lr = 0x828500E0;
	sub_828176E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82850144
	goto loc_82850144;
loc_828500EC:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x828176e8
	ctx.lr = 0x828500F4;
	sub_828176E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8285014c
	if (!ctx.cr6.eq) goto loc_8285014C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,620(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 620);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8285014c
	if (ctx.cr6.eq) goto loc_8285014C;
	// b 0x82850148
	goto loc_82850148;
loc_8285011C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x828176e8
	ctx.lr = 0x82850124;
	sub_828176E8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8285014c
	if (!ctx.cr6.eq) goto loc_8285014C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,620(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 620);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
loc_82850144:
	// bne cr6,0x8285014c
	if (!ctx.cr6.eq) goto loc_8285014C;
loc_82850148:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8285014C:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bge cr6,0x82850174
	if (!ctx.cr6.lt) goto loc_82850174;
	// addi r10,r31,166
	ctx.r10.s64 = ctx.r31.s64 + 166;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82850184
	if (!ctx.cr6.eq) goto loc_82850184;
loc_82850174:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82850184:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82850190"))) PPC_WEAK_FUNC(sub_82850190);
PPC_FUNC_IMPL(__imp__sub_82850190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82850198;
	__savegprlr_24(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r27,13192(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13192);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r5,7244
	ctx.r5.s64 = 7244;
	// lwz r26,13188(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r25,13180(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r24,13184(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lfs f13,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
loc_828501D4:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwzx r9,r8,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82850214
	if (ctx.cr6.eq) goto loc_82850214;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8285020c
	if (ctx.cr6.eq) goto loc_8285020C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82850204
	if (ctx.cr6.eq) goto loc_82850204;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82850218
	goto loc_82850218;
loc_82850204:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82850218
	goto loc_82850218;
loc_8285020C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82850218
	goto loc_82850218;
loc_82850214:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82850218:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828502ec
	if (ctx.cr6.eq) goto loc_828502EC;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82850250
	if (ctx.cr6.eq) goto loc_82850250;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82850248
	if (ctx.cr6.eq) goto loc_82850248;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82850240
	if (ctx.cr6.eq) goto loc_82850240;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82850254
	goto loc_82850254;
loc_82850240:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82850254
	goto loc_82850254;
loc_82850248:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82850254
	goto loc_82850254;
loc_82850250:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82850254:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r8,r4,275
	ctx.r8.s64 = ctx.r4.s64 + 275;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// beq cr6,0x8285029c
	if (ctx.cr6.eq) goto loc_8285029C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82850298
	if (ctx.cr6.eq) goto loc_82850298;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82850290
	if (ctx.cr6.eq) goto loc_82850290;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8285029c
	goto loc_8285029C;
loc_82850290:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285029c
	goto loc_8285029C;
loc_82850298:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8285029C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// fsel f0,f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// addi r10,r4,351
	ctx.r10.s64 = ctx.r4.s64 + 351;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfsx f12,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfsx f10,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f11,f12,f0
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// beq cr6,0x828502e4
	if (ctx.cr6.eq) goto loc_828502E4;
	// addi r10,r4,490
	ctx.r10.s64 = ctx.r4.s64 + 490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
loc_828502E4:
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_828502EC:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r5,7256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7256, ctx.xer);
	// blt cr6,0x828501d4
	if (ctx.cr6.lt) goto loc_828501D4;
	// stw r27,13192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13192, ctx.r27.u32);
	// stw r25,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r25.u32);
	// stw r24,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r24.u32);
	// stw r26,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r26.u32);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285030C"))) PPC_WEAK_FUNC(sub_8285030C);
PPC_FUNC_IMPL(__imp__sub_8285030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82850310"))) PPC_WEAK_FUNC(sub_82850310);
PPC_FUNC_IMPL(__imp__sub_82850310) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82850318;
	__savegprlr_21(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r6,-29532(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r24,13192(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r23,13188(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r22,13180(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r21,13184(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x8285037c
	if (ctx.cr6.eq) goto loc_8285037C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82850374
	if (ctx.cr6.eq) goto loc_82850374;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8285036c
	if (ctx.cr6.eq) goto loc_8285036C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82850380
	goto loc_82850380;
loc_8285036C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82850380
	goto loc_82850380;
loc_82850374:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82850380
	goto loc_82850380;
loc_8285037C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82850380:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82850484
	if (ctx.cr6.eq) goto loc_82850484;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r7,r11,7244
	ctx.r7.s64 = ctx.r11.s64 + 7244;
loc_828503A0:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x828503d4
	if (ctx.cr6.eq) goto loc_828503D4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828503cc
	if (ctx.cr6.eq) goto loc_828503CC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x828503c4
	if (ctx.cr6.eq) goto loc_828503C4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x828503d8
	goto loc_828503D8;
loc_828503C4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828503d8
	goto loc_828503D8;
loc_828503CC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x828503d8
	goto loc_828503D8;
loc_828503D4:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_828503D8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82850408
	if (ctx.cr6.eq) goto loc_82850408;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82850400
	if (ctx.cr6.eq) goto loc_82850400;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x828503f8
	if (ctx.cr6.eq) goto loc_828503F8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8285040c
	goto loc_8285040C;
loc_828503F8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285040c
	goto loc_8285040C;
loc_82850400:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285040c
	goto loc_8285040C;
loc_82850408:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8285040C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82850480
	if (ctx.cr6.eq) goto loc_82850480;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82850444
	if (ctx.cr6.eq) goto loc_82850444;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8285043c
	if (ctx.cr6.eq) goto loc_8285043C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82850434
	if (ctx.cr6.eq) goto loc_82850434;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82850448
	goto loc_82850448;
loc_82850434:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82850448
	goto loc_82850448;
loc_8285043C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82850448
	goto loc_82850448;
loc_82850444:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82850448:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285046c
	if (ctx.cr6.eq) goto loc_8285046C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,616(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 616);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8285046c
	if (ctx.cr6.eq) goto loc_8285046C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_8285046C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x828503a0
	if (ctx.cr6.lt) goto loc_828503A0;
	// b 0x82850484
	goto loc_82850484;
loc_82850480:
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
loc_82850484:
	// stw r25,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r25.u32);
	// stw r24,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r23.u32);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285049C"))) PPC_WEAK_FUNC(sub_8285049C);
PPC_FUNC_IMPL(__imp__sub_8285049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828504A0"))) PPC_WEAK_FUNC(sub_828504A0);
PPC_FUNC_IMPL(__imp__sub_828504A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,128
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 128, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r10,r10,1376
	ctx.r10.s64 = ctx.r10.s64 + 1376;
loc_828504D0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x828504f0
	if (ctx.cr6.eq) goto loc_828504F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x828504d0
	if (ctx.cr6.lt) goto loc_828504D0;
	// blr 
	return;
loc_828504F0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,199
	ctx.r11.s64 = ctx.r11.s64 + 199;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82850508"))) PPC_WEAK_FUNC(sub_82850508);
PPC_FUNC_IMPL(__imp__sub_82850508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-30464(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30464);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f12,27476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27476);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r10,616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82850550
	if (!ctx.cr6.eq) goto loc_82850550;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82850590
	goto loc_82850590;
loc_82850550:
	// addi r10,r10,1811
	ctx.r10.s64 = ctx.r10.s64 + 1811;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285058c
	if (ctx.cr6.eq) goto loc_8285058C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82850584
	if (ctx.cr6.eq) goto loc_82850584;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285057c
	if (ctx.cr6.eq) goto loc_8285057C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82850590
	goto loc_82850590;
loc_8285057C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82850590
	goto loc_82850590;
loc_82850584:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82850590
	goto loc_82850590;
loc_8285058C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82850590:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828505dc
	if (ctx.cr6.eq) goto loc_828505DC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828505c0
	if (ctx.cr6.eq) goto loc_828505C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828505b8
	if (ctx.cr6.eq) goto loc_828505B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828505c4
	if (!ctx.cr6.eq) goto loc_828505C4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828505c4
	goto loc_828505C4;
loc_828505B8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828505c4
	goto loc_828505C4;
loc_828505C0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828505C4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
loc_828505DC:
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
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
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

__attribute__((alias("__imp__sub_82850604"))) PPC_WEAK_FUNC(sub_82850604);
PPC_FUNC_IMPL(__imp__sub_82850604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82850608"))) PPC_WEAK_FUNC(sub_82850608);
PPC_FUNC_IMPL(__imp__sub_82850608) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,1811
	ctx.r10.s64 = ctx.r5.s64 + 1811;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,-29532
	ctx.r6.s64 = ctx.r9.s64 + -29532;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,48(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82850660
	if (ctx.cr6.eq) goto loc_82850660;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82850658
	if (ctx.cr6.eq) goto loc_82850658;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82850650
	if (ctx.cr6.eq) goto loc_82850650;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82850664
	goto loc_82850664;
loc_82850650:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82850664
	goto loc_82850664;
loc_82850658:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82850664
	goto loc_82850664;
loc_82850660:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82850664:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82850678
	if (!ctx.cr6.eq) goto loc_82850678;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82850678:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828506a0
	if (ctx.cr6.eq) goto loc_828506A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82850698
	if (ctx.cr6.eq) goto loc_82850698;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828506a4
	if (!ctx.cr6.eq) goto loc_828506A4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828506a4
	goto loc_828506A4;
loc_82850698:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828506a4
	goto loc_828506A4;
loc_828506A0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828506A4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1092(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1092);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828506BC"))) PPC_WEAK_FUNC(sub_828506BC);
PPC_FUNC_IMPL(__imp__sub_828506BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828506C0"))) PPC_WEAK_FUNC(sub_828506C0);
PPC_FUNC_IMPL(__imp__sub_828506C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828506C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r27,13192(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// li r7,1376
	ctx.r7.s64 = 1376;
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
loc_828506F4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82850710
	if (ctx.cr6.lt) goto loc_82850710;
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// blt cr6,0x82850718
	if (ctx.cr6.lt) goto loc_82850718;
loc_82850710:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8285071c
	goto loc_8285071C;
loc_82850718:
	// lwzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
loc_8285071C:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x828504a0
	ctx.lr = 0x82850724;
	sub_828504A0(ctx, base);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r7,1416
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1416, ctx.xer);
	// blt cr6,0x828506f4
	if (ctx.cr6.lt) goto loc_828506F4;
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

__attribute__((alias("__imp__sub_8285074C"))) PPC_WEAK_FUNC(sub_8285074C);
PPC_FUNC_IMPL(__imp__sub_8285074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82850750"))) PPC_WEAK_FUNC(sub_82850750);
PPC_FUNC_IMPL(__imp__sub_82850750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,7244(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7244);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828507a4
	if (ctx.cr6.eq) goto loc_828507A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285079c
	if (ctx.cr6.eq) goto loc_8285079C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82850794
	if (ctx.cr6.eq) goto loc_82850794;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828507a8
	goto loc_828507A8;
loc_82850794:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828507a8
	goto loc_828507A8;
loc_8285079C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828507a8
	goto loc_828507A8;
loc_828507A4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828507A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828507f8
	if (ctx.cr6.eq) goto loc_828507F8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828507d8
	if (ctx.cr6.eq) goto loc_828507D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828507d0
	if (ctx.cr6.eq) goto loc_828507D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828507dc
	if (!ctx.cr6.eq) goto loc_828507DC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828507dc
	goto loc_828507DC;
loc_828507D0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828507dc
	goto loc_828507DC;
loc_828507D8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828507DC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1092(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x828507f8
	if (!ctx.cr6.eq) goto loc_828507F8;
	// li r6,1
	ctx.r6.s64 = 1;
loc_828507F8:
	// lwz r11,7248(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285082c
	if (ctx.cr6.eq) goto loc_8285082C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82850824
	if (ctx.cr6.eq) goto loc_82850824;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285081c
	if (ctx.cr6.eq) goto loc_8285081C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82850830
	goto loc_82850830;
loc_8285081C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82850830
	goto loc_82850830;
loc_82850824:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82850830
	goto loc_82850830;
loc_8285082C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82850830:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82850880
	if (ctx.cr6.eq) goto loc_82850880;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82850860
	if (ctx.cr6.eq) goto loc_82850860;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82850858
	if (ctx.cr6.eq) goto loc_82850858;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82850864
	if (!ctx.cr6.eq) goto loc_82850864;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82850864
	goto loc_82850864;
loc_82850858:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82850864
	goto loc_82850864;
loc_82850860:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82850864:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,1092(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82850880
	if (!ctx.cr6.eq) goto loc_82850880;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82850880:
	// lwz r11,7252(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7252);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828508b4
	if (ctx.cr6.eq) goto loc_828508B4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828508ac
	if (ctx.cr6.eq) goto loc_828508AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828508a4
	if (ctx.cr6.eq) goto loc_828508A4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828508b8
	goto loc_828508B8;
loc_828508A4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828508b8
	goto loc_828508B8;
loc_828508AC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828508b8
	goto loc_828508B8;
loc_828508B4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828508B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82850910
	if (ctx.cr6.eq) goto loc_82850910;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828508e8
	if (ctx.cr6.eq) goto loc_828508E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828508e0
	if (ctx.cr6.eq) goto loc_828508E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828508ec
	if (!ctx.cr6.eq) goto loc_828508EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828508ec
	goto loc_828508EC;
loc_828508E0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828508ec
	goto loc_828508EC;
loc_828508E8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828508EC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1092(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1092);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82850910
	if (!ctx.cr6.eq) goto loc_82850910;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82850910:
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82850918"))) PPC_WEAK_FUNC(sub_82850918);
PPC_FUNC_IMPL(__imp__sub_82850918) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82850960
	if (ctx.cr6.eq) goto loc_82850960;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82850950
	if (ctx.cr6.eq) goto loc_82850950;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82850968
	if (!ctx.cr6.eq) goto loc_82850968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82850968
	goto loc_82850968;
loc_82850950:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82850968
	goto loc_82850968;
loc_82850960:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82850968:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82817750
	ctx.lr = 0x82850970;
	sub_82817750(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bgt cr6,0x82850990
	if (ctx.cr6.gt) goto loc_82850990;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82850990:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828509A8"))) PPC_WEAK_FUNC(sub_828509A8);
PPC_FUNC_IMPL(__imp__sub_828509A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82850a14
	if (ctx.cr6.lt) goto loc_82850A14;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bge cr6,0x82850a14
	if (!ctx.cr6.lt) goto loc_82850A14;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// addi r10,r10,1376
	ctx.r10.s64 = ctx.r10.s64 + 1376;
loc_828509DC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82850a00
	if (ctx.cr6.eq) goto loc_82850A00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x828509dc
	if (ctx.cr6.lt) goto loc_828509DC;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82850A00:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82850a14
	if (ctx.cr6.eq) goto loc_82850A14;
	// addi r11,r11,199
	ctx.r11.s64 = ctx.r11.s64 + 199;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
loc_82850A14:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82850A1C"))) PPC_WEAK_FUNC(sub_82850A1C);
PPC_FUNC_IMPL(__imp__sub_82850A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82850A20"))) PPC_WEAK_FUNC(sub_82850A20);
PPC_FUNC_IMPL(__imp__sub_82850A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82850A28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// beq cr6,0x82850a6c
	if (ctx.cr6.eq) goto loc_82850A6C;
loc_82850A48:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82850608
	ctx.lr = 0x82850A54;
	sub_82850608(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82850a78
	if (ctx.cr6.eq) goto loc_82850A78;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82850a48
	if (ctx.cr6.lt) goto loc_82850A48;
loc_82850A6C:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82850A78:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r31,1811
	ctx.r10.s64 = ctx.r31.s64 + 1811;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82850A9C"))) PPC_WEAK_FUNC(sub_82850A9C);
PPC_FUNC_IMPL(__imp__sub_82850A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82850AA0"))) PPC_WEAK_FUNC(sub_82850AA0);
PPC_FUNC_IMPL(__imp__sub_82850AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82850b0c
	if (!ctx.cr6.gt) goto loc_82850B0C;
	// cmpwi cr6,r5,128
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 128, ctx.xer);
	// bge cr6,0x82850b0c
	if (!ctx.cr6.lt) goto loc_82850B0C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// addi r10,r10,1376
	ctx.r10.s64 = ctx.r10.s64 + 1376;
loc_82850AD4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82850af8
	if (ctx.cr6.eq) goto loc_82850AF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82850ad4
	if (ctx.cr6.lt) goto loc_82850AD4;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82850AF8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82850b0c
	if (ctx.cr6.eq) goto loc_82850B0C;
	// addi r11,r11,790
	ctx.r11.s64 = ctx.r11.s64 + 790;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
loc_82850B0C:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82850B14"))) PPC_WEAK_FUNC(sub_82850B14);
PPC_FUNC_IMPL(__imp__sub_82850B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82850B18"))) PPC_WEAK_FUNC(sub_82850B18);
PPC_FUNC_IMPL(__imp__sub_82850B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82850B20;
	__savegprlr_25(ctx, base);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r7,13192(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13192);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r6,13188(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r5,13180(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,13184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13184);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r31,r28,752
	ctx.r31.s64 = ctx.r28.s64 + 752;
	// addi r30,r30,628
	ctx.r30.s64 = ctx.r30.s64 + 628;
loc_82850B64:
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82850be4
	if (!ctx.cr6.eq) goto loc_82850BE4;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lwz r27,-72(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// lfs f13,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lwz r26,-80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stfs f12,-76(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lwz r25,-76(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// or r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 | ctx.r25.u64;
	// or r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 | ctx.r27.u64;
	// clrlwi r27,r27,1
	ctx.r27.u64 = ctx.r27.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82850be4
	if (!ctx.cr6.eq) goto loc_82850BE4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x82850b64
	if (ctx.cr6.lt) goto loc_82850B64;
	// lwz r31,6036(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6036);
	// stw r7,13192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13192, ctx.r7.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// stw r5,13180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13180, ctx.r5.u32);
	// stw r3,13184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13184, ctx.r3.u32);
	// stw r6,13188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13188, ctx.r6.u32);
	// bne cr6,0x82850bf4
	if (!ctx.cr6.eq) goto loc_82850BF4;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82850BE4:
	// stw r6,13188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13188, ctx.r6.u32);
	// stw r3,13184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13184, ctx.r3.u32);
	// stw r5,13180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13180, ctx.r5.u32);
	// stw r7,13192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13192, ctx.r7.u32);
loc_82850BF4:
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82850C00"))) PPC_WEAK_FUNC(sub_82850C00);
PPC_FUNC_IMPL(__imp__sub_82850C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82850C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// beq cr6,0x82850c4c
	if (ctx.cr6.eq) goto loc_82850C4C;
loc_82850C28:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82850608
	ctx.lr = 0x82850C34;
	sub_82850608(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82850c58
	if (ctx.cr6.eq) goto loc_82850C58;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82850c28
	if (ctx.cr6.lt) goto loc_82850C28;
loc_82850C4C:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82850C58:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82850C68"))) PPC_WEAK_FUNC(sub_82850C68);
PPC_FUNC_IMPL(__imp__sub_82850C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82850C70;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r22,13192(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r21,13188(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r20,13184(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r11.u32);
	// bl 0x82850608
	ctx.lr = 0x82850CD0;
	sub_82850608(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82816b18
	ctx.lr = 0x82850CDC;
	sub_82816B18(ctx, base);
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r7,r8,-29532
	ctx.r7.s64 = ctx.r8.s64 + -29532;
	// lwz r9,-29532(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29532);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// beq cr6,0x82850d1c
	if (ctx.cr6.eq) goto loc_82850D1C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82850d14
	if (ctx.cr6.eq) goto loc_82850D14;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82850d0c
	if (ctx.cr6.eq) goto loc_82850D0C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82850d20
	goto loc_82850D20;
loc_82850D0C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82850d20
	goto loc_82850D20;
loc_82850D14:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82850d20
	goto loc_82850D20;
loc_82850D1C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82850D20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82850de0
	if (ctx.cr6.eq) goto loc_82850DE0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82850d5c
	if (ctx.cr6.eq) goto loc_82850D5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82850d54
	if (ctx.cr6.eq) goto loc_82850D54;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82850d4c
	if (ctx.cr6.eq) goto loc_82850D4C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82850d60
	goto loc_82850D60;
loc_82850D4C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82850d60
	goto loc_82850D60;
loc_82850D54:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82850d60
	goto loc_82850D60;
loc_82850D5C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82850D60:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82850de0
	if (ctx.cr6.eq) goto loc_82850DE0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82850d90
	if (ctx.cr6.eq) goto loc_82850D90;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82850d88
	if (ctx.cr6.eq) goto loc_82850D88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82850d94
	if (!ctx.cr6.eq) goto loc_82850D94;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82850d94
	goto loc_82850D94;
loc_82850D88:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82850d94
	goto loc_82850D94;
loc_82850D90:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82850D94:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r26,132(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 132);
	// beq cr6,0x82850dcc
	if (ctx.cr6.eq) goto loc_82850DCC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82850dc4
	if (ctx.cr6.eq) goto loc_82850DC4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82850dd0
	if (ctx.cr6.eq) goto loc_82850DD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82850dd0
	goto loc_82850DD0;
loc_82850DC4:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82850dd0
	goto loc_82850DD0;
loc_82850DCC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82850DD0:
	// bl 0x828040c8
	ctx.lr = 0x82850DD4;
	sub_828040C8(ctx, base);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82850de0
	if (!ctx.cr6.eq) goto loc_82850DE0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82850DE0:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// stw r22,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r22.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r20,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r20.u32);
	// stw r21,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82850DFC"))) PPC_WEAK_FUNC(sub_82850DFC);
PPC_FUNC_IMPL(__imp__sub_82850DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82850E00"))) PPC_WEAK_FUNC(sub_82850E00);
PPC_FUNC_IMPL(__imp__sub_82850E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82850E08;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r25,13192(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// li r30,1420
	ctx.r30.s64 = 1420;
	// lwz r24,13188(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r23,13180(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r22,13184(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82850E38:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82850608
	ctx.lr = 0x82850E44;
	sub_82850608(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bge cr6,0x82850e60
	if (!ctx.cr6.lt) goto loc_82850E60;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bge cr6,0x82850e78
	if (!ctx.cr6.lt) goto loc_82850E78;
loc_82850E60:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82850e78
	if (ctx.cr6.lt) goto loc_82850E78;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x82850e78
	if (!ctx.cr6.lt) goto loc_82850E78;
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
loc_82850E78:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r30,1432
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1432, ctx.xer);
	// blt cr6,0x82850e38
	if (ctx.cr6.lt) goto loc_82850E38;
	// stw r25,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82850EA0"))) PPC_WEAK_FUNC(sub_82850EA0);
PPC_FUNC_IMPL(__imp__sub_82850EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r10,616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82850ed4
	if (!ctx.cr6.eq) goto loc_82850ED4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82850f14
	goto loc_82850F14;
loc_82850ED4:
	// addi r10,r10,1811
	ctx.r10.s64 = ctx.r10.s64 + 1811;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82850f10
	if (ctx.cr6.eq) goto loc_82850F10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82850f08
	if (ctx.cr6.eq) goto loc_82850F08;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82850f00
	if (ctx.cr6.eq) goto loc_82850F00;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82850f14
	goto loc_82850F14;
loc_82850F00:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82850f14
	goto loc_82850F14;
loc_82850F08:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82850f14
	goto loc_82850F14;
loc_82850F10:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82850F14:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82850f28
	if (!ctx.cr6.eq) goto loc_82850F28;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82850F28:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82850f50
	if (ctx.cr6.eq) goto loc_82850F50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82850f48
	if (ctx.cr6.eq) goto loc_82850F48;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82850f54
	if (!ctx.cr6.eq) goto loc_82850F54;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82850f54
	goto loc_82850F54;
loc_82850F48:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82850f54
	goto loc_82850F54;
loc_82850F50:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82850F54:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1092(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1092);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82850F6C"))) PPC_WEAK_FUNC(sub_82850F6C);
PPC_FUNC_IMPL(__imp__sub_82850F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82850F70"))) PPC_WEAK_FUNC(sub_82850F70);
PPC_FUNC_IMPL(__imp__sub_82850F70) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82850F78;
	__savegprlr_28(ctx, base);
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
	// lwz r29,-29532(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,48(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82850fc4
	if (ctx.cr6.eq) goto loc_82850FC4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82850fbc
	if (ctx.cr6.eq) goto loc_82850FBC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82850fb4
	if (ctx.cr6.eq) goto loc_82850FB4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82850fc8
	goto loc_82850FC8;
loc_82850FB4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82850fc8
	goto loc_82850FC8;
loc_82850FBC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82850fc8
	goto loc_82850FC8;
loc_82850FC4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82850FC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285112c
	if (ctx.cr6.eq) goto loc_8285112C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82851000
	if (ctx.cr6.eq) goto loc_82851000;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82850ff8
	if (ctx.cr6.eq) goto loc_82850FF8;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82850ff0
	if (ctx.cr6.eq) goto loc_82850FF0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82851004
	goto loc_82851004;
loc_82850FF0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82851004
	goto loc_82851004;
loc_82850FF8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82851004
	goto loc_82851004;
loc_82851000:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82851004:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r7,224(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	// addi r6,r7,626
	ctx.r6.s64 = ctx.r7.s64 + 626;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r31,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8285112c
	if (!ctx.cr6.gt) goto loc_8285112C;
	// lwz r11,3852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3852);
	// addi r9,r30,3848
	ctx.r9.s64 = ctx.r30.s64 + 3848;
	// mullw r5,r11,r7
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
loc_82851038:
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82851070
	if (ctx.cr6.eq) goto loc_82851070;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82851068
	if (ctx.cr6.eq) goto loc_82851068;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82851074
	if (!ctx.cr6.eq) goto loc_82851074;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82851074
	goto loc_82851074;
loc_82851068:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82851074
	goto loc_82851074;
loc_82851070:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82851074:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828510a4
	if (ctx.cr6.eq) goto loc_828510A4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8285109c
	if (ctx.cr6.eq) goto loc_8285109C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82851094
	if (ctx.cr6.eq) goto loc_82851094;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x828510a8
	goto loc_828510A8;
loc_82851094:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828510a8
	goto loc_828510A8;
loc_8285109C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x828510a8
	goto loc_828510A8;
loc_828510A4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_828510A8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828510c0
	if (ctx.cr6.eq) goto loc_828510C0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82851038
	if (ctx.cr6.lt) goto loc_82851038;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_828510C0:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8285112c
	if (!ctx.cr6.lt) goto loc_8285112C;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82851104
	if (ctx.cr6.eq) goto loc_82851104;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mullw r11,r5,r7
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_82851104:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
loc_8285112C:
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82851130"))) PPC_WEAK_FUNC(sub_82851130);
PPC_FUNC_IMPL(__imp__sub_82851130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,-29532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// beq cr6,0x8285117c
	if (ctx.cr6.eq) goto loc_8285117C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82851174
	if (ctx.cr6.eq) goto loc_82851174;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8285116c
	if (ctx.cr6.eq) goto loc_8285116C;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// b 0x82851180
	goto loc_82851180;
loc_8285116C:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82851180
	goto loc_82851180;
loc_82851174:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x82851180
	goto loc_82851180;
loc_8285117C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82851180:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828511b4
	if (ctx.cr6.eq) goto loc_828511B4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828511b0
	if (ctx.cr6.eq) goto loc_828511B0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828511a8
	if (ctx.cr6.eq) goto loc_828511A8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x828511b4
	goto loc_828511B4;
loc_828511A8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828511b4
	goto loc_828511B4;
loc_828511B0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828511B4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r9,224(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// addi r7,r9,626
	ctx.r7.s64 = ctx.r9.s64 + 626;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,50
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 50, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r6,3852(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3852);
	// addi r7,r10,3848
	ctx.r7.s64 = ctx.r10.s64 + 3848;
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82851204"))) PPC_WEAK_FUNC(sub_82851204);
PPC_FUNC_IMPL(__imp__sub_82851204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82851208"))) PPC_WEAK_FUNC(sub_82851208);
PPC_FUNC_IMPL(__imp__sub_82851208) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r31,3188(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3188);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x828512e8
	if (!ctx.cr6.gt) goto loc_828512E8;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r9,r30,908
	ctx.r9.s64 = ctx.r30.s64 + 908;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82851250:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82851284
	if (ctx.cr6.eq) goto loc_82851284;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285127c
	if (ctx.cr6.eq) goto loc_8285127C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82851274
	if (ctx.cr6.eq) goto loc_82851274;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82851288
	goto loc_82851288;
loc_82851274:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82851288
	goto loc_82851288;
loc_8285127C:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82851288
	goto loc_82851288;
loc_82851284:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82851288:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x828512b8
	if (ctx.cr6.eq) goto loc_828512B8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x828512b0
	if (ctx.cr6.eq) goto loc_828512B0;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x828512a8
	if (ctx.cr6.eq) goto loc_828512A8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828512bc
	goto loc_828512BC;
loc_828512A8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828512bc
	goto loc_828512BC;
loc_828512B0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x828512bc
	goto loc_828512BC;
loc_828512B8:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_828512BC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828512d8
	if (ctx.cr6.eq) goto loc_828512D8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82851250
	if (ctx.cr6.lt) goto loc_82851250;
	// b 0x828512e8
	goto loc_828512E8;
loc_828512D8:
	// addi r11,r8,227
	ctx.r11.s64 = ctx.r8.s64 + 227;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r10.u32);
loc_828512E8:
	// bl 0x828185a8
	ctx.lr = 0x828512EC;
	sub_828185A8(ctx, base);
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

__attribute__((alias("__imp__sub_82851304"))) PPC_WEAK_FUNC(sub_82851304);
PPC_FUNC_IMPL(__imp__sub_82851304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82851308"))) PPC_WEAK_FUNC(sub_82851308);
PPC_FUNC_IMPL(__imp__sub_82851308) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,3172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828513f8
	if (ctx.cr6.eq) goto loc_828513F8;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// ble cr6,0x828513f4
	if (!ctx.cr6.gt) goto loc_828513F4;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r7,r9,1464
	ctx.r7.s64 = ctx.r9.s64 + 1464;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_82851358:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285138c
	if (ctx.cr6.eq) goto loc_8285138C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82851384
	if (ctx.cr6.eq) goto loc_82851384;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8285137c
	if (ctx.cr6.eq) goto loc_8285137C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82851390
	goto loc_82851390;
loc_8285137C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82851390
	goto loc_82851390;
loc_82851384:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82851390
	goto loc_82851390;
loc_8285138C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82851390:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828513bc
	if (ctx.cr6.eq) goto loc_828513BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828513b4
	if (ctx.cr6.eq) goto loc_828513B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828513c0
	if (!ctx.cr6.eq) goto loc_828513C0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828513c0
	goto loc_828513C0;
loc_828513B4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x828513c0
	goto loc_828513C0;
loc_828513BC:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_828513C0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828513e0
	if (!ctx.cr6.eq) goto loc_828513E0;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// lwz r11,3172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3172);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,3172(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3172, ctx.r11.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_828513E0:
	// lwz r11,3172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3172);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82851358
	if (ctx.cr6.lt) goto loc_82851358;
loc_828513F4:
	// bl 0x82818be0
	ctx.lr = 0x828513F8;
	sub_82818BE0(ctx, base);
loc_828513F8:
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

__attribute__((alias("__imp__sub_82851410"))) PPC_WEAK_FUNC(sub_82851410);
PPC_FUNC_IMPL(__imp__sub_82851410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82851418;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r7,r8,-29532
	ctx.r7.s64 = ctx.r8.s64 + -29532;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,-29532(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29532);
	// lwz r28,4(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r30,48(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x82851474
	if (ctx.cr6.eq) goto loc_82851474;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285146c
	if (ctx.cr6.eq) goto loc_8285146C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82851478
	if (!ctx.cr6.eq) goto loc_82851478;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82851478
	goto loc_82851478;
loc_8285146C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82851478
	goto loc_82851478;
loc_82851474:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82851478:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82818d18
	ctx.lr = 0x82851484;
	sub_82818D18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828514b0
	if (ctx.cr6.eq) goto loc_828514B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828514a8
	if (ctx.cr6.eq) goto loc_828514A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828514b4
	if (!ctx.cr6.eq) goto loc_828514B4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828514b4
	goto loc_828514B4;
loc_828514A8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828514b4
	goto loc_828514B4;
loc_828514B0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828514B4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82818d18
	ctx.lr = 0x828514C0;
	sub_82818D18(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82851560
	if (ctx.cr6.eq) goto loc_82851560;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82851560
	if (ctx.cr6.eq) goto loc_82851560;
	// lwz r11,2400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2400);
	// addi r8,r30,2396
	ctx.r8.s64 = ctx.r30.s64 + 2396;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r30,1600
	ctx.r7.s64 = ctx.r30.s64 + 1600;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r5,1604(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_82851560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82851568"))) PPC_WEAK_FUNC(sub_82851568);
PPC_FUNC_IMPL(__imp__sub_82851568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82851570;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// addi r10,r30,366
	ctx.r10.s64 = ctx.r30.s64 + 366;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r9,-29532
	ctx.r6.s64 = ctx.r9.s64 + -29532;
	// lwz r11,-29532(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r29,48(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwzx r10,r7,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828515dc
	if (ctx.cr6.eq) goto loc_828515DC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828515d4
	if (ctx.cr6.eq) goto loc_828515D4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828515cc
	if (ctx.cr6.eq) goto loc_828515CC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x828515e0
	goto loc_828515E0;
loc_828515CC:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x828515e0
	goto loc_828515E0;
loc_828515D4:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x828515e0
	goto loc_828515E0;
loc_828515DC:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_828515E0:
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfs f12,1160(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1160);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x82851618
	if (ctx.cr6.eq) goto loc_82851618;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82851610
	if (ctx.cr6.eq) goto loc_82851610;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8285161c
	if (!ctx.cr6.eq) goto loc_8285161C;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8285161c
	goto loc_8285161C;
loc_82851610:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8285161c
	goto loc_8285161C;
loc_82851618:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8285161C:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r9,r28,366
	ctx.r9.s64 = ctx.r28.s64 + 366;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r10,r7,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lfs f0,1164(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1164);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82851664
	if (ctx.cr6.eq) goto loc_82851664;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82851660
	if (ctx.cr6.eq) goto loc_82851660;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82851658
	if (ctx.cr6.eq) goto loc_82851658;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82851664
	goto loc_82851664;
loc_82851658:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82851664
	goto loc_82851664;
loc_82851660:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82851664:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r11,r30,125
	ctx.r11.s64 = ctx.r30.s64 + 125;
	// lwz r8,120(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r31,r29,116
	ctx.r31.s64 = ctx.r29.s64 + 116;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r8,r30
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lfs f13,-4012(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,48(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lfs f11,1164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1164);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// fsel f6,f10,f0,f11
	ctx.f6.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// fsubs f0,f2,f7
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// fmadds f31,f6,f13,f12
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f12.f64));
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8285172c
	if (ctx.cr6.eq) goto loc_8285172C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82124928
	ctx.lr = 0x8285171C;
	sub_82124928(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8285175c
	goto loc_8285175C;
loc_8285172C:
	// lwz r11,1604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1604);
	// addi r10,r29,1600
	ctx.r10.s64 = ctx.r29.s64 + 1600;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
loc_8285175C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f11,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,3952
	ctx.r10.s64 = ctx.r11.s64 + 3952;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfs f8,3952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3952);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// lfs f7,3956(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3956);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,3960(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3960);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// lfs f6,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f13,f3,f8
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f12,f1,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f0,f4,f9
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// stw r5,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r5.u32);
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828517FC"))) PPC_WEAK_FUNC(sub_828517FC);
PPC_FUNC_IMPL(__imp__sub_828517FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82851800"))) PPC_WEAK_FUNC(sub_82851800);
PPC_FUNC_IMPL(__imp__sub_82851800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82851808;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r20,12480(r9)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r19,48(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x82851868;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r20,4132
	ctx.r4.s64 = ctx.r20.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82851874;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82851880;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r7,r11,15828
	ctx.r7.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82851898;
	sub_828097A0(ctx, base);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828518b4
	if (ctx.cr6.eq) goto loc_828518B4;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x828518bc
	if (ctx.cr6.eq) goto loc_828518BC;
loc_828518B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828518d4
	goto loc_828518D4;
loc_828518BC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r19,1620
	ctx.r5.s64 = ctx.r19.s64 + 1620;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82809be0
	ctx.lr = 0x828518D0;
	sub_82809BE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_828518D4:
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828518F0"))) PPC_WEAK_FUNC(sub_828518F0);
PPC_FUNC_IMPL(__imp__sub_828518F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x828518F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,13180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// addi r30,r9,-29532
	ctx.r30.s64 = ctx.r9.s64 + -29532;
	// lwz r27,13188(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r29,24(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82851960
	if (ctx.cr6.eq) goto loc_82851960;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82851958
	if (ctx.cr6.eq) goto loc_82851958;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82851950
	if (ctx.cr6.eq) goto loc_82851950;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82851964
	goto loc_82851964;
loc_82851950:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x82851964
	goto loc_82851964;
loc_82851958:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82851964
	goto loc_82851964;
loc_82851960:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82851964:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82819b58
	ctx.lr = 0x82851970;
	sub_82819B58(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r9,r31,2168
	ctx.r9.s64 = ctx.r31.s64 + 2168;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
loc_82851984:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82851988:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x828519b8
	if (ctx.cr6.eq) goto loc_828519B8;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x828519b0
	if (ctx.cr6.eq) goto loc_828519B0;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x828519a8
	if (ctx.cr6.eq) goto loc_828519A8;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x828519bc
	goto loc_828519BC;
loc_828519A8:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x828519bc
	goto loc_828519BC;
loc_828519B0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828519bc
	goto loc_828519BC;
loc_828519B8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_828519BC:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 * 52;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828519fc
	if (ctx.cr6.eq) goto loc_828519FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828519f4
	if (ctx.cr6.eq) goto loc_828519F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82851a00
	if (!ctx.cr6.eq) goto loc_82851A00;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82851a00
	goto loc_82851A00;
loc_828519F4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82851a00
	goto loc_82851A00;
loc_828519FC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82851A00:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82851aa0
	if (!ctx.cr6.eq) goto loc_82851AA0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 * 52;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r28,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r28.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq cr6,0x82851a58
	if (ctx.cr6.eq) goto loc_82851A58;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82851a50
	if (ctx.cr6.eq) goto loc_82851A50;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82851a48
	if (ctx.cr6.eq) goto loc_82851A48;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82851a5c
	goto loc_82851A5C;
loc_82851A48:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82851a5c
	goto loc_82851A5C;
loc_82851A50:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82851a5c
	goto loc_82851A5C;
loc_82851A58:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82851A5C:
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82851a88
	if (ctx.cr6.eq) goto loc_82851A88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82851a80
	if (ctx.cr6.eq) goto loc_82851A80;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82851a8c
	if (!ctx.cr6.eq) goto loc_82851A8C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82851a8c
	goto loc_82851A8C;
loc_82851A80:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82851a8c
	goto loc_82851A8C;
loc_82851A88:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82851A8C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82851aa0
	if (!ctx.cr6.eq) goto loc_82851AA0;
	// stw r28,-4(r4)
	PPC_STORE_U32(ctx.r4.u32 + -4, ctx.r28.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82851AA0:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82851ad0
	if (ctx.cr6.eq) goto loc_82851AD0;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82851ac8
	if (ctx.cr6.eq) goto loc_82851AC8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82851ac0
	if (ctx.cr6.eq) goto loc_82851AC0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82851ad4
	goto loc_82851AD4;
loc_82851AC0:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82851ad4
	goto loc_82851AD4;
loc_82851AC8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82851ad4
	goto loc_82851AD4;
loc_82851AD0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82851AD4:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 * 52;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82851b14
	if (ctx.cr6.eq) goto loc_82851B14;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82851b0c
	if (ctx.cr6.eq) goto loc_82851B0C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82851b18
	if (!ctx.cr6.eq) goto loc_82851B18;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82851b18
	goto loc_82851B18;
loc_82851B0C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82851b18
	goto loc_82851B18;
loc_82851B14:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82851B18:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82851bb8
	if (!ctx.cr6.eq) goto loc_82851BB8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 * 52;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r28,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r28.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x82851b70
	if (ctx.cr6.eq) goto loc_82851B70;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82851b68
	if (ctx.cr6.eq) goto loc_82851B68;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82851b60
	if (ctx.cr6.eq) goto loc_82851B60;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82851b74
	goto loc_82851B74;
loc_82851B60:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x82851b74
	goto loc_82851B74;
loc_82851B68:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82851b74
	goto loc_82851B74;
loc_82851B70:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82851B74:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82851ba0
	if (ctx.cr6.eq) goto loc_82851BA0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82851b98
	if (ctx.cr6.eq) goto loc_82851B98;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82851ba4
	if (!ctx.cr6.eq) goto loc_82851BA4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82851ba4
	goto loc_82851BA4;
loc_82851B98:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82851ba4
	goto loc_82851BA4;
loc_82851BA0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82851BA4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82851bb8
	if (!ctx.cr6.eq) goto loc_82851BB8;
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82851BB8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// blt cr6,0x82851988
	if (ctx.cr6.lt) goto loc_82851988;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,52
	ctx.r4.s64 = ctx.r4.s64 + 52;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x82851984
	if (ctx.cr6.lt) goto loc_82851984;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82851BE0"))) PPC_WEAK_FUNC(sub_82851BE0);
PPC_FUNC_IMPL(__imp__sub_82851BE0) {
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
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,29744(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,48(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82851C4C:
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82851c4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82851C4C;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r7,r5,1288
	ctx.r7.s64 = ctx.r5.s64 + 1288;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,48(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwzx r11,r6,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82851c88
	if (!ctx.cr6.eq) goto loc_82851C88;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82851ce4
	goto loc_82851CE4;
loc_82851C88:
	// addi r11,r5,805
	ctx.r11.s64 = ctx.r5.s64 + 805;
	// lwz r9,2172(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2172);
	// lis r8,26214
	ctx.r8.s64 = 1717960704;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r8,26215
	ctx.r6.u64 = ctx.r8.u64 | 26215;
	// mullw r8,r9,r5
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2168
	ctx.r10.s64 = ctx.r10.s64 + 2168;
	// mulhw r3,r4,r6
	ctx.r3.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32)) >> 32;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// li r5,52
	ctx.r5.s64 = 52;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mulli r11,r9,52
	ctx.r11.s64 = ctx.r9.s64 * 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82219130
	ctx.lr = 0x82851CE4;
	sub_82219130(ctx, base);
loc_82851CE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x82851CF4;
	sub_82219130(ctx, base);
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

__attribute__((alias("__imp__sub_82851D08"))) PPC_WEAK_FUNC(sub_82851D08);
PPC_FUNC_IMPL(__imp__sub_82851D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82851D10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r6,-29532(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r30,48(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// beq cr6,0x82851d7c
	if (ctx.cr6.eq) goto loc_82851D7C;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82851d74
	if (ctx.cr6.eq) goto loc_82851D74;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82851d6c
	if (ctx.cr6.eq) goto loc_82851D6C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82851d80
	goto loc_82851D80;
loc_82851D6C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82851d80
	goto loc_82851D80;
loc_82851D74:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82851d80
	goto loc_82851D80;
loc_82851D7C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82851D80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82851d8c
	if (!ctx.cr6.eq) goto loc_82851D8C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82851D8C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82851dbc
	if (ctx.cr6.eq) goto loc_82851DBC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82851db4
	if (ctx.cr6.eq) goto loc_82851DB4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82851dac
	if (ctx.cr6.eq) goto loc_82851DAC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82851dc0
	goto loc_82851DC0;
loc_82851DAC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82851dc0
	goto loc_82851DC0;
loc_82851DB4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82851dc0
	goto loc_82851DC0;
loc_82851DBC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82851DC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82851dcc
	if (!ctx.cr6.eq) goto loc_82851DCC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82851DCC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82851de4
	if (!ctx.cr6.lt) goto loc_82851DE4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f1,-30252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30252);
	ctx.f1.f64 = double(temp.f32);
loc_82851DE4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82851e0c
	if (ctx.cr6.eq) goto loc_82851E0C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82851e04
	if (ctx.cr6.eq) goto loc_82851E04;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82851e10
	if (!ctx.cr6.eq) goto loc_82851E10;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82851e10
	goto loc_82851E10;
loc_82851E04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82851e10
	goto loc_82851E10;
loc_82851E0C:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82851E10:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8281a960
	ctx.lr = 0x82851E18;
	sub_8281A960(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82851eb8
	if (!ctx.cr6.eq) goto loc_82851EB8;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82851ec8
	if (ctx.cr6.eq) goto loc_82851EC8;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82851e58
	if (ctx.cr6.eq) goto loc_82851E58;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82851e54
	if (ctx.cr6.eq) goto loc_82851E54;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82851e4c
	if (ctx.cr6.eq) goto loc_82851E4C;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x82851e58
	goto loc_82851E58;
loc_82851E4C:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82851e58
	goto loc_82851E58;
loc_82851E54:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82851E58:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8281aa10
	ctx.lr = 0x82851E64;
	sub_8281AA10(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82851ecc
	if (ctx.cr6.eq) goto loc_82851ECC;
	// lwz r9,13176(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13176);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// addi r10,r30,13172
	ctx.r10.s64 = ctx.r30.s64 + 13172;
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,-8684
	ctx.r8.s64 = ctx.r8.s64 + -8684;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r10,r5,r31
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r3,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82851EB8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82851EC8:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_82851ECC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82851ED4"))) PPC_WEAK_FUNC(sub_82851ED4);
PPC_FUNC_IMPL(__imp__sub_82851ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82851ED8"))) PPC_WEAK_FUNC(sub_82851ED8);
PPC_FUNC_IMPL(__imp__sub_82851ED8) {
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
	// addi r10,r4,11230
	ctx.r10.s64 = ctx.r4.s64 + 11230;
	// addi r9,r4,10974
	ctx.r9.s64 = ctx.r4.s64 + 10974;
	// addi r8,r4,16766
	ctx.r8.s64 = ctx.r4.s64 + 16766;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,29760(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stfsx f0,r8,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// stwx r5,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r5,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r5,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r5.u32);
loc_82851F34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8281ab08
	ctx.lr = 0x82851F3C;
	sub_8281AB08(ctx, base);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// blt cr6,0x82851f34
	if (ctx.cr6.lt) goto loc_82851F34;
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

__attribute__((alias("__imp__sub_82851F5C"))) PPC_WEAK_FUNC(sub_82851F5C);
PPC_FUNC_IMPL(__imp__sub_82851F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82851F60"))) PPC_WEAK_FUNC(sub_82851F60);
PPC_FUNC_IMPL(__imp__sub_82851F60) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82851fa4
	if (ctx.cr6.lt) goto loc_82851FA4;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bge cr6,0x82851fa4
	if (!ctx.cr6.lt) goto loc_82851FA4;
	// bl 0x8281ab08
	ctx.lr = 0x82851F90;
	sub_8281AB08(ctx, base);
	// addi r11,r4,11230
	ctx.r11.s64 = ctx.r4.s64 + 11230;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82851FA4:
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

__attribute__((alias("__imp__sub_82851FB8"))) PPC_WEAK_FUNC(sub_82851FB8);
PPC_FUNC_IMPL(__imp__sub_82851FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82851FC0;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,5248
	ctx.r9.u64 = ctx.r10.u64 | 5248;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r7,r30,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x828522dc
	if (!ctx.cr6.gt) goto loc_828522DC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// addi r31,r31,5300
	ctx.r31.s64 = ctx.r31.s64 + 5300;
	// lfs f30,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f30.f64 = double(temp.f32);
	// ori r29,r9,47444
	ctx.r29.u64 = ctx.r9.u64 | 47444;
	// lfs f29,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f31,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
loc_82852024:
	// lwz r11,-24320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24320);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x828520f4
	if (ctx.cr6.eq) goto loc_828520F4;
	// lfs f0,-44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f13,-44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -44, temp.u32);
	// lfs f12,-26984(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -26984);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x828520d4
	if (ctx.cr6.lt) goto loc_828520D4;
	// lfs f10,-14024(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -14024);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x828520c4
	if (ctx.cr6.lt) goto loc_828520C4;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// beq cr6,0x828520c4
	if (ctx.cr6.eq) goto loc_828520C4;
	// fadds f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82852084
	if (ctx.cr6.lt) goto loc_82852084;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8281b248
	ctx.lr = 0x82852080;
	sub_8281B248(ctx, base);
	// b 0x828520f4
	goto loc_828520F4;
loc_82852084:
	// fcmpu cr6,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bgt cr6,0x82852094
	if (ctx.cr6.gt) goto loc_82852094;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x828520ac
	goto loc_828520AC;
loc_82852094:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fdivs f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// bl 0x8212c0b0
	ctx.lr = 0x828520A8;
	sub_8212C0B0(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
loc_828520AC:
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fmadds f11,f12,f0,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stfs f11,-14068(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -14068, temp.u32);
	// b 0x828520f4
	goto loc_828520F4;
loc_828520C4:
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-14068(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -14068, temp.u32);
	// b 0x828520f4
	goto loc_828520F4;
loc_828520D4:
	// fdivs f2,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8212c0b0
	ctx.lr = 0x828520E0;
	sub_8212C0B0(ctx, base);
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmadds f12,f1,f13,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f31.f64));
	// stfs f12,-14068(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + -14068, temp.u32);
loc_828520F4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// blt cr6,0x82852024
	if (ctx.cr6.lt) goto loc_82852024;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5244
	ctx.r11.s64 = ctx.r11.s64 + 5244;
	// ori r9,r10,46516
	ctx.r9.u64 = ctx.r10.u64 | 46516;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x82852134
	if (ctx.cr6.eq) goto loc_82852134;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,56768
	ctx.r9.u64 = ctx.r10.u64 | 56768;
	// lfsx f0,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82852134:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,46520
	ctx.r9.u64 = ctx.r10.u64 | 46520;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x82852160
	if (ctx.cr6.eq) goto loc_82852160;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r10,56772
	ctx.r9.u64 = ctx.r10.u64 | 56772;
	// lfsx f13,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82852160:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,46524
	ctx.r9.u64 = ctx.r10.u64 | 46524;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x8285218c
	if (ctx.cr6.eq) goto loc_8285218C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r10,56776
	ctx.r9.u64 = ctx.r10.u64 | 56776;
	// lfsx f13,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8285218C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,46528
	ctx.r9.u64 = ctx.r10.u64 | 46528;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x828521b8
	if (ctx.cr6.eq) goto loc_828521B8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r10,56780
	ctx.r9.u64 = ctx.r10.u64 | 56780;
	// lfsx f13,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_828521B8:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,46532
	ctx.r9.u64 = ctx.r10.u64 | 46532;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x828521e4
	if (ctx.cr6.eq) goto loc_828521E4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r10,56784
	ctx.r9.u64 = ctx.r10.u64 | 56784;
	// lfsx f13,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_828521E4:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,46536
	ctx.r9.u64 = ctx.r10.u64 | 46536;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x82852210
	if (ctx.cr6.eq) goto loc_82852210;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r10,56788
	ctx.r9.u64 = ctx.r10.u64 | 56788;
	// lfsx f13,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82852210:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,46540
	ctx.r9.u64 = ctx.r10.u64 | 46540;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x8285223c
	if (ctx.cr6.eq) goto loc_8285223C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r10,56792
	ctx.r9.u64 = ctx.r10.u64 | 56792;
	// lfsx f13,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8285223C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,46544
	ctx.r9.u64 = ctx.r10.u64 | 46544;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x82852268
	if (ctx.cr6.eq) goto loc_82852268;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r10,56796
	ctx.r9.u64 = ctx.r10.u64 | 56796;
	// lfsx f13,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82852268:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,46548
	ctx.r9.u64 = ctx.r10.u64 | 46548;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x82852294
	if (ctx.cr6.eq) goto loc_82852294;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r10,56800
	ctx.r9.u64 = ctx.r10.u64 | 56800;
	// lfsx f13,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82852294:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,46552
	ctx.r9.u64 = ctx.r10.u64 | 46552;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,-2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -2, ctx.xer);
	// beq cr6,0x828522c0
	if (ctx.cr6.eq) goto loc_828522C0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r10,56804
	ctx.r9.u64 = ctx.r10.u64 | 56804;
	// lfsx f13,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_828522C0:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-30252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30252);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f1,f12,f13,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x82bf01f8
	ctx.lr = 0x828522DC;
	sub_82BF01F8(ctx, base);
loc_828522DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828522F0"))) PPC_WEAK_FUNC(sub_828522F0);
PPC_FUNC_IMPL(__imp__sub_828522F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x828522F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// addis r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 65536;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,-21640
	ctx.r29.s64 = ctx.r29.s64 + -21640;
loc_8285232C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x8285235c
	if (ctx.cr6.eq) goto loc_8285235C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82852354
	if (ctx.cr6.eq) goto loc_82852354;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x8285234c
	if (ctx.cr6.eq) goto loc_8285234C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82852360
	goto loc_82852360;
loc_8285234C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82852360
	goto loc_82852360;
loc_82852354:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82852360
	goto loc_82852360;
loc_8285235C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82852360:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285238c
	if (ctx.cr6.eq) goto loc_8285238C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82852384
	if (ctx.cr6.eq) goto loc_82852384;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82852390
	if (!ctx.cr6.eq) goto loc_82852390;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82852390
	goto loc_82852390;
loc_82852384:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82852390
	goto loc_82852390;
loc_8285238C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82852390:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828523a8
	if (!ctx.cr6.eq) goto loc_828523A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82851ed8
	ctx.lr = 0x828523A0;
	sub_82851ED8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_828523A8:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x8285232c
	if (ctx.cr6.lt) goto loc_8285232C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828523C0"))) PPC_WEAK_FUNC(sub_828523C0);
PPC_FUNC_IMPL(__imp__sub_828523C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x828523C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addi r29,r11,556
	ctx.r29.s64 = ctx.r11.s64 + 556;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_828523FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82852430
	if (ctx.cr6.eq) goto loc_82852430;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82852428
	if (ctx.cr6.eq) goto loc_82852428;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82852420
	if (ctx.cr6.eq) goto loc_82852420;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82852434
	goto loc_82852434;
loc_82852420:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82852434
	goto loc_82852434;
loc_82852428:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82852434
	goto loc_82852434;
loc_82852430:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82852434:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82852464
	if (ctx.cr6.eq) goto loc_82852464;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8285245c
	if (ctx.cr6.eq) goto loc_8285245C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82852454
	if (ctx.cr6.eq) goto loc_82852454;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82852468
	goto loc_82852468;
loc_82852454:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82852468
	goto loc_82852468;
loc_8285245C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82852468
	goto loc_82852468;
loc_82852464:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82852468:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828524ac
	if (!ctx.cr6.eq) goto loc_828524AC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82852498
	if (ctx.cr6.eq) goto loc_82852498;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8285249c
	if (ctx.cr6.eq) goto loc_8285249C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82852490
	if (ctx.cr6.eq) goto loc_82852490;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x8285249c
	goto loc_8285249C;
loc_82852490:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8285249c
	goto loc_8285249C;
loc_82852498:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_8285249C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8281b580
	ctx.lr = 0x828524A4;
	sub_8281B580(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_828524AC:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x828523fc
	if (!ctx.cr0.lt) goto loc_828523FC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828524C0"))) PPC_WEAK_FUNC(sub_828524C0);
PPC_FUNC_IMPL(__imp__sub_828524C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// blt cr6,0x8285258c
	if (ctx.cr6.lt) goto loc_8285258C;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bge cr6,0x8285258c
	if (!ctx.cr6.lt) goto loc_8285258C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mulli r10,r6,208
	ctx.r10.s64 = ctx.r6.s64 * 208;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f12,-18644(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -18644);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x8285258c
	if (!ctx.cr6.gt) goto loc_8285258C;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82852560
	if (ctx.cr6.gt) goto loc_82852560;
	// lfs f13,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82852554
	if (ctx.cr6.gt) goto loc_82852554;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f13,-30648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30648);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8285258c
	if (!ctx.cr6.lt) goto loc_8285258C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82852554:
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82852560:
	// lfs f0,-4012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82852588
	if (ctx.cr6.gt) goto loc_82852588;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-30648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8285258c
	if (!ctx.cr6.lt) goto loc_8285258C;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82852588:
	// li r9,2
	ctx.r9.s64 = 2;
loc_8285258C:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82852594"))) PPC_WEAK_FUNC(sub_82852594);
PPC_FUNC_IMPL(__imp__sub_82852594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82852598"))) PPC_WEAK_FUNC(sub_82852598);
PPC_FUNC_IMPL(__imp__sub_82852598) {
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
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r3,13188(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828525fc
	if (ctx.cr6.eq) goto loc_828525FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828525f4
	if (ctx.cr6.eq) goto loc_828525F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828525ec
	if (ctx.cr6.eq) goto loc_828525EC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82852600
	goto loc_82852600;
loc_828525EC:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82852600
	goto loc_82852600;
loc_828525F4:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82852600
	goto loc_82852600;
loc_828525FC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82852600:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8285263c
	if (ctx.cr6.eq) goto loc_8285263C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82852630
	if (ctx.cr6.eq) goto loc_82852630;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82852628
	if (ctx.cr6.eq) goto loc_82852628;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82852634
	if (!ctx.cr6.eq) goto loc_82852634;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82852634
	goto loc_82852634;
loc_82852628:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82852634
	goto loc_82852634;
loc_82852630:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82852634:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x828523c0
	ctx.lr = 0x8285263C;
	sub_828523C0(ctx, base);
loc_8285263C:
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

__attribute__((alias("__imp__sub_82852650"))) PPC_WEAK_FUNC(sub_82852650);
PPC_FUNC_IMPL(__imp__sub_82852650) {
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
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x828526b8
	if (ctx.cr6.eq) goto loc_828526B8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828526b0
	if (ctx.cr6.eq) goto loc_828526B0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828526a8
	if (ctx.cr6.eq) goto loc_828526A8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x828526bc
	goto loc_828526BC;
loc_828526A8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828526bc
	goto loc_828526BC;
loc_828526B0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x828526bc
	goto loc_828526BC;
loc_828526B8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_828526BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285271c
	if (ctx.cr6.eq) goto loc_8285271C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828526ec
	if (ctx.cr6.eq) goto loc_828526EC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828526f0
	if (ctx.cr6.eq) goto loc_828526F0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828526e4
	if (ctx.cr6.eq) goto loc_828526E4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x828526f0
	goto loc_828526F0;
loc_828526E4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x828526f0
	goto loc_828526F0;
loc_828526EC:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_828526F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8281bb00
	ctx.lr = 0x828526F8;
	sub_8281BB00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8285271c
	if (ctx.cr6.eq) goto loc_8285271C;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r9.u32);
loc_8285271C:
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

__attribute__((alias("__imp__sub_82852734"))) PPC_WEAK_FUNC(sub_82852734);
PPC_FUNC_IMPL(__imp__sub_82852734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82852738"))) PPC_WEAK_FUNC(sub_82852738);
PPC_FUNC_IMPL(__imp__sub_82852738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82852740;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r31,-29532(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r28,48(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f0,664(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x828527cc
	if (ctx.cr6.eq) goto loc_828527CC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828527c4
	if (ctx.cr6.eq) goto loc_828527C4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x828527cc
	if (!ctx.cr6.eq) goto loc_828527CC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828527d0
	goto loc_828527D0;
loc_828527C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828527d0
	goto loc_828527D0;
loc_828527CC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_828527D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82852c10
	if (ctx.cr6.eq) goto loc_82852C10;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852800
	if (ctx.cr6.eq) goto loc_82852800;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828527f8
	if (ctx.cr6.eq) goto loc_828527F8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852800
	if (!ctx.cr6.eq) goto loc_82852800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82852804
	goto loc_82852804;
loc_828527F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82852804
	goto loc_82852804;
loc_82852800:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82852804:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8283d360
	ctx.lr = 0x82852810;
	sub_8283D360(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852c0c
	if (!ctx.cr6.eq) goto loc_82852C0C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852844
	if (ctx.cr6.eq) goto loc_82852844;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285283c
	if (ctx.cr6.eq) goto loc_8285283C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852844
	if (!ctx.cr6.eq) goto loc_82852844;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82852848
	goto loc_82852848;
loc_8285283C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82852848
	goto loc_82852848;
loc_82852844:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82852848:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8283d360
	ctx.lr = 0x82852854;
	sub_8283D360(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852bfc
	if (!ctx.cr6.eq) goto loc_82852BFC;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852888
	if (ctx.cr6.eq) goto loc_82852888;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82852880
	if (ctx.cr6.eq) goto loc_82852880;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852888
	if (!ctx.cr6.eq) goto loc_82852888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8285288c
	goto loc_8285288C;
loc_82852880:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8285288c
	goto loc_8285288C;
loc_82852888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8285288C:
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8283d360
	ctx.lr = 0x82852898;
	sub_8283D360(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852bec
	if (!ctx.cr6.eq) goto loc_82852BEC;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828528cc
	if (ctx.cr6.eq) goto loc_828528CC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828528c4
	if (ctx.cr6.eq) goto loc_828528C4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x828528cc
	if (!ctx.cr6.eq) goto loc_828528CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828528d0
	goto loc_828528D0;
loc_828528C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828528d0
	goto loc_828528D0;
loc_828528CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828528D0:
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x8283d360
	ctx.lr = 0x828528DC;
	sub_8283D360(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852bdc
	if (!ctx.cr6.eq) goto loc_82852BDC;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852910
	if (ctx.cr6.eq) goto loc_82852910;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82852908
	if (ctx.cr6.eq) goto loc_82852908;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852910
	if (!ctx.cr6.eq) goto loc_82852910;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82852914
	goto loc_82852914;
loc_82852908:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82852914
	goto loc_82852914;
loc_82852910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82852914:
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8283d360
	ctx.lr = 0x82852920;
	sub_8283D360(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852bcc
	if (!ctx.cr6.eq) goto loc_82852BCC;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852954
	if (ctx.cr6.eq) goto loc_82852954;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8285294c
	if (ctx.cr6.eq) goto loc_8285294C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852954
	if (!ctx.cr6.eq) goto loc_82852954;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82852958
	goto loc_82852958;
loc_8285294C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82852958
	goto loc_82852958;
loc_82852954:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82852958:
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x8283d360
	ctx.lr = 0x82852964;
	sub_8283D360(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852bbc
	if (!ctx.cr6.eq) goto loc_82852BBC;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852998
	if (ctx.cr6.eq) goto loc_82852998;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82852990
	if (ctx.cr6.eq) goto loc_82852990;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852998
	if (!ctx.cr6.eq) goto loc_82852998;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8285299c
	goto loc_8285299C;
loc_82852990:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8285299c
	goto loc_8285299C;
loc_82852998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8285299C:
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8283d360
	ctx.lr = 0x828529A8;
	sub_8283D360(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852bac
	if (!ctx.cr6.eq) goto loc_82852BAC;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828529dc
	if (ctx.cr6.eq) goto loc_828529DC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828529d4
	if (ctx.cr6.eq) goto loc_828529D4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x828529dc
	if (!ctx.cr6.eq) goto loc_828529DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828529e0
	goto loc_828529E0;
loc_828529D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828529e0
	goto loc_828529E0;
loc_828529DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828529E0:
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x8283d360
	ctx.lr = 0x828529EC;
	sub_8283D360(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852b9c
	if (!ctx.cr6.eq) goto loc_82852B9C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852a20
	if (ctx.cr6.eq) goto loc_82852A20;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82852a18
	if (ctx.cr6.eq) goto loc_82852A18;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852a20
	if (!ctx.cr6.eq) goto loc_82852A20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82852a24
	goto loc_82852A24;
loc_82852A18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82852a24
	goto loc_82852A24;
loc_82852A20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82852A24:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8283d360
	ctx.lr = 0x82852A30;
	sub_8283D360(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852b8c
	if (!ctx.cr6.eq) goto loc_82852B8C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852a64
	if (ctx.cr6.eq) goto loc_82852A64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82852a5c
	if (ctx.cr6.eq) goto loc_82852A5C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852a64
	if (!ctx.cr6.eq) goto loc_82852A64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82852a68
	goto loc_82852A68;
loc_82852A5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82852a68
	goto loc_82852A68;
loc_82852A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82852A68:
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x8283d360
	ctx.lr = 0x82852A74;
	sub_8283D360(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852b7c
	if (!ctx.cr6.eq) goto loc_82852B7C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852aa8
	if (ctx.cr6.eq) goto loc_82852AA8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82852aa0
	if (ctx.cr6.eq) goto loc_82852AA0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852aa8
	if (!ctx.cr6.eq) goto loc_82852AA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82852aac
	goto loc_82852AAC;
loc_82852AA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82852aac
	goto loc_82852AAC;
loc_82852AA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82852AAC:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x8283d360
	ctx.lr = 0x82852AB8;
	sub_8283D360(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852b6c
	if (!ctx.cr6.eq) goto loc_82852B6C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852aec
	if (ctx.cr6.eq) goto loc_82852AEC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82852ae4
	if (ctx.cr6.eq) goto loc_82852AE4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852aec
	if (!ctx.cr6.eq) goto loc_82852AEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82852af0
	goto loc_82852AF0;
loc_82852AE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82852af0
	goto loc_82852AF0;
loc_82852AEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82852AF0:
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x8283d360
	ctx.lr = 0x82852AFC;
	sub_8283D360(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852b5c
	if (!ctx.cr6.eq) goto loc_82852B5C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852b30
	if (ctx.cr6.eq) goto loc_82852B30;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82852b28
	if (ctx.cr6.eq) goto loc_82852B28;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852b30
	if (!ctx.cr6.eq) goto loc_82852B30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82852b34
	goto loc_82852B34;
loc_82852B28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82852b34
	goto loc_82852B34;
loc_82852B30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82852B34:
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8283d360
	ctx.lr = 0x82852B40;
	sub_8283D360(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82852c10
	if (ctx.cr6.eq) goto loc_82852C10;
	// lfs f0,672(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 672);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852B5C:
	// lfs f0,1232(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852B6C:
	// lfs f0,1244(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852B7C:
	// lfs f0,1248(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852B8C:
	// lfs f0,1216(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852B9C:
	// lfs f0,668(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852BAC:
	// lfs f0,52(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852BBC:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852BCC:
	// lfs f0,1212(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852BDC:
	// lfs f0,1228(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852BEC:
	// lfs f0,1208(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852BFC:
	// lfs f0,680(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 680);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82852C0C:
	// lfs f0,684(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
loc_82852C10:
	// stfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82852C1C"))) PPC_WEAK_FUNC(sub_82852C1C);
PPC_FUNC_IMPL(__imp__sub_82852C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82852C20"))) PPC_WEAK_FUNC(sub_82852C20);
PPC_FUNC_IMPL(__imp__sub_82852C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82852c50
	if (ctx.cr6.eq) goto loc_82852C50;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82852c4c
	if (ctx.cr6.eq) goto loc_82852C4C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82852c50
	if (!ctx.cr6.eq) goto loc_82852C50;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82852c50
	goto loc_82852C50;
loc_82852C4C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82852C50:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,48(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f0,1100(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1100);
	ctx.f0.f64 = double(temp.f32);
loc_82852C74:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82852c9c
	if (!ctx.cr6.gt) goto loc_82852C9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82852c74
	if (ctx.cr6.lt) goto loc_82852C74;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82852C9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82852ca8
	if (!ctx.cr6.lt) goto loc_82852CA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82852CA8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82852CB0"))) PPC_WEAK_FUNC(sub_82852CB0);
PPC_FUNC_IMPL(__imp__sub_82852CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,1196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1196, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82852CC8"))) PPC_WEAK_FUNC(sub_82852CC8);
PPC_FUNC_IMPL(__imp__sub_82852CC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82852CD4"))) PPC_WEAK_FUNC(sub_82852CD4);
PPC_FUNC_IMPL(__imp__sub_82852CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82852CD8"))) PPC_WEAK_FUNC(sub_82852CD8);
PPC_FUNC_IMPL(__imp__sub_82852CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r9,48(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stw r8,904(r6)
	PPC_STORE_U32(ctx.r6.u32 + 904, ctx.r8.u32);
	// stw r8,2532(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2532, ctx.r8.u32);
	// stw r8,3124(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3124, ctx.r8.u32);
	// stw r8,1200(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1200, ctx.r8.u32);
	// lwz r5,904(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,2540(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2540);
	// stw r8,904(r9)
	PPC_STORE_U32(ctx.r9.u32 + 904, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82852d48
	if (ctx.cr6.eq) goto loc_82852D48;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82852D24:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82852d24
	if (!ctx.cr6.eq) goto loc_82852D24;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82852d54
	if (!ctx.cr6.eq) goto loc_82852D54;
loc_82852D48:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r11,13434
	ctx.r10.s64 = ctx.r11.s64 + 13434;
	// stw r10,2540(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2540, ctx.r10.u32);
loc_82852D54:
	// stw r8,3124(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3124, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82852D5C"))) PPC_WEAK_FUNC(sub_82852D5C);
PPC_FUNC_IMPL(__imp__sub_82852D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82852D60"))) PPC_WEAK_FUNC(sub_82852D60);
PPC_FUNC_IMPL(__imp__sub_82852D60) {
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
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r31,13188(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82852da0
	if (!ctx.cr6.gt) goto loc_82852DA0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulli r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 * 52;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x82852db0
	goto loc_82852DB0;
loc_82852DA0:
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
loc_82852DB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82219130
	ctx.lr = 0x82852DBC;
	sub_82219130(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82852df0
	if (ctx.cr6.eq) goto loc_82852DF0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82852de0
	if (ctx.cr6.eq) goto loc_82852DE0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82852df8
	if (!ctx.cr6.eq) goto loc_82852DF8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82852df8
	goto loc_82852DF8;
loc_82852DE0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82852df8
	goto loc_82852DF8;
loc_82852DF0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82852DF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82852e28
	if (ctx.cr6.eq) goto loc_82852E28;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,2300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2300, ctx.xer);
	// bne cr6,0x82852e28
	if (!ctx.cr6.eq) goto loc_82852E28;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82852e24
	if (!ctx.cr6.eq) goto loc_82852E24;
	// bl 0x8281c890
	ctx.lr = 0x82852E20;
	sub_8281C890(ctx, base);
	// b 0x82852e28
	goto loc_82852E28;
loc_82852E24:
	// bl 0x8281c938
	ctx.lr = 0x82852E28;
	sub_8281C938(ctx, base);
loc_82852E28:
	// li r3,1000
	ctx.r3.s64 = 1000;
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

__attribute__((alias("__imp__sub_82852E40"))) PPC_WEAK_FUNC(sub_82852E40);
PPC_FUNC_IMPL(__imp__sub_82852E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82852E48;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r5,24
	ctx.r9.s64 = ctx.r5.s64 + 24;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwzx r31,r6,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82852ea4
	if (ctx.cr6.eq) goto loc_82852EA4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82852e9c
	if (ctx.cr6.eq) goto loc_82852E9C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82852e94
	if (ctx.cr6.eq) goto loc_82852E94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82852ea8
	goto loc_82852EA8;
loc_82852E94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82852ea8
	goto loc_82852EA8;
loc_82852E9C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82852ea8
	goto loc_82852EA8;
loc_82852EA4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82852EA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804270
	ctx.lr = 0x82852EB0;
	sub_82804270(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// beq cr6,0x82852ef0
	if (ctx.cr6.eq) goto loc_82852EF0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82852ee8
	if (ctx.cr6.eq) goto loc_82852EE8;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82852ef4
	if (!ctx.cr6.eq) goto loc_82852EF4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x82852ef4
	goto loc_82852EF4;
loc_82852EE8:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82852ef4
	goto loc_82852EF4;
loc_82852EF0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82852EF4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82852f10
	if (ctx.cr6.eq) goto loc_82852F10;
	// lfs f13,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82852f1c
	goto loc_82852F1C;
loc_82852F10:
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
loc_82852F1C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,-4476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// stw r8,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82852F60"))) PPC_WEAK_FUNC(sub_82852F60);
PPC_FUNC_IMPL(__imp__sub_82852F60) {
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
	// addi r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 + 24;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82852fbc
	if (ctx.cr6.eq) goto loc_82852FBC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82852fac
	if (ctx.cr6.eq) goto loc_82852FAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82852fc4
	if (!ctx.cr6.eq) goto loc_82852FC4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82852fc4
	goto loc_82852FC4;
loc_82852FAC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82852fc4
	goto loc_82852FC4;
loc_82852FBC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82852FC4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804180
	ctx.lr = 0x82852FD0;
	sub_82804180(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82853014"))) PPC_WEAK_FUNC(sub_82853014);
PPC_FUNC_IMPL(__imp__sub_82853014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853018"))) PPC_WEAK_FUNC(sub_82853018);
PPC_FUNC_IMPL(__imp__sub_82853018) {
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
	// addi r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 + 24;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82853074
	if (ctx.cr6.eq) goto loc_82853074;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82853064
	if (ctx.cr6.eq) goto loc_82853064;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8285307c
	if (!ctx.cr6.eq) goto loc_8285307C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285307c
	goto loc_8285307C;
loc_82853064:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8285307c
	goto loc_8285307C;
loc_82853074:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285307C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82853088;
	sub_82804410(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_828530CC"))) PPC_WEAK_FUNC(sub_828530CC);
PPC_FUNC_IMPL(__imp__sub_828530CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828530D0"))) PPC_WEAK_FUNC(sub_828530D0);
PPC_FUNC_IMPL(__imp__sub_828530D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x828530D8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r24,13192(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r23,13188(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r22,13180(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r25,12480(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x82853134;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r25,4132
	ctx.r4.s64 = ctx.r25.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82853140;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x8285314C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82853160;
	sub_828097A0(ctx, base);
	// lwz r11,15828(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15828);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828531b8
	if (ctx.cr6.eq) goto loc_828531B8;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x828531b8
	if (!ctx.cr6.eq) goto loc_828531B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfea70
	ctx.lr = 0x82853184;
	sub_82BFEA70(ctx, base);
	// stw r3,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bfea70
	ctx.lr = 0x82853190;
	sub_82BFEA70(ctx, base);
	// stw r3,2920(r20)
	PPC_STORE_U32(ctx.r20.u32 + 2920, ctx.r3.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82bfea70
	ctx.lr = 0x8285319C;
	sub_82BFEA70(ctx, base);
	// stw r3,2648(r20)
	PPC_STORE_U32(ctx.r20.u32 + 2648, ctx.r3.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82bfea70
	ctx.lr = 0x828531A8;
	sub_82BFEA70(ctx, base);
	// stw r3,24(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24, ctx.r3.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82bfea70
	ctx.lr = 0x828531B4;
	sub_82BFEA70(ctx, base);
	// stw r3,2652(r20)
	PPC_STORE_U32(ctx.r20.u32 + 2652, ctx.r3.u32);
loc_828531B8:
	// stw r24,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828531D0"))) PPC_WEAK_FUNC(sub_828531D0);
PPC_FUNC_IMPL(__imp__sub_828531D0) {
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
	// lwz r3,13188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// bl 0x8281d7c8
	ctx.lr = 0x828531E8;
	sub_8281D7C8(ctx, base);
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

__attribute__((alias("__imp__sub_828531FC"))) PPC_WEAK_FUNC(sub_828531FC);
PPC_FUNC_IMPL(__imp__sub_828531FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853200"))) PPC_WEAK_FUNC(sub_82853200);
PPC_FUNC_IMPL(__imp__sub_82853200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,48(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// beq cr6,0x8285324c
	if (ctx.cr6.eq) goto loc_8285324C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82853244
	if (ctx.cr6.eq) goto loc_82853244;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8285323c
	if (ctx.cr6.eq) goto loc_8285323C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82853250
	goto loc_82853250;
loc_8285323C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82853250
	goto loc_82853250;
loc_82853244:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82853250
	goto loc_82853250;
loc_8285324C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82853250:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8285328c
	if (ctx.cr6.eq) goto loc_8285328C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82853284
	if (ctx.cr6.eq) goto loc_82853284;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8285327c
	if (ctx.cr6.eq) goto loc_8285327C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82853290
	goto loc_82853290;
loc_8285327C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82853290
	goto loc_82853290;
loc_82853284:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82853290
	goto loc_82853290;
loc_8285328C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82853290:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82853328
	if (ctx.cr6.eq) goto loc_82853328;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828532c8
	if (ctx.cr6.eq) goto loc_828532C8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828532c0
	if (ctx.cr6.eq) goto loc_828532C0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828532b8
	if (ctx.cr6.eq) goto loc_828532B8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x828532cc
	goto loc_828532CC;
loc_828532B8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828532cc
	goto loc_828532CC;
loc_828532C0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828532cc
	goto loc_828532CC;
loc_828532C8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828532CC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// beq cr6,0x8285330c
	if (ctx.cr6.eq) goto loc_8285330C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82853304
	if (ctx.cr6.eq) goto loc_82853304;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828532fc
	if (ctx.cr6.eq) goto loc_828532FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82853310
	goto loc_82853310;
loc_828532FC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82853310
	goto loc_82853310;
loc_82853304:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82853310
	goto loc_82853310;
loc_8285330C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82853310:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82853328:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82853330"))) PPC_WEAK_FUNC(sub_82853330);
PPC_FUNC_IMPL(__imp__sub_82853330) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x8285336c
	if (ctx.cr6.eq) goto loc_8285336C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8281eaf0
	ctx.lr = 0x82853360;
	sub_8281EAF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82853374
	if (!ctx.cr6.eq) goto loc_82853374;
loc_8285336C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8285337c
	goto loc_8285337C;
loc_82853374:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8285337C:
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

__attribute__((alias("__imp__sub_82853394"))) PPC_WEAK_FUNC(sub_82853394);
PPC_FUNC_IMPL(__imp__sub_82853394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853398"))) PPC_WEAK_FUNC(sub_82853398);
PPC_FUNC_IMPL(__imp__sub_82853398) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x828533d0
	if (ctx.cr6.eq) goto loc_828533D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_828533D0:
	// addi r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 + 552;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82853330
	ctx.lr = 0x828533E4;
	sub_82853330(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82853400"))) PPC_WEAK_FUNC(sub_82853400);
PPC_FUNC_IMPL(__imp__sub_82853400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82853408;
	__savegprlr_23(ctx, base);
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r10,3468(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3468);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82853474
	if (!ctx.cr6.eq) goto loc_82853474;
	// lwz r11,9104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9104);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82853474
	if (!ctx.cr6.eq) goto loc_82853474;
	// lwz r3,1968(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1968);
	// bl 0x82bf26d0
	ctx.lr = 0x82853468;
	sub_82BF26D0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1968(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1968, ctx.r11.u32);
	// stw r11,1776(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1776, ctx.r11.u32);
loc_82853474:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285348C"))) PPC_WEAK_FUNC(sub_8285348C);
PPC_FUNC_IMPL(__imp__sub_8285348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853490"))) PPC_WEAK_FUNC(sub_82853490);
PPC_FUNC_IMPL(__imp__sub_82853490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82853498;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,9692(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9692);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828534f4
	if (ctx.cr6.eq) goto loc_828534F4;
	// bl 0x82bf2028
	ctx.lr = 0x828534EC;
	sub_82BF2028(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,9692(r27)
	PPC_STORE_U32(ctx.r27.u32 + 9692, ctx.r11.u32);
loc_828534F4:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285350C"))) PPC_WEAK_FUNC(sub_8285350C);
PPC_FUNC_IMPL(__imp__sub_8285350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853510"))) PPC_WEAK_FUNC(sub_82853510);
PPC_FUNC_IMPL(__imp__sub_82853510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82853518;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,5004(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5004);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82853574
	if (ctx.cr6.eq) goto loc_82853574;
	// bl 0x82bf2028
	ctx.lr = 0x8285356C;
	sub_82BF2028(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,5004(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5004, ctx.r11.u32);
loc_82853574:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285358C"))) PPC_WEAK_FUNC(sub_8285358C);
PPC_FUNC_IMPL(__imp__sub_8285358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853590"))) PPC_WEAK_FUNC(sub_82853590);
PPC_FUNC_IMPL(__imp__sub_82853590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82853598;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// li r26,4
	ctx.r26.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r21,-1
	ctx.r21.s64 = -1;
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// addi r27,r10,6984
	ctx.r27.s64 = ctx.r10.s64 + 6984;
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
loc_828535E4:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828535f8
	if (ctx.cr6.eq) goto loc_828535F8;
	// bl 0x82bf2028
	ctx.lr = 0x828535F4;
	sub_82BF2028(ctx, base);
	// stw r21,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r21.u32);
loc_828535F8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x828535e4
	if (!ctx.cr0.eq) goto loc_828535E4;
	// stw r25,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8285361C"))) PPC_WEAK_FUNC(sub_8285361C);
PPC_FUNC_IMPL(__imp__sub_8285361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853620"))) PPC_WEAK_FUNC(sub_82853620);
PPC_FUNC_IMPL(__imp__sub_82853620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82853628;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r4,484
	ctx.r9.s64 = ctx.r4.s64 + 484;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// stw r11,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r11.u32);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r23,13180(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r11,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r11.u32);
	// lwz r26,48(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8285368c
	if (ctx.cr6.eq) goto loc_8285368C;
	// bl 0x82bf2028
	ctx.lr = 0x82853684;
	sub_82BF2028(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stwx r11,r27,r26
	PPC_STORE_U32(ctx.r27.u32 + ctx.r26.u32, ctx.r11.u32);
loc_8285368C:
	// stw r25,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828536A4"))) PPC_WEAK_FUNC(sub_828536A4);
PPC_FUNC_IMPL(__imp__sub_828536A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828536A8"))) PPC_WEAK_FUNC(sub_828536A8);
PPC_FUNC_IMPL(__imp__sub_828536A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828536B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,13192(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r4,5004(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5004);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82853744
	if (ctx.cr6.eq) goto loc_82853744;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bne cr6,0x82853728
	if (!ctx.cr6.eq) goto loc_82853728;
	// bl 0x82becee0
	ctx.lr = 0x82853714;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82853744
	if (ctx.cr6.eq) goto loc_82853744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x8285373c
	goto loc_8285373C;
loc_82853728:
	// bl 0x82becee0
	ctx.lr = 0x8285372C;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82853744
	if (ctx.cr6.eq) goto loc_82853744;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_8285373C:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82853744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82853744:
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

__attribute__((alias("__imp__sub_8285375C"))) PPC_WEAK_FUNC(sub_8285375C);
PPC_FUNC_IMPL(__imp__sub_8285375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853760"))) PPC_WEAK_FUNC(sub_82853760);
PPC_FUNC_IMPL(__imp__sub_82853760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82853768;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,13192(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r26,13188(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r25,13180(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r4,9692(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9692);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x828537fc
	if (ctx.cr6.eq) goto loc_828537FC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bne cr6,0x828537e0
	if (!ctx.cr6.eq) goto loc_828537E0;
	// bl 0x82becee0
	ctx.lr = 0x828537CC;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828537fc
	if (ctx.cr6.eq) goto loc_828537FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x828537f4
	goto loc_828537F4;
loc_828537E0:
	// bl 0x82becee0
	ctx.lr = 0x828537E4;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828537fc
	if (ctx.cr6.eq) goto loc_828537FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_828537F4:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828537FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828537FC:
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

__attribute__((alias("__imp__sub_82853814"))) PPC_WEAK_FUNC(sub_82853814);
PPC_FUNC_IMPL(__imp__sub_82853814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853818"))) PPC_WEAK_FUNC(sub_82853818);
PPC_FUNC_IMPL(__imp__sub_82853818) {
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
	// lwz r3,13188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// bl 0x82853400
	ctx.lr = 0x82853830;
	sub_82853400(ctx, base);
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

__attribute__((alias("__imp__sub_82853844"))) PPC_WEAK_FUNC(sub_82853844);
PPC_FUNC_IMPL(__imp__sub_82853844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853848"))) PPC_WEAK_FUNC(sub_82853848);
PPC_FUNC_IMPL(__imp__sub_82853848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82853850;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,13180(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// lwz r9,1204(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1204);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82853898
	if (ctx.cr6.eq) goto loc_82853898;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82853898:
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// bne cr6,0x828538dc
	if (!ctx.cr6.eq) goto loc_828538DC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r4,1204(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1204);
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x828538BC;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828538cc
	if (ctx.cr6.eq) goto loc_828538CC;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x828538CC;
	sub_827CC4E0(ctx, base);
loc_828538CC:
	// lwz r3,1204(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1204);
	// bl 0x82bf2318
	ctx.lr = 0x828538D4;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1204(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1204, ctx.r11.u32);
loc_828538DC:
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828538F4"))) PPC_WEAK_FUNC(sub_828538F4);
PPC_FUNC_IMPL(__imp__sub_828538F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828538F8"))) PPC_WEAK_FUNC(sub_828538F8);
PPC_FUNC_IMPL(__imp__sub_828538F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82853900;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r23,13180(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r4,7300(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7300);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8285399c
	if (ctx.cr6.eq) goto loc_8285399C;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r7,13416(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// bl 0x82be44a0
	ctx.lr = 0x8285395C;
	sub_82BE44A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82853978
	if (ctx.cr6.eq) goto loc_82853978;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82853974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,13416(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13416);
loc_82853978:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,2876(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2876);
	// bl 0x82becee0
	ctx.lr = 0x82853984;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8285399c
	if (ctx.cr6.eq) goto loc_8285399C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8285399C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8285399C:
	// stw r25,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828539B4"))) PPC_WEAK_FUNC(sub_828539B4);
PPC_FUNC_IMPL(__imp__sub_828539B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828539B8"))) PPC_WEAK_FUNC(sub_828539B8);
PPC_FUNC_IMPL(__imp__sub_828539B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828539C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r25,13188(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13180(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r23,13184(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r11.u32);
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r10.u32);
	// lwz r3,7300(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7300);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82853a58
	if (ctx.cr6.eq) goto loc_82853A58;
	// bl 0x82bf26d0
	ctx.lr = 0x82853A14;
	sub_82BF26D0(ctx, base);
	// lwz r11,13188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,7300(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7300, ctx.r10.u32);
	// beq cr6,0x82853a40
	if (ctx.cr6.eq) goto loc_82853A40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82853a48
	if (!ctx.cr6.eq) goto loc_82853A48;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82853a48
	goto loc_82853A48;
loc_82853A40:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82853A48:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r10.u32);
loc_82853A58:
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82853A70"))) PPC_WEAK_FUNC(sub_82853A70);
PPC_FUNC_IMPL(__imp__sub_82853A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82853A78;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r26,13180(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// lwz r9,5324(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5324);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82853ac0
	if (ctx.cr6.eq) goto loc_82853AC0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82853AC0:
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// bne cr6,0x82853b04
	if (!ctx.cr6.eq) goto loc_82853B04;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r4,5324(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5324);
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82853AE4;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82853af4
	if (ctx.cr6.eq) goto loc_82853AF4;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82853AF4;
	sub_827CC4E0(ctx, base);
loc_82853AF4:
	// lwz r3,5324(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5324);
	// bl 0x82bf2318
	ctx.lr = 0x82853AFC;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,5324(r27)
	PPC_STORE_U32(ctx.r27.u32 + 5324, ctx.r11.u32);
loc_82853B04:
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82853B1C"))) PPC_WEAK_FUNC(sub_82853B1C);
PPC_FUNC_IMPL(__imp__sub_82853B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853B20"))) PPC_WEAK_FUNC(sub_82853B20);
PPC_FUNC_IMPL(__imp__sub_82853B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,40
	ctx.r8.s64 = 40;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,4220
	ctx.r11.s64 = ctx.r11.s64 + 4220;
loc_82853B40:
	// lwz r6,1112(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82853b54
	if (!ctx.cr6.eq) goto loc_82853B54;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1112, ctx.r9.u32);
loc_82853B54:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82853b68
	if (!ctx.cr6.eq) goto loc_82853B68;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82853B68:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82853b40
	if (!ctx.cr0.eq) goto loc_82853B40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82853c04
	if (ctx.cr6.eq) goto loc_82853C04;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82853c04
	if (ctx.cr6.eq) goto loc_82853C04;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82853bec
	if (ctx.cr6.eq) goto loc_82853BEC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82853bcc
	if (ctx.cr6.eq) goto loc_82853BCC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82853bb4
	if (ctx.cr6.eq) goto loc_82853BB4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r9.u32);
	// blr 
	return;
loc_82853BB4:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r9.u32);
	// blr 
	return;
loc_82853BCC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r9.u32);
	// blr 
	return;
loc_82853BEC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r9.u32);
loc_82853C04:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82853C08"))) PPC_WEAK_FUNC(sub_82853C08);
PPC_FUNC_IMPL(__imp__sub_82853C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82853C10;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// lwz r25,13188(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r26,13192(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r24,13180(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13180);
	// lwz r23,13184(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// lwz r4,1792(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1792);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82853cc0
	if (ctx.cr6.eq) goto loc_82853CC0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becee0
	ctx.lr = 0x82853C68;
	sub_82BECEE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82853c78
	if (ctx.cr6.eq) goto loc_82853C78;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x827cc4e0
	ctx.lr = 0x82853C78;
	sub_827CC4E0(ctx, base);
loc_82853C78:
	// lwz r3,1792(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1792);
	// bl 0x82bf2318
	ctx.lr = 0x82853C80;
	sub_82BF2318(ctx, base);
	// lwz r11,13188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82853ca4
	if (ctx.cr6.eq) goto loc_82853CA4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82853cac
	if (!ctx.cr6.eq) goto loc_82853CAC;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82853cac
	goto loc_82853CAC;
loc_82853CA4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82853CAC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r10.u32);
loc_82853CC0:
	// stw r26,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82853CD8"))) PPC_WEAK_FUNC(sub_82853CD8);
PPC_FUNC_IMPL(__imp__sub_82853CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82853CE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,1412(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1412);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82853d44
	if (ctx.cr6.eq) goto loc_82853D44;
	// bl 0x82bf2028
	ctx.lr = 0x82853D34;
	sub_82BF2028(ctx, base);
	// lwz r3,1412(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1412);
	// bl 0x82bf2318
	ctx.lr = 0x82853D3C;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1412(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1412, ctx.r11.u32);
loc_82853D44:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// lfs f0,27476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1544(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 1544, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82853D68"))) PPC_WEAK_FUNC(sub_82853D68);
PPC_FUNC_IMPL(__imp__sub_82853D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82853D70;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r23,13192(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r22,13188(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// addi r26,r10,-15760
	ctx.r26.s64 = ctx.r10.s64 + -15760;
	// lwz r21,13180(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r20,13184(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r31.u32);
	// lwz r19,12480(r9)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12480);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c09bec
	ctx.lr = 0x82853DD0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r19,4132
	ctx.r4.s64 = ctx.r19.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5990
	ctx.lr = 0x82853DDC;
	sub_82BC5990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r26,28
	ctx.r3.s64 = ctx.r26.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x82853DE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r31,r11,15828
	ctx.r31.s64 = ctx.r11.s64 + 15828;
	// lwz r11,15828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15828);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x828097a0
	ctx.lr = 0x82853E00;
	sub_828097A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82853e1c
	if (ctx.cr6.eq) goto loc_82853E1C;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82853e24
	if (ctx.cr6.eq) goto loc_82853E24;
loc_82853E1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82853e5c
	goto loc_82853E5C;
loc_82853E24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r25,1452
	ctx.r5.s64 = ctx.r25.s64 + 1452;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82809be0
	ctx.lr = 0x82853E38;
	sub_82809BE0(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82bfea70
	ctx.lr = 0x82853E40;
	sub_82BFEA70(ctx, base);
	// stw r3,1248(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1248, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r25,2164
	ctx.r5.s64 = ctx.r25.s64 + 2164;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82809be0
	ctx.lr = 0x82853E58;
	sub_82809BE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82853E5C:
	// stw r22,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r22.u32);
	// stw r20,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r20.u32);
	// stw r21,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r21.u32);
	// stw r23,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r23.u32);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82853E78"))) PPC_WEAK_FUNC(sub_82853E78);
PPC_FUNC_IMPL(__imp__sub_82853E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82853E80;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,1668(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1668);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82853edc
	if (ctx.cr6.eq) goto loc_82853EDC;
	// bl 0x82bf2318
	ctx.lr = 0x82853ED4;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1668(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1668, ctx.r11.u32);
loc_82853EDC:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82853EF4"))) PPC_WEAK_FUNC(sub_82853EF4);
PPC_FUNC_IMPL(__imp__sub_82853EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82853EF8"))) PPC_WEAK_FUNC(sub_82853EF8);
PPC_FUNC_IMPL(__imp__sub_82853EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e8
	ctx.lr = 0x82853F00;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r30,-29532(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r24,13192(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r23,13188(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// lwz r22,13180(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r21,13184(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r25,4(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r31,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r31.u32);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82853f7c
	if (ctx.cr6.eq) goto loc_82853F7C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82853f74
	if (ctx.cr6.eq) goto loc_82853F74;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82853f7c
	if (!ctx.cr6.eq) goto loc_82853F7C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82853f80
	goto loc_82853F80;
loc_82853F74:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82853f80
	goto loc_82853F80;
loc_82853F7C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82853F80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8285404c
	if (ctx.cr6.eq) goto loc_8285404C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82853fb0
	if (ctx.cr6.eq) goto loc_82853FB0;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82853fa8
	if (ctx.cr6.eq) goto loc_82853FA8;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82853fb0
	if (!ctx.cr6.eq) goto loc_82853FB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82853fb4
	goto loc_82853FB4;
loc_82853FA8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82853fb4
	goto loc_82853FB4;
loc_82853FB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82853FB4:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82beb878
	ctx.lr = 0x82853FBC;
	sub_82BEB878(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82853fe4
	if (ctx.cr6.eq) goto loc_82853FE4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82853fdc
	if (ctx.cr6.eq) goto loc_82853FDC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82853fe8
	if (!ctx.cr6.eq) goto loc_82853FE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82853fe8
	goto loc_82853FE8;
loc_82853FDC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82853fe8
	goto loc_82853FE8;
loc_82853FE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82853FE8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x82853FF0;
	sub_82804410(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,-3896(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3896);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82bef8d8
	ctx.lr = 0x82854024;
	sub_82BEF8D8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f9,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lwz r3,1668(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1668);
	// lfs f0,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29484);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// bl 0x82bf1f38
	ctx.lr = 0x8285404C;
	sub_82BF1F38(ctx, base);
loc_8285404C:
	// stw r24,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r24.u32);
	// stw r22,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r22.u32);
	// stw r21,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r21.u32);
	// stw r23,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r23.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82854064"))) PPC_WEAK_FUNC(sub_82854064);
PPC_FUNC_IMPL(__imp__sub_82854064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82854068"))) PPC_WEAK_FUNC(sub_82854068);
PPC_FUNC_IMPL(__imp__sub_82854068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82854070;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lwz r26,13192(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
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
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,2132(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2132);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x828540cc
	if (ctx.cr6.eq) goto loc_828540CC;
	// bl 0x82bf2318
	ctx.lr = 0x828540C4;
	sub_82BF2318(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,2132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2132, ctx.r11.u32);
loc_828540CC:
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828540E4"))) PPC_WEAK_FUNC(sub_828540E4);
PPC_FUNC_IMPL(__imp__sub_828540E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828540E8"))) PPC_WEAK_FUNC(sub_828540E8);
PPC_FUNC_IMPL(__imp__sub_828540E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x82854128
	if (ctx.cr6.eq) goto loc_82854128;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82854120
	if (ctx.cr6.eq) goto loc_82854120;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82854118
	if (ctx.cr6.eq) goto loc_82854118;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8285412c
	goto loc_8285412C;
loc_82854118:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8285412c
	goto loc_8285412C;
loc_82854120:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8285412c
	goto loc_8285412C;
loc_82854128:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8285412C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r5,351
	ctx.r10.s64 = ctx.r5.s64 + 351;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfsx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// beq cr6,0x82854170
	if (ctx.cr6.eq) goto loc_82854170;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82854168
	if (ctx.cr6.eq) goto loc_82854168;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82854174
	if (!ctx.cr6.eq) goto loc_82854174;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82854174
	goto loc_82854174;
loc_82854168:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// b 0x82854174
	goto loc_82854174;
loc_82854170:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82854174:
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r5,275
	ctx.r8.s64 = ctx.r5.s64 + 275;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lwz r11,48(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lfsx f13,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfsx f11,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f12,f13,f0
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f10,r10,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r5,490
	ctx.r10.s64 = ctx.r5.s64 + 490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828541C8"))) PPC_WEAK_FUNC(sub_828541C8);
PPC_FUNC_IMPL(__imp__sub_828541C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82854200
	if (ctx.cr6.eq) goto loc_82854200;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828541f0
	if (ctx.cr6.eq) goto loc_828541F0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82854208
	if (!ctx.cr6.eq) goto loc_82854208;
	// b 0x82854208
	goto loc_82854208;
loc_828541F0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82854208
	goto loc_82854208;
loc_82854200:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82854208:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r8,3468
	ctx.r11.s64 = ctx.r8.s64 + 3468;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r9,672(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 672);
loc_82854220:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82854244
	if (ctx.cr6.eq) goto loc_82854244;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 30, ctx.xer);
	// blt cr6,0x82854220
	if (ctx.cr6.lt) goto loc_82854220;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82854244:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82854260
	if (ctx.cr6.eq) goto loc_82854260;
	// addi r11,r10,683
	ctx.r11.s64 = ctx.r10.s64 + 683;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x82854268
	if (!ctx.cr6.eq) goto loc_82854268;
loc_82854260:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82854268:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82854274"))) PPC_WEAK_FUNC(sub_82854274);
PPC_FUNC_IMPL(__imp__sub_82854274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82854278"))) PPC_WEAK_FUNC(sub_82854278);
PPC_FUNC_IMPL(__imp__sub_82854278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,3256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3256, ctx.r10.u32);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r4,1712(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1712, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828542A0"))) PPC_WEAK_FUNC(sub_828542A0);
PPC_FUNC_IMPL(__imp__sub_828542A0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828542cc
	if (ctx.cr6.eq) goto loc_828542CC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828542bc
	if (ctx.cr6.eq) goto loc_828542BC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828542d4
	if (!ctx.cr6.eq) goto loc_828542D4;
	// b 0x828542d4
	goto loc_828542D4;
loc_828542BC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828542d4
	goto loc_828542D4;
loc_828542CC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828542D4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,672(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 672);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828542EC"))) PPC_WEAK_FUNC(sub_828542EC);
PPC_FUNC_IMPL(__imp__sub_828542EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828542F0"))) PPC_WEAK_FUNC(sub_828542F0);
PPC_FUNC_IMPL(__imp__sub_828542F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828542F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r10.u32);
	// lwz r3,1696(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1696);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82854358
	if (!ctx.cr6.eq) goto loc_82854358;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x82854360
	goto loc_82854360;
loc_82854358:
	// bl 0x82bf23b8
	ctx.lr = 0x8285435C;
	sub_82BF23B8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_82854360:
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r26,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82854378"))) PPC_WEAK_FUNC(sub_82854378);
PPC_FUNC_IMPL(__imp__sub_82854378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82854380;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r25,13188(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// lwz r26,13192(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r24,13180(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r23,13184(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r11.u32);
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r10.u32);
	// lwz r3,3252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3252);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8285441c
	if (ctx.cr6.eq) goto loc_8285441C;
	// bl 0x82bf26d0
	ctx.lr = 0x828543D4;
	sub_82BF26D0(ctx, base);
	// lwz r11,13188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13188);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,3252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3252, ctx.r10.u32);
	// stw r10,1696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1696, ctx.r10.u32);
	// beq cr6,0x82854404
	if (ctx.cr6.eq) goto loc_82854404;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8285440c
	if (!ctx.cr6.eq) goto loc_8285440C;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8285440c
	goto loc_8285440C;
loc_82854404:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8285440C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 760, ctx.r10.u32);
loc_8285441C:
	// stw r26,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r26.u32);
	// stw r24,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r24.u32);
	// stw r23,13184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13184, ctx.r23.u32);
	// stw r25,13188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82854434"))) PPC_WEAK_FUNC(sub_82854434);
PPC_FUNC_IMPL(__imp__sub_82854434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82854438"))) PPC_WEAK_FUNC(sub_82854438);
PPC_FUNC_IMPL(__imp__sub_82854438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82854440;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82820148
	ctx.lr = 0x82854464;
	sub_82820148(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82854498
	if (ctx.cr6.eq) goto loc_82854498;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_82854498:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828544A4"))) PPC_WEAK_FUNC(sub_828544A4);
PPC_FUNC_IMPL(__imp__sub_828544A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828544A8"))) PPC_WEAK_FUNC(sub_828544A8);
PPC_FUNC_IMPL(__imp__sub_828544A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x828544B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r26,13180(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13184(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r5.u32);
	// stw r5,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r5.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x82854520
	if (ctx.cr6.eq) goto loc_82854520;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82854510
	if (ctx.cr6.eq) goto loc_82854510;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82854528
	if (!ctx.cr6.eq) goto loc_82854528;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82854528
	goto loc_82854528;
loc_82854510:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82854528
	goto loc_82854528;
loc_82854520:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r4,-29532(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82854528:
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r27,456(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 456);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82854568
	if (ctx.cr6.eq) goto loc_82854568;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x827c06b8
	ctx.lr = 0x82854554;
	sub_827C06B8(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82854568
	if (!ctx.cr6.gt) goto loc_82854568;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x828217c0
	ctx.lr = 0x82854568;
	sub_828217C0(ctx, base);
loc_82854568:
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r26,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r26.u32);
	// stw r23,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r23.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82854580"))) PPC_WEAK_FUNC(sub_82854580);
PPC_FUNC_IMPL(__imp__sub_82854580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d8
	ctx.lr = 0x82854588;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8221ad10
	ctx.lr = 0x82854590;
	__savefpr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// addi r30,r10,-29532
	ctx.r30.s64 = ctx.r10.s64 + -29532;
	// lwz r27,-29532(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r19,13180(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13180);
	// lwz r18,13192(r22)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13192);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r17,13188(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r16,13184(r25)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13184);
	// lwz r26,4(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r29.u32);
	// stw r29,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r29.u32);
	// stw r11,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8285461c
	if (ctx.cr6.eq) goto loc_8285461C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82854614
	if (ctx.cr6.eq) goto loc_82854614;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285460c
	if (ctx.cr6.eq) goto loc_8285460C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82854620
	goto loc_82854620;
loc_8285460C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82854620
	goto loc_82854620;
loc_82854614:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82854620
	goto loc_82854620;
loc_8285461C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82854620:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82854910
	if (ctx.cr6.eq) goto loc_82854910;
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// blt cr6,0x82854910
	if (ctx.cr6.lt) goto loc_82854910;
	// cmpwi cr6,r20,7
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 7, ctx.xer);
	// bge cr6,0x82854910
	if (!ctx.cr6.lt) goto loc_82854910;
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x82854910
	if (ctx.cr6.eq) goto loc_82854910;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x8285476c
	if (ctx.cr6.eq) goto loc_8285476C;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82854678
	if (ctx.cr6.eq) goto loc_82854678;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82854670
	if (ctx.cr6.eq) goto loc_82854670;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82854668
	if (ctx.cr6.eq) goto loc_82854668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8285467c
	goto loc_8285467C;
loc_82854668:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8285467c
	goto loc_8285467C;
loc_82854670:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x8285467c
	goto loc_8285467C;
loc_82854678:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8285467C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x828073d0
	ctx.lr = 0x82854684;
	sub_828073D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828546b4
	if (!ctx.cr6.eq) goto loc_828546B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r21,0
	ctx.r21.s64 = 0;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x828548bc
	goto loc_828548BC;
loc_828546B4:
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828546e8
	if (ctx.cr6.eq) goto loc_828546E8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828546e0
	if (ctx.cr6.eq) goto loc_828546E0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828546d8
	if (ctx.cr6.eq) goto loc_828546D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828546ec
	goto loc_828546EC;
loc_828546D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x828546ec
	goto loc_828546EC;
loc_828546E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x828546ec
	goto loc_828546EC;
loc_828546E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_828546EC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82807598
	ctx.lr = 0x828546F8;
	sub_82807598(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
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
	// beq cr6,0x82854740
	if (ctx.cr6.eq) goto loc_82854740;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82854738
	if (ctx.cr6.eq) goto loc_82854738;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82854730
	if (ctx.cr6.eq) goto loc_82854730;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82854744
	goto loc_82854744;
loc_82854730:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82854744
	goto loc_82854744;
loc_82854738:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82854744
	goto loc_82854744;
loc_82854740:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82854744:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82807520
	ctx.lr = 0x82854750;
	sub_82807520(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x828548bc
	goto loc_828548BC;
loc_8285476C:
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828547a0
	if (ctx.cr6.eq) goto loc_828547A0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82854798
	if (ctx.cr6.eq) goto loc_82854798;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82854790
	if (ctx.cr6.eq) goto loc_82854790;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828547a4
	goto loc_828547A4;
loc_82854790:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828547a4
	goto loc_828547A4;
loc_82854798:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x828547a4
	goto loc_828547A4;
loc_828547A0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_828547A4:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x828547c8
	if (ctx.cr6.eq) goto loc_828547C8;
	// lfs f28,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f26.f64 = double(temp.f32);
	// b 0x828547d8
	goto loc_828547D8;
loc_828547C8:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fneg f28,f0
	ctx.f28.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmr f27,f28
	ctx.f27.f64 = ctx.f28.f64;
	// fmr f26,f28
	ctx.f26.f64 = ctx.f28.f64;
loc_828547D8:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82854808
	if (ctx.cr6.eq) goto loc_82854808;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82854800
	if (ctx.cr6.eq) goto loc_82854800;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828547f8
	if (ctx.cr6.eq) goto loc_828547F8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285480c
	goto loc_8285480C;
loc_828547F8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285480c
	goto loc_8285480C;
loc_82854800:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x8285480c
	goto loc_8285480C;
loc_82854808:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8285480C:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82854830
	if (ctx.cr6.eq) goto loc_82854830;
	// lfs f31,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f29.f64 = double(temp.f32);
	// b 0x8285483c
	goto loc_8285483C;
loc_82854830:
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
loc_8285483C:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8285486c
	if (ctx.cr6.eq) goto loc_8285486C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82854864
	if (ctx.cr6.eq) goto loc_82854864;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8285485c
	if (ctx.cr6.eq) goto loc_8285485C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82854870
	goto loc_82854870;
loc_8285485C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82854870
	goto loc_82854870;
loc_82854864:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82854870
	goto loc_82854870;
loc_8285486C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82854870:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x82854878;
	sub_82804410(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f28
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f13,f27
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fadds f9,f12,f26
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f26.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f7,f13,f30
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f6,f12,f29
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r26,4(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828548BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82808cf8
	ctx.lr = 0x828548C4;
	sub_82808CF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82854910
	if (!ctx.cr6.eq) goto loc_82854910;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// beq cr6,0x828548fc
	if (ctx.cr6.eq) goto loc_828548FC;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 2, ctx.xer);
	// beq cr6,0x828548f4
	if (ctx.cr6.eq) goto loc_828548F4;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// beq cr6,0x828548ec
	if (ctx.cr6.eq) goto loc_828548EC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// b 0x82854900
	goto loc_82854900;
loc_828548EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82854900
	goto loc_82854900;
loc_828548F4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82854900
	goto loc_82854900;
loc_828548FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82854900:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82bfc680
	ctx.lr = 0x82854910;
	sub_82BFC680(ctx, base);
loc_82854910:
	// stw r18,13192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13192, ctx.r18.u32);
	// stw r19,13180(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13180, ctx.r19.u32);
	// stw r16,13184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13184, ctx.r16.u32);
	// stw r17,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r17.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8221ad5c
	ctx.lr = 0x8285492C;
	__restfpr_26(ctx, base);
	// b 0x82218a28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82854930"))) PPC_WEAK_FUNC(sub_82854930);
PPC_FUNC_IMPL(__imp__sub_82854930) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82803550
	ctx.lr = 0x82854948;
	sub_82803550(ctx, base);
	// bl 0x828219b0
	ctx.lr = 0x8285494C;
	sub_828219B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8285495C"))) PPC_WEAK_FUNC(sub_8285495C);
PPC_FUNC_IMPL(__imp__sub_8285495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82854960"))) PPC_WEAK_FUNC(sub_82854960);
PPC_FUNC_IMPL(__imp__sub_82854960) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r4,40(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x82854acc
	if (!ctx.cr6.gt) goto loc_82854ACC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bge cr6,0x82854acc
	if (!ctx.cr6.lt) goto loc_82854ACC;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// lfs f3,-4368(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4368);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r10,-1460
	ctx.r10.s64 = ctx.r10.s64 + -1460;
	// lfs f12,-4012(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4012);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-30400(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30400);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x828549ec
	if (ctx.cr6.eq) goto loc_828549EC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x828549e4
	if (ctx.cr6.eq) goto loc_828549E4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828549dc
	if (ctx.cr6.eq) goto loc_828549DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828549d4
	if (ctx.cr6.eq) goto loc_828549D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f4,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f4.f64 = double(temp.f32);
	// b 0x828549f0
	goto loc_828549F0;
loc_828549D4:
	// fmr f4,f11
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f11.f64;
	// b 0x828549f0
	goto loc_828549F0;
loc_828549DC:
	// fmr f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f3.f64;
	// b 0x828549f0
	goto loc_828549F0;
loc_828549E4:
	// fmr f4,f12
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f12.f64;
	// b 0x828549f0
	goto loc_828549F0;
loc_828549EC:
	// lfs f4,-17184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17184);
	ctx.f4.f64 = double(temp.f32);
loc_828549F0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82854a0c
	if (!ctx.cr6.gt) goto loc_82854A0C;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x82854a10
	goto loc_82854A10;
loc_82854A0C:
	// fsubs f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_82854A10:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82854ab4
	if (ctx.cr6.eq) goto loc_82854AB4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82854a9c
	if (ctx.cr6.eq) goto loc_82854A9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82854a84
	if (ctx.cr6.eq) goto loc_82854A84;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82854a78
	if (ctx.cr6.eq) goto loc_82854A78;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82854a6c
	if (ctx.cr6.eq) goto loc_82854A6C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82854a60
	if (ctx.cr6.eq) goto loc_82854A60;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f2,-19780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19780);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-29736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29736);
	ctx.f3.f64 = double(temp.f32);
	// b 0x82854ac4
	goto loc_82854AC4;
loc_82854A60:
	// lfs f3,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// b 0x82854ac4
	goto loc_82854AC4;
loc_82854A6C:
	// fmr f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f3,f11
	ctx.f3.f64 = ctx.f11.f64;
	// b 0x82854ac4
	goto loc_82854AC4;
loc_82854A78:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f2,-29736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29736);
	ctx.f2.f64 = double(temp.f32);
	// b 0x82854ac4
	goto loc_82854AC4;
loc_82854A84:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// addi r8,r11,-4008
	ctx.r8.s64 = ctx.r11.s64 + -4008;
	// lfs f2,-19780(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19780);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// b 0x82854ac4
	goto loc_82854AC4;
loc_82854A9C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r11,-4008
	ctx.r8.s64 = ctx.r11.s64 + -4008;
	// lfs f2,-30848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30848);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// b 0x82854ac4
	goto loc_82854AC4;
loc_82854AB4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f2,-30712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30712);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,-4008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4008);
	ctx.f3.f64 = double(temp.f32);
loc_82854AC4:
	// lfs f1,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82822e58
	ctx.lr = 0x82854ACC;
	sub_82822E58(ctx, base);
loc_82854ACC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82854ADC"))) PPC_WEAK_FUNC(sub_82854ADC);
PPC_FUNC_IMPL(__imp__sub_82854ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82854AE0"))) PPC_WEAK_FUNC(sub_82854AE0);
PPC_FUNC_IMPL(__imp__sub_82854AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82854AE8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82854b4c
	if (ctx.cr6.eq) goto loc_82854B4C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82854b44
	if (ctx.cr6.eq) goto loc_82854B44;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82854b3c
	if (ctx.cr6.eq) goto loc_82854B3C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82854b50
	goto loc_82854B50;
loc_82854B3C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82854b50
	goto loc_82854B50;
loc_82854B44:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82854b50
	goto loc_82854B50;
loc_82854B4C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82854B50:
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,29744(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82854ba4
	if (ctx.cr6.eq) goto loc_82854BA4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82854b88
	if (ctx.cr6.eq) goto loc_82854B88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82854b80
	if (ctx.cr6.eq) goto loc_82854B80;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82854b8c
	if (!ctx.cr6.eq) goto loc_82854B8C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82854b8c
	goto loc_82854B8C;
loc_82854B80:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82854b8c
	goto loc_82854B8C;
loc_82854B88:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82854B8C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f30,192(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bgt cr6,0x82854bc4
	if (ctx.cr6.gt) goto loc_82854BC4;
loc_82854BA4:
	// stfs f31,2412(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2412, temp.u32);
	// stfs f31,2416(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2416, temp.u32);
	// stfs f31,2420(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2420, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_82854BC4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82804270
	ctx.lr = 0x82854BD0;
	sub_82804270(ctx, base);
	// lfs f13,2448(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,2452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2452);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fmadds f11,f12,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f9,f11
	ctx.f9.f64 = double(float(sqrt(ctx.f11.f64)));
	// beq cr6,0x82854c14
	if (ctx.cr6.eq) goto loc_82854C14;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82854c0c
	if (ctx.cr6.eq) goto loc_82854C0C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82854c18
	if (!ctx.cr6.eq) goto loc_82854C18;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82854c18
	goto loc_82854C18;
loc_82854C0C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82854c18
	goto loc_82854C18;
loc_82854C14:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82854C18:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-30400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30400);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lfs f7,208(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 208);
	ctx.f7.f64 = double(temp.f32);
	// blt cr6,0x82854c68
	if (ctx.cr6.lt) goto loc_82854C68;
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x82854c74
	if (!ctx.cr6.gt) goto loc_82854C74;
	// fdivs f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f10,f6,f11
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// b 0x82854c74
	goto loc_82854C74;
loc_82854C68:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
loc_82854C74:
	// lfs f9,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// addi r11,r31,672
	ctx.r11.s64 = ctx.r31.s64 + 672;
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f30,f31
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,672(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,12492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f2,676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,680(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f6,f12,f8,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmuls f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// fmadds f10,f4,f10,f6
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fsel f6,f11,f11,f31
	ctx.f6.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// fmuls f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fsubs f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fsubs f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fsel f8,f11,f0,f6
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f6.f64;
	// fsubs f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f4,f9,f30
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fsubs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f12,f6,f30
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f11,f8,f5
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f10,f4,f8
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f6,f1,f13,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f6,680(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// fmadds f5,f2,f13,f10
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f5,676(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// fmadds f4,f8,f12,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f4,672(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// lfs f13,2412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2412);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
	// fmuls f3,f12,f13
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// ble cr6,0x82854d20
	if (!ctx.cr6.gt) goto loc_82854D20;
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x82854d44
	if (!ctx.cr6.gt) goto loc_82854D44;
loc_82854D20:
	// lfs f11,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fsel f9,f10,f10,f31
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsel f6,f8,f0,f9
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fmadds f3,f5,f13,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfs f3,2412(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2412, temp.u32);
loc_82854D44:
	// lfs f13,676(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2416(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// ble cr6,0x82854d68
	if (!ctx.cr6.gt) goto loc_82854D68;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x82854d8c
	if (!ctx.cr6.gt) goto loc_82854D8C;
loc_82854D68:
	// lfs f11,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fsel f9,f10,f10,f31
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsel f7,f8,f0,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fmuls f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f4,2416(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2416, temp.u32);
loc_82854D8C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82854DA0"))) PPC_WEAK_FUNC(sub_82854DA0);
PPC_FUNC_IMPL(__imp__sub_82854DA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
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
	// lwz r11,596(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82854df0
	if (ctx.cr6.eq) goto loc_82854DF0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82854de8
	if (ctx.cr6.eq) goto loc_82854DE8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82854de0
	if (ctx.cr6.eq) goto loc_82854DE0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82854df4
	goto loc_82854DF4;
loc_82854DE0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82854df4
	goto loc_82854DF4;
loc_82854DE8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82854df4
	goto loc_82854DF4;
loc_82854DF0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82854DF4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82854e08
	if (!ctx.cr6.eq) goto loc_82854E08;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82854E08:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82854e30
	if (ctx.cr6.eq) goto loc_82854E30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82854e28
	if (ctx.cr6.eq) goto loc_82854E28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82854e34
	if (!ctx.cr6.eq) goto loc_82854E34;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82854e34
	goto loc_82854E34;
loc_82854E28:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82854e34
	goto loc_82854E34;
loc_82854E30:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82854E34:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,368(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82854e64
	if (!ctx.cr6.eq) goto loc_82854E64;
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82854E64:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82854E70"))) PPC_WEAK_FUNC(sub_82854E70);
PPC_FUNC_IMPL(__imp__sub_82854E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82854ef8
	if (ctx.cr6.eq) goto loc_82854EF8;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lfs f12,1316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1524);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f10,2632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2632);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// fmadds f9,f11,f12,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f13,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f8,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,1316(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1316, temp.u32);
	// fsel f6,f7,f7,f13
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsel f4,f5,f0,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f6.f64;
	// stfs f4,1316(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1316, temp.u32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// blt cr6,0x82854ef8
	if (ctx.cr6.lt) goto loc_82854EF8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82854ef8
	if (!ctx.cr6.eq) goto loc_82854EF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f13,1316(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1316, temp.u32);
	// stw r10,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r10.u32);
loc_82854EF8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82854EFC"))) PPC_WEAK_FUNC(sub_82854EFC);
PPC_FUNC_IMPL(__imp__sub_82854EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82854F00"))) PPC_WEAK_FUNC(sub_82854F00);
PPC_FUNC_IMPL(__imp__sub_82854F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2184);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,2876(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2876);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,2184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2184, ctx.r10.u32);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1520(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1520, temp.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82854F58"))) PPC_WEAK_FUNC(sub_82854F58);
PPC_FUNC_IMPL(__imp__sub_82854F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2876(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2876);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,2184(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2184);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,2876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2876, ctx.r10.u32);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2188(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2188, temp.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82854FB0"))) PPC_WEAK_FUNC(sub_82854FB0);
PPC_FUNC_IMPL(__imp__sub_82854FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,2876(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2876);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,428(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,2184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82855008"))) PPC_WEAK_FUNC(sub_82855008);
PPC_FUNC_IMPL(__imp__sub_82855008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82855010;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r24,13180(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r23,13192(r28)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r22,13188(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13188);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r21,13184(r26)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// lwz r9,564(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8285506c
	if (!ctx.cr6.eq) goto loc_8285506C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
loc_8285506C:
	// li r29,1
	ctx.r29.s64 = 1;
	// stfs f0,1520(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1520, temp.u32);
	// stfs f0,428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stw r30,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r30.u32);
	// stfs f0,2188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2188, temp.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r29,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,2876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2876, ctx.r29.u32);
	// lfs f13,1936(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,2192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2192, temp.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// lfs f11,1940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r30.u32);
	// stfs f11,2196(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2196, temp.u32);
	// lfs f10,1944(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,2200(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2200, temp.u32);
	// lfs f9,872(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,568(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// lfs f8,876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,572(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// lfs f7,880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,576(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// lfs f6,2388(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2388);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,884(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// lfs f5,2392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2392);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,888(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 888, temp.u32);
	// lfs f4,2396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2396);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,892(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 892, temp.u32);
	// bl 0x82822c78
	ctx.lr = 0x828550EC;
	sub_82822C78(ctx, base);
	// fsubs f3,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// stw r23,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r23.u32);
	// stw r24,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r24.u32);
	// stw r21,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r21.u32);
	// stw r22,13188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13188, ctx.r22.u32);
	// lfs f13,-19780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19780);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f2,432(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// fmuls f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stfs f0,1316(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1316, temp.u32);
	// stfs f2,2632(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 2632, temp.u32);
	// stw r29,580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 580, ctx.r29.u32);
	// stfs f13,1524(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1524, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82855148"))) PPC_WEAK_FUNC(sub_82855148);
PPC_FUNC_IMPL(__imp__sub_82855148) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x82854f00
	ctx.lr = 0x8285515C;
	sub_82854F00(ctx, base);
	// bl 0x82854fb0
	ctx.lr = 0x82855160;
	sub_82854FB0(ctx, base);
	// bl 0x82854f58
	ctx.lr = 0x82855164;
	sub_82854F58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82855174"))) PPC_WEAK_FUNC(sub_82855174);
PPC_FUNC_IMPL(__imp__sub_82855174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82855178"))) PPC_WEAK_FUNC(sub_82855178);
PPC_FUNC_IMPL(__imp__sub_82855178) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2876(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2876);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x828551b4
	if (!ctx.cr6.eq) goto loc_828551B4;
	// lwz r11,2184(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828551b4
	if (!ctx.cr6.eq) goto loc_828551B4;
	// lwz r11,112(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828552f0
	if (ctx.cr6.eq) goto loc_828552F0;
loc_828551B4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,2184(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2184);
	// lfs f13,432(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82855258
	if (ctx.cr6.eq) goto loc_82855258;
	// lwz r11,112(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8285521c
	if (ctx.cr6.eq) goto loc_8285521C;
	// lwz r11,2876(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2876);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8285529c
	if (!ctx.cr6.eq) goto loc_8285529C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f12,2188(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2188);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,268(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fmadds f10,f11,f12,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f13,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f9,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fsel f7,f8,f8,f13
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f13.f64;
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// stfs f5,2188(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 2188, temp.u32);
	// b 0x8285529c
	goto loc_8285529C;
loc_8285521C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f12,428(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 428);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,268(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fmadds f10,f11,f12,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f13,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f9,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,428(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 428, temp.u32);
	// fsel f7,f8,f8,f13
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f13.f64;
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// stfs f5,2188(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 2188, temp.u32);
	// b 0x82855298
	goto loc_82855298;
loc_82855258:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f12,1520(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1520);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,268(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fmadds f10,f11,f12,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f13,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f9,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,1520(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1520, temp.u32);
	// fsel f7,f8,f8,f13
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f13.f64;
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// stfs f5,1520(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1520, temp.u32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// stfs f4,2188(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 2188, temp.u32);
loc_82855298:
	// stfs f5,428(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 428, temp.u32);
loc_8285529C:
	// lwz r11,108(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 108);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828552bc
	if (ctx.cr6.eq) goto loc_828552BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828552bc
	if (!ctx.cr6.eq) goto loc_828552BC;
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lfs f13,-19780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19780);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828552c0
	goto loc_828552C0;
loc_828552BC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_828552C0:
	// lfs f0,1520(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1520);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828552d0
	if (ctx.cr6.lt) goto loc_828552D0;
	// bl 0x82854f00
	ctx.lr = 0x828552D0;
	sub_82854F00(ctx, base);
loc_828552D0:
	// lfs f0,428(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828552e0
	if (ctx.cr6.lt) goto loc_828552E0;
	// bl 0x82854fb0
	ctx.lr = 0x828552E0;
	sub_82854FB0(ctx, base);
loc_828552E0:
	// lfs f0,2188(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828552f0
	if (ctx.cr6.lt) goto loc_828552F0;
	// bl 0x82854f58
	ctx.lr = 0x828552F0;
	sub_82854F58(ctx, base);
loc_828552F0:
	// bl 0x82854e70
	ctx.lr = 0x828552F4;
	sub_82854E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82855304"))) PPC_WEAK_FUNC(sub_82855304);
PPC_FUNC_IMPL(__imp__sub_82855304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82855308"))) PPC_WEAK_FUNC(sub_82855308);
PPC_FUNC_IMPL(__imp__sub_82855308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82855310;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r31,13192(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r30,13188(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,13180(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r28,13184(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r11.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r10,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r10.u32);
	// stfs f1,2180(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 2180, temp.u32);
	// bl 0x82bef718
	ctx.lr = 0x82855368;
	sub_82BEF718(ctx, base);
	// stw r31,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r31.u32);
	// stw r29,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r29.u32);
	// stw r28,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r28.u32);
	// stw r30,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82855380"))) PPC_WEAK_FUNC(sub_82855380);
PPC_FUNC_IMPL(__imp__sub_82855380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82855388;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8221ad10
	ctx.lr = 0x82855390;
	__savefpr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f28,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lfs f27,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f26,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lfs f31,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r22,13192(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r21,13188(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lwz r20,13180(r24)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13180);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// lwz r19,13184(r23)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13184);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r29,48(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,596(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82855430
	if (ctx.cr6.eq) goto loc_82855430;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82855428
	if (ctx.cr6.eq) goto loc_82855428;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82855420
	if (ctx.cr6.eq) goto loc_82855420;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82855434
	goto loc_82855434;
loc_82855420:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82855434
	goto loc_82855434;
loc_82855428:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82855434
	goto loc_82855434;
loc_82855430:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82855434:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828558b8
	if (ctx.cr6.eq) goto loc_828558B8;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8285546c
	if (ctx.cr6.eq) goto loc_8285546C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82855464
	if (ctx.cr6.eq) goto loc_82855464;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8285545c
	if (ctx.cr6.eq) goto loc_8285545C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82855470
	goto loc_82855470;
loc_8285545C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82855470
	goto loc_82855470;
loc_82855464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82855470
	goto loc_82855470;
loc_8285546C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82855470:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82825360
	ctx.lr = 0x82855478;
	sub_82825360(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828558b8
	if (!ctx.cr6.eq) goto loc_828558B8;
	// lwz r3,1780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1780);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828554b8
	if (ctx.cr6.eq) goto loc_828554B8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828554b0
	if (ctx.cr6.eq) goto loc_828554B0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x828554a8
	if (ctx.cr6.eq) goto loc_828554A8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828554bc
	goto loc_828554BC;
loc_828554A8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828554bc
	goto loc_828554BC;
loc_828554B0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828554bc
	goto loc_828554BC;
loc_828554B8:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_828554BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82855680
	if (ctx.cr6.eq) goto loc_82855680;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828554f4
	if (ctx.cr6.eq) goto loc_828554F4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828554ec
	if (ctx.cr6.eq) goto loc_828554EC;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828554e4
	if (ctx.cr6.eq) goto loc_828554E4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x828554f8
	goto loc_828554F8;
loc_828554E4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828554f8
	goto loc_828554F8;
loc_828554EC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828554f8
	goto loc_828554F8;
loc_828554F4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_828554F8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,348(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x828555a0
	if (!ctx.cr6.eq) goto loc_828555A0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8285553c
	if (ctx.cr6.eq) goto loc_8285553C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82855534
	if (ctx.cr6.eq) goto loc_82855534;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82855540
	if (!ctx.cr6.eq) goto loc_82855540;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x82855540
	goto loc_82855540;
loc_82855534:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// b 0x82855540
	goto loc_82855540;
loc_8285553C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82855540:
	// lwz r11,32(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,348(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x828555e8
	if (ctx.cr6.eq) goto loc_828555E8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82855584
	if (ctx.cr6.eq) goto loc_82855584;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8285557c
	if (ctx.cr6.eq) goto loc_8285557C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82855588
	if (!ctx.cr6.eq) goto loc_82855588;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82855588
	goto loc_82855588;
loc_8285557C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82855588
	goto loc_82855588;
loc_82855584:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82855588:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82804410
	ctx.lr = 0x82855590;
	sub_82804410(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fsel f28,f13,f0,f28
	ctx.f28.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f28.f64;
	// b 0x828555e0
	goto loc_828555E0;
loc_828555A0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828555c8
	if (ctx.cr6.eq) goto loc_828555C8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828555c0
	if (ctx.cr6.eq) goto loc_828555C0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828555cc
	if (!ctx.cr6.eq) goto loc_828555CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x828555cc
	goto loc_828555CC;
loc_828555C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828555cc
	goto loc_828555CC;
loc_828555C8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_828555CC:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82804410
	ctx.lr = 0x828555D4;
	sub_82804410(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fsel f28,f13,f28,f0
	ctx.f28.f64 = ctx.f13.f64 >= 0.0 ? ctx.f28.f64 : ctx.f0.f64;
loc_828555E0:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828555E8:
	// lwz r11,596(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82855614
	if (ctx.cr6.eq) goto loc_82855614;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8285560c
	if (ctx.cr6.eq) goto loc_8285560C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82855618
	if (!ctx.cr6.eq) goto loc_82855618;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82855618
	goto loc_82855618;
loc_8285560C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82855618
	goto loc_82855618;
loc_82855614:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82855618:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,348(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82855680
	if (ctx.cr6.eq) goto loc_82855680;
	// lwz r3,1780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1780);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82855660
	if (ctx.cr6.eq) goto loc_82855660;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82855658
	if (ctx.cr6.eq) goto loc_82855658;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82855664
	if (!ctx.cr6.eq) goto loc_82855664;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82855664
	goto loc_82855664;
loc_82855658:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82855664
	goto loc_82855664;
loc_82855660:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82855664:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82804410
	ctx.lr = 0x8285566C;
	sub_82804410(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fsel f27,f13,f27,f0
	ctx.f27.f64 = ctx.f13.f64 >= 0.0 ? ctx.f27.f64 : ctx.f0.f64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82855680:
	// lwz r3,596(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828556ac
	if (ctx.cr6.eq) goto loc_828556AC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828556a4
	if (ctx.cr6.eq) goto loc_828556A4;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828556b0
	if (!ctx.cr6.eq) goto loc_828556B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x828556b0
	goto loc_828556B0;
loc_828556A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828556b0
	goto loc_828556B0;
loc_828556AC:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_828556B0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82825440
	ctx.lr = 0x828556B8;
	sub_82825440(ctx, base);
	// lfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lwz r31,596(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_828556D4:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82855704
	if (ctx.cr6.eq) goto loc_82855704;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828556fc
	if (ctx.cr6.eq) goto loc_828556FC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828556f4
	if (ctx.cr6.eq) goto loc_828556F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82855708
	goto loc_82855708;
loc_828556F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82855708
	goto loc_82855708;
loc_828556FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82855708
	goto loc_82855708;
loc_82855704:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82855708:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82825168
	ctx.lr = 0x82855710;
	sub_82825168(ctx, base);
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// or r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// clrlwi r6,r7,1
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x828558b8
	if (ctx.cr6.eq) goto loc_828558B8;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82855778
	if (ctx.cr6.eq) goto loc_82855778;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82855770
	if (ctx.cr6.eq) goto loc_82855770;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82855768
	if (ctx.cr6.eq) goto loc_82855768;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285577c
	goto loc_8285577C;
loc_82855768:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8285577c
	goto loc_8285577C;
loc_82855770:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285577c
	goto loc_8285577C;
loc_82855778:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8285577C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x8285579c
	if (!ctx.cr6.eq) goto loc_8285579C;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828557a4
	if (ctx.cr6.eq) goto loc_828557A4;
loc_8285579C:
	// lfs f13,380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828557a8
	goto loc_828557A8;
loc_828557A4:
	// lfs f13,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
loc_828557A8:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828557d8
	if (ctx.cr6.eq) goto loc_828557D8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828557d0
	if (ctx.cr6.eq) goto loc_828557D0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828557c8
	if (ctx.cr6.eq) goto loc_828557C8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828557dc
	goto loc_828557DC;
loc_828557C8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828557dc
	goto loc_828557DC;
loc_828557D0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828557dc
	goto loc_828557DC;
loc_828557D8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_828557DC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x828557fc
	if (!ctx.cr6.eq) goto loc_828557FC;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82855804
	if (ctx.cr6.eq) goto loc_82855804;
loc_828557FC:
	// lfs f0,364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82855808
	goto loc_82855808;
loc_82855804:
	// lfs f0,156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
loc_82855808:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82855838
	if (ctx.cr6.eq) goto loc_82855838;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82855830
	if (ctx.cr6.eq) goto loc_82855830;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82855828
	if (ctx.cr6.eq) goto loc_82855828;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8285583c
	goto loc_8285583C;
loc_82855828:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8285583c
	goto loc_8285583C;
loc_82855830:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8285583c
	goto loc_8285583C;
loc_82855838:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8285583C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x8285585c
	if (!ctx.cr6.eq) goto loc_8285585C;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82855864
	if (ctx.cr6.eq) goto loc_82855864;
loc_8285585C:
	// lfs f9,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// b 0x82855868
	goto loc_82855868;
loc_82855864:
	// lfs f9,220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f9.f64 = double(temp.f32);
loc_82855868:
	// fsubs f5,f27,f7
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f27.f64 - ctx.f7.f64));
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// fsubs f4,f26,f8
	ctx.f4.f64 = double(float(ctx.f26.f64 - ctx.f8.f64));
	// fsubs f3,f28,f6
	ctx.f3.f64 = double(float(ctx.f28.f64 - ctx.f6.f64));
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// fmuls f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmadds f1,f4,f10,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmadds f5,f3,f12,f1
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsel f3,f4,f5,f13
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f13.f64;
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsel f1,f2,f0,f3
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// fadds f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fadds f30,f12,f30
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fadds f29,f11,f29
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// blt cr6,0x828556d4
	if (ctx.cr6.lt) goto loc_828556D4;
loc_828558B8:
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r22,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r22.u32);
	// stw r20,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r20.u32);
	// stw r19,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r19.u32);
	// stw r21,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r21.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8221ad5c
	ctx.lr = 0x828558F8;
	__restfpr_26(ctx, base);
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828558FC"))) PPC_WEAK_FUNC(sub_828558FC);
PPC_FUNC_IMPL(__imp__sub_828558FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82855900"))) PPC_WEAK_FUNC(sub_82855900);
PPC_FUNC_IMPL(__imp__sub_82855900) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-29532(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r31,48(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,2736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2736);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82855960
	if (ctx.cr6.eq) goto loc_82855960;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82855958
	if (ctx.cr6.eq) goto loc_82855958;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82855950
	if (ctx.cr6.eq) goto loc_82855950;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82855964
	goto loc_82855964;
loc_82855950:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82855964
	goto loc_82855964;
loc_82855958:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82855964
	goto loc_82855964;
loc_82855960:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82855964:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82855980
	if (!ctx.cr6.eq) goto loc_82855980;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// b 0x828559cc
	goto loc_828559CC;
loc_82855980:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828559a8
	if (ctx.cr6.eq) goto loc_828559A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828559a0
	if (ctx.cr6.eq) goto loc_828559A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828559ac
	if (!ctx.cr6.eq) goto loc_828559AC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828559ac
	goto loc_828559AC;
loc_828559A0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828559ac
	goto loc_828559AC;
loc_828559A8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828559AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x828559B8;
	sub_82804410(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f12,156(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
loc_828559CC:
	// stfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
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

__attribute__((alias("__imp__sub_828559E4"))) PPC_WEAK_FUNC(sub_828559E4);
PPC_FUNC_IMPL(__imp__sub_828559E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828559E8"))) PPC_WEAK_FUNC(sub_828559E8);
PPC_FUNC_IMPL(__imp__sub_828559E8) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r7,r10,-29532
	ctx.r7.s64 = ctx.r10.s64 + -29532;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,-29532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r10,2736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2736);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82855a4c
	if (ctx.cr6.eq) goto loc_82855A4C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82855a44
	if (ctx.cr6.eq) goto loc_82855A44;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82855a3c
	if (ctx.cr6.eq) goto loc_82855A3C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82855a50
	goto loc_82855A50;
loc_82855A3C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82855a50
	goto loc_82855A50;
loc_82855A44:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82855a50
	goto loc_82855A50;
loc_82855A4C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82855A50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82855bc8
	if (ctx.cr6.eq) goto loc_82855BC8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82855a88
	if (ctx.cr6.eq) goto loc_82855A88;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82855a80
	if (ctx.cr6.eq) goto loc_82855A80;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82855a78
	if (ctx.cr6.eq) goto loc_82855A78;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82855a8c
	goto loc_82855A8C;
loc_82855A78:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82855a8c
	goto loc_82855A8C;
loc_82855A80:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82855a8c
	goto loc_82855A8C;
loc_82855A88:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82855A8C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82855bc8
	if (ctx.cr6.eq) goto loc_82855BC8;
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rlwinm r7,r11,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82855bc8
	if (ctx.cr6.eq) goto loc_82855BC8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82855ad0
	if (ctx.cr6.eq) goto loc_82855AD0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82855ad4
	if (ctx.cr6.eq) goto loc_82855AD4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82855ac8
	if (ctx.cr6.eq) goto loc_82855AC8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82855ad4
	goto loc_82855AD4;
loc_82855AC8:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82855ad4
	goto loc_82855AD4;
loc_82855AD0:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82855AD4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x82855ADC;
	sub_82804410(ctx, base);
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r31,148
	ctx.r10.s64 = ctx.r31.s64 + 148;
	// lfs f12,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
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
	// beq cr6,0x82855bc8
	if (ctx.cr6.eq) goto loc_82855BC8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f13,-30832(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30832);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82855bc8
	if (!ctx.cr6.gt) goto loc_82855BC8;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,2448
	ctx.r11.s64 = ctx.r31.s64 + 2448;
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f0,-30468(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30468);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// stfs f2,2452(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2452, temp.u32);
	// fmuls f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// stfs f1,2456(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2456, temp.u32);
	// fmuls f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// stfs f3,2448(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2448, temp.u32);
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// stfs f7,304(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x82855be0
	if (!ctx.cr6.lt) goto loc_82855BE0;
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
	// b 0x82855bdc
	goto loc_82855BDC;
loc_82855BC8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2448, temp.u32);
	// stfs f0,2452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2452, temp.u32);
	// stfs f0,2456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2456, temp.u32);
loc_82855BDC:
	// stfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
loc_82855BE0:
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

__attribute__((alias("__imp__sub_82855BF4"))) PPC_WEAK_FUNC(sub_82855BF4);
PPC_FUNC_IMPL(__imp__sub_82855BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82855BF8"))) PPC_WEAK_FUNC(sub_82855BF8);
PPC_FUNC_IMPL(__imp__sub_82855BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82855C00;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13180(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r22,13184(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r30.u32);
	// stw r30,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r30.u32);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r11.u32);
	// lwz r10,1972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82855f2c
	if (ctx.cr6.eq) goto loc_82855F2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,1772(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f9,584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f7,588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	ctx.f7.f64 = double(temp.f32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f13,29744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-4368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4368);
	ctx.f11.f64 = double(temp.f32);
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// lfs f8,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f8.f64 = double(temp.f32);
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// lfs f30,-30868(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30868);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// blt cr6,0x82855d5c
	if (ctx.cr6.lt) goto loc_82855D5C;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lfs f12,29736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29736);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// bne cr6,0x82855cd4
	if (!ctx.cr6.eq) goto loc_82855CD4;
	// lfs f10,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f5,f6,f11,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f5,1772(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// b 0x82855cec
	goto loc_82855CEC;
loc_82855CD4:
	// lfs f6,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f10,-3988(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3988);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f4,f5,f10,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f4,1772(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
loc_82855CEC:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x82855d44
	if (ctx.cr6.lt) goto loc_82855D44;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82855d28
	if (ctx.cr6.lt) goto loc_82855D28;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82855d60
	if (!ctx.cr6.lt) goto loc_82855D60;
	// lfs f12,1772(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f0,-29472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29472);
	ctx.f0.f64 = double(temp.f32);
	// fsel f6,f10,f12,f11
	ctx.f6.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsel f4,f5,f0,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f6.f64;
	// stfs f4,1772(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// b 0x82855d60
	goto loc_82855D60;
loc_82855D28:
	// lfs f0,1772(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f10,f12,f0,f8
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsubs f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsel f5,f6,f11,f10
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// stfs f5,1772(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// b 0x82855d60
	goto loc_82855D60;
loc_82855D44:
	// lfs f0,1772(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	ctx.f0.f64 = double(temp.f32);
	// fsel f12,f0,f0,f13
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsubs f10,f12,f8
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsel f6,f10,f8,f12
	ctx.f6.f64 = ctx.f10.f64 >= 0.0 ? ctx.f8.f64 : ctx.f12.f64;
	// stfs f6,1772(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// b 0x82855d60
	goto loc_82855D60;
loc_82855D5C:
	// stfs f13,1772(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
loc_82855D60:
	// fcmpu cr6,f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// beq cr6,0x82855dd8
	if (ctx.cr6.eq) goto loc_82855DD8;
	// lfs f0,1772(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x82855dc0
	if (!ctx.cr6.gt) goto loc_82855DC0;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82855d98
	if (!ctx.cr6.gt) goto loc_82855D98;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82855dd8
	if (ctx.cr6.gt) goto loc_82855DD8;
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-29476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x82855dcc
	goto loc_82855DCC;
loc_82855D98:
	// fsubs f10,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f6,816(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-30220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-4412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4412);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f5,f10,f0,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// b 0x82855dd8
	goto loc_82855DD8;
loc_82855DC0:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f12,-4412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4412);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_82855DCC:
	// fmuls f5,f6,f9
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f10,816(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f5,f10
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
loc_82855DD8:
	// fcmpu cr6,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// beq cr6,0x82855e50
	if (ctx.cr6.eq) goto loc_82855E50;
	// lfs f0,1772(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x82855e38
	if (!ctx.cr6.gt) goto loc_82855E38;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82855e10
	if (!ctx.cr6.gt) goto loc_82855E10;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82855e50
	if (ctx.cr6.gt) goto loc_82855E50;
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-29480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29480);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x82855e44
	goto loc_82855E44;
loc_82855E10:
	// fsubs f11,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f10,816(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-30848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30848);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-30712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30712);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f9,f11,f0,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f12.f64));
	// fmuls f8,f9,f7
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f31,f8,f10
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// b 0x82855e50
	goto loc_82855E50;
loc_82855E38:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f12,-30712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30712);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_82855E44:
	// fmuls f9,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f11,816(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f9,f11
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
loc_82855E50:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82855e74
	if (!ctx.cr6.eq) goto loc_82855E74;
	// bl 0x82804a78
	ctx.lr = 0x82855E64;
	sub_82804A78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828047a8
	ctx.lr = 0x82855E70;
	sub_828047A8(ctx, base);
	// b 0x82855ee4
	goto loc_82855EE4;
loc_82855E74:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lfs f0,-29736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29736);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,-27236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27236);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f29,f1,f13
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// bl 0x82804910
	ctx.lr = 0x82855EB0;
	sub_82804910(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x828047a8
	ctx.lr = 0x82855EBC;
	sub_828047A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82804a78
	ctx.lr = 0x82855EC8;
	sub_82804A78(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82747a18
	ctx.lr = 0x82855ED8;
	sub_82747A18(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82803d90
	ctx.lr = 0x82855EE4;
	sub_82803D90(ctx, base);
loc_82855EE4:
	// lfs f0,1772(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82855f08
	if (ctx.cr6.gt) goto loc_82855F08;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82855f2c
	if (!ctx.cr6.eq) goto loc_82855F2C;
loc_82855F08:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,27476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,1772(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1772, temp.u32);
	// stw r9,1972(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1972, ctx.r9.u32);
	// stfs f0,816(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 816, temp.u32);
loc_82855F2C:
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82855F50"))) PPC_WEAK_FUNC(sub_82855F50);
PPC_FUNC_IMPL(__imp__sub_82855F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x82855F58;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8221ad18
	ctx.lr = 0x82855F60;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r24,13180(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lfs f31,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lwz r23,13192(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r22,13188(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r21,13184(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13184);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x828560a4
	if (ctx.cr6.eq) goto loc_828560A4;
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// stw r11,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r11.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// ble cr6,0x828560a4
	if (!ctx.cr6.gt) goto loc_828560A4;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// bge cr6,0x828560a4
	if (!ctx.cr6.lt) goto loc_828560A4;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,1972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lfs f0,27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82856018
	if (ctx.cr6.eq) goto loc_82856018;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82855ffc
	if (ctx.cr6.eq) goto loc_82855FFC;
	// lfs f13,816(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// ble cr6,0x828560a4
	if (!ctx.cr6.gt) goto loc_828560A4;
loc_82855FFC:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stfs f0,816(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 816, temp.u32);
	// stw r10,1972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1972, ctx.r10.u32);
	// stfs f0,1772(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1772, temp.u32);
loc_82856018:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82856048
	if (ctx.cr6.eq) goto loc_82856048;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82856050
	if (ctx.cr6.eq) goto loc_82856050;
	// stfs f31,588(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stfs f31,592(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82856040
	if (ctx.cr6.eq) goto loc_82856040;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_82856040:
	// stfs f0,584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// b 0x8285605c
	goto loc_8285605C;
loc_82856048:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_82856050:
	// stfs f0,588(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stfs f31,592(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stfs f31,584(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
loc_8285605C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82822c78
	ctx.lr = 0x82856064;
	sub_82822C78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-4012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8221c068
	ctx.lr = 0x8285607C;
	sub_8221C068(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8221c148
	ctx.lr = 0x82856088;
	sub_8221C148(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f31,1772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1772, temp.u32);
	// stw r26,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r26.u32);
	// stw r25,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r25.u32);
	// fdivs f11,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 / ctx.f12.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f10,816(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 816, temp.u32);
loc_828560A4:
	// stw r23,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r23.u32);
	// stw r24,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r24.u32);
	// stw r21,13184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13184, ctx.r21.u32);
	// stw r22,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r22.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8221ad64
	ctx.lr = 0x828560C0;
	__restfpr_28(ctx, base);
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828560C4"))) PPC_WEAK_FUNC(sub_828560C4);
PPC_FUNC_IMPL(__imp__sub_828560C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

