#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82820ED0"))) PPC_WEAK_FUNC(sub_82820ED0);
PPC_FUNC_IMPL(__imp__sub_82820ED0) {
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

__attribute__((alias("__imp__sub_82820EF4"))) PPC_WEAK_FUNC(sub_82820EF4);
PPC_FUNC_IMPL(__imp__sub_82820EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820EF8"))) PPC_WEAK_FUNC(sub_82820EF8);
PPC_FUNC_IMPL(__imp__sub_82820EF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
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

__attribute__((alias("__imp__sub_82820F1C"))) PPC_WEAK_FUNC(sub_82820F1C);
PPC_FUNC_IMPL(__imp__sub_82820F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820F20"))) PPC_WEAK_FUNC(sub_82820F20);
PPC_FUNC_IMPL(__imp__sub_82820F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,684(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 684);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820F38"))) PPC_WEAK_FUNC(sub_82820F38);
PPC_FUNC_IMPL(__imp__sub_82820F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
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
	// lwz r11,620(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 620);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82820f80
	if (ctx.cr6.eq) goto loc_82820F80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82820f78
	if (ctx.cr6.eq) goto loc_82820F78;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82820f84
	if (!ctx.cr6.eq) goto loc_82820F84;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82820f84
	goto loc_82820F84;
loc_82820F78:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82820f84
	goto loc_82820F84;
loc_82820F80:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82820F84:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82820fb0
	if (ctx.cr6.eq) goto loc_82820FB0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82820fac
	if (ctx.cr6.eq) goto loc_82820FAC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82820fa4
	if (ctx.cr6.eq) goto loc_82820FA4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82820fb0
	goto loc_82820FB0;
loc_82820FA4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82820fb0
	goto loc_82820FB0;
loc_82820FAC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82820FB0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 620, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820FC4"))) PPC_WEAK_FUNC(sub_82820FC4);
PPC_FUNC_IMPL(__imp__sub_82820FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82820FC8"))) PPC_WEAK_FUNC(sub_82820FC8);
PPC_FUNC_IMPL(__imp__sub_82820FC8) {
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
	// lis r3,-31942
	ctx.r3.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,13412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13412);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x827c06b8
	ctx.lr = 0x82820FEC;
	sub_827C06B8(ctx, base);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821000"))) PPC_WEAK_FUNC(sub_82821000);
PPC_FUNC_IMPL(__imp__sub_82821000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82821008;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,13180(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13180);
	// lwz r26,13192(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r25,13188(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13188);
	// lwz r24,13184(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// blt cr6,0x8282105c
	if (ctx.cr6.lt) goto loc_8282105C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bgt cr6,0x8282105c
	if (ctx.cr6.gt) goto loc_8282105C;
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82806990
	ctx.lr = 0x8282105C;
	sub_82806990(ctx, base);
loc_8282105C:
	// stw r26,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r26.u32);
	// stw r27,13180(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13180, ctx.r27.u32);
	// stw r24,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r24.u32);
	// stw r25,13188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821074"))) PPC_WEAK_FUNC(sub_82821074);
PPC_FUNC_IMPL(__imp__sub_82821074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821078"))) PPC_WEAK_FUNC(sub_82821078);
PPC_FUNC_IMPL(__imp__sub_82821078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x828210b4
	if (ctx.cr6.eq) goto loc_828210B4;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828210a4
	if (ctx.cr6.eq) goto loc_828210A4;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x828210bc
	if (!ctx.cr6.eq) goto loc_828210BC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x828210bc
	goto loc_828210BC;
loc_828210A4:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828210bc
	goto loc_828210BC;
loc_828210B4:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r5,-29532(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_828210BC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828210CC"))) PPC_WEAK_FUNC(sub_828210CC);
PPC_FUNC_IMPL(__imp__sub_828210CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828210D0"))) PPC_WEAK_FUNC(sub_828210D0);
PPC_FUNC_IMPL(__imp__sub_828210D0) {
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

__attribute__((alias("__imp__sub_828210E8"))) PPC_WEAK_FUNC(sub_828210E8);
PPC_FUNC_IMPL(__imp__sub_828210E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,728(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 728);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82821148
	if (ctx.cr6.eq) goto loc_82821148;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82821128
	if (ctx.cr6.eq) goto loc_82821128;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82821150
	if (!ctx.cr6.eq) goto loc_82821150;
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
loc_82821128:
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
loc_82821148:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82821150:
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

__attribute__((alias("__imp__sub_82821164"))) PPC_WEAK_FUNC(sub_82821164);
PPC_FUNC_IMPL(__imp__sub_82821164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821168"))) PPC_WEAK_FUNC(sub_82821168);
PPC_FUNC_IMPL(__imp__sub_82821168) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 728);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821180"))) PPC_WEAK_FUNC(sub_82821180);
PPC_FUNC_IMPL(__imp__sub_82821180) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,620(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 620);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828211c4
	if (ctx.cr6.eq) goto loc_828211C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828211b4
	if (ctx.cr6.eq) goto loc_828211B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828211cc
	if (!ctx.cr6.eq) goto loc_828211CC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828211cc
	goto loc_828211CC;
loc_828211B4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x828211cc
	goto loc_828211CC;
loc_828211C4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828211CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828211e0
	if (ctx.cr6.eq) goto loc_828211E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828211E0:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828211E8"))) PPC_WEAK_FUNC(sub_828211E8);
PPC_FUNC_IMPL(__imp__sub_828211E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,596(r9)
	PPC_STORE_U32(ctx.r9.u32 + 596, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828211FC"))) PPC_WEAK_FUNC(sub_828211FC);
PPC_FUNC_IMPL(__imp__sub_828211FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821200"))) PPC_WEAK_FUNC(sub_82821200);
PPC_FUNC_IMPL(__imp__sub_82821200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 140, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821214"))) PPC_WEAK_FUNC(sub_82821214);
PPC_FUNC_IMPL(__imp__sub_82821214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821218"))) PPC_WEAK_FUNC(sub_82821218);
PPC_FUNC_IMPL(__imp__sub_82821218) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82821264
	if (ctx.cr6.eq) goto loc_82821264;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82821254
	if (ctx.cr6.eq) goto loc_82821254;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8282126c
	if (!ctx.cr6.eq) goto loc_8282126C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8282126c
	goto loc_8282126C;
loc_82821254:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8282126c
	goto loc_8282126C;
loc_82821264:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r5,-29532(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8282126C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82804410
	ctx.lr = 0x82821278;
	sub_82804410(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// addi r11,r11,-4472
	ctx.r11.s64 = ctx.r11.s64 + -4472;
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x828212a4
	if (ctx.cr6.gt) goto loc_828212A4;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x828212a8
	if (!ctx.cr6.gt) goto loc_828212A8;
loc_828212A4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828212A8:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828212c8
	if (!ctx.cr6.gt) goto loc_828212C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x828212cc
	goto loc_828212CC;
loc_828212C8:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_828212CC:
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

__attribute__((alias("__imp__sub_828212E4"))) PPC_WEAK_FUNC(sub_828212E4);
PPC_FUNC_IMPL(__imp__sub_828212E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828212E8"))) PPC_WEAK_FUNC(sub_828212E8);
PPC_FUNC_IMPL(__imp__sub_828212E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821300"))) PPC_WEAK_FUNC(sub_82821300);
PPC_FUNC_IMPL(__imp__sub_82821300) {
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
	// lis r3,-31942
	ctx.r3.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r11,13412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13412);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x827c06b8
	ctx.lr = 0x82821324;
	sub_827C06B8(ctx, base);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821338"))) PPC_WEAK_FUNC(sub_82821338);
PPC_FUNC_IMPL(__imp__sub_82821338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,688(r9)
	PPC_STORE_U32(ctx.r9.u32 + 688, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282134C"))) PPC_WEAK_FUNC(sub_8282134C);
PPC_FUNC_IMPL(__imp__sub_8282134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821350"))) PPC_WEAK_FUNC(sub_82821350);
PPC_FUNC_IMPL(__imp__sub_82821350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8282138c
	if (ctx.cr6.eq) goto loc_8282138C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8282137c
	if (ctx.cr6.eq) goto loc_8282137C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82821394
	if (!ctx.cr6.eq) goto loc_82821394;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82821394
	goto loc_82821394;
loc_8282137C:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// addi r9,r10,-29532
	ctx.r9.s64 = ctx.r10.s64 + -29532;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82821394
	goto loc_82821394;
loc_8282138C:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r5,-29532(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
loc_82821394:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828213A4"))) PPC_WEAK_FUNC(sub_828213A4);
PPC_FUNC_IMPL(__imp__sub_828213A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828213A8"))) PPC_WEAK_FUNC(sub_828213A8);
PPC_FUNC_IMPL(__imp__sub_828213A8) {
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

__attribute__((alias("__imp__sub_828213C0"))) PPC_WEAK_FUNC(sub_828213C0);
PPC_FUNC_IMPL(__imp__sub_828213C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r11,732(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 732);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82821404
	if (ctx.cr6.eq) goto loc_82821404;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828213f4
	if (ctx.cr6.eq) goto loc_828213F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282140c
	if (!ctx.cr6.eq) goto loc_8282140C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282140c
	goto loc_8282140C;
loc_828213F4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8282140c
	goto loc_8282140C;
loc_82821404:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_8282140C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82821420
	if (ctx.cr6.eq) goto loc_82821420;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82821420:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821428"))) PPC_WEAK_FUNC(sub_82821428);
PPC_FUNC_IMPL(__imp__sub_82821428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,504(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 504);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821440"))) PPC_WEAK_FUNC(sub_82821440);
PPC_FUNC_IMPL(__imp__sub_82821440) {
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

__attribute__((alias("__imp__sub_82821458"))) PPC_WEAK_FUNC(sub_82821458);
PPC_FUNC_IMPL(__imp__sub_82821458) {
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
	// lis r3,-31942
	ctx.r3.s64 = -2093350912;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,13412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13412);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x827c06b8
	ctx.lr = 0x8282147C;
	sub_827C06B8(ctx, base);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821490"))) PPC_WEAK_FUNC(sub_82821490);
PPC_FUNC_IMPL(__imp__sub_82821490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,684(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 684);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828214f0
	if (ctx.cr6.eq) goto loc_828214F0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828214d0
	if (ctx.cr6.eq) goto loc_828214D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828214f8
	if (!ctx.cr6.eq) goto loc_828214F8;
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
loc_828214D0:
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
loc_828214F0:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828214F8:
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

__attribute__((alias("__imp__sub_8282150C"))) PPC_WEAK_FUNC(sub_8282150C);
PPC_FUNC_IMPL(__imp__sub_8282150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821510"))) PPC_WEAK_FUNC(sub_82821510);
PPC_FUNC_IMPL(__imp__sub_82821510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x82821518;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r31,-31942
	ctx.r31.s64 = -2093350912;
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,13180(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13180);
	// lwz r26,13192(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13192);
	// lwz r25,13188(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13188);
	// lwz r24,13184(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13184);
	// stw r3,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r11.u32);
	// beq cr6,0x828215fc
	if (ctx.cr6.eq) goto loc_828215FC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x828215fc
	if (ctx.cr6.eq) goto loc_828215FC;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x828215fc
	if (ctx.cr6.eq) goto loc_828215FC;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x828215b0
	if (ctx.cr6.eq) goto loc_828215B0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828215b0
	if (ctx.cr6.eq) goto loc_828215B0;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// beq cr6,0x828215b0
	if (ctx.cr6.eq) goto loc_828215B0;
	// bl 0x827fffe8
	ctx.lr = 0x82821588;
	sub_827FFFE8(ctx, base);
	// lis r10,-32051
	ctx.r10.s64 = -2100494336;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,26200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26200, ctx.r11.u32);
	// lfs f0,-29864(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29864);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,12492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// stw r7,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// b 0x82821658
	goto loc_82821658;
loc_828215B0:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828215dc
	if (ctx.cr6.eq) goto loc_828215DC;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828215dc
	if (ctx.cr6.eq) goto loc_828215DC;
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,45
	ctx.r3.s64 = 45;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828215DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828215DC:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-29864(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29864);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// b 0x82821648
	goto loc_82821648;
loc_828215FC:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,12728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82821628
	if (ctx.cr6.eq) goto loc_82821628;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82821628
	if (ctx.cr6.eq) goto loc_82821628;
	// li r4,60
	ctx.r4.s64 = 60;
	// li r3,45
	ctx.r3.s64 = 45;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82821628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82821628:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f0,-30736(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30736);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
loc_82821648:
	// lis r6,-32051
	ctx.r6.s64 = -2100494336;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// stw r9,26200(r6)
	PPC_STORE_U32(ctx.r6.u32 + 26200, ctx.r9.u32);
	// stw r10,13220(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13220, ctx.r10.u32);
loc_82821658:
	// stfs f0,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stw r26,13192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13192, ctx.r26.u32);
	// stw r27,13180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13180, ctx.r27.u32);
	// stw r24,13184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13184, ctx.r24.u32);
	// stw r25,13188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13188, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821674"))) PPC_WEAK_FUNC(sub_82821674);
PPC_FUNC_IMPL(__imp__sub_82821674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821678"))) PPC_WEAK_FUNC(sub_82821678);
PPC_FUNC_IMPL(__imp__sub_82821678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,736(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 736);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821690"))) PPC_WEAK_FUNC(sub_82821690);
PPC_FUNC_IMPL(__imp__sub_82821690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,736(r9)
	PPC_STORE_U32(ctx.r9.u32 + 736, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828216A4"))) PPC_WEAK_FUNC(sub_828216A4);
PPC_FUNC_IMPL(__imp__sub_828216A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828216A8"))) PPC_WEAK_FUNC(sub_828216A8);
PPC_FUNC_IMPL(__imp__sub_828216A8) {
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

__attribute__((alias("__imp__sub_828216C0"))) PPC_WEAK_FUNC(sub_828216C0);
PPC_FUNC_IMPL(__imp__sub_828216C0) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x828216e4
	if (ctx.cr6.lt) goto loc_828216E4;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// ble cr6,0x82821700
	if (!ctx.cr6.gt) goto loc_82821700;
loc_828216E4:
	// li r11,0
	ctx.r11.s64 = 0;
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
loc_82821700:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x827c06b8
	ctx.lr = 0x82821714;
	sub_827C06B8(ctx, base);
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

__attribute__((alias("__imp__sub_8282172C"))) PPC_WEAK_FUNC(sub_8282172C);
PPC_FUNC_IMPL(__imp__sub_8282172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821730"))) PPC_WEAK_FUNC(sub_82821730);
PPC_FUNC_IMPL(__imp__sub_82821730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
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
	// lwz r11,732(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 732);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82821778
	if (ctx.cr6.eq) goto loc_82821778;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82821770
	if (ctx.cr6.eq) goto loc_82821770;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282177c
	if (!ctx.cr6.eq) goto loc_8282177C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282177c
	goto loc_8282177C;
loc_82821770:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8282177c
	goto loc_8282177C;
loc_82821778:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8282177C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x828217a8
	if (ctx.cr6.eq) goto loc_828217A8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828217a4
	if (ctx.cr6.eq) goto loc_828217A4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8282179c
	if (ctx.cr6.eq) goto loc_8282179C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x828217a8
	goto loc_828217A8;
loc_8282179C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828217a8
	goto loc_828217A8;
loc_828217A4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828217A8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,732(r8)
	PPC_STORE_U32(ctx.r8.u32 + 732, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828217BC"))) PPC_WEAK_FUNC(sub_828217BC);
PPC_FUNC_IMPL(__imp__sub_828217BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828217C0"))) PPC_WEAK_FUNC(sub_828217C0);
PPC_FUNC_IMPL(__imp__sub_828217C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828217C8;
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
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r31,13180(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// lwz r30,13192(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r29,13188(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r28,13184(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r11.u32);
	// stw r11,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r11.u32);
	// stw r10,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r10.u32);
	// stw r10,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r10.u32);
	// bl 0x82806990
	ctx.lr = 0x82821810;
	sub_82806990(ctx, base);
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

__attribute__((alias("__imp__sub_82821828"))) PPC_WEAK_FUNC(sub_82821828);
PPC_FUNC_IMPL(__imp__sub_82821828) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821840"))) PPC_WEAK_FUNC(sub_82821840);
PPC_FUNC_IMPL(__imp__sub_82821840) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lis r7,-31942
	ctx.r7.s64 = -2093350912;
	// lwz r11,13412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13412);
	// lwz r4,13180(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13180);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,13188(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x828218ac
	if (ctx.cr6.eq) goto loc_828218AC;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x828218a4
	if (ctx.cr6.eq) goto loc_828218A4;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8282189c
	if (ctx.cr6.eq) goto loc_8282189C;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x828218b0
	goto loc_828218B0;
loc_8282189C:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x828218b0
	goto loc_828218B0;
loc_828218A4:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// b 0x828218b0
	goto loc_828218B0;
loc_828218AC:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_828218B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828218dc
	if (ctx.cr6.eq) goto loc_828218DC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828218d4
	if (ctx.cr6.eq) goto loc_828218D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828218e0
	if (!ctx.cr6.eq) goto loc_828218E0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828218e0
	goto loc_828218E0;
loc_828218D4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x828218e0
	goto loc_828218E0;
loc_828218DC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_828218E0:
	// lis r30,-31942
	ctx.r30.s64 = -2093350912;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,13168(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13168);
	// bne cr6,0x82821918
	if (!ctx.cr6.eq) goto loc_82821918;
	// addi r11,r8,6
	ctx.r11.s64 = ctx.r8.s64 + 6;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u32);
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82821918:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x82821948
	if (ctx.cr6.eq) goto loc_82821948;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82821940
	if (ctx.cr6.eq) goto loc_82821940;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82821938
	if (ctx.cr6.eq) goto loc_82821938;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8282194c
	goto loc_8282194C;
loc_82821938:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x8282194c
	goto loc_8282194C;
loc_82821940:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x8282194c
	goto loc_8282194C;
loc_82821948:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8282194C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82821978
	if (ctx.cr6.eq) goto loc_82821978;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82821970
	if (ctx.cr6.eq) goto loc_82821970;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282197c
	if (!ctx.cr6.eq) goto loc_8282197C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282197c
	goto loc_8282197C;
loc_82821970:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x8282197c
	goto loc_8282197C;
loc_82821978:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8282197C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bne cr6,0x828219a4
	if (!ctx.cr6.eq) goto loc_828219A4;
	// addi r11,r8,6
	ctx.r11.s64 = ctx.r8.s64 + 6;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// stwx r9,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r9.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_828219A4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828219B0"))) PPC_WEAK_FUNC(sub_828219B0);
PPC_FUNC_IMPL(__imp__sub_828219B0) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,5
	ctx.r30.s64 = 5;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r6,r11,-29532
	ctx.r6.s64 = ctx.r11.s64 + -29532;
	// lwz r9,-29532(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_828219EC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82821a20
	if (ctx.cr6.eq) goto loc_82821A20;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82821a18
	if (ctx.cr6.eq) goto loc_82821A18;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82821a10
	if (ctx.cr6.eq) goto loc_82821A10;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82821a24
	goto loc_82821A24;
loc_82821A10:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82821a24
	goto loc_82821A24;
loc_82821A18:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82821a24
	goto loc_82821A24;
loc_82821A20:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82821A24:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82821a64
	if (ctx.cr6.eq) goto loc_82821A64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82821a54
	if (ctx.cr6.eq) goto loc_82821A54;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82821a58
	if (ctx.cr6.eq) goto loc_82821A58;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82821a4c
	if (ctx.cr6.eq) goto loc_82821A4C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82821a58
	goto loc_82821A58;
loc_82821A4C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x82821a58
	goto loc_82821A58;
loc_82821A54:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82821A58:
	// bl 0x82803550
	ctx.lr = 0x82821A5C;
	sub_82803550(ctx, base);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_82821A64:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x828219ec
	if (!ctx.cr0.eq) goto loc_828219EC;
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

__attribute__((alias("__imp__sub_82821A88"))) PPC_WEAK_FUNC(sub_82821A88);
PPC_FUNC_IMPL(__imp__sub_82821A88) {
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

__attribute__((alias("__imp__sub_82821AA0"))) PPC_WEAK_FUNC(sub_82821AA0);
PPC_FUNC_IMPL(__imp__sub_82821AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82821ac0
	if (!ctx.cr6.eq) goto loc_82821AC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82821AC0:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821AC8"))) PPC_WEAK_FUNC(sub_82821AC8);
PPC_FUNC_IMPL(__imp__sub_82821AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x82821AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,48(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f13,200(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82821bec
	if (!ctx.cr6.gt) goto loc_82821BEC;
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82821bec
	if (ctx.cr6.gt) goto loc_82821BEC;
	// lfs f13,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82821bec
	if (!ctx.cr6.gt) goto loc_82821BEC;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,328(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r31,-29532(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x82821b58
	if (ctx.cr6.eq) goto loc_82821B58;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82821b50
	if (ctx.cr6.eq) goto loc_82821B50;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82821b48
	if (ctx.cr6.eq) goto loc_82821B48;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82821b5c
	goto loc_82821B5C;
loc_82821B48:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82821b5c
	goto loc_82821B5C;
loc_82821B50:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82821b5c
	goto loc_82821B5C;
loc_82821B58:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82821B5C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82821bec
	if (ctx.cr6.eq) goto loc_82821BEC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82821b8c
	if (ctx.cr6.eq) goto loc_82821B8C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82821b84
	if (ctx.cr6.eq) goto loc_82821B84;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82821b90
	if (!ctx.cr6.eq) goto loc_82821B90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82821b90
	goto loc_82821B90;
loc_82821B84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82821b90
	goto loc_82821B90;
loc_82821B8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82821B90:
	// lwz r11,380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82beb878
	ctx.lr = 0x82821B9C;
	sub_82BEB878(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82821bc4
	if (ctx.cr6.eq) goto loc_82821BC4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82821bbc
	if (ctx.cr6.eq) goto loc_82821BBC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82821bc8
	if (!ctx.cr6.eq) goto loc_82821BC8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82821bc8
	goto loc_82821BC8;
loc_82821BBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82821bc8
	goto loc_82821BC8;
loc_82821BC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82821BC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82821bec
	if (ctx.cr6.eq) goto loc_82821BEC;
	// lfs f13,204(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82821bec
	if (ctx.cr6.lt) goto loc_82821BEC;
	// lfs f13,228(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82821bf0
	if (!ctx.cr6.lt) goto loc_82821BF0;
loc_82821BEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82821BF0:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821BFC"))) PPC_WEAK_FUNC(sub_82821BFC);
PPC_FUNC_IMPL(__imp__sub_82821BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821C00"))) PPC_WEAK_FUNC(sub_82821C00);
PPC_FUNC_IMPL(__imp__sub_82821C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a08
	ctx.lr = 0x82821C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bl 0x82821ac8
	ctx.lr = 0x82821C2C;
	sub_82821AC8(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82821cf8
	if (ctx.cr6.eq) goto loc_82821CF8;
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82821cf8
	if (!ctx.cr6.eq) goto loc_82821CF8;
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r10,-29532
	ctx.r8.s64 = ctx.r10.s64 + -29532;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r7,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r7.u32);
	// lfs f0,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lwz r30,-29532(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29532);
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x82821c94
	if (ctx.cr6.eq) goto loc_82821C94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82821c8c
	if (ctx.cr6.eq) goto loc_82821C8C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82821c98
	if (!ctx.cr6.eq) goto loc_82821C98;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82821c98
	goto loc_82821C98;
loc_82821C8C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82821c98
	goto loc_82821C98;
loc_82821C94:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82821C98:
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82beb878
	ctx.lr = 0x82821CA8;
	sub_82BEB878(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82821cd4
	if (ctx.cr6.eq) goto loc_82821CD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82821ccc
	if (ctx.cr6.eq) goto loc_82821CCC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82821cd8
	if (!ctx.cr6.eq) goto loc_82821CD8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82821cd8
	goto loc_82821CD8;
loc_82821CCC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82821cd8
	goto loc_82821CD8;
loc_82821CD4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82821CD8:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f13,280(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f12,284(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_82821CF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821D00"))) PPC_WEAK_FUNC(sub_82821D00);
PPC_FUNC_IMPL(__imp__sub_82821D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r9,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lfs f0,29744(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f0,296(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 296, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f0,332(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 332, temp.u32);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f0,364(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821D54"))) PPC_WEAK_FUNC(sub_82821D54);
PPC_FUNC_IMPL(__imp__sub_82821D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821D58"))) PPC_WEAK_FUNC(sub_82821D58);
PPC_FUNC_IMPL(__imp__sub_82821D58) {
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
	// beq cr6,0x82821db4
	if (ctx.cr6.eq) goto loc_82821DB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82821dac
	if (ctx.cr6.eq) goto loc_82821DAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82821db8
	if (!ctx.cr6.eq) goto loc_82821DB8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82821db8
	goto loc_82821DB8;
loc_82821DAC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82821db8
	goto loc_82821DB8;
loc_82821DB4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82821DB8:
	// lwz r10,328(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 328);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82821de4
	if (ctx.cr6.eq) goto loc_82821DE4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82821ddc
	if (ctx.cr6.eq) goto loc_82821DDC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82821de8
	if (!ctx.cr6.eq) goto loc_82821DE8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82821de8
	goto loc_82821DE8;
loc_82821DDC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82821de8
	goto loc_82821DE8;
loc_82821DE4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82821DE8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,328(r6)
	PPC_STORE_U32(ctx.r6.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821E00"))) PPC_WEAK_FUNC(sub_82821E00);
PPC_FUNC_IMPL(__imp__sub_82821E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821E04"))) PPC_WEAK_FUNC(sub_82821E04);
PPC_FUNC_IMPL(__imp__sub_82821E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82821E08"))) PPC_WEAK_FUNC(sub_82821E08);
PPC_FUNC_IMPL(__imp__sub_82821E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x82821fa4
	if (ctx.cr6.eq) goto loc_82821FA4;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x82821f58
	if (ctx.cr6.eq) goto loc_82821F58;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82821f0c
	if (ctx.cr6.eq) goto loc_82821F0C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x82821f0c
	if (ctx.cr6.eq) goto loc_82821F0C;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// beq cr6,0x82821f0c
	if (ctx.cr6.eq) goto loc_82821F0C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82821f0c
	if (ctx.cr6.eq) goto loc_82821F0C;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x82821f0c
	if (ctx.cr6.eq) goto loc_82821F0C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82821f0c
	if (ctx.cr6.eq) goto loc_82821F0C;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x82821ebc
	if (ctx.cr6.eq) goto loc_82821EBC;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x82821ebc
	if (ctx.cr6.eq) goto loc_82821EBC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,-4476
	ctx.r8.s64 = ctx.r10.s64 + -4476;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lfs f13,-29784(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29784);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-29788(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29788);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-30820(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,-30276(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -30276);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,392(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 392, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,104(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f9,208(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stfs f10,140(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// blr 
	return;
loc_82821EBC:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,-4476
	ctx.r8.s64 = ctx.r10.s64 + -4476;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lfs f13,-30388(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30388);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,18436(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18436);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-30820(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,-30276(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -30276);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,392(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 392, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,104(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f9,208(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stfs f10,140(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// blr 
	return;
loc_82821F0C:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,-4476
	ctx.r8.s64 = ctx.r10.s64 + -4476;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfs f13,-4476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4476);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-29784(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29784);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-30820(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-30276(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30276);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,392(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 392, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,104(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f9,208(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stfs f10,140(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// blr 
	return;
loc_82821F58:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,-4476
	ctx.r8.s64 = ctx.r10.s64 + -4476;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfs f12,-4476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4476);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-30392(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30392);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-30820(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-30276(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30276);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,392(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 392, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,104(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f9,208(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stfs f10,140(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// blr 
	return;
loc_82821FA4:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,-4476
	ctx.r8.s64 = ctx.r10.s64 + -4476;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lfs f0,-4476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29784(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29784);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-29792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29792);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-30820(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -30820);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,-30276(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -30276);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,392(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 392, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,104(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f11,144(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f9,100(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f8,208(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// stfs f10,140(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821FF8"))) PPC_WEAK_FUNC(sub_82821FF8);
PPC_FUNC_IMPL(__imp__sub_82821FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-29780(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29780);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30932(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30932);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,29744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stfs f0,120(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 120, temp.u32);
	// stw r7,1948(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1948, ctx.r7.u32);
	// stfs f13,272(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 272, temp.u32);
	// stfs f12,276(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 276, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822034"))) PPC_WEAK_FUNC(sub_82822034);
PPC_FUNC_IMPL(__imp__sub_82822034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822038"))) PPC_WEAK_FUNC(sub_82822038);
PPC_FUNC_IMPL(__imp__sub_82822038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282203C"))) PPC_WEAK_FUNC(sub_8282203C);
PPC_FUNC_IMPL(__imp__sub_8282203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822040"))) PPC_WEAK_FUNC(sub_82822040);
PPC_FUNC_IMPL(__imp__sub_82822040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,312(r8)
	PPC_STORE_U32(ctx.r8.u32 + 312, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822058"))) PPC_WEAK_FUNC(sub_82822058);
PPC_FUNC_IMPL(__imp__sub_82822058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-29780(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29780);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30932(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30932);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,29744(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stfs f0,120(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 120, temp.u32);
	// stw r7,1948(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1948, ctx.r7.u32);
	// stfs f13,272(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 272, temp.u32);
	// stfs f12,276(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 276, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822094"))) PPC_WEAK_FUNC(sub_82822094);
PPC_FUNC_IMPL(__imp__sub_82822094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822098"))) PPC_WEAK_FUNC(sub_82822098);
PPC_FUNC_IMPL(__imp__sub_82822098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-4476(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30252);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// stfs f0,440(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 440, temp.u32);
	// stw r8,444(r6)
	PPC_STORE_U32(ctx.r6.u32 + 444, ctx.r8.u32);
	// stfs f13,1532(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 1532, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828220C8"))) PPC_WEAK_FUNC(sub_828220C8);
PPC_FUNC_IMPL(__imp__sub_828220C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f10,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f8,-16(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f6,-12(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f11,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,-8(r1)
	temp.f32 = float(ctx.f9.f64);
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

__attribute__((alias("__imp__sub_82822120"))) PPC_WEAK_FUNC(sub_82822120);
PPC_FUNC_IMPL(__imp__sub_82822120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,368(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 368);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822138"))) PPC_WEAK_FUNC(sub_82822138);
PPC_FUNC_IMPL(__imp__sub_82822138) {
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

__attribute__((alias("__imp__sub_8282214C"))) PPC_WEAK_FUNC(sub_8282214C);
PPC_FUNC_IMPL(__imp__sub_8282214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822150"))) PPC_WEAK_FUNC(sub_82822150);
PPC_FUNC_IMPL(__imp__sub_82822150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8282220c
	if (ctx.cr6.eq) goto loc_8282220C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x828221fc
	if (ctx.cr6.eq) goto loc_828221FC;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x828221e0
	if (ctx.cr6.eq) goto loc_828221E0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x828221ac
	if (ctx.cr6.eq) goto loc_828221AC;
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
loc_828221AC:
	// lfs f13,1708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1708);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1704);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lfs f0,1700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// blr 
	return;
loc_828221E0:
	// lfs f0,2544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2544);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2540);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// b 0x82822224
	goto loc_82822224;
loc_828221FC:
	// lfs f0,2816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2816);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2824);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82822218
	goto loc_82822218;
loc_8282220C:
	// lfs f0,1468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1476);
	ctx.f12.f64 = double(temp.f32);
loc_82822218:
	// stfs f12,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
loc_82822224:
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822240"))) PPC_WEAK_FUNC(sub_82822240);
PPC_FUNC_IMPL(__imp__sub_82822240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x8282240c
	if (ctx.cr6.eq) goto loc_8282240C;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82822380
	if (ctx.cr6.eq) goto loc_82822380;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82822328
	if (ctx.cr6.eq) goto loc_82822328;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x8282229c
	if (ctx.cr6.eq) goto loc_8282229C;
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
loc_8282229C:
	// lwz r9,1900(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1900);
	// addi r10,r11,1892
	ctx.r10.s64 = ctx.r11.s64 + 1892;
	// lwz r8,1896(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1896);
	// lwz r7,1892(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1892);
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r3,r5,1
	ctx.r3.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828222f4
	if (!ctx.cr6.eq) goto loc_828222F4;
	// lfs f12,1448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lfs f13,1440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1440);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,1444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_828222F4:
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_82822328:
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r3,r5,1
	ctx.r3.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82822464
	if (!ctx.cr6.eq) goto loc_82822464;
	// lfs f0,2788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2792);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2796);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_82822380:
	// lwz r9,2520(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2520);
	// addi r10,r11,2512
	ctx.r10.s64 = ctx.r11.s64 + 2512;
	// lwz r8,2516(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2516);
	// lwz r7,2512(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2512);
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r3,r5,1
	ctx.r3.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828223d8
	if (!ctx.cr6.eq) goto loc_828223D8;
	// lfs f13,520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_828223D8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
loc_8282240C:
	// lwz r9,1264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
	// addi r10,r11,1256
	ctx.r10.s64 = ctx.r11.s64 + 1256;
	// lwz r8,1260(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1260);
	// lwz r7,1256(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1256);
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r3,r5,1
	ctx.r3.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82822464
	if (!ctx.cr6.eq) goto loc_82822464;
	// lfs f0,1672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1680);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1676);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82822464:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-8(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822498"))) PPC_WEAK_FUNC(sub_82822498);
PPC_FUNC_IMPL(__imp__sub_82822498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f13,1008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
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
	// lfs f0,1016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
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

__attribute__((alias("__imp__sub_828224D8"))) PPC_WEAK_FUNC(sub_828224D8);
PPC_FUNC_IMPL(__imp__sub_828224D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a04
	ctx.lr = 0x828224E0;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r29,r11,-29532
	ctx.r29.s64 = ctx.r11.s64 + -29532;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,-29532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// beq cr6,0x82822548
	if (ctx.cr6.eq) goto loc_82822548;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82822540
	if (ctx.cr6.eq) goto loc_82822540;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82822538
	if (ctx.cr6.eq) goto loc_82822538;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8282254c
	goto loc_8282254C;
loc_82822538:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8282254c
	goto loc_8282254C;
loc_82822540:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282254c
	goto loc_8282254C;
loc_82822548:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8282254C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828226e0
	if (ctx.cr6.eq) goto loc_828226E0;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8282257c
	if (ctx.cr6.eq) goto loc_8282257C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82822580
	if (ctx.cr6.eq) goto loc_82822580;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82822574
	if (ctx.cr6.eq) goto loc_82822574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82822580
	goto loc_82822580;
loc_82822574:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82822580
	goto loc_82822580;
loc_8282257C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82822580:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x82822588;
	sub_82804410(ctx, base);
	// lfs f6,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,2476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2476);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f10,2480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2480);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f8,2484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2484);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lfs f3,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fsubs f1,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// lfs f0,-30792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30792);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f13,-29776(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29776);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsel f31,f4,f12,f6
	ctx.f31.f64 = ctx.f4.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// fsel f12,f4,f6,f12
	ctx.f12.f64 = ctx.f4.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// fsel f30,f2,f10,f5
	ctx.f30.f64 = ctx.f2.f64 >= 0.0 ? ctx.f10.f64 : ctx.f5.f64;
	// fsel f10,f2,f5,f10
	ctx.f10.f64 = ctx.f2.f64 >= 0.0 ? ctx.f5.f64 : ctx.f10.f64;
	// fsel f29,f1,f8,f3
	ctx.f29.f64 = ctx.f1.f64 >= 0.0 ? ctx.f8.f64 : ctx.f3.f64;
	// fsel f8,f1,f3,f8
	ctx.f8.f64 = ctx.f1.f64 >= 0.0 ? ctx.f3.f64 : ctx.f8.f64;
	// fadds f6,f31,f0
	ctx.f6.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f5,f30,f0
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// fadds f4,f29,f0
	ctx.f4.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f10,f6,f11
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f8,f5,f9
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fsubs f6,f4,f7
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// beq cr6,0x8282263c
	if (ctx.cr6.eq) goto loc_8282263C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82822634
	if (ctx.cr6.eq) goto loc_82822634;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8282262c
	if (ctx.cr6.eq) goto loc_8282262C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82822640
	goto loc_82822640;
loc_8282262C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82822640
	goto loc_82822640;
loc_82822634:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82822640
	goto loc_82822640;
loc_8282263C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82822640:
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r6,-2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -2, ctx.xer);
	// beq cr6,0x82822678
	if (ctx.cr6.eq) goto loc_82822678;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stfs f10,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f8,40(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f6,44(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82822678:
	// fsubs f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// beq cr6,0x828226ac
	if (ctx.cr6.eq) goto loc_828226AC;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x828226a4
	if (ctx.cr6.eq) goto loc_828226A4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x828226b0
	if (!ctx.cr6.eq) goto loc_828226B0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x828226b0
	goto loc_828226B0;
loc_828226A4:
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// b 0x828226b0
	goto loc_828226B0;
loc_828226AC:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_828226B0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x828226e0
	if (ctx.cr6.eq) goto loc_828226E0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_828226E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_828226F4"))) PPC_WEAK_FUNC(sub_828226F4);
PPC_FUNC_IMPL(__imp__sub_828226F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828226F8"))) PPC_WEAK_FUNC(sub_828226F8);
PPC_FUNC_IMPL(__imp__sub_828226F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828226FC"))) PPC_WEAK_FUNC(sub_828226FC);
PPC_FUNC_IMPL(__imp__sub_828226FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822700"))) PPC_WEAK_FUNC(sub_82822700);
PPC_FUNC_IMPL(__imp__sub_82822700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1536(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1536);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822718"))) PPC_WEAK_FUNC(sub_82822718);
PPC_FUNC_IMPL(__imp__sub_82822718) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,308(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822730"))) PPC_WEAK_FUNC(sub_82822730);
PPC_FUNC_IMPL(__imp__sub_82822730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,596(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 596);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822748"))) PPC_WEAK_FUNC(sub_82822748);
PPC_FUNC_IMPL(__imp__sub_82822748) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,564(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 564);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822760"))) PPC_WEAK_FUNC(sub_82822760);
PPC_FUNC_IMPL(__imp__sub_82822760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// addi r10,r11,2252
	ctx.r10.s64 = ctx.r11.s64 + 2252;
	// addi r10,r11,2004
	ctx.r10.s64 = ctx.r11.s64 + 2004;
	// lfs f12,2252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,2608(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2608, temp.u32);
	// lfs f11,2256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2256);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,2612(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2612, temp.u32);
	// lfs f10,2260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2260);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,2616(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2616, temp.u32);
	// lfs f9,2252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,2596(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2596, temp.u32);
	// lfs f8,2256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2256);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,2600(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2600, temp.u32);
	// lfs f7,2260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2260);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,2604(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2604, temp.u32);
	// lfs f6,2252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2252);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1748(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1748, temp.u32);
	// lfs f5,2256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2256);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1752(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1752, temp.u32);
	// lfs f4,2260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2260);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,1756(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1756, temp.u32);
	// lfs f3,2004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,256(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// lfs f2,2008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,260(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// lfs f1,2012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,264(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f0,1116(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1116, temp.u32);
	// stfs f0,1120(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1120, temp.u32);
	// stfs f13,1124(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1124, temp.u32);
	// lfs f12,2004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,552(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 552, temp.u32);
	// lfs f11,2008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,556(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 556, temp.u32);
	// lfs f10,2012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,560(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 560, temp.u32);
	// stfs f0,2400(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2400, temp.u32);
	// stfs f0,2404(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2404, temp.u32);
	// stfs f13,2408(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2408, temp.u32);
	// lfs f9,2004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,2620(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2620, temp.u32);
	// lfs f8,2008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,2624(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2624, temp.u32);
	// lfs f7,2012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,2628(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2628, temp.u32);
	// stfs f0,416(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 416, temp.u32);
	// stfs f0,420(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 420, temp.u32);
	// stfs f13,424(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282283C"))) PPC_WEAK_FUNC(sub_8282283C);
PPC_FUNC_IMPL(__imp__sub_8282283C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822840"))) PPC_WEAK_FUNC(sub_82822840);
PPC_FUNC_IMPL(__imp__sub_82822840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2876(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2876);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282287c
	if (!ctx.cr6.eq) goto loc_8282287C;
	// lwz r10,2184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8282287c
	if (!ctx.cr6.eq) goto loc_8282287C;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8282287C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822888"))) PPC_WEAK_FUNC(sub_82822888);
PPC_FUNC_IMPL(__imp__sub_82822888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
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

__attribute__((alias("__imp__sub_828228AC"))) PPC_WEAK_FUNC(sub_828228AC);
PPC_FUNC_IMPL(__imp__sub_828228AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828228B0"))) PPC_WEAK_FUNC(sub_828228B0);
PPC_FUNC_IMPL(__imp__sub_828228B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,108(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
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

__attribute__((alias("__imp__sub_828228D4"))) PPC_WEAK_FUNC(sub_828228D4);
PPC_FUNC_IMPL(__imp__sub_828228D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828228D8"))) PPC_WEAK_FUNC(sub_828228D8);
PPC_FUNC_IMPL(__imp__sub_828228D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2184);
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

__attribute__((alias("__imp__sub_828228FC"))) PPC_WEAK_FUNC(sub_828228FC);
PPC_FUNC_IMPL(__imp__sub_828228FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822900"))) PPC_WEAK_FUNC(sub_82822900);
PPC_FUNC_IMPL(__imp__sub_82822900) {
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
	// beq cr6,0x82822928
	if (ctx.cr6.eq) goto loc_82822928;
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8282297c
	goto loc_8282297C;
loc_82822928:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,1520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f12,2192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fsel f8,f13,f13,f0
	ctx.f8.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,2196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2196);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,2200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2200);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsel f4,f5,f0,f8
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsubs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fmuls f2,f11,f4
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmadds f0,f7,f3,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f13,f6,f3,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f12,f9,f4,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f12.f64));
loc_8282297C:
	// stfs f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
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

__attribute__((alias("__imp__sub_828229A4"))) PPC_WEAK_FUNC(sub_828229A4);
PPC_FUNC_IMPL(__imp__sub_828229A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828229A8"))) PPC_WEAK_FUNC(sub_828229A8);
PPC_FUNC_IMPL(__imp__sub_828229A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,564(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828229CC"))) PPC_WEAK_FUNC(sub_828229CC);
PPC_FUNC_IMPL(__imp__sub_828229CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828229D0"))) PPC_WEAK_FUNC(sub_828229D0);
PPC_FUNC_IMPL(__imp__sub_828229D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2876(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2876);
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

__attribute__((alias("__imp__sub_828229F4"))) PPC_WEAK_FUNC(sub_828229F4);
PPC_FUNC_IMPL(__imp__sub_828229F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828229F8"))) PPC_WEAK_FUNC(sub_828229F8);
PPC_FUNC_IMPL(__imp__sub_828229F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,1316(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822A10"))) PPC_WEAK_FUNC(sub_82822A10);
PPC_FUNC_IMPL(__imp__sub_82822A10) {
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
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r9.u32);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1316(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1316, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822A40"))) PPC_WEAK_FUNC(sub_82822A40);
PPC_FUNC_IMPL(__imp__sub_82822A40) {
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

__attribute__((alias("__imp__sub_82822A58"))) PPC_WEAK_FUNC(sub_82822A58);
PPC_FUNC_IMPL(__imp__sub_82822A58) {
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
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82822a84
	if (ctx.cr6.eq) goto loc_82822A84;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82822a90
	if (ctx.cr6.eq) goto loc_82822A90;
loc_82822A84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82822A90:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822A9C"))) PPC_WEAK_FUNC(sub_82822A9C);
PPC_FUNC_IMPL(__imp__sub_82822A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822AA0"))) PPC_WEAK_FUNC(sub_82822AA0);
PPC_FUNC_IMPL(__imp__sub_82822AA0) {
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
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82822acc
	if (ctx.cr6.eq) goto loc_82822ACC;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,1520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82822ad8
	if (ctx.cr6.eq) goto loc_82822AD8;
loc_82822ACC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82822AD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822AE4"))) PPC_WEAK_FUNC(sub_82822AE4);
PPC_FUNC_IMPL(__imp__sub_82822AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822AE8"))) PPC_WEAK_FUNC(sub_82822AE8);
PPC_FUNC_IMPL(__imp__sub_82822AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822B00"))) PPC_WEAK_FUNC(sub_82822B00);
PPC_FUNC_IMPL(__imp__sub_82822B00) {
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
	// beq cr6,0x82822b20
	if (ctx.cr6.eq) goto loc_82822B20;
	// stfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82822B20:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,2188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2188);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f12,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fsel f11,f13,f13,f0
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsel f9,f10,f0,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmuls f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822B58"))) PPC_WEAK_FUNC(sub_82822B58);
PPC_FUNC_IMPL(__imp__sub_82822B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// fsubs f12,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r10,-32029
	ctx.r10.s64 = -2099052544;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-19780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19780);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,1316(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 1316, temp.u32);
	// stw r8,580(r6)
	PPC_STORE_U32(ctx.r6.u32 + 580, ctx.r8.u32);
	// stfs f11,2632(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 2632, temp.u32);
	// stfs f10,1524(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 1524, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822B98"))) PPC_WEAK_FUNC(sub_82822B98);
PPC_FUNC_IMPL(__imp__sub_82822B98) {
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
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82822bc4
	if (ctx.cr6.eq) goto loc_82822BC4;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,2188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82822bd0
	if (ctx.cr6.eq) goto loc_82822BD0;
loc_82822BC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82822BD0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822BDC"))) PPC_WEAK_FUNC(sub_82822BDC);
PPC_FUNC_IMPL(__imp__sub_82822BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822BE0"))) PPC_WEAK_FUNC(sub_82822BE0);
PPC_FUNC_IMPL(__imp__sub_82822BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,580(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 580);
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

__attribute__((alias("__imp__sub_82822C04"))) PPC_WEAK_FUNC(sub_82822C04);
PPC_FUNC_IMPL(__imp__sub_82822C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822C08"))) PPC_WEAK_FUNC(sub_82822C08);
PPC_FUNC_IMPL(__imp__sub_82822C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2440(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2440);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82822c34
	if (!ctx.cr6.eq) goto loc_82822C34;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,2908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2908);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82822c40
	if (!ctx.cr6.gt) goto loc_82822C40;
loc_82822C34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82822C40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822C4C"))) PPC_WEAK_FUNC(sub_82822C4C);
PPC_FUNC_IMPL(__imp__sub_82822C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822C50"))) PPC_WEAK_FUNC(sub_82822C50);
PPC_FUNC_IMPL(__imp__sub_82822C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1776(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1776);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822C68"))) PPC_WEAK_FUNC(sub_82822C68);
PPC_FUNC_IMPL(__imp__sub_82822C68) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822C74"))) PPC_WEAK_FUNC(sub_82822C74);
PPC_FUNC_IMPL(__imp__sub_82822C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822C78"))) PPC_WEAK_FUNC(sub_82822C78);
PPC_FUNC_IMPL(__imp__sub_82822C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f4
	ctx.lr = 0x82822C80;
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,13180(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13180);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r31,13192(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13192);
	// lwz r30,13188(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13188);
	// stw r11,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r11.u32);
	// lwz r28,13184(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13184);
	// stw r10,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r10.u32);
	// bl 0x82bef368
	ctx.lr = 0x82822CC8;
	sub_82BEF368(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stw r31,13192(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13192, ctx.r31.u32);
	// stw r29,13180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13180, ctx.r29.u32);
	// stw r28,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r28.u32);
	// stw r30,13188(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13188, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82218a44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82822CE4"))) PPC_WEAK_FUNC(sub_82822CE4);
PPC_FUNC_IMPL(__imp__sub_82822CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822CE8"))) PPC_WEAK_FUNC(sub_82822CE8);
PPC_FUNC_IMPL(__imp__sub_82822CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822CF0"))) PPC_WEAK_FUNC(sub_82822CF0);
PPC_FUNC_IMPL(__imp__sub_82822CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,1540(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1540);
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

__attribute__((alias("__imp__sub_82822D14"))) PPC_WEAK_FUNC(sub_82822D14);
PPC_FUNC_IMPL(__imp__sub_82822D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822D18"))) PPC_WEAK_FUNC(sub_82822D18);
PPC_FUNC_IMPL(__imp__sub_82822D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,1540(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82822d3c
	if (!ctx.cr6.eq) goto loc_82822D3C;
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82822d48
	if (ctx.cr6.eq) goto loc_82822D48;
loc_82822D3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82822D48:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822D54"))) PPC_WEAK_FUNC(sub_82822D54);
PPC_FUNC_IMPL(__imp__sub_82822D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822D58"))) PPC_WEAK_FUNC(sub_82822D58);
PPC_FUNC_IMPL(__imp__sub_82822D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,1540(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1540);
	// addi r8,r11,-18
	ctx.r8.s64 = ctx.r11.s64 + -18;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822D7C"))) PPC_WEAK_FUNC(sub_82822D7C);
PPC_FUNC_IMPL(__imp__sub_82822D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822D80"))) PPC_WEAK_FUNC(sub_82822D80);
PPC_FUNC_IMPL(__imp__sub_82822D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2736(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2736);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822D98"))) PPC_WEAK_FUNC(sub_82822D98);
PPC_FUNC_IMPL(__imp__sub_82822D98) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,2132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2132, ctx.r11.u32);
	// stw r11,396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822DB4"))) PPC_WEAK_FUNC(sub_82822DB4);
PPC_FUNC_IMPL(__imp__sub_82822DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822DB8"))) PPC_WEAK_FUNC(sub_82822DB8);
PPC_FUNC_IMPL(__imp__sub_82822DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stfs f0,1036(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 1036, temp.u32);
	// lfs f0,2240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2104(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 2104, temp.u32);
	// lfs f13,2244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,2108(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 2108, temp.u32);
	// lfs f12,2248(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2248);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,2112(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 2112, temp.u32);
	// stw r9,752(r7)
	PPC_STORE_U32(ctx.r7.u32 + 752, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822DF4"))) PPC_WEAK_FUNC(sub_82822DF4);
PPC_FUNC_IMPL(__imp__sub_82822DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822DF8"))) PPC_WEAK_FUNC(sub_82822DF8);
PPC_FUNC_IMPL(__imp__sub_82822DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 752, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822E10"))) PPC_WEAK_FUNC(sub_82822E10);
PPC_FUNC_IMPL(__imp__sub_82822E10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r4,656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 656, ctx.r4.u32);
	// stw r5,548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 548, ctx.r5.u32);
	// stw r10,1284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1284, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822E30"))) PPC_WEAK_FUNC(sub_82822E30);
PPC_FUNC_IMPL(__imp__sub_82822E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822E58"))) PPC_WEAK_FUNC(sub_82822E58);
PPC_FUNC_IMPL(__imp__sub_82822E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r4,556
	ctx.r9.s64 = ctx.r4.s64 + 556;
	// addi r8,r4,607
	ctx.r8.s64 = ctx.r4.s64 + 607;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// addi r6,r4,490
	ctx.r6.s64 = ctx.r4.s64 + 490;
	// lfs f0,-4368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4368);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r4,724
	ctx.r10.s64 = ctx.r4.s64 + 724;
	// addi r5,r4,72
	ctx.r5.s64 = ctx.r4.s64 + 72;
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// addi r3,r4,283
	ctx.r3.s64 = ctx.r4.s64 + 283;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,29744(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r8,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfsx f2,r7,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r6,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r4,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// stfsx f0,r3,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// stfsx f13,r5,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822EE4"))) PPC_WEAK_FUNC(sub_82822EE4);
PPC_FUNC_IMPL(__imp__sub_82822EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82822EE8"))) PPC_WEAK_FUNC(sub_82822EE8);
PPC_FUNC_IMPL(__imp__sub_82822EE8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r4,556
	ctx.r10.s64 = ctx.r4.s64 + 556;
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

__attribute__((alias("__imp__sub_82822F18"))) PPC_WEAK_FUNC(sub_82822F18);
PPC_FUNC_IMPL(__imp__sub_82822F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r11,108(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
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

__attribute__((alias("__imp__sub_82822F40"))) PPC_WEAK_FUNC(sub_82822F40);
PPC_FUNC_IMPL(__imp__sub_82822F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82822F48;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8221ad18
	ctx.lr = 0x82822F50;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
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
	// li r10,1
	ctx.r10.s64 = 1;
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
	// lwz r9,1096(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// stfs f0,1092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1092, temp.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828230d8
	if (ctx.cr6.eq) goto loc_828230D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f31,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8221c068
	ctx.lr = 0x82822FC0;
	sub_8221C068(ctx, base);
	// lfs f0,1092(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	ctx.f0.f64 = double(temp.f32);
	// frsp f30,f1
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8221c148
	ctx.lr = 0x82822FD0;
	sub_8221C148(ctx, base);
	// lfs f13,1092(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	ctx.f13.f64 = double(temp.f32);
	// frsp f29,f1
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// lfs f12,2076(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2076);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f1,f11,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// bl 0x8221c068
	ctx.lr = 0x82822FE8;
	sub_8221C068(ctx, base);
	// lfs f10,1092(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	ctx.f10.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// lfs f9,2076(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2076);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f1,f8,f31
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// bl 0x8221c148
	ctx.lr = 0x82823000;
	sub_8221C148(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lfs f8,2768(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2768);
	ctx.f8.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f6,1092(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,2076(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2076);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,1092(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1092, temp.u32);
	// lfs f13,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f3,f13,f29
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f29.f64));
	// fdivs f2,f13,f7
	ctx.f2.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// fmuls f1,f30,f3
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// fmuls f0,f28,f2
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f2.f64));
	// fmuls f12,f1,f8
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fdivs f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f7,2376(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2376, temp.u32);
	// bl 0x82bef368
	ctx.lr = 0x82823044;
	sub_82BEF368(ctx, base);
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// fsubs f11,f1,f4
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,12492(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12492);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// beq cr6,0x8282306c
	if (ctx.cr6.eq) goto loc_8282306C;
	// lfs f12,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82823070
	goto loc_82823070;
loc_8282306C:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82823070:
	// fmuls f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f10,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// beq cr6,0x82823088
	if (ctx.cr6.eq) goto loc_82823088;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82823088:
	// lfs f11,1308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f12,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828230b0
	if (ctx.cr6.eq) goto loc_828230B0;
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828230b4
	goto loc_828230B4;
loc_828230B0:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_828230B4:
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// beq cr6,0x828230c4
	if (ctx.cr6.eq) goto loc_828230C4;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_828230C4:
	// fsubs f13,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f11,1516(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// b 0x8282316c
	goto loc_8282316C;
loc_828230D8:
	// lwz r11,1100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82823148
	if (ctx.cr6.eq) goto loc_82823148;
	// lfs f13,1732(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f12,1308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,-4008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4008);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f10,1508(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// bl 0x82bef368
	ctx.lr = 0x82823108;
	sub_82BEF368(ctx, base);
	// fsubs f9,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// bl 0x82bf02b8
	ctx.lr = 0x82823118;
	sub_82BF02B8(ctx, base);
	// fmuls f7,f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// lfs f6,2768(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2768);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,2376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2376);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fdivs f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// stfs f3,80(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fabs f2,f4
	ctx.f2.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// bl 0x82bf02b8
	ctx.lr = 0x82823138;
	sub_82BF02B8(ctx, base);
	// fmuls f1,f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fdivs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f1.f64));
	// stfs f0,1516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// b 0x8282316c
	goto loc_8282316C;
loc_82823148:
	// bl 0x82bef368
	ctx.lr = 0x8282314C;
	sub_82BEF368(ctx, base);
	// fsubs f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// bl 0x82bf02b8
	ctx.lr = 0x8282315C;
	sub_82BF02B8(ctx, base);
	// lfs f10,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fdivs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_8282316C:
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8221ad64
	ctx.lr = 0x82823188;
	__restfpr_28(ctx, base);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282318C"))) PPC_WEAK_FUNC(sub_8282318C);
PPC_FUNC_IMPL(__imp__sub_8282318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823190"))) PPC_WEAK_FUNC(sub_82823190);
PPC_FUNC_IMPL(__imp__sub_82823190) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828231e8
	if (ctx.cr6.eq) goto loc_828231E8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828231d8
	if (ctx.cr6.eq) goto loc_828231D8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x828231f0
	if (!ctx.cr6.eq) goto loc_828231F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828231f0
	goto loc_828231F0;
loc_828231D8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828231f0
	goto loc_828231F0;
loc_828231E8:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r3,-29532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828231F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82804410
	ctx.lr = 0x828231F8;
	sub_82804410(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,2252
	ctx.r11.s64 = ctx.r31.s64 + 2252;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,2252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2252, temp.u32);
	// stfs f13,2256(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2256, temp.u32);
	// stfs f12,2260(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2260, temp.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r7,564(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 564);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8282329c
	if (!ctx.cr6.eq) goto loc_8282329C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f11,1932(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,29744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	ctx.f4.f64 = double(temp.f32);
	// fsel f3,f6,f11,f13
	ctx.f3.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsel f2,f3,f3,f12
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f3.f64 : ctx.f12.f64;
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsel f13,f1,f0,f2
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f8,f7,f12,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f7,f5,f12,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f6,f4,f12,f9
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8282329C:
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

__attribute__((alias("__imp__sub_828232B4"))) PPC_WEAK_FUNC(sub_828232B4);
PPC_FUNC_IMPL(__imp__sub_828232B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828232B8"))) PPC_WEAK_FUNC(sub_828232B8);
PPC_FUNC_IMPL(__imp__sub_828232B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f8
	ctx.lr = 0x828232C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,13192(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13192);
	// lwz r30,13188(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13188);
	// lwz r29,13180(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13180);
	// lwz r28,13184(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13184);
	// lfs f0,-29772(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29772);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13184, ctx.r11.u32);
	// lfs f13,1304(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2368);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,1512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1512);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmadds f1,f9,f0,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82822f40
	ctx.lr = 0x82823324;
	sub_82822F40(ctx, base);
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

__attribute__((alias("__imp__sub_8282333C"))) PPC_WEAK_FUNC(sub_8282333C);
PPC_FUNC_IMPL(__imp__sub_8282333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823340"))) PPC_WEAK_FUNC(sub_82823340);
PPC_FUNC_IMPL(__imp__sub_82823340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,436(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 436);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823358"))) PPC_WEAK_FUNC(sub_82823358);
PPC_FUNC_IMPL(__imp__sub_82823358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,2100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2100, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823370"))) PPC_WEAK_FUNC(sub_82823370);
PPC_FUNC_IMPL(__imp__sub_82823370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,904(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823388"))) PPC_WEAK_FUNC(sub_82823388);
PPC_FUNC_IMPL(__imp__sub_82823388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,944(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 944);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828233A0"))) PPC_WEAK_FUNC(sub_828233A0);
PPC_FUNC_IMPL(__imp__sub_828233A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,456(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 456);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828233B8"))) PPC_WEAK_FUNC(sub_828233B8);
PPC_FUNC_IMPL(__imp__sub_828233B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 340);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828233D0"))) PPC_WEAK_FUNC(sub_828233D0);
PPC_FUNC_IMPL(__imp__sub_828233D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,828(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 828);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828233E8"))) PPC_WEAK_FUNC(sub_828233E8);
PPC_FUNC_IMPL(__imp__sub_828233E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1336(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1336);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823400"))) PPC_WEAK_FUNC(sub_82823400);
PPC_FUNC_IMPL(__imp__sub_82823400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,2264(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2264);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823418"))) PPC_WEAK_FUNC(sub_82823418);
PPC_FUNC_IMPL(__imp__sub_82823418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,700(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 700);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823430"))) PPC_WEAK_FUNC(sub_82823430);
PPC_FUNC_IMPL(__imp__sub_82823430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,332(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 332);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823448"))) PPC_WEAK_FUNC(sub_82823448);
PPC_FUNC_IMPL(__imp__sub_82823448) {
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

__attribute__((alias("__imp__sub_82823460"))) PPC_WEAK_FUNC(sub_82823460);
PPC_FUNC_IMPL(__imp__sub_82823460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,2840(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2840);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823478"))) PPC_WEAK_FUNC(sub_82823478);
PPC_FUNC_IMPL(__imp__sub_82823478) {
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

__attribute__((alias("__imp__sub_82823490"))) PPC_WEAK_FUNC(sub_82823490);
PPC_FUNC_IMPL(__imp__sub_82823490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1340(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1340);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828234A8"))) PPC_WEAK_FUNC(sub_828234A8);
PPC_FUNC_IMPL(__imp__sub_828234A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,808(r8)
	PPC_STORE_U32(ctx.r8.u32 + 808, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828234C0"))) PPC_WEAK_FUNC(sub_828234C0);
PPC_FUNC_IMPL(__imp__sub_828234C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1540(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1540);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828234D8"))) PPC_WEAK_FUNC(sub_828234D8);
PPC_FUNC_IMPL(__imp__sub_828234D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828234F0"))) PPC_WEAK_FUNC(sub_828234F0);
PPC_FUNC_IMPL(__imp__sub_828234F0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282352C"))) PPC_WEAK_FUNC(sub_8282352C);
PPC_FUNC_IMPL(__imp__sub_8282352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823530"))) PPC_WEAK_FUNC(sub_82823530);
PPC_FUNC_IMPL(__imp__sub_82823530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 17, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// beq cr6,0x828235c0
	if (ctx.cr6.eq) goto loc_828235C0;
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// bne cr6,0x82823628
	if (!ctx.cr6.eq) goto loc_82823628;
	// lwz r11,1540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1540);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82823570
	if (ctx.cr6.eq) goto loc_82823570;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82823570
	if (ctx.cr6.eq) goto loc_82823570;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x82823570
	if (ctx.cr6.eq) goto loc_82823570;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x82823628
	if (!ctx.cr6.eq) goto loc_82823628;
loc_82823570:
	// lwz r11,596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828235a4
	if (ctx.cr6.eq) goto loc_828235A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82823594
	if (ctx.cr6.eq) goto loc_82823594;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828235ac
	if (!ctx.cr6.eq) goto loc_828235AC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828235ac
	goto loc_828235AC;
loc_82823594:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x828235ac
	goto loc_828235AC;
loc_828235A4:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_828235AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82823628
	if (ctx.cr6.eq) goto loc_82823628;
loc_828235B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828235C0:
	// lwz r11,1540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1540);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x828235e4
	if (ctx.cr6.eq) goto loc_828235E4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x828235e4
	if (ctx.cr6.eq) goto loc_828235E4;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x828235e4
	if (ctx.cr6.eq) goto loc_828235E4;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x82823628
	if (!ctx.cr6.eq) goto loc_82823628;
loc_828235E4:
	// lwz r11,596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82823618
	if (ctx.cr6.eq) goto loc_82823618;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82823608
	if (ctx.cr6.eq) goto loc_82823608;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82823620
	if (!ctx.cr6.eq) goto loc_82823620;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82823620
	goto loc_82823620;
loc_82823608:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r10,r11,-29532
	ctx.r10.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82823620
	goto loc_82823620;
loc_82823618:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82823620:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828235b4
	if (!ctx.cr6.eq) goto loc_828235B4;
loc_82823628:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823634"))) PPC_WEAK_FUNC(sub_82823634);
PPC_FUNC_IMPL(__imp__sub_82823634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823638"))) PPC_WEAK_FUNC(sub_82823638);
PPC_FUNC_IMPL(__imp__sub_82823638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82823640;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// lwz r23,13180(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13180);
	// lwz r22,13184(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13184);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r3,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r3.u32);
	// stw r3,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r3.u32);
	// stw r11,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r11.u32);
	// stw r11,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r11.u32);
	// lwz r10,624(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828236a8
	if (!ctx.cr6.eq) goto loc_828236A8;
	// lwz r3,364(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	// bl 0x82bfc538
	ctx.lr = 0x82823698;
	sub_82BFC538(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x828236d4
	if (ctx.cr6.gt) goto loc_828236D4;
loc_828236A8:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r10,728(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x828236c8
	if (ctx.cr6.gt) goto loc_828236C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x828236d8
	goto loc_828236D8;
loc_828236C8:
	// lwz r11,720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x828236d8
	goto loc_828236D8;
loc_828236D4:
	// lwz r11,660(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 660);
loc_828236D8:
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828236F4"))) PPC_WEAK_FUNC(sub_828236F4);
PPC_FUNC_IMPL(__imp__sub_828236F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828236F8"))) PPC_WEAK_FUNC(sub_828236F8);
PPC_FUNC_IMPL(__imp__sub_828236F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,1068(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1068, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823710"))) PPC_WEAK_FUNC(sub_82823710);
PPC_FUNC_IMPL(__imp__sub_82823710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82218a0c
	ctx.lr = 0x82823718;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x82be79f0
	ctx.lr = 0x82823734;
	sub_82BE79F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82be79f0
	ctx.lr = 0x82823748;
	sub_82BE79F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r29,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be79f0
	ctx.lr = 0x8282375C;
	sub_82BE79F0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r3,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r3.u32);
	// stw r9,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r9.u32);
	// bne cr6,0x828237b4
	if (!ctx.cr6.eq) goto loc_828237B4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x828237b4
	if (!ctx.cr6.eq) goto loc_828237B4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828237b4
	if (!ctx.cr6.eq) goto loc_828237B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2168, temp.u32);
	// stfs f0,2172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2172, temp.u32);
	// stfs f0,2176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2176, temp.u32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f0,1104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1104, temp.u32);
	// stfs f0,1108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1108, temp.u32);
	// stfs f0,1112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_828237B4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r10,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r10.u32);
	// lfs f8,29744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29744);
	ctx.f8.f64 = double(temp.f32);
	// bne cr6,0x828237dc
	if (!ctx.cr6.eq) goto loc_828237DC;
	// stfs f8,2168(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2168, temp.u32);
	// stfs f8,2172(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2172, temp.u32);
	// stfs f8,2176(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2176, temp.u32);
	// b 0x82823870
	goto loc_82823870;
loc_828237DC:
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be7520
	ctx.lr = 0x828237EC;
	sub_82BE7520(ctx, base);
	// lwz r10,2176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2176);
	// lwz r9,2172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2172);
	// addi r11,r31,2168
	ctx.r11.s64 = ctx.r31.s64 + 2168;
	// lwz r8,2168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2168);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82823858
	if (ctx.cr6.eq) goto loc_82823858;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x82823870
	goto loc_82823870;
loc_82823858:
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
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82823870:
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282388c
	if (!ctx.cr6.eq) goto loc_8282388C;
	// stfs f8,1104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1104, temp.u32);
	// stfs f8,1108(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1108, temp.u32);
	// stfs f8,1112(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// b 0x828238d8
	goto loc_828238D8;
loc_8282388C:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be7520
	ctx.lr = 0x8282389C;
	sub_82BE7520(ctx, base);
	// lwz r10,1112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// lwz r9,1108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// addi r11,r31,1104
	ctx.r11.s64 = ctx.r31.s64 + 1104;
	// lwz r8,1104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x828238d8
	if (!ctx.cr6.eq) goto loc_828238D8;
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
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_828238D8:
	// lwz r11,812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828238f8
	if (!ctx.cr6.eq) goto loc_828238F8;
	// stfs f8,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f8,244(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f8,248(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
loc_828238F8:
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be7520
	ctx.lr = 0x82823908;
	sub_82BE7520(ctx, base);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// lwz r9,244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r11,r31,240
	ctx.r11.s64 = ctx.r31.s64 + 240;
	// lwz r8,240(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82823944
	if (!ctx.cr6.eq) goto loc_82823944;
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
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82823944:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82218a5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282394C"))) PPC_WEAK_FUNC(sub_8282394C);
PPC_FUNC_IMPL(__imp__sub_8282394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823950"))) PPC_WEAK_FUNC(sub_82823950);
PPC_FUNC_IMPL(__imp__sub_82823950) {
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
	// fsel f13,f3,f3,f0
	ctx.f13.f64 = ctx.f3.f64 >= 0.0 ? ctx.f3.f64 : ctx.f0.f64;
	// lfs f0,29760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmadds f8,f10,f2,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f9.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823980"))) PPC_WEAK_FUNC(sub_82823980);
PPC_FUNC_IMPL(__imp__sub_82823980) {
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

__attribute__((alias("__imp__sub_82823998"))) PPC_WEAK_FUNC(sub_82823998);
PPC_FUNC_IMPL(__imp__sub_82823998) {
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

__attribute__((alias("__imp__sub_828239AC"))) PPC_WEAK_FUNC(sub_828239AC);
PPC_FUNC_IMPL(__imp__sub_828239AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828239B0"))) PPC_WEAK_FUNC(sub_828239B0);
PPC_FUNC_IMPL(__imp__sub_828239B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r9,2868(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,2160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82823ad8
	if (!ctx.cr6.eq) goto loc_82823AD8;
	// lwz r11,2280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828239ec
	if (!ctx.cr6.eq) goto loc_828239EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f10,-4004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4004);
	ctx.f10.f64 = double(temp.f32);
	// b 0x828239f4
	goto loc_828239F4;
loc_828239EC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f10,-30400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30400);
	ctx.f10.f64 = double(temp.f32);
loc_828239F4:
	// lfs f0,636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82823a90
	if (ctx.cr6.lt) goto loc_82823A90;
	// lwz r11,740(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 740);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82823a38
	if (ctx.cr6.eq) goto loc_82823A38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82823a28
	if (ctx.cr6.eq) goto loc_82823A28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82823a40
	if (!ctx.cr6.eq) goto loc_82823A40;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82823a40
	goto loc_82823A40;
loc_82823A28:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// addi r9,r11,-29532
	ctx.r9.s64 = ctx.r11.s64 + -29532;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82823a40
	goto loc_82823A40;
loc_82823A38:
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
loc_82823A40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f11,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fsel f7,f8,f8,f11
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f11.f64;
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsel f5,f6,f13,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fsubs f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmadds f2,f4,f12,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsel f0,f1,f2,f0
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f2.f64 : ctx.f0.f64;
	// stfs f0,184(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 184, temp.u32);
	// blr 
	return;
loc_82823A90:
	// lis r11,-31942
	ctx.r11.s64 = -2093350912;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r11,12492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12492);
	// lfs f11,29744(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29744);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,29760(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fsel f7,f8,f8,f11
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f11.f64;
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsel f5,f6,f13,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fsubs f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmadds f2,f4,f12,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsel f0,f1,f0,f2
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// stfs f0,184(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 184, temp.u32);
	// blr 
	return;
loc_82823AD8:
	// lfs f0,636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 184, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823AE4"))) PPC_WEAK_FUNC(sub_82823AE4);
PPC_FUNC_IMPL(__imp__sub_82823AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823AE8"))) PPC_WEAK_FUNC(sub_82823AE8);
PPC_FUNC_IMPL(__imp__sub_82823AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r10,2060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2060);
	// stfs f1,2072(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2072, temp.u32);
	// lwz r6,-29532(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82823b34
	if (ctx.cr6.eq) goto loc_82823B34;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82823b2c
	if (ctx.cr6.eq) goto loc_82823B2C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82823b38
	if (!ctx.cr6.eq) goto loc_82823B38;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82823b38
	goto loc_82823B38;
loc_82823B2C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82823b38
	goto loc_82823B38;
loc_82823B34:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82823B38:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82823b68
	if (ctx.cr6.eq) goto loc_82823B68;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82823b60
	if (ctx.cr6.eq) goto loc_82823B60;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82823b58
	if (ctx.cr6.eq) goto loc_82823B58;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// b 0x82823b6c
	goto loc_82823B6C;
loc_82823B58:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82823b6c
	goto loc_82823B6C;
loc_82823B60:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x82823b6c
	goto loc_82823B6C;
loc_82823B68:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82823B6C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82823c38
	if (ctx.cr6.eq) goto loc_82823C38;
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82823bb0
	if (ctx.cr6.eq) goto loc_82823BB0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82823ba8
	if (ctx.cr6.eq) goto loc_82823BA8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82823ba0
	if (ctx.cr6.eq) goto loc_82823BA0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x82823bb4
	goto loc_82823BB4;
loc_82823BA0:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82823bb4
	goto loc_82823BB4;
loc_82823BA8:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x82823bb4
	goto loc_82823BB4;
loc_82823BB0:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_82823BB4:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82823be4
	if (ctx.cr6.eq) goto loc_82823BE4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82823bdc
	if (ctx.cr6.eq) goto loc_82823BDC;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82823bd4
	if (ctx.cr6.eq) goto loc_82823BD4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82823be8
	goto loc_82823BE8;
loc_82823BD4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82823be8
	goto loc_82823BE8;
loc_82823BDC:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82823be8
	goto loc_82823BE8;
loc_82823BE4:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82823BE8:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82823c78
	if (!ctx.cr6.eq) goto loc_82823C78;
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f0,-30832(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30832);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82823c2c
	if (ctx.cr6.lt) goto loc_82823C2C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82823c20
	if (!ctx.cr6.gt) goto loc_82823C20;
	// stw r8,2312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2312, ctx.r8.u32);
	// stw r7,2848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2848, ctx.r7.u32);
	// b 0x82823c78
	goto loc_82823C78;
loc_82823C20:
	// stw r7,2312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2312, ctx.r7.u32);
	// stw r8,2848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2848, ctx.r8.u32);
	// b 0x82823c78
	goto loc_82823C78;
loc_82823C2C:
	// stw r8,2312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2312, ctx.r8.u32);
	// stw r8,2848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2848, ctx.r8.u32);
	// b 0x82823c78
	goto loc_82823C78;
loc_82823C38:
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f0,-30832(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30832);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82823c70
	if (ctx.cr6.lt) goto loc_82823C70;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,-4012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4012);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82823c64
	if (!ctx.cr6.gt) goto loc_82823C64;
	// stw r7,2568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2568, ctx.r7.u32);
	// b 0x82823c74
	goto loc_82823C74;
loc_82823C64:
	// stw r7,2140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2140, ctx.r7.u32);
	// stw r8,2568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2568, ctx.r8.u32);
	// b 0x82823c78
	goto loc_82823C78;
loc_82823C70:
	// stw r8,2568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2568, ctx.r8.u32);
loc_82823C74:
	// stw r8,2140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2140, ctx.r8.u32);
loc_82823C78:
	// lwz r10,2568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2568);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82823cc0
	if (!ctx.cr6.eq) goto loc_82823CC0;
	// lwz r10,2848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82823cc0
	if (!ctx.cr6.eq) goto loc_82823CC0;
	// lwz r10,2140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82823cb4
	if (!ctx.cr6.eq) goto loc_82823CB4;
	// lwz r10,2312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2312);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82823cb4
	if (!ctx.cr6.eq) goto loc_82823CB4;
	// stw r8,2308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2308, ctx.r8.u32);
	// stw r8,1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1048, ctx.r8.u32);
	// blr 
	return;
loc_82823CB4:
	// stw r7,1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1048, ctx.r7.u32);
	// stw r8,2308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2308, ctx.r8.u32);
	// blr 
	return;
loc_82823CC0:
	// stw r7,2308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2308, ctx.r7.u32);
	// stw r8,1048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1048, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823CCC"))) PPC_WEAK_FUNC(sub_82823CCC);
PPC_FUNC_IMPL(__imp__sub_82823CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823CD0"))) PPC_WEAK_FUNC(sub_82823CD0);
PPC_FUNC_IMPL(__imp__sub_82823CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,1312(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1312);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823CE8"))) PPC_WEAK_FUNC(sub_82823CE8);
PPC_FUNC_IMPL(__imp__sub_82823CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32051
	ctx.r11.s64 = -2100494336;
	// stw r4,26196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26196, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823CF4"))) PPC_WEAK_FUNC(sub_82823CF4);
PPC_FUNC_IMPL(__imp__sub_82823CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823CF8"))) PPC_WEAK_FUNC(sub_82823CF8);
PPC_FUNC_IMPL(__imp__sub_82823CF8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823D34"))) PPC_WEAK_FUNC(sub_82823D34);
PPC_FUNC_IMPL(__imp__sub_82823D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823D38"))) PPC_WEAK_FUNC(sub_82823D38);
PPC_FUNC_IMPL(__imp__sub_82823D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r10,9272
	ctx.r8.s64 = ctx.r10.s64 + 9272;
	// addi r7,r9,9276
	ctx.r7.s64 = ctx.r9.s64 + 9276;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// stw r8,1548(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1548, ctx.r8.u32);
	// stw r7,1552(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1552, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823D60"))) PPC_WEAK_FUNC(sub_82823D60);
PPC_FUNC_IMPL(__imp__sub_82823D60) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,48(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r11,1248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1248, ctx.r11.u32);
	// stw r11,1284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1284, ctx.r11.u32);
	// bl 0x82804410
	ctx.lr = 0x82823D98;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,2608(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2608, temp.u32);
	// stfs f13,2612(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2612, temp.u32);
	// stfs f12,2616(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2616, temp.u32);
	// bl 0x82804270
	ctx.lr = 0x82823DBC;
	sub_82804270(ctx, base);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f11,256(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
	// stfs f10,260(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 260, temp.u32);
	// stfs f9,264(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 264, temp.u32);
	// bl 0x82804180
	ctx.lr = 0x82823DE0;
	sub_82804180(ctx, base);
	// lfs f8,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// stfs f8,1116(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1116, temp.u32);
	// stfs f7,1120(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1120, temp.u32);
	// stfs f6,1124(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1124, temp.u32);
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

__attribute__((alias("__imp__sub_82823E10"))) PPC_WEAK_FUNC(sub_82823E10);
PPC_FUNC_IMPL(__imp__sub_82823E10) {
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
	// beq cr6,0x82823e30
	if (ctx.cr6.eq) goto loc_82823E30;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82823e38
	goto loc_82823E38;
loc_82823E30:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
loc_82823E38:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-30800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823E54"))) PPC_WEAK_FUNC(sub_82823E54);
PPC_FUNC_IMPL(__imp__sub_82823E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823E58"))) PPC_WEAK_FUNC(sub_82823E58);
PPC_FUNC_IMPL(__imp__sub_82823E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823E70"))) PPC_WEAK_FUNC(sub_82823E70);
PPC_FUNC_IMPL(__imp__sub_82823E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189f0
	ctx.lr = 0x82823E78;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lis r25,-31942
	ctx.r25.s64 = -2093350912;
	// lis r24,-31942
	ctx.r24.s64 = -2093350912;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r23,-31942
	ctx.r23.s64 = -2093350912;
	// lfs f0,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,13192(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13192);
	// lwz r29,13188(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13188);
	// lwz r28,13180(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13180);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,13184(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13184);
	// stw r31,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r31.u32);
	// stw r31,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r31.u32);
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r11.u32);
	// stfs f0,2776(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 2776, temp.u32);
	// bl 0x82804410
	ctx.lr = 0x82823ED4;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,2192(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 2192, temp.u32);
	// stfs f13,2196(r22)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r22.u32 + 2196, temp.u32);
	// stfs f12,2200(r22)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r22.u32 + 2200, temp.u32);
	// bl 0x82804270
	ctx.lr = 0x82823EF8;
	sub_82804270(ctx, base);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f11,568(r22)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r22.u32 + 568, temp.u32);
	// stfs f10,572(r22)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r22.u32 + 572, temp.u32);
	// stfs f9,576(r22)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r22.u32 + 576, temp.u32);
	// bl 0x82804180
	ctx.lr = 0x82823F1C;
	sub_82804180(ctx, base);
	// lfs f8,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// stfs f8,884(r22)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r22.u32 + 884, temp.u32);
	// stfs f7,888(r22)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r22.u32 + 888, temp.u32);
	// stfs f6,892(r22)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r22.u32 + 892, temp.u32);
	// bl 0x82bef368
	ctx.lr = 0x82823F3C;
	sub_82BEF368(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stfs f1,116(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r22.u32 + 116, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,736(r22)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r22.u32 + 736, temp.u32);
	// stw r30,13192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13192, ctx.r30.u32);
	// stw r11,480(r22)
	PPC_STORE_U32(ctx.r22.u32 + 480, ctx.r11.u32);
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,2732(r22)
	PPC_STORE_U32(ctx.r22.u32 + 2732, ctx.r11.u32);
	// lfs f13,-4368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4368);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,13180(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13180, ctx.r28.u32);
	// stfs f0,732(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 732, temp.u32);
	// stw r27,13184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13184, ctx.r27.u32);
	// stfs f13,2492(r22)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r22.u32 + 2492, temp.u32);
	// stw r29,13188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13188, ctx.r29.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82218a40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82823F84"))) PPC_WEAK_FUNC(sub_82823F84);
PPC_FUNC_IMPL(__imp__sub_82823F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823F88"))) PPC_WEAK_FUNC(sub_82823F88);
PPC_FUNC_IMPL(__imp__sub_82823F88) {
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

__attribute__((alias("__imp__sub_82823F9C"))) PPC_WEAK_FUNC(sub_82823F9C);
PPC_FUNC_IMPL(__imp__sub_82823F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82823FA0"))) PPC_WEAK_FUNC(sub_82823FA0);
PPC_FUNC_IMPL(__imp__sub_82823FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822189e4
	ctx.lr = 0x82823FA8;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r29,-31942
	ctx.r29.s64 = -2093350912;
	// lis r28,-31942
	ctx.r28.s64 = -2093350912;
	// lis r27,-31942
	ctx.r27.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r26,-31942
	ctx.r26.s64 = -2093350912;
	// lfs f30,29744(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f30.f64 = double(temp.f32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r25,13192(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13192);
	// lwz r24,13188(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13188);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r23,13180(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13180);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r22,13184(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13184);
	// stw r30,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r30.u32);
	// stw r30,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r30.u32);
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r11.u32);
	// stfs f30,404(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// bl 0x82804410
	ctx.lr = 0x82824014;
	sub_82804410(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,1072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1072, temp.u32);
	// addi r11,r31,1072
	ctx.r11.s64 = ctx.r31.s64 + 1072;
	// stfs f13,1076(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// stfs f12,1080(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// bl 0x82804270
	ctx.lr = 0x8282403C;
	sub_82804270(ctx, base);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f11,792(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 792, temp.u32);
	// stfs f10,796(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 796, temp.u32);
	// stfs f9,800(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 800, temp.u32);
	// bl 0x82804180
	ctx.lr = 0x82824060;
	sub_82804180(ctx, base);
	// lfs f8,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// stfs f8,2340(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2340, temp.u32);
	// stfs f7,2344(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2344, temp.u32);
	// stfs f6,2348(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2348, temp.u32);
	// bl 0x82bef368
	ctx.lr = 0x82824080;
	sub_82BEF368(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lfs f5,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r31,780
	ctx.r11.s64 = ctx.r31.s64 + 780;
	// lfs f4,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// lfs f3,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,-29768(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29768);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f1,408(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f5,780(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 780, temp.u32);
	// stfs f4,784(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// stfs f3,788(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// lfs f0,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f2,208(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f13,216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f12,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,1288(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1288, temp.u32);
	// stfs f11,1292(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1292, temp.u32);
	// stfs f10,1296(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1296, temp.u32);
	// stfs f31,2352(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2352, temp.u32);
	// lfs f9,1076(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,784(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,1080(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,788(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f4,1072(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f7,f7
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lfs f3,780(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f0,f4,f3
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f13,f2,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fabs f0,f11
	ctx.f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// bgt cr6,0x8282412c
	if (ctx.cr6.gt) goto loc_8282412C;
	// stfs f30,1300(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
	// b 0x82824168
	goto loc_82824168;
loc_8282412C:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,12492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12492);
	// lfs f12,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x8282414c
	if (ctx.cr6.eq) goto loc_8282414C;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82824154
	goto loc_82824154;
loc_8282414C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,29760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29760);
	ctx.f13.f64 = double(temp.f32);
loc_82824154:
	// fdivs f11,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fdivs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// stfs f8,1300(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1300, temp.u32);
loc_82824168:
	// stw r25,13192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13192, ctx.r25.u32);
	// stw r23,13180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13180, ctx.r23.u32);
	// stw r22,13184(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13184, ctx.r22.u32);
	// stw r24,13188(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13188, ctx.r24.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82218a34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824188"))) PPC_WEAK_FUNC(sub_82824188);
PPC_FUNC_IMPL(__imp__sub_82824188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,412(r9)
	PPC_STORE_U32(ctx.r9.u32 + 412, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282419C"))) PPC_WEAK_FUNC(sub_8282419C);
PPC_FUNC_IMPL(__imp__sub_8282419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828241A0"))) PPC_WEAK_FUNC(sub_828241A0);
PPC_FUNC_IMPL(__imp__sub_828241A0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,13188(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13188);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r6,24(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82824204
	if (ctx.cr6.eq) goto loc_82824204;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828241fc
	if (ctx.cr6.eq) goto loc_828241FC;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828241f4
	if (ctx.cr6.eq) goto loc_828241F4;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824208
	goto loc_82824208;
loc_828241F4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82824208
	goto loc_82824208;
loc_828241FC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82824208
	goto loc_82824208;
loc_82824204:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82824208:
	// lwz r11,116(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824234
	if (ctx.cr6.eq) goto loc_82824234;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282422c
	if (ctx.cr6.eq) goto loc_8282422C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82824238
	if (!ctx.cr6.eq) goto loc_82824238;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824238
	goto loc_82824238;
loc_8282422C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82824238
	goto loc_82824238;
loc_82824234:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82824238:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82824250
	if (!ctx.cr6.eq) goto loc_82824250;
	// stw r4,116(r5)
	PPC_STORE_U32(ctx.r5.u32 + 116, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82824250:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82824280
	if (ctx.cr6.eq) goto loc_82824280;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82824278
	if (ctx.cr6.eq) goto loc_82824278;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82824270
	if (ctx.cr6.eq) goto loc_82824270;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824284
	goto loc_82824284;
loc_82824270:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82824284
	goto loc_82824284;
loc_82824278:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82824284
	goto loc_82824284;
loc_82824280:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82824284:
	// lwz r11,44(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828242b0
	if (ctx.cr6.eq) goto loc_828242B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828242a8
	if (ctx.cr6.eq) goto loc_828242A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828242b4
	if (!ctx.cr6.eq) goto loc_828242B4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828242b4
	goto loc_828242B4;
loc_828242A8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828242b4
	goto loc_828242B4;
loc_828242B0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828242B4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828242c8
	if (!ctx.cr6.eq) goto loc_828242C8;
	// stw r4,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828242C8:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828242f8
	if (ctx.cr6.eq) goto loc_828242F8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828242f0
	if (ctx.cr6.eq) goto loc_828242F0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828242e8
	if (ctx.cr6.eq) goto loc_828242E8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x828242fc
	goto loc_828242FC;
loc_828242E8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828242fc
	goto loc_828242FC;
loc_828242F0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828242fc
	goto loc_828242FC;
loc_828242F8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828242FC:
	// lwz r11,184(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824328
	if (ctx.cr6.eq) goto loc_82824328;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824320
	if (ctx.cr6.eq) goto loc_82824320;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282432c
	if (!ctx.cr6.eq) goto loc_8282432C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282432c
	goto loc_8282432C;
loc_82824320:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8282432c
	goto loc_8282432C;
loc_82824328:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8282432C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82824340
	if (!ctx.cr6.eq) goto loc_82824340;
	// stw r4,184(r5)
	PPC_STORE_U32(ctx.r5.u32 + 184, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82824340:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82824370
	if (ctx.cr6.eq) goto loc_82824370;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82824368
	if (ctx.cr6.eq) goto loc_82824368;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82824360
	if (ctx.cr6.eq) goto loc_82824360;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824374
	goto loc_82824374;
loc_82824360:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82824374
	goto loc_82824374;
loc_82824368:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82824374
	goto loc_82824374;
loc_82824370:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82824374:
	// lwz r11,84(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828243a0
	if (ctx.cr6.eq) goto loc_828243A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824398
	if (ctx.cr6.eq) goto loc_82824398;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828243a4
	if (!ctx.cr6.eq) goto loc_828243A4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828243a4
	goto loc_828243A4;
loc_82824398:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x828243a4
	goto loc_828243A4;
loc_828243A0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828243A4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828243b8
	if (!ctx.cr6.eq) goto loc_828243B8;
	// stw r4,84(r5)
	PPC_STORE_U32(ctx.r5.u32 + 84, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828243B8:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828243e8
	if (ctx.cr6.eq) goto loc_828243E8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828243e0
	if (ctx.cr6.eq) goto loc_828243E0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828243d8
	if (ctx.cr6.eq) goto loc_828243D8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x828243ec
	goto loc_828243EC;
loc_828243D8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828243ec
	goto loc_828243EC;
loc_828243E0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828243ec
	goto loc_828243EC;
loc_828243E8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828243EC:
	// lwz r11,120(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824418
	if (ctx.cr6.eq) goto loc_82824418;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824410
	if (ctx.cr6.eq) goto loc_82824410;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282441c
	if (!ctx.cr6.eq) goto loc_8282441C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282441c
	goto loc_8282441C;
loc_82824410:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8282441c
	goto loc_8282441C;
loc_82824418:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8282441C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82824430
	if (!ctx.cr6.eq) goto loc_82824430;
	// stw r4,120(r5)
	PPC_STORE_U32(ctx.r5.u32 + 120, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82824430:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82824460
	if (ctx.cr6.eq) goto loc_82824460;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82824458
	if (ctx.cr6.eq) goto loc_82824458;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82824450
	if (ctx.cr6.eq) goto loc_82824450;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824464
	goto loc_82824464;
loc_82824450:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82824464
	goto loc_82824464;
loc_82824458:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82824464
	goto loc_82824464;
loc_82824460:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82824464:
	// lwz r11,136(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824490
	if (ctx.cr6.eq) goto loc_82824490;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824488
	if (ctx.cr6.eq) goto loc_82824488;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82824494
	if (!ctx.cr6.eq) goto loc_82824494;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824494
	goto loc_82824494;
loc_82824488:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82824494
	goto loc_82824494;
loc_82824490:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82824494:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828244a8
	if (!ctx.cr6.eq) goto loc_828244A8;
	// stw r4,136(r5)
	PPC_STORE_U32(ctx.r5.u32 + 136, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_828244A8:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x828244d8
	if (ctx.cr6.eq) goto loc_828244D8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x828244d0
	if (ctx.cr6.eq) goto loc_828244D0;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x828244c8
	if (ctx.cr6.eq) goto loc_828244C8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x828244dc
	goto loc_828244DC;
loc_828244C8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828244dc
	goto loc_828244DC;
loc_828244D0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828244dc
	goto loc_828244DC;
loc_828244D8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828244DC:
	// lwz r11,164(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824508
	if (ctx.cr6.eq) goto loc_82824508;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824500
	if (ctx.cr6.eq) goto loc_82824500;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282450c
	if (!ctx.cr6.eq) goto loc_8282450C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282450c
	goto loc_8282450C;
loc_82824500:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8282450c
	goto loc_8282450C;
loc_82824508:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8282450C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82824520
	if (!ctx.cr6.eq) goto loc_82824520;
	// stw r4,164(r5)
	PPC_STORE_U32(ctx.r5.u32 + 164, ctx.r4.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82824520:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82824550
	if (ctx.cr6.eq) goto loc_82824550;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82824548
	if (ctx.cr6.eq) goto loc_82824548;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82824540
	if (ctx.cr6.eq) goto loc_82824540;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824554
	goto loc_82824554;
loc_82824540:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82824554
	goto loc_82824554;
loc_82824548:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82824554
	goto loc_82824554;
loc_82824550:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82824554:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824580
	if (ctx.cr6.eq) goto loc_82824580;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824578
	if (ctx.cr6.eq) goto loc_82824578;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82824584
	if (!ctx.cr6.eq) goto loc_82824584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824584
	goto loc_82824584;
loc_82824578:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82824584
	goto loc_82824584;
loc_82824580:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82824584:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824598"))) PPC_WEAK_FUNC(sub_82824598);
PPC_FUNC_IMPL(__imp__sub_82824598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-30332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30332);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f13,68(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x828245c8
	if (ctx.cr6.gt) goto loc_828245C8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_828245C8:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828245D0"))) PPC_WEAK_FUNC(sub_828245D0);
PPC_FUNC_IMPL(__imp__sub_828245D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828245E4"))) PPC_WEAK_FUNC(sub_828245E4);
PPC_FUNC_IMPL(__imp__sub_828245E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828245E8"))) PPC_WEAK_FUNC(sub_828245E8);
PPC_FUNC_IMPL(__imp__sub_828245E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lwz r11,-29532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29532);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828245F8"))) PPC_WEAK_FUNC(sub_828245F8);
PPC_FUNC_IMPL(__imp__sub_828245F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282460C"))) PPC_WEAK_FUNC(sub_8282460C);
PPC_FUNC_IMPL(__imp__sub_8282460C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82824610"))) PPC_WEAK_FUNC(sub_82824610);
PPC_FUNC_IMPL(__imp__sub_82824610) {
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

__attribute__((alias("__imp__sub_82824624"))) PPC_WEAK_FUNC(sub_82824624);
PPC_FUNC_IMPL(__imp__sub_82824624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82824628"))) PPC_WEAK_FUNC(sub_82824628);
PPC_FUNC_IMPL(__imp__sub_82824628) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x82824648
	if (!ctx.cr6.eq) goto loc_82824648;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82824648:
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824654"))) PPC_WEAK_FUNC(sub_82824654);
PPC_FUNC_IMPL(__imp__sub_82824654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82824658"))) PPC_WEAK_FUNC(sub_82824658);
PPC_FUNC_IMPL(__imp__sub_82824658) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282466C"))) PPC_WEAK_FUNC(sub_8282466C);
PPC_FUNC_IMPL(__imp__sub_8282466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82824670"))) PPC_WEAK_FUNC(sub_82824670);
PPC_FUNC_IMPL(__imp__sub_82824670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r4,140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 140, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824684"))) PPC_WEAK_FUNC(sub_82824684);
PPC_FUNC_IMPL(__imp__sub_82824684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82824688"))) PPC_WEAK_FUNC(sub_82824688);
PPC_FUNC_IMPL(__imp__sub_82824688) {
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
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,144(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 144, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 148, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 152, temp.u32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,124(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 124, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,128(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 128, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,132(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 132, temp.u32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,60(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 64, temp.u32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,68(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828246E0"))) PPC_WEAK_FUNC(sub_828246E0);
PPC_FUNC_IMPL(__imp__sub_828246E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f13,176(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f12,180(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824708"))) PPC_WEAK_FUNC(sub_82824708);
PPC_FUNC_IMPL(__imp__sub_82824708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,29760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29760);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-30400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30400);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lfs f11,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsel f10,f11,f11,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// lfs f9,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsel f7,f8,f0,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f4,f6,f9,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f5.f64));
	// stfs f4,52(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824754"))) PPC_WEAK_FUNC(sub_82824754);
PPC_FUNC_IMPL(__imp__sub_82824754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82824758"))) PPC_WEAK_FUNC(sub_82824758);
PPC_FUNC_IMPL(__imp__sub_82824758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,216(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824770"))) PPC_WEAK_FUNC(sub_82824770);
PPC_FUNC_IMPL(__imp__sub_82824770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,224(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824788"))) PPC_WEAK_FUNC(sub_82824788);
PPC_FUNC_IMPL(__imp__sub_82824788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,356(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828247A0"))) PPC_WEAK_FUNC(sub_828247A0);
PPC_FUNC_IMPL(__imp__sub_828247A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,284(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828247B8"))) PPC_WEAK_FUNC(sub_828247B8);
PPC_FUNC_IMPL(__imp__sub_828247B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828247D0"))) PPC_WEAK_FUNC(sub_828247D0);
PPC_FUNC_IMPL(__imp__sub_828247D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,228(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828247E8"))) PPC_WEAK_FUNC(sub_828247E8);
PPC_FUNC_IMPL(__imp__sub_828247E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,180(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824800"))) PPC_WEAK_FUNC(sub_82824800);
PPC_FUNC_IMPL(__imp__sub_82824800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,252(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824818"))) PPC_WEAK_FUNC(sub_82824818);
PPC_FUNC_IMPL(__imp__sub_82824818) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r10,256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 256, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824830"))) PPC_WEAK_FUNC(sub_82824830);
PPC_FUNC_IMPL(__imp__sub_82824830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,256(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 256);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824848"))) PPC_WEAK_FUNC(sub_82824848);
PPC_FUNC_IMPL(__imp__sub_82824848) {
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

__attribute__((alias("__imp__sub_82824860"))) PPC_WEAK_FUNC(sub_82824860);
PPC_FUNC_IMPL(__imp__sub_82824860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,5
	ctx.r10.s64 = ctx.r5.s64 + 5;
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

__attribute__((alias("__imp__sub_82824880"))) PPC_WEAK_FUNC(sub_82824880);
PPC_FUNC_IMPL(__imp__sub_82824880) {
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

__attribute__((alias("__imp__sub_82824898"))) PPC_WEAK_FUNC(sub_82824898);
PPC_FUNC_IMPL(__imp__sub_82824898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,212(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828248B0"))) PPC_WEAK_FUNC(sub_828248B0);
PPC_FUNC_IMPL(__imp__sub_828248B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828248C8"))) PPC_WEAK_FUNC(sub_828248C8);
PPC_FUNC_IMPL(__imp__sub_828248C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r5,5
	ctx.r10.s64 = ctx.r5.s64 + 5;
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

__attribute__((alias("__imp__sub_828248E8"))) PPC_WEAK_FUNC(sub_828248E8);
PPC_FUNC_IMPL(__imp__sub_828248E8) {
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

__attribute__((alias("__imp__sub_82824900"))) PPC_WEAK_FUNC(sub_82824900);
PPC_FUNC_IMPL(__imp__sub_82824900) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,196(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824918"))) PPC_WEAK_FUNC(sub_82824918);
PPC_FUNC_IMPL(__imp__sub_82824918) {
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
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824960
	if (ctx.cr6.eq) goto loc_82824960;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824958
	if (ctx.cr6.eq) goto loc_82824958;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82824964
	if (!ctx.cr6.eq) goto loc_82824964;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824964
	goto loc_82824964;
loc_82824958:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82824964
	goto loc_82824964;
loc_82824960:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82824964:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828249a4
	if (ctx.cr6.eq) goto loc_828249A4;
	// lwz r11,116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824998
	if (ctx.cr6.eq) goto loc_82824998;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824990
	if (ctx.cr6.eq) goto loc_82824990;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282499c
	if (!ctx.cr6.eq) goto loc_8282499C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282499c
	goto loc_8282499C;
loc_82824990:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x8282499c
	goto loc_8282499C;
loc_82824998:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8282499C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828249b0
	if (!ctx.cr6.eq) goto loc_828249B0;
loc_828249A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828249B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828249BC"))) PPC_WEAK_FUNC(sub_828249BC);
PPC_FUNC_IMPL(__imp__sub_828249BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828249C0"))) PPC_WEAK_FUNC(sub_828249C0);
PPC_FUNC_IMPL(__imp__sub_828249C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828249D8"))) PPC_WEAK_FUNC(sub_828249D8);
PPC_FUNC_IMPL(__imp__sub_828249D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,248(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828249F0"))) PPC_WEAK_FUNC(sub_828249F0);
PPC_FUNC_IMPL(__imp__sub_828249F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,404(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824A08"))) PPC_WEAK_FUNC(sub_82824A08);
PPC_FUNC_IMPL(__imp__sub_82824A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824A34"))) PPC_WEAK_FUNC(sub_82824A34);
PPC_FUNC_IMPL(__imp__sub_82824A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82824A38"))) PPC_WEAK_FUNC(sub_82824A38);
PPC_FUNC_IMPL(__imp__sub_82824A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,396(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824A50"))) PPC_WEAK_FUNC(sub_82824A50);
PPC_FUNC_IMPL(__imp__sub_82824A50) {
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
	// lwz r11,204(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824ab4
	if (ctx.cr6.eq) goto loc_82824AB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824aac
	if (ctx.cr6.eq) goto loc_82824AAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82824aa4
	if (ctx.cr6.eq) goto loc_82824AA4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82824ab8
	goto loc_82824AB8;
loc_82824AA4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82824ab8
	goto loc_82824AB8;
loc_82824AAC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82824ab8
	goto loc_82824AB8;
loc_82824AB4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82824AB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82824b24
	if (ctx.cr6.eq) goto loc_82824B24;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824ae8
	if (ctx.cr6.eq) goto loc_82824AE8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824ae0
	if (ctx.cr6.eq) goto loc_82824AE0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82824aec
	if (!ctx.cr6.eq) goto loc_82824AEC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824aec
	goto loc_82824AEC;
loc_82824AE0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82824aec
	goto loc_82824AEC;
loc_82824AE8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82824AEC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x82824AF8;
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
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x82824b54
	goto loc_82824B54;
loc_82824B24:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804410
	ctx.lr = 0x82824B2C;
	sub_82804410(ctx, base);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82824B54:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_82824B70"))) PPC_WEAK_FUNC(sub_82824B70);
PPC_FUNC_IMPL(__imp__sub_82824B70) {
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
	// lwz r11,204(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824bd4
	if (ctx.cr6.eq) goto loc_82824BD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824bcc
	if (ctx.cr6.eq) goto loc_82824BCC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82824bc4
	if (ctx.cr6.eq) goto loc_82824BC4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82824bd8
	goto loc_82824BD8;
loc_82824BC4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82824bd8
	goto loc_82824BD8;
loc_82824BCC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82824bd8
	goto loc_82824BD8;
loc_82824BD4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82824BD8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82824c44
	if (ctx.cr6.eq) goto loc_82824C44;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824c08
	if (ctx.cr6.eq) goto loc_82824C08;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824c00
	if (ctx.cr6.eq) goto loc_82824C00;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82824c0c
	if (!ctx.cr6.eq) goto loc_82824C0C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824c0c
	goto loc_82824C0C;
loc_82824C00:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82824c0c
	goto loc_82824C0C;
loc_82824C08:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82824C0C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804180
	ctx.lr = 0x82824C18;
	sub_82804180(ctx, base);
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
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
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x82824c74
	goto loc_82824C74;
loc_82824C44:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82804180
	ctx.lr = 0x82824C4C;
	sub_82804180(ctx, base);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82824C74:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_82824C90"))) PPC_WEAK_FUNC(sub_82824C90);
PPC_FUNC_IMPL(__imp__sub_82824C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,192(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824CA8"))) PPC_WEAK_FUNC(sub_82824CA8);
PPC_FUNC_IMPL(__imp__sub_82824CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lfs f0,208(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824CC0"))) PPC_WEAK_FUNC(sub_82824CC0);
PPC_FUNC_IMPL(__imp__sub_82824CC0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-31945
	ctx.r11.s64 = -2093547520;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// addi r5,r11,-29532
	ctx.r5.s64 = ctx.r11.s64 + -29532;
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r10,13180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13180);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r30,13188(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13188);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82824d2c
	if (ctx.cr6.eq) goto loc_82824D2C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82824d24
	if (ctx.cr6.eq) goto loc_82824D24;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82824d1c
	if (ctx.cr6.eq) goto loc_82824D1C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824d30
	goto loc_82824D30;
loc_82824D1C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82824d30
	goto loc_82824D30;
loc_82824D24:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82824d30
	goto loc_82824D30;
loc_82824D2C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82824D30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82825158
	if (ctx.cr6.eq) goto loc_82825158;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824d6c
	if (ctx.cr6.eq) goto loc_82824D6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824d64
	if (ctx.cr6.eq) goto loc_82824D64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82824d5c
	if (ctx.cr6.eq) goto loc_82824D5C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82824d70
	goto loc_82824D70;
loc_82824D5C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82824d70
	goto loc_82824D70;
loc_82824D64:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824d70
	goto loc_82824D70;
loc_82824D6C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82824D70:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82824da0
	if (ctx.cr6.eq) goto loc_82824DA0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82824d98
	if (ctx.cr6.eq) goto loc_82824D98;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82824d90
	if (ctx.cr6.eq) goto loc_82824D90;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824da4
	goto loc_82824DA4;
loc_82824D90:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82824da4
	goto loc_82824DA4;
loc_82824D98:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82824da4
	goto loc_82824DA4;
loc_82824DA0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82824DA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82824ea4
	if (ctx.cr6.eq) goto loc_82824EA4;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824de4
	if (ctx.cr6.eq) goto loc_82824DE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824ddc
	if (ctx.cr6.eq) goto loc_82824DDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82824dd4
	if (ctx.cr6.eq) goto loc_82824DD4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82824de8
	goto loc_82824DE8;
loc_82824DD4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82824de8
	goto loc_82824DE8;
loc_82824DDC:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824de8
	goto loc_82824DE8;
loc_82824DE4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82824DE8:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82824e18
	if (ctx.cr6.eq) goto loc_82824E18;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82824e10
	if (ctx.cr6.eq) goto loc_82824E10;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82824e08
	if (ctx.cr6.eq) goto loc_82824E08;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824e1c
	goto loc_82824E1C;
loc_82824E08:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82824e1c
	goto loc_82824E1C;
loc_82824E10:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82824e1c
	goto loc_82824E1C;
loc_82824E18:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82824E1C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82824e98
	if (ctx.cr6.eq) goto loc_82824E98;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824e58
	if (ctx.cr6.eq) goto loc_82824E58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824e50
	if (ctx.cr6.eq) goto loc_82824E50;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82824e48
	if (ctx.cr6.eq) goto loc_82824E48;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82824e5c
	goto loc_82824E5C;
loc_82824E48:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82824e5c
	goto loc_82824E5C;
loc_82824E50:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824e5c
	goto loc_82824E5C;
loc_82824E58:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82824E5C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82824e8c
	if (ctx.cr6.eq) goto loc_82824E8C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82824e84
	if (ctx.cr6.eq) goto loc_82824E84;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82824e7c
	if (ctx.cr6.eq) goto loc_82824E7C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824e90
	goto loc_82824E90;
loc_82824E7C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82824e90
	goto loc_82824E90;
loc_82824E84:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82824e90
	goto loc_82824E90;
loc_82824E8C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82824E90:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82824eb0
	if (!ctx.cr6.eq) goto loc_82824EB0;
loc_82824E98:
	// stw r4,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r4.u32);
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// b 0x82824ea8
	goto loc_82824EA8;
loc_82824EA4:
	// stw r4,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r4.u32);
loc_82824EA8:
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82824EB0:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824ee4
	if (ctx.cr6.eq) goto loc_82824EE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824edc
	if (ctx.cr6.eq) goto loc_82824EDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82824ed4
	if (ctx.cr6.eq) goto loc_82824ED4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82824ee8
	goto loc_82824EE8;
loc_82824ED4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82824ee8
	goto loc_82824EE8;
loc_82824EDC:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824ee8
	goto loc_82824EE8;
loc_82824EE4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82824EE8:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82824f18
	if (ctx.cr6.eq) goto loc_82824F18;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82824f10
	if (ctx.cr6.eq) goto loc_82824F10;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82824f08
	if (ctx.cr6.eq) goto loc_82824F08;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824f1c
	goto loc_82824F1C;
loc_82824F08:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82824f1c
	goto loc_82824F1C;
loc_82824F10:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82824f1c
	goto loc_82824F1C;
loc_82824F18:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82824F1C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82824f30
	if (!ctx.cr6.eq) goto loc_82824F30;
	// stw r4,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r4.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82824F30:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82824f64
	if (ctx.cr6.eq) goto loc_82824F64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824f5c
	if (ctx.cr6.eq) goto loc_82824F5C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82824f54
	if (ctx.cr6.eq) goto loc_82824F54;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82824f68
	goto loc_82824F68;
loc_82824F54:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82824f68
	goto loc_82824F68;
loc_82824F5C:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824f68
	goto loc_82824F68;
loc_82824F64:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82824F68:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82824f98
	if (ctx.cr6.eq) goto loc_82824F98;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82824f90
	if (ctx.cr6.eq) goto loc_82824F90;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82824f88
	if (ctx.cr6.eq) goto loc_82824F88;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82824f9c
	goto loc_82824F9C;
loc_82824F88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82824f9c
	goto loc_82824F9C;
loc_82824F90:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82824f9c
	goto loc_82824F9C;
loc_82824F98:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82824F9C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82824fb0
	if (!ctx.cr6.eq) goto loc_82824FB0;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82824FB0:
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82825048
	if (ctx.cr6.eq) goto loc_82825048;
	// addi r9,r31,304
	ctx.r9.s64 = ctx.r31.s64 + 304;
	// li r8,5
	ctx.r8.s64 = 5;
loc_82824FC4:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82824ff4
	if (ctx.cr6.eq) goto loc_82824FF4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82824fec
	if (ctx.cr6.eq) goto loc_82824FEC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82824fe4
	if (ctx.cr6.eq) goto loc_82824FE4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82824ff8
	goto loc_82824FF8;
loc_82824FE4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82824ff8
	goto loc_82824FF8;
loc_82824FEC:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82824ff8
	goto loc_82824FF8;
loc_82824FF4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82824FF8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82825024
	if (ctx.cr6.eq) goto loc_82825024;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282501c
	if (ctx.cr6.eq) goto loc_8282501C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82825028
	if (!ctx.cr6.eq) goto loc_82825028;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82825028
	goto loc_82825028;
loc_8282501C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82825028
	goto loc_82825028;
loc_82825024:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82825028:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8282503c
	if (!ctx.cr6.eq) goto loc_8282503C;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_8282503C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82824fc4
	if (!ctx.cr0.eq) goto loc_82824FC4;
loc_82825048:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282507c
	if (ctx.cr6.eq) goto loc_8282507C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82825074
	if (ctx.cr6.eq) goto loc_82825074;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8282506c
	if (ctx.cr6.eq) goto loc_8282506C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82825080
	goto loc_82825080;
loc_8282506C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82825080
	goto loc_82825080;
loc_82825074:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82825080
	goto loc_82825080;
loc_8282507C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82825080:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x828250b0
	if (ctx.cr6.eq) goto loc_828250B0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x828250a8
	if (ctx.cr6.eq) goto loc_828250A8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x828250a0
	if (ctx.cr6.eq) goto loc_828250A0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828250b4
	goto loc_828250B4;
loc_828250A0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x828250b4
	goto loc_828250B4;
loc_828250A8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x828250b4
	goto loc_828250B4;
loc_828250B0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_828250B4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828250cc
	if (!ctx.cr6.eq) goto loc_828250CC;
	// stw r4,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r4.u32);
	// stw r4,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r4.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_828250CC:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82825100
	if (ctx.cr6.eq) goto loc_82825100;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828250f8
	if (ctx.cr6.eq) goto loc_828250F8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828250f0
	if (ctx.cr6.eq) goto loc_828250F0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82825104
	goto loc_82825104;
loc_828250F0:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82825104
	goto loc_82825104;
loc_828250F8:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x82825104
	goto loc_82825104;
loc_82825100:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82825104:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82825134
	if (ctx.cr6.eq) goto loc_82825134;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8282512c
	if (ctx.cr6.eq) goto loc_8282512C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82825124
	if (ctx.cr6.eq) goto loc_82825124;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82825138
	goto loc_82825138;
loc_82825124:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82825138
	goto loc_82825138;
loc_8282512C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82825138
	goto loc_82825138;
loc_82825134:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82825138:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bne cr6,0x8282515c
	if (!ctx.cr6.eq) goto loc_8282515C;
	// stw r4,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r4.u32);
	// stw r4,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r4.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82825158:
	// li r3,1000
	ctx.r3.s64 = 1000;
loc_8282515C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825168"))) PPC_WEAK_FUNC(sub_82825168);
PPC_FUNC_IMPL(__imp__sub_82825168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r9,-29532
	ctx.r7.s64 = ctx.r9.s64 + -29532;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-29532(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lwz r9,48(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// lwz r11,344(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828251c8
	if (ctx.cr6.eq) goto loc_828251C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828251c0
	if (ctx.cr6.eq) goto loc_828251C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828251b8
	if (ctx.cr6.eq) goto loc_828251B8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828251cc
	goto loc_828251CC;
loc_828251B8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828251cc
	goto loc_828251CC;
loc_828251C0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x828251cc
	goto loc_828251CC;
loc_828251C8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_828251CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82825338
	if (ctx.cr6.eq) goto loc_82825338;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82825298
	if (ctx.cr6.eq) goto loc_82825298;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82825338
	if (!ctx.cr6.eq) goto loc_82825338;
	// lwz r10,132(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x828252cc
	if (ctx.cr6.eq) goto loc_828252CC;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82825200
	if (ctx.cr6.eq) goto loc_82825200;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82825338
	if (!ctx.cr6.eq) goto loc_82825338;
loc_82825200:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82825228
	if (ctx.cr6.eq) goto loc_82825228;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82825220
	if (ctx.cr6.eq) goto loc_82825220;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282522c
	if (!ctx.cr6.eq) goto loc_8282522C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282522c
	goto loc_8282522C;
loc_82825220:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8282522c
	goto loc_8282522C;
loc_82825228:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8282522C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82825248
	if (ctx.cr6.eq) goto loc_82825248;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82825338
	goto loc_82825338;
loc_82825248:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82825338
	goto loc_82825338;
loc_8282525C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82825268
	goto loc_82825268;
loc_82825264:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82825268:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82825284
	if (ctx.cr6.eq) goto loc_82825284;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82825338
	goto loc_82825338;
loc_82825284:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82825338
	goto loc_82825338;
loc_82825298:
	// lwz r10,132(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828252ec
	if (ctx.cr6.eq) goto loc_828252EC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828252cc
	if (ctx.cr6.eq) goto loc_828252CC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82825200
	if (ctx.cr6.eq) goto loc_82825200;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x828252ec
	if (ctx.cr6.eq) goto loc_828252EC;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x828252ec
	if (ctx.cr6.eq) goto loc_828252EC;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82825338
	if (!ctx.cr6.eq) goto loc_82825338;
loc_828252CC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82825264
	if (ctx.cr6.eq) goto loc_82825264;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282525c
	if (ctx.cr6.eq) goto loc_8282525C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82825268
	if (!ctx.cr6.eq) goto loc_82825268;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82825268
	goto loc_82825268;
loc_828252EC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82825314
	if (ctx.cr6.eq) goto loc_82825314;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282530c
	if (ctx.cr6.eq) goto loc_8282530C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82825318
	if (!ctx.cr6.eq) goto loc_82825318;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82825318
	goto loc_82825318;
loc_8282530C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82825318
	goto loc_82825318;
loc_82825314:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82825318:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82825328
	if (ctx.cr6.eq) goto loc_82825328;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8282532c
	goto loc_8282532C;
loc_82825328:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8282532C:
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
loc_82825338:
	// stfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
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

__attribute__((alias("__imp__sub_82825360"))) PPC_WEAK_FUNC(sub_82825360);
PPC_FUNC_IMPL(__imp__sub_82825360) {
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
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828253a8
	if (ctx.cr6.eq) goto loc_828253A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828253a0
	if (ctx.cr6.eq) goto loc_828253A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828253ac
	if (!ctx.cr6.eq) goto loc_828253AC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828253ac
	goto loc_828253AC;
loc_828253A0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828253ac
	goto loc_828253AC;
loc_828253A8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828253AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828253ec
	if (ctx.cr6.eq) goto loc_828253EC;
	// lwz r11,344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828253e0
	if (ctx.cr6.eq) goto loc_828253E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828253d8
	if (ctx.cr6.eq) goto loc_828253D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828253e4
	if (!ctx.cr6.eq) goto loc_828253E4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828253e4
	goto loc_828253E4;
loc_828253D8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828253e4
	goto loc_828253E4;
loc_828253E0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828253E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828253f8
	if (!ctx.cr6.eq) goto loc_828253F8;
loc_828253EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_828253F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825404"))) PPC_WEAK_FUNC(sub_82825404);
PPC_FUNC_IMPL(__imp__sub_82825404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82825408"))) PPC_WEAK_FUNC(sub_82825408);
PPC_FUNC_IMPL(__imp__sub_82825408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x82825428
	if (!ctx.cr6.eq) goto loc_82825428;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82825434
	if (ctx.cr6.eq) goto loc_82825434;
loc_82825428:
	// lfs f0,380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_82825434:
	// lfs f0,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825440"))) PPC_WEAK_FUNC(sub_82825440);
PPC_FUNC_IMPL(__imp__sub_82825440) {
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
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r8,r9,-29532
	ctx.r8.s64 = ctx.r9.s64 + -29532;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,-29532(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29532);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r11,128(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828254b4
	if (ctx.cr6.eq) goto loc_828254B4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828254ac
	if (ctx.cr6.eq) goto loc_828254AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828254a4
	if (ctx.cr6.eq) goto loc_828254A4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x828254b8
	goto loc_828254B8;
loc_828254A4:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x828254b8
	goto loc_828254B8;
loc_828254AC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x828254b8
	goto loc_828254B8;
loc_828254B4:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_828254B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82825504
	if (ctx.cr6.eq) goto loc_82825504;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828254e8
	if (ctx.cr6.eq) goto loc_828254E8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828254e0
	if (ctx.cr6.eq) goto loc_828254E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828254ec
	if (!ctx.cr6.eq) goto loc_828254EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828254ec
	goto loc_828254EC;
loc_828254E0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x828254ec
	goto loc_828254EC;
loc_828254E8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828254EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82804410
	ctx.lr = 0x828254F8;
	sub_82804410(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_82825504:
	// stfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_8282553C"))) PPC_WEAK_FUNC(sub_8282553C);
PPC_FUNC_IMPL(__imp__sub_8282553C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82825540"))) PPC_WEAK_FUNC(sub_82825540);
PPC_FUNC_IMPL(__imp__sub_82825540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x82825560
	if (!ctx.cr6.eq) goto loc_82825560;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8282556c
	if (ctx.cr6.eq) goto loc_8282556C;
loc_82825560:
	// lfs f0,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_8282556C:
	// lfs f0,220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825578"))) PPC_WEAK_FUNC(sub_82825578);
PPC_FUNC_IMPL(__imp__sub_82825578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bne cr6,0x82825598
	if (!ctx.cr6.eq) goto loc_82825598;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x828255a4
	if (ctx.cr6.eq) goto loc_828255A4;
loc_82825598:
	// lfs f0,364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
loc_828255A4:
	// lfs f0,156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828255B0"))) PPC_WEAK_FUNC(sub_828255B0);
PPC_FUNC_IMPL(__imp__sub_828255B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,29744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29744);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lfs f0,388(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,-4012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4012);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x828255e8
	if (!ctx.cr6.gt) goto loc_828255E8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// blr 
	return;
loc_828255E8:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// blr 
	return;
}

