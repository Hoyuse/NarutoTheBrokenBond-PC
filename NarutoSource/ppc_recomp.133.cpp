#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82810E50"))) PPC_WEAK_FUNC(sub_82810E50);
PPC_FUNC_IMPL(__imp__sub_82810E50) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82811064
	if (ctx.cr6.eq) goto loc_82811064;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82811058
	if (ctx.cr6.eq) goto loc_82811058;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281104c
	if (ctx.cr6.eq) goto loc_8281104C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82811040
	if (ctx.cr6.eq) goto loc_82811040;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x82811034
	if (ctx.cr6.eq) goto loc_82811034;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82811028
	if (ctx.cr6.eq) goto loc_82811028;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x8281101c
	if (ctx.cr6.eq) goto loc_8281101C;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x82811010
	if (ctx.cr6.eq) goto loc_82811010;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x82811004
	if (ctx.cr6.eq) goto loc_82811004;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// beq cr6,0x82810ff8
	if (ctx.cr6.eq) goto loc_82810FF8;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// beq cr6,0x82810fec
	if (ctx.cr6.eq) goto loc_82810FEC;
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// beq cr6,0x82810fe0
	if (ctx.cr6.eq) goto loc_82810FE0;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// beq cr6,0x82810fd4
	if (ctx.cr6.eq) goto loc_82810FD4;
	// cmpwi cr6,r5,13
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 13, ctx.xer);
	// beq cr6,0x82810fc8
	if (ctx.cr6.eq) goto loc_82810FC8;
	// cmpwi cr6,r5,14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 14, ctx.xer);
	// beq cr6,0x82810fbc
	if (ctx.cr6.eq) goto loc_82810FBC;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// beq cr6,0x82810fb0
	if (ctx.cr6.eq) goto loc_82810FB0;
	// cmpwi cr6,r5,16
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16, ctx.xer);
	// beq cr6,0x82810fa4
	if (ctx.cr6.eq) goto loc_82810FA4;
	// cmpwi cr6,r5,17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 17, ctx.xer);
	// beq cr6,0x82810f98
	if (ctx.cr6.eq) goto loc_82810F98;
	// cmpwi cr6,r5,18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 18, ctx.xer);
	// beq cr6,0x82810f8c
	if (ctx.cr6.eq) goto loc_82810F8C;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// beq cr6,0x82810f80
	if (ctx.cr6.eq) goto loc_82810F80;
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// beq cr6,0x82810f74
	if (ctx.cr6.eq) goto loc_82810F74;
	// cmpwi cr6,r5,21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 21, ctx.xer);
	// beq cr6,0x82810f68
	if (ctx.cr6.eq) goto loc_82810F68;
	// cmpwi cr6,r5,22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 22, ctx.xer);
	// beq cr6,0x82810f5c
	if (ctx.cr6.eq) goto loc_82810F5C;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// beq cr6,0x82810f50
	if (ctx.cr6.eq) goto loc_82810F50;
	// cmpwi cr6,r5,24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 24, ctx.xer);
	// beq cr6,0x82810f44
	if (ctx.cr6.eq) goto loc_82810F44;
	// cmpwi cr6,r5,25
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 25, ctx.xer);
	// beq cr6,0x82810f38
	if (ctx.cr6.eq) goto loc_82810F38;
	// cmpwi cr6,r5,26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 26, ctx.xer);
	// bne cr6,0x82811068
	if (!ctx.cr6.eq) goto loc_82811068;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810F38:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810F44:
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810F50:
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810F5C:
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810F68:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810F74:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810F80:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810F8C:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810F98:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810FA4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810FB0:
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810FBC:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810FC8:
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810FD4:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810FE0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810FEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82810FF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811004:
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811010:
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281101C:
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811028:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811034:
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811040:
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281104C:
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811058:
	// li r11,41
	ctx.r11.s64 = 41;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811064:
	// li r11,40
	ctx.r11.s64 = 40;
loc_82811068:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811070"))) PPC_WEAK_FUNC(sub_82811070);
PPC_FUNC_IMPL(__imp__sub_82811070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x828119f0
	if (ctx.cr6.eq) goto loc_828119F0;
	// cmpwi cr6,r5,18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 18, ctx.xer);
	// beq cr6,0x828119ec
	if (ctx.cr6.eq) goto loc_828119EC;
	// cmpwi cr6,r5,24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 24, ctx.xer);
	// beq cr6,0x828119e0
	if (ctx.cr6.eq) goto loc_828119E0;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// beq cr6,0x828119d4
	if (ctx.cr6.eq) goto loc_828119D4;
	// cmpwi cr6,r5,25
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 25, ctx.xer);
	// beq cr6,0x828119c8
	if (ctx.cr6.eq) goto loc_828119C8;
	// cmpwi cr6,r5,22
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 22, ctx.xer);
	// beq cr6,0x828119bc
	if (ctx.cr6.eq) goto loc_828119BC;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x828119b0
	if (ctx.cr6.eq) goto loc_828119B0;
	// cmpwi cr6,r5,12
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 12, ctx.xer);
	// beq cr6,0x828119a4
	if (ctx.cr6.eq) goto loc_828119A4;
	// cmpwi cr6,r5,13
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 13, ctx.xer);
	// beq cr6,0x82811998
	if (ctx.cr6.eq) goto loc_82811998;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// beq cr6,0x8281198c
	if (ctx.cr6.eq) goto loc_8281198C;
	// cmpwi cr6,r5,28
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 28, ctx.xer);
	// beq cr6,0x82811980
	if (ctx.cr6.eq) goto loc_82811980;
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// beq cr6,0x82811974
	if (ctx.cr6.eq) goto loc_82811974;
	// cmpwi cr6,r5,23
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 23, ctx.xer);
	// beq cr6,0x82811968
	if (ctx.cr6.eq) goto loc_82811968;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8281195c
	if (ctx.cr6.eq) goto loc_8281195C;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x82811950
	if (ctx.cr6.eq) goto loc_82811950;
	// cmpwi cr6,r5,29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 29, ctx.xer);
	// beq cr6,0x82811944
	if (ctx.cr6.eq) goto loc_82811944;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82811938
	if (ctx.cr6.eq) goto loc_82811938;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x8281192c
	if (ctx.cr6.eq) goto loc_8281192C;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// beq cr6,0x82811920
	if (ctx.cr6.eq) goto loc_82811920;
	// cmpwi cr6,r5,20
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 20, ctx.xer);
	// beq cr6,0x82811914
	if (ctx.cr6.eq) goto loc_82811914;
	// cmpwi cr6,r5,21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 21, ctx.xer);
	// beq cr6,0x82811908
	if (ctx.cr6.eq) goto loc_82811908;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8281184c
	if (ctx.cr6.eq) goto loc_8281184C;
	// cmpwi cr6,r5,14
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 14, ctx.xer);
	// beq cr6,0x82811790
	if (ctx.cr6.eq) goto loc_82811790;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x828116d4
	if (ctx.cr6.eq) goto loc_828116D4;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x82811618
	if (ctx.cr6.eq) goto loc_82811618;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// beq cr6,0x828114bc
	if (ctx.cr6.eq) goto loc_828114BC;
	// cmpwi cr6,r5,26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 26, ctx.xer);
	// beq cr6,0x82811400
	if (ctx.cr6.eq) goto loc_82811400;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// beq cr6,0x82811304
	if (ctx.cr6.eq) goto loc_82811304;
	// cmpwi cr6,r5,27
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 27, ctx.xer);
	// bne cr6,0x828119f0
	if (!ctx.cr6.eq) goto loc_828119F0;
	// li r8,94
	ctx.r8.s64 = 94;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82811258
	if (ctx.cr6.eq) goto loc_82811258;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x82811258
	if (ctx.cr6.eq) goto loc_82811258;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82811258
	if (ctx.cr6.eq) goto loc_82811258;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x82811258
	if (ctx.cr6.eq) goto loc_82811258;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828111ac
	if (ctx.cr6.eq) goto loc_828111AC;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x828111ac
	if (ctx.cr6.eq) goto loc_828111AC;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828111ac
	if (ctx.cr6.eq) goto loc_828111AC;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x828119f0
	if (!ctx.cr6.eq) goto loc_828119F0;
loc_828111AC:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828111fc
	if (!ctx.cr6.gt) goto loc_828111FC;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_828111C0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,95
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 95, ctx.xer);
	// beq cr6,0x828111e4
	if (ctx.cr6.eq) goto loc_828111E4;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828111c0
	if (ctx.cr6.lt) goto loc_828111C0;
	// b 0x828111fc
	goto loc_828111FC;
loc_828111E4:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828111fc
	if (ctx.cr6.eq) goto loc_828111FC;
	// addi r10,r10,1381
	ctx.r10.s64 = ctx.r10.s64 + 1381;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,13488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13488, ctx.r7.u32);
loc_828111FC:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_82811210:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,96
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 96, ctx.xer);
	// beq cr6,0x82811238
	if (ctx.cr6.eq) goto loc_82811238;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82811210
	if (ctx.cr6.lt) goto loc_82811210;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811238:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828119f0
	if (ctx.cr6.eq) goto loc_828119F0;
	// addi r10,r10,1381
	ctx.r10.s64 = ctx.r10.s64 + 1381;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,13492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13492, ctx.r7.u32);
	// blr 
	return;
loc_82811258:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828112a8
	if (!ctx.cr6.gt) goto loc_828112A8;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_8281126C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,95
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 95, ctx.xer);
	// beq cr6,0x82811290
	if (ctx.cr6.eq) goto loc_82811290;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8281126c
	if (ctx.cr6.lt) goto loc_8281126C;
	// b 0x828112a8
	goto loc_828112A8;
loc_82811290:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828112a8
	if (ctx.cr6.eq) goto loc_828112A8;
	// addi r10,r10,1381
	ctx.r10.s64 = ctx.r10.s64 + 1381;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,12632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12632, ctx.r7.u32);
loc_828112A8:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_828112BC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,96
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 96, ctx.xer);
	// beq cr6,0x828112e4
	if (ctx.cr6.eq) goto loc_828112E4;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828112bc
	if (ctx.cr6.lt) goto loc_828112BC;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828112E4:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828119f0
	if (ctx.cr6.eq) goto loc_828119F0;
	// addi r10,r10,1381
	ctx.r10.s64 = ctx.r10.s64 + 1381;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,12636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12636, ctx.r7.u32);
	// blr 
	return;
loc_82811304:
	// li r8,54
	ctx.r8.s64 = 54;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828113a4
	if (ctx.cr6.eq) goto loc_828113A4;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x828113a4
	if (ctx.cr6.eq) goto loc_828113A4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x828113a4
	if (ctx.cr6.eq) goto loc_828113A4;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x828113a4
	if (ctx.cr6.eq) goto loc_828113A4;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82811348
	if (ctx.cr6.eq) goto loc_82811348;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x82811348
	if (ctx.cr6.eq) goto loc_82811348;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82811348
	if (ctx.cr6.eq) goto loc_82811348;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x828119f0
	if (!ctx.cr6.eq) goto loc_828119F0;
loc_82811348:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_8281135C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 11, ctx.xer);
	// beq cr6,0x82811384
	if (ctx.cr6.eq) goto loc_82811384;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8281135c
	if (ctx.cr6.lt) goto loc_8281135C;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811384:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828119f0
	if (ctx.cr6.eq) goto loc_828119F0;
	// addi r10,r10,1381
	ctx.r10.s64 = ctx.r10.s64 + 1381;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,13488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13488, ctx.r7.u32);
	// blr 
	return;
loc_828113A4:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_828113B8:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 11, ctx.xer);
	// beq cr6,0x828113e0
	if (ctx.cr6.eq) goto loc_828113E0;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828113b8
	if (ctx.cr6.lt) goto loc_828113B8;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828113E0:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828119f0
	if (ctx.cr6.eq) goto loc_828119F0;
	// addi r10,r10,1381
	ctx.r10.s64 = ctx.r10.s64 + 1381;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,12632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12632, ctx.r7.u32);
	// blr 
	return;
loc_82811400:
	// li r8,79
	ctx.r8.s64 = 79;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82811480
	if (ctx.cr6.eq) goto loc_82811480;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x82811480
	if (ctx.cr6.eq) goto loc_82811480;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82811480
	if (ctx.cr6.eq) goto loc_82811480;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x82811480
	if (ctx.cr6.eq) goto loc_82811480;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82811444
	if (ctx.cr6.eq) goto loc_82811444;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x82811444
	if (ctx.cr6.eq) goto loc_82811444;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82811444
	if (ctx.cr6.eq) goto loc_82811444;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x828119f0
	if (!ctx.cr6.eq) goto loc_828119F0;
loc_82811444:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_82811458:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82811384
	if (ctx.cr6.eq) goto loc_82811384;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82811458
	if (ctx.cr6.lt) goto loc_82811458;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811480:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_82811494:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x828113e0
	if (ctx.cr6.eq) goto loc_828113E0;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82811494
	if (ctx.cr6.lt) goto loc_82811494;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828114BC:
	// li r8,49
	ctx.r8.s64 = 49;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8281158c
	if (ctx.cr6.eq) goto loc_8281158C;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x8281158c
	if (ctx.cr6.eq) goto loc_8281158C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8281158c
	if (ctx.cr6.eq) goto loc_8281158C;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x8281158c
	if (ctx.cr6.eq) goto loc_8281158C;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82811500
	if (ctx.cr6.eq) goto loc_82811500;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x82811500
	if (ctx.cr6.eq) goto loc_82811500;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82811500
	if (ctx.cr6.eq) goto loc_82811500;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x828119f0
	if (!ctx.cr6.eq) goto loc_828119F0;
loc_82811500:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82811550
	if (!ctx.cr6.gt) goto loc_82811550;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_82811514:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,79
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 79, ctx.xer);
	// beq cr6,0x82811538
	if (ctx.cr6.eq) goto loc_82811538;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82811514
	if (ctx.cr6.lt) goto loc_82811514;
	// b 0x82811550
	goto loc_82811550;
loc_82811538:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82811550
	if (ctx.cr6.eq) goto loc_82811550;
	// addi r10,r10,1381
	ctx.r10.s64 = ctx.r10.s64 + 1381;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,13488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13488, ctx.r7.u32);
loc_82811550:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_82811564:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82811238
	if (ctx.cr6.eq) goto loc_82811238;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82811564
	if (ctx.cr6.lt) goto loc_82811564;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8281158C:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828115dc
	if (!ctx.cr6.gt) goto loc_828115DC;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_828115A0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,79
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 79, ctx.xer);
	// beq cr6,0x828115c4
	if (ctx.cr6.eq) goto loc_828115C4;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828115a0
	if (ctx.cr6.lt) goto loc_828115A0;
	// b 0x828115dc
	goto loc_828115DC;
loc_828115C4:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x828115dc
	if (ctx.cr6.eq) goto loc_828115DC;
	// addi r10,r10,1381
	ctx.r10.s64 = ctx.r10.s64 + 1381;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,12632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12632, ctx.r7.u32);
loc_828115DC:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_828115F0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x828112e4
	if (ctx.cr6.eq) goto loc_828112E4;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828115f0
	if (ctx.cr6.lt) goto loc_828115F0;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811618:
	// li r8,73
	ctx.r8.s64 = 73;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82811698
	if (ctx.cr6.eq) goto loc_82811698;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x82811698
	if (ctx.cr6.eq) goto loc_82811698;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82811698
	if (ctx.cr6.eq) goto loc_82811698;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x82811698
	if (ctx.cr6.eq) goto loc_82811698;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8281165c
	if (ctx.cr6.eq) goto loc_8281165C;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x8281165c
	if (ctx.cr6.eq) goto loc_8281165C;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8281165c
	if (ctx.cr6.eq) goto loc_8281165C;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x828119f0
	if (!ctx.cr6.eq) goto loc_828119F0;
loc_8281165C:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_82811670:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,131
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 131, ctx.xer);
	// beq cr6,0x82811384
	if (ctx.cr6.eq) goto loc_82811384;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82811670
	if (ctx.cr6.lt) goto loc_82811670;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811698:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_828116AC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,131
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 131, ctx.xer);
	// beq cr6,0x828113e0
	if (ctx.cr6.eq) goto loc_828113E0;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828116ac
	if (ctx.cr6.lt) goto loc_828116AC;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828116D4:
	// li r8,83
	ctx.r8.s64 = 83;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82811754
	if (ctx.cr6.eq) goto loc_82811754;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x82811754
	if (ctx.cr6.eq) goto loc_82811754;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82811754
	if (ctx.cr6.eq) goto loc_82811754;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x82811754
	if (ctx.cr6.eq) goto loc_82811754;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82811718
	if (ctx.cr6.eq) goto loc_82811718;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x82811718
	if (ctx.cr6.eq) goto loc_82811718;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82811718
	if (ctx.cr6.eq) goto loc_82811718;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x828119f0
	if (!ctx.cr6.eq) goto loc_828119F0;
loc_82811718:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_8281172C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// beq cr6,0x82811384
	if (ctx.cr6.eq) goto loc_82811384;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8281172c
	if (ctx.cr6.lt) goto loc_8281172C;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811754:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_82811768:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// beq cr6,0x828113e0
	if (ctx.cr6.eq) goto loc_828113E0;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82811768
	if (ctx.cr6.lt) goto loc_82811768;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811790:
	// li r8,49
	ctx.r8.s64 = 49;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82811810
	if (ctx.cr6.eq) goto loc_82811810;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x82811810
	if (ctx.cr6.eq) goto loc_82811810;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82811810
	if (ctx.cr6.eq) goto loc_82811810;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x82811810
	if (ctx.cr6.eq) goto loc_82811810;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828117d4
	if (ctx.cr6.eq) goto loc_828117D4;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x828117d4
	if (ctx.cr6.eq) goto loc_828117D4;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828117d4
	if (ctx.cr6.eq) goto loc_828117D4;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x828119f0
	if (!ctx.cr6.eq) goto loc_828119F0;
loc_828117D4:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_828117E8:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// beq cr6,0x82811384
	if (ctx.cr6.eq) goto loc_82811384;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828117e8
	if (ctx.cr6.lt) goto loc_828117E8;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811810:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_82811824:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// beq cr6,0x828113e0
	if (ctx.cr6.eq) goto loc_828113E0;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82811824
	if (ctx.cr6.lt) goto loc_82811824;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8281184C:
	// li r8,126
	ctx.r8.s64 = 126;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828118cc
	if (ctx.cr6.eq) goto loc_828118CC;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x828118cc
	if (ctx.cr6.eq) goto loc_828118CC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x828118cc
	if (ctx.cr6.eq) goto loc_828118CC;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x828118cc
	if (ctx.cr6.eq) goto loc_828118CC;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82811890
	if (ctx.cr6.eq) goto loc_82811890;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x82811890
	if (ctx.cr6.eq) goto loc_82811890;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82811890
	if (ctx.cr6.eq) goto loc_82811890;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x828119f0
	if (!ctx.cr6.eq) goto loc_828119F0;
loc_82811890:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_828118A4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,127
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 127, ctx.xer);
	// beq cr6,0x82811384
	if (ctx.cr6.eq) goto loc_82811384;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828118a4
	if (ctx.cr6.lt) goto loc_828118A4;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828118CC:
	// lwz r9,5428(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828119f0
	if (!ctx.cr6.gt) goto loc_828119F0;
	// addi r9,r11,5384
	ctx.r9.s64 = ctx.r11.s64 + 5384;
