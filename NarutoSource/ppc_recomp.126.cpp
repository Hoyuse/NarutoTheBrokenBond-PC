#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827EF5FC"))) PPC_WEAK_FUNC(sub_827EF5FC);
PPC_FUNC_IMPL(__imp__sub_827EF5FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827EF600"))) PPC_WEAK_FUNC(sub_827EF600);
PPC_FUNC_IMPL(__imp__sub_827EF600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x827EF608;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x827ef738
	if (ctx.cr6.eq) goto loc_827EF738;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// addi r24,r11,26668
	ctx.r24.s64 = ctx.r11.s64 + 26668;
loc_827EF638:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827ef72c
	if (ctx.cr6.eq) goto loc_827EF72C;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827ef668
	if (ctx.cr6.eq) goto loc_827EF668;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// b 0x827ef6f4
	goto loc_827EF6F4;
loc_827EF668:
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// oris r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 | 262144;
	// lhz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// ori r7,r10,64
	ctx.r7.u64 = ctx.r10.u64 | 64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// rlwinm r6,r8,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// stb r7,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r7.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827ef698
	if (ctx.cr6.eq) goto loc_827EF698;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bc8ce0
	ctx.lr = 0x827EF698;
	sub_82BC8CE0(ctx, base);
loc_827EF698:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ef6ac
	if (ctx.cr6.eq) goto loc_827EF6AC;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
loc_827EF6AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ef6f4
	if (ctx.cr6.eq) goto loc_827EF6F4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ef6f4
	if (ctx.cr6.eq) goto loc_827EF6F4;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827ef6f4
	if (ctx.cr6.eq) goto loc_827EF6F4;
loc_827EF6D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x827ef6e8
	if (!ctx.cr6.eq) goto loc_827EF6E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277eef8
	ctx.lr = 0x827EF6E8;
	sub_8277EEF8(ctx, base);
loc_827EF6E8:
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827ef6d4
	if (!ctx.cr6.eq) goto loc_827EF6D4;
loc_827EF6F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ef72c
	if (ctx.cr6.eq) goto loc_827EF72C;
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x8222dc78
	ctx.lr = 0x827EF70C;
	sub_8222DC78(ctx, base);
	// lwz r10,408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13596(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13596);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827c7740
	ctx.lr = 0x827EF72C;
	sub_827C7740(ctx, base);
loc_827EF72C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x827ef638
	if (!ctx.cr0.eq) goto loc_827EF638;
loc_827EF738:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r25,156
	ctx.r3.s64 = ctx.r25.s64 + 156;
	// bl 0x82bd7dd8
	ctx.lr = 0x827EF748;
	sub_82BD7DD8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827EF750"))) PPC_WEAK_FUNC(sub_827EF750);
PPC_FUNC_IMPL(__imp__sub_827EF750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827EF758;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827ef814
	if (!ctx.cr6.eq) goto loc_827EF814;
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// oris r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 | 262144;
	// lhz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// ori r7,r10,64
	ctx.r7.u64 = ctx.r10.u64 | 64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// rlwinm r6,r8,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// stb r7,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r7.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827ef7b0
	if (ctx.cr6.eq) goto loc_827EF7B0;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// addi r3,r11,26668
	ctx.r3.s64 = ctx.r11.s64 + 26668;
	// bl 0x82bc8ce0
	ctx.lr = 0x827EF7B0;
	sub_82BC8CE0(ctx, base);
loc_827EF7B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827ef7cc
	if (!ctx.cr6.eq) goto loc_827EF7CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,156
	ctx.r3.s64 = ctx.r29.s64 + 156;
	// bl 0x82bd8460
	ctx.lr = 0x827EF7CC;
	sub_82BD8460(ctx, base);
loc_827EF7CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ef814
	if (ctx.cr6.eq) goto loc_827EF814;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ef814
	if (ctx.cr6.eq) goto loc_827EF814;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827ef814
	if (ctx.cr6.eq) goto loc_827EF814;
loc_827EF7F4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x827ef808
	if (!ctx.cr6.eq) goto loc_827EF808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277eef8
	ctx.lr = 0x827EF808;
	sub_8277EEF8(ctx, base);
loc_827EF808:
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827ef7f4
	if (!ctx.cr6.eq) goto loc_827EF7F4;
loc_827EF814:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ef84c
	if (ctx.cr6.eq) goto loc_827EF84C;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8222dc78
	ctx.lr = 0x827EF82C;
	sub_8222DC78(ctx, base);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r3,13596(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13596);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827c7740
	ctx.lr = 0x827EF84C;
	sub_827C7740(ctx, base);
loc_827EF84C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827EF854"))) PPC_WEAK_FUNC(sub_827EF854);
PPC_FUNC_IMPL(__imp__sub_827EF854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EF858"))) PPC_WEAK_FUNC(sub_827EF858);
PPC_FUNC_IMPL(__imp__sub_827EF858) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// b 0x82bd8520
	sub_82BD8520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827EF860"))) PPC_WEAK_FUNC(sub_827EF860);
PPC_FUNC_IMPL(__imp__sub_827EF860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x827EF868;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r27,r28,r26
	ctx.r27.u64 = ctx.r28.u64 ^ ctx.r26.u64;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ef9b0
	if (ctx.cr6.eq) goto loc_827EF9B0;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ef980
	if (ctx.cr6.eq) goto loc_827EF980;
	// rlwinm r30,r26,0,14,14
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20000;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827ef8ac
	if (!ctx.cr6.eq) goto loc_827EF8AC;
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
loc_827EF8AC:
	// bl 0x827e6d58
	ctx.lr = 0x827EF8B0;
	sub_827E6D58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x827ef8d4
	if (!ctx.cr6.gt) goto loc_827EF8D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827ef8c4
	if (!ctx.cr6.eq) goto loc_827EF8C4;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_827EF8C4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,132
	ctx.r3.s64 = ctx.r29.s64 + 132;
	// bl 0x827e7348
	ctx.lr = 0x827EF8D4;
	sub_827E7348(ctx, base);
loc_827EF8D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r30,376(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827ef9b0
	if (ctx.cr6.eq) goto loc_827EF9B0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827ef920
	if (ctx.cr6.eq) goto loc_827EF920;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827ef920
	if (!ctx.cr6.lt) goto loc_827EF920;
loc_827EF900:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827ef91c
	if (ctx.cr6.eq) goto loc_827EF91C;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827ef900
	if (ctx.cr6.lt) goto loc_827EF900;
	// b 0x827ef920
	goto loc_827EF920;
loc_827EF91C:
	// bl 0x82746598
	ctx.lr = 0x827EF920;
	sub_82746598(ctx, base);
loc_827EF920:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x827ef96c
	if (!ctx.cr6.lt) goto loc_827EF96C;
loc_827EF934:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x827ef964
	if (ctx.cr6.eq) goto loc_827EF964;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827ef934
	if (ctx.cr6.lt) goto loc_827EF934;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82125080
	ctx.lr = 0x827EF95C;
	sub_82125080(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// b 0x827ef9b0
	goto loc_827EF9B0;
loc_827EF964:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x827ef978
	if (!ctx.cr6.eq) goto loc_827EF978;
loc_827EF96C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82125080
	ctx.lr = 0x827EF978;
	sub_82125080(ctx, base);
loc_827EF978:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// b 0x827ef9b0
	goto loc_827EF9B0;
loc_827EF980:
	// addi r3,r29,132
	ctx.r3.s64 = ctx.r29.s64 + 132;
	// bl 0x827e6d58
	ctx.lr = 0x827EF988;
	sub_827E6D58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x827ef9b0
	if (!ctx.cr6.gt) goto loc_827EF9B0;
	// rlwinm r11,r28,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bne cr6,0x827ef9ac
	if (!ctx.cr6.eq) goto loc_827EF9AC;
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
loc_827EF9AC:
	// bl 0x827e7348
	ctx.lr = 0x827EF9B0;
	sub_827E7348(ctx, base);
loc_827EF9B0:
	// rlwinm r11,r27,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ef9fc
	if (ctx.cr6.eq) goto loc_827EF9FC;
	// rlwinm r11,r28,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ef9fc
	if (ctx.cr6.eq) goto loc_827EF9FC;
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r29,132
	ctx.r3.s64 = ctx.r29.s64 + 132;
	// bne cr6,0x827ef9e0
	if (!ctx.cr6.eq) goto loc_827EF9E0;
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
loc_827EF9E0:
	// bl 0x827e6d58
	ctx.lr = 0x827EF9E4;
	sub_827E6D58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x827ef9fc
	if (!ctx.cr6.gt) goto loc_827EF9FC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x827e7348
	ctx.lr = 0x827EF9FC;
	sub_827E7348(ctx, base);
loc_827EF9FC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,156
	ctx.r3.s64 = ctx.r29.s64 + 156;
	// bl 0x82bd8660
	ctx.lr = 0x827EFA0C;
	sub_82BD8660(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827EFA14"))) PPC_WEAK_FUNC(sub_827EFA14);
PPC_FUNC_IMPL(__imp__sub_827EFA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EFA18"))) PPC_WEAK_FUNC(sub_827EFA18);
PPC_FUNC_IMPL(__imp__sub_827EFA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x827EFA20;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827efa48
	if (ctx.cr6.eq) goto loc_827EFA48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827EFA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827EFA48:
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827efa74
	if (ctx.cr6.eq) goto loc_827EFA74;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x82132890
	ctx.lr = 0x827EFA64;
	sub_82132890(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8212ba80
	ctx.lr = 0x827EFA6C;
	sub_8212BA80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x827EFA74;
	sub_82120A70(ctx, base);
loc_827EFA74:
	// lwz r29,76(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827efaa4
	if (ctx.cr6.eq) goto loc_827EFAA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827c0ae8
	ctx.lr = 0x827EFA8C;
	sub_827C0AE8(ctx, base);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x8212ba80
	ctx.lr = 0x827EFA94;
	sub_8212BA80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82132890
	ctx.lr = 0x827EFA9C;
	sub_82132890(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x827EFAA4;
	sub_82120A70(ctx, base);
loc_827EFAA4:
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827efabc
	if (ctx.cr6.eq) goto loc_827EFABC;
	// bl 0x82120a70
	ctx.lr = 0x827EFAB8;
	sub_82120A70(ctx, base);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
loc_827EFABC:
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// lis r28,-32029
	ctx.r28.s64 = -2099052544;
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// lis r27,-32029
	ctx.r27.s64 = -2099052544;
	// lwz r24,720(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r29,-17448(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17448);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r25,-17440(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17440);
	// bl 0x821fd9d8
	ctx.lr = 0x827EFAE0;
	sub_821FD9D8(ctx, base);
	// lis r26,-32029
	ctx.r26.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
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
	ctx.lr = 0x827EFB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827efb20
	if (ctx.cr6.eq) goto loc_827EFB20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827EFB20;
	sub_821FD9E0(ctx, base);
loc_827EFB20:
	// stw r30,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r30.u32);
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// lwz r29,-17448(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17448);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,-17440(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17440);
	// lwz r28,736(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// bl 0x821fd9d8
	ctx.lr = 0x827EFB40;
	sub_821FD9D8(ctx, base);
	// lwz r11,-17444(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17444);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
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
	ctx.lr = 0x827EFB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827efb7c
	if (ctx.cr6.eq) goto loc_827EFB7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827EFB7C;
	sub_821FD9E0(ctx, base);
loc_827EFB7C:
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1252
	ctx.r3.s64 = ctx.r31.s64 + 1252;
	// bl 0x82ba0a30
	ctx.lr = 0x827EFB8C;
	sub_82BA0A30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1256
	ctx.r3.s64 = ctx.r31.s64 + 1256;
	// bl 0x82ba0a30
	ctx.lr = 0x827EFB98;
	sub_82BA0A30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1260
	ctx.r3.s64 = ctx.r31.s64 + 1260;
	// bl 0x82ba0a30
	ctx.lr = 0x827EFBA4;
	sub_82BA0A30(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82bd7338
	ctx.lr = 0x827EFBAC;
	sub_82BD7338(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827efbc0
	if (ctx.cr6.eq) goto loc_827EFBC0;
	// bl 0x82120a70
	ctx.lr = 0x827EFBBC;
	sub_82120A70(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_827EFBC0:
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827efbdc
	if (ctx.cr6.eq) goto loc_827EFBDC;
	// bl 0x82120a70
	ctx.lr = 0x827EFBD8;
	sub_82120A70(ctx, base);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
loc_827EFBDC:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827efbf8
	if (ctx.cr6.eq) goto loc_827EFBF8;
	// bl 0x82120a70
	ctx.lr = 0x827EFBF4;
	sub_82120A70(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
loc_827EFBF8:
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// bl 0x827bd2a0
	ctx.lr = 0x827EFC08;
	sub_827BD2A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827EFC10"))) PPC_WEAK_FUNC(sub_827EFC10);
PPC_FUNC_IMPL(__imp__sub_827EFC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189fc
	ctx.lr = 0x827EFC18;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x827bd430
	ctx.lr = 0x827EFC34;
	sub_827BD430(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x82bd73e0
	ctx.lr = 0x827EFC90;
	sub_82BD73E0(ctx, base);
	// addi r11,r31,852
	ctx.r11.s64 = ctx.r31.s64 + 852;
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r30.u32);
	// addi r9,r11,80
	ctx.r9.s64 = ctx.r11.s64 + 80;
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// stw r30,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// stw r30,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// stw r30,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r30.u32);
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// stw r30,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r30.u32);
	// stw r30,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r30.u32);
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// stw r30,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r30.u32);
loc_827EFCE8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r30,-12(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12, ctx.r30.u32);
	// li r10,10
	ctx.r10.s64 = 10;
loc_827EFCF4:
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x827efcf4
	if (!ctx.cr0.eq) goto loc_827EFCF4;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,192
	ctx.r9.s64 = ctx.r9.s64 + 192;
	// bge 0x827efce8
	if (!ctx.cr0.lt) goto loc_827EFCE8;
	// stw r30,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r30,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r30.u32);
	// bl 0x82120040
	ctx.lr = 0x827EFD30;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827efd40
	if (ctx.cr6.eq) goto loc_827EFD40;
	// bl 0x827c13d0
	ctx.lr = 0x827EFD3C;
	sub_827C13D0(ctx, base);
	// b 0x827efd44
	goto loc_827EFD44;
loc_827EFD40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_827EFD44:
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827EFD54;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827efd64
	if (ctx.cr6.eq) goto loc_827EFD64;
	// bl 0x827d0d18
	ctx.lr = 0x827EFD60;
	sub_827D0D18(ctx, base);
	// b 0x827efd68
	goto loc_827EFD68;
loc_827EFD64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_827EFD68:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,444
	ctx.r3.s64 = 444;
	// bl 0x82120040
	ctx.lr = 0x827EFD78;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827efd88
	if (ctx.cr6.eq) goto loc_827EFD88;
	// bl 0x827b4fc8
	ctx.lr = 0x827EFD84;
	sub_827B4FC8(ctx, base);
	// b 0x827efd8c
	goto loc_827EFD8C;
loc_827EFD88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_827EFD8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82120040
	ctx.lr = 0x827EFDA8;
	sub_82120040(ctx, base);
	// lwz r10,728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// stw r3,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r3.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x827efe80
	if (!ctx.cr6.gt) goto loc_827EFE80;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32029
	ctx.r8.s64 = -2099052544;
	// lis r7,-32026
	ctx.r7.s64 = -2098855936;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lfs f30,29760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f30.f64 = double(temp.f32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lfs f31,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// addi r26,r11,18128
	ctx.r26.s64 = ctx.r11.s64 + 18128;
	// lfs f29,-19784(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -19784);
	ctx.f29.f64 = double(temp.f32);
	// lwz r25,-28452(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -28452);
loc_827EFDE8:
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82218a80
	ctx.lr = 0x827EFE00;
	sub_82218A80(ctx, base);
	// lbz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 140);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// li r5,68
	ctx.r5.s64 = 68;
	// stb r9,140(r29)
	PPC_STORE_U8(ctx.r29.u32 + 140, ctx.r9.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82219130
	ctx.lr = 0x827EFE1C;
	sub_82219130(ctx, base);
	// addi r3,r29,68
	ctx.r3.s64 = ctx.r29.s64 + 68;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x82219130
	ctx.lr = 0x827EFE2C;
	sub_82219130(ctx, base);
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// stw r30,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r30.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r6,r7,26720
	ctx.r6.s64 = ctx.r7.s64 + 26720;
	// stw r6,168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 168, ctx.r6.u32);
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stfs f29,148(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 148, temp.u32);
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stfs f31,152(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f31,156(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stfs f30,160(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stfs f30,164(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r25,144(r4)
	PPC_STORE_U32(ctx.r4.u32 + 144, ctx.r25.u32);
	// addi r28,r28,172
	ctx.r28.s64 = ctx.r28.s64 + 172;
	// lwz r3,728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x827efde8
	if (ctx.cr6.lt) goto loc_827EFDE8;
loc_827EFE80:
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,47104
	ctx.r3.u64 = ctx.r3.u64 | 47104;
	// bl 0x82120040
	ctx.lr = 0x827EFE90;
	sub_82120040(ctx, base);
	// stw r3,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82218a4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827EFEB0"))) PPC_WEAK_FUNC(sub_827EFEB0);
PPC_FUNC_IMPL(__imp__sub_827EFEB0) {
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
	// beq cr6,0x827efee4
	if (ctx.cr6.eq) goto loc_827EFEE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827eff24
	if (!ctx.cr6.eq) goto loc_827EFF24;
loc_827EFEE4:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// sth r9,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r9.u16);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rlwinm r5,r8,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x827ef860
	ctx.lr = 0x827EFF0C;
	sub_827EF860(ctx, base);
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x827eff24
	if (!ctx.cr6.eq) goto loc_827EFF24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827ef750
	ctx.lr = 0x827EFF24;
	sub_827EF750(ctx, base);
loc_827EFF24:
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

__attribute__((alias("__imp__sub_827EFF3C"))) PPC_WEAK_FUNC(sub_827EFF3C);
PPC_FUNC_IMPL(__imp__sub_827EFF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EFF40"))) PPC_WEAK_FUNC(sub_827EFF40);
PPC_FUNC_IMPL(__imp__sub_827EFF40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x827b5130
	sub_827B5130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827EFF48"))) PPC_WEAK_FUNC(sub_827EFF48);
PPC_FUNC_IMPL(__imp__sub_827EFF48) {
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
	// lwz r31,13412(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13412);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827eff84
	if (ctx.cr6.eq) goto loc_827EFF84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827efa18
	ctx.lr = 0x827EFF74;
	sub_827EFA18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x827EFF7C;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13412, ctx.r11.u32);
loc_827EFF84:
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

__attribute__((alias("__imp__sub_827EFF9C"))) PPC_WEAK_FUNC(sub_827EFF9C);
PPC_FUNC_IMPL(__imp__sub_827EFF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827EFFA0"))) PPC_WEAK_FUNC(sub_827EFFA0);
PPC_FUNC_IMPL(__imp__sub_827EFFA0) {
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
	// lwz r11,13412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827efff8
	if (!ctx.cr6.eq) goto loc_827EFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1264
	ctx.r3.s64 = 1264;
	// bl 0x82120040
	ctx.lr = 0x827EFFCC;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827efff0
	if (ctx.cr6.eq) goto loc_827EFFF0;
	// bl 0x827efc10
	ctx.lr = 0x827EFFD8;
	sub_827EFC10(ctx, base);
	// stw r3,13412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13412, ctx.r3.u32);
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
loc_827EFFF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13412, ctx.r11.u32);
loc_827EFFF8:
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

__attribute__((alias("__imp__sub_827F000C"))) PPC_WEAK_FUNC(sub_827F000C);
PPC_FUNC_IMPL(__imp__sub_827F000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F0010"))) PPC_WEAK_FUNC(sub_827F0010);
PPC_FUNC_IMPL(__imp__sub_827F0010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x827F0018;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,708(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f021c
	if (ctx.cr6.eq) goto loc_827F021C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32030
	ctx.r10.s64 = -2099118080;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// addi r30,r10,29280
	ctx.r30.s64 = ctx.r10.s64 + 29280;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r26,r9,-17544
	ctx.r26.s64 = ctx.r9.s64 + -17544;
	// stw r27,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r27.u32);
	// lwz r10,712(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827f01a8
	if (ctx.cr6.eq) goto loc_827F01A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// bl 0x82208d20
	ctx.lr = 0x827F0074;
	sub_82208D20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f01a8
	if (!ctx.cr6.eq) goto loc_827F01A8;
	// lwz r9,13316(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13316);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f01a8
	if (!ctx.cr6.eq) goto loc_827F01A8;
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r11,38(r26)
	PPC_STORE_U8(ctx.r26.u32 + 38, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0144
	if (ctx.cr6.eq) goto loc_827F0144;
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
	ctx.lr = 0x827F00BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0140
	if (ctx.cr6.eq) goto loc_827F0140;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f31,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827F00EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0140
	if (ctx.cr6.eq) goto loc_827F0140;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,-30776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30776);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827F0118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0140
	if (ctx.cr6.eq) goto loc_827F0140;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F0140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F0140:
	// lwz r9,13316(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13316);
loc_827F0144:
	// lwz r3,1256(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1256);
	// bl 0x82ba03e0
	ctx.lr = 0x827F014C;
	sub_82BA03E0(ctx, base);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0170
	if (ctx.cr6.eq) goto loc_827F0170;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-11252
	ctx.r4.s64 = ctx.r11.s64 + -11252;
	// bl 0x827f7df0
	ctx.lr = 0x827F016C;
	sub_827F7DF0(ctx, base);
	// lwz r9,13316(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13316);
loc_827F0170:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lfs f0,-30792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30792);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x827f0188
	if (!ctx.cr6.lt) goto loc_827F0188;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_827F0188:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f0198
	if (ctx.cr6.eq) goto loc_827F0198;
	// stw r10,1124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1124, ctx.r10.u32);
loc_827F0198:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x827f8a50
	ctx.lr = 0x827F01A4;
	sub_827F8A50(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_827F01A8:
	// lwz r24,0(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,716(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 716);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r27,400(r24)
	PPC_STORE_U32(ctx.r24.u32 + 400, ctx.r27.u32);
	// bl 0x827b3810
	ctx.lr = 0x827F01BC;
	sub_827B3810(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r25,400(r24)
	PPC_STORE_U32(ctx.r24.u32 + 400, ctx.r25.u32);
	// beq cr6,0x827f0210
	if (ctx.cr6.eq) goto loc_827F0210;
	// lwz r31,13316(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13316);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f01e4
	if (ctx.cr6.eq) goto loc_827F01E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827f7f50
	ctx.lr = 0x827F01E0;
	sub_827F7F50(ctx, base);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_827F01E4:
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stb r11,38(r26)
	PPC_STORE_U8(ctx.r26.u32 + 38, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0210
	if (ctx.cr6.eq) goto loc_827F0210;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F0210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F0210:
	// stw r25,708(r28)
	PPC_STORE_U32(ctx.r28.u32 + 708, ctx.r25.u32);
	// stw r25,712(r28)
	PPC_STORE_U32(ctx.r28.u32 + 712, ctx.r25.u32);
	// stw r25,716(r28)
	PPC_STORE_U32(ctx.r28.u32 + 716, ctx.r25.u32);
loc_827F021C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x827b4540
	ctx.lr = 0x827F0224;
	sub_827B4540(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F0230"))) PPC_WEAK_FUNC(sub_827F0230);
PPC_FUNC_IMPL(__imp__sub_827F0230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x827F0238;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r12,18
	ctx.r12.s64 = 1179648;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// ori r12,r12,1
	ctx.r12.u64 = ctx.r12.u64 | 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827f026c
	if (!ctx.cr6.eq) goto loc_827F026C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r3,r11,15828
	ctx.r3.s64 = ctx.r11.s64 + 15828;
	// bl 0x8280be08
	ctx.lr = 0x827F026C;
	sub_8280BE08(ctx, base);
loc_827F026C:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0290
	if (ctx.cr6.eq) goto loc_827F0290;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x827d0c30
	ctx.lr = 0x827F0290;
	sub_827D0C30(ctx, base);
loc_827F0290:
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,26668
	ctx.r3.s64 = ctx.r11.s64 + 26668;
	// bl 0x82bc8828
	ctx.lr = 0x827F02A0;
	sub_82BC8828(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-29532
	ctx.r11.s64 = ctx.r11.s64 + -29532;
	// li r25,0
	ctx.r25.s64 = 0;
loc_827F02B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f02c0
	if (!ctx.cr6.eq) goto loc_827F02C0;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_827F02C0:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x827f02b0
	if (!ctx.cr0.eq) goto loc_827F02B0;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,13604(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13604);
	// lwz r3,15652(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0384
	if (ctx.cr6.eq) goto loc_827F0384;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// beq cr6,0x827f037c
	if (ctx.cr6.eq) goto loc_827F037C;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x827f037c
	if (!ctx.cr6.eq) goto loc_827F037C;
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
loc_827F037C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827b2fc8
	ctx.lr = 0x827F0384;
	sub_827B2FC8(ctx, base);
loc_827F0384:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,16,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE0;
	// rlwinm r10,r10,0,26,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF803F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f03c0
	if (ctx.cr6.eq) goto loc_827F03C0;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f03b8
	if (ctx.cr6.eq) goto loc_827F03B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b77660
	ctx.lr = 0x827F03B8;
	sub_82B77660(ctx, base);
loc_827F03B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b77a58
	ctx.lr = 0x827F03C0;
	sub_82B77A58(ctx, base);
loc_827F03C0:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f03e0
	if (ctx.cr6.eq) goto loc_827F03E0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13592);
	// bl 0x827cae88
	ctx.lr = 0x827F03E0;
	sub_827CAE88(ctx, base);
loc_827F03E0:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r29,r11,-15760
	ctx.r29.s64 = ctx.r11.s64 + -15760;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// lwz r30,12480(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12480);
	// bl 0x82c09bec
	ctx.lr = 0x827F03F8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,4132
	ctx.r4.s64 = ctx.r30.s64 + 4132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc58e0
	ctx.lr = 0x827F0408;
	sub_82BC58E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0430
	if (ctx.cr6.eq) goto loc_827F0430;
	// rlwinm r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82bc58e0
	ctx.lr = 0x827F0430;
	sub_82BC58E0(ctx, base);
loc_827F0430:
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x82c09bdc
	ctx.lr = 0x827F0438;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0458
	if (ctx.cr6.eq) goto loc_827F0458;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// bl 0x827a2750
	ctx.lr = 0x827F0458;
	sub_827A2750(ctx, base);
loc_827F0458:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0478
	if (ctx.cr6.eq) goto loc_827F0478;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13240);
	// bl 0x827fe588
	ctx.lr = 0x827F0478;
	sub_827FE588(ctx, base);
loc_827F0478:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f049c
	if (ctx.cr6.eq) goto loc_827F049C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82bbdd70
	ctx.lr = 0x827F049C;
	sub_82BBDD70(ctx, base);
loc_827F049C:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f04bc
	if (ctx.cr6.eq) goto loc_827F04BC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82bed038
	ctx.lr = 0x827F04BC;
	sub_82BED038(ctx, base);
loc_827F04BC:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f04dc
	if (ctx.cr6.eq) goto loc_827F04DC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13980);
	// bl 0x827869c8
	ctx.lr = 0x827F04DC;
	sub_827869C8(ctx, base);
loc_827F04DC:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8222dc78
	ctx.lr = 0x827F04E4;
	sub_8222DC78(ctx, base);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f0500
	if (!ctx.cr6.eq) goto loc_827F0500;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827f0508
	if (ctx.cr6.eq) goto loc_827F0508;
loc_827F0500:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be7188
	ctx.lr = 0x827F0508;
	sub_82BE7188(ctx, base);
loc_827F0508:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0544
	if (ctx.cr6.eq) goto loc_827F0544;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13604(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13604);
	// li r7,13
	ctx.r7.s64 = 13;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x827bd008
	ctx.lr = 0x827F0534;
	sub_827BD008(ctx, base);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
loc_827F0544:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0684
	if (ctx.cr6.eq) goto loc_827F0684;
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f0580
	if (ctx.cr6.eq) goto loc_827F0580;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827e1998
	ctx.lr = 0x827F056C;
	sub_827E1998(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r9,0,18,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_827F0580:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f05a8
	if (ctx.cr6.eq) goto loc_827F05A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdfad0
	ctx.lr = 0x827F059C;
	sub_82BDFAD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_827F05A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f05d8
	if (ctx.cr6.eq) goto loc_827F05D8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82bda560
	ctx.lr = 0x827F05C4;
	sub_82BDA560(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r9,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_827F05D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f0614
	if (!ctx.cr6.eq) goto loc_827F0614;
	// rlwinm r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f0614
	if (ctx.cr6.eq) goto loc_827F0614;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82120a70
	ctx.lr = 0x827F0600;
	sub_82120A70(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r25,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r9,0,10,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_827F0614:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f066c
	if (ctx.cr6.eq) goto loc_827F066C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827f064c
	if (ctx.cr6.eq) goto loc_827F064C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82120a70
	ctx.lr = 0x827F0640;
	sub_82120A70(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_827F064C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82120a70
	ctx.lr = 0x827F0658;
	sub_82120A70(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r25,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r25.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r9,0,11,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_827F066C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82120a70
	ctx.lr = 0x827F0674;
	sub_82120A70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_827F0684:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0878
	if (ctx.cr6.eq) goto loc_827F0878;
	// rlwinm r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f06b4
	if (ctx.cr6.eq) goto loc_827F06B4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f06b4
	if (ctx.cr6.eq) goto loc_827F06B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bdf0a0
	ctx.lr = 0x827F06B4;
	sub_82BDF0A0(ctx, base);
loc_827F06B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f06ec
	if (ctx.cr6.eq) goto loc_827F06EC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f06d8
	if (ctx.cr6.eq) goto loc_827F06D8;
	// bl 0x82b78378
	ctx.lr = 0x827F06D8;
	sub_82B78378(ctx, base);
loc_827F06D8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_827F06EC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0704
	if (ctx.cr6.eq) goto loc_827F0704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e1188
	ctx.lr = 0x827F0704;
	sub_827E1188(ctx, base);
loc_827F0704:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d48e8
	ctx.lr = 0x827F070C;
	sub_827D48E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0730
	if (ctx.cr6.eq) goto loc_827F0730;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827fcb00
	ctx.lr = 0x827F0724;
	sub_827FCB00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_827F0730:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0760
	if (ctx.cr6.eq) goto loc_827F0760;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x827837b0
	ctx.lr = 0x827F074C;
	sub_827837B0(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r25,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r25.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r9,0,14,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_827F0760:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0790
	if (ctx.cr6.eq) goto loc_827F0790;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0790
	if (ctx.cr6.eq) goto loc_827F0790;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F0790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F0790:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f07c0
	if (ctx.cr6.eq) goto loc_827F07C0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82120a70
	ctx.lr = 0x827F07AC;
	sub_82120A70(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r25,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r25.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r9,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_827F07C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f07f0
	if (ctx.cr6.eq) goto loc_827F07F0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82120a70
	ctx.lr = 0x827F07DC;
	sub_82120A70(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r25,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r25.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r9,0,17,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_827F07F0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f081c
	if (ctx.cr6.eq) goto loc_827F081C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F0814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r25,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r25.u32);
loc_827F081C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be2a20
	ctx.lr = 0x827F0824;
	sub_82BE2A20(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0858
	if (ctx.cr6.eq) goto loc_827F0858;
loc_827F0834:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F084C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827f0834
	if (!ctx.cr6.eq) goto loc_827F0834;
loc_827F0858:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r25,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r25.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82120a70
	ctx.lr = 0x827F0868;
	sub_82120A70(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_827F0878:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f0894
	if (!ctx.cr6.eq) goto loc_827F0894;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82120a70
	ctx.lr = 0x827F0890;
	sub_82120A70(ctx, base);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_827F0894:
	// lis r29,-32029
	ctx.r29.s64 = -2099052544;
	// lwz r24,24(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r28,-32029
	ctx.r28.s64 = -2099052544;
	// lwz r30,-17448(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17448);
	// lwz r26,-17440(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17440);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9d8
	ctx.lr = 0x827F08B0;
	sub_821FD9D8(ctx, base);
	// lis r27,-32029
	ctx.r27.s64 = -2099052544;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r11,-17444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17444);
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
	ctx.lr = 0x827F08E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f08f0
	if (ctx.cr6.eq) goto loc_827F08F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827F08F0;
	sub_821FD9E0(ctx, base);
loc_827F08F0:
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// lwz r30,-17448(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17448);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,-17440(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17440);
	// bl 0x821fd9d8
	ctx.lr = 0x827F0904;
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
	ctx.lr = 0x827F0930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f0940
	if (ctx.cr6.eq) goto loc_827F0940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827F0940;
	sub_821FD9E0(ctx, base);
loc_827F0940:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F0948"))) PPC_WEAK_FUNC(sub_827F0948);
PPC_FUNC_IMPL(__imp__sub_827F0948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x827F0950;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x827f0ab4
	if (ctx.cr6.eq) goto loc_827F0AB4;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// li r26,-1
	ctx.r26.s64 = -1;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// addi r23,r11,26668
	ctx.r23.s64 = ctx.r11.s64 + 26668;
loc_827F098C:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f0aa8
	if (ctx.cr6.eq) goto loc_827F0AA8;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827f09b8
	if (!ctx.cr6.gt) goto loc_827F09B8;
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// b 0x827f0aa8
	goto loc_827F0AA8;
loc_827F09B8:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0a34
	if (ctx.cr6.eq) goto loc_827F0A34;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13604(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13604);
	// li r7,13
	ctx.r7.s64 = 13;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x827bd008
	ctx.lr = 0x827F09E4;
	sub_827BD008(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e4d40
	ctx.lr = 0x827F09F8;
	sub_827E4D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f0a24
	if (ctx.cr6.eq) goto loc_827F0A24;
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r3,13604(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13604);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x827bd008
	ctx.lr = 0x827F0A20;
	sub_827BD008(ctx, base);
	// stw r26,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r26.u32);
loc_827F0A24:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
loc_827F0A34:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0a6c
	if (ctx.cr6.eq) goto loc_827F0A6C;
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x8222dc78
	ctx.lr = 0x827F0A4C;
	sub_8222DC78(ctx, base);
	// lwz r10,408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13596(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13596);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827c76a0
	ctx.lr = 0x827F0A6C;
	sub_827C76A0(ctx, base);
loc_827F0A6C:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0a88
	if (ctx.cr6.eq) goto loc_827F0A88;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bc8828
	ctx.lr = 0x827F0A88;
	sub_82BC8828(ctx, base);
loc_827F0A88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0a9c
	if (ctx.cr6.eq) goto loc_827F0A9C;
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
loc_827F0A9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827F0AA8:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x827f098c
	if (!ctx.cr0.eq) goto loc_827F098C;
loc_827F0AB4:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r21,156
	ctx.r3.s64 = ctx.r21.s64 + 156;
	// bl 0x82bd7b10
	ctx.lr = 0x827F0AC4;
	sub_82BD7B10(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F0ACC"))) PPC_WEAK_FUNC(sub_827F0ACC);
PPC_FUNC_IMPL(__imp__sub_827F0ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F0AD0"))) PPC_WEAK_FUNC(sub_827F0AD0);
PPC_FUNC_IMPL(__imp__sub_827F0AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827F0AD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bne cr6,0x827f0b08
	if (!ctx.cr6.eq) goto loc_827F0B08;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827f0c10
	if (ctx.cr6.gt) goto loc_827F0C10;
loc_827F0B08:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0b90
	if (ctx.cr6.eq) goto loc_827F0B90;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,13
	ctx.r7.s64 = 13;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,13604(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13604);
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x827bd008
	ctx.lr = 0x827F0B3C;
	sub_827BD008(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e4d40
	ctx.lr = 0x827F0B50;
	sub_827E4D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f0b80
	if (ctx.cr6.eq) goto loc_827F0B80;
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r3,13604(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13604);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x827bd008
	ctx.lr = 0x827F0B78;
	sub_827BD008(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
loc_827F0B80:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
loc_827F0B90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0bc8
	if (ctx.cr6.eq) goto loc_827F0BC8;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8222dc78
	ctx.lr = 0x827F0BA8;
	sub_8222DC78(ctx, base);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r3,13596(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13596);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827c76a0
	ctx.lr = 0x827F0BC8;
	sub_827C76A0(ctx, base);
loc_827F0BC8:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0be8
	if (ctx.cr6.eq) goto loc_827F0BE8;
	// lis r11,-32030
	ctx.r11.s64 = -2099118080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,26668
	ctx.r3.s64 = ctx.r11.s64 + 26668;
	// bl 0x82bc8828
	ctx.lr = 0x827F0BE8;
	sub_82BC8828(ctx, base);
loc_827F0BE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f0c04
	if (!ctx.cr6.eq) goto loc_827F0C04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r27,156
	ctx.r3.s64 = ctx.r27.s64 + 156;
	// bl 0x82bd7d78
	ctx.lr = 0x827F0C04;
	sub_82BD7D78(ctx, base);
loc_827F0C04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827F0C10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F0C18"))) PPC_WEAK_FUNC(sub_827F0C18);
PPC_FUNC_IMPL(__imp__sub_827F0C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F0C20;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x827f0c5c
	if (ctx.cr6.eq) goto loc_827F0C5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0c4c
	if (ctx.cr6.eq) goto loc_827F0C4C;
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// b 0x827f0c60
	goto loc_827F0C60;
loc_827F0C4C:
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f0c60
	if (!ctx.cr6.eq) goto loc_827F0C60;
loc_827F0C5C:
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
loc_827F0C60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827e6ee8
	ctx.lr = 0x827F0C68;
	sub_827E6EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827f0d28
	if (!ctx.cr6.eq) goto loc_827F0D28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f0cc8
	if (ctx.cr6.eq) goto loc_827F0CC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0cc8
	if (ctx.cr6.eq) goto loc_827F0CC8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827f0cc0
	if (!ctx.cr6.lt) goto loc_827F0CC0;
loc_827F0CA0:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827f0cbc
	if (ctx.cr6.eq) goto loc_827F0CBC;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827f0ca0
	if (ctx.cr6.lt) goto loc_827F0CA0;
	// b 0x827f0cc0
	goto loc_827F0CC0;
loc_827F0CBC:
	// bl 0x82746598
	ctx.lr = 0x827F0CC0;
	sub_82746598(ctx, base);
loc_827F0CC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_827F0CC8:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x827f0cfc
	if (ctx.cr6.eq) goto loc_827F0CFC;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8222dc78
	ctx.lr = 0x827F0CDC;
	sub_8222DC78(ctx, base);
	// lwz r11,408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r3,13596(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13596);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827c76a0
	ctx.lr = 0x827F0CFC;
	sub_827C76A0(ctx, base);
loc_827F0CFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0d1c
	if (ctx.cr6.eq) goto loc_827F0D1C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f0ad0
	ctx.lr = 0x827F0D1C;
	sub_827F0AD0(ctx, base);
loc_827F0D1C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f0230
	ctx.lr = 0x827F0D28;
	sub_827F0230(ctx, base);
loc_827F0D28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F0D30"))) PPC_WEAK_FUNC(sub_827F0D30);
PPC_FUNC_IMPL(__imp__sub_827F0D30) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827f0d5c
	if (ctx.cr6.eq) goto loc_827F0D5C;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827f0da8
	if (!ctx.cr6.eq) goto loc_827F0DA8;
loc_827F0D5C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f0da8
	if (ctx.cr6.eq) goto loc_827F0DA8;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827f0d94
	if (!ctx.cr6.lt) goto loc_827F0D94;
loc_827F0D74:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827f0d90
	if (ctx.cr6.eq) goto loc_827F0D90;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827f0d74
	if (ctx.cr6.lt) goto loc_827F0D74;
	// b 0x827f0d94
	goto loc_827F0D94;
loc_827F0D90:
	// bl 0x82746598
	ctx.lr = 0x827F0D94;
	sub_82746598(ctx, base);
loc_827F0D94:
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x827f0da8
	if (!ctx.cr6.eq) goto loc_827F0DA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r11.u32);
loc_827F0DA8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x827f0c18
	ctx.lr = 0x827F0DB4;
	sub_827F0C18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F0DC4"))) PPC_WEAK_FUNC(sub_827F0DC4);
PPC_FUNC_IMPL(__imp__sub_827F0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F0DC8"))) PPC_WEAK_FUNC(sub_827F0DC8);
PPC_FUNC_IMPL(__imp__sub_827F0DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827F0DD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r29,r30,108
	ctx.r29.s64 = ctx.r30.s64 + 108;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r28,r30,132
	ctx.r28.s64 = ctx.r30.s64 + 132;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r27,r30,84
	ctx.r27.s64 = ctx.r30.s64 + 84;
	// stw r11,704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 704, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// bl 0x827e6900
	ctx.lr = 0x827F0E48;
	sub_827E6900(ctx, base);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f0e90
	if (ctx.cr6.eq) goto loc_827F0E90;
loc_827F0E54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821249a8
	ctx.lr = 0x827F0E5C;
	sub_821249A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e6b90
	ctx.lr = 0x827F0E68;
	sub_827E6B90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// lwz r4,36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827f0e84
	if (ctx.cr6.eq) goto loc_827F0E84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f0d30
	ctx.lr = 0x827F0E84;
	sub_827F0D30(ctx, base);
loc_827F0E84:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f0e54
	if (!ctx.cr6.eq) goto loc_827F0E54;
loc_827F0E90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e7200
	ctx.lr = 0x827F0E98;
	sub_827E7200(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// bl 0x827e6900
	ctx.lr = 0x827F0EF0;
	sub_827E6900(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f0f2c
	if (ctx.cr6.eq) goto loc_827F0F2C;
loc_827F0EFC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821249a8
	ctx.lr = 0x827F0F04;
	sub_821249A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827e6b90
	ctx.lr = 0x827F0F10;
	sub_827E6B90(ctx, base);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,36(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// bl 0x827f0d30
	ctx.lr = 0x827F0F20;
	sub_827F0D30(ctx, base);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f0efc
	if (!ctx.cr6.eq) goto loc_827F0EFC;
loc_827F0F2C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827e7200
	ctx.lr = 0x827F0F34;
	sub_827E7200(ctx, base);
	// stw r31,704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 704, ctx.r31.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F0F40"))) PPC_WEAK_FUNC(sub_827F0F40);
PPC_FUNC_IMPL(__imp__sub_827F0F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F0F48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827f0f94
	if (!ctx.cr6.gt) goto loc_827F0F94;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_827F0F68:
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// bl 0x827f0d30
	ctx.lr = 0x827F0F80;
	sub_827F0D30(ctx, base);
	// lwz r9,672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827f0f68
	if (ctx.cr6.lt) goto loc_827F0F68;
loc_827F0F94:
	// stw r28,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r28.u32);
	// stw r28,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F0FA4"))) PPC_WEAK_FUNC(sub_827F0FA4);
PPC_FUNC_IMPL(__imp__sub_827F0FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F0FA8"))) PPC_WEAK_FUNC(sub_827F0FA8);
PPC_FUNC_IMPL(__imp__sub_827F0FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F0FB0;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x827f105c
	if (ctx.cr6.eq) goto loc_827F105C;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f104c
	if (ctx.cr6.eq) goto loc_827F104C;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8222dc78
	ctx.lr = 0x827F0FD8;
	sub_8222DC78(ctx, base);
	// lwz r11,408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f104c
	if (ctx.cr6.eq) goto loc_827F104C;
	// lwz r10,672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r11,676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827f1028
	if (!ctx.cr6.gt) goto loc_827F1028;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f101c
	if (!ctx.cr6.eq) goto loc_827F101C;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827F1018;
	sub_82120040(ctx, base);
	// b 0x827f1024
	goto loc_827F1024;
loc_827F101C:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x827F1024;
	sub_82121828(ctx, base);
loc_827F1024:
	// stw r3,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r3.u32);
loc_827F1028:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// lwz r10,680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F104C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f0d30
	ctx.lr = 0x827F105C;
	sub_827F0D30(ctx, base);
loc_827F105C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F1064"))) PPC_WEAK_FUNC(sub_827F1064);
PPC_FUNC_IMPL(__imp__sub_827F1064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F1068"))) PPC_WEAK_FUNC(sub_827F1068);
PPC_FUNC_IMPL(__imp__sub_827F1068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827F1070;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r3,108
	ctx.r7.s64 = ctx.r3.s64 + 108;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r3,132
	ctx.r6.s64 = ctx.r3.s64 + 132;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r3,84
	ctx.r5.s64 = ctx.r3.s64 + 84;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x827e6900
	ctx.lr = 0x827F10D4;
	sub_827E6900(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f1178
	if (ctx.cr6.eq) goto loc_827F1178;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// addi r27,r11,15828
	ctx.r27.s64 = ctx.r11.s64 + 15828;
loc_827F10EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821249a8
	ctx.lr = 0x827F10F4;
	sub_821249A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e6b90
	ctx.lr = 0x827F1100;
	sub_827E6B90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// rlwinm r29,r11,6,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// bne cr6,0x827f1118
	if (!ctx.cr6.eq) goto loc_827F1118;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827f116c
	if (ctx.cr6.eq) goto loc_827F116C;
loc_827F1118:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c05108
	ctx.lr = 0x827F1128;
	sub_82C05108(ctx, base);
	// lis r12,18
	ctx.r12.s64 = 1179648;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r12,r12,1
	ctx.r12.u64 = ctx.r12.u64 | 1;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x827f1150
	if (!ctx.cr6.eq) goto loc_827F1150;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8280c1b8
	ctx.lr = 0x827F1150;
	sub_8280C1B8(ctx, base);
loc_827F1150:
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// bne cr6,0x827f116c
	if (!ctx.cr6.eq) goto loc_827F116C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827f116c
	if (ctx.cr6.eq) goto loc_827F116C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 67108864;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827F116C:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f10ec
	if (!ctx.cr6.eq) goto loc_827F10EC;
loc_827F1178:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e7200
	ctx.lr = 0x827F1180;
	sub_827E7200(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F1188"))) PPC_WEAK_FUNC(sub_827F1188);
PPC_FUNC_IMPL(__imp__sub_827F1188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x827F1190;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r8,-31945
	ctx.r8.s64 = -2093547520;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// addi r7,r8,-29532
	ctx.r7.s64 = ctx.r8.s64 + -29532;
	// lfs f31,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f31.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// lis r5,-31942
	ctx.r5.s64 = -2093350912;
	// lis r4,-31942
	ctx.r4.s64 = -2093350912;
	// stfs f31,92(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r27,-29532(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29532, ctx.r27.u32);
	// stw r11,13320(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13320, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r27.u32);
	// stw r10,13348(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13348, ctx.r10.u32);
	// stw r9,14252(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14252, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,14256(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14256, ctx.r11.u32);
	// bl 0x82b77ca8
	ctx.lr = 0x827F11FC;
	sub_82B77CA8(ctx, base);
	// lwz r3,728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// stw r27,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ble cr6,0x827f1218
	if (!ctx.cr6.gt) goto loc_827F1218;
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
loc_827F1218:
	// stw r27,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f1068
	ctx.lr = 0x827F1228;
	sub_827F1068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f0dc8
	ctx.lr = 0x827F1230;
	sub_827F0DC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82783ab0
	ctx.lr = 0x827F1238;
	sub_82783AB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827f1294
	if (ctx.cr6.eq) goto loc_827F1294;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_827F1250:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827f1294
	if (!ctx.cr6.lt) goto loc_827F1294;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f127c
	if (ctx.cr6.eq) goto loc_827F127C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x827834e8
	ctx.lr = 0x827F127C;
	sub_827834E8(ctx, base);
loc_827F127C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827f1250
	if (!ctx.cr6.eq) goto loc_827F1250;
loc_827F1294:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1252
	ctx.r3.s64 = ctx.r31.s64 + 1252;
	// bl 0x82ba0a30
	ctx.lr = 0x827F12A0;
	sub_82BA0A30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1256
	ctx.r3.s64 = ctx.r31.s64 + 1256;
	// bl 0x82ba0a30
	ctx.lr = 0x827F12AC;
	sub_82BA0A30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,1260
	ctx.r3.s64 = ctx.r31.s64 + 1260;
	// bl 0x82ba0a30
	ctx.lr = 0x827F12B8;
	sub_82BA0A30(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13596);
	// bl 0x827c6fc0
	ctx.lr = 0x827F12C4;
	sub_827C6FC0(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r6,-32051
	ctx.r6.s64 = -2100494336;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lfs f0,-30832(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30832);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,12704(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12704);
	// stfs f0,26592(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 26592, temp.u32);
	// stw r9,696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 696, ctx.r9.u32);
	// bl 0x82bbdfa0
	ctx.lr = 0x827F12F0;
	sub_82BBDFA0(ctx, base);
	// lwz r5,728(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x827f1340
	if (!ctx.cr6.gt) goto loc_827F1340;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_827F1304:
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827f1318
	if (ctx.cr6.lt) goto loc_827F1318;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x827f1320
	goto loc_827F1320;
loc_827F1318:
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_827F1320:
	// lbz r8,140(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 140);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,172
	ctx.r9.s64 = ctx.r9.s64 + 172;
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stb r7,140(r11)
	PPC_STORE_U8(ctx.r11.u32 + 140, ctx.r7.u8);
	// lwz r6,728(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x827f1304
	if (ctx.cr6.lt) goto loc_827F1304;
loc_827F1340:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r3,13604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13604);
	// bl 0x827bd008
	ctx.lr = 0x827F1360;
	sub_827BD008(ctx, base);
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r10,26208
	ctx.r8.s64 = ctx.r10.s64 + 26208;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lfs f13,26208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26208);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,13320(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13320, ctx.r11.u32);
	// fsubs f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lfs f0,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,12(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stfs f0,26208(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 26208, temp.u32);
	// stfs f31,8(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F13AC"))) PPC_WEAK_FUNC(sub_827F13AC);
PPC_FUNC_IMPL(__imp__sub_827F13AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F13B0"))) PPC_WEAK_FUNC(sub_827F13B0);
PPC_FUNC_IMPL(__imp__sub_827F13B0) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x827f13c4
	if (!ctx.cr6.lt) goto loc_827F13C4;
	// clrldi r3,r5,32
	ctx.r3.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// rldimi r3,r4,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// blr 
	return;
loc_827F13C4:
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rldimi r3,r5,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F13D0"))) PPC_WEAK_FUNC(sub_827F13D0);
PPC_FUNC_IMPL(__imp__sub_827F13D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F13D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_827F1404:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f141c
	if (ctx.cr6.eq) goto loc_827F141C;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f1420
	if (ctx.cr6.eq) goto loc_827F1420;
loc_827F141C:
	// twi 31,r0,22
loc_827F1420:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827f148c
	if (ctx.cr6.eq) goto loc_827F148C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827f1438
	if (!ctx.cr6.eq) goto loc_827F1438;
	// twi 31,r0,22
loc_827F1438:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827f1448
	if (!ctx.cr6.eq) goto loc_827F1448;
	// twi 31,r0,22
loc_827F1448:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r8,r10,3,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x827f1464
	if (!ctx.cr6.eq) goto loc_827F1464;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x827f1470
	if (ctx.cr6.eq) goto loc_827F1470;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_827F1464:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82130050
	ctx.lr = 0x827F146C;
	sub_82130050(ctx, base);
	// b 0x827f1404
	goto loc_827F1404;
loc_827F1470:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827f1480
	if (!ctx.cr6.eq) goto loc_827F1480;
	// twi 31,r0,22
loc_827F1480:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827F148C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F1498"))) PPC_WEAK_FUNC(sub_827F1498);
PPC_FUNC_IMPL(__imp__sub_827F1498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F14A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_827F14C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f14e0
	if (ctx.cr6.eq) goto loc_827F14E0;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f14e4
	if (ctx.cr6.eq) goto loc_827F14E4;
loc_827F14E0:
	// twi 31,r0,22
loc_827F14E4:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827f152c
	if (ctx.cr6.eq) goto loc_827F152C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f14fc
	if (!ctx.cr6.eq) goto loc_827F14FC;
	// twi 31,r0,22
loc_827F14FC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f150c
	if (!ctx.cr6.eq) goto loc_827F150C;
	// twi 31,r0,22
loc_827F150C:
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r10,r11,3,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x827f1520
	if (!ctx.cr6.eq) goto loc_827F1520;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_827F1520:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82130050
	ctx.lr = 0x827F1528;
	sub_82130050(ctx, base);
	// b 0x827f14c8
	goto loc_827F14C8;
loc_827F152C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F1538"))) PPC_WEAK_FUNC(sub_827F1538);
PPC_FUNC_IMPL(__imp__sub_827F1538) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82130308
	ctx.lr = 0x827F155C;
	sub_82130308(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x8212cb70
	ctx.lr = 0x827F158C;
	sub_8212CB70(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r5,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r4,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_827F15C0"))) PPC_WEAK_FUNC(sub_827F15C0);
PPC_FUNC_IMPL(__imp__sub_827F15C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x827F15C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// clrldi r25,r29,32
	ctx.r25.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// rldicr r24,r29,32,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// li r11,-1
	ctx.r11.s64 = -1;
	// or r10,r24,r25
	ctx.r10.u64 = ctx.r24.u64 | ctx.r25.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212ff88
	ctx.lr = 0x827F1614;
	sub_8212FF88(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f1634
	if (ctx.cr6.eq) goto loc_827F1634;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f1638
	if (ctx.cr6.eq) goto loc_827F1638;
loc_827F1634:
	// twi 31,r0,22
loc_827F1638:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827f1668
	if (ctx.cr6.eq) goto loc_827F1668;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f1650
	if (!ctx.cr6.eq) goto loc_827F1650;
	// twi 31,r0,22
loc_827F1650:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f1660
	if (!ctx.cr6.eq) goto loc_827F1660;
	// twi 31,r0,22
loc_827F1660:
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_827F1668:
	// clrldi r30,r28,32
	ctx.r30.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// rldicr r27,r28,32,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// or r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 | ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212ff88
	ctx.lr = 0x827F1688;
	sub_8212FF88(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f16a8
	if (ctx.cr6.eq) goto loc_827F16A8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f16ac
	if (ctx.cr6.eq) goto loc_827F16AC;
loc_827F16A8:
	// twi 31,r0,22
loc_827F16AC:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827f16dc
	if (ctx.cr6.eq) goto loc_827F16DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f16c4
	if (!ctx.cr6.eq) goto loc_827F16C4;
	// twi 31,r0,22
loc_827F16C4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f16d4
	if (!ctx.cr6.eq) goto loc_827F16D4;
	// twi 31,r0,22
loc_827F16D4:
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_827F16DC:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// or r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 | ctx.r24.u64;
	// blt cr6,0x827f16ec
	if (ctx.cr6.lt) goto loc_827F16EC;
	// or r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 | ctx.r25.u64;
loc_827F16EC:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212ff88
	ctx.lr = 0x827F1700;
	sub_8212FF88(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f1720
	if (ctx.cr6.eq) goto loc_827F1720;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f1724
	if (ctx.cr6.eq) goto loc_827F1724;
loc_827F1720:
	// twi 31,r0,22
loc_827F1724:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827f1754
	if (ctx.cr6.eq) goto loc_827F1754;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f173c
	if (!ctx.cr6.eq) goto loc_827F173C;
	// twi 31,r0,22
loc_827F173C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f174c
	if (!ctx.cr6.eq) goto loc_827F174C;
	// twi 31,r0,22
loc_827F174C:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_827F1754:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F175C"))) PPC_WEAK_FUNC(sub_827F175C);
PPC_FUNC_IMPL(__imp__sub_827F175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F1760"))) PPC_WEAK_FUNC(sub_827F1760);
PPC_FUNC_IMPL(__imp__sub_827F1760) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x827f15c0
	ctx.lr = 0x827F1780;
	sub_827F15C0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F1794"))) PPC_WEAK_FUNC(sub_827F1794);
PPC_FUNC_IMPL(__imp__sub_827F1794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F1798"))) PPC_WEAK_FUNC(sub_827F1798);
PPC_FUNC_IMPL(__imp__sub_827F1798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x827F17A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r24.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x8212fd68
	ctx.lr = 0x827F17D4;
	sub_8212FD68(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f17f4
	if (ctx.cr6.eq) goto loc_827F17F4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f17f8
	if (ctx.cr6.eq) goto loc_827F17F8;
loc_827F17F4:
	// twi 31,r0,22
loc_827F17F8:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f1854
	if (ctx.cr6.eq) goto loc_827F1854;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827f1810
	if (!ctx.cr6.eq) goto loc_827F1810;
	// twi 31,r0,22
loc_827F1810:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f1820
	if (!ctx.cr6.eq) goto loc_827F1820;
	// twi 31,r0,22
loc_827F1820:
	// li r6,31
	ctx.r6.s64 = 31;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82218ce0
	ctx.lr = 0x827F1834;
	sub_82218CE0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f1844
	if (!ctx.cr6.eq) goto loc_827F1844;
	// twi 31,r0,22
loc_827F1844:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// oris r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 268435456;
	// stw r10,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
	// b 0x827f1890
	goto loc_827F1890;
loc_827F1854:
	// li r6,31
	ctx.r6.s64 = 31;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82218ce0
	ctx.lr = 0x827F1868;
	sub_82218CE0(ctx, base);
	// rlwinm r11,r27,29,0,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0xE0000000;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// bl 0x8212fbe8
	ctx.lr = 0x827F1884;
	sub_8212FBE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x82219130
	ctx.lr = 0x827F1890;
	sub_82219130(ctx, base);
loc_827F1890:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,12452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12452);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x82bc9f60
	ctx.lr = 0x827F18A8;
	sub_82BC9F60(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F18B0"))) PPC_WEAK_FUNC(sub_827F18B0);
PPC_FUNC_IMPL(__imp__sub_827F18B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F18B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x827f18d4
	if (!ctx.cr6.lt) goto loc_827F18D4;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// rldimi r11,r4,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// b 0x827f18dc
	goto loc_827F18DC;
loc_827F18D4:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rldimi r11,r5,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
loc_827F18DC:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827f1950
	if (ctx.cr6.eq) goto loc_827F1950;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x827f1950
	if (ctx.cr6.eq) goto loc_827F1950;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8212ff88
	ctx.lr = 0x827F190C;
	sub_8212FF88(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f1920
	if (ctx.cr6.eq) goto loc_827F1920;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f1924
	if (ctx.cr6.eq) goto loc_827F1924;
loc_827F1920:
	// twi 31,r0,22
loc_827F1924:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827f1934
	if (ctx.cr6.eq) goto loc_827F1934;
	// li r29,1
	ctx.r29.s64 = 1;
loc_827F1934:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x8212fe08
	ctx.lr = 0x827F1948;
	sub_8212FE08(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_827F1950:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F1958"))) PPC_WEAK_FUNC(sub_827F1958);
PPC_FUNC_IMPL(__imp__sub_827F1958) {
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
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_827F198C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f19a4
	if (ctx.cr6.eq) goto loc_827F19A4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f19a8
	if (ctx.cr6.eq) goto loc_827F19A8;
loc_827F19A4:
	// twi 31,r0,22
loc_827F19A8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827f19e8
	if (ctx.cr6.eq) goto loc_827F19E8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f19c0
	if (!ctx.cr6.eq) goto loc_827F19C0;
	// twi 31,r0,22
loc_827F19C0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f19d0
	if (!ctx.cr6.eq) goto loc_827F19D0;
	// twi 31,r0,22
loc_827F19D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x82c067a0
	ctx.lr = 0x827F19DC;
	sub_82C067A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82130050
	ctx.lr = 0x827F19E4;
	sub_82130050(ctx, base);
	// b 0x827f198c
	goto loc_827F198C;
loc_827F19E8:
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

__attribute__((alias("__imp__sub_827F1A00"))) PPC_WEAK_FUNC(sub_827F1A00);
PPC_FUNC_IMPL(__imp__sub_827F1A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189ec
	ctx.lr = 0x827F1A08;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-31942
	ctx.r22.s64 = -2093350912;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lwz r30,12456(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12456);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// beq cr6,0x827f1a6c
	if (ctx.cr6.eq) goto loc_827F1A6C;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827F1A6C:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// blt cr6,0x827f1e34
	if (ctx.cr6.lt) goto loc_827F1E34;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x827f1ac4
	if (ctx.cr6.eq) goto loc_827F1AC4;
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
loc_827F1AC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f1bd4
	if (ctx.cr6.eq) goto loc_827F1BD4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_827F1AD0:
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r8,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r8.u8);
	// stb r7,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r7.u8);
	// stb r9,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// stb r10,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// beq cr6,0x827f1b1c
	if (ctx.cr6.eq) goto loc_827F1B1C;
	// lbz r8,89(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r7,90(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// stb r7,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
loc_827F1B1C:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stb r9,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r9.u8);
	// stb r7,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r7.u8);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// beq cr6,0x827f1b68
	if (ctx.cr6.eq) goto loc_827F1B68;
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
loc_827F1B68:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r8.u8);
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// stb r9,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// stb r7,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r7.u8);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x827f1bb4
	if (ctx.cr6.eq) goto loc_827F1BB4;
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
loc_827F1BB4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827f18b0
	ctx.lr = 0x827F1BC8;
	sub_827F18B0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r30,12456(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12456);
	// bne 0x827f1ad0
	if (!ctx.cr0.eq) goto loc_827F1AD0;
loc_827F1BD4:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r8,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r8.u8);
	// stb r9,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x827f1c24
	if (ctx.cr6.eq) goto loc_827F1C24;
	// lbz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r8,89(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_827F1C24:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f1dd4
	if (ctx.cr6.eq) goto loc_827F1DD4;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_827F1C34:
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r9,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r9.u8);
	// stb r10,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r10.u8);
	// stb r8,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r8.u8);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// beq cr6,0x827f1c8c
	if (ctx.cr6.eq) goto loc_827F1C8C;
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
loc_827F1C8C:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82219130
	ctx.lr = 0x827F1C9C;
	sub_82219130(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// blt cr6,0x827f1da8
	if (ctx.cr6.lt) goto loc_827F1DA8;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r9,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r9.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// stb r8,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r8.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// beq cr6,0x827f1cf4
	if (ctx.cr6.eq) goto loc_827F1CF4;
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_827F1CF4:
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 3, ctx.xer);
	// blt cr6,0x827f1d50
	if (ctx.cr6.lt) goto loc_827F1D50;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stb r9,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
	// stb r8,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r8.u8);
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// beq cr6,0x827f1d4c
	if (ctx.cr6.eq) goto loc_827F1D4C;
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_827F1D4C:
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_827F1D50:
	// cmplwi cr6,r23,5
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 5, ctx.xer);
	// blt cr6,0x827f1da8
	if (ctx.cr6.lt) goto loc_827F1DA8;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
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
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// beq cr6,0x827f1da4
	if (ctx.cr6.eq) goto loc_827F1DA4;
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_827F1DA4:
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_827F1DA8:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x827f1798
	ctx.lr = 0x827F1DC8;
	sub_827F1798(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r30,12456(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12456);
	// bne 0x827f1c34
	if (!ctx.cr0.eq) goto loc_827F1C34;
loc_827F1DD4:
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// blt cr6,0x827f1e34
	if (ctx.cr6.lt) goto loc_827F1E34;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// stb r9,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r9.u8);
	// stb r8,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r8.u8);
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x827f1e28
	if (ctx.cr6.eq) goto loc_827F1E28;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_827F1E28:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827f1e34
	if (ctx.cr6.eq) goto loc_827F1E34;
	// stw r11,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
loc_827F1E34:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82218a3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F1E3C"))) PPC_WEAK_FUNC(sub_827F1E3C);
PPC_FUNC_IMPL(__imp__sub_827F1E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F1E40"))) PPC_WEAK_FUNC(sub_827F1E40);
PPC_FUNC_IMPL(__imp__sub_827F1E40) {
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8212ff18
	ctx.lr = 0x827F1E5C;
	sub_8212FF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fcf8
	ctx.lr = 0x827F1E64;
	sub_8212FCF8(ctx, base);
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

__attribute__((alias("__imp__sub_827F1E78"))) PPC_WEAK_FUNC(sub_827F1E78);
PPC_FUNC_IMPL(__imp__sub_827F1E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F1E80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// bl 0x821317e0
	ctx.lr = 0x827F1E98;
	sub_821317E0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f1ea8
	if (ctx.cr6.eq) goto loc_827F1EA8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_827F1EA8:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f1eb4
	if (ctx.cr0.eq) goto loc_827F1EB4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_827F1EB4:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f1ec0
	if (ctx.cr0.eq) goto loc_827F1EC0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_827F1EC0:
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r30,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r30.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r29,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r29.u8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r29,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r29.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r11,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
	// bl 0x82123020
	ctx.lr = 0x827F1F00;
	sub_82123020(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f1f0c
	if (ctx.cr6.eq) goto loc_827F1F0C;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_827F1F0C:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f1f18
	if (ctx.cr0.eq) goto loc_827F1F18;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_827F1F18:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f1f24
	if (ctx.cr0.eq) goto loc_827F1F24;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_827F1F24:
	// stb r29,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r29.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r30.u8);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stb r29,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F1F64"))) PPC_WEAK_FUNC(sub_827F1F64);
PPC_FUNC_IMPL(__imp__sub_827F1F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F1F68"))) PPC_WEAK_FUNC(sub_827F1F68);
PPC_FUNC_IMPL(__imp__sub_827F1F68) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827f1f90
	if (!ctx.cr6.eq) goto loc_827F1F90;
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
loc_827F1F90:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8221b9e0
	ctx.lr = 0x827F1F98;
	sub_8221B9E0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F1FB0"))) PPC_WEAK_FUNC(sub_827F1FB0);
PPC_FUNC_IMPL(__imp__sub_827F1FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F1FC8"))) PPC_WEAK_FUNC(sub_827F1FC8);
PPC_FUNC_IMPL(__imp__sub_827F1FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827F1FD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827f2028
	if (!ctx.cr6.gt) goto loc_827F2028;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827F1FF0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// beq cr6,0x827f2014
	if (ctx.cr6.eq) goto loc_827F2014;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8221b9e0
	ctx.lr = 0x827F200C;
	sub_8221B9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f2034
	if (ctx.cr6.eq) goto loc_827F2034;
loc_827F2014:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827f1ff0
	if (ctx.cr6.lt) goto loc_827F1FF0;
loc_827F2028:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_827F2034:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F2040"))) PPC_WEAK_FUNC(sub_827F2040);
PPC_FUNC_IMPL(__imp__sub_827F2040) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827f2050
	if (!ctx.cr6.eq) goto loc_827F2050;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827F2050:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f2060
	if (ctx.cr6.eq) goto loc_827F2060;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_827F2060:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827f2070
	if (ctx.cr6.lt) goto loc_827F2070;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_827F2070:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827f2080
	if (ctx.cr6.lt) goto loc_827F2080;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_827F2080:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F2088"))) PPC_WEAK_FUNC(sub_827F2088);
PPC_FUNC_IMPL(__imp__sub_827F2088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F20A0"))) PPC_WEAK_FUNC(sub_827F20A0);
PPC_FUNC_IMPL(__imp__sub_827F20A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F20B8"))) PPC_WEAK_FUNC(sub_827F20B8);
PPC_FUNC_IMPL(__imp__sub_827F20B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F20D0"))) PPC_WEAK_FUNC(sub_827F20D0);
PPC_FUNC_IMPL(__imp__sub_827F20D0) {
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
	// bne cr6,0x827f20fc
	if (!ctx.cr6.eq) goto loc_827F20FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827f2164
	goto loc_827F2164;
loc_827F20FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f2118
	if (!ctx.cr6.eq) goto loc_827F2118;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82120040
	ctx.lr = 0x827F2114;
	sub_82120040(ctx, base);
	// b 0x827f2128
	goto loc_827F2128;
loc_827F2118:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x827F2128;
	sub_82121828(ctx, base);
loc_827F2128:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f2150
	if (ctx.cr6.eq) goto loc_827F2150;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_827F2150:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f2160
	if (!ctx.cr6.eq) goto loc_827F2160;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_827F2160:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827F2164:
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

__attribute__((alias("__imp__sub_827F217C"))) PPC_WEAK_FUNC(sub_827F217C);
PPC_FUNC_IMPL(__imp__sub_827F217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2180"))) PPC_WEAK_FUNC(sub_827F2180);
PPC_FUNC_IMPL(__imp__sub_827F2180) {
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
	// bne cr6,0x827f21ac
	if (!ctx.cr6.eq) goto loc_827F21AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827f2204
	goto loc_827F2204;
loc_827F21AC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f21c8
	if (!ctx.cr6.eq) goto loc_827F21C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82120040
	ctx.lr = 0x827F21C4;
	sub_82120040(ctx, base);
	// b 0x827f21d8
	goto loc_827F21D8;
loc_827F21C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x827F21D8;
	sub_82121828(ctx, base);
loc_827F21D8:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f2200
	if (ctx.cr6.eq) goto loc_827F2200;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_827F2200:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827F2204:
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

__attribute__((alias("__imp__sub_827F221C"))) PPC_WEAK_FUNC(sub_827F221C);
PPC_FUNC_IMPL(__imp__sub_827F221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2220"))) PPC_WEAK_FUNC(sub_827F2220);
PPC_FUNC_IMPL(__imp__sub_827F2220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827F2228;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-11264
	ctx.r10.s64 = ctx.r11.s64 + -11264;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// stw r31,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// bl 0x82120040
	ctx.lr = 0x827F225C;
	sub_82120040(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-23396
	ctx.r30.s64 = ctx.r11.s64 + -23396;
	// beq cr6,0x827f22a4
	if (ctx.cr6.eq) goto loc_827F22A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r9,r11,-11288
	ctx.r9.s64 = ctx.r11.s64 + -11288;
	// addi r8,r10,-23380
	ctx.r8.s64 = ctx.r10.s64 + -23380;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// b 0x827f22a8
	goto loc_827F22A8;
loc_827F22A4:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_827F22A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827f20d0
	ctx.lr = 0x827F22B4;
	sub_827F20D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82120040
	ctx.lr = 0x827F22C0;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f22e0
	if (ctx.cr6.eq) goto loc_827F22E0;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// b 0x827f22e4
	goto loc_827F22E4;
loc_827F22E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827F22E4:
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// bl 0x827f2180
	ctx.lr = 0x827F22F8;
	sub_827F2180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82120040
	ctx.lr = 0x827F2304;
	sub_82120040(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-23404
	ctx.r11.s64 = ctx.r11.s64 + -23404;
	// beq cr6,0x827f232c
	if (ctx.cr6.eq) goto loc_827F232C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// b 0x827f2330
	goto loc_827F2330;
loc_827F232C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827F2330:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// bl 0x827f2180
	ctx.lr = 0x827F2348;
	sub_827F2180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82120040
	ctx.lr = 0x827F2354;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f237c
	if (ctx.cr6.eq) goto loc_827F237C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-23412
	ctx.r10.s64 = ctx.r11.s64 + -23412;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// b 0x827f2380
	goto loc_827F2380;
loc_827F237C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827F2380:
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r28.u32);
	// bl 0x827f2180
	ctx.lr = 0x827F2398;
	sub_827F2180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82120040
	ctx.lr = 0x827F23A4;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f23cc
	if (ctx.cr6.eq) goto loc_827F23CC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,-23420
	ctx.r10.s64 = ctx.r11.s64 + -23420;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// b 0x827f23d0
	goto loc_827F23D0;
loc_827F23CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827F23D0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bl 0x827f2180
	ctx.lr = 0x827F23E8;
	sub_827F2180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82120040
	ctx.lr = 0x827F23F4;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f241c
	if (ctx.cr6.eq) goto loc_827F241C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,-23428
	ctx.r10.s64 = ctx.r11.s64 + -23428;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// b 0x827f2420
	goto loc_827F2420;
loc_827F241C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827F2420:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bl 0x827f2180
	ctx.lr = 0x827F2438;
	sub_827F2180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82120040
	ctx.lr = 0x827F2444;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f246c
	if (ctx.cr6.eq) goto loc_827F246C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-23436
	ctx.r10.s64 = ctx.r11.s64 + -23436;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// b 0x827f2470
	goto loc_827F2470;
loc_827F246C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827F2470:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bl 0x827f2180
	ctx.lr = 0x827F2488;
	sub_827F2180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82120040
	ctx.lr = 0x827F2494;
	sub_82120040(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-23448
	ctx.r11.s64 = ctx.r11.s64 + -23448;
	// beq cr6,0x827f24bc
	if (ctx.cr6.eq) goto loc_827F24BC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// b 0x827f24c0
	goto loc_827F24C0;
loc_827F24BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827F24C0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r28,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bl 0x827f2180
	ctx.lr = 0x827F24D8;
	sub_827F2180(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F24E4"))) PPC_WEAK_FUNC(sub_827F24E4);
PPC_FUNC_IMPL(__imp__sub_827F24E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F24E8"))) PPC_WEAK_FUNC(sub_827F24E8);
PPC_FUNC_IMPL(__imp__sub_827F24E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F24F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-23388
	ctx.r4.s64 = ctx.r11.s64 + -23388;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8221b9e0
	ctx.lr = 0x827F250C;
	sub_8221B9E0(ctx, base);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827f2520
	if (!ctx.cr6.eq) goto loc_827F2520;
	// lwz r11,13400(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13400);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_827F2520:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f1fc8
	ctx.lr = 0x827F252C;
	sub_827F1FC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f253c
	if (!ctx.cr6.eq) goto loc_827F253C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827F253C:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f2584
	if (ctx.cr6.eq) goto loc_827F2584;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f2564
	if (ctx.cr6.eq) goto loc_827F2564;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_827F2564:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827f2574
	if (ctx.cr6.lt) goto loc_827F2574;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_827F2574:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827f2584
	if (ctx.cr6.lt) goto loc_827F2584;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_827F2584:
	// lwz r11,13400(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13400);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827f25dc
	if (!ctx.cr6.eq) goto loc_827F25DC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x827f25c4
	if (ctx.cr6.eq) goto loc_827F25C4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r31,13404(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13404);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827F25BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x827cc028
	ctx.lr = 0x827F25C4;
	sub_827CC028(ctx, base);
loc_827F25C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x827f25dc
	if (ctx.cr6.eq) goto loc_827F25DC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13604);
	// bl 0x827bd158
	ctx.lr = 0x827F25DC;
	sub_827BD158(ctx, base);
loc_827F25DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F25E8"))) PPC_WEAK_FUNC(sub_827F25E8);
PPC_FUNC_IMPL(__imp__sub_827F25E8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x827f25f4
	if (ctx.cr6.eq) goto loc_827F25F4;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
loc_827F25F4:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f2604
	if (!ctx.cr6.eq) goto loc_827F2604;
	// blr 
	return;
loc_827F2604:
	// b 0x827f24e8
	sub_827F24E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F2608"))) PPC_WEAK_FUNC(sub_827F2608);
PPC_FUNC_IMPL(__imp__sub_827F2608) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F2610"))) PPC_WEAK_FUNC(sub_827F2610);
PPC_FUNC_IMPL(__imp__sub_827F2610) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,22
	ctx.r8.s64 = 22;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827F2650:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x827f2650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827F2650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F2660"))) PPC_WEAK_FUNC(sub_827F2660);
PPC_FUNC_IMPL(__imp__sub_827F2660) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,13420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// lwz r10,13312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13312);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 480, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F268C"))) PPC_WEAK_FUNC(sub_827F268C);
PPC_FUNC_IMPL(__imp__sub_827F268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2690"))) PPC_WEAK_FUNC(sub_827F2690);
PPC_FUNC_IMPL(__imp__sub_827F2690) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x827f26b0
	if (!ctx.cr6.eq) goto loc_827F26B0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// stw r10,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r10.u32);
	// blr 
	return;
loc_827F26B0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,13420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// lwz r10,13312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13312);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 480, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F26D0"))) PPC_WEAK_FUNC(sub_827F26D0);
PPC_FUNC_IMPL(__imp__sub_827F26D0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x827f26f0
	if (!ctx.cr6.eq) goto loc_827F26F0;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// stw r10,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r10.u32);
	// blr 
	return;
loc_827F26F0:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x827f2710
	if (!ctx.cr6.eq) goto loc_827F2710;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// stw r10,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r10.u32);
	// blr 
	return;
loc_827F2710:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,13420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// lwz r10,13312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13312);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 480, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F2734"))) PPC_WEAK_FUNC(sub_827F2734);
PPC_FUNC_IMPL(__imp__sub_827F2734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2738"))) PPC_WEAK_FUNC(sub_827F2738);
PPC_FUNC_IMPL(__imp__sub_827F2738) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mulli r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 * 60;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// stw r3,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r3.u32);
	// stw r4,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// stw r4,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// stw r4,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// stw r4,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// stw r4,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F27A4"))) PPC_WEAK_FUNC(sub_827F27A4);
PPC_FUNC_IMPL(__imp__sub_827F27A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F27A8"))) PPC_WEAK_FUNC(sub_827F27A8);
PPC_FUNC_IMPL(__imp__sub_827F27A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F27CC"))) PPC_WEAK_FUNC(sub_827F27CC);
PPC_FUNC_IMPL(__imp__sub_827F27CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F27D0"))) PPC_WEAK_FUNC(sub_827F27D0);
PPC_FUNC_IMPL(__imp__sub_827F27D0) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f281c
	if (ctx.cr6.eq) goto loc_827F281C;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f281c
	if (ctx.cr6.eq) goto loc_827F281C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827f281c
	if (ctx.cr6.eq) goto loc_827F281C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F2818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_827F281C:
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

__attribute__((alias("__imp__sub_827F2830"))) PPC_WEAK_FUNC(sub_827F2830);
PPC_FUNC_IMPL(__imp__sub_827F2830) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-11360
	ctx.r8.s64 = ctx.r9.s64 + -11360;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bge cr6,0x827f2874
	if (!ctx.cr6.lt) goto loc_827F2874;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mulli r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 * 60;
	// lwz r11,13396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_827F2874:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F287C"))) PPC_WEAK_FUNC(sub_827F287C);
PPC_FUNC_IMPL(__imp__sub_827F287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2880"))) PPC_WEAK_FUNC(sub_827F2880);
PPC_FUNC_IMPL(__imp__sub_827F2880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// stw r10,14072(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14072, ctx.r10.u32);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x827f28b4
	if (!ctx.cr6.eq) goto loc_827F28B4;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// stw r10,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_827F28B4:
	// b 0x827f27d0
	sub_827F27D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F28B8"))) PPC_WEAK_FUNC(sub_827F28B8);
PPC_FUNC_IMPL(__imp__sub_827F28B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827f28e0
	if (!ctx.cr6.eq) goto loc_827F28E0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r10,12704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12704);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x827f28ec
	if (!ctx.cr6.eq) goto loc_827F28EC;
loc_827F28E0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
loc_827F28EC:
	// b 0x827f27d0
	sub_827F27D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F28F0"))) PPC_WEAK_FUNC(sub_827F28F0);
PPC_FUNC_IMPL(__imp__sub_827F28F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827F28F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r30,22
	ctx.r30.s64 = 22;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_827F2928:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f293c
	if (ctx.cr6.eq) goto loc_827F293C;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x827f2940
	if (ctx.cr6.eq) goto loc_827F2940;
loc_827F293C:
	// twi 31,r0,22
loc_827F2940:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x827f29a0
	if (ctx.cr6.eq) goto loc_827F29A0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f2958
	if (!ctx.cr6.eq) goto loc_827F2958;
	// twi 31,r0,22
loc_827F2958:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x827f2968
	if (!ctx.cr6.eq) goto loc_827F2968;
	// twi 31,r0,22
loc_827F2968:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x827f2994
	if (!ctx.cr6.gt) goto loc_827F2994;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x827f2988
	if (!ctx.cr6.eq) goto loc_827F2988;
	// twi 31,r0,22
loc_827F2988:
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_827F2994:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212f8d8
	ctx.lr = 0x827F299C;
	sub_8212F8D8(ctx, base);
	// b 0x827f2928
	goto loc_827F2928;
loc_827F29A0:
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x827f29b0
	if (ctx.cr6.eq) goto loc_827F29B0;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// bne cr6,0x827f29c8
	if (!ctx.cr6.eq) goto loc_827F29C8;
loc_827F29B0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,13316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13316);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827f29cc
	if (!ctx.cr6.eq) goto loc_827F29CC;
loc_827F29C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_827F29CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F29D4"))) PPC_WEAK_FUNC(sub_827F29D4);
PPC_FUNC_IMPL(__imp__sub_827F29D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F29D8"))) PPC_WEAK_FUNC(sub_827F29D8);
PPC_FUNC_IMPL(__imp__sub_827F29D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f2a2c
	if (!ctx.cr6.eq) goto loc_827F2A2C;
loc_827F29F0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x827f2a04
	if (ctx.cr6.lt) goto loc_827F2A04;
	// li r10,0
	ctx.r10.s64 = 0;
loc_827F2A04:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f2a18
	if (ctx.cr6.eq) goto loc_827F2A18;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x827f2a20
	goto loc_827F2A20;
loc_827F2A18:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827F2A20:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f29f0
	if (ctx.cr6.eq) goto loc_827F29F0;
loc_827F2A2C:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827f2a68
	if (ctx.cr6.eq) goto loc_827F2A68;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x827f2a54
	if (ctx.cr6.lt) goto loc_827F2A54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827F2A54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f2a68
	if (!ctx.cr6.eq) goto loc_827F2A68;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// b 0x827f2a74
	goto loc_827F2A74;
loc_827F2A68:
	// stw r10,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// addi r11,r1,-8
	ctx.r11.s64 = ctx.r1.s64 + -8;
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
loc_827F2A74:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f2a94
	if (ctx.cr6.eq) goto loc_827F2A94;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x827f2a98
	if (ctx.cr6.eq) goto loc_827F2A98;
loc_827F2A94:
	// twi 31,r0,22
loc_827F2A98:
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827f2aac
	if (!ctx.cr6.eq) goto loc_827F2AAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827F2AAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f2ab8
	if (!ctx.cr6.eq) goto loc_827F2AB8;
	// twi 31,r0,22
loc_827F2AB8:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f2ac8
	if (!ctx.cr6.eq) goto loc_827F2AC8;
	// twi 31,r0,22
loc_827F2AC8:
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F2AD0"))) PPC_WEAK_FUNC(sub_827F2AD0);
PPC_FUNC_IMPL(__imp__sub_827F2AD0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x827f2b18
	if (!ctx.cr6.eq) goto loc_827F2B18;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,13420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// lwz r3,13928(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13928);
	// lwz r31,13924(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13924);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// bl 0x82791848
	ctx.lr = 0x827F2B14;
	sub_82791848(ctx, base);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
loc_827F2B18:
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

__attribute__((alias("__imp__sub_827F2B34"))) PPC_WEAK_FUNC(sub_827F2B34);
PPC_FUNC_IMPL(__imp__sub_827F2B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2B38"))) PPC_WEAK_FUNC(sub_827F2B38);
PPC_FUNC_IMPL(__imp__sub_827F2B38) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x827f29d8
	ctx.lr = 0x827F2B5C;
	sub_827F29D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f2b7c
	if (ctx.cr6.eq) goto loc_827F2B7C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x827f2b7c
	if (!ctx.cr6.eq) goto loc_827F2B7C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827f2c34
	goto loc_827F2C34;
loc_827F2B7C:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r31,r7,8
	ctx.r31.s64 = ctx.r7.s64 + 8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_827F2B94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f2ba8
	if (ctx.cr6.eq) goto loc_827F2BA8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f2bac
	if (ctx.cr6.eq) goto loc_827F2BAC;
loc_827F2BA8:
	// twi 31,r0,22
loc_827F2BAC:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f2c0c
	if (ctx.cr6.eq) goto loc_827F2C0C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f2bc0
	if (!ctx.cr6.eq) goto loc_827F2BC0;
	// twi 31,r0,22
loc_827F2BC0:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f2bd0
	if (!ctx.cr6.eq) goto loc_827F2BD0;
	// twi 31,r0,22
loc_827F2BD0:
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f2c0c
	if (ctx.cr6.eq) goto loc_827F2C0C;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f2be8
	if (!ctx.cr6.eq) goto loc_827F2BE8;
	// twi 31,r0,22
loc_827F2BE8:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x827f2c0c
	if (ctx.cr6.eq) goto loc_827F2C0C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212f8d8
	ctx.lr = 0x827F2C00;
	sub_8212F8D8(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x827f2b94
	goto loc_827F2B94;
loc_827F2C0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f2c20
	if (ctx.cr6.eq) goto loc_827F2C20;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f2c24
	if (ctx.cr6.eq) goto loc_827F2C24;
loc_827F2C20:
	// twi 31,r0,22
loc_827F2C24:
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
loc_827F2C34:
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

__attribute__((alias("__imp__sub_827F2C4C"))) PPC_WEAK_FUNC(sub_827F2C4C);
PPC_FUNC_IMPL(__imp__sub_827F2C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2C50"))) PPC_WEAK_FUNC(sub_827F2C50);
PPC_FUNC_IMPL(__imp__sub_827F2C50) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_827F2C80:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f2c94
	if (ctx.cr6.eq) goto loc_827F2C94;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f2c98
	if (ctx.cr6.eq) goto loc_827F2C98;
loc_827F2C94:
	// twi 31,r0,22
loc_827F2C98:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827f2cec
	if (ctx.cr6.eq) goto loc_827F2CEC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f2cac
	if (!ctx.cr6.eq) goto loc_827F2CAC;
	// twi 31,r0,22
loc_827F2CAC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f2cbc
	if (!ctx.cr6.eq) goto loc_827F2CBC;
	// twi 31,r0,22
loc_827F2CBC:
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f2cd8
	if (ctx.cr6.eq) goto loc_827F2CD8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x827f2cf0
	if (ctx.cr6.eq) goto loc_827F2CF0;
loc_827F2CD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212f8d8
	ctx.lr = 0x827F2CE0;
	sub_8212F8D8(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x827f2c80
	goto loc_827F2C80;
loc_827F2CEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F2CF0:
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

__attribute__((alias("__imp__sub_827F2D08"))) PPC_WEAK_FUNC(sub_827F2D08);
PPC_FUNC_IMPL(__imp__sub_827F2D08) {
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
	// bl 0x821201b0
	ctx.lr = 0x827F2D20;
	sub_821201B0(ctx, base);
	// stw r31,1384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1384, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_827F2D3C"))) PPC_WEAK_FUNC(sub_827F2D3C);
PPC_FUNC_IMPL(__imp__sub_827F2D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2D40"))) PPC_WEAK_FUNC(sub_827F2D40);
PPC_FUNC_IMPL(__imp__sub_827F2D40) {
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
	// bl 0x821201b0
	ctx.lr = 0x827F2D58;
	sub_821201B0(ctx, base);
	// stw r31,1380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1380, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_827F2D74"))) PPC_WEAK_FUNC(sub_827F2D74);
PPC_FUNC_IMPL(__imp__sub_827F2D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2D78"))) PPC_WEAK_FUNC(sub_827F2D78);
PPC_FUNC_IMPL(__imp__sub_827F2D78) {
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
	// bl 0x821201b0
	ctx.lr = 0x827F2D90;
	sub_821201B0(ctx, base);
	// stw r31,1368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1368, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_827F2DAC"))) PPC_WEAK_FUNC(sub_827F2DAC);
PPC_FUNC_IMPL(__imp__sub_827F2DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2DB0"))) PPC_WEAK_FUNC(sub_827F2DB0);
PPC_FUNC_IMPL(__imp__sub_827F2DB0) {
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
	// bl 0x821201b0
	ctx.lr = 0x827F2DC8;
	sub_821201B0(ctx, base);
	// stw r31,1372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1372, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_827F2DE4"))) PPC_WEAK_FUNC(sub_827F2DE4);
PPC_FUNC_IMPL(__imp__sub_827F2DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2DE8"))) PPC_WEAK_FUNC(sub_827F2DE8);
PPC_FUNC_IMPL(__imp__sub_827F2DE8) {
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
	// bl 0x821201b0
	ctx.lr = 0x827F2E00;
	sub_821201B0(ctx, base);
	// stw r31,1376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1376, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_827F2E1C"))) PPC_WEAK_FUNC(sub_827F2E1C);
PPC_FUNC_IMPL(__imp__sub_827F2E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2E20"))) PPC_WEAK_FUNC(sub_827F2E20);
PPC_FUNC_IMPL(__imp__sub_827F2E20) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f2e4c
	if (!ctx.cr6.eq) goto loc_827F2E4C;
loc_827F2E44:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827f2e7c
	goto loc_827F2E7C;
loc_827F2E4C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13404(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13404);
	// bl 0x827cbcb8
	ctx.lr = 0x827F2E5C;
	sub_827CBCB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f2e44
	if (ctx.cr6.eq) goto loc_827F2E44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r9,r11,1
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_827F2E7C:
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

__attribute__((alias("__imp__sub_827F2E94"))) PPC_WEAK_FUNC(sub_827F2E94);
PPC_FUNC_IMPL(__imp__sub_827F2E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F2E98"))) PPC_WEAK_FUNC(sub_827F2E98);
PPC_FUNC_IMPL(__imp__sub_827F2E98) {
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8213fd90
	ctx.lr = 0x827F2EC0;
	sub_8213FD90(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
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

__attribute__((alias("__imp__sub_827F2EE8"))) PPC_WEAK_FUNC(sub_827F2EE8);
PPC_FUNC_IMPL(__imp__sub_827F2EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x827F2EF0;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// bl 0x82122f90
	ctx.lr = 0x827F2F18;
	sub_82122F90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f2f24
	if (ctx.cr6.eq) goto loc_827F2F24;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_827F2F24:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f2f30
	if (ctx.cr0.eq) goto loc_827F2F30;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_827F2F30:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827f2f3c
	if (ctx.cr0.eq) goto loc_827F2F3C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_827F2F3C:
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r30,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r30.u8);
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// stb r6,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r6.u8);
	// li r4,21
	ctx.r4.s64 = 21;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stb r6,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r6.u8);
	// li r5,22
	ctx.r5.s64 = 22;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_827F2F80:
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r30.u32);
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r30.u32);
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// stw r30,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r30.u32);
	// stw r30,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r30.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827F2FB0:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x827f2fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827F2FB0;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// bge 0x827f2f80
	if (!ctx.cr0.lt) goto loc_827F2F80;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r30.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r30,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r30.u32);
	// addi r28,r10,-11952
	ctx.r28.s64 = ctx.r10.s64 + -11952;
	// stw r30,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r30.u32);
	// addi r10,r8,-11964
	ctx.r10.s64 = ctx.r8.s64 + -11964;
	// stw r30,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r30.u32);
	// li r8,10500
	ctx.r8.s64 = 10500;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r28,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r28.u32);
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// stw r30,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r30.u32);
	// addi r8,r5,-11988
	ctx.r8.s64 = ctx.r5.s64 + -11988;
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// addi r10,r7,-11976
	ctx.r10.s64 = ctx.r7.s64 + -11976;
	// stw r11,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r11.u32);
	// addi r5,r3,-11916
	ctx.r5.s64 = ctx.r3.s64 + -11916;
	// stw r8,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// addi r4,r4,-12000
	ctx.r4.s64 = ctx.r4.s64 + -12000;
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// addi r3,r29,-11928
	ctx.r3.s64 = ctx.r29.s64 + -11928;
	// stw r11,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// stw r4,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r4.u32);
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// stw r11,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r11.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// li r10,10501
	ctx.r10.s64 = 10501;
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r3,r29,-11880
	ctx.r3.s64 = ctx.r29.s64 + -11880;
	// addi r8,r27,-11940
	ctx.r8.s64 = ctx.r27.s64 + -11940;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// addi r7,r7,-11904
	ctx.r7.s64 = ctx.r7.s64 + -11904;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r27,10502
	ctx.r27.s64 = 10502;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r29,r29,-11892
	ctx.r29.s64 = ctx.r29.s64 + -11892;
	// stw r4,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r9,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r9.u32);
	// li r9,10600
	ctx.r9.s64 = 10600;
	// stw r5,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r5.u32);
	// stw r7,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r7.u32);
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
	// stw r27,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r27.u32);
	// stw r8,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r8.u32);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// stw r30,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r30.u32);
	// stw r30,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r30.u32);
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
	// stw r11,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r11.u32);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// addi r3,r26,-11832
	ctx.r3.s64 = ctx.r26.s64 + -11832;
	// stw r25,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r25.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// li r29,10200
	ctx.r29.s64 = 10200;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r10,r10,-11844
	ctx.r10.s64 = ctx.r10.s64 + -11844;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r26,r8,-11856
	ctx.r26.s64 = ctx.r8.s64 + -11856;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// addi r25,r7,-11868
	ctx.r25.s64 = ctx.r7.s64 + -11868;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lis r23,-32242
	ctx.r23.s64 = -2113011712;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// addi r5,r5,-11796
	ctx.r5.s64 = ctx.r5.s64 + -11796;
	// stw r29,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
	// addi r4,r4,-11808
	ctx.r4.s64 = ctx.r4.s64 + -11808;
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// li r7,10304
	ctx.r7.s64 = 10304;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// addi r29,r27,-11820
	ctx.r29.s64 = ctx.r27.s64 + -11820;
	// stw r26,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r26.u32);
	// addi r10,r24,-11772
	ctx.r10.s64 = ctx.r24.s64 + -11772;
	// stw r25,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r25.u32);
	// addi r9,r23,-11784
	ctx.r9.s64 = ctx.r23.s64 + -11784;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// li r8,10303
	ctx.r8.s64 = 10303;
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// li r27,6
	ctx.r27.s64 = 6;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lis r23,-32242
	ctx.r23.s64 = -2113011712;
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// lis r22,-32242
	ctx.r22.s64 = -2113011712;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r5,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r5.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r4,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r4.u32);
	// stw r3,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r3.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r7,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r7.u32);
	// stw r26,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r26.u32);
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r27,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r27.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r8,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r8.u32);
	// stw r10,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r29,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r29.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// addi r4,r24,-11748
	ctx.r4.s64 = ctx.r24.s64 + -11748;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// addi r3,r23,-11760
	ctx.r3.s64 = ctx.r23.s64 + -11760;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r4,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r4.u32);
	// li r9,10302
	ctx.r9.s64 = 10302;
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// addi r3,r22,-11712
	ctx.r3.s64 = ctx.r22.s64 + -11712;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// stw r26,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r26.u32);
	// addi r5,r5,-11724
	ctx.r5.s64 = ctx.r5.s64 + -11724;
	// stw r29,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r29.u32);
	// li r23,7
	ctx.r23.s64 = 7;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// li r22,10301
	ctx.r22.s64 = 10301;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// lis r21,-32242
	ctx.r21.s64 = -2113011712;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// addi r4,r4,-11736
	ctx.r4.s64 = ctx.r4.s64 + -11736;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// lis r20,-32242
	ctx.r20.s64 = -2113011712;
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// li r10,10300
	ctx.r10.s64 = 10300;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// li r19,8
	ctx.r19.s64 = 8;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// addi r27,r27,-11688
	ctx.r27.s64 = ctx.r27.s64 + -11688;
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// addi r24,r24,-11700
	ctx.r24.s64 = ctx.r24.s64 + -11700;
	// stw r3,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r3.u32);
	// addi r3,r21,-11664
	ctx.r3.s64 = ctx.r21.s64 + -11664;
	// stw r23,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r23.u32);
	// addi r23,r20,-11676
	ctx.r23.s64 = ctx.r20.s64 + -11676;
	// stw r22,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r22.u32);
	// li r21,17
	ctx.r21.s64 = 17;
	// stw r5,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r5.u32);
	// lis r22,-32242
	ctx.r22.s64 = -2113011712;
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r4,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r4.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r25,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r25.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// stw r19,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r19.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// stw r27,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r27.u32);
	// stw r24,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r24.u32);
	// stw r26,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r26.u32);
	// stw r29,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r29.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r3,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r3.u32);
	// stw r21,1040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1040, ctx.r21.u32);
	// stw r30,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r30.u32);
	// stw r10,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r10.u32);
	// stw r23,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r23.u32);
	// stw r26,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r26.u32);
	// stw r29,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r29.u32);
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// stw r30,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r30.u32);
	// li r27,9
	ctx.r27.s64 = 9;
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
	// addi r10,r22,-11640
	ctx.r10.s64 = ctx.r22.s64 + -11640;
	// stw r11,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r11.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
	// addi r5,r5,-11652
	ctx.r5.s64 = ctx.r5.s64 + -11652;
	// stw r11,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r11.u32);
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// stw r27,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r27.u32);
	// li r27,10
	ctx.r27.s64 = 10;
	// stw r9,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r9.u32);
	// addi r4,r4,-11616
	ctx.r4.s64 = ctx.r4.s64 + -11616;
	// stw r10,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r10.u32);
	// addi r3,r3,-11628
	ctx.r3.s64 = ctx.r3.s64 + -11628;
	// stw r6,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r6.u32);
	// addi r6,r25,-11592
	ctx.r6.s64 = ctx.r25.s64 + -11592;
	// stw r5,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r5.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r26,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r26.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// addi r5,r24,-11604
	ctx.r5.s64 = ctx.r24.s64 + -11604;
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// li r25,11
	ctx.r25.s64 = 11;
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// addi r10,r10,-11568
	ctx.r10.s64 = ctx.r10.s64 + -11568;
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// addi r9,r9,-11580
	ctx.r9.s64 = ctx.r9.s64 + -11580;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// li r24,12
	ctx.r24.s64 = 12;
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// li r23,10505
	ctx.r23.s64 = 10505;
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// lis r22,-32242
	ctx.r22.s64 = -2113011712;
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// addi r22,r22,-11556
	ctx.r22.s64 = ctx.r22.s64 + -11556;
	// stw r8,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r8.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r27,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r27.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stw r4,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r4.u32);
	// stw r3,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r3.u32);
	// stw r26,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r26.u32);
	// stw r29,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r29.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r25,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r25.u32);
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// stw r7,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r7.u32);
	// stw r6,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r6.u32);
	// stw r5,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r5.u32);
	// stw r26,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r26.u32);
	// stw r30,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// stw r11,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r11.u32);
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// stw r24,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r24.u32);
	// stw r30,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r30.u32);
	// stw r23,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r23.u32);
	// stw r10,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
	// stw r9,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r9.u32);
	// stw r26,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r26.u32);
	// stw r30,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r30.u32);
	// stw r30,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r30.u32);
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// li r7,14
	ctx.r7.s64 = 14;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// li r6,10306
	ctx.r6.s64 = 10306;
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// addi r9,r8,-11544
	ctx.r9.s64 = ctx.r8.s64 + -11544;
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r11,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r11.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r7,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r7.u32);
	// li r8,10307
	ctx.r8.s64 = 10307;
	// stw r6,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r6.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r28,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r28.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// addi r5,r5,-11512
	ctx.r5.s64 = ctx.r5.s64 + -11512;
	// stw r22,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r22.u32);
	// addi r4,r4,-11524
	ctx.r4.s64 = ctx.r4.s64 + -11524;
	// stw r26,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r26.u32);
	// li r28,10308
	ctx.r28.s64 = 10308;
	// stw r30,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r30.u32);
	// addi r7,r7,-11508
	ctx.r7.s64 = ctx.r7.s64 + -11508;
	// stw r30,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r30.u32);
	// li r27,18
	ctx.r27.s64 = 18;
	// stw r30,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r30.u32);
	// li r25,10208
	ctx.r25.s64 = 10208;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// lis r23,-32242
	ctx.r23.s64 = -2113011712;
	// stw r11,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r11.u32);
	// stw r11,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r11.u32);
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
	// stw r11,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r11.u32);
	// stw r3,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r3.u32);
	// stw r30,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r30.u32);
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// stw r8,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r8.u32);
	// stw r9,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r9.u32);
	// stw r26,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r26.u32);
	// stw r30,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r30.u32);
	// stw r30,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r30.u32);
	// stw r30,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r30.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// stw r11,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r11.u32);
	// stw r11,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r11.u32);
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// stw r11,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r11.u32);
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
	// stw r6,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r6.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r30,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r30.u32);
	// stw r28,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r28.u32);
	// stw r5,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r5.u32);
	// stw r4,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r4.u32);
	// stw r26,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r26.u32);
	// stw r30,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r30.u32);
	// stw r30,1008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1008, ctx.r30.u32);
	// stw r30,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r30.u32);
	// stw r11,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r11.u32);
	// stw r11,1020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1020, ctx.r11.u32);
	// stw r11,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r11.u32);
	// stw r11,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r11.u32);
	// stw r11,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r11.u32);
	// stw r11,1036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1036, ctx.r11.u32);
	// stw r10,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r10.u32);
	// stw r7,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r7.u32);
	// stw r27,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r27.u32);
	// stw r30,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r30.u32);
	// stw r25,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r25.u32);
	// stw r26,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r26.u32);
	// stw r29,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r29.u32);
	// stw r30,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r30.u32);
	// stw r30,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r30.u32);
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// stw r11,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r11.u32);
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// addi r4,r23,-11480
	ctx.r4.s64 = ctx.r23.s64 + -11480;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// addi r5,r24,-11468
	ctx.r5.s64 = ctx.r24.s64 + -11468;
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
	// li r3,19
	ctx.r3.s64 = 19;
	// li r10,10309
	ctx.r10.s64 = 10309;
	// stw r4,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r4.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r3,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r3.u32);
	// addi r8,r6,-11456
	ctx.r8.s64 = ctx.r6.s64 + -11456;
	// stw r10,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r10.u32);
	// stw r5,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r5.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r30,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r30.u32);
	// li r6,10310
	ctx.r6.s64 = 10310;
	// addi r4,r9,-11432
	ctx.r4.s64 = ctx.r9.s64 + -11432;
	// stw r26,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r26.u32);
	// stw r30,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r30.u32);
	// li r10,10311
	ctx.r10.s64 = 10311;
	// stw r30,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r30.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r30,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r11.u32);
	// stw r11,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r11.u32);
	// stw r11,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r11.u32);
	// stw r11,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r11.u32);
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// stw r11,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r11.u32);
	// stw r7,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r7.u32);
	// stw r30,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r30.u32);
	// stw r6,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r6.u32);
	// stw r5,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r5.u32);
	// stw r8,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r8.u32);
	// stw r26,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r26.u32);
	// stw r30,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r30.u32);
	// stw r30,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r30.u32);
	// stw r30,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r30.u32);
	// stw r11,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r11.u32);
	// stw r11,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r11.u32);
	// stw r11,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r11.u32);
	// stw r11,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// stw r11,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
	// stw r11,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r11.u32);
	// stw r4,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r4.u32);
	// stw r9,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r9.u32);
	// stw r30,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r30.u32);
	// stw r10,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r10.u32);
	// stw r30,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r30.u32);
	// stw r26,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r26.u32);
	// stw r30,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r30.u32);
	// stw r30,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r30.u32);
	// stw r30,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r30.u32);
	// stw r11,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r11.u32);
	// stw r11,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r11.u32);
	// stw r11,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r11.u32);
	// stw r11,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r11.u32);
	// stw r11,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r11.u32);
	// stw r11,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F3714"))) PPC_WEAK_FUNC(sub_827F3714);
PPC_FUNC_IMPL(__imp__sub_827F3714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F3718"))) PPC_WEAK_FUNC(sub_827F3718);
PPC_FUNC_IMPL(__imp__sub_827F3718) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x827f37ac
	if (!ctx.cr6.eq) goto loc_827F37AC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f3774
	if (ctx.cr6.eq) goto loc_827F3774;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,-3648
	ctx.r3.s64 = ctx.r11.s64 + -3648;
	// bl 0x82120268
	ctx.lr = 0x827F375C;
	sub_82120268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F3774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F3774:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,13420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13928(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13928);
	// lwz r31,13924(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13924);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// bl 0x82791848
	ctx.lr = 0x827F37A0;
	sub_82791848(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// b 0x827f37b0
	goto loc_827F37B0;
loc_827F37AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827F37B0:
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

__attribute__((alias("__imp__sub_827F37C8"))) PPC_WEAK_FUNC(sub_827F37C8);
PPC_FUNC_IMPL(__imp__sub_827F37C8) {
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
	// lwz r11,13396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f3820
	if (!ctx.cr6.eq) goto loc_827F3820;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1356
	ctx.r3.s64 = 1356;
	// bl 0x82120040
	ctx.lr = 0x827F37F4;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f3818
	if (ctx.cr6.eq) goto loc_827F3818;
	// bl 0x827f2ee8
	ctx.lr = 0x827F3800;
	sub_827F2EE8(ctx, base);
	// stw r3,13396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13396, ctx.r3.u32);
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
loc_827F3818:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13396, ctx.r11.u32);
loc_827F3820:
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

__attribute__((alias("__imp__sub_827F3834"))) PPC_WEAK_FUNC(sub_827F3834);
PPC_FUNC_IMPL(__imp__sub_827F3834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F3838"))) PPC_WEAK_FUNC(sub_827F3838);
PPC_FUNC_IMPL(__imp__sub_827F3838) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f389c
	if (ctx.cr6.eq) goto loc_827F389C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f388c
	if (ctx.cr6.eq) goto loc_827F388C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
loc_827F3870:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827f3870
	if (!ctx.cr0.eq) goto loc_827F3870;
loc_827F388C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82786578
	ctx.lr = 0x827F3894;
	sub_82786578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827F389C:
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

__attribute__((alias("__imp__sub_827F38B0"))) PPC_WEAK_FUNC(sub_827F38B0);
PPC_FUNC_IMPL(__imp__sub_827F38B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r11,-11360
	ctx.r10.s64 = ctx.r11.s64 + -11360;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x827f3838
	sub_827F3838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F38C0"))) PPC_WEAK_FUNC(sub_827F38C0);
PPC_FUNC_IMPL(__imp__sub_827F38C0) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827f38f0
	if (ctx.cr6.eq) goto loc_827F38F0;
	// bl 0x827f29d8
	ctx.lr = 0x827F38E4;
	sub_827F29D8(ctx, base);
	// bl 0x827f3838
	ctx.lr = 0x827F38E8;
	sub_827F3838(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827F38F0:
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

__attribute__((alias("__imp__sub_827F3904"))) PPC_WEAK_FUNC(sub_827F3904);
PPC_FUNC_IMPL(__imp__sub_827F3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F3908"))) PPC_WEAK_FUNC(sub_827F3908);
PPC_FUNC_IMPL(__imp__sub_827F3908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F3910;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r11,-11360
	ctx.r30.s64 = ctx.r11.s64 + -11360;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
loc_827F393C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f3950
	if (ctx.cr6.eq) goto loc_827F3950;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x827f3954
	if (ctx.cr6.eq) goto loc_827F3954;
loc_827F3950:
	// twi 31,r0,22
loc_827F3954:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827f39a8
	if (ctx.cr6.eq) goto loc_827F39A8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f396c
	if (!ctx.cr6.eq) goto loc_827F396C;
	// twi 31,r0,22
loc_827F396C:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827f397c
	if (!ctx.cr6.eq) goto loc_827F397C;
	// twi 31,r0,22
loc_827F397C:
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f399c
	if (ctx.cr6.eq) goto loc_827F399C;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f3838
	ctx.lr = 0x827F3994;
	sub_827F3838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x827F399C;
	sub_82120A70(ctx, base);
loc_827F399C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212f8d8
	ctx.lr = 0x827F39A4;
	sub_8212F8D8(ctx, base);
	// b 0x827f393c
	goto loc_827F393C;
loc_827F39A8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82132b10
	ctx.lr = 0x827F39D4;
	sub_82132B10(ctx, base);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827f3a38
	if (ctx.cr6.eq) goto loc_827F3A38;
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
	ctx.lr = 0x827F39F8;
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
	ctx.lr = 0x827F3A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f3a38
	if (ctx.cr6.eq) goto loc_827F3A38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827F3A38;
	sub_821FD9E0(ctx, base);
loc_827F3A38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F3A4C"))) PPC_WEAK_FUNC(sub_827F3A4C);
PPC_FUNC_IMPL(__imp__sub_827F3A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F3A50"))) PPC_WEAK_FUNC(sub_827F3A50);
PPC_FUNC_IMPL(__imp__sub_827F3A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F3A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f3c84
	if (ctx.cr6.eq) goto loc_827F3C84;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f3c84
	if (ctx.cr6.eq) goto loc_827F3C84;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13980(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13980);
	// bl 0x82786d30
	ctx.lr = 0x827F3A88;
	sub_82786D30(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,32(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r29,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f3ad8
	if (ctx.cr6.eq) goto loc_827F3AD8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,-3632
	ctx.r3.s64 = ctx.r11.s64 + -3632;
	// bl 0x82120268
	ctx.lr = 0x827F3AC0;
	sub_82120268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,64(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F3AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F3AD8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq cr6,0x827f3b10
	if (ctx.cr6.eq) goto loc_827F3B10;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,96(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x827f3b10
	if (!ctx.cr6.gt) goto loc_827F3B10;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
loc_827F3B10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x827f2e20
	ctx.lr = 0x827F3B24;
	sub_827F2E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82786400
	ctx.lr = 0x827F3B38;
	sub_82786400(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x827f2e20
	ctx.lr = 0x827F3B4C;
	sub_827F2E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827862f0
	ctx.lr = 0x827F3B60;
	sub_827862F0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827f3b78
	if (ctx.cr6.eq) goto loc_827F3B78;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
loc_827F3B78:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827f3b90
	if (ctx.cr6.eq) goto loc_827F3B90;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r11.u32);
loc_827F3B90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827f3ba8
	if (ctx.cr6.eq) goto loc_827F3BA8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r11.u32);
loc_827F3BA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827f3bc0
	if (ctx.cr6.eq) goto loc_827F3BC0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r11.u32);
loc_827F3BC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827f3bd8
	if (ctx.cr6.eq) goto loc_827F3BD8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, ctx.r11.u32);
loc_827F3BD8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827f3bf0
	if (ctx.cr6.eq) goto loc_827F3BF0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r11.u32);
loc_827F3BF0:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,20
	ctx.r30.s64 = 20;
loc_827F3BF8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827f3c40
	if (ctx.cr6.lt) goto loc_827F3C40;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x827f3c40
	if (!ctx.cr6.lt) goto loc_827F3C40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f3c40
	if (ctx.cr6.eq) goto loc_827F3C40;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x827f2e20
	ctx.lr = 0x827F3C28;
	sub_827F2E20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82786070
	ctx.lr = 0x827F3C40;
	sub_82786070(ctx, base);
loc_827F3C40:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r30,36
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 36, ctx.xer);
	// blt cr6,0x827f3bf8
	if (ctx.cr6.lt) goto loc_827F3BF8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f3c84
	if (ctx.cr6.eq) goto loc_827F3C84;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
loc_827F3C68:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827f3c68
	if (!ctx.cr0.eq) goto loc_827F3C68;
loc_827F3C84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F3C8C"))) PPC_WEAK_FUNC(sub_827F3C8C);
PPC_FUNC_IMPL(__imp__sub_827F3C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F3C90"))) PPC_WEAK_FUNC(sub_827F3C90);
PPC_FUNC_IMPL(__imp__sub_827F3C90) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x827f3d00
	if (!ctx.cr6.eq) goto loc_827F3D00;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13924);
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827f3d00
	if (ctx.cr6.eq) goto loc_827F3D00;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// lwz r8,132(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r7,128(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lwz r6,124(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// blt cr6,0x827f3cdc
	if (ctx.cr6.lt) goto loc_827F3CDC;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827f3ce0
	goto loc_827F3CE0;
loc_827F3CDC:
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
loc_827F3CE0:
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x827f3cf8
	if (ctx.cr6.lt) goto loc_827F3CF8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827f3cfc
	goto loc_827F3CFC;
loc_827F3CF8:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_827F3CFC:
	// bl 0x82bddf50
	ctx.lr = 0x827F3D00;
	sub_82BDDF50(ctx, base);
loc_827F3D00:
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

__attribute__((alias("__imp__sub_827F3D14"))) PPC_WEAK_FUNC(sub_827F3D14);
PPC_FUNC_IMPL(__imp__sub_827F3D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F3D18"))) PPC_WEAK_FUNC(sub_827F3D18);
PPC_FUNC_IMPL(__imp__sub_827F3D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F3D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f3d78
	if (!ctx.cr6.eq) goto loc_827F3D78;
loc_827F3D3C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x827f3d50
	if (ctx.cr6.lt) goto loc_827F3D50;
	// li r10,0
	ctx.r10.s64 = 0;
loc_827F3D50:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f3d64
	if (ctx.cr6.eq) goto loc_827F3D64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x827f3d6c
	goto loc_827F3D6C;
loc_827F3D64:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827F3D6C:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f3d3c
	if (ctx.cr6.eq) goto loc_827F3D3C;
loc_827F3D78:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827f3db4
	if (ctx.cr6.eq) goto loc_827F3DB4;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x827f3da0
	if (ctx.cr6.lt) goto loc_827F3DA0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827F3DA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f3db4
	if (!ctx.cr6.eq) goto loc_827F3DB4;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// b 0x827f3dc0
	goto loc_827F3DC0;
loc_827F3DB4:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_827F3DC0:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f3de0
	if (ctx.cr6.eq) goto loc_827F3DE0;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827f3de4
	if (ctx.cr6.eq) goto loc_827F3DE4;
loc_827F3DE0:
	// twi 31,r0,22
loc_827F3DE4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827f3e68
	if (ctx.cr6.eq) goto loc_827F3E68;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f3dfc
	if (!ctx.cr6.eq) goto loc_827F3DFC;
	// twi 31,r0,22
loc_827F3DFC:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827f3e0c
	if (!ctx.cr6.eq) goto loc_827F3E0C;
	// twi 31,r0,22
loc_827F3E0C:
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827f3e1c
	if (!ctx.cr6.eq) goto loc_827F3E1C;
	// twi 31,r0,22
loc_827F3E1C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827f3e34
	if (!ctx.cr6.eq) goto loc_827F3E34;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_827F3E34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f3e58
	if (ctx.cr6.eq) goto loc_827F3E58;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-11360
	ctx.r10.s64 = ctx.r11.s64 + -11360;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x827f3838
	ctx.lr = 0x827F3E50;
	sub_827F3838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x827F3E58;
	sub_82120A70(ctx, base);
loc_827F3E58:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212b0c8
	ctx.lr = 0x827F3E68;
	sub_8212B0C8(ctx, base);
loc_827F3E68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F3E70"))) PPC_WEAK_FUNC(sub_827F3E70);
PPC_FUNC_IMPL(__imp__sub_827F3E70) {
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
	// lwz r31,13396(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13396);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f3eac
	if (ctx.cr6.eq) goto loc_827F3EAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f3908
	ctx.lr = 0x827F3E9C;
	sub_827F3908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x827F3EA4;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13396, ctx.r11.u32);
loc_827F3EAC:
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

__attribute__((alias("__imp__sub_827F3EC4"))) PPC_WEAK_FUNC(sub_827F3EC4);
PPC_FUNC_IMPL(__imp__sub_827F3EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F3EC8"))) PPC_WEAK_FUNC(sub_827F3EC8);
PPC_FUNC_IMPL(__imp__sub_827F3EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F3ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_827F3F0C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f3f20
	if (ctx.cr6.eq) goto loc_827F3F20;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f3f24
	if (ctx.cr6.eq) goto loc_827F3F24;
loc_827F3F20:
	// twi 31,r0,22
loc_827F3F24:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827f3f98
	if (ctx.cr6.eq) goto loc_827F3F98;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f3f38
	if (!ctx.cr6.eq) goto loc_827F3F38;
	// twi 31,r0,22
loc_827F3F38:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827f3f48
	if (!ctx.cr6.eq) goto loc_827F3F48;
	// twi 31,r0,22
loc_827F3F48:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f3f84
	if (ctx.cr6.eq) goto loc_827F3F84;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x827f3f84
	if (!ctx.cr6.eq) goto loc_827F3F84;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827f3f70
	if (!ctx.cr6.eq) goto loc_827F3F70;
	// twi 31,r0,22
loc_827F3F70:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8212f980
	ctx.lr = 0x827F3F84;
	sub_8212F980(ctx, base);
loc_827F3F84:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8212f8d8
	ctx.lr = 0x827F3F8C;
	sub_8212F8D8(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x827f3f0c
	goto loc_827F3F0C;
loc_827F3F98:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827f3fac
	if (!ctx.cr6.gt) goto loc_827F3FAC;
	// twi 31,r0,22
loc_827F3FAC:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_827F3FB0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827f3fbc
	if (!ctx.cr6.gt) goto loc_827F3FBC;
	// twi 31,r0,22
loc_827F3FBC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f3ff4
	if (ctx.cr6.eq) goto loc_827F3FF4;
	// blt cr6,0x827f3fcc
	if (ctx.cr6.lt) goto loc_827F3FCC;
	// twi 31,r0,22
loc_827F3FCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x827f3d18
	ctx.lr = 0x827F3FD8;
	sub_827F3D18(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827f3fe8
	if (ctx.cr6.lt) goto loc_827F3FE8;
	// twi 31,r0,22
loc_827F3FE8:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x827f3fb0
	goto loc_827F3FB0;
loc_827F3FF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x827f29d8
	ctx.lr = 0x827F4000;
	sub_827F29D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f4024
	if (ctx.cr6.eq) goto loc_827F4024;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x827f4024
	if (!ctx.cr6.eq) goto loc_827F4024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x827f3d18
	ctx.lr = 0x827F4024;
	sub_827F3D18(ctx, base);
loc_827F4024:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f408c
	if (ctx.cr6.eq) goto loc_827F408C;
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
	ctx.lr = 0x827F404C;
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
	ctx.lr = 0x827F407C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f408c
	if (ctx.cr6.eq) goto loc_827F408C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fd9e0
	ctx.lr = 0x827F408C;
	sub_821FD9E0(ctx, base);
loc_827F408C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F4094"))) PPC_WEAK_FUNC(sub_827F4094);
PPC_FUNC_IMPL(__imp__sub_827F4094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4098"))) PPC_WEAK_FUNC(sub_827F4098);
PPC_FUNC_IMPL(__imp__sub_827F4098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F40A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827F40C0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f40d4
	if (ctx.cr6.eq) goto loc_827F40D4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f40d8
	if (ctx.cr6.eq) goto loc_827F40D8;
loc_827F40D4:
	// twi 31,r0,22
loc_827F40D8:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827f4120
	if (ctx.cr6.eq) goto loc_827F4120;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f40ec
	if (!ctx.cr6.eq) goto loc_827F40EC;
	// twi 31,r0,22
loc_827F40EC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f40fc
	if (!ctx.cr6.eq) goto loc_827F40FC;
	// twi 31,r0,22
loc_827F40FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8212f8d8
	ctx.lr = 0x827F4108;
	sub_8212F8D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f3d18
	ctx.lr = 0x827F4114;
	sub_827F3D18(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x827f40c0
	goto loc_827F40C0;
loc_827F4120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F4128"))) PPC_WEAK_FUNC(sub_827F4128);
PPC_FUNC_IMPL(__imp__sub_827F4128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F4130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f426c
	if (ctx.cr6.eq) goto loc_827F426C;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827f4198
	if (ctx.cr6.eq) goto loc_827F4198;
	// bl 0x827f29d8
	ctx.lr = 0x827F4158;
	sub_827F29D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F416C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827f4198
	if (ctx.cr6.eq) goto loc_827F4198;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f4198
	if (ctx.cr6.eq) goto loc_827F4198;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,13396(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// bl 0x827f3d18
	ctx.lr = 0x827F4194;
	sub_827F3D18(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_827F4198:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f28f0
	ctx.lr = 0x827F41A0;
	sub_827F28F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x827f41c4
	if (ctx.cr6.eq) goto loc_827F41C4;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x827f41c4
	if (ctx.cr6.eq) goto loc_827F41C4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f4218
	if (ctx.cr6.eq) goto loc_827F4218;
	// b 0x827f41fc
	goto loc_827F41FC;
loc_827F41C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f4218
	if (ctx.cr6.eq) goto loc_827F4218;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x827f41e4
	if (ctx.cr6.eq) goto loc_827F41E4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x827f4218
	if (!ctx.cr6.eq) goto loc_827F4218;
loc_827F41E4:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13316);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827f4218
	if (ctx.cr6.eq) goto loc_827F4218;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_827F41FC:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827f4218
	if (ctx.cr6.eq) goto loc_827F4218;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f29d8
	ctx.lr = 0x827F420C;
	sub_827F29D8(ctx, base);
	// bl 0x827f3838
	ctx.lr = 0x827F4210;
	sub_827F3838(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_827F4218:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827f426c
	if (!ctx.cr6.eq) goto loc_827F426C;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x827f426c
	if (ctx.cr6.eq) goto loc_827F426C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r11,1256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f4258
	if (ctx.cr6.eq) goto loc_827F4258;
loc_827F4240:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1023
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1023, ctx.xer);
	// beq cr6,0x827f426c
	if (ctx.cr6.eq) goto loc_827F426C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f4240
	if (!ctx.cr6.eq) goto loc_827F4240;
loc_827F4258:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f29d8
	ctx.lr = 0x827F4264;
	sub_827F29D8(ctx, base);
	// bl 0x827f3a50
	ctx.lr = 0x827F4268;
	sub_827F3A50(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_827F426C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F4274"))) PPC_WEAK_FUNC(sub_827F4274);
PPC_FUNC_IMPL(__imp__sub_827F4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4278"))) PPC_WEAK_FUNC(sub_827F4278);
PPC_FUNC_IMPL(__imp__sub_827F4278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F4280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x827f42a4
	if (ctx.cr6.eq) goto loc_827F42A4;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x827f42a4
	if (ctx.cr6.eq) goto loc_827F42A4;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// bne cr6,0x827f42b8
	if (!ctx.cr6.eq) goto loc_827F42B8;
loc_827F42A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f2b38
	ctx.lr = 0x827F42B0;
	sub_827F2B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827f43f0
	if (!ctx.cr6.eq) goto loc_827F43F0;
loc_827F42B8:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x827f4388
	if (!ctx.cr6.eq) goto loc_827F4388;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F42CC;
	sub_827F3EC8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F42D8;
	sub_827F3EC8(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F42E4;
	sub_827F3EC8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F42F0;
	sub_827F3EC8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F42FC;
	sub_827F3EC8(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
loc_827F4300:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F4308;
	sub_827F3EC8(ctx, base);
loc_827F4308:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 21, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bgt cr6,0x827f48b0
	if (ctx.cr6.gt) goto loc_827F48B0;
	// lis r12,-32129
	ctx.r12.s64 = -2105606144;
	// addi r12,r12,17200
	ctx.r12.s64 = ctx.r12.s64 + 17200;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_827F43FC;
	case 1:
		goto loc_827F442C;
	case 2:
		goto loc_827F448C;
	case 3:
		goto loc_827F44BC;
	case 4:
		goto loc_827F44EC;
	case 5:
		goto loc_827F454C;
	case 6:
		goto loc_827F451C;
	case 7:
		goto loc_827F457C;
	case 8:
		goto loc_827F45AC;
	case 9:
		goto loc_827F4644;
	case 10:
		goto loc_827F4690;
	case 11:
		goto loc_827F46DC;
	case 12:
		goto loc_827F470C;
	case 13:
		goto loc_827F445C;
	case 14:
		goto loc_827F473C;
	case 15:
		goto loc_827F476C;
	case 16:
		goto loc_827F479C;
	case 17:
		goto loc_827F45F8;
	case 18:
		goto loc_827F47CC;
	case 19:
		goto loc_827F47FC;
	case 20:
		goto loc_827F482C;
	case 21:
		goto loc_827F485C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,17404(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17404);
	// lwz r19,17452(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17452);
	// lwz r19,17548(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17548);
	// lwz r19,17596(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17596);
	// lwz r19,17644(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17644);
	// lwz r19,17740(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17740);
	// lwz r19,17692(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17692);
	// lwz r19,17788(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17788);
	// lwz r19,17836(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17836);
	// lwz r19,17988(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17988);
	// lwz r19,18064(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18064);
	// lwz r19,18140(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18140);
	// lwz r19,18188(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18188);
	// lwz r19,17500(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17500);
	// lwz r19,18236(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18236);
	// lwz r19,18284(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18284);
	// lwz r19,18332(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18332);
	// lwz r19,17912(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17912);
	// lwz r19,18380(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18380);
	// lwz r19,18428(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18428);
	// lwz r19,18476(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18476);
	// lwz r19,18524(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18524);
loc_827F4388:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x827f43dc
	if (ctx.cr6.eq) goto loc_827F43DC;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x827f43dc
	if (ctx.cr6.eq) goto loc_827F43DC;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x827f43a8
	if (!ctx.cr6.eq) goto loc_827F43A8;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x827f4300
	goto loc_827F4300;
loc_827F43A8:
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// bne cr6,0x827f4308
	if (!ctx.cr6.eq) goto loc_827F4308;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F43BC;
	sub_827F3EC8(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F43C8;
	sub_827F3EC8(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F43D4;
	sub_827F3EC8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x827f4300
	goto loc_827F4300;
loc_827F43DC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f2b38
	ctx.lr = 0x827F43E8;
	sub_827F2B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f4308
	if (ctx.cr6.eq) goto loc_827F4308;
loc_827F43F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F43FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4408;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11400
	ctx.r8.s64 = ctx.r9.s64 + -11400;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F442C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4438;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11392
	ctx.r8.s64 = ctx.r9.s64 + -11392;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,80
	ctx.r7.s64 = ctx.r10.s64 + 80;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F445C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4468;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11384
	ctx.r8.s64 = ctx.r9.s64 + -11384;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,800
	ctx.r7.s64 = ctx.r10.s64 + 800;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F448C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4498;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11360
	ctx.r8.s64 = ctx.r9.s64 + -11360;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,140
	ctx.r7.s64 = ctx.r10.s64 + 140;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F44BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F44C8;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11376
	ctx.r8.s64 = ctx.r9.s64 + -11376;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,200
	ctx.r7.s64 = ctx.r10.s64 + 200;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F44EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F44F8;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11368
	ctx.r8.s64 = ctx.r9.s64 + -11368;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,260
	ctx.r7.s64 = ctx.r10.s64 + 260;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F451C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4528;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11360
	ctx.r8.s64 = ctx.r9.s64 + -11360;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,380
	ctx.r7.s64 = ctx.r10.s64 + 380;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F454C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4558;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11352
	ctx.r8.s64 = ctx.r9.s64 + -11352;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,320
	ctx.r7.s64 = ctx.r10.s64 + 320;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F457C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4588;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11344
	ctx.r8.s64 = ctx.r9.s64 + -11344;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,440
	ctx.r7.s64 = ctx.r10.s64 + 440;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F45AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F45B8;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r31.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r31.u32);
	// addi r9,r10,-11336
	ctx.r9.s64 = ctx.r10.s64 + -11336;
	// lwz r11,13396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// addi r8,r11,500
	ctx.r8.s64 = ctx.r11.s64 + 500;
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r31,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// b 0x827f48b0
	goto loc_827F48B0;
loc_827F45F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4604;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r31.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r31.u32);
	// addi r9,r10,-11360
	ctx.r9.s64 = ctx.r10.s64 + -11360;
	// lwz r11,13396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// addi r8,r11,1040
	ctx.r8.s64 = ctx.r11.s64 + 1040;
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r31,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// b 0x827f48b0
	goto loc_827F48B0;
loc_827F4644:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4650;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r31.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r31.u32);
	// addi r9,r10,-11360
	ctx.r9.s64 = ctx.r10.s64 + -11360;
	// lwz r11,13396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// addi r8,r11,560
	ctx.r8.s64 = ctx.r11.s64 + 560;
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r31,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// b 0x827f48b0
	goto loc_827F48B0;
loc_827F4690:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F469C;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r31,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r31.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r31.u32);
	// addi r9,r10,-11360
	ctx.r9.s64 = ctx.r10.s64 + -11360;
	// lwz r11,13396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// addi r8,r11,620
	ctx.r8.s64 = ctx.r11.s64 + 620;
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r31,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// b 0x827f48b0
	goto loc_827F48B0;
loc_827F46DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F46E8;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11328
	ctx.r8.s64 = ctx.r9.s64 + -11328;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,680
	ctx.r7.s64 = ctx.r10.s64 + 680;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F470C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4718;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11320
	ctx.r8.s64 = ctx.r9.s64 + -11320;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,740
	ctx.r7.s64 = ctx.r10.s64 + 740;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F473C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4748;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11360
	ctx.r8.s64 = ctx.r9.s64 + -11360;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,860
	ctx.r7.s64 = ctx.r10.s64 + 860;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F476C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4778;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11360
	ctx.r8.s64 = ctx.r9.s64 + -11360;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,920
	ctx.r7.s64 = ctx.r10.s64 + 920;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F479C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F47A8;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11360
	ctx.r8.s64 = ctx.r9.s64 + -11360;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,980
	ctx.r7.s64 = ctx.r10.s64 + 980;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F47CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F47D8;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11312
	ctx.r8.s64 = ctx.r9.s64 + -11312;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,1100
	ctx.r7.s64 = ctx.r10.s64 + 1100;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F47FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4808;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11304
	ctx.r8.s64 = ctx.r9.s64 + -11304;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,1160
	ctx.r7.s64 = ctx.r10.s64 + 1160;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F482C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4838;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11296
	ctx.r8.s64 = ctx.r9.s64 + -11296;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,1220
	ctx.r7.s64 = ctx.r10.s64 + 1220;
	// b 0x827f4888
	goto loc_827F4888;
loc_827F485C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82120040
	ctx.lr = 0x827F4868;
	sub_82120040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48ac
	if (ctx.cr6.eq) goto loc_827F48AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-11360
	ctx.r8.s64 = ctx.r9.s64 + -11360;
	// lwz r10,13396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13396);
	// addi r7,r10,1280
	ctx.r7.s64 = ctx.r10.s64 + 1280;
loc_827F4888:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// stw r31,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r31.u32);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r31.u32);
	// stw r31,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r31.u32);
	// b 0x827f48b0
	goto loc_827F48B0;
loc_827F48AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827F48B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f48c4
	if (ctx.cr6.eq) goto loc_827F48C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827f2e98
	ctx.lr = 0x827F48C4;
	sub_827F2E98(ctx, base);
loc_827F48C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F48CC"))) PPC_WEAK_FUNC(sub_827F48CC);
PPC_FUNC_IMPL(__imp__sub_827F48CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F48D0"))) PPC_WEAK_FUNC(sub_827F48D0);
PPC_FUNC_IMPL(__imp__sub_827F48D0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,14072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14072, ctx.r11.u32);
	// lwz r3,13396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13396);
	// bl 0x827f3ec8
	ctx.lr = 0x827F4904;
	sub_827F3EC8(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,13396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13396);
	// bl 0x827f3ec8
	ctx.lr = 0x827F4910;
	sub_827F3EC8(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r3,13312(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13312);
	// lwz r8,468(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827f4940
	if (ctx.cr6.eq) goto loc_827F4940;
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827f4938
	if (ctx.cr6.eq) goto loc_827F4938;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827fa0e0
	ctx.lr = 0x827F4938;
	sub_827FA0E0(ctx, base);
loc_827F4938:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827f495c
	goto loc_827F495C;
loc_827F4940:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x827f4960
	if (!ctx.cr6.eq) goto loc_827F4960;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r11.u32);
loc_827F495C:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_827F4960:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f27d0
	ctx.lr = 0x827F4968;
	sub_827F27D0(ctx, base);
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

__attribute__((alias("__imp__sub_827F4980"))) PPC_WEAK_FUNC(sub_827F4980);
PPC_FUNC_IMPL(__imp__sub_827F4980) {
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
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827f2b38
	ctx.lr = 0x827F49A0;
	sub_827F2B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827f49d8
	if (!ctx.cr6.eq) goto loc_827F49D8;
	// lwz r11,1352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f49c4
	if (ctx.cr6.eq) goto loc_827F49C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,1352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1352, ctx.r11.u32);
	// b 0x827f4a44
	goto loc_827F4A44;
loc_827F49C4:
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f4278
	ctx.lr = 0x827F49D0;
	sub_827F4278(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1352, ctx.r11.u32);
loc_827F49D8:
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f2c50
	ctx.lr = 0x827F49E4;
	sub_827F2C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f4a40
	if (ctx.cr6.eq) goto loc_827F4A40;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f4a40
	if (ctx.cr6.eq) goto loc_827F4A40;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f4a18
	if (ctx.cr6.eq) goto loc_827F4A18;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f4a18
	if (ctx.cr6.eq) goto loc_827F4A18;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827F4A18:
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F4A24;
	sub_827F3EC8(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,1352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1352, ctx.r10.u32);
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x827f4a44
	goto loc_827F4A44;
loc_827F4A40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F4A44:
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

__attribute__((alias("__imp__sub_827F4A5C"))) PPC_WEAK_FUNC(sub_827F4A5C);
PPC_FUNC_IMPL(__imp__sub_827F4A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4A60"))) PPC_WEAK_FUNC(sub_827F4A60);
PPC_FUNC_IMPL(__imp__sub_827F4A60) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827f2b38
	ctx.lr = 0x827F4A80;
	sub_827F2B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827f4ab8
	if (!ctx.cr6.eq) goto loc_827F4AB8;
	// lwz r11,1348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f4aa4
	if (ctx.cr6.eq) goto loc_827F4AA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,1348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1348, ctx.r11.u32);
	// b 0x827f4b24
	goto loc_827F4B24;
loc_827F4AA4:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f4278
	ctx.lr = 0x827F4AB0;
	sub_827F4278(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1348, ctx.r11.u32);
loc_827F4AB8:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f2c50
	ctx.lr = 0x827F4AC4;
	sub_827F2C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f4b20
	if (ctx.cr6.eq) goto loc_827F4B20;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f4b20
	if (ctx.cr6.eq) goto loc_827F4B20;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f4af8
	if (ctx.cr6.eq) goto loc_827F4AF8;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f4af8
	if (ctx.cr6.eq) goto loc_827F4AF8;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827F4AF8:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F4B04;
	sub_827F3EC8(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,1348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1348, ctx.r10.u32);
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x827f4b24
	goto loc_827F4B24;
loc_827F4B20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F4B24:
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

__attribute__((alias("__imp__sub_827F4B3C"))) PPC_WEAK_FUNC(sub_827F4B3C);
PPC_FUNC_IMPL(__imp__sub_827F4B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4B40"))) PPC_WEAK_FUNC(sub_827F4B40);
PPC_FUNC_IMPL(__imp__sub_827F4B40) {
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
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827f2b38
	ctx.lr = 0x827F4B60;
	sub_827F2B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827f4b98
	if (!ctx.cr6.eq) goto loc_827F4B98;
	// lwz r11,1344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f4b84
	if (ctx.cr6.eq) goto loc_827F4B84;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,1344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1344, ctx.r11.u32);
	// b 0x827f4c04
	goto loc_827F4C04;
loc_827F4B84:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f4278
	ctx.lr = 0x827F4B90;
	sub_827F4278(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1344, ctx.r11.u32);
loc_827F4B98:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f2c50
	ctx.lr = 0x827F4BA4;
	sub_827F2C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f4c00
	if (ctx.cr6.eq) goto loc_827F4C00;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f4c00
	if (ctx.cr6.eq) goto loc_827F4C00;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f4bd8
	if (ctx.cr6.eq) goto loc_827F4BD8;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f4bd8
	if (ctx.cr6.eq) goto loc_827F4BD8;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827F4BD8:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F4BE4;
	sub_827F3EC8(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,1344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1344, ctx.r10.u32);
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x827f4c04
	goto loc_827F4C04;
loc_827F4C00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827F4C04:
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

__attribute__((alias("__imp__sub_827F4C1C"))) PPC_WEAK_FUNC(sub_827F4C1C);
PPC_FUNC_IMPL(__imp__sub_827F4C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4C20"))) PPC_WEAK_FUNC(sub_827F4C20);
PPC_FUNC_IMPL(__imp__sub_827F4C20) {
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
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827f2b38
	ctx.lr = 0x827F4C3C;
	sub_827F2B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827f4cb0
	if (!ctx.cr6.eq) goto loc_827F4CB0;
	// lwz r11,1340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f4c70
	if (ctx.cr6.eq) goto loc_827F4C70;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r11.u32);
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
loc_827F4C70:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13312);
	// bl 0x827f95a8
	ctx.lr = 0x827F4C7C;
	sub_827F95A8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x827f4c9c
	if (!ctx.cr6.eq) goto loc_827F4C9C;
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
loc_827F4C9C:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f4278
	ctx.lr = 0x827F4CA8;
	sub_827F4278(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r11.u32);
loc_827F4CB0:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f2c50
	ctx.lr = 0x827F4CBC;
	sub_827F2C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f4cfc
	if (ctx.cr6.eq) goto loc_827F4CFC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f4cfc
	if (ctx.cr6.eq) goto loc_827F4CFC;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f3ec8
	ctx.lr = 0x827F4CDC;
	sub_827F3EC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r11.u32);
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
loc_827F4CFC:
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
}

__attribute__((alias("__imp__sub_827F4D14"))) PPC_WEAK_FUNC(sub_827F4D14);
PPC_FUNC_IMPL(__imp__sub_827F4D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4D18"))) PPC_WEAK_FUNC(sub_827F4D18);
PPC_FUNC_IMPL(__imp__sub_827F4D18) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x827f4d5c
	if (!ctx.cr6.eq) goto loc_827F4D5C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13924);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x827f4d4c
	if (ctx.cr6.lt) goto loc_827F4D4C;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827f4d50
	goto loc_827F4D50;
loc_827F4D4C:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_827F4D50:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13420);
	// bl 0x827ee7f8
	ctx.lr = 0x827F4D5C;
	sub_827EE7F8(ctx, base);
loc_827F4D5C:
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

__attribute__((alias("__imp__sub_827F4D70"))) PPC_WEAK_FUNC(sub_827F4D70);
PPC_FUNC_IMPL(__imp__sub_827F4D70) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x827f4ea0
	if (!ctx.cr6.eq) goto loc_827F4EA0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f4dcc
	if (ctx.cr6.eq) goto loc_827F4DCC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,-3648
	ctx.r3.s64 = ctx.r11.s64 + -3648;
	// bl 0x82120268
	ctx.lr = 0x827F4DB4;
	sub_82120268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827F4DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827F4DCC:
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r11,13924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13924);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x827f4e50
	if (!ctx.cr6.eq) goto loc_827F4E50;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// lwz r3,13928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13928);
	// bl 0x82791848
	ctx.lr = 0x827F4DFC;
	sub_82791848(ctx, base);
	// lwz r11,13924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13924);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x827f4e30
	if (ctx.cr6.lt) goto loc_827F4E30;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,13420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13420);
	// bl 0x827ee7f8
	ctx.lr = 0x827F4E1C;
	sub_827EE7F8(ctx, base);
	// lwz r11,13420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13420);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x827f4ea4
	goto loc_827F4EA4;
loc_827F4E30:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r3,13420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13420);
	// bl 0x827ee7f8
	ctx.lr = 0x827F4E3C;
	sub_827EE7F8(ctx, base);
	// lwz r11,13420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13420);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x827f4ea4
	goto loc_827F4EA4;
loc_827F4E50:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827f4e74
	if (!ctx.cr6.eq) goto loc_827F4E74;
	// lwz r3,13420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13420);
	// bl 0x827ee3f0
	ctx.lr = 0x827F4E60;
	sub_827EE3F0(ctx, base);
	// lwz r11,13420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13420);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x827f4ea4
	goto loc_827F4EA4;
loc_827F4E74:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// lwz r3,13928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13928);
	// bl 0x82791848
	ctx.lr = 0x827F4E8C;
	sub_82791848(ctx, base);
	// lwz r11,13420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13420);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x827f4ea4
	goto loc_827F4EA4;
loc_827F4EA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827F4EA4:
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

__attribute__((alias("__imp__sub_827F4EBC"))) PPC_WEAK_FUNC(sub_827F4EBC);
PPC_FUNC_IMPL(__imp__sub_827F4EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4EC0"))) PPC_WEAK_FUNC(sub_827F4EC0);
PPC_FUNC_IMPL(__imp__sub_827F4EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r10,13384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13384);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,13388(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 13388, temp.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,13384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13384, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F4EEC"))) PPC_WEAK_FUNC(sub_827F4EEC);
PPC_FUNC_IMPL(__imp__sub_827F4EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4EF0"))) PPC_WEAK_FUNC(sub_827F4EF0);
PPC_FUNC_IMPL(__imp__sub_827F4EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13384);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F4F08"))) PPC_WEAK_FUNC(sub_827F4F08);
PPC_FUNC_IMPL(__imp__sub_827F4F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// stw r3,13380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13380, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F4F14"))) PPC_WEAK_FUNC(sub_827F4F14);
PPC_FUNC_IMPL(__imp__sub_827F4F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F4F18"))) PPC_WEAK_FUNC(sub_827F4F18);
PPC_FUNC_IMPL(__imp__sub_827F4F18) {
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
	// lwz r11,13380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f4f7c
	if (!ctx.cr6.eq) goto loc_827F4F7C;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f4f6c
	if (ctx.cr6.eq) goto loc_827F4F6C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r4,13376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13376);
	// lwz r3,13372(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13372);
	// bl 0x82c0a19c
	ctx.lr = 0x827F4F5C;
	__imp__XamLoaderSetLaunchData(ctx, base);
	// lwz r11,13368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13368);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x821ef5b0
	ctx.lr = 0x827F4F6C;
	sub_821EF5B0(ctx, base);
loc_827F4F6C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,13434
	ctx.r3.s64 = ctx.r11.s64 + 13434;
	// bl 0x821ef5b0
	ctx.lr = 0x827F4F7C;
	sub_821EF5B0(ctx, base);
loc_827F4F7C:
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

__attribute__((alias("__imp__sub_827F4F90"))) PPC_WEAK_FUNC(sub_827F4F90);
PPC_FUNC_IMPL(__imp__sub_827F4F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f13,13392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13392);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827f4fe8
	if (!ctx.cr6.eq) goto loc_827F4FE8;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13316);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_827F4FE8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,13388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13388);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,13388(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 13388, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// b 0x827f4f18
	sub_827F4F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5010"))) PPC_WEAK_FUNC(sub_827F5010);
PPC_FUNC_IMPL(__imp__sub_827F5010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5014"))) PPC_WEAK_FUNC(sub_827F5014);
PPC_FUNC_IMPL(__imp__sub_827F5014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5018"))) PPC_WEAK_FUNC(sub_827F5018);
PPC_FUNC_IMPL(__imp__sub_827F5018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F5020;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r30,r11,13376
	ctx.r30.s64 = ctx.r11.s64 + 13376;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c09b2c
	ctx.lr = 0x827F5034;
	__imp__XamLoaderGetLaunchDataSize(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f504c
	if (ctx.cr6.eq) goto loc_827F504C;
loc_827F503C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F504C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,268
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 268, ctx.xer);
	// blt cr6,0x827f503c
	if (ctx.cr6.lt) goto loc_827F503C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120040
	ctx.lr = 0x827F5060;
	sub_82120040(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,13372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13372, ctx.r29.u32);
	// bl 0x82218a80
	ctx.lr = 0x827F5078;
	sub_82218A80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c09b3c
	ctx.lr = 0x827F5084;
	__imp__XamLoaderGetLaunchData(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f50ac
	if (ctx.cr6.eq) goto loc_827F50AC;
	// lwz r3,13372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13372);
	// bl 0x82120a70
	ctx.lr = 0x827F5094;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,13372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13372, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F50AC:
	// lwz r11,13372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13372);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r7,17220
	ctx.r7.s64 = 1128529920;
	// ori r6,r7,22577
	ctx.r6.u64 = ctx.r7.u64 | 22577;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// stw r11,13368(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13368, ctx.r11.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,13384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13384, ctx.r10.u32);
	// bne cr6,0x827f5110
	if (!ctx.cr6.eq) goto loc_827F5110;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-30252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30252);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,13392(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 13392, temp.u32);
loc_827F5110:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5118"))) PPC_WEAK_FUNC(sub_827F5118);
PPC_FUNC_IMPL(__imp__sub_827F5118) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f5124
	if (!ctx.cr6.eq) goto loc_827F5124;
	// blr 
	return;
loc_827F5124:
	// b 0x8221cef8
	sub_8221CEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5128"))) PPC_WEAK_FUNC(sub_827F5128);
PPC_FUNC_IMPL(__imp__sub_827F5128) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f5134
	if (!ctx.cr6.eq) goto loc_827F5134;
	// blr 
	return;
loc_827F5134:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_827F5138:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f5138
	if (!ctx.cr6.eq) goto loc_827F5138;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5158"))) PPC_WEAK_FUNC(sub_827F5158);
PPC_FUNC_IMPL(__imp__sub_827F5158) {
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
	// bne cr6,0x827f518c
	if (!ctx.cr6.eq) goto loc_827F518C;
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
loc_827F518C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x827f51ac
	if (ctx.cr6.eq) goto loc_827F51AC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x827f51fc
	if (!ctx.cr6.eq) goto loc_827F51FC;
loc_827F51AC:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f51fc
	if (ctx.cr6.eq) goto loc_827F51FC;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f51d4
	if (ctx.cr6.eq) goto loc_827F51D4;
	// bl 0x8221cef8
	ctx.lr = 0x827F51C8;
	sub_8221CEF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r3,19,0,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 19) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// b 0x827f51f8
	goto loc_827F51F8;
loc_827F51D4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_827F51D8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827f51d8
	if (!ctx.cr6.eq) goto loc_827F51D8;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwimi r11,r9,19,0,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
loc_827F51F8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827F51FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r3,r11,13,19,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
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

__attribute__((alias("__imp__sub_827F5218"))) PPC_WEAK_FUNC(sub_827F5218);
PPC_FUNC_IMPL(__imp__sub_827F5218) {
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
	// bl 0x827f5158
	ctx.lr = 0x827F5238;
	sub_827F5158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f52a0
	if (ctx.cr6.eq) goto loc_827F52A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f526c
	if (!ctx.cr6.eq) goto loc_827F526C;
	// rlwinm r11,r30,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f52a0
	if (!ctx.cr6.eq) goto loc_827F52A0;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f52c0
	ctx.lr = 0x827F5268;
	sub_827F52C0(ctx, base);
	// b 0x827f52a4
	goto loc_827F52A4;
loc_827F526C:
	// rlwinm r10,r11,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f52a0
	if (ctx.cr6.eq) goto loc_827F52A0;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
loc_827F5284:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x827f52a4
	if (ctx.cr6.eq) goto loc_827F52A4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827f5284
	if (ctx.cr6.lt) goto loc_827F5284;
loc_827F52A0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827F52A4:
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

__attribute__((alias("__imp__sub_827F52BC"))) PPC_WEAK_FUNC(sub_827F52BC);
PPC_FUNC_IMPL(__imp__sub_827F52BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F52C0"))) PPC_WEAK_FUNC(sub_827F52C0);
PPC_FUNC_IMPL(__imp__sub_827F52C0) {
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
	// bl 0x827f5158
	ctx.lr = 0x827F52E0;
	sub_827F5158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f5340
	if (ctx.cr6.eq) goto loc_827F5340;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f530c
	if (ctx.cr6.eq) goto loc_827F530C;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x827f5218
	ctx.lr = 0x827F5308;
	sub_827F5218(ctx, base);
	// b 0x827f5344
	goto loc_827F5344;
loc_827F530C:
	// rlwinm r11,r11,13,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f5340
	if (ctx.cr6.eq) goto loc_827F5340;
	// extsb r9,r30
	ctx.r9.s64 = ctx.r30.s8;
loc_827F5324:
	// lbzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x827f5344
	if (ctx.cr6.eq) goto loc_827F5344;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827f5324
	if (ctx.cr6.lt) goto loc_827F5324;
loc_827F5340:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827F5344:
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

__attribute__((alias("__imp__sub_827F535C"))) PPC_WEAK_FUNC(sub_827F535C);
PPC_FUNC_IMPL(__imp__sub_827F535C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5360"))) PPC_WEAK_FUNC(sub_827F5360);
PPC_FUNC_IMPL(__imp__sub_827F5360) {
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
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f53c8
	if (ctx.cr6.eq) goto loc_827F53C8;
	// bl 0x827f5158
	ctx.lr = 0x827F5388;
	sub_827F5158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f53c8
	if (ctx.cr6.eq) goto loc_827F53C8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,13,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f53c8
	if (ctx.cr6.eq) goto loc_827F53C8;
loc_827F53A8:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x827f53e0
	if (!ctx.cr6.eq) goto loc_827F53E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827f53a8
	if (ctx.cr6.lt) goto loc_827F53A8;
loc_827F53C8:
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
loc_827F53E0:
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

__attribute__((alias("__imp__sub_827F53F8"))) PPC_WEAK_FUNC(sub_827F53F8);
PPC_FUNC_IMPL(__imp__sub_827F53F8) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827f55e4
	if (ctx.cr6.eq) goto loc_827F55E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x827f5430
	if (!ctx.cr6.eq) goto loc_827F5430;
loc_827F5428:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827f55e8
	goto loc_827F55E8;
loc_827F5430:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f5158
	ctx.lr = 0x827F5438;
	sub_827F5158(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827F543C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f543c
	if (!ctx.cr6.eq) goto loc_827F543C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827f5428
	if (!ctx.cr6.eq) goto loc_827F5428;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f5428
	if (ctx.cr6.eq) goto loc_827F5428;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f5538
	if (ctx.cr6.eq) goto loc_827F5538;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f54fc
	if (!ctx.cr6.eq) goto loc_827F54FC;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f55e4
	if (ctx.cr6.eq) goto loc_827F55E4;
loc_827F5494:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x827f54b0
	if (ctx.cr6.lt) goto loc_827F54B0;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x827f54b0
	if (ctx.cr6.gt) goto loc_827F54B0;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_827F54B0:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x827f54d4
	if (ctx.cr6.lt) goto loc_827F54D4;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x827f54d4
	if (ctx.cr6.gt) goto loc_827F54D4;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_827F54D4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827f5428
	if (!ctx.cr6.eq) goto loc_827F5428;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x827f5494
	if (ctx.cr6.lt) goto loc_827F5494;
	// b 0x827f55e4
	goto loc_827F55E4;
loc_827F54FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f55e4
	if (ctx.cr6.eq) goto loc_827F55E4;
loc_827F5508:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x827f5428
	if (!ctx.cr6.eq) goto loc_827F5428;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x827f5508
	if (ctx.cr6.lt) goto loc_827F5508;
	// b 0x827f55e4
	goto loc_827F55E4;
loc_827F5538:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f55b4
	if (!ctx.cr6.eq) goto loc_827F55B4;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f55e4
	if (ctx.cr6.eq) goto loc_827F55E4;
	// subf r7,r31,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_827F5554:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x827f5570
	if (ctx.cr6.lt) goto loc_827F5570;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x827f5570
	if (ctx.cr6.gt) goto loc_827F5570;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_827F5570:
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x827f5590
	if (ctx.cr6.lt) goto loc_827F5590;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// bgt cr6,0x827f5590
	if (ctx.cr6.gt) goto loc_827F5590;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_827F5590:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x827f5428
	if (!ctx.cr6.eq) goto loc_827F5428;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x827f5554
	if (ctx.cr6.lt) goto loc_827F5554;
	// b 0x827f55e4
	goto loc_827F55E4;
loc_827F55B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f55e4
	if (ctx.cr6.eq) goto loc_827F55E4;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_827F55C4:
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x827f5428
	if (!ctx.cr6.eq) goto loc_827F5428;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x827f55c4
	if (ctx.cr6.lt) goto loc_827F55C4;
loc_827F55E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827F55E8:
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

__attribute__((alias("__imp__sub_827F5600"))) PPC_WEAK_FUNC(sub_827F5600);
PPC_FUNC_IMPL(__imp__sub_827F5600) {
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
	// bl 0x827f5158
	ctx.lr = 0x827F5618;
	sub_827F5158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f562c
	if (ctx.cr6.eq) goto loc_827F562C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827F562C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827f564c
	if (ctx.cr6.eq) goto loc_827F564C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827f5658
	if (!ctx.cr6.eq) goto loc_827F5658;
loc_827F564C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x827f567c
	goto loc_827F567C;
loc_827F5658:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f5670
	if (ctx.cr6.eq) goto loc_827F5670;
	// bl 0x82120a70
	ctx.lr = 0x827F5668;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827F5670:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,24,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF800FF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827F567C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_827F56A0"))) PPC_WEAK_FUNC(sub_827F56A0);
PPC_FUNC_IMPL(__imp__sub_827F56A0) {
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
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x827f5708
	if (ctx.cr6.eq) goto loc_827F5708;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x827f56f0
	if (!ctx.cr6.eq) goto loc_827F56F0;
	// ori r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 192;
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
loc_827F56F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5600
	ctx.lr = 0x827F56FC;
	sub_827F5600(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,192
	ctx.r10.u64 = ctx.r11.u64 | 192;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827F5708:
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

__attribute__((alias("__imp__sub_827F571C"))) PPC_WEAK_FUNC(sub_827F571C);
PPC_FUNC_IMPL(__imp__sub_827F571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5720"))) PPC_WEAK_FUNC(sub_827F5720);
PPC_FUNC_IMPL(__imp__sub_827F5720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F5728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r10,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 30;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827f5760
	if (ctx.cr6.eq) goto loc_827F5760;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827f5760
	if (ctx.cr6.eq) goto loc_827F5760;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827f576c
	if (!ctx.cr6.eq) goto loc_827F576C;
	// bl 0x827f5600
	ctx.lr = 0x827F5760;
	sub_827F5600(ctx, base);
loc_827F5760:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F576C:
	// rlwinm r11,r10,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f5784
	if (ctx.cr6.eq) goto loc_827F5784;
	// addi r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 3;
	// rlwinm r30,r9,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x827f578c
	goto loc_827F578C;
loc_827F5784:
	// addi r9,r4,15
	ctx.r9.s64 = ctx.r4.s64 + 15;
	// rlwinm r30,r9,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
loc_827F578C:
	// cmplwi cr6,r30,8188
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8188, ctx.xer);
	// bgt cr6,0x827f5760
	if (ctx.cr6.gt) goto loc_827F5760;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f57b4
	if (!ctx.cr6.eq) goto loc_827F57B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f57c0
	if (ctx.cr6.eq) goto loc_827F57C0;
	// rlwinm r11,r10,26,19,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1FFC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x827f5818
	if (!ctx.cr6.lt) goto loc_827F5818;
loc_827F57B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f57d0
	if (!ctx.cr6.eq) goto loc_827F57D0;
loc_827F57C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120040
	ctx.lr = 0x827F57CC;
	sub_82120040(ctx, base);
	// b 0x827f57d8
	goto loc_827F57D8;
loc_827F57D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82121828
	ctx.lr = 0x827F57D8;
	sub_82121828(ctx, base);
loc_827F57D8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x827f57ec
	if (!ctx.cr6.eq) goto loc_827F57EC;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827F57EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f580c
	if (!ctx.cr6.eq) goto loc_827F580C;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F580C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r30,6,13,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 6) & 0x7FF00) | (ctx.r11.u64 & 0xFFFFFFFFFFF800FF);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827F5818:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5824"))) PPC_WEAK_FUNC(sub_827F5824);
PPC_FUNC_IMPL(__imp__sub_827F5824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5828"))) PPC_WEAK_FUNC(sub_827F5828);
PPC_FUNC_IMPL(__imp__sub_827F5828) {
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
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827f58dc
	if (ctx.cr6.eq) goto loc_827F58DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827f58dc
	if (ctx.cr6.eq) goto loc_827F58DC;
	// bl 0x827f5158
	ctx.lr = 0x827F5860;
	sub_827F5158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f58dc
	if (ctx.cr6.eq) goto loc_827F58DC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f58dc
	if (!ctx.cr6.eq) goto loc_827F58DC;
	// rlwinm r11,r11,13,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x827f5720
	ctx.lr = 0x827F5890;
	sub_827F5720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f58dc
	if (ctx.cr6.eq) goto loc_827F58DC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,13,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827f58d0
	if (ctx.cr6.lt) goto loc_827F58D0;
loc_827F58B8:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// bge 0x827f58b8
	if (!ctx.cr0.lt) goto loc_827F58B8;
loc_827F58D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827F58DC:
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

__attribute__((alias("__imp__sub_827F58F0"))) PPC_WEAK_FUNC(sub_827F58F0);
PPC_FUNC_IMPL(__imp__sub_827F58F0) {
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
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827f5998
	if (ctx.cr6.eq) goto loc_827F5998;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827f5998
	if (ctx.cr6.eq) goto loc_827F5998;
	// bl 0x827f5158
	ctx.lr = 0x827F5928;
	sub_827F5158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f5998
	if (ctx.cr6.eq) goto loc_827F5998;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f5998
	if (ctx.cr6.eq) goto loc_827F5998;
	// rlwinm r11,r11,13,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5720
	ctx.lr = 0x827F5954;
	sub_827F5720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f5998
	if (ctx.cr6.eq) goto loc_827F5998;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_827F5968:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r6,13,19,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1FFF;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x827f5968
	if (!ctx.cr6.gt) goto loc_827F5968;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827F5998:
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

__attribute__((alias("__imp__sub_827F59AC"))) PPC_WEAK_FUNC(sub_827F59AC);
PPC_FUNC_IMPL(__imp__sub_827F59AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F59B0"))) PPC_WEAK_FUNC(sub_827F59B0);
PPC_FUNC_IMPL(__imp__sub_827F59B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F59B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827f59d8
	if (!ctx.cr6.eq) goto loc_827F59D8;
	// bl 0x827f5600
	ctx.lr = 0x827F59D0;
	sub_827F5600(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F59D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x827f5a04
	if (!ctx.cr6.eq) goto loc_827F5A04;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f60c0
	ctx.lr = 0x827F59FC;
	sub_827F60C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F5A04:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8221cef8
	ctx.lr = 0x827F5A0C;
	sub_8221CEF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,8191
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8191, ctx.xer);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x827f5a84
	if (ctx.cr6.gt) goto loc_827F5A84;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x827f5a48
	if (!ctx.cr6.eq) goto loc_827F5A48;
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_827F5A48:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5720
	ctx.lr = 0x827F5A58;
	sub_827F5720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f5a84
	if (ctx.cr6.eq) goto loc_827F5A84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82219130
	ctx.lr = 0x827F5A70;
	sub_82219130(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r10,r30,19,0,12
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 19) & 0xFFF80000) | (ctx.r10.u64 & 0xFFFFFFFF0007FFFF);
	// rlwimi r10,r11,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827F5A84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5A8C"))) PPC_WEAK_FUNC(sub_827F5A8C);
PPC_FUNC_IMPL(__imp__sub_827F5A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5A90"))) PPC_WEAK_FUNC(sub_827F5A90);
PPC_FUNC_IMPL(__imp__sub_827F5A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F5A98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827f5ab8
	if (!ctx.cr6.eq) goto loc_827F5AB8;
	// bl 0x827f5600
	ctx.lr = 0x827F5AB0;
	sub_827F5600(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F5AB8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r10,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 30;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x827f5ae4
	if (!ctx.cr6.eq) goto loc_827F5AE4;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f6198
	ctx.lr = 0x827F5ADC;
	sub_827F6198(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F5AE4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_827F5AE8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827f5ae8
	if (!ctx.cr6.eq) goto loc_827F5AE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8191
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8191, ctx.xer);
	// bgt cr6,0x827f5b68
	if (ctx.cr6.gt) goto loc_827F5B68;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x827f5b28
	if (!ctx.cr6.eq) goto loc_827F5B28;
	// rlwinm r11,r10,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_827F5B28:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f5720
	ctx.lr = 0x827F5B38;
	sub_827F5720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f5b68
	if (ctx.cr6.eq) goto loc_827F5B68;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82219130
	ctx.lr = 0x827F5B50;
	sub_82219130(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r10,r31,19,0,12
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 19) & 0xFFF80000) | (ctx.r10.u64 & 0xFFFFFFFF0007FFFF);
	// rlwinm r9,r10,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// rlwimi r9,r11,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_827F5B68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5B70"))) PPC_WEAK_FUNC(sub_827F5B70);
PPC_FUNC_IMPL(__imp__sub_827F5B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F5B78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31945
	ctx.r28.s64 = -2093547520;
	// lwz r11,-19720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f5bcc
	if (ctx.cr6.eq) goto loc_827F5BCC;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addic. r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x827f5bbc
	if (ctx.cr0.lt) goto loc_827F5BBC;
loc_827F5BA4:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f5600
	ctx.lr = 0x827F5BB4;
	sub_827F5600(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x827f5ba4
	if (!ctx.cr0.lt) goto loc_827F5BA4;
loc_827F5BBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x827F5BC4;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19720(r28)
	PPC_STORE_U32(ctx.r28.u32 + -19720, ctx.r11.u32);
loc_827F5BCC:
	// lis r28,-31945
	ctx.r28.s64 = -2093547520;
	// lwz r11,-19724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -19724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f5c1c
	if (ctx.cr6.eq) goto loc_827F5C1C;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addic. r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x827f5c0c
	if (ctx.cr0.lt) goto loc_827F5C0C;
loc_827F5BF4:
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f5600
	ctx.lr = 0x827F5C04;
	sub_827F5600(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x827f5bf4
	if (!ctx.cr0.lt) goto loc_827F5BF4;
loc_827F5C0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x827F5C14;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-19724(r28)
	PPC_STORE_U32(ctx.r28.u32 + -19724, ctx.r11.u32);
loc_827F5C1C:
	// lis r30,-31945
	ctx.r30.s64 = -2093547520;
	// lwz r31,-29220(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29220);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f5c48
	if (ctx.cr6.eq) goto loc_827F5C48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5600
	ctx.lr = 0x827F5C38;
	sub_827F5600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120a70
	ctx.lr = 0x827F5C40;
	sub_82120A70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-29220(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29220, ctx.r11.u32);
loc_827F5C48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5C50"))) PPC_WEAK_FUNC(sub_827F5C50);
PPC_FUNC_IMPL(__imp__sub_827F5C50) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f5c88
	if (!ctx.cr6.eq) goto loc_827F5C88;
loc_827F5C70:
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
loc_827F5C88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f5cc4
	if (!ctx.cr6.eq) goto loc_827F5CC4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827f5c70
	if (ctx.cr6.eq) goto loc_827F5C70;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r10,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 30;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827f5c70
	if (ctx.cr6.eq) goto loc_827F5C70;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827f5c70
	if (ctx.cr6.eq) goto loc_827F5C70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5828
	ctx.lr = 0x827F5CC4;
	sub_827F5828(ctx, base);
loc_827F5CC4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_827F5CDC"))) PPC_WEAK_FUNC(sub_827F5CDC);
PPC_FUNC_IMPL(__imp__sub_827F5CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5CE0"))) PPC_WEAK_FUNC(sub_827F5CE0);
PPC_FUNC_IMPL(__imp__sub_827F5CE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f5d00
	if (ctx.cr6.eq) goto loc_827F5D00;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_827F5D00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F5D08"))) PPC_WEAK_FUNC(sub_827F5D08);
PPC_FUNC_IMPL(__imp__sub_827F5D08) {
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r10,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 30;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827f5d3c
	if (ctx.cr6.eq) goto loc_827F5D3C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827f5d78
	if (!ctx.cr6.eq) goto loc_827F5D78;
loc_827F5D3C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f5d78
	if (ctx.cr6.eq) goto loc_827F5D78;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827f5d78
	if (ctx.cr6.eq) goto loc_827F5D78;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f5d68
	if (ctx.cr6.eq) goto loc_827F5D68;
	// bl 0x827f59b0
	ctx.lr = 0x827F5D64;
	sub_827F59B0(ctx, base);
	// b 0x827f5d6c
	goto loc_827F5D6C;
loc_827F5D68:
	// bl 0x827f5a90
	ctx.lr = 0x827F5D6C;
	sub_827F5A90(ctx, base);
loc_827F5D6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,26,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_827F5D78:
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

__attribute__((alias("__imp__sub_827F5D8C"))) PPC_WEAK_FUNC(sub_827F5D8C);
PPC_FUNC_IMPL(__imp__sub_827F5D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5D90"))) PPC_WEAK_FUNC(sub_827F5D90);
PPC_FUNC_IMPL(__imp__sub_827F5D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827F5D98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827f5e84
	if (ctx.cr6.eq) goto loc_827F5E84;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827f5e84
	if (ctx.cr6.eq) goto loc_827F5E84;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827f5e84
	if (ctx.cr6.eq) goto loc_827F5E84;
	// bl 0x827f5158
	ctx.lr = 0x827F5DD0;
	sub_827F5158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f5dec
	if (!ctx.cr6.eq) goto loc_827F5DEC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f59b0
	ctx.lr = 0x827F5DE4;
	sub_827F59B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_827F5DEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f5e04
	if (!ctx.cr6.eq) goto loc_827F5E04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5828
	ctx.lr = 0x827F5E04;
	sub_827F5828(ctx, base);
loc_827F5E04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r29,r11,14,18,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFE;
	// bl 0x8221cef8
	ctx.lr = 0x827F5E14;
	sub_8221CEF8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r10,13,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1FFF;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r28,r9,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,8191
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8191, ctx.xer);
	// bgt cr6,0x827f5e84
	if (ctx.cr6.gt) goto loc_827F5E84;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5720
	ctx.lr = 0x827F5E44;
	sub_827F5720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f5e84
	if (ctx.cr6.eq) goto loc_827F5E84;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82219130
	ctx.lr = 0x827F5E64;
	sub_82219130(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r30,19,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 19) & 0xFFF80000;
	// rlwinm r11,r9,0,0,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF80000;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r8,r9,0,30,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r8,r9,0,13,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFF8) | (ctx.r8.u64 & 0xFFFFFFFFFFF80007);
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_827F5E84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5E8C"))) PPC_WEAK_FUNC(sub_827F5E8C);
PPC_FUNC_IMPL(__imp__sub_827F5E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F5E90"))) PPC_WEAK_FUNC(sub_827F5E90);
PPC_FUNC_IMPL(__imp__sub_827F5E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x827F5E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827f5ff4
	if (ctx.cr6.eq) goto loc_827F5FF4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827f5ff4
	if (ctx.cr6.eq) goto loc_827F5FF4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827f5ff4
	if (ctx.cr6.eq) goto loc_827F5FF4;
	// bl 0x827f5158
	ctx.lr = 0x827F5ED0;
	sub_827F5158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f5eec
	if (!ctx.cr6.eq) goto loc_827F5EEC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5a90
	ctx.lr = 0x827F5EE4;
	sub_827F5A90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
loc_827F5EEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f5f04
	if (ctx.cr6.eq) goto loc_827F5F04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f58f0
	ctx.lr = 0x827F5F04;
	sub_827F58F0(ctx, base);
loc_827F5F04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r9,r11,13,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r27,r11,14,18,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFE;
	// bne cr6,0x827f5f20
	if (!ctx.cr6.eq) goto loc_827F5F20;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
loc_827F5F20:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827F5F24:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827f5f24
	if (!ctx.cr6.eq) goto loc_827F5F24;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x827f5f54
	if (ctx.cr6.eq) goto loc_827F5F54;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x827f5f58
	goto loc_827F5F58;
loc_827F5F54:
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
loc_827F5F58:
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,8191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8191, ctx.xer);
	// bgt cr6,0x827f5ff4
	if (ctx.cr6.gt) goto loc_827F5FF4;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r30,r27
	ctx.r4.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5720
	ctx.lr = 0x827F5F74;
	sub_827F5720(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f5ff4
	if (ctx.cr6.eq) goto loc_827F5FF4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f5fc0
	if (ctx.cr6.eq) goto loc_827F5FC0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,14,18,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFE;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
loc_827F5FA0:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x827f5fa0
	if (!ctx.cr0.eq) goto loc_827F5FA0;
	// b 0x827f5fd4
	goto loc_827F5FD4;
loc_827F5FC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82219130
	ctx.lr = 0x827F5FD4;
	sub_82219130(ctx, base);
loc_827F5FD4:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,19,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 19) & 0xFFF80000;
	// rlwinm r11,r9,0,0,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF80000;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r8,r9,0,30,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r8,r9,0,13,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFF8) | (ctx.r8.u64 & 0xFFFFFFFFFFF80007);
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_827F5FF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F5FFC"))) PPC_WEAK_FUNC(sub_827F5FFC);
PPC_FUNC_IMPL(__imp__sub_827F5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6000"))) PPC_WEAK_FUNC(sub_827F6000);
PPC_FUNC_IMPL(__imp__sub_827F6000) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f6038
	if (ctx.cr6.eq) goto loc_827F6038;
	// bl 0x827f5d90
	ctx.lr = 0x827F6034;
	sub_827F5D90(ctx, base);
	// b 0x827f603c
	goto loc_827F603C;
loc_827F6038:
	// bl 0x827f5e90
	ctx.lr = 0x827F603C;
	sub_827F5E90(ctx, base);
loc_827F603C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f6058
	if (ctx.cr6.eq) goto loc_827F6058;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_827F6058:
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

__attribute__((alias("__imp__sub_827F6070"))) PPC_WEAK_FUNC(sub_827F6070);
PPC_FUNC_IMPL(__imp__sub_827F6070) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,-12380
	ctx.r5.s64 = ctx.r11.s64 + -12380;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82219f10
	ctx.lr = 0x827F609C;
	sub_82219F10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5a90
	ctx.lr = 0x827F60A8;
	sub_827F5A90(ctx, base);
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

__attribute__((alias("__imp__sub_827F60BC"))) PPC_WEAK_FUNC(sub_827F60BC);
PPC_FUNC_IMPL(__imp__sub_827F60BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F60C0"))) PPC_WEAK_FUNC(sub_827F60C0);
PPC_FUNC_IMPL(__imp__sub_827F60C0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827f60fc
	if (!ctx.cr6.eq) goto loc_827F60FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f617c
	if (ctx.cr6.eq) goto loc_827F617C;
loc_827F60EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5600
	ctx.lr = 0x827F60F8;
	sub_827F5600(ctx, base);
	// b 0x827f617c
	goto loc_827F617C;
loc_827F60FC:
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f60ec
	if (ctx.cr6.eq) goto loc_827F60EC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x827f6130
	if (!ctx.cr6.eq) goto loc_827F6130;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827f59b0
	ctx.lr = 0x827F612C;
	sub_827F59B0(ctx, base);
	// b 0x827f617c
	goto loc_827F617C;
loc_827F6130:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827f5600
	ctx.lr = 0x827F6138;
	sub_827F5600(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x8221cef8
	ctx.lr = 0x827F6150;
	sub_8221CEF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r3,19,0,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 19) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// rlwinm r9,r11,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// srawi r8,r9,30
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 30;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x827f617c
	if (!ctx.cr6.eq) goto loc_827F617C;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,6,24,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827F617C:
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

__attribute__((alias("__imp__sub_827F6194"))) PPC_WEAK_FUNC(sub_827F6194);
PPC_FUNC_IMPL(__imp__sub_827F6194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6198"))) PPC_WEAK_FUNC(sub_827F6198);
PPC_FUNC_IMPL(__imp__sub_827F6198) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827f61d4
	if (!ctx.cr6.eq) goto loc_827F61D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f6268
	if (ctx.cr6.eq) goto loc_827F6268;
loc_827F61C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5600
	ctx.lr = 0x827F61D0;
	sub_827F5600(ctx, base);
	// b 0x827f6268
	goto loc_827F6268;
loc_827F61D4:
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827f61c4
	if (ctx.cr6.eq) goto loc_827F61C4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x827f6208
	if (!ctx.cr6.eq) goto loc_827F6208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827f5a90
	ctx.lr = 0x827F6204;
	sub_827F5A90(ctx, base);
	// b 0x827f6268
	goto loc_827F6268;
loc_827F6208:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827f5600
	ctx.lr = 0x827F6210;
	sub_827F5600(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwimi r11,r9,2,28,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF3);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827F6228:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827f6228
	if (!ctx.cr6.eq) goto loc_827F6228;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwimi r11,r8,19,0,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 19) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// rlwinm r7,r11,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// srawi r6,r7,30
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 30;
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x827f6268
	if (!ctx.cr6.eq) goto loc_827F6268;
	// rlwimi r11,r9,6,24,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827F6268:
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

__attribute__((alias("__imp__sub_827F6280"))) PPC_WEAK_FUNC(sub_827F6280);
PPC_FUNC_IMPL(__imp__sub_827F6280) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// srawi r9,r10,30
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 30;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x827f62e4
	if (ctx.cr6.eq) goto loc_827F62E4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827f62c4
	if (!ctx.cr6.eq) goto loc_827F62C4;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,7,24,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x827f62e0
	goto loc_827F62E0;
loc_827F62C4:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r11,r30,6,24,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 6) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x827f5d08
	ctx.lr = 0x827F62D8;
	sub_827F5D08(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r30,7,24,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 7) & 0xC0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF3F);
loc_827F62E0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827F62E4:
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

__attribute__((alias("__imp__sub_827F62FC"))) PPC_WEAK_FUNC(sub_827F62FC);
PPC_FUNC_IMPL(__imp__sub_827F62FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6300"))) PPC_WEAK_FUNC(sub_827F6300);
PPC_FUNC_IMPL(__imp__sub_827F6300) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827f5c50
	ctx.lr = 0x827F631C;
	sub_827F5C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x827f632c
	if (ctx.cr6.eq) goto loc_827F632C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827F632C:
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

__attribute__((alias("__imp__sub_827F6340"))) PPC_WEAK_FUNC(sub_827F6340);
PPC_FUNC_IMPL(__imp__sub_827F6340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f635c
	if (ctx.cr6.eq) goto loc_827F635C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_827F635C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6364"))) PPC_WEAK_FUNC(sub_827F6364);
PPC_FUNC_IMPL(__imp__sub_827F6364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6368"))) PPC_WEAK_FUNC(sub_827F6368);
PPC_FUNC_IMPL(__imp__sub_827F6368) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,-12388
	ctx.r5.s64 = ctx.r11.s64 + -12388;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82219f10
	ctx.lr = 0x827F6394;
	sub_82219F10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5e90
	ctx.lr = 0x827F63A0;
	sub_827F5E90(ctx, base);
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

__attribute__((alias("__imp__sub_827F63B4"))) PPC_WEAK_FUNC(sub_827F63B4);
PPC_FUNC_IMPL(__imp__sub_827F63B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F63B8"))) PPC_WEAK_FUNC(sub_827F63B8);
PPC_FUNC_IMPL(__imp__sub_827F63B8) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,-12380
	ctx.r5.s64 = ctx.r11.s64 + -12380;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82219f10
	ctx.lr = 0x827F63E4;
	sub_82219F10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f5e90
	ctx.lr = 0x827F63F0;
	sub_827F5E90(ctx, base);
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

__attribute__((alias("__imp__sub_827F6404"))) PPC_WEAK_FUNC(sub_827F6404);
PPC_FUNC_IMPL(__imp__sub_827F6404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6408"))) PPC_WEAK_FUNC(sub_827F6408);
PPC_FUNC_IMPL(__imp__sub_827F6408) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r10,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 30;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// beq cr6,0x827f6480
	if (ctx.cr6.eq) goto loc_827F6480;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827f6450
	if (ctx.cr6.eq) goto loc_827F6450;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827f6470
	if (!ctx.cr6.eq) goto loc_827F6470;
loc_827F6450:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f6464
	if (ctx.cr6.eq) goto loc_827F6464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827F6464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f60c0
	ctx.lr = 0x827F646C;
	sub_827F60C0(ctx, base);
	// b 0x827f64bc
	goto loc_827F64BC;
loc_827F6470:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x827f59b0
	ctx.lr = 0x827F647C;
	sub_827F59B0(ctx, base);
	// b 0x827f64bc
	goto loc_827F64BC;
loc_827F6480:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827f6490
	if (ctx.cr6.eq) goto loc_827F6490;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827f64b0
	if (!ctx.cr6.eq) goto loc_827F64B0;
loc_827F6490:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f64a4
	if (ctx.cr6.eq) goto loc_827F64A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827F64A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f6198
	ctx.lr = 0x827F64AC;
	sub_827F6198(ctx, base);
	// b 0x827f64bc
	goto loc_827F64BC;
loc_827F64B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x827f5a90
	ctx.lr = 0x827F64BC;
	sub_827F5A90(ctx, base);
loc_827F64BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827f64d8
	if (ctx.cr6.eq) goto loc_827F64D8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_827F64D8:
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

__attribute__((alias("__imp__sub_827F64F0"))) PPC_WEAK_FUNC(sub_827F64F0);
PPC_FUNC_IMPL(__imp__sub_827F64F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F64F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31945
	ctx.r29.s64 = -2093547520;
	// li r28,8
	ctx.r28.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-19720(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f65bc
	if (!ctx.cr6.eq) goto loc_827F65BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82120040
	ctx.lr = 0x827F6520;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6594
	if (ctx.cr6.eq) goto loc_827F6594;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827F6538:
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r7,15(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r6,23(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// lbz r4,31(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// rlwinm r3,r7,0,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r8,r6,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// rlwinm r7,r4,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x827f6538
	if (!ctx.cr0.eq) goto loc_827F6538;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r11,-19720(r29)
	PPC_STORE_U32(ctx.r29.u32 + -19720, ctx.r11.u32);
	// b 0x827f65a8
	goto loc_827F65A8;
loc_827F6594:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r11,-19720(r29)
	PPC_STORE_U32(ctx.r29.u32 + -19720, ctx.r11.u32);
	// b 0x827f65a8
	goto loc_827F65A8;
loc_827F65A4:
	// lwz r11,-19720(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19720);
loc_827F65A8:
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x827f6280
	ctx.lr = 0x827F65B0;
	sub_827F6280(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// blt cr6,0x827f65a4
	if (ctx.cr6.lt) goto loc_827F65A4;
loc_827F65BC:
	// lis r29,-31945
	ctx.r29.s64 = -2093547520;
	// lwz r11,-19724(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f6674
	if (!ctx.cr6.eq) goto loc_827F6674;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82120040
	ctx.lr = 0x827F65D8;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f664c
	if (ctx.cr6.eq) goto loc_827F664C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827F65F0:
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r7,15(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// lbz r6,23(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// rlwinm r5,r8,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// lbz r4,31(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// rlwinm r3,r7,0,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r8,r6,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// rlwinm r7,r4,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bne 0x827f65f0
	if (!ctx.cr0.eq) goto loc_827F65F0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r11,-19724(r29)
	PPC_STORE_U32(ctx.r29.u32 + -19724, ctx.r11.u32);
	// b 0x827f6660
	goto loc_827F6660;
loc_827F664C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r11,-19724(r29)
	PPC_STORE_U32(ctx.r29.u32 + -19724, ctx.r11.u32);
	// b 0x827f6660
	goto loc_827F6660;
loc_827F665C:
	// lwz r11,-19724(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19724);
loc_827F6660:
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x827f56a0
	ctx.lr = 0x827F6668;
	sub_827F56A0(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// blt cr6,0x827f665c
	if (ctx.cr6.lt) goto loc_827F665C;
loc_827F6674:
	// lis r31,-31945
	ctx.r31.s64 = -2093547520;
	// lwz r11,-29220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f66b8
	if (!ctx.cr6.eq) goto loc_827F66B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82120040
	ctx.lr = 0x827F6690;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f66b4
	if (ctx.cr6.eq) goto loc_827F66B4;
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stw r3,-29220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29220, ctx.r3.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827F66B4:
	// stw r30,-29220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29220, ctx.r30.u32);
loc_827F66B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F66C0"))) PPC_WEAK_FUNC(sub_827F66C0);
PPC_FUNC_IMPL(__imp__sub_827F66C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,124(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_827F66D8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x827f66fc
	if (ctx.cr6.eq) goto loc_827F66FC;
	// lwz r7,124(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x827f66d8
	if (ctx.cr6.lt) goto loc_827F66D8;
	// blr 
	return;
loc_827F66FC:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827f671c
	if (!ctx.cr6.lt) goto loc_827F671C;
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
loc_827F671C:
	// lwz r11,124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F672C"))) PPC_WEAK_FUNC(sub_827F672C);
PPC_FUNC_IMPL(__imp__sub_827F672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6730"))) PPC_WEAK_FUNC(sub_827F6730);
PPC_FUNC_IMPL(__imp__sub_827F6730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f13,160(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6754"))) PPC_WEAK_FUNC(sub_827F6754);
PPC_FUNC_IMPL(__imp__sub_827F6754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6758"))) PPC_WEAK_FUNC(sub_827F6758);
PPC_FUNC_IMPL(__imp__sub_827F6758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32029
	ctx.r11.s64 = -2099052544;
	// lfs f0,-19784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19784);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6768"))) PPC_WEAK_FUNC(sub_827F6768);
PPC_FUNC_IMPL(__imp__sub_827F6768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F676C"))) PPC_WEAK_FUNC(sub_827F676C);
PPC_FUNC_IMPL(__imp__sub_827F676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6770"))) PPC_WEAK_FUNC(sub_827F6770);
PPC_FUNC_IMPL(__imp__sub_827F6770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13424);
	// b 0x827edd08
	sub_827EDD08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F677C"))) PPC_WEAK_FUNC(sub_827F677C);
PPC_FUNC_IMPL(__imp__sub_827F677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6780"))) PPC_WEAK_FUNC(sub_827F6780);
PPC_FUNC_IMPL(__imp__sub_827F6780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f67bc
	if (ctx.cr6.eq) goto loc_827F67BC;
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_827F679C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x827f67c4
	if (ctx.cr6.eq) goto loc_827F67C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827f679c
	if (ctx.cr6.lt) goto loc_827F679C;
loc_827F67BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827F67C4:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F67D0"))) PPC_WEAK_FUNC(sub_827F67D0);
PPC_FUNC_IMPL(__imp__sub_827F67D0) {
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
	// bl 0x827f6780
	ctx.lr = 0x827F67E0;
	sub_827F6780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f67ec
	if (ctx.cr6.eq) goto loc_827F67EC;
	// stw r4,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r4.u32);
loc_827F67EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F67FC"))) PPC_WEAK_FUNC(sub_827F67FC);
PPC_FUNC_IMPL(__imp__sub_827F67FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6800"))) PPC_WEAK_FUNC(sub_827F6800);
PPC_FUNC_IMPL(__imp__sub_827F6800) {
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
	// bl 0x827f6780
	ctx.lr = 0x827F6810;
	sub_827F6780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6820
	if (ctx.cr6.eq) goto loc_827F6820;
	// li r11,12345
	ctx.r11.s64 = 12345;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
loc_827F6820:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6830"))) PPC_WEAK_FUNC(sub_827F6830);
PPC_FUNC_IMPL(__imp__sub_827F6830) {
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
	// bl 0x827f6780
	ctx.lr = 0x827F6840;
	sub_827F6780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6850
	if (ctx.cr6.eq) goto loc_827F6850;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
loc_827F6850:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6860"))) PPC_WEAK_FUNC(sub_827F6860);
PPC_FUNC_IMPL(__imp__sub_827F6860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f68b0
	if (ctx.cr6.eq) goto loc_827F68B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x82219130
	ctx.lr = 0x827F6890;
	sub_82219130(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x827F68A0;
	sub_82219130(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82219130
	ctx.lr = 0x827F68B0;
	sub_82219130(ctx, base);
loc_827F68B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F68C4"))) PPC_WEAK_FUNC(sub_827F68C4);
PPC_FUNC_IMPL(__imp__sub_827F68C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F68C8"))) PPC_WEAK_FUNC(sub_827F68C8);
PPC_FUNC_IMPL(__imp__sub_827F68C8) {
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
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82120040
	ctx.lr = 0x827F68E4;
	sub_82120040(ctx, base);
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x827F68F4;
	sub_82218A80(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827F6914"))) PPC_WEAK_FUNC(sub_827F6914);
PPC_FUNC_IMPL(__imp__sub_827F6914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6918"))) PPC_WEAK_FUNC(sub_827F6918);
PPC_FUNC_IMPL(__imp__sub_827F6918) {
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
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827f6978
	if (!ctx.cr6.gt) goto loc_827F6978;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827f696c
	if (!ctx.cr6.eq) goto loc_827F696C;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82120040
	ctx.lr = 0x827F6968;
	sub_82120040(ctx, base);
	// b 0x827f6974
	goto loc_827F6974;
loc_827F696C:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121828
	ctx.lr = 0x827F6974;
	sub_82121828(ctx, base);
loc_827F6974:
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
loc_827F6978:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_827F69AC"))) PPC_WEAK_FUNC(sub_827F69AC);
PPC_FUNC_IMPL(__imp__sub_827F69AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F69B0"))) PPC_WEAK_FUNC(sub_827F69B0);
PPC_FUNC_IMPL(__imp__sub_827F69B0) {
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
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82218a80
	ctx.lr = 0x827F69D4;
	sub_82218A80(ctx, base);
	// lbz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// addi r30,r11,18128
	ctx.r30.s64 = ctx.r11.s64 + 18128;
	// stb r9,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r9.u8);
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82219130
	ctx.lr = 0x827F69F8;
	sub_82219130(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x82219130
	ctx.lr = 0x827F6A08;
	sub_82219130(ctx, base);
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r8,26720
	ctx.r6.s64 = ctx.r8.s64 + 26720;
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_827F6A34"))) PPC_WEAK_FUNC(sub_827F6A34);
PPC_FUNC_IMPL(__imp__sub_827F6A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6A38"))) PPC_WEAK_FUNC(sub_827F6A38);
PPC_FUNC_IMPL(__imp__sub_827F6A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F6A40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x827f6adc
	if (!ctx.cr6.gt) goto loc_827F6ADC;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_827F6A60:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x827f6a8c
	if (ctx.cr6.eq) goto loc_827F6A8C;
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827f6a60
	if (ctx.cr6.lt) goto loc_827F6A60;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827F6A8C:
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r28,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827f6aac
	if (ctx.cr6.eq) goto loc_827F6AAC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82120a70
	ctx.lr = 0x827F6AA4;
	sub_82120A70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120a70
	ctx.lr = 0x827F6AAC;
	sub_82120A70(ctx, base);
loc_827F6AAC:
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827f6ad0
	if (!ctx.cr6.lt) goto loc_827F6AD0;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stwx r9,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r9.u32);
loc_827F6AD0:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
loc_827F6ADC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6AE4"))) PPC_WEAK_FUNC(sub_827F6AE4);
PPC_FUNC_IMPL(__imp__sub_827F6AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6AE8"))) PPC_WEAK_FUNC(sub_827F6AE8);
PPC_FUNC_IMPL(__imp__sub_827F6AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x827F6AF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f6b44
	if (ctx.cr6.eq) goto loc_827F6B44;
	// lwz r8,120(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_827F6B24:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827f6b80
	if (ctx.cr6.eq) goto loc_827F6B80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827f6b24
	if (ctx.cr6.lt) goto loc_827F6B24;
loc_827F6B44:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82120040
	ctx.lr = 0x827F6B50;
	sub_82120040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6b9c
	if (ctx.cr6.eq) goto loc_827F6B9C;
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bd8ce8
	ctx.lr = 0x827F6B70;
	sub_82BD8CE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827f6918
	ctx.lr = 0x827F6B78;
	sub_827F6918(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_827F6B80:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r26,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r26.u32);
	// stw r26,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r26.u32);
	// stw r26,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
loc_827F6B9C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827f6918
	ctx.lr = 0x827F6BA8;
	sub_827F6918(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6BB0"))) PPC_WEAK_FUNC(sub_827F6BB0);
PPC_FUNC_IMPL(__imp__sub_827F6BB0) {
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
	// bl 0x827f6780
	ctx.lr = 0x827F6BC0;
	sub_827F6780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6be4
	if (ctx.cr6.eq) goto loc_827F6BE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,380(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// bl 0x82bd8d80
	ctx.lr = 0x827F6BE4;
	sub_82BD8D80(ctx, base);
loc_827F6BE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6BF4"))) PPC_WEAK_FUNC(sub_827F6BF4);
PPC_FUNC_IMPL(__imp__sub_827F6BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6BF8"))) PPC_WEAK_FUNC(sub_827F6BF8);
PPC_FUNC_IMPL(__imp__sub_827F6BF8) {
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
	// bl 0x827f6780
	ctx.lr = 0x827F6C08;
	sub_827F6780(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6c34
	if (ctx.cr6.eq) goto loc_827F6C34;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// stw r10,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
	// lwz r11,13412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13412);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,380(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 380);
	// bl 0x82bd8d80
	ctx.lr = 0x827F6C34;
	sub_82BD8D80(ctx, base);
loc_827F6C34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6C44"))) PPC_WEAK_FUNC(sub_827F6C44);
PPC_FUNC_IMPL(__imp__sub_827F6C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6C48"))) PPC_WEAK_FUNC(sub_827F6C48);
PPC_FUNC_IMPL(__imp__sub_827F6C48) {
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
	// lis r31,-31945
	ctx.r31.s64 = -2093547520;
	// addi r30,r31,-17552
	ctx.r30.s64 = ctx.r31.s64 + -17552;
	// lwz r3,-17552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17552);
	// bl 0x82b78378
	ctx.lr = 0x827F6C6C;
	sub_82B78378(ctx, base);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-19740
	ctx.r9.s64 = ctx.r10.s64 + -19740;
	// stw r11,-17552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17552, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,254
	ctx.r11.s64 = 254;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_827F6CA4"))) PPC_WEAK_FUNC(sub_827F6CA4);
PPC_FUNC_IMPL(__imp__sub_827F6CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6CA8"))) PPC_WEAK_FUNC(sub_827F6CA8);
PPC_FUNC_IMPL(__imp__sub_827F6CA8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,-27236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27236);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82747098
	ctx.lr = 0x827F6CC8;
	sub_82747098(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r6,r7,0,30,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC3;
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
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

__attribute__((alias("__imp__sub_827F6D44"))) PPC_WEAK_FUNC(sub_827F6D44);
PPC_FUNC_IMPL(__imp__sub_827F6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6D48"))) PPC_WEAK_FUNC(sub_827F6D48);
PPC_FUNC_IMPL(__imp__sub_827F6D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F6D50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-17552
	ctx.r31.s64 = ctx.r11.s64 + -17552;
	// lwz r11,-17552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f6d74
	if (ctx.cr6.eq) goto loc_827F6D74;
	// bl 0x827f6c48
	ctx.lr = 0x827F6D70;
	sub_827F6C48(ctx, base);
	// b 0x827f6d8c
	goto loc_827F6D8C;
loc_827F6D74:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-19740
	ctx.r9.s64 = ctx.r10.s64 + -19740;
	// li r10,254
	ctx.r10.s64 = 254;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_827F6D8C:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13208);
	// bl 0x82b77240
	ctx.lr = 0x827F6D98;
	sub_82B77240(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lwz r11,12476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f6dcc
	if (ctx.cr6.eq) goto loc_827F6DCC;
	// lwz r30,12480(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12480);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcd938
	ctx.lr = 0x827F6DC0;
	sub_82BCD938(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82bc6798
	ctx.lr = 0x827F6DCC;
	sub_82BC6798(ctx, base);
loc_827F6DCC:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x827f6dec
	if (!ctx.cr6.eq) goto loc_827F6DEC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,12480(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12480);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82bcd270
	ctx.lr = 0x827F6DE4;
	sub_82BCD270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
loc_827F6DEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b759a8
	ctx.lr = 0x827F6DF4;
	sub_82B759A8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,12480(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12480);
	// bl 0x82bcd270
	ctx.lr = 0x827F6E00;
	sub_82BCD270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F6E08"))) PPC_WEAK_FUNC(sub_827F6E08);
PPC_FUNC_IMPL(__imp__sub_827F6E08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6E0C"))) PPC_WEAK_FUNC(sub_827F6E0C);
PPC_FUNC_IMPL(__imp__sub_827F6E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6E10"))) PPC_WEAK_FUNC(sub_827F6E10);
PPC_FUNC_IMPL(__imp__sub_827F6E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6E14"))) PPC_WEAK_FUNC(sub_827F6E14);
PPC_FUNC_IMPL(__imp__sub_827F6E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6E18"))) PPC_WEAK_FUNC(sub_827F6E18);
PPC_FUNC_IMPL(__imp__sub_827F6E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13324);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6E30"))) PPC_WEAK_FUNC(sub_827F6E30);
PPC_FUNC_IMPL(__imp__sub_827F6E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6E34"))) PPC_WEAK_FUNC(sub_827F6E34);
PPC_FUNC_IMPL(__imp__sub_827F6E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F6E38"))) PPC_WEAK_FUNC(sub_827F6E38);
PPC_FUNC_IMPL(__imp__sub_827F6E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F6E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,13384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f6e64
	if (ctx.cr6.eq) goto loc_827F6E64;
	// bl 0x827f4f18
	ctx.lr = 0x827F6E5C;
	sub_827F4F18(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_827F6E64:
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r8,-12100
	ctx.r5.s64 = ctx.r8.s64 + -12100;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,13324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13324, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bcac98
	ctx.lr = 0x827F6E88;
	sub_82BCAC98(ctx, base);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827f6eac
	if (!ctx.cr6.eq) goto loc_827F6EAC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-12080
	ctx.r5.s64 = ctx.r11.s64 + -12080;
	// bl 0x82bcac98
	ctx.lr = 0x827F6E9C;
	sub_82BCAC98(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r10,13434
	ctx.r3.s64 = ctx.r10.s64 + 13434;
	// bl 0x821ef5b0
	ctx.lr = 0x827F6EAC;
	sub_821EF5B0(ctx, base);
loc_827F6EAC:
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// bl 0x821f8b90
	ctx.lr = 0x827F6EB4;
	sub_821F8B90(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_827F6EB8:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x827f6eb8
	if (!ctx.cr6.eq) goto loc_827F6EB8;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82218e50
	ctx.lr = 0x827F6EDC;
	sub_82218E50(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6eec
	if (ctx.cr6.eq) goto loc_827F6EEC;
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
loc_827F6EEC:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x827f6efc
	if (!ctx.cr6.eq) goto loc_827F6EFC;
	// addi r30,r1,113
	ctx.r30.s64 = ctx.r1.s64 + 113;
loc_827F6EFC:
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82218e50
	ctx.lr = 0x827F6F08;
	sub_82218E50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f6f14
	if (ctx.cr6.eq) goto loc_827F6F14;
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
loc_827F6F14:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-12036
	ctx.r5.s64 = ctx.r11.s64 + -12036;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bcac98
	ctx.lr = 0x827F6F2C;
	sub_82BCAC98(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ef5b0
	ctx.lr = 0x827F6F38;
	sub_821EF5B0(ctx, base);
}

__attribute__((alias("__imp__sub_827F6F38"))) PPC_WEAK_FUNC(sub_827F6F38);
PPC_FUNC_IMPL(__imp__sub_827F6F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r5,r11,-19740
	ctx.r5.s64 = ctx.r11.s64 + -19740;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31940
	ctx.r11.s64 = -2093219840;
	// lis r6,-31942
	ctx.r6.s64 = -2093350912;
	// addi r8,r11,-29104
	ctx.r8.s64 = ctx.r11.s64 + -29104;
	// lwz r11,2268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f6fac
	if (ctx.cr6.eq) goto loc_827F6FAC;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x827f6fac
	if (!ctx.cr6.eq) goto loc_827F6FAC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r11,r7,132
	ctx.r11.s64 = ctx.r7.s64 + 132;
loc_827F6F74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x827f6f98
	if (ctx.cr6.eq) goto loc_827F6F98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827f6f74
	if (ctx.cr6.eq) goto loc_827F6F74;
loc_827F6F98:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827f6fac
	if (!ctx.cr6.eq) goto loc_827F6FAC;
	// lwz r11,13352(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_827F6FAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r7,132
	ctx.r11.s64 = ctx.r7.s64 + 132;
	// stw r10,13352(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13352, ctx.r10.u32);
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_827F6FBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x827f6fbc
	if (!ctx.cr6.eq) goto loc_827F6FBC;
	// lwz r11,2268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f6fe4
	if (ctx.cr6.eq) goto loc_827F6FE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2268, ctx.r11.u32);
loc_827F6FE4:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r7,2268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2268, ctx.r7.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,2268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2268, ctx.r11.u32);
	// stw r3,12728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12728, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F6FFC"))) PPC_WEAK_FUNC(sub_827F6FFC);
PPC_FUNC_IMPL(__imp__sub_827F6FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7000"))) PPC_WEAK_FUNC(sub_827F7000);
PPC_FUNC_IMPL(__imp__sub_827F7000) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x827f702c
	if (!ctx.cr6.eq) goto loc_827F702C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f6f38
	ctx.lr = 0x827F702C;
	sub_827F6F38(ctx, base);
loc_827F702C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb9b28
	ctx.lr = 0x827F7034;
	sub_82BB9B28(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x827f7088
	if (!ctx.cr6.eq) goto loc_827F7088;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-19740
	ctx.r10.s64 = ctx.r11.s64 + -19740;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r11.u32);
	// beq cr6,0x827f7088
	if (ctx.cr6.eq) goto loc_827F7088;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,728(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x827f7074
	if (ctx.cr6.gt) goto loc_827F7074;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827f7078
	goto loc_827F7078;
loc_827F7074:
	// lwz r11,720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
loc_827F7078:
	// stw r31,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// bl 0x82bd9520
	ctx.lr = 0x827F7088;
	sub_82BD9520(ctx, base);
loc_827F7088:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13416);
	// bl 0x82becf98
	ctx.lr = 0x827F7098;
	sub_82BECF98(ctx, base);
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82bbade0
	ctx.lr = 0x827F70A8;
	sub_82BBADE0(ctx, base);
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

__attribute__((alias("__imp__sub_827F70C0"))) PPC_WEAK_FUNC(sub_827F70C0);
PPC_FUNC_IMPL(__imp__sub_827F70C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a00
	ctx.lr = 0x827F70C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lwz r3,12704(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12704);
	// stw r28,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r28.u32);
	// bl 0x82bbdfa0
	ctx.lr = 0x827F70E8;
	sub_82BBDFA0(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x827F70EC;
	sub_821201B0(ctx, base);
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827f7118
	if (ctx.cr6.eq) goto loc_827F7118;
	// bl 0x821201b0
	ctx.lr = 0x827F70FC;
	sub_821201B0(ctx, base);
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// bl 0x82121530
	ctx.lr = 0x827F7104;
	sub_82121530(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f7118
	if (ctx.cr6.eq) goto loc_827F7118;
	// bl 0x821201b0
	ctx.lr = 0x827F7110;
	sub_821201B0(ctx, base);
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// bl 0x82bc3720
	ctx.lr = 0x827F7118;
	sub_82BC3720(ctx, base);
loc_827F7118:
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r11,13412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,20000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20000, ctx.xer);
	// ble cr6,0x827f7148
	if (!ctx.cr6.gt) goto loc_827F7148;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_827F7148:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lwz r10,13548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13548);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827f71b4
	if (!ctx.cr6.eq) goto loc_827F71B4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x827f71b4
	if (ctx.cr6.eq) goto loc_827F71B4;
	// lwz r31,13316(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13316);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f718c
	if (ctx.cr6.eq) goto loc_827F718C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-12016
	ctx.r4.s64 = ctx.r11.s64 + -12016;
	// bl 0x827f7df0
	ctx.lr = 0x827F7184;
	sub_827F7DF0(ctx, base);
	// lwz r11,13412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// lwz r31,13316(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13316);
loc_827F718C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827f71b4
	if (!ctx.cr6.eq) goto loc_827F71B4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f71b4
	if (ctx.cr6.eq) goto loc_827F71B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827f83e8
	ctx.lr = 0x827F71AC;
	sub_827F83E8(ctx, base);
	// lwz r11,13412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_827F71B4:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r31,r11,-15760
	ctx.r31.s64 = ctx.r11.s64 + -15760;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stw r27,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r27.u32);
	// bl 0x82c09bec
	ctx.lr = 0x827F71CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// bl 0x82208cd8
	ctx.lr = 0x827F71D4;
	sub_82208CD8(ctx, base);
	// lwz r3,392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// bl 0x82208cd0
	ctx.lr = 0x827F71DC;
	sub_82208CD0(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x82c09bdc
	ctx.lr = 0x827F71E4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// bl 0x82208ce0
	ctx.lr = 0x827F71EC;
	sub_82208CE0(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r28,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r28.u32);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r11,13424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13424);
	// lwz r3,13772(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13772);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// bl 0x827a1d10
	ctx.lr = 0x827F7208;
	sub_827A1D10(ctx, base);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r3,13240(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13240);
	// bl 0x827fe620
	ctx.lr = 0x827F7214;
	sub_827FE620(ctx, base);
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r3,13416(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13416);
	// bl 0x82becdf0
	ctx.lr = 0x827F7220;
	sub_82BECDF0(ctx, base);
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r3,13212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13212);
	// bl 0x82b75ef8
	ctx.lr = 0x827F722C;
	sub_82B75EF8(ctx, base);
	// bl 0x82bf0bc8
	ctx.lr = 0x827F7230;
	sub_82BF0BC8(ctx, base);
	// bl 0x82b9d7b0
	ctx.lr = 0x827F7234;
	sub_82B9D7B0(ctx, base);
	// lis r6,-31945
	ctx.r6.s64 = -2093547520;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r6,-17544
	ctx.r3.s64 = ctx.r6.s64 + -17544;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82218a80
	ctx.lr = 0x827F7248;
	sub_82218A80(ctx, base);
	// lis r5,-32051
	ctx.r5.s64 = -2100494336;
	// lis r4,-31942
	ctx.r4.s64 = -2093350912;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lis r3,-31942
	ctx.r3.s64 = -2093350912;
	// stw r11,26196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 26196, ctx.r11.u32);
	// stw r10,12772(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12772, ctx.r10.u32);
	// lwz r31,13592(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13592);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9798
	ctx.lr = 0x827F7270;
	sub_827C9798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8db0
	ctx.lr = 0x827F7278;
	sub_827C8DB0(ctx, base);
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-17552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f72c8
	if (ctx.cr6.eq) goto loc_827F72C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b77f10
	ctx.lr = 0x827F7290;
	sub_82B77F10(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// addi r11,r31,15828
	ctx.r11.s64 = ctx.r31.s64 + 15828;
	// lwz r3,15828(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15828);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8280bf58
	ctx.lr = 0x827F72A4;
	sub_8280BF58(ctx, base);
	// lwz r11,15828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15828);
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827f72c8
	if (ctx.cr6.eq) goto loc_827F72C8;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827f72c8
	if (ctx.cr6.eq) goto loc_827F72C8;
	// lwz r3,13212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13212);
	// bl 0x82b76998
	ctx.lr = 0x827F72C8;
	sub_82B76998(ctx, base);
loc_827F72C8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,13412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r11,-29532
	ctx.r31.s64 = ctx.r11.s64 + -29532;
loc_827F72D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f7308
	if (ctx.cr6.eq) goto loc_827F7308;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// lwz r4,372(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827f7308
	if (ctx.cr6.eq) goto loc_827F7308;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x827b49e0
	ctx.lr = 0x827F7304;
	sub_827B49E0(ctx, base);
	// lwz r3,13412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
loc_827F7308:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x827f72d8
	if (!ctx.cr0.eq) goto loc_827F72D8;
	// bl 0x827eef18
	ctx.lr = 0x827F7318;
	sub_827EEF18(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,13412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13412);
	// bl 0x827f1188
	ctx.lr = 0x827F7324;
	sub_827F1188(ctx, base);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// lbz r9,12106(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12106);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827f7368
	if (ctx.cr6.eq) goto loc_827F7368;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r11,-17440
	ctx.r8.s64 = ctx.r11.s64 + -17440;
loc_827F7340:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f7354
	if (ctx.cr6.eq) goto loc_827F7354;
	// stw r28,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r28.u32);
loc_827F7354:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827f7340
	if (ctx.cr6.lt) goto loc_827F7340;
loc_827F7368:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// bl 0x827e41f8
	ctx.lr = 0x827F7374;
	sub_827E41F8(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,65
	ctx.r3.s64 = 65;
	// lwz r11,12728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12728);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827F7390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r10,13556(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13556);
	// lwz r11,13336(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13336);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,13556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13556, ctx.r10.u32);
	// beq cr6,0x827f73c8
	if (ctx.cr6.eq) goto loc_827F73C8;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13340, ctx.r11.u32);
	// bl 0x82c04a18
	ctx.lr = 0x827F73C0;
	sub_82C04A18(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13340, ctx.r11.u32);
loc_827F73C8:
	// lwz r31,13316(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13316);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f73e4
	if (ctx.cr6.eq) goto loc_827F73E4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827f7f50
	ctx.lr = 0x827F73E0;
	sub_827F7F50(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_827F73E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82218a50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F73EC"))) PPC_WEAK_FUNC(sub_827F73EC);
PPC_FUNC_IMPL(__imp__sub_827F73EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F73F0"))) PPC_WEAK_FUNC(sub_827F73F0);
PPC_FUNC_IMPL(__imp__sub_827F73F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x827F73F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lwz r3,12492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12492);
	// bl 0x82bc8fa8
	ctx.lr = 0x827F7408;
	sub_82BC8FA8(ctx, base);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lwz r11,13356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f7428
	if (ctx.cr6.eq) goto loc_827F7428;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x827f70c0
	ctx.lr = 0x827F7420;
	sub_827F70C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13356, ctx.r11.u32);
loc_827F7428:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f7468
	if (ctx.cr6.eq) goto loc_827F7468;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827f7468
	if (ctx.cr6.eq) goto loc_827F7468;
	// lwz r11,12492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12492);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-30884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30884);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82785230
	ctx.lr = 0x827F7468;
	sub_82785230(ctx, base);
loc_827F7468:
	// bl 0x821200d8
	ctx.lr = 0x827F746C;
	sub_821200D8(ctx, base);
	// bl 0x82bd0170
	ctx.lr = 0x827F7470;
	sub_82BD0170(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x827F7474;
	sub_821201B0(ctx, base);
	// bl 0x82bcd110
	ctx.lr = 0x827F7478;
	sub_82BCD110(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,12704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12704);
	// bl 0x82bbe170
	ctx.lr = 0x827F7484;
	sub_82BBE170(ctx, base);
	// bl 0x821201b0
	ctx.lr = 0x827F7488;
	sub_821201B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827f74ac
	if (ctx.cr6.eq) goto loc_827F74AC;
	// bl 0x821215a0
	ctx.lr = 0x827F749C;
	sub_821215A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827f74ac
	if (ctx.cr6.eq) goto loc_827F74AC;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82bc3e78
	ctx.lr = 0x827F74AC;
	sub_82BC3E78(ctx, base);
loc_827F74AC:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13600(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13600);
	// bl 0x827bf678
	ctx.lr = 0x827F74B8;
	sub_827BF678(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,12492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12492);
	// lfs f1,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lwz r31,12452(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12452);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82bc96e8
	ctx.lr = 0x827F74D0;
	sub_82BC96E8(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827f74e4
	if (ctx.cr6.eq) goto loc_827F74E4;
	// bl 0x82bc9b58
	ctx.lr = 0x827F74E4;
	sub_82BC9B58(ctx, base);
loc_827F74E4:
	// lwz r11,12492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12492);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f74fc
	if (!ctx.cr6.eq) goto loc_827F74FC;
	// lfs f1,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82bf09d0
	ctx.lr = 0x827F74FC;
	sub_82BF09D0(ctx, base);
loc_827F74FC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r9,r11,-2836
	ctx.r9.s64 = ctx.r11.s64 + -2836;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r7,r10,14008
	ctx.r7.s64 = ctx.r10.s64 + 14008;
	// lwz r6,-2836(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2836);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// lwz r11,13332(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13332);
	// stw r6,14008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14008, ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// sth r4,8(r7)
	PPC_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// bne cr6,0x827f7538
	if (!ctx.cr6.eq) goto loc_827F7538;
	// bl 0x82c08218
	ctx.lr = 0x827F7538;
	sub_82C08218(ctx, base);
loc_827F7538:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13772);
	// bl 0x827a3e68
	ctx.lr = 0x827F7544;
	sub_827A3E68(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r3,13980(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13980);
	// bl 0x82786a48
	ctx.lr = 0x827F7550;
	sub_82786A48(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lwz r3,13420(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13420);
	// bl 0x827eeab0
	ctx.lr = 0x827F755C;
	sub_827EEAB0(ctx, base);
	// lwz r11,12492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12492);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lfs f2,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,29744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// lwz r31,13416(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13416);
	// ble cr6,0x827f75ac
	if (!ctx.cr6.gt) goto loc_827F75AC;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lfs f1,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x8277ca38
	ctx.lr = 0x827F758C;
	sub_8277CA38(ctx, base);
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r30,r11,-15760
	ctx.r30.s64 = ctx.r11.s64 + -15760;
	// addi r3,r30,252
	ctx.r3.s64 = ctx.r30.s64 + 252;
	// bl 0x82c09bec
	ctx.lr = 0x827F759C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8277cdd8
	ctx.lr = 0x827F75A4;
	sub_8277CDD8(ctx, base);
	// addi r3,r30,252
	ctx.r3.s64 = ctx.r30.s64 + 252;
	// bl 0x82c09bdc
	ctx.lr = 0x827F75AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_827F75AC:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r30,r11,-19740
	ctx.r30.s64 = ctx.r11.s64 + -19740;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f7654
	if (ctx.cr6.eq) goto loc_827F7654;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,13604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13604);
	// bl 0x827bce88
	ctx.lr = 0x827F75D0;
	sub_827BCE88(ctx, base);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827f7654
	if (ctx.cr6.eq) goto loc_827F7654;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f7654
	if (!ctx.cr6.eq) goto loc_827F7654;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f6f38
	ctx.lr = 0x827F75F4;
	sub_827F6F38(ctx, base);
	// bl 0x82bb9b28
	ctx.lr = 0x827F75F8;
	sub_82BB9B28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827f763c
	if (ctx.cr6.eq) goto loc_827F763C;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,728(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x827f7628
	if (ctx.cr6.gt) goto loc_827F7628;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827f762c
	goto loc_827F762C;
loc_827F7628:
	// lwz r11,720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
loc_827F762C:
	// stw r31,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// bl 0x82bd9520
	ctx.lr = 0x827F763C;
	sub_82BD9520(ctx, base);
loc_827F763C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13416);
	// bl 0x82becf98
	ctx.lr = 0x827F7648;
	sub_82BECF98(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbade0
	ctx.lr = 0x827F7654;
	sub_82BBADE0(ctx, base);
loc_827F7654:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r3,13424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13424);
	// bl 0x827ee0d0
	ctx.lr = 0x827F7660;
	sub_827EE0D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7668"))) PPC_WEAK_FUNC(sub_827F7668);
PPC_FUNC_IMPL(__imp__sub_827F7668) {
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
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// addi r31,r11,-17552
	ctx.r31.s64 = ctx.r11.s64 + -17552;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x827f76e4
	if (ctx.cr6.eq) goto loc_827F76E4;
	// cmpwi cr6,r11,254
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 254, ctx.xer);
	// beq cr6,0x827f76b8
	if (ctx.cr6.eq) goto loc_827F76B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b77f10
	ctx.lr = 0x827F76A8;
	sub_82B77F10(ctx, base);
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r3,13412(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13412);
	// bl 0x827f1188
	ctx.lr = 0x827F76B4;
	sub_827F1188(ctx, base);
	// b 0x827f76dc
	goto loc_827F76DC;
loc_827F76B8:
	// bl 0x82b77ca8
	ctx.lr = 0x827F76BC;
	sub_82B77CA8(ctx, base);
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12480);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827f76d4
	if (!ctx.cr6.eq) goto loc_827F76D4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_827F76D4:
	// lwz r3,292(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// bl 0x827f6d48
	ctx.lr = 0x827F76DC;
	sub_827F6D48(ctx, base);
loc_827F76DC:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_827F76E4:
	// lwz r3,13412(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13412);
	// bl 0x827f0010
	ctx.lr = 0x827F76EC;
	sub_827F0010(ctx, base);
	// bl 0x82bd06a8
	ctx.lr = 0x827F76F0;
	sub_82BD06A8(ctx, base);
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

__attribute__((alias("__imp__sub_827F7708"))) PPC_WEAK_FUNC(sub_827F7708);
PPC_FUNC_IMPL(__imp__sub_827F7708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F7710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// stw r11,13336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13336, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,13328(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13328, ctx.r9.u32);
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// stw r10,13324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13324, ctx.r10.u32);
	// stw r11,13332(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13332, ctx.r11.u32);
	// lwz r3,12492(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12492);
	// bl 0x82bc8dc8
	ctx.lr = 0x827F7750;
	sub_82BC8DC8(ctx, base);
	// lwz r11,12492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12492);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r28,168(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x82bbcba0
	ctx.lr = 0x827F7764;
	sub_82BBCBA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82bbc960
	ctx.lr = 0x827F7770;
	sub_82BBC960(ctx, base);
	// lwz r11,12492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12492);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,168(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x82bbcba0
	ctx.lr = 0x827F7784;
	sub_82BBCBA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82bbc960
	ctx.lr = 0x827F7790;
	sub_82BBC960(ctx, base);
loc_827F7790:
	// lwz r11,13324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827f77a8
	if (!ctx.cr6.eq) goto loc_827F77A8;
	// bl 0x827f7668
	ctx.lr = 0x827F77A0;
	sub_827F7668(ctx, base);
	// bl 0x827f73f0
	ctx.lr = 0x827F77A4;
	sub_827F73F0(ctx, base);
	// b 0x827f7790
	goto loc_827F7790;
loc_827F77A8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r3,13604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13604);
	// bl 0x827bd008
	ctx.lr = 0x827F77C8;
	sub_827BD008(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13336, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F77D8"))) PPC_WEAK_FUNC(sub_827F77D8);
PPC_FUNC_IMPL(__imp__sub_827F77D8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82208d20
	ctx.lr = 0x827F77EC;
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

__attribute__((alias("__imp__sub_827F7808"))) PPC_WEAK_FUNC(sub_827F7808);
PPC_FUNC_IMPL(__imp__sub_827F7808) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82208ce0
	sub_82208CE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7810"))) PPC_WEAK_FUNC(sub_827F7810);
PPC_FUNC_IMPL(__imp__sub_827F7810) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82208cd0
	sub_82208CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7818"))) PPC_WEAK_FUNC(sub_827F7818);
PPC_FUNC_IMPL(__imp__sub_827F7818) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82208cd8
	sub_82208CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F7820"))) PPC_WEAK_FUNC(sub_827F7820);
PPC_FUNC_IMPL(__imp__sub_827F7820) {
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
	ctx.lr = 0x827F7838;
	sub_8222DC78(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
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

__attribute__((alias("__imp__sub_827F785C"))) PPC_WEAK_FUNC(sub_827F785C);
PPC_FUNC_IMPL(__imp__sub_827F785C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F7860"))) PPC_WEAK_FUNC(sub_827F7860);
PPC_FUNC_IMPL(__imp__sub_827F7860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x827F7868;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r30,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,127
	ctx.r6.s64 = 127;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r11,396
	ctx.r3.s64 = ctx.r11.s64 + 396;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82218ce0
	ctx.lr = 0x827F7898;
	sub_82218CE0(ctx, base);
	// addi r11,r30,259
	ctx.r11.s64 = ctx.r30.s64 + 259;
	// addi r10,r30,264
	ctx.r10.s64 = ctx.r30.s64 + 264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r29.u32);
	// stwx r28,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F78B8"))) PPC_WEAK_FUNC(sub_827F78B8);
PPC_FUNC_IMPL(__imp__sub_827F78B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1124, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F78C0"))) PPC_WEAK_FUNC(sub_827F78C0);
PPC_FUNC_IMPL(__imp__sub_827F78C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1108);
	// addi r11,r11,270
	ctx.r11.s64 = ctx.r11.s64 + 270;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827F78E0"))) PPC_WEAK_FUNC(sub_827F78E0);
PPC_FUNC_IMPL(__imp__sub_827F78E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// b 0x82208cd0
	sub_82208CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827F78F4"))) PPC_WEAK_FUNC(sub_827F78F4);
PPC_FUNC_IMPL(__imp__sub_827F78F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827F78F8"))) PPC_WEAK_FUNC(sub_827F78F8);
PPC_FUNC_IMPL(__imp__sub_827F78F8) {
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
	// lwz r11,13316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827f7928
	if (!ctx.cr6.eq) goto loc_827F7928;
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
loc_827F7928:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82208d20
	ctx.lr = 0x827F7930;
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