loc_828118E0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,127
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 127, ctx.xer);
	// beq cr6,0x828113e0
	if (ctx.cr6.eq) goto loc_828113E0;
	// lwz r7,5428(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5428);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x828118e0
	if (ctx.cr6.lt) goto loc_828118E0;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811908:
	// li r8,137
	ctx.r8.s64 = 137;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811914:
	// li r8,136
	ctx.r8.s64 = 136;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811920:
	// li r8,131
	ctx.r8.s64 = 131;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8281192C:
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811938:
	// li r8,119
	ctx.r8.s64 = 119;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811944:
	// li r8,125
	ctx.r8.s64 = 125;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811950:
	// li r8,127
	ctx.r8.s64 = 127;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8281195C:
	// li r8,126
	ctx.r8.s64 = 126;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811968:
	// li r8,93
	ctx.r8.s64 = 93;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811974:
	// li r8,96
	ctx.r8.s64 = 96;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811980:
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8281198C:
	// li r8,54
	ctx.r8.s64 = 54;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82811998:
	// li r8,49
	ctx.r8.s64 = 49;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828119A4:
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828119B0:
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828119BC:
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828119C8:
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828119D4:
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828119E0:
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828119EC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_828119F0:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828119F8"))) PPC_WEAK_FUNC(sub_828119F8);
PPC_FUNC_IMPL(__imp__sub_828119F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2796(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2796);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811A10"))) PPC_WEAK_FUNC(sub_82811A10);
PPC_FUNC_IMPL(__imp__sub_82811A10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811A18"))) PPC_WEAK_FUNC(sub_82811A18);
PPC_FUNC_IMPL(__imp__sub_82811A18) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811a4c
	if (!ctx.cr6.gt) goto loc_82811A4C;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811a4c
	if (!ctx.cr6.lt) goto loc_82811A4C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,19,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811a58
	if (!ctx.cr6.eq) goto loc_82811A58;
loc_82811A4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811A58:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811A64"))) PPC_WEAK_FUNC(sub_82811A64);
PPC_FUNC_IMPL(__imp__sub_82811A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811A68"))) PPC_WEAK_FUNC(sub_82811A68);
PPC_FUNC_IMPL(__imp__sub_82811A68) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811a9c
	if (!ctx.cr6.gt) goto loc_82811A9C;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811a9c
	if (!ctx.cr6.lt) goto loc_82811A9C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,20,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811aa8
	if (!ctx.cr6.eq) goto loc_82811AA8;
loc_82811A9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811AA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811AB4"))) PPC_WEAK_FUNC(sub_82811AB4);
PPC_FUNC_IMPL(__imp__sub_82811AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811AB8"))) PPC_WEAK_FUNC(sub_82811AB8);
PPC_FUNC_IMPL(__imp__sub_82811AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,1000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1000, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r4,2003
	ctx.r10.s64 = ctx.r4.s64 + 2003;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// beq cr6,0x82811af0
	if (ctx.cr6.eq) goto loc_82811AF0;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
loc_82811AF0:
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811AF8"))) PPC_WEAK_FUNC(sub_82811AF8);
PPC_FUNC_IMPL(__imp__sub_82811AF8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811b2c
	if (!ctx.cr6.gt) goto loc_82811B2C;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811b2c
	if (!ctx.cr6.lt) goto loc_82811B2C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,23,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811b38
	if (!ctx.cr6.eq) goto loc_82811B38;
loc_82811B2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811B38:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811B44"))) PPC_WEAK_FUNC(sub_82811B44);
PPC_FUNC_IMPL(__imp__sub_82811B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811B48"))) PPC_WEAK_FUNC(sub_82811B48);
PPC_FUNC_IMPL(__imp__sub_82811B48) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811b7c
	if (!ctx.cr6.gt) goto loc_82811B7C;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811b7c
	if (!ctx.cr6.lt) goto loc_82811B7C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811b88
	if (!ctx.cr6.eq) goto loc_82811B88;
loc_82811B7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811B88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811B94"))) PPC_WEAK_FUNC(sub_82811B94);
PPC_FUNC_IMPL(__imp__sub_82811B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811B98"))) PPC_WEAK_FUNC(sub_82811B98);
PPC_FUNC_IMPL(__imp__sub_82811B98) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811bcc
	if (!ctx.cr6.gt) goto loc_82811BCC;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811bcc
	if (!ctx.cr6.lt) goto loc_82811BCC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,18,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811bd8
	if (!ctx.cr6.eq) goto loc_82811BD8;
loc_82811BCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811BD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811BE4"))) PPC_WEAK_FUNC(sub_82811BE4);
PPC_FUNC_IMPL(__imp__sub_82811BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811BE8"))) PPC_WEAK_FUNC(sub_82811BE8);
PPC_FUNC_IMPL(__imp__sub_82811BE8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,1000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1000, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,1002
	ctx.r10.s64 = ctx.r4.s64 + 1002;
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

__attribute__((alias("__imp__sub_82811C1C"))) PPC_WEAK_FUNC(sub_82811C1C);
PPC_FUNC_IMPL(__imp__sub_82811C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811C20"))) PPC_WEAK_FUNC(sub_82811C20);
PPC_FUNC_IMPL(__imp__sub_82811C20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// ble cr6,0x82811c3c
	if (!ctx.cr6.gt) goto loc_82811C3C;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// blt cr6,0x82811c48
	if (ctx.cr6.lt) goto loc_82811C48;
loc_82811C3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811C48:
	// addi r10,r5,1002
	ctx.r10.s64 = ctx.r5.s64 + 1002;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811C5C"))) PPC_WEAK_FUNC(sub_82811C5C);
PPC_FUNC_IMPL(__imp__sub_82811C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811C60"))) PPC_WEAK_FUNC(sub_82811C60);
PPC_FUNC_IMPL(__imp__sub_82811C60) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811c94
	if (!ctx.cr6.gt) goto loc_82811C94;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811c94
	if (!ctx.cr6.lt) goto loc_82811C94;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811ca0
	if (!ctx.cr6.eq) goto loc_82811CA0;
loc_82811C94:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811CA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811CAC"))) PPC_WEAK_FUNC(sub_82811CAC);
PPC_FUNC_IMPL(__imp__sub_82811CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811CB0"))) PPC_WEAK_FUNC(sub_82811CB0);
PPC_FUNC_IMPL(__imp__sub_82811CB0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811ce4
	if (!ctx.cr6.gt) goto loc_82811CE4;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811ce4
	if (!ctx.cr6.lt) goto loc_82811CE4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811cf0
	if (!ctx.cr6.eq) goto loc_82811CF0;
loc_82811CE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811CF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811CFC"))) PPC_WEAK_FUNC(sub_82811CFC);
PPC_FUNC_IMPL(__imp__sub_82811CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811D00"))) PPC_WEAK_FUNC(sub_82811D00);
PPC_FUNC_IMPL(__imp__sub_82811D00) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811d34
	if (!ctx.cr6.gt) goto loc_82811D34;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811d34
	if (!ctx.cr6.lt) goto loc_82811D34;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811d40
	if (!ctx.cr6.eq) goto loc_82811D40;
loc_82811D34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811D40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811D4C"))) PPC_WEAK_FUNC(sub_82811D4C);
PPC_FUNC_IMPL(__imp__sub_82811D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811D50"))) PPC_WEAK_FUNC(sub_82811D50);
PPC_FUNC_IMPL(__imp__sub_82811D50) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811d84
	if (!ctx.cr6.gt) goto loc_82811D84;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811d84
	if (!ctx.cr6.lt) goto loc_82811D84;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,22,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811d90
	if (!ctx.cr6.eq) goto loc_82811D90;
loc_82811D84:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811D90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811D9C"))) PPC_WEAK_FUNC(sub_82811D9C);
PPC_FUNC_IMPL(__imp__sub_82811D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811DA0"))) PPC_WEAK_FUNC(sub_82811DA0);
PPC_FUNC_IMPL(__imp__sub_82811DA0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811dd4
	if (!ctx.cr6.gt) goto loc_82811DD4;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811dd4
	if (!ctx.cr6.lt) goto loc_82811DD4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811de0
	if (!ctx.cr6.eq) goto loc_82811DE0;
loc_82811DD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811DE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811DEC"))) PPC_WEAK_FUNC(sub_82811DEC);
PPC_FUNC_IMPL(__imp__sub_82811DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811DF0"))) PPC_WEAK_FUNC(sub_82811DF0);
PPC_FUNC_IMPL(__imp__sub_82811DF0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811e20
	if (!ctx.cr6.gt) goto loc_82811E20;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811e20
	if (!ctx.cr6.lt) goto loc_82811E20;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82811e2c
	if (!ctx.cr6.eq) goto loc_82811E2C;
loc_82811E20:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811E2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811E38"))) PPC_WEAK_FUNC(sub_82811E38);
PPC_FUNC_IMPL(__imp__sub_82811E38) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811e6c
	if (!ctx.cr6.gt) goto loc_82811E6C;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811e6c
	if (!ctx.cr6.lt) goto loc_82811E6C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811e78
	if (!ctx.cr6.eq) goto loc_82811E78;
loc_82811E6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811E78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811E84"))) PPC_WEAK_FUNC(sub_82811E84);
PPC_FUNC_IMPL(__imp__sub_82811E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811E88"))) PPC_WEAK_FUNC(sub_82811E88);
PPC_FUNC_IMPL(__imp__sub_82811E88) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811ebc
	if (!ctx.cr6.gt) goto loc_82811EBC;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811ebc
	if (!ctx.cr6.lt) goto loc_82811EBC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,21,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811ec8
	if (!ctx.cr6.eq) goto loc_82811EC8;
loc_82811EBC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811EC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811ED4"))) PPC_WEAK_FUNC(sub_82811ED4);
PPC_FUNC_IMPL(__imp__sub_82811ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811ED8"))) PPC_WEAK_FUNC(sub_82811ED8);
PPC_FUNC_IMPL(__imp__sub_82811ED8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82811f0c
	if (!ctx.cr6.gt) goto loc_82811F0C;
	// cmpwi cr6,r5,1000
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1000, ctx.xer);
	// bge cr6,0x82811f0c
	if (!ctx.cr6.lt) goto loc_82811F0C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,2003
	ctx.r10.s64 = ctx.r5.s64 + 2003;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r5,r6,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82811f18
	if (!ctx.cr6.eq) goto loc_82811F18;
loc_82811F0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82811F18:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811F24"))) PPC_WEAK_FUNC(sub_82811F24);
PPC_FUNC_IMPL(__imp__sub_82811F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811F28"))) PPC_WEAK_FUNC(sub_82811F28);
PPC_FUNC_IMPL(__imp__sub_82811F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,120(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82811f88
	if (ctx.cr6.eq) goto loc_82811F88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82811f68
	if (ctx.cr6.eq) goto loc_82811F68;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82811f90
	if (!ctx.cr6.eq) goto loc_82811F90;
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
loc_82811F68:
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
loc_82811F88:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82811F90:
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

__attribute__((alias("__imp__sub_82811FA4"))) PPC_WEAK_FUNC(sub_82811FA4);
PPC_FUNC_IMPL(__imp__sub_82811FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811FA8"))) PPC_WEAK_FUNC(sub_82811FA8);
PPC_FUNC_IMPL(__imp__sub_82811FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811FC0"))) PPC_WEAK_FUNC(sub_82811FC0);
PPC_FUNC_IMPL(__imp__sub_82811FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,-5
	ctx.r8.s64 = ctx.r11.s64 + -5;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82811FE4"))) PPC_WEAK_FUNC(sub_82811FE4);
PPC_FUNC_IMPL(__imp__sub_82811FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82811FE8"))) PPC_WEAK_FUNC(sub_82811FE8);
PPC_FUNC_IMPL(__imp__sub_82811FE8) {
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

__attribute__((alias("__imp__sub_82812000"))) PPC_WEAK_FUNC(sub_82812000);
PPC_FUNC_IMPL(__imp__sub_82812000) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82812024"))) PPC_WEAK_FUNC(sub_82812024);
PPC_FUNC_IMPL(__imp__sub_82812024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82812028"))) PPC_WEAK_FUNC(sub_82812028);
PPC_FUNC_IMPL(__imp__sub_82812028) {
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

__attribute__((alias("__imp__sub_82812040"))) PPC_WEAK_FUNC(sub_82812040);
PPC_FUNC_IMPL(__imp__sub_82812040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189d4
	ctx.lr = 0x82812048;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lfs f31,27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27476);
	ctx.f31.f64 = double(temp.f32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r19,13192(r26)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// lwz r18,13188(r25)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r17,13180(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13180);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r16,13184(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13184);
	// lwz r27,48(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8281228c
	if (!ctx.cr6.gt) goto loc_8281228C;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r21,r27,508
	ctx.r21.s64 = ctx.r27.s64 + 508;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_828120B8:
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828120ec
	if (ctx.cr6.eq) goto loc_828120EC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828120e4
	if (ctx.cr6.eq) goto loc_828120E4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828120dc
	if (ctx.cr6.eq) goto loc_828120DC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828120f0
	goto loc_828120F0;
loc_828120DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828120f0
	goto loc_828120F0;
loc_828120E4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828120f0
	goto loc_828120F0;
loc_828120EC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_828120F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82812278
	if (ctx.cr6.eq) goto loc_82812278;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82812128
	if (ctx.cr6.eq) goto loc_82812128;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82812120
	if (ctx.cr6.eq) goto loc_82812120;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82812118
	if (ctx.cr6.eq) goto loc_82812118;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8281212c
	goto loc_8281212C;
loc_82812118:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8281212c
	goto loc_8281212C;
loc_82812120:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281212c
	goto loc_8281212C;
loc_82812128:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8281212C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82812278
	if (ctx.cr6.eq) goto loc_82812278;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82812174
	if (ctx.cr6.eq) goto loc_82812174;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8281216c
	if (ctx.cr6.eq) goto loc_8281216C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82812164
	if (ctx.cr6.eq) goto loc_82812164;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82812178
	goto loc_82812178;
loc_82812164:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82812178
	goto loc_82812178;
loc_8281216C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82812178
	goto loc_82812178;
loc_82812174:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82812178:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// cmpw cr6,r7,r15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r15.s32, ctx.xer);
	// bne cr6,0x82812278
	if (!ctx.cr6.eq) goto loc_82812278;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828121ac
	if (ctx.cr6.eq) goto loc_828121AC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828121b0
	if (ctx.cr6.eq) goto loc_828121B0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828121b0
	if (ctx.cr6.eq) goto loc_828121B0;
loc_828121AC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_828121B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x828121B8;
	sub_82804410(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x828121e8
	if (ctx.cr6.eq) goto loc_828121E8;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828121e0
	if (ctx.cr6.eq) goto loc_828121E0;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x828121d8
	if (ctx.cr6.eq) goto loc_828121D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828121ec
	goto loc_828121EC;
loc_828121D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828121ec
	goto loc_828121EC;
loc_828121E0:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x828121ec
	goto loc_828121EC;
loc_828121E8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_828121EC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x828121F4;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
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
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82812270
	if (ctx.cr6.lt) goto loc_82812270;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82812264
	if (ctx.cr6.eq) goto loc_82812264;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x8281225c
	if (ctx.cr6.eq) goto loc_8281225C;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x82812254
	if (ctx.cr6.eq) goto loc_82812254;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82812268
	goto loc_82812268;
loc_82812254:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82812268
	goto loc_82812268;
loc_8281225C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82812268
	goto loc_82812268;
loc_82812264:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82812268:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82812278
	if (!ctx.cr6.eq) goto loc_82812278;
loc_82812270:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_82812278:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828120b8
	if (ctx.cr6.lt) goto loc_828120B8;
loc_8281228C:
	// stw r28,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r28.u32);
	// stw r19,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r19.u32);
	// stw r17,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r17.u32);
	// stw r16,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r16.u32);
	// stw r18,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r18.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82218a24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828122AC"))) PPC_WEAK_FUNC(sub_828122AC);
PPC_FUNC_IMPL(__imp__sub_828122AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828122B0"))) PPC_WEAK_FUNC(sub_828122B0);
PPC_FUNC_IMPL(__imp__sub_828122B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x828122ec
	if (ctx.cr6.eq) goto loc_828122EC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828122dc
	if (ctx.cr6.eq) goto loc_828122DC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x828122f4
	if (!ctx.cr6.eq) goto loc_828122F4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x828122f4
	goto loc_828122F4;
loc_828122DC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828122f4
	goto loc_828122F4;
loc_828122EC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828122F4:
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82812314
	if (ctx.cr6.lt) goto loc_82812314;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// blt cr6,0x82812320
	if (ctx.cr6.lt) goto loc_82812320;
loc_82812314:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82812320:
	// addi r11,r11,61
	ctx.r11.s64 = ctx.r11.s64 + 61;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82812334"))) PPC_WEAK_FUNC(sub_82812334);
PPC_FUNC_IMPL(__imp__sub_82812334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82812338"))) PPC_WEAK_FUNC(sub_82812338);
PPC_FUNC_IMPL(__imp__sub_82812338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82812368"))) PPC_WEAK_FUNC(sub_82812368);
PPC_FUNC_IMPL(__imp__sub_82812368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,2980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2980, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82812380"))) PPC_WEAK_FUNC(sub_82812380);
PPC_FUNC_IMPL(__imp__sub_82812380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2980(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2980);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82812398"))) PPC_WEAK_FUNC(sub_82812398);
PPC_FUNC_IMPL(__imp__sub_82812398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,4020(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4020);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828123B0"))) PPC_WEAK_FUNC(sub_828123B0);
PPC_FUNC_IMPL(__imp__sub_828123B0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828123B8;
	__savegprlr_24(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r9,-1332
	ctx.r6.s64 = ctx.r9.s64 + -1332;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r3,r7,31280
	ctx.r3.s64 = ctx.r7.s64 + 31280;
	// li r10,24309
	ctx.r10.s64 = 24309;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r4,31292
	ctx.r7.s64 = ctx.r4.s64 + 31292;
	// lwz r5,48(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r31,r9,-10968
	ctx.r31.s64 = ctx.r9.s64 + -10968;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r30,24269
	ctx.r30.s64 = 24269;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r6,2988(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2988, ctx.r6.u32);
	// addi r6,r4,-10892
	ctx.r6.s64 = ctx.r4.s64 + -10892;
	// stw r8,3224(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3224, ctx.r8.u32);
	// li r4,24270
	ctx.r4.s64 = 24270;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// stw r11,2748(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2748, ctx.r11.u32);
	// addi r29,r29,-10800
	ctx.r29.s64 = ctx.r29.s64 + -10800;
	// stw r3,2992(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2992, ctx.r3.u32);
	// li r3,24317
	ctx.r3.s64 = 24317;
	// stw r10,3228(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3228, ctx.r10.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// addi r28,r28,-15796
	ctx.r28.s64 = ctx.r28.s64 + -15796;
	// stw r11,2752(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2752, ctx.r11.u32);
	// li r27,24271
	ctx.r27.s64 = 24271;
	// stw r7,2996(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2996, ctx.r7.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r8,3232(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3232, ctx.r8.u32);
	// addi r26,r10,31308
	ctx.r26.s64 = ctx.r10.s64 + 31308;
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// li r25,24259
	ctx.r25.s64 = 24259;
	// stw r11,2756(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2756, ctx.r11.u32);
	// addi r24,r7,31328
	ctx.r24.s64 = ctx.r7.s64 + 31328;
	// stw r31,3048(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3048, ctx.r31.u32);
	// stw r30,3284(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3284, ctx.r30.u32);
	// stw r9,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, ctx.r9.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,2808(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2808, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r6,3052(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3052, ctx.r6.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r4,3288(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3288, ctx.r4.u32);
	// li r30,24266
	ctx.r30.s64 = 24266;
	// stw r9,72(r5)
	PPC_STORE_U32(ctx.r5.u32 + 72, ctx.r9.u32);
	// stw r11,2812(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2812, ctx.r11.u32);
	// stw r29,3056(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3056, ctx.r29.u32);
	// stw r3,3292(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3292, ctx.r3.u32);
	// stw r9,76(r5)
	PPC_STORE_U32(ctx.r5.u32 + 76, ctx.r9.u32);
	// stw r11,2816(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2816, ctx.r11.u32);
	// stw r28,3060(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3060, ctx.r28.u32);
	// stw r27,3296(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3296, ctx.r27.u32);
	// stw r9,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, ctx.r9.u32);
	// stw r11,2820(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2820, ctx.r11.u32);
	// stw r26,3088(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3088, ctx.r26.u32);
	// stw r25,3324(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3324, ctx.r25.u32);
	// stw r9,108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 108, ctx.r9.u32);
	// stw r11,2848(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2848, ctx.r11.u32);
	// stw r24,3092(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3092, ctx.r24.u32);
	// addi r4,r31,31352
	ctx.r4.s64 = ctx.r31.s64 + 31352;
	// stw r30,3328(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3328, ctx.r30.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r9,112(r5)
	PPC_STORE_U32(ctx.r5.u32 + 112, ctx.r9.u32);
	// stw r11,2852(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2852, ctx.r11.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,3012(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3012, ctx.r4.u32);
	// addi r6,r6,31368
	ctx.r6.s64 = ctx.r6.s64 + 31368;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r7,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r7.u32);
	// stw r9,2772(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2772, ctx.r9.u32);
	// addi r3,r3,31380
	ctx.r3.s64 = ctx.r3.s64 + 31380;
	// stw r8,3248(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3248, ctx.r8.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r6,3020(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3020, ctx.r6.u32);
	// addi r6,r4,31392
	ctx.r6.s64 = ctx.r4.s64 + 31392;
	// stw r7,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r9,2780(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2780, ctx.r9.u32);
	// addi r31,r31,31408
	ctx.r31.s64 = ctx.r31.s64 + 31408;
	// stw r8,3256(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3256, ctx.r8.u32);
	// li r30,24239
	ctx.r30.s64 = 24239;
	// stw r3,3024(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3024, ctx.r3.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r7,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r7.u32);
	// addi r4,r4,31428
	ctx.r4.s64 = ctx.r4.s64 + 31428;
	// stw r9,2784(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2784, ctx.r9.u32);
	// li r29,24238
	ctx.r29.s64 = 24238;
	// stw r8,3260(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3260, ctx.r8.u32);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// stw r6,3028(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3028, ctx.r6.u32);
	// addi r3,r3,31448
	ctx.r3.s64 = ctx.r3.s64 + 31448;
	// stw r7,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r7.u32);
	// li r6,24240
	ctx.r6.s64 = 24240;
	// stw r9,2788(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2788, ctx.r9.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r8,3264(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3264, ctx.r8.u32);
	// addi r9,r28,31468
	ctx.r9.s64 = ctx.r28.s64 + 31468;
	// stw r31,3108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3108, ctx.r31.u32);
	// li r31,24242
	ctx.r31.s64 = 24242;
	// stw r30,3344(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3344, ctx.r30.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r10,128(r5)
	PPC_STORE_U32(ctx.r5.u32 + 128, ctx.r10.u32);
	// addi r7,r7,31488
	ctx.r7.s64 = ctx.r7.s64 + 31488;
	// stw r11,2868(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2868, ctx.r11.u32);
	// li r28,24243
	ctx.r28.s64 = 24243;
	// stw r4,3112(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3112, ctx.r4.u32);
	// addi r4,r30,31512
	ctx.r4.s64 = ctx.r30.s64 + 31512;
	// stw r29,3348(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3348, ctx.r29.u32);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// stw r10,132(r5)
	PPC_STORE_U32(ctx.r5.u32 + 132, ctx.r10.u32);
	// li r29,24246
	ctx.r29.s64 = 24246;
	// stw r11,2872(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2872, ctx.r11.u32);
	// stw r3,3116(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3116, ctx.r3.u32);
	// stw r6,3352(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3352, ctx.r6.u32);
	// stw r10,136(r5)
	PPC_STORE_U32(ctx.r5.u32 + 136, ctx.r10.u32);
	// stw r11,2876(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2876, ctx.r11.u32);
	// stw r9,3120(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3120, ctx.r9.u32);
	// stw r31,3356(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3356, ctx.r31.u32);
	// stw r10,140(r5)
	PPC_STORE_U32(ctx.r5.u32 + 140, ctx.r10.u32);
	// stw r11,2880(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2880, ctx.r11.u32);
	// stw r7,3124(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3124, ctx.r7.u32);
	// stw r28,3360(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3360, ctx.r28.u32);
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// stw r10,144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 144, ctx.r10.u32);
	// addi r3,r30,31536
	ctx.r3.s64 = ctx.r30.s64 + 31536;
	// stw r11,2884(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2884, ctx.r11.u32);
	// stw r4,3128(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3128, ctx.r4.u32);
	// stw r29,3364(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3364, ctx.r29.u32);
	// stw r10,148(r5)
	PPC_STORE_U32(ctx.r5.u32 + 148, ctx.r10.u32);
	// stw r11,2888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2888, ctx.r11.u32);
	// li r9,24251
	ctx.r9.s64 = 24251;
	// stw r3,3132(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3132, ctx.r3.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r10,152(r5)
	PPC_STORE_U32(ctx.r5.u32 + 152, ctx.r10.u32);
	// addi r6,r27,31556
	ctx.r6.s64 = ctx.r27.s64 + 31556;
	// stw r9,3368(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3368, ctx.r9.u32);
	// li r4,24257
	ctx.r4.s64 = 24257;
	// stw r11,2892(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2892, ctx.r11.u32);
	// stw r6,3136(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3136, ctx.r6.u32);
	// addi r9,r7,31572
	ctx.r9.s64 = ctx.r7.s64 + 31572;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r4,3372(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3372, ctx.r4.u32);
	// li r7,24249
	ctx.r7.s64 = 24249;
	// stw r10,156(r5)
	PPC_STORE_U32(ctx.r5.u32 + 156, ctx.r10.u32);
	// stw r11,2896(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2896, ctx.r11.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r9,3140(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3140, ctx.r9.u32);
	// addi r4,r3,31592
	ctx.r4.s64 = ctx.r3.s64 + 31592;
	// stw r7,3376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3376, ctx.r7.u32);
	// li r3,24247
	ctx.r3.s64 = 24247;
	// stw r10,160(r5)
	PPC_STORE_U32(ctx.r5.u32 + 160, ctx.r10.u32);
	// addi r7,r6,31616
	ctx.r7.s64 = ctx.r6.s64 + 31616;
	// stw r11,2900(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2900, ctx.r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r4,3144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3144, ctx.r4.u32);
	// li r6,24250
	ctx.r6.s64 = 24250;
	// stw r3,3380(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3380, ctx.r3.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r10,164(r5)
	PPC_STORE_U32(ctx.r5.u32 + 164, ctx.r10.u32);
	// addi r3,r9,31632
	ctx.r3.s64 = ctx.r9.s64 + 31632;
	// stw r11,2904(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2904, ctx.r11.u32);
	// li r9,24252
	ctx.r9.s64 = 24252;
	// stw r7,3148(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3148, ctx.r7.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r6,3384(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3384, ctx.r6.u32);
	// addi r6,r4,31652
	ctx.r6.s64 = ctx.r4.s64 + 31652;
	// stw r10,168(r5)
	PPC_STORE_U32(ctx.r5.u32 + 168, ctx.r10.u32);
	// li r4,24253
	ctx.r4.s64 = 24253;
	// stw r11,2908(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2908, ctx.r11.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r3,3152(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3152, ctx.r3.u32);
	// addi r3,r7,31676
	ctx.r3.s64 = ctx.r7.s64 + 31676;
	// stw r9,3388(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3388, ctx.r9.u32);
	// li r9,24241
	ctx.r9.s64 = 24241;
	// stw r10,172(r5)
	PPC_STORE_U32(ctx.r5.u32 + 172, ctx.r10.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,2912(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2912, ctx.r11.u32);
	// addi r31,r31,31688
	ctx.r31.s64 = ctx.r31.s64 + 31688;
	// stw r6,3156(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3156, ctx.r6.u32);
	// li r6,24245
	ctx.r6.s64 = 24245;
	// stw r4,3392(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3392, ctx.r4.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r10,176(r5)
	PPC_STORE_U32(ctx.r5.u32 + 176, ctx.r10.u32);
	// addi r7,r7,31712
	ctx.r7.s64 = ctx.r7.s64 + 31712;
	// stw r11,2916(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2916, ctx.r11.u32);
	// addi r4,r4,31724
	ctx.r4.s64 = ctx.r4.s64 + 31724;
	// stw r3,3160(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3160, ctx.r3.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r9,3396(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3396, ctx.r9.u32);
	// stw r10,180(r5)
	PPC_STORE_U32(ctx.r5.u32 + 180, ctx.r10.u32);
	// stw r11,2920(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2920, ctx.r11.u32);
	// stw r31,3164(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3164, ctx.r31.u32);
	// stw r6,3400(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3400, ctx.r6.u32);
	// stw r10,184(r5)
	PPC_STORE_U32(ctx.r5.u32 + 184, ctx.r10.u32);
	// stw r11,2924(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2924, ctx.r11.u32);
	// stw r7,3168(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3168, ctx.r7.u32);
	// stw r8,3404(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3404, ctx.r8.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,188(r5)
	PPC_STORE_U32(ctx.r5.u32 + 188, ctx.r10.u32);
	// addi r3,r3,31736
	ctx.r3.s64 = ctx.r3.s64 + 31736;
	// stw r11,2928(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2928, ctx.r11.u32);
	// stw r4,3172(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3172, ctx.r4.u32);
	// stw r8,3408(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3408, ctx.r8.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r10,192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 192, ctx.r10.u32);
	// stw r11,2932(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2932, ctx.r11.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r3,3176(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3176, ctx.r3.u32);
	// addi r4,r7,31764
	ctx.r4.s64 = ctx.r7.s64 + 31764;
	// stw r10,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r10.u32);
	// li r3,1794
	ctx.r3.s64 = 1794;
	// stw r8,3412(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3412, ctx.r8.u32);
	// addi r10,r6,31780
	ctx.r10.s64 = ctx.r6.s64 + 31780;
	// stw r11,2936(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2936, ctx.r11.u32);
	// li r8,1821
	ctx.r8.s64 = 1821;
	// stw r4,3180(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3180, ctx.r4.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r3,3416(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3416, ctx.r3.u32);
	// li r6,1843
	ctx.r6.s64 = 1843;
	// stw r9,200(r5)
	PPC_STORE_U32(ctx.r5.u32 + 200, ctx.r9.u32);
	// addi r4,r7,31800
	ctx.r4.s64 = ctx.r7.s64 + 31800;
	// stw r11,2940(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2940, ctx.r11.u32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r10,3184(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3184, ctx.r10.u32);
	// li r10,1790
	ctx.r10.s64 = 1790;
	// stw r8,3420(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3420, ctx.r8.u32);
	// addi r8,r3,31820
	ctx.r8.s64 = ctx.r3.s64 + 31820;
	// stw r9,204(r5)
	PPC_STORE_U32(ctx.r5.u32 + 204, ctx.r9.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,2944(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2944, ctx.r11.u32);
	// li r3,1808
	ctx.r3.s64 = 1808;
	// stw r4,3188(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3188, ctx.r4.u32);
	// addi r7,r7,31840
	ctx.r7.s64 = ctx.r7.s64 + 31840;
	// stw r6,3424(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3424, ctx.r6.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r9,208(r5)
	PPC_STORE_U32(ctx.r5.u32 + 208, ctx.r9.u32);
	// li r4,3632
	ctx.r4.s64 = 3632;
	// stw r11,2948(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2948, ctx.r11.u32);
	// addi r6,r6,31864
	ctx.r6.s64 = ctx.r6.s64 + 31864;
	// stw r8,3192(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3192, ctx.r8.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r10,3428(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3428, ctx.r10.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r9,212(r5)
	PPC_STORE_U32(ctx.r5.u32 + 212, ctx.r9.u32);
	// addi r8,r8,31884
	ctx.r8.s64 = ctx.r8.s64 + 31884;
	// stw r11,2952(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2952, ctx.r11.u32);
	// li r10,1838
	ctx.r10.s64 = 1838;
	// stw r7,3196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3196, ctx.r7.u32);
	// li r7,3631
	ctx.r7.s64 = 3631;
	// stw r3,3432(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3432, ctx.r3.u32);
	// addi r3,r31,31904
	ctx.r3.s64 = ctx.r31.s64 + 31904;
	// stw r9,216(r5)
	PPC_STORE_U32(ctx.r5.u32 + 216, ctx.r9.u32);
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// stw r11,2956(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2956, ctx.r11.u32);
	// li r30,3633
	ctx.r30.s64 = 3633;
	// stw r6,3200(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3200, ctx.r6.u32);
	// addi r6,r31,31924
	ctx.r6.s64 = ctx.r31.s64 + 31924;
	// stw r4,3436(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3436, ctx.r4.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r9,220(r5)
	PPC_STORE_U32(ctx.r5.u32 + 220, ctx.r9.u32);
	// stw r11,2960(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2960, ctx.r11.u32);
	// stw r8,3204(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3204, ctx.r8.u32);
	// stw r10,3440(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3440, ctx.r10.u32);
	// stw r9,224(r5)
	PPC_STORE_U32(ctx.r5.u32 + 224, ctx.r9.u32);
	// stw r11,2964(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2964, ctx.r11.u32);
	// stw r3,3208(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3208, ctx.r3.u32);
	// stw r7,3444(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3444, ctx.r7.u32);
	// stw r9,228(r5)
	PPC_STORE_U32(ctx.r5.u32 + 228, ctx.r9.u32);
	// stw r11,2968(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2968, ctx.r11.u32);
	// li r31,1811
	ctx.r31.s64 = 1811;
	// stw r6,3212(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3212, ctx.r6.u32);
	// addi r4,r4,31944
	ctx.r4.s64 = ctx.r4.s64 + 31944;
	// stw r30,3448(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3448, ctx.r30.u32);
	// stw r9,232(r5)
	PPC_STORE_U32(ctx.r5.u32 + 232, ctx.r9.u32);
	// stw r11,2972(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2972, ctx.r11.u32);
	// stw r4,3216(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3216, ctx.r4.u32);
	// stw r31,3452(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3452, ctx.r31.u32);
	// stw r9,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r9.u32);
	// stw r11,2976(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2976, ctx.r11.u32);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82812838"))) PPC_WEAK_FUNC(sub_82812838);
PPC_FUNC_IMPL(__imp__sub_82812838) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,3456(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3456);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82812850"))) PPC_WEAK_FUNC(sub_82812850);
PPC_FUNC_IMPL(__imp__sub_82812850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8281286c
	if (ctx.cr6.lt) goto loc_8281286C;
	// cmpwi cr6,r5,58
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 58, ctx.xer);
	// blt cr6,0x82812878
	if (ctx.cr6.lt) goto loc_82812878;
loc_8281286C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82812878:
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281288C"))) PPC_WEAK_FUNC(sub_8281288C);
PPC_FUNC_IMPL(__imp__sub_8281288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82812890"))) PPC_WEAK_FUNC(sub_82812890);
PPC_FUNC_IMPL(__imp__sub_82812890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x828128ac
	if (ctx.cr6.lt) goto loc_828128AC;
	// cmpwi cr6,r5,58
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 58, ctx.xer);
	// blt cr6,0x828128b8
	if (ctx.cr6.lt) goto loc_828128B8;
loc_828128AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828128B8:
	// addi r10,r5,687
	ctx.r10.s64 = ctx.r5.s64 + 687;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828128CC"))) PPC_WEAK_FUNC(sub_828128CC);
PPC_FUNC_IMPL(__imp__sub_828128CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828128D0"))) PPC_WEAK_FUNC(sub_828128D0);
PPC_FUNC_IMPL(__imp__sub_828128D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x828128ec
	if (ctx.cr6.lt) goto loc_828128EC;
	// cmpwi cr6,r5,58
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 58, ctx.xer);
	// blt cr6,0x828128f8
	if (ctx.cr6.lt) goto loc_828128F8;
loc_828128EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828128F8:
	// addi r10,r5,628
	ctx.r10.s64 = ctx.r5.s64 + 628;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281290C"))) PPC_WEAK_FUNC(sub_8281290C);
PPC_FUNC_IMPL(__imp__sub_8281290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82812910"))) PPC_WEAK_FUNC(sub_82812910);
PPC_FUNC_IMPL(__imp__sub_82812910) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82812954
	if (ctx.cr6.eq) goto loc_82812954;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// beq cr6,0x82812954
	if (ctx.cr6.eq) goto loc_82812954;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82812940
	if (ctx.cr6.eq) goto loc_82812940;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bne cr6,0x82812960
	if (!ctx.cr6.eq) goto loc_82812960;
loc_82812934:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82812940:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82812934
	if (!ctx.cr6.eq) goto loc_82812934;
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82812954:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82812960
	if (!ctx.cr6.eq) goto loc_82812960;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82812960:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82812968"))) PPC_WEAK_FUNC(sub_82812968);
PPC_FUNC_IMPL(__imp__sub_82812968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x82812998
	if (ctx.cr6.lt) goto loc_82812998;
	// cmpwi cr6,r5,58
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 58, ctx.xer);
	// bge cr6,0x82812998
	if (!ctx.cr6.lt) goto loc_82812998;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x828129a4
	if (ctx.cr6.eq) goto loc_828129A4;
loc_82812998:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828129A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828129B0"))) PPC_WEAK_FUNC(sub_828129B0);
PPC_FUNC_IMPL(__imp__sub_828129B0) {
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

__attribute__((alias("__imp__sub_828129C8"))) PPC_WEAK_FUNC(sub_828129C8);
PPC_FUNC_IMPL(__imp__sub_828129C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x828129D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,48(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x82812bf0
	if (!ctx.cr6.eq) goto loc_82812BF0;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,288
	ctx.r11.s64 = ctx.r29.s64 + 288;
	// addi r7,r31,7
	ctx.r7.s64 = ctx.r31.s64 + 7;
	// addi r28,r10,-29532
	ctx.r28.s64 = ctx.r10.s64 + -29532;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// lwzx r10,r6,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// beq cr6,0x82812a4c
	if (ctx.cr6.eq) goto loc_82812A4C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82812a44
	if (ctx.cr6.eq) goto loc_82812A44;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82812a3c
	if (ctx.cr6.eq) goto loc_82812A3C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82812a50
	goto loc_82812A50;
loc_82812A3C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82812a50
	goto loc_82812A50;
loc_82812A44:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82812a50
	goto loc_82812A50;
loc_82812A4C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82812A50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82812bf0
	if (ctx.cr6.eq) goto loc_82812BF0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82812a88
	if (ctx.cr6.eq) goto loc_82812A88;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82812a80
	if (ctx.cr6.eq) goto loc_82812A80;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82812a78
	if (ctx.cr6.eq) goto loc_82812A78;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82812a8c
	goto loc_82812A8C;
loc_82812A78:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82812a8c
	goto loc_82812A8C;
loc_82812A80:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82812a8c
	goto loc_82812A8C;
loc_82812A88:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82812A8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82812acc
	if (ctx.cr6.eq) goto loc_82812ACC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82812abc
	if (ctx.cr6.eq) goto loc_82812ABC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82812ac0
	if (ctx.cr6.eq) goto loc_82812AC0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82812ab4
	if (ctx.cr6.eq) goto loc_82812AB4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82812ac0
	goto loc_82812AC0;
loc_82812AB4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82812ac0
	goto loc_82812AC0;
loc_82812ABC:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82812AC0:
	// bl 0x82be51e0
	ctx.lr = 0x82812AC4;
	sub_82BE51E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82812ad4
	if (ctx.cr6.eq) goto loc_82812AD4;
loc_82812ACC:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82812ad8
	goto loc_82812AD8;
loc_82812AD4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82812AD8:
	// addi r11,r31,456
	ctx.r11.s64 = ctx.r31.s64 + 456;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u32);
	// beq cr6,0x82812b14
	if (ctx.cr6.eq) goto loc_82812B14;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82812b0c
	if (ctx.cr6.eq) goto loc_82812B0C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82812b04
	if (ctx.cr6.eq) goto loc_82812B04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82812b18
	goto loc_82812B18;
loc_82812B04:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82812b18
	goto loc_82812B18;
loc_82812B0C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82812b18
	goto loc_82812B18;
loc_82812B14:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82812B18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x82812B20;
	sub_82804410(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stfs f0,1868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1868, temp.u32);
	// stfs f13,1872(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1872, temp.u32);
	// stfs f12,1876(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1876, temp.u32);
	// beq cr6,0x82812b78
	if (ctx.cr6.eq) goto loc_82812B78;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82812b70
	if (ctx.cr6.eq) goto loc_82812B70;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82812b68
	if (ctx.cr6.eq) goto loc_82812B68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82812b7c
	goto loc_82812B7C;
loc_82812B68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82812b7c
	goto loc_82812B7C;
loc_82812B70:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82812b7c
	goto loc_82812B7C;
loc_82812B78:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82812B7C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804270
	ctx.lr = 0x82812B84;
	sub_82804270(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// stfs f13,852(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// stfs f12,856(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// beq cr6,0x82812bcc
	if (ctx.cr6.eq) goto loc_82812BCC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82812bc4
	if (ctx.cr6.eq) goto loc_82812BC4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82812bbc
	if (ctx.cr6.eq) goto loc_82812BBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82812bd0
	goto loc_82812BD0;
loc_82812BBC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82812bd0
	goto loc_82812BD0;
loc_82812BC4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// b 0x82812bd0
	goto loc_82812BD0;
loc_82812BCC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82812BD0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804180
	ctx.lr = 0x82812BD8;
	sub_82804180(ctx, base);
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
	// stfs f0,1292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1292, temp.u32);
	// stfs f13,1296(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1296, temp.u32);
	// stfs f12,1300(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
loc_82812BF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82812BF8"))) PPC_WEAK_FUNC(sub_82812BF8);
PPC_FUNC_IMPL(__imp__sub_82812BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x82812C00;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// blt cr6,0x82812d98
	if (ctx.cr6.lt) goto loc_82812D98;
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bge cr6,0x82812d98
	if (!ctx.cr6.lt) goto loc_82812D98;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r27,1700
	ctx.r11.s64 = ctx.r27.s64 + 1700;
	// lfs f11,1708(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1708);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f10,1700(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1700);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1704(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1704);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// clrlwi r4,r6,1
	ctx.r4.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82812d8c
	if (!ctx.cr6.eq) goto loc_82812D8C;
	// addi r10,r5,129
	ctx.r10.s64 = ctx.r5.s64 + 129;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82812cd0
	if (ctx.cr6.eq) goto loc_82812CD0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82812cc8
	if (ctx.cr6.eq) goto loc_82812CC8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82812cc0
	if (ctx.cr6.eq) goto loc_82812CC0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82812cd4
	goto loc_82812CD4;
loc_82812CC0:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82812cd4
	goto loc_82812CD4;
loc_82812CC8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82812cd4
	goto loc_82812CD4;
loc_82812CD0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82812CD4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82812d98
	if (ctx.cr6.eq) goto loc_82812D98;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82812d04
	if (ctx.cr6.eq) goto loc_82812D04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82812cfc
	if (ctx.cr6.eq) goto loc_82812CFC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82812d08
	if (!ctx.cr6.eq) goto loc_82812D08;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82812d08
	goto loc_82812D08;
loc_82812CFC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82812d08
	goto loc_82812D08;
loc_82812D04:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82812D08:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82812D14;
	sub_82804410(ctx, base);
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82812d40
	if (ctx.cr6.eq) goto loc_82812D40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82812d38
	if (ctx.cr6.eq) goto loc_82812D38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82812d44
	if (!ctx.cr6.eq) goto loc_82812D44;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82812d44
	goto loc_82812D44;
loc_82812D38:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82812d44
	goto loc_82812D44;
loc_82812D40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82812D44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82812d54
	if (ctx.cr6.eq) goto loc_82812D54;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82812d58
	goto loc_82812D58;
loc_82812D54:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82812D58:
	// addi r5,r27,1480
	ctx.r5.s64 = ctx.r27.s64 + 1480;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82747a18
	ctx.lr = 0x82812D64;
	sub_82747A18(ctx, base);
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
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// b 0x82812d98
	goto loc_82812D98;
loc_82812D8C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_82812D98:
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82812DC4"))) PPC_WEAK_FUNC(sub_82812DC4);
PPC_FUNC_IMPL(__imp__sub_82812DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82812DC8"))) PPC_WEAK_FUNC(sub_82812DC8);
PPC_FUNC_IMPL(__imp__sub_82812DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,976
	ctx.r11.s64 = ctx.r11.s64 + 976;
loc_82812DDC:
	// lwz r10,-408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -408);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82812e04
	if (!ctx.cr6.eq) goto loc_82812E04;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82812e20
	if (ctx.cr6.eq) goto loc_82812E20;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82812e20
	if (ctx.cr6.eq) goto loc_82812E20;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82812e20
	if (ctx.cr6.eq) goto loc_82812E20;
loc_82812E04:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// blt cr6,0x82812ddc
	if (ctx.cr6.lt) goto loc_82812DDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82812E20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82812E2C"))) PPC_WEAK_FUNC(sub_82812E2C);
PPC_FUNC_IMPL(__imp__sub_82812E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82812E30"))) PPC_WEAK_FUNC(sub_82812E30);
PPC_FUNC_IMPL(__imp__sub_82812E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,307
	ctx.r10.s64 = ctx.r5.s64 + 307;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82813188
	if (ctx.cr6.eq) goto loc_82813188;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828130fc
	if (ctx.cr6.eq) goto loc_828130FC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82813070
	if (ctx.cr6.eq) goto loc_82813070;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82812fd8
	if (ctx.cr6.eq) goto loc_82812FD8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82812f40
	if (ctx.cr6.eq) goto loc_82812F40;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82812ea8
	if (ctx.cr6.eq) goto loc_82812EA8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82812EA8:
	// addi r10,r5,129
	ctx.r10.s64 = ctx.r5.s64 + 129;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82812ee4
	if (ctx.cr6.eq) goto loc_82812EE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82812ed4
	if (ctx.cr6.eq) goto loc_82812ED4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82812eec
	if (!ctx.cr6.eq) goto loc_82812EEC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82812eec
	goto loc_82812EEC;
loc_82812ED4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82812eec
	goto loc_82812EEC;
loc_82812EE4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82812EEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82812efc
	if (ctx.cr6.eq) goto loc_82812EFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82812f00
	goto loc_82812F00;
loc_82812EFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82812F00:
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f12,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82812F40:
	// addi r10,r5,129
	ctx.r10.s64 = ctx.r5.s64 + 129;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82812f7c
	if (ctx.cr6.eq) goto loc_82812F7C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82812f6c
	if (ctx.cr6.eq) goto loc_82812F6C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82812f84
	if (!ctx.cr6.eq) goto loc_82812F84;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82812f84
	goto loc_82812F84;
loc_82812F6C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82812f84
	goto loc_82812F84;
loc_82812F7C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82812F84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82812f94
	if (ctx.cr6.eq) goto loc_82812F94;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82812f98
	goto loc_82812F98;
loc_82812F94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82812F98:
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_82812FD8:
	// addi r10,r5,129
	ctx.r10.s64 = ctx.r5.s64 + 129;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82813014
	if (ctx.cr6.eq) goto loc_82813014;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82813004
	if (ctx.cr6.eq) goto loc_82813004;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281301c
	if (!ctx.cr6.eq) goto loc_8281301C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281301c
	goto loc_8281301C;
loc_82813004:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8281301c
	goto loc_8281301C;
loc_82813014:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8281301C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281302c
	if (ctx.cr6.eq) goto loc_8281302C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82813030
	goto loc_82813030;
loc_8281302C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82813030:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f10,-12(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f9,-8(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_82813070:
	// addi r10,r5,129
	ctx.r10.s64 = ctx.r5.s64 + 129;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828130ac
	if (ctx.cr6.eq) goto loc_828130AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281309c
	if (ctx.cr6.eq) goto loc_8281309C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828130b4
	if (!ctx.cr6.eq) goto loc_828130B4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828130b4
	goto loc_828130B4;
loc_8281309C:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828130b4
	goto loc_828130B4;
loc_828130AC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828130B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828130c4
	if (ctx.cr6.eq) goto loc_828130C4;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x828130c8
	goto loc_828130C8;
loc_828130C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828130C8:
	// lfs f12,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// blr 
	return;
loc_828130FC:
	// addi r10,r5,129
	ctx.r10.s64 = ctx.r5.s64 + 129;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82813138
	if (ctx.cr6.eq) goto loc_82813138;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82813128
	if (ctx.cr6.eq) goto loc_82813128;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82813140
	if (!ctx.cr6.eq) goto loc_82813140;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82813140
	goto loc_82813140;
loc_82813128:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82813140
	goto loc_82813140;
loc_82813138:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82813140:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82813150
	if (ctx.cr6.eq) goto loc_82813150;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82813154
	goto loc_82813154;
loc_82813150:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82813154:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82813188:
	// addi r10,r5,129
	ctx.r10.s64 = ctx.r5.s64 + 129;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828131c4
	if (ctx.cr6.eq) goto loc_828131C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828131b4
	if (ctx.cr6.eq) goto loc_828131B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828131cc
	if (!ctx.cr6.eq) goto loc_828131CC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828131cc
	goto loc_828131CC;
loc_828131B4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828131cc
	goto loc_828131CC;
loc_828131C4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828131CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828131dc
	if (ctx.cr6.eq) goto loc_828131DC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x828131e0
	goto loc_828131E0;
loc_828131DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828131E0:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813214"))) PPC_WEAK_FUNC(sub_82813214);
PPC_FUNC_IMPL(__imp__sub_82813214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813218"))) PPC_WEAK_FUNC(sub_82813218);
PPC_FUNC_IMPL(__imp__sub_82813218) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r8,r11,568
	ctx.r8.s64 = ctx.r11.s64 + 568;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,-29532(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82813260:
	// lwz r11,-272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -272);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281328c
	if (ctx.cr6.eq) goto loc_8281328C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82813284
	if (ctx.cr6.eq) goto loc_82813284;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82813290
	if (!ctx.cr6.eq) goto loc_82813290;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82813290
	goto loc_82813290;
loc_82813284:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82813290
	goto loc_82813290;
loc_8281328C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82813290:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82813304
	if (ctx.cr6.eq) goto loc_82813304;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82813304
	if (!ctx.cr6.eq) goto loc_82813304;
	// lwz r11,408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 408);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x828132c8
	if (ctx.cr6.eq) goto loc_828132C8;
	// lwz r11,-496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82813304
	if (ctx.cr6.eq) goto loc_82813304;
	// lfs f13,852(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 852);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// b 0x82813300
	goto loc_82813300;
loc_828132C8:
	// lwz r3,-540(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -540);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828132f4
	if (ctx.cr6.eq) goto loc_828132F4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828132ec
	if (ctx.cr6.eq) goto loc_828132EC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828132f8
	if (!ctx.cr6.eq) goto loc_828132F8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x828132f8
	goto loc_828132F8;
loc_828132EC:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x828132f8
	goto loc_828132F8;
loc_828132F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828132F8:
	// bl 0x82be51e0
	ctx.lr = 0x828132FC;
	sub_82BE51E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
loc_82813300:
	// bne cr6,0x82813320
	if (!ctx.cr6.eq) goto loc_82813320;
loc_82813304:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// blt cr6,0x82813260
	if (ctx.cr6.lt) goto loc_82813260;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82813324
	goto loc_82813324;
loc_82813320:
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
loc_82813324:
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

__attribute__((alias("__imp__sub_8281333C"))) PPC_WEAK_FUNC(sub_8281333C);
PPC_FUNC_IMPL(__imp__sub_8281333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813340"))) PPC_WEAK_FUNC(sub_82813340);
PPC_FUNC_IMPL(__imp__sub_82813340) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r8,r11,568
	ctx.r8.s64 = ctx.r11.s64 + 568;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r31,-29532(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82813380:
	// lwz r11,-272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -272);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828133ac
	if (ctx.cr6.eq) goto loc_828133AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828133a4
	if (ctx.cr6.eq) goto loc_828133A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828133b0
	if (!ctx.cr6.eq) goto loc_828133B0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828133b0
	goto loc_828133B0;
loc_828133A4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x828133b0
	goto loc_828133B0;
loc_828133AC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_828133B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82813418
	if (ctx.cr6.eq) goto loc_82813418;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82813418
	if (!ctx.cr6.eq) goto loc_82813418;
	// lwz r11,408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 408);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x828133dc
	if (ctx.cr6.eq) goto loc_828133DC;
	// lwz r11,-496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82813414
	goto loc_82813414;
loc_828133DC:
	// lwz r3,-540(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -540);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82813408
	if (ctx.cr6.eq) goto loc_82813408;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82813400
	if (ctx.cr6.eq) goto loc_82813400;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8281340c
	if (!ctx.cr6.eq) goto loc_8281340C;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x8281340c
	goto loc_8281340C;
loc_82813400:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8281340c
	goto loc_8281340C;
loc_82813408:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8281340C:
	// bl 0x82be51e0
	ctx.lr = 0x82813410;
	sub_82BE51E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
loc_82813414:
	// bne cr6,0x82813434
	if (!ctx.cr6.eq) goto loc_82813434;
loc_82813418:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// blt cr6,0x82813380
	if (ctx.cr6.lt) goto loc_82813380;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82813438
	goto loc_82813438;
loc_82813434:
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
loc_82813438:
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

__attribute__((alias("__imp__sub_82813450"))) PPC_WEAK_FUNC(sub_82813450);
PPC_FUNC_IMPL(__imp__sub_82813450) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82813470
	if (ctx.cr6.eq) goto loc_82813470;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8281347c
	if (!ctx.cr6.eq) goto loc_8281347C;
loc_82813470:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8281347C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813488"))) PPC_WEAK_FUNC(sub_82813488);
PPC_FUNC_IMPL(__imp__sub_82813488) {
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

__attribute__((alias("__imp__sub_828134A0"))) PPC_WEAK_FUNC(sub_828134A0);
PPC_FUNC_IMPL(__imp__sub_828134A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828134c0
	if (ctx.cr6.eq) goto loc_828134C0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x828134cc
	if (!ctx.cr6.eq) goto loc_828134CC;
loc_828134C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828134CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828134D8"))) PPC_WEAK_FUNC(sub_828134D8);
PPC_FUNC_IMPL(__imp__sub_828134D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x828134E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f13,29760(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r29,48(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,-12676
	ctx.r5.s64 = ctx.r11.s64 + -12676;
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r28,r29,28
	ctx.r28.s64 = ctx.r29.s64 + 28;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f12,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f12.f64 = double(temp.f32);
loc_82813528:
	// lwz r11,540(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 540);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281353c
	if (ctx.cr6.eq) goto loc_8281353C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x828137b4
	if (!ctx.cr6.eq) goto loc_828137B4;
loc_8281353C:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,288
	ctx.r10.s64 = ctx.r29.s64 + 288;
loc_82813544:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82813584
	if (ctx.cr6.eq) goto loc_82813584;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281357c
	if (ctx.cr6.eq) goto loc_8281357C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82813588
	if (!ctx.cr6.eq) goto loc_82813588;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82813588
	goto loc_82813588;
loc_8281357C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82813588
	goto loc_82813588;
loc_82813584:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82813588:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82813628
	if (ctx.cr6.eq) goto loc_82813628;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828135a4
	if (ctx.cr6.eq) goto loc_828135A4;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828135a8
	goto loc_828135A8;
loc_828135A4:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_828135A8:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828135e8
	if (ctx.cr6.eq) goto loc_828135E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828135e0
	if (ctx.cr6.eq) goto loc_828135E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828135ec
	if (!ctx.cr6.eq) goto loc_828135EC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828135ec
	goto loc_828135EC;
loc_828135E0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828135ec
	goto loc_828135EC;
loc_828135E8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_828135EC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82813620
	if (ctx.cr6.lt) goto loc_82813620;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82813628
	if (ctx.cr6.eq) goto loc_82813628;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r4,0,18,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82813628
	if (ctx.cr6.eq) goto loc_82813628;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82813628
	goto loc_82813628;
loc_82813620:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82bcac98
	ctx.lr = 0x82813628;
	sub_82BCAC98(ctx, base);
loc_82813628:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// blt cr6,0x82813544
	if (ctx.cr6.lt) goto loc_82813544;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82813668
	if (ctx.cr6.eq) goto loc_82813668;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82813660
	if (ctx.cr6.eq) goto loc_82813660;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82813658
	if (ctx.cr6.eq) goto loc_82813658;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8281366c
	goto loc_8281366C;
loc_82813658:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8281366c
	goto loc_8281366C;
loc_82813660:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8281366c
	goto loc_8281366C;
loc_82813668:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8281366C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828136f4
	if (ctx.cr6.eq) goto loc_828136F4;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82813688
	if (ctx.cr6.eq) goto loc_82813688;
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8281368c
	goto loc_8281368C;
loc_82813688:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_8281368C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828136b4
	if (ctx.cr6.eq) goto loc_828136B4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828136ac
	if (ctx.cr6.eq) goto loc_828136AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828136b8
	if (!ctx.cr6.eq) goto loc_828136B8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828136b8
	goto loc_828136B8;
loc_828136AC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828136b8
	goto loc_828136B8;
loc_828136B4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_828136B8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x828136ec
	if (ctx.cr6.lt) goto loc_828136EC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828136f4
	if (ctx.cr6.eq) goto loc_828136F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828136f4
	if (ctx.cr6.eq) goto loc_828136F4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x828136f4
	goto loc_828136F4;
loc_828136EC:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82bcac98
	ctx.lr = 0x828136F4;
	sub_82BCAC98(ctx, base);
loc_828136F4:
	// lwz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82813728
	if (ctx.cr6.eq) goto loc_82813728;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82813720
	if (ctx.cr6.eq) goto loc_82813720;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82813718
	if (ctx.cr6.eq) goto loc_82813718;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8281372c
	goto loc_8281372C;
loc_82813718:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8281372c
	goto loc_8281372C;
loc_82813720:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x8281372c
	goto loc_8281372C;
loc_82813728:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8281372C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828137b4
	if (ctx.cr6.eq) goto loc_828137B4;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82813748
	if (ctx.cr6.eq) goto loc_82813748;
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8281374c
	goto loc_8281374C;
loc_82813748:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_8281374C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82813774
	if (ctx.cr6.eq) goto loc_82813774;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281376c
	if (ctx.cr6.eq) goto loc_8281376C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82813778
	if (!ctx.cr6.eq) goto loc_82813778;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82813778
	goto loc_82813778;
loc_8281376C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82813778
	goto loc_82813778;
loc_82813774:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82813778:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x828137ac
	if (ctx.cr6.lt) goto loc_828137AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828137b4
	if (ctx.cr6.eq) goto loc_828137B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828137b4
	if (ctx.cr6.eq) goto loc_828137B4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x828137b4
	goto loc_828137B4;
loc_828137AC:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82bcac98
	ctx.lr = 0x828137B4;
	sub_82BCAC98(ctx, base);
loc_828137B4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// blt cr6,0x82813528
	if (ctx.cr6.lt) goto loc_82813528;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828137CC"))) PPC_WEAK_FUNC(sub_828137CC);
PPC_FUNC_IMPL(__imp__sub_828137CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828137D0"))) PPC_WEAK_FUNC(sub_828137D0);
PPC_FUNC_IMPL(__imp__sub_828137D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828137f0
	if (ctx.cr6.eq) goto loc_828137F0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x828137fc
	if (!ctx.cr6.eq) goto loc_828137FC;
loc_828137F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828137FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813808"))) PPC_WEAK_FUNC(sub_82813808);
PPC_FUNC_IMPL(__imp__sub_82813808) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,74
	ctx.r10.s64 = ctx.r5.s64 + 74;
	// addi r9,r5,142
	ctx.r9.s64 = ctx.r5.s64 + 142;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwzx r11,r8,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwzx r9,r7,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82813860
	if (ctx.cr6.eq) goto loc_82813860;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82813850
	if (ctx.cr6.eq) goto loc_82813850;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82813868
	if (!ctx.cr6.eq) goto loc_82813868;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82813868
	goto loc_82813868;
loc_82813850:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82813868
	goto loc_82813868;
loc_82813860:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82813868:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82813878
	if (ctx.cr6.eq) goto loc_82813878;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82813884
	if (!ctx.cr6.eq) goto loc_82813884;
loc_82813878:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82813884:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281388C"))) PPC_WEAK_FUNC(sub_8281388C);
PPC_FUNC_IMPL(__imp__sub_8281388C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813890"))) PPC_WEAK_FUNC(sub_82813890);
PPC_FUNC_IMPL(__imp__sub_82813890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// addi r7,r9,-29532
	ctx.r7.s64 = ctx.r9.s64 + -29532;
	// lwz r10,13180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13180);
	// lwz r6,13188(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// beq cr6,0x828138f4
	if (ctx.cr6.eq) goto loc_828138F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828138ec
	if (ctx.cr6.eq) goto loc_828138EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828138f8
	if (!ctx.cr6.eq) goto loc_828138F8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x828138f8
	goto loc_828138F8;
loc_828138EC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828138f8
	goto loc_828138F8;
loc_828138F4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828138F8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82813920
	if (ctx.cr6.eq) goto loc_82813920;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82813918
	if (ctx.cr6.eq) goto loc_82813918;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82813924
	if (!ctx.cr6.eq) goto loc_82813924;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82813924
	goto loc_82813924;
loc_82813918:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82813924
	goto loc_82813924;
loc_82813920:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82813924:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281393C"))) PPC_WEAK_FUNC(sub_8281393C);
PPC_FUNC_IMPL(__imp__sub_8281393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813940"))) PPC_WEAK_FUNC(sub_82813940);
PPC_FUNC_IMPL(__imp__sub_82813940) {
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
	ctx.lr = 0x82813964;
	sub_82808750(ctx, base);
	// cmpwi cr6,r3,1000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1000, ctx.xer);
	// bne cr6,0x82813a78
	if (!ctx.cr6.eq) goto loc_82813A78;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r4,13188(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13188);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x828139b0
	if (ctx.cr6.eq) goto loc_828139B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828139a8
	if (ctx.cr6.eq) goto loc_828139A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828139b4
	if (!ctx.cr6.eq) goto loc_828139B4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x828139b4
	goto loc_828139B4;
loc_828139A8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828139b4
	goto loc_828139B4;
loc_828139B0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828139B4:
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828139e8
	if (ctx.cr6.eq) goto loc_828139E8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828139e0
	if (ctx.cr6.eq) goto loc_828139E0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828139d8
	if (ctx.cr6.eq) goto loc_828139D8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x828139ec
	goto loc_828139EC;
loc_828139D8:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x828139ec
	goto loc_828139EC;
loc_828139E0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828139ec
	goto loc_828139EC;
loc_828139E8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828139EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82813a04
	if (!ctx.cr6.eq) goto loc_82813A04;
	// stw r5,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r5.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82813A04:
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82813a30
	if (ctx.cr6.eq) goto loc_82813A30;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82813a28
	if (ctx.cr6.eq) goto loc_82813A28;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82813a34
	if (!ctx.cr6.eq) goto loc_82813A34;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82813a34
	goto loc_82813A34;
loc_82813A28:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82813a34
	goto loc_82813A34;
loc_82813A30:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82813A34:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82813a64
	if (ctx.cr6.eq) goto loc_82813A64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82813a5c
	if (ctx.cr6.eq) goto loc_82813A5C;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82813a54
	if (ctx.cr6.eq) goto loc_82813A54;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82813a68
	goto loc_82813A68;
loc_82813A54:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82813a68
	goto loc_82813A68;
loc_82813A5C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82813a68
	goto loc_82813A68;
loc_82813A64:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82813A68:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82813a74
	if (!ctx.cr6.eq) goto loc_82813A74;
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
loc_82813A74:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_82813A78:
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

__attribute__((alias("__imp__sub_82813A8C"))) PPC_WEAK_FUNC(sub_82813A8C);
PPC_FUNC_IMPL(__imp__sub_82813A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813A90"))) PPC_WEAK_FUNC(sub_82813A90);
PPC_FUNC_IMPL(__imp__sub_82813A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,236(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 236, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813AA4"))) PPC_WEAK_FUNC(sub_82813AA4);
PPC_FUNC_IMPL(__imp__sub_82813AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813AA8"))) PPC_WEAK_FUNC(sub_82813AA8);
PPC_FUNC_IMPL(__imp__sub_82813AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82813AB0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad14
	ctx.lr = 0x82813AB8;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,48(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// beq cr6,0x82813b20
	if (ctx.cr6.eq) goto loc_82813B20;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82813b18
	if (ctx.cr6.eq) goto loc_82813B18;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82813b10
	if (ctx.cr6.eq) goto loc_82813B10;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82813b24
	goto loc_82813B24;
loc_82813B10:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82813b24
	goto loc_82813B24;
loc_82813B18:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82813b24
	goto loc_82813B24;
loc_82813B20:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82813B24:
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82813ba4
	if (ctx.cr6.eq) goto loc_82813BA4;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r28,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r28.u32);
	// beq cr6,0x82813b68
	if (ctx.cr6.eq) goto loc_82813B68;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82813b60
	if (ctx.cr6.eq) goto loc_82813B60;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82813b58
	if (ctx.cr6.eq) goto loc_82813B58;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82813b6c
	goto loc_82813B6C;
loc_82813B58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82813b6c
	goto loc_82813B6C;
loc_82813B60:
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82813b6c
	goto loc_82813B6C;
loc_82813B68:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82813B6C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x82813B74;
	sub_82804410(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82804410
	ctx.lr = 0x82813B80;
	sub_82804410(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,-30832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30832);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212c3c0
	ctx.lr = 0x82813B94;
	sub_8212C3C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82813ba8
	if (!ctx.cr6.eq) goto loc_82813BA8;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// b 0x82813ba8
	goto loc_82813BA8;
loc_82813BA4:
	// stw r29,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r29.u32);
loc_82813BA8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f29,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// stfs f30,148(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r29,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// stfs f28,236(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stw r27,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r27.u32);
	// stfs f27,152(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f0,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8221ad60
	ctx.lr = 0x82813BE0;
	__restfpr_27(ctx, base);
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82813BE4"))) PPC_WEAK_FUNC(sub_82813BE4);
PPC_FUNC_IMPL(__imp__sub_82813BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813BE8"))) PPC_WEAK_FUNC(sub_82813BE8);
PPC_FUNC_IMPL(__imp__sub_82813BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stfs f1,92(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 92, temp.u32);
	// stw r10,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r10.u32);
	// stfs f2,176(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 176, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813C08"))) PPC_WEAK_FUNC(sub_82813C08);
PPC_FUNC_IMPL(__imp__sub_82813C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f1,228(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 228, temp.u32);
	// stw r10,112(r7)
	PPC_STORE_U32(ctx.r7.u32 + 112, ctx.r10.u32);
	// stfs f2,100(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 100, temp.u32);
	// stw r9,180(r7)
	PPC_STORE_U32(ctx.r7.u32 + 180, ctx.r9.u32);
	// stfs f3,156(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 156, temp.u32);
	// stfs f4,168(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 168, temp.u32);
	// stfs f5,224(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 224, temp.u32);
	// stfs f6,232(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 232, temp.u32);
	// stfs f7,164(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 164, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813C44"))) PPC_WEAK_FUNC(sub_82813C44);
PPC_FUNC_IMPL(__imp__sub_82813C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813C48"))) PPC_WEAK_FUNC(sub_82813C48);
PPC_FUNC_IMPL(__imp__sub_82813C48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82813c88
	if (ctx.cr6.eq) goto loc_82813C88;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82813c78
	if (ctx.cr6.eq) goto loc_82813C78;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82813c90
	if (ctx.cr6.eq) goto loc_82813C90;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82813c90
	goto loc_82813C90;
loc_82813C78:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82813c90
	goto loc_82813C90;
loc_82813C88:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82813C90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813CA0"))) PPC_WEAK_FUNC(sub_82813CA0);
PPC_FUNC_IMPL(__imp__sub_82813CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12492(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f1,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,64(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82813cd0
	if (ctx.cr6.eq) goto loc_82813CD0;
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82813cd8
	goto loc_82813CD8;
loc_82813CD0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_82813CD8:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f2,40(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813CF4"))) PPC_WEAK_FUNC(sub_82813CF4);
PPC_FUNC_IMPL(__imp__sub_82813CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813CF8"))) PPC_WEAK_FUNC(sub_82813CF8);
PPC_FUNC_IMPL(__imp__sub_82813CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813CFC"))) PPC_WEAK_FUNC(sub_82813CFC);
PPC_FUNC_IMPL(__imp__sub_82813CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813D00"))) PPC_WEAK_FUNC(sub_82813D00);
PPC_FUNC_IMPL(__imp__sub_82813D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r8,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r8.u32);
	// stfs f2,32(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f3,36(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f4,56(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813D24"))) PPC_WEAK_FUNC(sub_82813D24);
PPC_FUNC_IMPL(__imp__sub_82813D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82813D28"))) PPC_WEAK_FUNC(sub_82813D28);
PPC_FUNC_IMPL(__imp__sub_82813D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r7,156(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r7,r9,116
	ctx.r7.s64 = ctx.r9.s64 + 116;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82813D58:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82813d8c
	if (ctx.cr6.eq) goto loc_82813D8C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82813d84
	if (ctx.cr6.eq) goto loc_82813D84;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82813d7c
	if (ctx.cr6.eq) goto loc_82813D7C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82813d90
	goto loc_82813D90;
loc_82813D7C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82813d90
	goto loc_82813D90;
loc_82813D84:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82813d90
	goto loc_82813D90;
loc_82813D8C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82813D90:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82813dc0
	if (ctx.cr6.eq) goto loc_82813DC0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82813db8
	if (ctx.cr6.eq) goto loc_82813DB8;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82813db0
	if (ctx.cr6.eq) goto loc_82813DB0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82813dc4
	goto loc_82813DC4;
loc_82813DB0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82813dc4
	goto loc_82813DC4;
loc_82813DB8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82813dc4
	goto loc_82813DC4;
loc_82813DC0:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82813DC4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82813de4
	if (ctx.cr6.eq) goto loc_82813DE4;
	// lwz r11,156(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82813d58
	if (ctx.cr6.lt) goto loc_82813D58;
	// blr 
	return;
loc_82813DE4:
	// addi r11,r8,29
	ctx.r11.s64 = ctx.r8.s64 + 29;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r10,184(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// addi r8,r10,29
	ctx.r8.s64 = ctx.r10.s64 + 29;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// lwz r11,184(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 184, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82813E20"))) PPC_WEAK_FUNC(sub_82813E20);
PPC_FUNC_IMPL(__imp__sub_82813E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82813E28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82813ef4
	if (ctx.cr6.eq) goto loc_82813EF4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82813f78
	if (!ctx.cr6.eq) goto loc_82813F78;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82813e90
	if (ctx.cr6.eq) goto loc_82813E90;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82813e88
	if (ctx.cr6.eq) goto loc_82813E88;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82813e80
	if (ctx.cr6.eq) goto loc_82813E80;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82813e94
	goto loc_82813E94;
loc_82813E80:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82813e94
	goto loc_82813E94;
loc_82813E88:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82813e94
	goto loc_82813E94;
loc_82813E90:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82813E94:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f10,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-4012(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stfs f11,188(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 188, temp.u32);
	// stw r11,172(r6)
	PPC_STORE_U32(ctx.r6.u32 + 172, ctx.r11.u32);
	// stfs f9,104(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 104, temp.u32);
	// stw r27,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r27.u32);
	// stfs f10,148(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 148, temp.u32);
	// stw r11,112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 112, ctx.r11.u32);
	// stfs f0,200(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// stw r27,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r27.u32);
	// stfs f12,236(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 236, temp.u32);
	// stw r8,204(r6)
	PPC_STORE_U32(ctx.r6.u32 + 204, ctx.r8.u32);
	// stfs f13,152(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 152, temp.u32);
	// b 0x82813f78
	goto loc_82813F78;
loc_82813EF4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82813f28
	if (ctx.cr6.eq) goto loc_82813F28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82813f20
	if (ctx.cr6.eq) goto loc_82813F20;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82813f2c
	if (!ctx.cr6.eq) goto loc_82813F2C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82813f2c
	goto loc_82813F2C;
loc_82813F20:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82813f2c
	goto loc_82813F2C;
loc_82813F28:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82813F2C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82813f54
	if (ctx.cr6.eq) goto loc_82813F54;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82813f58
	if (ctx.cr6.eq) goto loc_82813F58;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82813f4c
	if (ctx.cr6.eq) goto loc_82813F4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82813f58
	goto loc_82813F58;
loc_82813F4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82813f58
	goto loc_82813F58;
loc_82813F54:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82813F58:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lfs f5,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// lwz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lfs f3,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82813aa8
	ctx.lr = 0x82813F78;
	sub_82813AA8(ctx, base);
loc_82813F78:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82814048
	if (ctx.cr6.eq) goto loc_82814048;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8281409c
	if (!ctx.cr6.eq) goto loc_8281409C;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82813fc0
	if (ctx.cr6.eq) goto loc_82813FC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82813fb8
	if (ctx.cr6.eq) goto loc_82813FB8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82813fc4
	if (!ctx.cr6.eq) goto loc_82813FC4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82813fc4
	goto loc_82813FC4;
loc_82813FB8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82813fc4
	goto loc_82813FC4;
loc_82813FC0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82813FC4:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82813ff0
	if (ctx.cr6.eq) goto loc_82813FF0;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82813fec
	if (ctx.cr6.eq) goto loc_82813FEC;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82813fe4
	if (ctx.cr6.eq) goto loc_82813FE4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82813ff0
	goto loc_82813FF0;
loc_82813FE4:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82813ff0
	goto loc_82813FF0;
loc_82813FEC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82813FF0:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f8,228(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 228, temp.u32);
	// stw r9,112(r7)
	PPC_STORE_U32(ctx.r7.u32 + 112, ctx.r9.u32);
	// stfs f9,100(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 100, temp.u32);
	// stw r11,180(r7)
	PPC_STORE_U32(ctx.r7.u32 + 180, ctx.r11.u32);
	// stfs f10,156(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 156, temp.u32);
	// stfs f11,168(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 168, temp.u32);
	// stfs f12,224(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 224, temp.u32);
	// stfs f13,232(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 232, temp.u32);
	// stfs f0,164(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 164, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_82814048:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82814078
	if (ctx.cr6.eq) goto loc_82814078;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82814070
	if (ctx.cr6.eq) goto loc_82814070;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82814068
	if (ctx.cr6.eq) goto loc_82814068;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8281407c
	goto loc_8281407C;
loc_82814068:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x8281407c
	goto loc_8281407C;
loc_82814070:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8281407c
	goto loc_8281407C;
loc_82814078:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8281407C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f13,92(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 92, temp.u32);
	// stw r27,112(r9)
	PPC_STORE_U32(ctx.r9.u32 + 112, ctx.r27.u32);
	// stfs f0,176(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 176, temp.u32);
loc_8281409C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828140A4"))) PPC_WEAK_FUNC(sub_828140A4);
PPC_FUNC_IMPL(__imp__sub_828140A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828140A8"))) PPC_WEAK_FUNC(sub_828140A8);
PPC_FUNC_IMPL(__imp__sub_828140A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x828140B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82804410
	ctx.lr = 0x828140D0;
	sub_82804410(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82814100
	if (ctx.cr6.eq) goto loc_82814100;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828140fc
	if (ctx.cr6.eq) goto loc_828140FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82814100
	if (!ctx.cr6.eq) goto loc_82814100;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82814100
	goto loc_82814100;
loc_828140FC:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82814100:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x8281410C;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
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
	// lfs f5,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fcmpu cr6,f1,f5
	ctx.cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// bgt cr6,0x82814154
	if (ctx.cr6.gt) goto loc_82814154;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82814154:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82814160"))) PPC_WEAK_FUNC(sub_82814160);
PPC_FUNC_IMPL(__imp__sub_82814160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814184"))) PPC_WEAK_FUNC(sub_82814184);
PPC_FUNC_IMPL(__imp__sub_82814184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814188"))) PPC_WEAK_FUNC(sub_82814188);
PPC_FUNC_IMPL(__imp__sub_82814188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// addi r5,r9,-29532
	ctx.r5.s64 = ctx.r9.s64 + -29532;
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// lwz r8,-29532(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r10,13412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r6,13188(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,80(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828141e8
	if (ctx.cr6.eq) goto loc_828141E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828141e0
	if (ctx.cr6.eq) goto loc_828141E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828141ec
	if (!ctx.cr6.eq) goto loc_828141EC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x828141ec
	goto loc_828141EC;
loc_828141E0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828141ec
	goto loc_828141EC;
loc_828141E8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828141EC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8281421c
	if (ctx.cr6.eq) goto loc_8281421C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82814214
	if (ctx.cr6.eq) goto loc_82814214;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8281420c
	if (ctx.cr6.eq) goto loc_8281420C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82814220
	goto loc_82814220;
loc_8281420C:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82814220
	goto loc_82814220;
loc_82814214:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82814220
	goto loc_82814220;
loc_8281421C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82814220:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828142ac
	if (ctx.cr6.eq) goto loc_828142AC;
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281425c
	if (ctx.cr6.eq) goto loc_8281425C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82814254
	if (ctx.cr6.eq) goto loc_82814254;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281424c
	if (ctx.cr6.eq) goto loc_8281424C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82814260
	goto loc_82814260;
loc_8281424C:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82814260
	goto loc_82814260;
loc_82814254:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82814260
	goto loc_82814260;
loc_8281425C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82814260:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82814290
	if (ctx.cr6.eq) goto loc_82814290;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82814288
	if (ctx.cr6.eq) goto loc_82814288;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82814280
	if (ctx.cr6.eq) goto loc_82814280;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82814294
	goto loc_82814294;
loc_82814280:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82814294
	goto loc_82814294;
loc_82814288:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82814294
	goto loc_82814294;
loc_82814290:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82814294:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r5)
	PPC_STORE_U32(ctx.r5.u32 + 76, ctx.r11.u32);
	// blr 
	return;
loc_828142AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// stw r11,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828142BC"))) PPC_WEAK_FUNC(sub_828142BC);
PPC_FUNC_IMPL(__imp__sub_828142BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828142C0"))) PPC_WEAK_FUNC(sub_828142C0);
PPC_FUNC_IMPL(__imp__sub_828142C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828142E4"))) PPC_WEAK_FUNC(sub_828142E4);
PPC_FUNC_IMPL(__imp__sub_828142E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828142E8"))) PPC_WEAK_FUNC(sub_828142E8);
PPC_FUNC_IMPL(__imp__sub_828142E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x828142F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r29,48(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r3,60(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82814338
	if (ctx.cr6.eq) goto loc_82814338;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82814330
	if (ctx.cr6.eq) goto loc_82814330;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8281433c
	if (!ctx.cr6.eq) goto loc_8281433C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8281433c
	goto loc_8281433C;
loc_82814330:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8281433c
	goto loc_8281433C;
loc_82814338:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8281433C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x82814344;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stfs f13,16(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// stfs f12,20(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// beq cr6,0x8281439c
	if (ctx.cr6.eq) goto loc_8281439C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82814394
	if (ctx.cr6.eq) goto loc_82814394;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8281438c
	if (ctx.cr6.eq) goto loc_8281438C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828143a0
	goto loc_828143A0;
loc_8281438C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x828143a0
	goto loc_828143A0;
loc_82814394:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828143a0
	goto loc_828143A0;
loc_8281439C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828143A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828143f8
	if (ctx.cr6.eq) goto loc_828143F8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828143d0
	if (ctx.cr6.eq) goto loc_828143D0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828143c8
	if (ctx.cr6.eq) goto loc_828143C8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828143d4
	if (!ctx.cr6.eq) goto loc_828143D4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x828143d4
	goto loc_828143D4;
loc_828143C8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828143d4
	goto loc_828143D4;
loc_828143D0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828143D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x828143E0;
	sub_82804410(ctx, base);
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
	// stfs f0,28(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// stfs f13,32(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// b 0x8281440c
	goto loc_8281440C;
loc_828143F8:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_8281440C:
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// stfs f12,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,0(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// beq cr6,0x828144ac
	if (ctx.cr6.eq) goto loc_828144AC;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82124928
	ctx.lr = 0x82814494;
	sub_82124928(ctx, base);
	// lfs f5,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,84(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
	// stfs f4,88(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 88, temp.u32);
	// stfs f3,92(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
loc_828144AC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828144e8
	if (ctx.cr6.eq) goto loc_828144E8;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828144e8
	if (ctx.cr6.eq) goto loc_828144E8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828144e8
	if (ctx.cr6.eq) goto loc_828144E8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x828144ec
	if (!ctx.cr6.eq) goto loc_828144EC;
loc_828144E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828144EC:
	// stw r11,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828144F8"))) PPC_WEAK_FUNC(sub_828144F8);
PPC_FUNC_IMPL(__imp__sub_828144F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f11,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12492(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12492);
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82814568
	if (ctx.cr6.eq) goto loc_82814568;
	// lfs f12,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82814544
	if (ctx.cr6.gt) goto loc_82814544;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82814568
	if (!ctx.cr6.lt) goto loc_82814568;
	// stfs f11,72(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// b 0x82814568
	goto loc_82814568;
loc_82814544:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f10,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281455c
	if (ctx.cr6.eq) goto loc_8281455C;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82814560
	goto loc_82814560;
loc_8281455C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82814560:
	// fnmsubs f13,f13,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f10.f64 - ctx.f12.f64)));
	// stfs f13,72(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
loc_82814568:
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82814584
	if (ctx.cr6.gt) goto loc_82814584;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f11,64(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// blr 
	return;
loc_82814584:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f12,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82814598
	if (ctx.cr6.eq) goto loc_82814598;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
loc_82814598:
	// fnmsubs f0,f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// stfs f0,64(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828145A4"))) PPC_WEAK_FUNC(sub_828145A4);
PPC_FUNC_IMPL(__imp__sub_828145A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828145A8"))) PPC_WEAK_FUNC(sub_828145A8);
PPC_FUNC_IMPL(__imp__sub_828145A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828145CC"))) PPC_WEAK_FUNC(sub_828145CC);
PPC_FUNC_IMPL(__imp__sub_828145CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828145D0"))) PPC_WEAK_FUNC(sub_828145D0);
PPC_FUNC_IMPL(__imp__sub_828145D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
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

__attribute__((alias("__imp__sub_828145F4"))) PPC_WEAK_FUNC(sub_828145F4);
PPC_FUNC_IMPL(__imp__sub_828145F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828145F8"))) PPC_WEAK_FUNC(sub_828145F8);
PPC_FUNC_IMPL(__imp__sub_828145F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
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

__attribute__((alias("__imp__sub_8281461C"))) PPC_WEAK_FUNC(sub_8281461C);
PPC_FUNC_IMPL(__imp__sub_8281461C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814620"))) PPC_WEAK_FUNC(sub_82814620);
PPC_FUNC_IMPL(__imp__sub_82814620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814644"))) PPC_WEAK_FUNC(sub_82814644);
PPC_FUNC_IMPL(__imp__sub_82814644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814648"))) PPC_WEAK_FUNC(sub_82814648);
PPC_FUNC_IMPL(__imp__sub_82814648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82814684
	if (ctx.cr6.eq) goto loc_82814684;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82814674
	if (ctx.cr6.eq) goto loc_82814674;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8281468c
	if (!ctx.cr6.eq) goto loc_8281468C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8281468c
	goto loc_8281468C;
loc_82814674:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8281468c
	goto loc_8281468C;
loc_82814684:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r4,-29532(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8281468C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 + 72;
loc_82814694:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828146b4
	if (ctx.cr6.eq) goto loc_828146B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82814694
	if (ctx.cr6.lt) goto loc_82814694;
	// blr 
	return;
loc_828146B4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828146DC"))) PPC_WEAK_FUNC(sub_828146DC);
PPC_FUNC_IMPL(__imp__sub_828146DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828146E0"))) PPC_WEAK_FUNC(sub_828146E0);
PPC_FUNC_IMPL(__imp__sub_828146E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814704"))) PPC_WEAK_FUNC(sub_82814704);
PPC_FUNC_IMPL(__imp__sub_82814704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814708"))) PPC_WEAK_FUNC(sub_82814708);
PPC_FUNC_IMPL(__imp__sub_82814708) {
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
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8281472c
	if (!ctx.cr6.lt) goto loc_8281472C;
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
loc_8281472C:
	// lfs f13,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814740"))) PPC_WEAK_FUNC(sub_82814740);
PPC_FUNC_IMPL(__imp__sub_82814740) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82814764
	if (ctx.cr6.eq) goto loc_82814764;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82814770
	if (ctx.cr6.eq) goto loc_82814770;
loc_82814764:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82814770:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281477C"))) PPC_WEAK_FUNC(sub_8281477C);
PPC_FUNC_IMPL(__imp__sub_8281477C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814780"))) PPC_WEAK_FUNC(sub_82814780);
PPC_FUNC_IMPL(__imp__sub_82814780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828147a4
	if (ctx.cr6.eq) goto loc_828147A4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828147b0
	if (ctx.cr6.eq) goto loc_828147B0;
loc_828147A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828147B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828147BC"))) PPC_WEAK_FUNC(sub_828147BC);
PPC_FUNC_IMPL(__imp__sub_828147BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828147C0"))) PPC_WEAK_FUNC(sub_828147C0);
PPC_FUNC_IMPL(__imp__sub_828147C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828147E4"))) PPC_WEAK_FUNC(sub_828147E4);
PPC_FUNC_IMPL(__imp__sub_828147E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828147E8"))) PPC_WEAK_FUNC(sub_828147E8);
PPC_FUNC_IMPL(__imp__sub_828147E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828147EC"))) PPC_WEAK_FUNC(sub_828147EC);
PPC_FUNC_IMPL(__imp__sub_828147EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828147F0"))) PPC_WEAK_FUNC(sub_828147F0);
PPC_FUNC_IMPL(__imp__sub_828147F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814808"))) PPC_WEAK_FUNC(sub_82814808);
PPC_FUNC_IMPL(__imp__sub_82814808) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82814848
	if (ctx.cr6.eq) goto loc_82814848;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82814838
	if (ctx.cr6.eq) goto loc_82814838;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82814850
	if (!ctx.cr6.eq) goto loc_82814850;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82814850
	goto loc_82814850;
loc_82814838:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82814850
	goto loc_82814850;
loc_82814848:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82814850:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r3,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814860"))) PPC_WEAK_FUNC(sub_82814860);
PPC_FUNC_IMPL(__imp__sub_82814860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814884"))) PPC_WEAK_FUNC(sub_82814884);
PPC_FUNC_IMPL(__imp__sub_82814884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814888"))) PPC_WEAK_FUNC(sub_82814888);
PPC_FUNC_IMPL(__imp__sub_82814888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
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

__attribute__((alias("__imp__sub_828148AC"))) PPC_WEAK_FUNC(sub_828148AC);
PPC_FUNC_IMPL(__imp__sub_828148AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828148B0"))) PPC_WEAK_FUNC(sub_828148B0);
PPC_FUNC_IMPL(__imp__sub_828148B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
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

__attribute__((alias("__imp__sub_828148D4"))) PPC_WEAK_FUNC(sub_828148D4);
PPC_FUNC_IMPL(__imp__sub_828148D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828148D8"))) PPC_WEAK_FUNC(sub_828148D8);
PPC_FUNC_IMPL(__imp__sub_828148D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828148DC"))) PPC_WEAK_FUNC(sub_828148DC);
PPC_FUNC_IMPL(__imp__sub_828148DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828148E0"))) PPC_WEAK_FUNC(sub_828148E0);
PPC_FUNC_IMPL(__imp__sub_828148E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828148E4"))) PPC_WEAK_FUNC(sub_828148E4);
PPC_FUNC_IMPL(__imp__sub_828148E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828148E8"))) PPC_WEAK_FUNC(sub_828148E8);
PPC_FUNC_IMPL(__imp__sub_828148E8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r10,13180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13180);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r31,13188(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r5,24(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82814950
	if (ctx.cr6.eq) goto loc_82814950;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82814948
	if (ctx.cr6.eq) goto loc_82814948;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82814940
	if (ctx.cr6.eq) goto loc_82814940;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82814954
	goto loc_82814954;
loc_82814940:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82814954
	goto loc_82814954;
loc_82814948:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82814954
	goto loc_82814954;
loc_82814950:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82814954:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828149ec
	if (ctx.cr6.eq) goto loc_828149EC;
	// addi r9,r10,168
	ctx.r9.s64 = ctx.r10.s64 + 168;
	// li r3,5
	ctx.r3.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82814968:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82814998
	if (ctx.cr6.eq) goto loc_82814998;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82814990
	if (ctx.cr6.eq) goto loc_82814990;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82814988
	if (ctx.cr6.eq) goto loc_82814988;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8281499c
	goto loc_8281499C;
loc_82814988:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8281499c
	goto loc_8281499C;
loc_82814990:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8281499c
	goto loc_8281499C;
loc_82814998:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8281499C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828149c8
	if (ctx.cr6.eq) goto loc_828149C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828149c0
	if (ctx.cr6.eq) goto loc_828149C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828149cc
	if (!ctx.cr6.eq) goto loc_828149CC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x828149cc
	goto loc_828149CC;
loc_828149C0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828149cc
	goto loc_828149CC;
loc_828149C8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_828149CC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828149e0
	if (!ctx.cr6.eq) goto loc_828149E0;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_828149E0:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82814968
	if (!ctx.cr0.eq) goto loc_82814968;
loc_828149EC:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828149F8"))) PPC_WEAK_FUNC(sub_828149F8);
PPC_FUNC_IMPL(__imp__sub_828149F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828149FC"))) PPC_WEAK_FUNC(sub_828149FC);
PPC_FUNC_IMPL(__imp__sub_828149FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814A00"))) PPC_WEAK_FUNC(sub_82814A00);
PPC_FUNC_IMPL(__imp__sub_82814A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814A04"))) PPC_WEAK_FUNC(sub_82814A04);
PPC_FUNC_IMPL(__imp__sub_82814A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814A08"))) PPC_WEAK_FUNC(sub_82814A08);
PPC_FUNC_IMPL(__imp__sub_82814A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r11,152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x82814a5c
	if (ctx.cr6.eq) goto loc_82814A5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82814a54
	if (ctx.cr6.eq) goto loc_82814A54;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82814a60
	if (!ctx.cr6.eq) goto loc_82814A60;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82814a60
	goto loc_82814A60;
loc_82814A54:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82814a60
	goto loc_82814A60;
loc_82814A5C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82814A60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82814a94
	if (ctx.cr6.eq) goto loc_82814A94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82814a8c
	if (ctx.cr6.eq) goto loc_82814A8C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82814a98
	if (!ctx.cr6.eq) goto loc_82814A98;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82814a98
	goto loc_82814A98;
loc_82814A8C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82814a98
	goto loc_82814A98;
loc_82814A94:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82814A98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814AAC"))) PPC_WEAK_FUNC(sub_82814AAC);
PPC_FUNC_IMPL(__imp__sub_82814AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814AB0"))) PPC_WEAK_FUNC(sub_82814AB0);
PPC_FUNC_IMPL(__imp__sub_82814AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814AD4"))) PPC_WEAK_FUNC(sub_82814AD4);
PPC_FUNC_IMPL(__imp__sub_82814AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814AD8"))) PPC_WEAK_FUNC(sub_82814AD8);
PPC_FUNC_IMPL(__imp__sub_82814AD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814AEC"))) PPC_WEAK_FUNC(sub_82814AEC);
PPC_FUNC_IMPL(__imp__sub_82814AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814AF0"))) PPC_WEAK_FUNC(sub_82814AF0);
PPC_FUNC_IMPL(__imp__sub_82814AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82814b14
	if (ctx.cr6.eq) goto loc_82814B14;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82814b20
	if (ctx.cr6.eq) goto loc_82814B20;
loc_82814B14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82814B20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814B2C"))) PPC_WEAK_FUNC(sub_82814B2C);
PPC_FUNC_IMPL(__imp__sub_82814B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814B30"))) PPC_WEAK_FUNC(sub_82814B30);
PPC_FUNC_IMPL(__imp__sub_82814B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82814b54
	if (ctx.cr6.eq) goto loc_82814B54;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82814b60
	if (ctx.cr6.eq) goto loc_82814B60;
loc_82814B54:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82814B60:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814B6C"))) PPC_WEAK_FUNC(sub_82814B6C);
PPC_FUNC_IMPL(__imp__sub_82814B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814B70"))) PPC_WEAK_FUNC(sub_82814B70);
PPC_FUNC_IMPL(__imp__sub_82814B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814B74"))) PPC_WEAK_FUNC(sub_82814B74);
PPC_FUNC_IMPL(__imp__sub_82814B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814B78"))) PPC_WEAK_FUNC(sub_82814B78);
PPC_FUNC_IMPL(__imp__sub_82814B78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814B7C"))) PPC_WEAK_FUNC(sub_82814B7C);
PPC_FUNC_IMPL(__imp__sub_82814B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814B80"))) PPC_WEAK_FUNC(sub_82814B80);
PPC_FUNC_IMPL(__imp__sub_82814B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814B84"))) PPC_WEAK_FUNC(sub_82814B84);
PPC_FUNC_IMPL(__imp__sub_82814B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814B88"))) PPC_WEAK_FUNC(sub_82814B88);
PPC_FUNC_IMPL(__imp__sub_82814B88) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r10,13180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13180);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,13188(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82814bf0
	if (ctx.cr6.eq) goto loc_82814BF0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82814be8
	if (ctx.cr6.eq) goto loc_82814BE8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82814be0
	if (ctx.cr6.eq) goto loc_82814BE0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82814bf4
	goto loc_82814BF4;
loc_82814BE0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82814bf4
	goto loc_82814BF4;
loc_82814BE8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82814bf4
	goto loc_82814BF4;
loc_82814BF0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82814BF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82814cf8
	if (ctx.cr6.eq) goto loc_82814CF8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82814c2c
	if (ctx.cr6.eq) goto loc_82814C2C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82814c24
	if (ctx.cr6.eq) goto loc_82814C24;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82814c1c
	if (ctx.cr6.eq) goto loc_82814C1C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x82814c30
	goto loc_82814C30;
loc_82814C1C:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82814c30
	goto loc_82814C30;
loc_82814C24:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// b 0x82814c30
	goto loc_82814C30;
loc_82814C2C:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_82814C30:
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82814c64
	if (ctx.cr6.eq) goto loc_82814C64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82814c5c
	if (ctx.cr6.eq) goto loc_82814C5C;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82814c54
	if (ctx.cr6.eq) goto loc_82814C54;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82814c68
	goto loc_82814C68;
loc_82814C54:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82814c68
	goto loc_82814C68;
loc_82814C5C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82814c68
	goto loc_82814C68;
loc_82814C64:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82814C68:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82814c80
	if (!ctx.cr6.eq) goto loc_82814C80;
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82814C80:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82814ca8
	if (ctx.cr6.eq) goto loc_82814CA8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82814ca0
	if (ctx.cr6.eq) goto loc_82814CA0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82814cac
	if (!ctx.cr6.eq) goto loc_82814CAC;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82814cac
	goto loc_82814CAC;
loc_82814CA0:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82814cac
	goto loc_82814CAC;
loc_82814CA8:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82814CAC:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82814cdc
	if (ctx.cr6.eq) goto loc_82814CDC;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82814cd4
	if (ctx.cr6.eq) goto loc_82814CD4;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82814ccc
	if (ctx.cr6.eq) goto loc_82814CCC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82814ce0
	goto loc_82814CE0;
loc_82814CCC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82814ce0
	goto loc_82814CE0;
loc_82814CD4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82814ce0
	goto loc_82814CE0;
loc_82814CDC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82814CE0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bne cr6,0x82814cfc
	if (!ctx.cr6.eq) goto loc_82814CFC;
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82814CF8:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_82814CFC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814D04"))) PPC_WEAK_FUNC(sub_82814D04);
PPC_FUNC_IMPL(__imp__sub_82814D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814D08"))) PPC_WEAK_FUNC(sub_82814D08);
PPC_FUNC_IMPL(__imp__sub_82814D08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82814d54
	if (ctx.cr6.eq) goto loc_82814D54;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82814d44
	if (ctx.cr6.eq) goto loc_82814D44;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82814d5c
	if (!ctx.cr6.eq) goto loc_82814D5C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82814d5c
	goto loc_82814D5C;
loc_82814D44:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82814d5c
	goto loc_82814D5C;
loc_82814D54:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82814D5C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r9,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814D78"))) PPC_WEAK_FUNC(sub_82814D78);
PPC_FUNC_IMPL(__imp__sub_82814D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814D9C"))) PPC_WEAK_FUNC(sub_82814D9C);
PPC_FUNC_IMPL(__imp__sub_82814D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814DA0"))) PPC_WEAK_FUNC(sub_82814DA0);
PPC_FUNC_IMPL(__imp__sub_82814DA0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82804118
	ctx.lr = 0x82814DCC;
	sub_82804118(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,116(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// stfs f13,120(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// stfs f12,124(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// bl 0x82804270
	ctx.lr = 0x82814DF0;
	sub_82804270(ctx, base);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f6,12(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804180
	ctx.lr = 0x82814E20;
	sub_82804180(ctx, base);
	// lfs f5,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,20(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stfs f4,24(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f3,28(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
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

__attribute__((alias("__imp__sub_82814E50"))) PPC_WEAK_FUNC(sub_82814E50);
PPC_FUNC_IMPL(__imp__sub_82814E50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
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

__attribute__((alias("__imp__sub_82814E74"))) PPC_WEAK_FUNC(sub_82814E74);
PPC_FUNC_IMPL(__imp__sub_82814E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814E78"))) PPC_WEAK_FUNC(sub_82814E78);
PPC_FUNC_IMPL(__imp__sub_82814E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
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

__attribute__((alias("__imp__sub_82814E9C"))) PPC_WEAK_FUNC(sub_82814E9C);
PPC_FUNC_IMPL(__imp__sub_82814E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814EA0"))) PPC_WEAK_FUNC(sub_82814EA0);
PPC_FUNC_IMPL(__imp__sub_82814EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82814EC4"))) PPC_WEAK_FUNC(sub_82814EC4);
PPC_FUNC_IMPL(__imp__sub_82814EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82814EC8"))) PPC_WEAK_FUNC(sub_82814EC8);
PPC_FUNC_IMPL(__imp__sub_82814EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82814ED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82814fac
	if (!ctx.cr6.gt) goto loc_82814FAC;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r6,r9,84
	ctx.r6.s64 = ctx.r9.s64 + 84;
	// addi r8,r11,-29532
	ctx.r8.s64 = ctx.r11.s64 + -29532;
	// lwz r30,-29532(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r31,4(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_82814F0C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82814f40
	if (ctx.cr6.eq) goto loc_82814F40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82814f38
	if (ctx.cr6.eq) goto loc_82814F38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82814f30
	if (ctx.cr6.eq) goto loc_82814F30;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82814f44
	goto loc_82814F44;
loc_82814F30:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82814f44
	goto loc_82814F44;
loc_82814F38:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82814f44
	goto loc_82814F44;
loc_82814F40:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82814F44:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82814f74
	if (ctx.cr6.eq) goto loc_82814F74;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82814f6c
	if (ctx.cr6.eq) goto loc_82814F6C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82814f64
	if (ctx.cr6.eq) goto loc_82814F64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82814f78
	goto loc_82814F78;
loc_82814F64:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82814f78
	goto loc_82814F78;
loc_82814F6C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82814f78
	goto loc_82814F78;
loc_82814F74:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82814F78:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82814f9c
	if (!ctx.cr6.eq) goto loc_82814F9C;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r31,4(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82814F9C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82814f0c
	if (ctx.cr6.lt) goto loc_82814F0C;
loc_82814FAC:
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82814fd8
	if (!ctx.cr6.lt) goto loc_82814FD8;
	// addi r11,r5,21
	ctx.r11.s64 = ctx.r5.s64 + 21;
	// addi r8,r5,22
	ctx.r8.s64 = ctx.r5.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r5,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r5.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822195b8
	ctx.lr = 0x82814FD8;
	sub_822195B8(ctx, base);
loc_82814FD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82814FE0"))) PPC_WEAK_FUNC(sub_82814FE0);
PPC_FUNC_IMPL(__imp__sub_82814FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,-90
	ctx.r7.s64 = -90;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,-90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -90, ctx.xer);
	// blt cr6,0x82815010
	if (ctx.cr6.lt) goto loc_82815010;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82815014
	if (!ctx.cr6.gt) goto loc_82815014;
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// b 0x82815014
	goto loc_82815014;
loc_82815010:
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
loc_82815014:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// li r8,90
	ctx.r8.s64 = 90;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82815034
	if (ctx.cr6.lt) goto loc_82815034;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// ble cr6,0x82815038
	if (!ctx.cr6.gt) goto loc_82815038;
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// b 0x82815038
	goto loc_82815038;
loc_82815034:
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
loc_82815038:
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r10,-90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -90, ctx.xer);
	// blt cr6,0x82815054
	if (ctx.cr6.lt) goto loc_82815054;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82815058
	if (!ctx.cr6.gt) goto loc_82815058;
	// stw r9,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r9.u32);
	// b 0x82815058
	goto loc_82815058;
loc_82815054:
	// stw r7,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r7.u32);
loc_82815058:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82815074
	if (ctx.cr6.lt) goto loc_82815074;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// ble cr6,0x82815078
	if (!ctx.cr6.gt) goto loc_82815078;
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// b 0x82815078
	goto loc_82815078;
loc_82815074:
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
loc_82815078:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lfs f13,4700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4700);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4448(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4448);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828150a4
	if (ctx.cr6.lt) goto loc_828150A4;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x828150a8
	if (!ctx.cr6.gt) goto loc_828150A8;
	// stfs f12,76(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// b 0x828150a8
	goto loc_828150A8;
loc_828150A4:
	// stfs f13,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
loc_828150A8:
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828150c4
	if (ctx.cr6.lt) goto loc_828150C4;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x828150c8
	if (!ctx.cr6.gt) goto loc_828150C8;
	// stfs f12,60(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// b 0x828150c8
	goto loc_828150C8;
loc_828150C4:
	// stfs f13,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_828150C8:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-3896(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3896);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828150ec
	if (ctx.cr6.lt) goto loc_828150EC;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f13,-30020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30020);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828150f0
	if (!ctx.cr6.gt) goto loc_828150F0;
loc_828150EC:
	// stfs f13,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
loc_828150F0:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828150F4"))) PPC_WEAK_FUNC(sub_828150F4);
PPC_FUNC_IMPL(__imp__sub_828150F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828150F8"))) PPC_WEAK_FUNC(sub_828150F8);
PPC_FUNC_IMPL(__imp__sub_828150F8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,48(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82804118
	ctx.lr = 0x82815124;
	sub_82804118(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,128(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// stfs f13,132(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// stfs f12,136(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// bl 0x82804270
	ctx.lr = 0x82815148;
	sub_82804270(ctx, base);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f7,12(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f6,16(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804180
	ctx.lr = 0x82815178;
	sub_82804180(ctx, base);
	// lfs f5,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,24(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f4,28(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stfs f3,32(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
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

__attribute__((alias("__imp__sub_828151A8"))) PPC_WEAK_FUNC(sub_828151A8);
PPC_FUNC_IMPL(__imp__sub_828151A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828151CC"))) PPC_WEAK_FUNC(sub_828151CC);
PPC_FUNC_IMPL(__imp__sub_828151CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828151D0"))) PPC_WEAK_FUNC(sub_828151D0);
PPC_FUNC_IMPL(__imp__sub_828151D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-29848(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29848);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27236);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,68(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// lfs f12,44(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,56(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r4,116(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r10,64(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f9,-8(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// stfs f11,48(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 48, temp.u32);
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f7,-8(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,104(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 104, temp.u32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f10,72(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 72, temp.u32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f9,100(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 100, temp.u32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,120(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281527C"))) PPC_WEAK_FUNC(sub_8281527C);
PPC_FUNC_IMPL(__imp__sub_8281527C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82815280"))) PPC_WEAK_FUNC(sub_82815280);
PPC_FUNC_IMPL(__imp__sub_82815280) {
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

__attribute__((alias("__imp__sub_82815298"))) PPC_WEAK_FUNC(sub_82815298);
PPC_FUNC_IMPL(__imp__sub_82815298) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// addi r7,r11,-29532
	ctx.r7.s64 = ctx.r11.s64 + -29532;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r9,48(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x828152e8
	if (ctx.cr6.eq) goto loc_828152E8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828152e0
	if (ctx.cr6.eq) goto loc_828152E0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828152d8
	if (ctx.cr6.eq) goto loc_828152D8;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x828152ec
	goto loc_828152EC;
loc_828152D8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828152ec
	goto loc_828152EC;
loc_828152E0:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x828152ec
	goto loc_828152EC;
loc_828152E8:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_828152EC:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82815318
	if (ctx.cr6.eq) goto loc_82815318;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82815310
	if (ctx.cr6.eq) goto loc_82815310;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8281531c
	if (!ctx.cr6.eq) goto loc_8281531C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8281531c
	goto loc_8281531C;
loc_82815310:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x8281531c
	goto loc_8281531C;
loc_82815318:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8281531C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82815334
	if (!ctx.cr6.eq) goto loc_82815334;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82815334:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82815364
	if (ctx.cr6.eq) goto loc_82815364;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8281535c
	if (ctx.cr6.eq) goto loc_8281535C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82815354
	if (ctx.cr6.eq) goto loc_82815354;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82815368
	goto loc_82815368;
loc_82815354:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82815368
	goto loc_82815368;
loc_8281535C:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82815368
	goto loc_82815368;
loc_82815364:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82815368:
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82815394
	if (ctx.cr6.eq) goto loc_82815394;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281538c
	if (ctx.cr6.eq) goto loc_8281538C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82815398
	if (!ctx.cr6.eq) goto loc_82815398;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815398
	goto loc_82815398;
loc_8281538C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82815398
	goto loc_82815398;
loc_82815394:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82815398:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828153ac
	if (!ctx.cr6.eq) goto loc_828153AC;
	// stw r31,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_828153AC:
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// li r8,2
	ctx.r8.s64 = 2;
loc_828153B4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828153e4
	if (ctx.cr6.eq) goto loc_828153E4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828153dc
	if (ctx.cr6.eq) goto loc_828153DC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828153d4
	if (ctx.cr6.eq) goto loc_828153D4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x828153e8
	goto loc_828153E8;
loc_828153D4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828153e8
	goto loc_828153E8;
loc_828153DC:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x828153e8
	goto loc_828153E8;
loc_828153E4:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_828153E8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82815414
	if (ctx.cr6.eq) goto loc_82815414;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281540c
	if (ctx.cr6.eq) goto loc_8281540C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82815418
	if (!ctx.cr6.eq) goto loc_82815418;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815418
	goto loc_82815418;
loc_8281540C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82815418
	goto loc_82815418;
loc_82815414:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82815418:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8281542c
	if (!ctx.cr6.eq) goto loc_8281542C;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
loc_8281542C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x828153b4
	if (!ctx.cr0.eq) goto loc_828153B4;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815440"))) PPC_WEAK_FUNC(sub_82815440);
PPC_FUNC_IMPL(__imp__sub_82815440) {
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

__attribute__((alias("__imp__sub_82815458"))) PPC_WEAK_FUNC(sub_82815458);
PPC_FUNC_IMPL(__imp__sub_82815458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82815510
	if (ctx.cr6.lt) goto loc_82815510;
	// addi r10,r10,987
	ctx.r10.s64 = ctx.r10.s64 + 987;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,-29532
	ctx.r6.s64 = ctx.r9.s64 + -29532;
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828154c0
	if (ctx.cr6.eq) goto loc_828154C0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828154b8
	if (ctx.cr6.eq) goto loc_828154B8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828154b0
	if (ctx.cr6.eq) goto loc_828154B0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828154c4
	goto loc_828154C4;
loc_828154B0:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828154c4
	goto loc_828154C4;
loc_828154B8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828154c4
	goto loc_828154C4;
loc_828154C0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828154C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82815510
	if (ctx.cr6.eq) goto loc_82815510;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828154f4
	if (ctx.cr6.eq) goto loc_828154F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828154ec
	if (ctx.cr6.eq) goto loc_828154EC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828154f8
	if (!ctx.cr6.eq) goto loc_828154F8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828154f8
	goto loc_828154F8;
loc_828154EC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828154f8
	goto loc_828154F8;
loc_828154F4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828154F8:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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
loc_82815510:
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815518"))) PPC_WEAK_FUNC(sub_82815518);
PPC_FUNC_IMPL(__imp__sub_82815518) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,4180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4180, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281552C"))) PPC_WEAK_FUNC(sub_8281552C);
PPC_FUNC_IMPL(__imp__sub_8281552C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82815530"))) PPC_WEAK_FUNC(sub_82815530);
PPC_FUNC_IMPL(__imp__sub_82815530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,4180(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4180);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815548"))) PPC_WEAK_FUNC(sub_82815548);
PPC_FUNC_IMPL(__imp__sub_82815548) {
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
	// beq cr6,0x82815594
	if (ctx.cr6.eq) goto loc_82815594;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8281558c
	if (ctx.cr6.eq) goto loc_8281558C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82815584
	if (ctx.cr6.eq) goto loc_82815584;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82815598
	goto loc_82815598;
loc_82815584:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82815598
	goto loc_82815598;
loc_8281558C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82815598
	goto loc_82815598;
loc_82815594:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82815598:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,140(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828155cc
	if (ctx.cr6.eq) goto loc_828155CC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828155c4
	if (ctx.cr6.eq) goto loc_828155C4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x828155d0
	if (!ctx.cr6.eq) goto loc_828155D0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828155d0
	goto loc_828155D0;
loc_828155C4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x828155d0
	goto loc_828155D0;
loc_828155CC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_828155D0:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828155fc
	if (ctx.cr6.eq) goto loc_828155FC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828155f8
	if (ctx.cr6.eq) goto loc_828155F8;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828155f0
	if (ctx.cr6.eq) goto loc_828155F0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x828155fc
	goto loc_828155FC;
loc_828155F0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828155fc
	goto loc_828155FC;
loc_828155F8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828155FC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815610"))) PPC_WEAK_FUNC(sub_82815610);
PPC_FUNC_IMPL(__imp__sub_82815610) {
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

__attribute__((alias("__imp__sub_82815628"))) PPC_WEAK_FUNC(sub_82815628);
PPC_FUNC_IMPL(__imp__sub_82815628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815640"))) PPC_WEAK_FUNC(sub_82815640);
PPC_FUNC_IMPL(__imp__sub_82815640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8281565c
	if (ctx.cr6.lt) goto loc_8281565C;
	// cmpwi cr6,r5,30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 30, ctx.xer);
	// blt cr6,0x82815668
	if (ctx.cr6.lt) goto loc_82815668;
loc_8281565C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82815668:
	// addi r10,r5,145
	ctx.r10.s64 = ctx.r5.s64 + 145;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281567C"))) PPC_WEAK_FUNC(sub_8281567C);
PPC_FUNC_IMPL(__imp__sub_8281567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82815680"))) PPC_WEAK_FUNC(sub_82815680);
PPC_FUNC_IMPL(__imp__sub_82815680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,216(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 216);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815698"))) PPC_WEAK_FUNC(sub_82815698);
PPC_FUNC_IMPL(__imp__sub_82815698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x828156f4
	if (ctx.cr6.lt) goto loc_828156F4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x828156f4
	if (!ctx.cr6.lt) goto loc_828156F4;
	// lwz r9,416(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x828156f4
	if (ctx.cr6.lt) goto loc_828156F4;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bge cr6,0x828156f4
	if (!ctx.cr6.lt) goto loc_828156F4;
	// lwz r8,4000(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4000);
	// addi r11,r11,3996
	ctx.r11.s64 = ctx.r11.s64 + 3996;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_828156F4:
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828156FC"))) PPC_WEAK_FUNC(sub_828156FC);
PPC_FUNC_IMPL(__imp__sub_828156FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82815700"))) PPC_WEAK_FUNC(sub_82815700);
PPC_FUNC_IMPL(__imp__sub_82815700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82815734
	if (ctx.cr6.lt) goto loc_82815734;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x82815734
	if (!ctx.cr6.lt) goto loc_82815734;
	// lwz r9,416(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82815734
	if (ctx.cr6.lt) goto loc_82815734;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82815740
	if (ctx.cr6.lt) goto loc_82815740;
loc_82815734:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82815740:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815760"))) PPC_WEAK_FUNC(sub_82815760);
PPC_FUNC_IMPL(__imp__sub_82815760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r11,r11,736
	ctx.r11.s64 = ctx.r11.s64 + 736;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
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

__attribute__((alias("__imp__sub_82815794"))) PPC_WEAK_FUNC(sub_82815794);
PPC_FUNC_IMPL(__imp__sub_82815794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82815798"))) PPC_WEAK_FUNC(sub_82815798);
PPC_FUNC_IMPL(__imp__sub_82815798) {
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
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,48(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// beq cr6,0x828157e4
	if (ctx.cr6.eq) goto loc_828157E4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828157dc
	if (ctx.cr6.eq) goto loc_828157DC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828157d4
	if (ctx.cr6.eq) goto loc_828157D4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x828157e8
	goto loc_828157E8;
loc_828157D4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828157e8
	goto loc_828157E8;
loc_828157DC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828157e8
	goto loc_828157E8;
loc_828157E4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_828157E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82815820
	if (ctx.cr6.eq) goto loc_82815820;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82815818
	if (ctx.cr6.eq) goto loc_82815818;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82815810
	if (ctx.cr6.eq) goto loc_82815810;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82815824
	goto loc_82815824;
loc_82815810:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815824
	goto loc_82815824;
loc_82815818:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82815824
	goto loc_82815824;
loc_82815820:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82815824:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82815868
	if (ctx.cr6.eq) goto loc_82815868;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8281586c
	if (ctx.cr6.eq) goto loc_8281586C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82815860
	if (ctx.cr6.eq) goto loc_82815860;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// b 0x8281586c
	goto loc_8281586C;
loc_82815860:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x8281586c
	goto loc_8281586C;
loc_82815868:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8281586C:
	// lwz r10,4000(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4000);
	// addi r11,r7,3996
	ctx.r11.s64 = ctx.r7.s64 + 3996;
	// li r9,0
	ctx.r9.s64 = 0;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82815888:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828158a8
	if (ctx.cr6.eq) goto loc_828158A8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82815888
	if (ctx.cr6.lt) goto loc_82815888;
	// b 0x828158b0
	goto loc_828158B0;
loc_828158A8:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_828158B0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_828158C8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x828158e8
	if (ctx.cr6.eq) goto loc_828158E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x828158c8
	if (ctx.cr6.lt) goto loc_828158C8;
	// blr 
	return;
loc_828158E8:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815924"))) PPC_WEAK_FUNC(sub_82815924);
PPC_FUNC_IMPL(__imp__sub_82815924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82815928"))) PPC_WEAK_FUNC(sub_82815928);
PPC_FUNC_IMPL(__imp__sub_82815928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82815930;
	__savegprlr_28(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,-29844(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29844);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// blt cr6,0x82815a98
	if (ctx.cr6.lt) goto loc_82815A98;
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x82815a98
	if (!ctx.cr6.lt) goto loc_82815A98;
	// lwz r11,4000(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4000);
	// addi r31,r7,3996
	ctx.r31.s64 = ctx.r7.s64 + 3996;
	// li r9,0
	ctx.r9.s64 = 0;
	// mullw r29,r11,r5
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r8,-29532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82815978:
	// add r11,r29,r9
	ctx.r11.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828159b8
	if (ctx.cr6.eq) goto loc_828159B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828159b0
	if (ctx.cr6.eq) goto loc_828159B0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828159a8
	if (ctx.cr6.eq) goto loc_828159A8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828159bc
	goto loc_828159BC;
loc_828159A8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828159bc
	goto loc_828159BC;
loc_828159B0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x828159bc
	goto loc_828159BC;
loc_828159B8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828159BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82815a8c
	if (ctx.cr6.eq) goto loc_82815A8C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x828159ec
	if (ctx.cr6.eq) goto loc_828159EC;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82815a8c
	if (ctx.cr6.eq) goto loc_82815A8C;
loc_828159EC:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82815a14
	if (ctx.cr6.eq) goto loc_82815A14;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82815a0c
	if (ctx.cr6.eq) goto loc_82815A0C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82815a14
	if (!ctx.cr6.eq) goto loc_82815A14;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82815a18
	goto loc_82815A18;
loc_82815A0C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82815a18
	goto loc_82815A18;
loc_82815A14:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82815A18:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82815a40
	if (ctx.cr6.eq) goto loc_82815A40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82815a38
	if (ctx.cr6.eq) goto loc_82815A38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82815a44
	if (!ctx.cr6.eq) goto loc_82815A44;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815a44
	goto loc_82815A44;
loc_82815A38:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82815a44
	goto loc_82815A44;
loc_82815A40:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82815A44:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82815a8c
	if (!ctx.cr6.lt) goto loc_82815A8C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
loc_82815A8C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82815978
	if (ctx.cr6.lt) goto loc_82815978;
loc_82815A98:
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82815AA0"))) PPC_WEAK_FUNC(sub_82815AA0);
PPC_FUNC_IMPL(__imp__sub_82815AA0) {
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
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,48(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// beq cr6,0x82815aec
	if (ctx.cr6.eq) goto loc_82815AEC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82815ae4
	if (ctx.cr6.eq) goto loc_82815AE4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82815adc
	if (ctx.cr6.eq) goto loc_82815ADC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82815af0
	goto loc_82815AF0;
loc_82815ADC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815af0
	goto loc_82815AF0;
loc_82815AE4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82815af0
	goto loc_82815AF0;
loc_82815AEC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82815AF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82815b28
	if (ctx.cr6.eq) goto loc_82815B28;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82815b20
	if (ctx.cr6.eq) goto loc_82815B20;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82815b18
	if (ctx.cr6.eq) goto loc_82815B18;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82815b2c
	goto loc_82815B2C;
loc_82815B18:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815b2c
	goto loc_82815B2C;
loc_82815B20:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82815b2c
	goto loc_82815B2C;
loc_82815B28:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82815B2C:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// rlwinm r7,r11,0,22,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82815b70
	if (ctx.cr6.eq) goto loc_82815B70;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82815b68
	if (ctx.cr6.eq) goto loc_82815B68;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82815b74
	if (!ctx.cr6.eq) goto loc_82815B74;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82815b74
	goto loc_82815B74;
loc_82815B68:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82815b74
	goto loc_82815B74;
loc_82815B70:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82815B74:
	// lwz r9,4000(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4000);
	// addi r11,r8,3996
	ctx.r11.s64 = ctx.r8.s64 + 3996;
	// li r10,0
	ctx.r10.s64 = 0;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82815B90:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82815bb0
	if (ctx.cr6.eq) goto loc_82815BB0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82815b90
	if (ctx.cr6.lt) goto loc_82815B90;
	// blr 
	return;
loc_82815BB0:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815BF4"))) PPC_WEAK_FUNC(sub_82815BF4);
PPC_FUNC_IMPL(__imp__sub_82815BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82815BF8"))) PPC_WEAK_FUNC(sub_82815BF8);
PPC_FUNC_IMPL(__imp__sub_82815BF8) {
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
	// beq cr6,0x82815c54
	if (ctx.cr6.eq) goto loc_82815C54;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82815c4c
	if (ctx.cr6.eq) goto loc_82815C4C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82815c58
	if (!ctx.cr6.eq) goto loc_82815C58;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82815c58
	goto loc_82815C58;
loc_82815C4C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82815c58
	goto loc_82815C58;
loc_82815C54:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82815C58:
	// lwz r10,412(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 412);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82815c84
	if (ctx.cr6.eq) goto loc_82815C84;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82815c7c
	if (ctx.cr6.eq) goto loc_82815C7C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82815c88
	if (!ctx.cr6.eq) goto loc_82815C88;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82815c88
	goto loc_82815C88;
loc_82815C7C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82815c88
	goto loc_82815C88;
loc_82815C84:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82815C88:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,412(r6)
	PPC_STORE_U32(ctx.r6.u32 + 412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815CA0"))) PPC_WEAK_FUNC(sub_82815CA0);
PPC_FUNC_IMPL(__imp__sub_82815CA0) {
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

__attribute__((alias("__imp__sub_82815CB8"))) PPC_WEAK_FUNC(sub_82815CB8);
PPC_FUNC_IMPL(__imp__sub_82815CB8) {
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
	// beq cr6,0x82815cfc
	if (ctx.cr6.eq) goto loc_82815CFC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82815cf4
	if (ctx.cr6.eq) goto loc_82815CF4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82815d00
	if (!ctx.cr6.eq) goto loc_82815D00;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82815d00
	goto loc_82815D00;
loc_82815CF4:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// b 0x82815d00
	goto loc_82815D00;
loc_82815CFC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82815D00:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82815d30
	if (ctx.cr6.eq) goto loc_82815D30;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82815d2c
	if (ctx.cr6.eq) goto loc_82815D2C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82815d24
	if (ctx.cr6.eq) goto loc_82815D24;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82815d30
	goto loc_82815D30;
loc_82815D24:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815d30
	goto loc_82815D30;
loc_82815D2C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82815D30:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815D44"))) PPC_WEAK_FUNC(sub_82815D44);
PPC_FUNC_IMPL(__imp__sub_82815D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82815D48"))) PPC_WEAK_FUNC(sub_82815D48);
PPC_FUNC_IMPL(__imp__sub_82815D48) {
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

__attribute__((alias("__imp__sub_82815D60"))) PPC_WEAK_FUNC(sub_82815D60);
PPC_FUNC_IMPL(__imp__sub_82815D60) {
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

__attribute__((alias("__imp__sub_82815D78"))) PPC_WEAK_FUNC(sub_82815D78);
PPC_FUNC_IMPL(__imp__sub_82815D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,48(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// ori r7,r8,16384
	ctx.r7.u64 = ctx.r8.u64 | 16384;
	// sth r7,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r7.u16);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815DB8"))) PPC_WEAK_FUNC(sub_82815DB8);
PPC_FUNC_IMPL(__imp__sub_82815DB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82815DDC"))) PPC_WEAK_FUNC(sub_82815DDC);
PPC_FUNC_IMPL(__imp__sub_82815DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82815DE0"))) PPC_WEAK_FUNC(sub_82815DE0);
PPC_FUNC_IMPL(__imp__sub_82815DE0) {
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

__attribute__((alias("__imp__sub_82815DF8"))) PPC_WEAK_FUNC(sub_82815DF8);
PPC_FUNC_IMPL(__imp__sub_82815DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r10,13180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13180);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,13188(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13188);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,24(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82815e5c
	if (ctx.cr6.eq) goto loc_82815E5C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82815e54
	if (ctx.cr6.eq) goto loc_82815E54;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82815e4c
	if (ctx.cr6.eq) goto loc_82815E4C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82815e60
	goto loc_82815E60;
loc_82815E4C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815e60
	goto loc_82815E60;
loc_82815E54:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82815e60
	goto loc_82815E60;
loc_82815E5C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82815E60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82816054
	if (ctx.cr6.eq) goto loc_82816054;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82815e9c
	if (ctx.cr6.eq) goto loc_82815E9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82815e94
	if (ctx.cr6.eq) goto loc_82815E94;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82815e8c
	if (ctx.cr6.eq) goto loc_82815E8C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82815ea0
	goto loc_82815EA0;
loc_82815E8C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82815ea0
	goto loc_82815EA0;
loc_82815E94:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82815ea0
	goto loc_82815EA0;
loc_82815E9C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82815EA0:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82815ed0
	if (ctx.cr6.eq) goto loc_82815ED0;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82815ec8
	if (ctx.cr6.eq) goto loc_82815EC8;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82815ec0
	if (ctx.cr6.eq) goto loc_82815EC0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82815ed4
	goto loc_82815ED4;
loc_82815EC0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815ed4
	goto loc_82815ED4;
loc_82815EC8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82815ed4
	goto loc_82815ED4;
loc_82815ED0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82815ED4:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82815eec
	if (!ctx.cr6.eq) goto loc_82815EEC;
	// stw r5,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r5.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82815EEC:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82815f1c
	if (ctx.cr6.eq) goto loc_82815F1C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82815f14
	if (ctx.cr6.eq) goto loc_82815F14;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82815f0c
	if (ctx.cr6.eq) goto loc_82815F0C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82815f20
	goto loc_82815F20;
loc_82815F0C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82815f20
	goto loc_82815F20;
loc_82815F14:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82815f20
	goto loc_82815F20;
loc_82815F1C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82815F20:
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82815f4c
	if (ctx.cr6.eq) goto loc_82815F4C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82815f44
	if (ctx.cr6.eq) goto loc_82815F44;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82815f50
	if (!ctx.cr6.eq) goto loc_82815F50;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815f50
	goto loc_82815F50;
loc_82815F44:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82815f50
	goto loc_82815F50;
loc_82815F4C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82815F50:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82815f64
	if (!ctx.cr6.eq) goto loc_82815F64;
	// stw r5,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r5.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82815F64:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82815f94
	if (ctx.cr6.eq) goto loc_82815F94;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82815f8c
	if (ctx.cr6.eq) goto loc_82815F8C;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82815f84
	if (ctx.cr6.eq) goto loc_82815F84;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82815f98
	goto loc_82815F98;
loc_82815F84:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82815f98
	goto loc_82815F98;
loc_82815F8C:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82815f98
	goto loc_82815F98;
loc_82815F94:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82815F98:
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82815fc4
	if (ctx.cr6.eq) goto loc_82815FC4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82815fbc
	if (ctx.cr6.eq) goto loc_82815FBC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82815fc8
	if (!ctx.cr6.eq) goto loc_82815FC8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82815fc8
	goto loc_82815FC8;
loc_82815FBC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82815fc8
	goto loc_82815FC8;
loc_82815FC4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82815FC8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82815fdc
	if (!ctx.cr6.eq) goto loc_82815FDC;
	// stw r5,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r5.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82815FDC:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8281600c
	if (ctx.cr6.eq) goto loc_8281600C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82816004
	if (ctx.cr6.eq) goto loc_82816004;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82815ffc
	if (ctx.cr6.eq) goto loc_82815FFC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82816010
	goto loc_82816010;
loc_82815FFC:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82816010
	goto loc_82816010;
loc_82816004:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82816010
	goto loc_82816010;
loc_8281600C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82816010:
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8281603c
	if (ctx.cr6.eq) goto loc_8281603C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82816034
	if (ctx.cr6.eq) goto loc_82816034;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82816040
	if (!ctx.cr6.eq) goto loc_82816040;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816040
	goto loc_82816040;
loc_82816034:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82816040
	goto loc_82816040;
loc_8281603C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82816040:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r5,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r5.u32);
	// blr 
	return;
loc_82816054:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281605C"))) PPC_WEAK_FUNC(sub_8281605C);
PPC_FUNC_IMPL(__imp__sub_8281605C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816060"))) PPC_WEAK_FUNC(sub_82816060);
PPC_FUNC_IMPL(__imp__sub_82816060) {
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

__attribute__((alias("__imp__sub_82816078"))) PPC_WEAK_FUNC(sub_82816078);
PPC_FUNC_IMPL(__imp__sub_82816078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828160A0"))) PPC_WEAK_FUNC(sub_828160A0);
PPC_FUNC_IMPL(__imp__sub_828160A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828160A8"))) PPC_WEAK_FUNC(sub_828160A8);
PPC_FUNC_IMPL(__imp__sub_828160A8) {
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

__attribute__((alias("__imp__sub_828160C0"))) PPC_WEAK_FUNC(sub_828160C0);
PPC_FUNC_IMPL(__imp__sub_828160C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x828160e4
	if (!ctx.cr6.gt) goto loc_828160E4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x828160f0
	if (ctx.cr6.lt) goto loc_828160F0;
loc_828160E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828160F0:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828160F8"))) PPC_WEAK_FUNC(sub_828160F8);
PPC_FUNC_IMPL(__imp__sub_828160F8) {
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
	// beq cr6,0x82816154
	if (ctx.cr6.eq) goto loc_82816154;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8281614c
	if (ctx.cr6.eq) goto loc_8281614C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82816158
	if (!ctx.cr6.eq) goto loc_82816158;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82816158
	goto loc_82816158;
loc_8281614C:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82816158
	goto loc_82816158;
loc_82816154:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82816158:
	// lwz r10,40(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82816184
	if (ctx.cr6.eq) goto loc_82816184;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281617c
	if (ctx.cr6.eq) goto loc_8281617C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82816188
	if (!ctx.cr6.eq) goto loc_82816188;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82816188
	goto loc_82816188;
loc_8281617C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82816188
	goto loc_82816188;
loc_82816184:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82816188:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828161A0"))) PPC_WEAK_FUNC(sub_828161A0);
PPC_FUNC_IMPL(__imp__sub_828161A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x828161A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
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
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r25,13192(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13192);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r24,13188(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r23,13180(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,-29532(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,13192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x8281622c
	if (ctx.cr6.eq) goto loc_8281622C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82816224
	if (ctx.cr6.eq) goto loc_82816224;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8281621c
	if (ctx.cr6.eq) goto loc_8281621C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x82816230
	goto loc_82816230;
loc_8281621C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816230
	goto loc_82816230;
loc_82816224:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82816230
	goto loc_82816230;
loc_8281622C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82816230:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82816244
	if (!ctx.cr6.eq) goto loc_82816244;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// b 0x82816278
	goto loc_82816278;
loc_82816244:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8281626c
	if (ctx.cr6.eq) goto loc_8281626C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82816264
	if (ctx.cr6.eq) goto loc_82816264;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82816270
	if (ctx.cr6.eq) goto loc_82816270;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82816270
	goto loc_82816270;
loc_82816264:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82816270
	goto loc_82816270;
loc_8281626C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82816270:
	// bl 0x828040c8
	ctx.lr = 0x82816274;
	sub_828040C8(ctx, base);
	// stw r3,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r3.u32);
loc_82816278:
	// stw r26,52(r27)
	PPC_STORE_U32(ctx.r27.u32 + 52, ctx.r26.u32);
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

__attribute__((alias("__imp__sub_82816294"))) PPC_WEAK_FUNC(sub_82816294);
PPC_FUNC_IMPL(__imp__sub_82816294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816298"))) PPC_WEAK_FUNC(sub_82816298);
PPC_FUNC_IMPL(__imp__sub_82816298) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,1148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1148, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828162BC"))) PPC_WEAK_FUNC(sub_828162BC);
PPC_FUNC_IMPL(__imp__sub_828162BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828162C0"))) PPC_WEAK_FUNC(sub_828162C0);
PPC_FUNC_IMPL(__imp__sub_828162C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x828162fc
	if (ctx.cr6.eq) goto loc_828162FC;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828162e8
	if (ctx.cr6.eq) goto loc_828162E8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828162E8:
	// addi r10,r5,445
	ctx.r10.s64 = ctx.r5.s64 + 445;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828162FC:
	// addi r10,r5,345
	ctx.r10.s64 = ctx.r5.s64 + 345;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816310"))) PPC_WEAK_FUNC(sub_82816310);
PPC_FUNC_IMPL(__imp__sub_82816310) {
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
	// beq cr6,0x8281636c
	if (ctx.cr6.eq) goto loc_8281636C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82816364
	if (ctx.cr6.eq) goto loc_82816364;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82816370
	if (!ctx.cr6.eq) goto loc_82816370;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82816370
	goto loc_82816370;
loc_82816364:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82816370
	goto loc_82816370;
loc_8281636C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82816370:
	// lwz r10,2188(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2188);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8281639c
	if (ctx.cr6.eq) goto loc_8281639C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82816394
	if (ctx.cr6.eq) goto loc_82816394;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x828163a0
	if (!ctx.cr6.eq) goto loc_828163A0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828163a0
	goto loc_828163A0;
loc_82816394:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828163a0
	goto loc_828163A0;
loc_8281639C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828163A0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2188(r6)
	PPC_STORE_U32(ctx.r6.u32 + 2188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828163B8"))) PPC_WEAK_FUNC(sub_828163B8);
PPC_FUNC_IMPL(__imp__sub_828163B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,1324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1324);
	// addi r8,r11,88
	ctx.r8.s64 = ctx.r11.s64 + 88;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828163DC"))) PPC_WEAK_FUNC(sub_828163DC);
PPC_FUNC_IMPL(__imp__sub_828163DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828163E0"))) PPC_WEAK_FUNC(sub_828163E0);
PPC_FUNC_IMPL(__imp__sub_828163E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,1324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1324);
	// addi r8,r11,555
	ctx.r8.s64 = ctx.r11.s64 + 555;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816404"))) PPC_WEAK_FUNC(sub_82816404);
PPC_FUNC_IMPL(__imp__sub_82816404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816408"))) PPC_WEAK_FUNC(sub_82816408);
PPC_FUNC_IMPL(__imp__sub_82816408) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,1324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1324);
	// addi r8,r11,45
	ctx.r8.s64 = ctx.r11.s64 + 45;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281642C"))) PPC_WEAK_FUNC(sub_8281642C);
PPC_FUNC_IMPL(__imp__sub_8281642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816430"))) PPC_WEAK_FUNC(sub_82816430);
PPC_FUNC_IMPL(__imp__sub_82816430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,1324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1324);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816454"))) PPC_WEAK_FUNC(sub_82816454);
PPC_FUNC_IMPL(__imp__sub_82816454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816458"))) PPC_WEAK_FUNC(sub_82816458);
PPC_FUNC_IMPL(__imp__sub_82816458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,1324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1324);
	// addi r8,r11,291
	ctx.r8.s64 = ctx.r11.s64 + 291;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8281647C"))) PPC_WEAK_FUNC(sub_8281647C);
PPC_FUNC_IMPL(__imp__sub_8281647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816480"))) PPC_WEAK_FUNC(sub_82816480);
PPC_FUNC_IMPL(__imp__sub_82816480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blt cr6,0x8281649c
	if (ctx.cr6.lt) goto loc_8281649C;
	// cmpwi cr6,r5,99
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 99, ctx.xer);
	// blt cr6,0x828164a8
	if (ctx.cr6.lt) goto loc_828164A8;
loc_8281649C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828164A8:
	// addi r10,r5,181
	ctx.r10.s64 = ctx.r5.s64 + 181;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828164BC"))) PPC_WEAK_FUNC(sub_828164BC);
PPC_FUNC_IMPL(__imp__sub_828164BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828164C0"))) PPC_WEAK_FUNC(sub_828164C0);
PPC_FUNC_IMPL(__imp__sub_828164C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,1312(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1312, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828164D4"))) PPC_WEAK_FUNC(sub_828164D4);
PPC_FUNC_IMPL(__imp__sub_828164D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828164D8"))) PPC_WEAK_FUNC(sub_828164D8);
PPC_FUNC_IMPL(__imp__sub_828164D8) {
	PPC_FUNC_PROLOGUE();
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x828164f8
	if (ctx.cr0.lt) goto loc_828164F8;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// bgt cr6,0x828164f8
	if (ctx.cr6.gt) goto loc_828164F8;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,1324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1324, ctx.r11.u32);
loc_828164F8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828164FC"))) PPC_WEAK_FUNC(sub_828164FC);
PPC_FUNC_IMPL(__imp__sub_828164FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816500"))) PPC_WEAK_FUNC(sub_82816500);
PPC_FUNC_IMPL(__imp__sub_82816500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x82816508;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// addi r30,r11,-29532
	ctx.r30.s64 = ctx.r11.s64 + -29532;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82816560
	if (ctx.cr6.eq) goto loc_82816560;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82816558
	if (ctx.cr6.eq) goto loc_82816558;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x82816550
	if (ctx.cr6.eq) goto loc_82816550;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82816564
	goto loc_82816564;
loc_82816550:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82816564
	goto loc_82816564;
loc_82816558:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82816564
	goto loc_82816564;
loc_82816560:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82816564:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x82816574;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82816664
	if (!ctx.cr6.eq) goto loc_82816664;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// li r27,4
	ctx.r27.s64 = 4;
loc_8281658C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828165c0
	if (ctx.cr6.eq) goto loc_828165C0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828165b8
	if (ctx.cr6.eq) goto loc_828165B8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828165b0
	if (ctx.cr6.eq) goto loc_828165B0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x828165c4
	goto loc_828165C4;
loc_828165B0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x828165c4
	goto loc_828165C4;
loc_828165B8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828165c4
	goto loc_828165C4;
loc_828165C0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828165C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8281664c
	if (ctx.cr6.eq) goto loc_8281664C;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x828165fc
	if (ctx.cr6.eq) goto loc_828165FC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x828165f4
	if (ctx.cr6.eq) goto loc_828165F4;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x828165ec
	if (ctx.cr6.eq) goto loc_828165EC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82816600
	goto loc_82816600;
loc_828165EC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82816600
	goto loc_82816600;
loc_828165F4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82816600
	goto loc_82816600;
loc_828165FC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82816600:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82816628
	if (ctx.cr6.eq) goto loc_82816628;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8281662c
	if (ctx.cr6.eq) goto loc_8281662C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82816620
	if (ctx.cr6.eq) goto loc_82816620;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8281662c
	goto loc_8281662C;
loc_82816620:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8281662c
	goto loc_8281662C;
loc_82816628:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8281662C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x827d6380
	ctx.lr = 0x82816638;
	sub_827D6380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x8281664c
	if (ctx.cr6.eq) goto loc_8281664C;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8281664C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8281658c
	if (!ctx.cr0.eq) goto loc_8281658C;
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
loc_82816664:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82816674"))) PPC_WEAK_FUNC(sub_82816674);
PPC_FUNC_IMPL(__imp__sub_82816674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816678"))) PPC_WEAK_FUNC(sub_82816678);
PPC_FUNC_IMPL(__imp__sub_82816678) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82816684"))) PPC_WEAK_FUNC(sub_82816684);
PPC_FUNC_IMPL(__imp__sub_82816684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82816688"))) PPC_WEAK_FUNC(sub_82816688);
PPC_FUNC_IMPL(__imp__sub_82816688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
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

__attribute__((alias("__imp__sub_828166AC"))) PPC_WEAK_FUNC(sub_828166AC);
PPC_FUNC_IMPL(__imp__sub_828166AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

